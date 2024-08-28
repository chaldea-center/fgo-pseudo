void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_40151360(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct RestrictionEntity_array *RestrictionList_39279860; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  const MethodInfo *v16; // x4

  if ( (byte_4A09D83 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&eventId);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A09D83 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v11);
  }
  RestrictionList_39279860 = QuestRestrictionMaster__getRestrictionList_39279860(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0LL);
  this->fields.restrictionEntityList = RestrictionList_39279860;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.restrictionEntityList,
    (int32_t)RestrictionList_39279860,
    v13,
    v14);
  QuestRestrictionInfo__Setup(this, v15, questId, questPhase, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_40160884(
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
  int32_t v14; // w3
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  const MethodInfo *v25; // x4
  __int64 v26; // x0

  if ( (byte_4A09D84 & 1) == 0 )
  {
    sub_1B686D4(&QuestRestrictionEntity___TypeInfo, *(_QWORD *)&eventId);
    sub_1B686D4(&RestrictionEntity___TypeInfo, v11);
    byte_4A09D84 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v12 = (struct QuestRestrictionEntity_array *)sub_1B6877C(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v12;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionEntityList, (int32_t)v12, v13, v14);
  if ( overwriteRestiction )
  {
    v15 = sub_1B6877C(RestrictionEntity___TypeInfo, 1LL);
    if ( !v15 )
      sub_1B68930(0LL, v16);
    v17 = v15;
    v18 = sub_1B68810(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v18 )
    {
      v26 = sub_1B68954(0LL);
      sub_1B687FC(v26, 0LL);
    }
    if ( !*(_DWORD *)(v17 + 24) )
      sub_1B68938(v18, v19);
    *(_QWORD *)(v17 + 32) = overwriteRestiction;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)overwriteRestiction, v20, v21);
  }
  else
  {
    v17 = sub_1B6877C(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v17;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.restrictionEntityList, v17, v22, v23);
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

  if ( (byte_4A09DA4 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, isFixedServantPositionRestriction);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B686D4(&Method_System_Linq_Enumerable_Any_int___, v22);
    sub_1B686D4(&Method_System_Linq_Enumerable_Contains_int___, v23);
    sub_1B686D4(&Method_System_Linq_Enumerable_Intersect_int___, v24);
    sub_1B686D4(&Method_System_Collections_Generic_List_bool____get_Count__, v25);
    sub_1B686D4(&Method_System_Collections_Generic_List_bool____get_Item__, v26);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_4A09DA4 = 1;
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
             (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
            (const MethodInfo_2E6F0EC *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v36,
                                  (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v37 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v31,
                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
              (const MethodInfo_2E6F0EC *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v39, (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___) )
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
                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
          (const MethodInfo_2E6F0EC *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v43,
                                (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v45 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v41,
                                       (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0LL) )
  {
LABEL_15:
    sub_1B68930(Instance, v29);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1B68938(Instance, v29);
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
    sub_1B68938(this, *(_QWORD *)&svtId);
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40185536(
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
  if ( (byte_4A09DAD & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B686D4(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                       userServantEntity);
    byte_4A09DAD = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v16, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1B68930(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v17, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1B68938(this, userServantEntity);
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

  if ( (byte_4A09DAC & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4A09DAC = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1B68938(v9, v10);
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
            *(const MethodInfo_349F254 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
    sub_1B68930(v9, v10);
  }
LABEL_19:
  if ( !v8 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Func_object__bool__o *_9__104_0; // x20
  Il2CppObject *v39; // x21
  struct QuestRestrictionInfo___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  QuestRestrictionInfo___c_c *v44; // x8
  System_Func_TSource__TResult__o *_9__104_2; // x20
  Il2CppObject *v46; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  struct QuestRestrictionInfo___c_StaticFields *v49; // x0
  ServantStatusBattleListViewItem_o *p__9__104_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v51; // x8
  QuestRestrictionInfo_SlotInfo_o *v52; // x8
  Il2CppObject *v53; // x21
  struct QuestRestrictionInfo___c_StaticFields *v54; // x0
  System_Collections_Generic_IEnumerable_string__o *v55; // x0

  v8 = this;
  if ( (byte_4A09D96 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v9);
    sub_1B686D4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v10);
    sub_1B686D4(&System_Func_RestrictionEntity__bool__TypeInfo, v11);
    sub_1B686D4(&System_Func_RestrictionEntity__string__TypeInfo, v12);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_0__, v13);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_1__, v14);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_2__, v15);
    sub_1B686D4(&QuestRestrictionInfo___c_TypeInfo, v16);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v17);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v18);
    byte_4A09D96 = 1;
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
      _9__104_2 = (System_Func_TSource__TResult__o *)static_fields->__9__104_2;
      if ( _9__104_2 )
      {
LABEL_61:
        v55 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__104_2,
                                                                    (const MethodInfo_2E7A03C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_61435124((System_String_o *)StringLiteral_43/*"\n"*/, v55, 0LL);
      }
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = QuestRestrictionInfo___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v36->static_fields->__9;
      _9__104_2 = (System_Func_TSource__TResult__o *)sub_1B68920(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__104_2,
        v53,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_2__,
        0LL);
      v54 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v54->__9__104_2 = (struct System_Func_RestrictionEntity__string__o *)_9__104_2;
      p__9__104_2 = (ServantStatusBattleListViewItem_o *)&v54->__9__104_2;
    }
    else
    {
      _9__104_0 = (System_Func_object__bool__o *)static_fields->__9__104_0;
      if ( !_9__104_0 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = QuestRestrictionInfo___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v36->static_fields->__9;
        _9__104_0 = (System_Func_object__bool__o *)sub_1B68920(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__104_0,
          v39,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_0__,
          0LL);
        v40 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v40->__9__104_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__104_0;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v40->__9__104_0, (int32_t)_9__104_0, v41, v42);
      }
      v43 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__104_0,
              (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v44 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v43;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v44 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__104_2 = (System_Func_TSource__TResult__o *)v44->static_fields->__9__104_1;
      if ( _9__104_2 )
        goto LABEL_61;
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = QuestRestrictionInfo___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__104_2 = (System_Func_TSource__TResult__o *)sub_1B68920(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__104_2,
        v46,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_1__,
        0LL);
      v49 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v49->__9__104_1 = (struct System_Func_RestrictionEntity__string__o *)_9__104_2;
      p__9__104_2 = (ServantStatusBattleListViewItem_o *)&v49->__9__104_1;
    }
    sub_1B68678(p__9__104_2, (int32_t)_9__104_2, v47, v48);
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
    sub_1B68930(this, *(_QWORD *)&initPos);
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
      if ( this->fields.fixedSupportPositionRestrictionEntity[2].fields.type >= pos )
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
      sub_1B68938(this, *(_QWORD *)&initPos);
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
      sub_1B68938(this, *(_QWORD *)&svtId);
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
  int64_t Instance; // x0
  __int64 id; // x1
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x22
  int v14; // w8
  unsigned int v15; // w23
  RestrictionMessageEntity_o *v16; // x29
  int32_t frequencyType; // w8
  Il2CppObject *v18; // x21
  UserQuestEntity_o *v19; // x21
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w9
  int v25; // w23
  int32_t v26; // w21
  int32_t *v27; // x29
  int32_t v28; // w8
  Il2CppObject *MasterData_object; // x22
  UserQuestEntity_o *v30; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10

  if ( (byte_4A09DA9 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B686D4(&NetworkManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B686D4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    byte_4A09DA9 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_59;
    max_length = questRestrictionEntityList->max_length;
    v25 = max_length - 1;
    if ( max_length < 1 )
      goto LABEL_57;
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= questRestrictionEntityList->max_length )
LABEL_60:
        sub_1B68938(Instance, id);
      v27 = (int32_t *)questRestrictionEntityList->m_Items[v26];
      if ( !v27 )
        goto LABEL_59;
      v28 = v27[7];
      if ( v28 == 1 )
        break;
      if ( v28 == 2 )
      {
        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_59;
        Instance = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                     (PartyOrganizationUtility_o *)Instance,
                     v27[4],
                     v27[5],
                     v27[6],
                     1,
                     0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_49;
      }
      else if ( v28 == 3 )
      {
        goto LABEL_49;
      }
LABEL_54:
      if ( v25 == v26 )
        goto LABEL_57;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v26;
      if ( !questRestrictionEntityList )
        goto LABEL_59;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_59;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_59;
    Instance = (int64_t)UserQuestMaster__getEntityFromId((UserQuestMaster_o *)MasterData_object, Instance, v27[4], 0LL);
    if ( Instance )
    {
      v30 = (UserQuestEntity_o *)Instance;
      Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( (_DWORD)Instance )
        goto LABEL_54;
      Instance = UserQuestEntity__HasStatus(v30, 16, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_54;
    }
LABEL_49:
    if ( !v10 )
      goto LABEL_59;
    items = v10->fields._items;
    v32 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_59;
    size = v10->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        v26,
        *(const MethodInfo_349F254 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size + 1] = v26;
    }
    goto LABEL_54;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_59;
  v14 = restrictionMessageEntities->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v14 )
        goto LABEL_60;
      v16 = restrictionMessageEntities->m_Items[v15];
      if ( !v16 )
        goto LABEL_59;
      frequencyType = v16->fields.frequencyType;
      if ( frequencyType != 1 )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_59;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v18 )
        goto LABEL_59;
      Instance = (int64_t)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)v18,
                            Instance,
                            this->fields.questId,
                            0LL);
      if ( !Instance )
        goto LABEL_23;
      v19 = (UserQuestEntity_o *)Instance;
      Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( !(_DWORD)Instance )
      {
        Instance = UserQuestEntity__HasStatus(v19, 16, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_23;
      }
LABEL_28:
      v14 = restrictionMessageEntities->max_length;
      if ( (int)++v15 >= v14 )
        goto LABEL_57;
    }
    if ( frequencyType == 2 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_59;
      Instance = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                   (PartyOrganizationUtility_o *)Instance,
                   this->fields.questId,
                   this->fields.questPhase,
                   v16->fields.id,
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
    if ( !v10 )
      goto LABEL_59;
    id = (unsigned int)v16->fields.id;
    v20 = v10->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !v20 )
      goto LABEL_59;
    v22 = v10->fields._size;
    if ( (unsigned int)v22 >= v20->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        id,
        *(const MethodInfo_349F254 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = v22 + 1;
      v20->m_Items[v22 + 1] = id;
    }
    goto LABEL_28;
  }
LABEL_57:
  if ( !v10 )
LABEL_59:
    sub_1B68930(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A09DAA & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, *(_QWORD *)&n);
    byte_4A09DAA = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_20:
        sub_1B68938(this, *(_QWORD *)&n);
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_1B68930(this, *(_QWORD *)&n);
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
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *v8; // x0

  if ( (byte_4A09DC0 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__,
      *(_QWORD *)&messageId);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__,
      v5);
    byte_4A09DC0 = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_3134194 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0LL;
  }
  v8 = this->fields.dialogMessageInfoDictionary;
  if ( !v8 )
    sub_1B68930(0LL, v7);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v8,
                                                       messageId,
                                                       (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  if ( (byte_4A09DC3 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v5);
    byte_4A09DC3 = 1;
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
        sub_1B68938(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_19;
      if ( v10->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1B68930(this, method);
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
  if ( (byte_4A09DC5 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v5);
    byte_4A09DC5 = 1;
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
        sub_1B68938(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_19;
      if ( v10->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1B68930(this, method);
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
  if ( (byte_4A09DC2 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v5);
    byte_4A09DC2 = 1;
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
        sub_1B68938(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_20;
      type = v10->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1B68930(this, method);
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
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v7; // x19
  System_String_o **p_title; // x20
  unsigned int v9; // w21
  __int64 v10; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v12; // x8

  v4 = this;
  if ( (byte_4A09DAB & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&n);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v5);
    byte_4A09DAB = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_21:
        sub_1B68938(this, *(_QWORD *)&n);
      v12 = questRestrictionEntityList->m_Items[n];
      if ( v12 )
      {
        p_title = &v12->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_1B68930(this, *(_QWORD *)&n);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     n,
                                     (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
  if ( !this )
    goto LABEL_20;
  dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
  v7 = this;
  if ( dialogMessageInfoDictionary < 1 )
  {
    p_title = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_title = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= dialogMessageInfoDictionary )
        goto LABEL_21;
      v10 = *((_QWORD *)&v7->fields.eventId + (int)v9);
      if ( !v10 )
        goto LABEL_20;
      this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v10 + 32), 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      dialogMessageInfoDictionary = (int)v7->fields.dialogMessageInfoDictionary;
      if ( (int)++v9 >= dialogMessageInfoDictionary )
        return *p_title;
    }
    p_title = (System_String_o **)(v10 + 32);
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
    sub_1B68938(this, *(_QWORD *)&n);
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_7:
    sub_1B68930(this, n);
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
      sub_1B68930(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= questRestrictionEntityList->max_length )
          sub_1B68938(this, message);
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)message, 0, (int32_t)method, v3);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)message, (int32_t)noticeMessage, (int32_t)method, v3);
  return 1;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A09DB5 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_10268/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v2);
    byte_4A09DB5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A09DB4 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_10269/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, v2);
    byte_4A09DB4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10269/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
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

  if ( (byte_4A09DCB & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4A09DCB = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1B68930(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B68930(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4A09DC8 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4A09DC8 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !v11 )
      sub_1B68930(v14, v15);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v17.fields._current,
      (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_1B68930(fixedMyServantIndividualitiesList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A09DA6 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v13);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A09DA6 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v17 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_1B68930(this, *(_QWORD *)&svtId);
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
    sub_1B68938(this, *(_QWORD *)&svtId);
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A09DA7 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_10267/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, v2);
    byte_4A09DA7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
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

  if ( (byte_4A09DCD & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4A09DCD = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1B68930(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B68930(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4A09DCA & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4A09DCA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !v11 )
      sub_1B68930(v14, v15);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v17.fields._current,
      (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_1B68930(fixedIndividualitiesList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A09DA3 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4A09DA3 = 1;
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
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v7 = 0;
    for ( i = v17; ; v7 += LODWORD(i.fields._current[1].monitor) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1B68930(v8, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    sub_1B68930(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v17; ; v13 += LODWORD(i.fields._current[1].monitor) )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !i.fields._current )
      sub_1B68930(v14, v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v13;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A09DA5 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_10266/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, v2);
    byte_4A09DA5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10266/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
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

  if ( (byte_4A09DA2 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4A09DA2 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v11 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v14 )
          break;
        if ( !v11 )
          sub_1B68930(v14, v15);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v16 )
          break;
        if ( !v11 )
          sub_1B68930(v16, v17);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v18 )
          break;
        if ( !v11 )
          sub_1B68930(v18, v19);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v11 )
    {
      if ( v11->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v11,
                 (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0LL;
    }
LABEL_38:
    sub_1B68930(fixedMyServantIndividualitiesList, v13);
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

  if ( (byte_4A09DA1 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_10271/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, v2);
    byte_4A09DA1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10271/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
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
  if ( (byte_4A09D8D & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionWholeType);
    byte_4A09D8D = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1B68930(this, *(_QWORD *)&restrictionWholeType);
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
        sub_1B68938(this, *(_QWORD *)&restrictionWholeType);
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
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_40168868(
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
  if ( (byte_4A09D8E & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionType);
    byte_4A09D8E = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1B68930(this, *(_QWORD *)&restrictionType);
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
        sub_1B68938(this, *(_QWORD *)&restrictionType);
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
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v56; // w23
  RestrictionWholeEntity_o *v57; // x29
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  int v64; // w8
  void *v65; // x21
  unsigned int v66; // w22
  __int64 v67; // x26
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x0
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0

  if ( (byte_4A09D8B & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v21);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__ToArray__, v22);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v23);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v24);
    sub_1B686D4(&LocalizationManager_TypeInfo, v25);
    sub_1B686D4(&StringLiteral_10241/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v26);
    sub_1B686D4(&StringLiteral_11032/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v27);
    sub_1B686D4(&StringLiteral_11033/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v28);
    sub_1B686D4(&StringLiteral_11029/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v29);
    sub_1B686D4(&StringLiteral_6396/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v30);
    byte_4A09D8B = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6396/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11033/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v35 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_61419468(summary, v35, 0LL);
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
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v41[4] = (Il2CppClass *)summary;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)summary, v36, v37);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_61419468(summary, v35, 0LL);
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
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &v44->obj.klass + v46;
      v31->fields._size = v46 + 1;
      v47[4] = (Il2CppClass *)summary;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)summary, v42, v43);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_61419468(summary, v35, 0LL);
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
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &v50->obj.klass + v52;
      v31->fields._size = v52 + 1;
      v53[4] = (Il2CppClass *)summary;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)summary, v48, v49);
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
                IsNullOrEmpty = System_String__Concat_61419468(summary, v35, 0LL);
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
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &v60->obj.klass + v62;
            v31->fields._size = v62 + 1;
            v63[4] = (Il2CppClass *)summary;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)summary, v58, v59);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v56 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1B68938(IsNullOrEmpty, summary);
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
                            (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_100:
      sub_1B68930(IsNullOrEmpty, summary);
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
            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_6396/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
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
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v71->obj.klass + v73;
            v31->fields._size = v73 + 1;
            v74[4] = (Il2CppClass *)summary;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)summary, v68, v69);
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
                                  (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_40167600(
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
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  signed int max_length; // w8
  unsigned int v44; // w19
  RestrictionEntity_o *v45; // x27
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0

  if ( (byte_4A09D8C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, entities);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__ToArray__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1B686D4(&LocalizationManager_TypeInfo, v21);
    sub_1B686D4(&StringLiteral_10241/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v22);
    sub_1B686D4(&StringLiteral_11033/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v23);
    sub_1B686D4(&StringLiteral_11029/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v24);
    sub_1B686D4(&StringLiteral_6396/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v25);
    byte_4A09D8C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6396/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11033/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
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
  IsNullOrEmpty = System_String__Concat_61419468(name, v27, 0LL);
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
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v36[4] = (Il2CppClass *)name;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)name, v31, v32);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_61419468(name, v27, 0LL);
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
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v28->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)name;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)name, v37, v38);
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
        sub_1B68938(IsNullOrEmpty, name);
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
              IsNullOrEmpty = System_String__Concat_61419468(name, v27, 0LL);
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
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v48->obj.klass + v50;
          v28->fields._size = v50 + 1;
          v51[4] = (Il2CppClass *)name;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)name, v46, v47);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1B68930(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v28 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v28,
                                  (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  int v22; // w9
  unsigned int v23; // w10
  RestrictionEntity_o *v24; // x11
  Il2CppObject *v26; // x8
  Il2CppObject *v27; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4A09DB3 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v7);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v8);
    byte_4A09DB3 = 1;
  }
  entity = 0LL;
  v27 = 0LL;
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
      v14 = 0;
      while ( 1 )
      {
        v15 = slotInfos->max_length;
        if ( v14 >= v15 )
          return (System_String_o *)StringLiteral_1/*""*/;
        if ( v14 >= (unsigned int)v15 )
          goto LABEL_56;
        v16 = slotInfos->m_Items[v14];
        if ( !v16 )
          goto LABEL_55;
        if ( v16->fields.slotType )
        {
          ++v14;
        }
        else
        {
          this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
          if ( !this )
            goto LABEL_55;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                             (System_Collections_Generic_Dictionary_int__object__o *)this,
                                             ++v14,
                                             (const MethodInfo_3134194 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_55;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                               (System_Collections_Generic_Dictionary_int__object__o *)this,
                                               v14,
                                               (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
            if ( !this )
              goto LABEL_55;
            dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
            v18 = this;
            if ( dialogMessageInfoDictionary >= 1 )
            {
              v19 = 0;
              while ( 1 )
              {
                if ( v19 >= dialogMessageInfoDictionary )
                  goto LABEL_56;
                v20 = *((_QWORD *)&v18->fields.eventId + (int)v19);
                if ( !v20 )
                  goto LABEL_55;
                if ( *(_DWORD *)(v20 + 44) && !*(_DWORD *)(v20 + 40) )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_55;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &v27,
                                                     *(_DWORD *)(v20 + 44),
                                                     (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
                dialogMessageInfoDictionary = (int)v18->fields.dialogMessageInfoDictionary;
                if ( (int)++v19 >= dialogMessageInfoDictionary )
                  goto LABEL_37;
              }
              v26 = v27;
              if ( v27 )
                return (System_String_o *)v26[1].monitor;
LABEL_55:
              sub_1B68930(this, method);
            }
          }
        }
LABEL_37:
        slotInfos = v3->fields.slotInfos;
        if ( !slotInfos )
          goto LABEL_55;
      }
    }
    v11 = 0;
    while ( v11 < max_length )
    {
      v12 = restrictionWholeEntities->m_Items[v11];
      if ( !v12 )
        goto LABEL_55;
      if ( v12->fields.type == 3 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_55;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v12->fields.restrictionMessageId,
                                           (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v26 = entity;
          if ( entity )
            return (System_String_o *)v26[1].monitor;
          goto LABEL_55;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
    goto LABEL_56;
  }
  restrictionEntityList = v3->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_55;
  v22 = restrictionEntityList->max_length;
  if ( v22 >= 1 )
  {
    v23 = 0;
    method = 0LL;
    while ( v23 < v22 )
    {
      v24 = restrictionEntityList->m_Items[v23];
      if ( !v24 )
        goto LABEL_55;
      if ( v24->fields.type == 11 )
        method = (const MethodInfo *)v23;
      else
        method = (const MethodInfo *)(unsigned int)method;
      if ( (int)++v23 >= v22 )
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
    }
LABEL_56:
    sub_1B68938(this, method);
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
  __int64 v8; // x1
  Il2CppObject *RestrictedName; // x20
  System_String_o **v10; // x8
  System_String_o *v11; // x0

  if ( (byte_4A09DBC & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, *(_QWORD *)&pos);
    sub_1B686D4(&StringLiteral_10273/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, v7);
    sub_1B686D4(&StringLiteral_10276/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/, v8);
    byte_4A09DBC = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( haveIndividualityServant )
    v10 = (System_String_o **)&StringLiteral_10273/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  else
    v10 = (System_String_o **)&StringLiteral_10276/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
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
  if ( (byte_4A09DD0 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B686D4(
                                       &Method_System_Collections_Generic_List_RestrictionEntity__get_Count__,
                                       method);
    byte_4A09DD0 = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1B68930(this, method);
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
  int32_t v22; // w3
  System_Collections_Generic_List_int__o *v23; // x20
  int v24; // w8
  void *v25; // x19
  unsigned int v26; // w21
  __int64 v27; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x1
  const MethodInfo_2E6F0EC *v31; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v34; // x20
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_4A09DBE & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v5);
    sub_1B686D4(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1B686D4(&Method_System_Linq_Enumerable_Intersect_int___, v7);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass184_0__GetMyServantOrNpcSvtIdList_b__0__, v16);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo, v17);
    byte_4A09DBE = 1;
  }
  v18 = sub_1B68920(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass184_0___ctor((QuestRestrictionInfo___c__DisplayClass184_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_29;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_DWORD *)(v18 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v23 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v18 + 24),
                                        (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1B68938(restrictionSlotDetailDictionary, v20);
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
            (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v24 = *((_DWORD *)v25 + 6);
        if ( (int)++v26 >= v24 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1B68930(restrictionSlotDetailDictionary, v20);
    }
LABEL_15:
    if ( !v23 )
      goto LABEL_29;
    if ( v23->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                  (const MethodInfo_2E68A30 *)Method_System_Linq_Enumerable_Distinct_int___);
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v31 = (const MethodInfo_2E6F0EC *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v37 = System_Linq_Enumerable__Intersect_int_(monitor, v30, v31);
      return System_Linq_Enumerable__ToArray_int_(
               v37,
               (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v34 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v34,
        (Il2CppObject *)v18,
        Method_QuestRestrictionInfo___c__DisplayClass184_0__GetMyServantOrNpcSvtIdList_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v35 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v34,
              (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v35 )
      {
        v36 = v35;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v36[2].monitor;
        v31 = (const MethodInfo_2E6F0EC *)Method_System_Linq_Enumerable_Intersect_int___;
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
  QuestRestrictionInfo___c__DisplayClass198_0_o *v31; // x22
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  System_Collections_Generic_Dictionary_int__object__o *v34; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x2
  _QWORD *v38; // x23
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Int32_array *MyServantOrNpcSvtIdList; // x26
  System_Predicate_object__o *v44; // x24
  Il2CppObject *v45; // x0
  Il2CppObject *v46; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  int32_t MyServantOrSupportTargetPos; // w22
  const MethodInfo *v50; // x2
  _QWORD *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x0
  System_Collections_Generic_List_int__o *v55; // x23
  FollowerInfo_array *QuestFollowerList; // x24
  Il2CppObject *Master_object; // x25
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x26
  int i; // w19
  FollowerInfo_o *v61; // x27
  DataManager_o *v62; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  const MethodInfo *v65; // x3
  System_Int32_array *OverwriteIndividuality; // x0
  const MethodInfo *v67; // x3
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  struct System_Byte_array *masterDataBytes; // x29
  int32_t v70; // w0
  const MethodInfo *v71; // x6
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v72; // x21
  struct System_Byte_array *v73; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v77; // x29
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v78; // x21
  struct System_Byte_array *v79; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v80; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-80h]
  Il2CppObject *v85; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  if ( (byte_4A09DC7 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Array_Empty_int___, npcInfoDictionary);
    sub_1B686D4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B686D4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_1B686D4(&DataManager_TypeInfo, v12);
    sub_1B686D4(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v13);
    sub_1B686D4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v17);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v18);
    sub_1B686D4(&Method_System_Linq_Enumerable_Intersect_int___, v19);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_1B686D4(&Method_System_Linq_Enumerable_Union_int___, v21);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v23);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v27);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__, v29);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo, v30);
    byte_4A09DC7 = 1;
  }
  v85 = 0LL;
  entity = 0LL;
  v31 = (QuestRestrictionInfo___c__DisplayClass198_0_o *)sub_1B68920(QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass198_0___ctor(v31, 0LL);
  if ( !v31 )
    goto LABEL_70;
  v31->fields.index = index;
  v34 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v34,
    (const MethodInfo_31335CC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v34;
  sub_1B68678((ServantStatusBattleListViewItem_o *)npcInfoDictionary, (int32_t)v34, v35, v36);
  v38 = Method_System_Array_Empty_int___;
  v39 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v39 )
  {
    sub_1BBA60C(Method_System_Array_Empty_int___);
    v39 = v38[7];
  }
  v40 = *(_QWORD *)(v39 + 16);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1BBA5B0(v40);
  if ( !*(_DWORD *)(v40 + 224) )
    j_il2cpp_runtime_class_init_0(v40);
  v41 = *(_QWORD *)(v38[7] + 16LL);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1BBA5B0(v41);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v41 + 184);
    v44 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v44,
      (Il2CppObject *)v31,
      Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0LL);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_70;
    v45 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v44,
            (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v45 )
    {
      v46 = v45;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_70;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v48 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v46[2].monitor,
              CollectionList,
              (const MethodInfo_2E6F0EC *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v48,
                                  (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v31->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v31->fields.index, v37);
    if ( !MyServantOrNpcSvtIdList )
    {
      v51 = Method_System_Array_Empty_int___;
      v52 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v52 )
      {
        sub_1BBA60C(Method_System_Array_Empty_int___);
        v52 = v51[7];
      }
      v53 = *(_QWORD *)(v52 + 16);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1BBA5B0(v53);
      if ( !*(_DWORD *)(v53 + 224) )
        j_il2cpp_runtime_class_init_0(v53);
      v54 = *(_QWORD *)(v51[7] + 16LL);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1BBA5B0(v54);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v54 + 184);
    }
    MyServantOrSupportTargetPos = v31->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v50);
  }
  v55 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v55,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_70;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        this->fields.questId,
                        this->fields.questPhase,
                        0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList,
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___),
        !QuestFollowerList) )
  {
LABEL_70:
    sub_1B68930(Instance, v33);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1B68938(Instance, v33);
      v61 = QuestFollowerList->m_Items[i];
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v61 )
        goto LABEL_70;
      Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(v61, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        if ( !v59 )
          goto LABEL_70;
        v62 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                      v59,
                                      &entity,
                                      v61->fields.npcFollowerSvtId,
                                      (const MethodInfo_30E46C0 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
          NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v61, 0, ReturnTypeByQuestId, 0LL);
          Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_40191320(
                                        this,
                                        NpcServantIndividuality,
                                        MyServantOrSupportTargetPos,
                                        v65);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_68;
        }
        else
        {
          if ( !Master_object )
            goto LABEL_70;
          if ( !DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  &v85,
                  v61->fields.npcFollowerSvtId,
                  (const MethodInfo_30E46C0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            goto LABEL_74;
          Instance = (DataManager_o *)v85;
          if ( !v85 )
            goto LABEL_70;
          if ( !NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v85, 0LL) )
            goto LABEL_74;
          Instance = (DataManager_o *)v85;
          if ( !v85 )
            goto LABEL_70;
          OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                     (NpcServantFollowerEntity_o *)v85,
                                     0LL);
          if ( QuestRestrictionInfo__IsRestrictionServantIndividuality_40191320(
                 this,
                 OverwriteIndividuality,
                 MyServantOrSupportTargetPos,
                 v67) )
          {
LABEL_74:
            lookup = v62->fields.lookup;
            masterDataBytes = v62->fields.masterDataBytes;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v87.fields.currentCryptoKey = lookup;
            *(_QWORD *)&v87.fields.fakeValue = masterDataBytes;
            v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v87, 0LL);
            Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                          this,
                                          v70,
                                          (int32_t)v62->fields.saveNameList,
                                          HIDWORD(v62[1].monitor),
                                          MyServantOrSupportTargetPos,
                                          0,
                                          v71);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_68;
          }
        }
        v72 = v62->fields.lookup;
        v73 = v62->fields.masterDataBytes;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v88.fields.currentCryptoKey = v72;
        *(_QWORD *)&v88.fields.fakeValue = v73;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v88, 0LL);
        if ( !v55 )
          goto LABEL_70;
        items = v55->fields._items;
        v75 = Method_System_Collections_Generic_List_int__Add__;
        ++v55->fields._version;
        if ( !items )
          goto LABEL_70;
        size = v55->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v55,
            (int32_t)Instance,
            *(const MethodInfo_349F254 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v55->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Instance;
        }
        v77 = *npcInfoDictionary;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v62->fields.lookup,
                                      0LL);
        if ( !v77 )
          goto LABEL_70;
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                      (System_Collections_Generic_Dictionary_int__object__o *)v77,
                                      (int32_t)Instance,
                                      (const MethodInfo_3134194 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v78 = v62->fields.lookup;
          v79 = v62->fields.masterDataBytes;
          v80 = *npcInfoDictionary;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v89.fields.currentCryptoKey = v78;
          *(_QWORD *)&v89.fields.fakeValue = v79;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v89, 0LL);
          if ( !v80 )
            goto LABEL_70;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)v80,
            (int32_t)Instance,
            (Il2CppObject *)v61,
            (const MethodInfo_3133FA0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
        }
      }
LABEL_68:
      max_length = QuestFollowerList->max_length;
    }
  }
  v81 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v55,
          (const MethodInfo_2E85EA0 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v81,
           (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4A09DBD & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_10278/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/, v8);
    sub_1B686D4(&StringLiteral_10277/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/, v9);
    sub_1B686D4(&StringLiteral_10275/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/, v10);
    sub_1B686D4(&StringLiteral_10274/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/, v11);
    byte_4A09DBD = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10275/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10274/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
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
          sub_1B68938(MyServantOrNpcSvtIdList, v14);
        MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        v18 = v16[v17 + 8];
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        }
        if ( v18 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 860LL) )
          break;
        v15 = v16[6];
        if ( (int)++v17 >= v15 )
          goto LABEL_20;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_10277/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_10278/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
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
  int32_t v12; // w3
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20
  Il2CppClass *klass; // x8

  if ( (byte_4A09DBF & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&index);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass185_0__GetMyServantOrSupportTargetPos_b__0__, v6);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo, v7);
    byte_4A09DBF = 1;
  }
  v8 = sub_1B68920(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass185_0___ctor((QuestRestrictionInfo___c__DisplayClass185_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
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
  v15 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_QuestRestrictionInfo___c__DisplayClass185_0__GetMyServantOrSupportTargetPos_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v9 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v15,
         (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v9 )
    return (int)v9;
  klass = v9[3].klass;
  if ( !klass )
LABEL_14:
    sub_1B68930(v9, v10);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1B68938(v9, v10);
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
    sub_1B68938(this, *(_QWORD *)&pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B68930(this, pos);
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
  const MethodInfo *v14; // x2
  System_String_o *DialogMessage; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4A09DC1 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__,
      *(_QWORD *)&pos);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__,
      v5);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__,
      v6);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__,
      v7);
    sub_1B686D4(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__,
      v8);
    sub_1B686D4(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__,
      v9);
    sub_1B686D4(&StringLiteral_1/*""*/, v10);
    byte_4A09DC1 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1B68930(0LL, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_31343D8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v17,
              (const MethodInfo_327AE94 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v12 )
        break;
      if ( !v17.fields._current.fields.value )
        sub_1B68930(v12, v13);
      if ( LODWORD(v17.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v17.fields._current.fields.key, v14);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v17,
          (const MethodInfo_327AFB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v17,
      (const MethodInfo_327AFB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
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

  if ( (byte_4A09DCC & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4A09DCC = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1B68930(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B68930(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4A09DC9 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4A09DC9 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v10 )
      sub_1B68930(v13, v14);
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)v16.fields._current,
      (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v10 )
LABEL_15:
    sub_1B68930(needStartingIndividualitiesList, v11);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  unsigned __int64 v17; // x24
  __int64 v18; // x25
  ServantStatusBattleListViewItem_o *i; // x21
  int32_t v20; // w22
  Il2CppObject *MasterData_object; // x23
  int32_t maxLimitCount; // w22
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  UserServantCollectionEntity_o *v27; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A09DAE & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    sub_1B686D4(&OptionManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B686D4(&string___TypeInfo, v9);
    byte_4A09DAE = 1;
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
    goto LABEL_37;
  v15 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_1B6877C(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v16 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v12 >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)v12;
    for ( i = (ServantStatusBattleListViewItem_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
    {
      if ( v17 >= *(unsigned int *)(v15 + 24) )
LABEL_38:
        sub_1B68938(FixedServantPositionSvtIdList, v14);
      v20 = *(_DWORD *)(v15 + 32 + 4 * v17);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v20,
              (const MethodInfo_30E4514 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      FixedServantPositionSvtIdList = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)MasterData_object,
              &v27,
              FixedServantPositionSvtIdList,
              v20,
              0LL) )
        goto LABEL_24;
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
LABEL_24:
        maxLimitCount = -1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      FixedServantPositionSvtIdList = OptionManager__GetSpoilerSetting(0LL);
      if ( !entity )
        break;
      v23 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v23, -1, 0LL);
      if ( !v16 )
        break;
      if ( v17 >= v16->max_length )
        goto LABEL_38;
      i->klass = (ServantStatusBattleListViewItem_c *)FixedServantPositionSvtIdList;
      sub_1B68678(i, FixedServantPositionSvtIdList, v24, v25);
      if ( v18 == ++v17 )
        return v16;
    }
LABEL_37:
    sub_1B68930(FixedServantPositionSvtIdList, v14);
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
    sub_1B68938(this, *(_QWORD *)&pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B68930(this, pos);
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
  int32_t v18; // w3
  QuestRestrictionEntity_o *v19; // x1
  __int64 v20; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_object__o *v22; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  System_String_o *v25; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4A09DBB & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&pos);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass181_0__GetRestrictedName_b__0__, v7);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo, v8);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v9);
    byte_4A09DBB = 1;
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
                                         (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
    sub_1B68930(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = sub_1B68920(QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass181_0___ctor((QuestRestrictionInfo___c__DisplayClass181_0_o *)v16, 0LL);
      if ( v15 >= questRestrictionEntityList->max_length )
        break;
      if ( !v16 )
        goto LABEL_29;
      v19 = questRestrictionEntityList->m_Items[v15];
      *(_QWORD *)(v16 + 16) = v19;
      v20 = v16 + 16;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)v19, v17, v18);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v22 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v22,
        (Il2CppObject *)v16,
        Method_QuestRestrictionInfo___c__DisplayClass181_0__GetRestrictedName_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v22,
                                         (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    sub_1B68938(this, *(_QWORD *)&pos);
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
  System_Func_object__object__o *_9__105_0; // x20
  Il2CppObject *v19; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  Il2CppObject *v24; // x0
  System_Collections_Generic_IEnumerable_string__o *v25; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v26; // x8
  QuestRestrictionInfo_SlotInfo_o *v27; // x8

  v4 = this;
  if ( (byte_4A09D97 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_Prepend_string___, *(_QWORD *)&initPos);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v5);
    sub_1B686D4(&System_Func_RestrictionEntity__string__TypeInfo, v6);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__105_0__, v8);
    sub_1B686D4(&QuestRestrictionInfo___c_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v10);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v11);
    byte_4A09D97 = 1;
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
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v26 = v4->fields.slotInfos;
      if ( !v26 )
        goto LABEL_25;
      if ( (unsigned int)v13 >= v26->max_length )
LABEL_26:
        sub_1B68938(this, *(_QWORD *)&initPos);
      v27 = v26->m_Items[v13];
      if ( v27 )
        return System_String__Concat_61430728(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v27->fields.summary,
                 0LL);
    }
LABEL_25:
    sub_1B68930(this, *(_QWORD *)&initPos);
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
  _9__105_0 = (System_Func_object__object__o *)v17->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = QuestRestrictionInfo___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__105_0 = (System_Func_object__object__o *)sub_1B68920(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__105_0,
      v19,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__105_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_RestrictionEntity__string__o *)_9__105_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__105_0,
                                                               (const MethodInfo_2E7A03C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v25 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v23,
                                                              v24,
                                                              (const MethodInfo_2E744A0 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_61435124((System_String_o *)StringLiteral_43/*"\n"*/, v25, 0LL);
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
  System_Func_object__bool__o *_9__106_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A09D98 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, method);
    sub_1B686D4(&System_Func_RestrictionEntity__bool__TypeInfo, v3);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__106_0__, v4);
    sub_1B686D4(&QuestRestrictionInfo___c_TypeInfo, v5);
    byte_4A09D98 = 1;
  }
  v6 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v6 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__bool__o *)v6->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestRestrictionInfo___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_1B68920(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v9,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__106_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__106_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__106_0,
                                                                          (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
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

  if ( (byte_4A09D92 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A09D92 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B68930(Instance, v12);
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

  if ( (byte_4A09DAF & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    byte_4A09DAF = 1;
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
      sub_1B68930(0LL, method);
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
  int v19; // w9
  unsigned int v20; // w10
  RestrictionEntity_o *v21; // x11
  Il2CppObject *v22; // x8
  Il2CppObject *v23; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4A09DB1 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v6);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v7);
    byte_4A09DB1 = 1;
  }
  v23 = 0LL;
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
      v12 = 1;
      while ( 1 )
      {
        this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
        if ( !this )
          goto LABEL_49;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           v12,
                                           (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
        if ( !this )
          goto LABEL_49;
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
          goto LABEL_50;
        v16 = *((_QWORD *)&v14->fields.eventId + (int)v15);
        if ( !v16 )
          goto LABEL_49;
        if ( *(_DWORD *)(v16 + 44) && !*(_DWORD *)(v16 + 40) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &v23,
                                             *(_DWORD *)(v16 + 44),
                                             (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        dialogMessageInfoDictionary = (int)v14->fields.dialogMessageInfoDictionary;
        if ( (int)++v15 >= dialogMessageInfoDictionary )
          goto LABEL_31;
      }
      v22 = v23;
      if ( !v23 )
        goto LABEL_49;
    }
    else
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          goto LABEL_50;
        v11 = restrictionWholeEntities->m_Items[v10];
        if ( !v11 )
          goto LABEL_49;
        if ( v11->fields.restrictionMessageId && v11->fields.type == 3 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &entity,
                                             v11->fields.restrictionMessageId,
                                             (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_16;
      }
      v22 = entity;
      if ( !entity )
        goto LABEL_49;
    }
    return (System_String_o *)v22[1].monitor;
  }
  else
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_49;
    v19 = restrictionEntityList->max_length;
    if ( v19 >= 1 )
    {
      v20 = 0;
      method = 0LL;
      while ( 1 )
      {
        if ( v20 >= v19 )
LABEL_50:
          sub_1B68938(this, method);
        v21 = restrictionEntityList->m_Items[v20];
        if ( !v21 )
          break;
        if ( v21->fields.type == 10 )
          method = (const MethodInfo *)v20;
        else
          method = (const MethodInfo *)(unsigned int)method;
        if ( (int)++v20 >= v19 )
          return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
      }
LABEL_49:
      sub_1B68930(this, method);
    }
    LODWORD(method) = 0;
    return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
  }
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

  if ( (byte_4A09DB0 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    sub_1B686D4(&int_TypeInfo, v3);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_10280/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, v5);
    sub_1B686D4(&StringLiteral_10279/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, v6);
    byte_4A09DB0 = 1;
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
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
    v14 = &v18;
    v18 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
    v14 = &v17;
    v17 = this->fields.servantNumMax;
  }
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v14, v10, v11, v12);
  return System_String__Format(v13, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetServantRarity(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A09D91 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A09D91 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_1B68930(Instance, v8);
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
  __int64 v2; // x1

  if ( (byte_4A09D99 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_10281/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, v2);
    byte_4A09D99 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
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

  if ( (byte_4A09DA8 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, method);
    byte_4A09DA8 = 1;
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
  if ( (byte_4A09D9F & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, isFixMessage);
    sub_1B686D4(&StringLiteral_10283/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, v5);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v6);
    byte_4A09D9F = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10283/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1B68930(this, isFixMessage);
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
          sub_1B68938(this, isFixMessage);
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

  if ( (byte_4A09D9E & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_10282/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, v2);
    byte_4A09D9E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
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
    sub_1B68938(this, *(_QWORD *)&initPos);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B68930(this, initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1B68930(this, method);
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
        sub_1B68938(this, method);
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
    sub_1B68930(this, method);
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

  if ( (byte_4A09DC4 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4A09DC4 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v18;
          ;
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v13 )
        break;
      if ( !v10 )
        sub_1B68930(v13, v14);
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
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v18;
          ;
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v16 )
        break;
      if ( !v10 )
        sub_1B68930(v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v10 )
LABEL_23:
    sub_1B68930(fixedSupportIndividualitiesList, v11);
  return v10->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_40176164(
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
  if ( (byte_4A09DA0 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&num);
    sub_1B686D4(&DataManager_TypeInfo, v7);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v20);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4A09DA0 = 1;
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
  v22 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v37;
          ;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v23 )
        break;
      if ( !v22 )
        sub_1B68930(v23, v24);
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
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v37;
          ;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v26 )
        break;
      if ( !v22 )
        sub_1B68930(v26, v27);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v22 )
    goto LABEL_42;
  if ( v22->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v30 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v30;
  *(_QWORD *)&v40.fields.fakeValue = v29;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v40, 0LL);
  if ( !v28 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v28,
             (int32_t)this,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    v22,
    (const MethodInfo_349FD28 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v38 = v37;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v38,
            (const MethodInfo_3236754 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v38,
        (const MethodInfo_3236750 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v38.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0LL);
    if ( !Entity )
      sub_1B68930(DispLimitCount, v35);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0LL) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v38,
    (const MethodInfo_3236750 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1B68930(this, *(_QWORD *)&num);
  if ( supportPositionList->max_length <= num )
    sub_1B68938(this, *(_QWORD *)&num);
  return !supportPositionList->m_Items[num + 4];
}


bool __fastcall QuestRestrictionInfo__IsMyServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.myServantNumMax > 0;
}


bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestRestrictionInfo___c__DisplayClass176_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v12; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4A09DB6 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__, *(_QWORD *)&pos);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass176_0__IsMyServantOrNpcRestriction_b__0__, v6);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo, v7);
    byte_4A09DB6 = 1;
  }
  v8 = (QuestRestrictionInfo___c__DisplayClass176_0_o *)sub_1B68920(QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass176_0___ctor(v8, 0LL);
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
        sub_1B68938(v9, v10);
      v12 = slotInfos->m_Items[pos - 1];
      if ( v12 )
        return (unsigned int)(v12->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1B68930(v9, v10);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v15 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_QuestRestrictionInfo___c__DisplayClass176_0__IsMyServantOrNpcRestriction_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_34BC8A4 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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
  QuestRestrictionInfo___c__DisplayClass178_0_o *v9; // x21
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

  if ( (byte_4A09DB8 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass178_0__IsNotIndividuality_b__0__, v7);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo, v8);
    byte_4A09DB8 = 1;
  }
  v9 = (QuestRestrictionInfo___c__DisplayClass178_0_o *)sub_1B68920(QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass178_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_23;
  v9->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(this, pos, v12) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                          v9->fields.pos,
                                          (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v13 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v13 >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v13 == v14 )
            sub_1B68938(restrictionSlotDetailDictionary, v11);
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
        sub_1B68930(restrictionSlotDetailDictionary, v11);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v18 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v18,
        (Il2CppObject *)v9,
        Method_QuestRestrictionInfo___c__DisplayClass178_0__IsNotIndividuality_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                          myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v18,
                                          (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
      sub_1B68938(this, *(_QWORD *)&initPos);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1B68930(this, initPos);
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
  System_Func_object__bool__o *_9__96_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A09D90 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___, method);
    sub_1B686D4(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo, v3);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__96_0__, v4);
    sub_1B686D4(&QuestRestrictionInfo___c_TypeInfo, v5);
    byte_4A09D90 = 1;
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
  _9__96_0 = (System_Func_object__bool__o *)v7->static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = QuestRestrictionInfo___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__96_0 = (System_Func_object__bool__o *)sub_1B68920(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__96_0,
      v9,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__96_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__96_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__96_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__96_0, (int32_t)_9__96_0, v11, v12);
  }
  return BasicHelper__Any_object__48452092(
           slotInfos,
           (System_Func_T__bool__o *)_9__96_0,
           (const MethodInfo_2E351FC *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
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
  System_Func_object__bool__o *_9__95_1; // x20
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo_2E351FC *v16; // x2
  QuestRestrictionInfo___c_c *v17; // x0
  Il2CppObject *v18; // x21
  struct QuestRestrictionInfo___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A09D8F & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_Any_RestrictionEntity___, method);
    sub_1B686D4(&Method_BasicHelper_Any_RestrictionWholeEntity___, v3);
    sub_1B686D4(&System_Func_RestrictionEntity__bool__TypeInfo, v4);
    sub_1B686D4(&System_Func_RestrictionWholeEntity__bool__TypeInfo, v5);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_0__, v6);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_1__, v7);
    sub_1B686D4(&QuestRestrictionInfo___c_TypeInfo, v8);
    byte_4A09D8F = 1;
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
    _9__95_1 = (System_Func_object__bool__o *)v9->static_fields->__9__95_1;
    if ( !_9__95_1 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = QuestRestrictionInfo___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__95_1 = (System_Func_object__bool__o *)sub_1B68920(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__95_1,
        v12,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_1__,
        0LL);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__95_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__95_1;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__95_1, (int32_t)_9__95_1, v14, v15);
    }
    v16 = (const MethodInfo_2E351FC *)Method_BasicHelper_Any_RestrictionWholeEntity___;
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
    _9__95_1 = (System_Func_object__bool__o *)v17->static_fields->__9__95_0;
    if ( !_9__95_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = QuestRestrictionInfo___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v17->static_fields->__9;
      _9__95_1 = (System_Func_object__bool__o *)sub_1B68920(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__95_1,
        v18,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_0__,
        0LL);
      v19 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v19->__9__95_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__95_1;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->__9__95_0, (int32_t)_9__95_1, v20, v21);
    }
    v16 = (const MethodInfo_2E351FC *)Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_object__48452092(restrictionWholeEntities, (System_Func_T__bool__o *)_9__95_1, v16);
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
  QuestRestrictionInfo___c__DisplayClass179_0_o *v22; // x24
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

  if ( (byte_4A09DB9 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v17);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v18);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass179_0__IsRestrictionServantIndividuality_b__0__, v20);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo, v21);
    byte_4A09DB9 = 1;
  }
  v22 = (QuestRestrictionInfo___c__DisplayClass179_0_o *)sub_1B68920(QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass179_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_51;
  v22->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(this, pos, v25) )
    goto LABEL_49;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_51;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v22->fields.pos,
                                    (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                                        (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
                  sub_1B68938(Instance, v24);
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
    sub_1B68930(Instance, v24);
  }
  if ( isChkSupport )
    goto LABEL_49;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v33 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v33,
    (Il2CppObject *)v22,
    Method_QuestRestrictionInfo___c__DisplayClass179_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_51;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v33,
                                (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    if ( RestrictionEntity__IsRestriction_39319064(v35, v37, 0LL) )
    {
      LOBYTE(v36) = 1;
      return v36;
    }
LABEL_49:
    LOBYTE(v36) = 0;
  }
  return v36;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_40191320(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestRestrictionInfo___c__DisplayClass180_0_o *v11; // x22
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

  if ( (byte_4A09DBA & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      individuality);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v8);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass180_0__IsRestrictionServantIndividuality_b__0__, v9);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo, v10);
    byte_4A09DBA = 1;
  }
  v11 = (QuestRestrictionInfo___c__DisplayClass180_0_o *)sub_1B68920(QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass180_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  v11->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(this, pos, v14) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v11->fields.pos,
                                        (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1B68938(restrictionSlotDetailDictionary, v13);
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
      sub_1B68930(restrictionSlotDetailDictionary, v13);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v21 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_QuestRestrictionInfo___c__DisplayClass180_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v21,
                                      (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    return RestrictionEntity__IsRestriction_39319064(
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
  return QuestRestrictionInfo__IsRestrictionSlot_40170892(this, ServantIndividuality, initPos, v14);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionSlot_40170892(
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
  if ( (byte_4A09D95 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_Any_int___, svtIndividuality);
    sub_1B686D4(&Method_System_Linq_Enumerable_Intersect_int___, v7);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____get_Count__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____get_Item__, v10);
    this = (QuestRestrictionInfo_o *)sub_1B686D4(
                                       &Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__,
                                       v11);
    byte_4A09D95 = 1;
  }
  v12 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1B68930(this, svtIndividuality);
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
                                         (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v17 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_2E6F0EC *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v17,
                                           (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                           (const MethodInfo_34A1790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                             (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___);
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
                                             (const MethodInfo_34A1790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                               (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1B68938(this, svtIndividuality);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_40170152(
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
  if ( (byte_4A09D93 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&Method_System_Array_Empty_int___, *(_QWORD *)&svtId);
    byte_4A09D93 = 1;
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
      sub_1BBA60C(Method_System_Array_Empty_int___);
      v20 = v19[7];
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1BBA5B0(v21);
    if ( !*(_DWORD *)(v21 + 224) )
      j_il2cpp_runtime_class_init_0(v21);
    v22 = *(_QWORD *)(v19[7] + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1BBA5B0(v22);
    ServantIndividuality = **(System_Int32_array ***)(v22 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_40170424(
           v12,
           &isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           targetType,
           v17);
}


bool __fastcall QuestRestrictionInfo__IsRestriction_40170424(
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
      sub_1B68930(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1B68938(this, isWhole);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_39319064(v18, svtIndividuality, 0LL);
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
bool __fastcall QuestRestrictionInfo__IsRestriction_40171396(
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
  if ( (byte_4A09D94 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&Method_System_Array_Empty_int___, isWhole);
    byte_4A09D94 = 1;
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
      sub_1BBA60C(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1BBA5B0(v26);
    if ( !*(_DWORD *)(v26 + 224) )
      j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1BBA5B0(v27);
    ServantIndividuality = **(System_Int32_array ***)(v27 + 184);
  }
  if ( QuestRestrictionInfo__IsRestriction_40170424(
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
    return QuestRestrictionInfo__IsRestrictionSlot_40170892(v16, ServantIndividuality, initPos, v28);
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
  QuestRestrictionInfo___c__DisplayClass177_0_o *v8; // x21
  _BOOL8 IsMyServantOrNpcRestriction_40188344; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v13; // w9
  QuestRestrictionInfo_SlotInfo_o *v14; // x8
  bool v15; // zf
  Il2CppObject *v16; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4A09DB7 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&pos);
    sub_1B686D4(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__DisplayClass177_0__IsSelectableNormalSupport_b__0__, v6);
    sub_1B686D4(&QuestRestrictionInfo___c__DisplayClass177_0_TypeInfo, v7);
    byte_4A09DB7 = 1;
  }
  v8 = (QuestRestrictionInfo___c__DisplayClass177_0_o *)sub_1B68920(QuestRestrictionInfo___c__DisplayClass177_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass177_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v8->fields.pos = pos;
  IsMyServantOrNpcRestriction_40188344 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(this, pos, v11);
  if ( !IsMyServantOrNpcRestriction_40188344 )
  {
    LOBYTE(v16) = 0;
    return (char)v16;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v18 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v18,
      (Il2CppObject *)v8,
      Method_QuestRestrictionInfo___c__DisplayClass177_0__IsSelectableNormalSupport_b__0__,
      0LL);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v16 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v18,
              (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v16 )
        return (char)v16;
      v15 = LODWORD(v16[2].klass) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1B68930(IsMyServantOrNpcRestriction_40188344, v10);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v13 = v8->fields.pos - 1;
  if ( v13 >= slotInfos->max_length )
    sub_1B68938(IsMyServantOrNpcRestriction_40188344, v10);
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
  void *IsMyServantOrNpcRestriction_40188344; // x0
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

  if ( (byte_4A09DB2 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, v7);
    byte_4A09DB2 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_40188344 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_40188344 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_40188344 + 23) + 156LL);
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
  IsMyServantOrNpcRestriction_40188344 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_40188344 & 1) != 0 )
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
            sub_1B68938(IsMyServantOrNpcRestriction_40188344, *(_QWORD *)&svtId);
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
    sub_1B68930(IsMyServantOrNpcRestriction_40188344, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_40188344 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_40188344 )
    goto LABEL_44;
  v14 = *((_DWORD *)IsMyServantOrNpcRestriction_40188344 + 6);
  if ( v14 < 1 )
    return 1;
  v15 = 0;
  v16 = -v14;
  do
  {
    if ( !(v16 + v15) )
      goto LABEL_43;
    v17 = *((_DWORD *)IsMyServantOrNpcRestriction_40188344 + v15 + 8);
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
  if ( (byte_4A09DC6 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    byte_4A09DC6 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
      sub_1B68938(this, *(_QWORD *)&pos);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1B68930(this, *(_QWORD *)&pos);
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

  if ( (byte_4A09DCF & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B686D4(&Method_System_Linq_Enumerable_Any_int___, v10);
    sub_1B686D4(&Method_System_Linq_Enumerable_Intersect_int___, v11);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____get_Item__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v15);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A09DCF = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          sub_1B68938(Instance, v18);
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
                                               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                       (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_int____get_Item__);
              v27 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v21,
                      (const MethodInfo_2E6F0EC *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v27,
                           (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v24->fields.rangeTypeList )
                goto LABEL_33;
              v28 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v24->fields.rangeTypeList,
                     v25,
                     (const MethodInfo_34A1790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v28,
                       (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___) )
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
                       (const MethodInfo_34A1790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v28,
                        (const MethodInfo_2E571F4 *)Method_System_Linq_Enumerable_Any_int___) )
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
      sub_1B68930(Instance, v18);
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

  if ( (byte_4A09DCE & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_ServantMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    byte_4A09DCE = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1B68930(Master_object, v6);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
LABEL_24:
      sub_1B68938(Master_object, v6);
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
                                      (const MethodInfo_30E4514 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v13) = targetVals->max_length;
    if ( (__int64)++v14 >= (int)v13 )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_40174448(
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  struct System_Int32_array *uniqueIndividualitys; // x26
  __int64 v18; // x8
  ServantEntity_o *v19; // x23
  unsigned __int64 v20; // x27
  int32_t v21; // w24
  __int64 i; // x29
  unsigned __int64 v23; // x21
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  int32_t dispLimitCounta; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A09D9C & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B686D4(&DataManager_TypeInfo, v11);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A09D9C = 1;
  }
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_35;
  dispLimitCounta = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                      (ServantLimitImageMaster_o *)Instance,
                      svtId,
                      dispLimitCount,
                      0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_35:
    sub_1B68930(Instance, v15);
  }
  v18 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (ServantEntity_o *)Instance;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
LABEL_36:
        sub_1B68938(Instance, v15);
      if ( !v19 )
        goto LABEL_35;
      v21 = uniqueIndividualitys->m_Items[v20 + 1];
      if ( ServantEntity__IsIndividuality(v19, limitCount, dispLimitCounta, v21, 0LL) )
        break;
LABEL_31:
      LODWORD(v18) = uniqueIndividualitys->max_length;
      ++v20;
      Instance = 0LL;
      if ( (__int64)v20 >= (int)v18 )
        return (char)Instance;
    }
    for ( i = 8LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      v23 = i - 8;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v23 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 156LL) )
        goto LABEL_31;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_35;
      if ( v23 >= deckSvtIdList->max_length )
        goto LABEL_36;
      v15 = *((unsigned int *)&deckSvtIdList->obj.klass + i);
      if ( (int)v15 >= 1 )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      v15,
                                      (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( !deckLimitCountList )
          goto LABEL_35;
        if ( v23 >= deckLimitCountList->max_length )
          goto LABEL_36;
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( !deckDispLimitCountList )
          goto LABEL_35;
        if ( v23 >= deckDispLimitCountList->max_length )
          goto LABEL_36;
        if ( !Instance )
          goto LABEL_35;
        if ( ServantEntity__IsIndividuality(
               (ServantEntity_o *)Instance,
               *((_DWORD *)&deckLimitCountList->obj.klass + i),
               *((_DWORD *)&deckDispLimitCountList->obj.klass + i),
               v21,
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_40175068(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x24
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v25; // x8
  unsigned __int64 v26; // x25
  int32_t v27; // w26
  int32_t i; // w27
  PartyOrganizationListViewItem_o *v29; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // kr00_16
  int32_t v31; // w0
  Il2CppObject *v32; // x29
  int32_t svtLimitCount; // w23
  DataManager_o *v35; // [xsp+0h] [xbp-80h]
  struct System_Int32_array *v36; // [xsp+8h] [xbp-78h]
  int32_t ServantImageLimitSealAfter; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A09D9D & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v14);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantMaster___, v15);
    sub_1B686D4(&DataManager_TypeInfo, v16);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v18);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4A09D9D = 1;
  }
  entity = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_35;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_35:
    sub_1B68930(Instance, v22);
  }
  v25 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v25 < 1 )
    return 0;
  v26 = 0LL;
  v35 = Instance;
  v36 = uniqueIndividualitys;
  while ( 1 )
  {
    if ( v26 >= (unsigned int)v25 )
      sub_1B68938(Instance, v22);
    if ( !Instance )
      goto LABEL_35;
    v27 = uniqueIndividualitys->m_Items[v26 + 1];
    if ( ServantEntity__IsIndividuality((ServantEntity_o *)Instance, limitCount, ServantImageLimitSealAfter, v27, 0LL) )
      break;
LABEL_31:
    Instance = v35;
    uniqueIndividualitys = v36;
    ++v26;
    LODWORD(v25) = v36->max_length;
    if ( (__int64)v26 >= (int)v25 )
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
      v29 = (PartyOrganizationListViewItem_o *)Instance;
      v30 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v30, 0LL);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v23,
             &entity,
             v31,
             (const MethodInfo_30E4514 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v32 = entity;
        svtLimitCount = v29->fields.svtLimitCount;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v29, 0LL);
        if ( !v32 )
          goto LABEL_35;
        if ( ServantEntity__IsIndividuality((ServantEntity_o *)v32, svtLimitCount, (int32_t)Instance, v27, 0LL) )
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
bool __fastcall QuestRestrictionInfo__IsUniqueServant_40173920(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  signed int v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4A09D9A & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4A09D9A = 1;
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
            sub_1B68930(v7, *(_QWORD *)&svtId);
          if ( v6 >= deckSvtIdList->max_length )
            sub_1B68938(v7, *(_QWORD *)&svtId);
          v9 = deckSvtIdList->m_Items[++v6];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_40174120(
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

  if ( (byte_4A09D9B & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4A09D9B = 1;
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
      v15 = *(_DWORD *)(*(_QWORD *)&Member->fields.classId + 156LL);
      v12 = i < v15;
      if ( i >= v15 )
        break;
      if ( num != i && partyIndex != i )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, i, 0LL)) == 0LL )
          sub_1B68930(Member, *(_QWORD *)&svtId);
        v16 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v16, 0LL) == svtId )
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
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A09D8A & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    sub_1B686D4(&int___TypeInfo, v3);
    byte_4A09D8A = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1B6877C(int___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v5;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList, (int32_t)v5, v6, v7);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x24
  __int64 v7; // x1
  __int64 v8; // x26
  BalanceConfig_c *DispLimitCount; // x0
  unsigned __int64 v10; // x28
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v13; // x21
  struct System_Int32_array *v14; // x29
  __int64 v15; // x22
  __int64 v16; // x23
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v18; // x22
  __int64 v19; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A09D87 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, userDeckEntity);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A09D87 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = 8LL;
    v8 = 1LL - (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v10 = v6 - 8;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v10 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_28;
      if ( v10 >= deckSvtIdList->max_length )
        goto LABEL_27;
      *((_DWORD *)&deckSvtIdList->obj.klass + v6) = 0;
      if ( v8 + v6 != 8 )
      {
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, (int)v6 - 8, 0LL);
        if ( UserServant )
        {
          v13 = UserServant;
          v14 = this->fields.deckSvtIdList;
          v16 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v15 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = v16;
          *(_QWORD *)&v21.fields.fakeValue = v15;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                                v21,
                                                0LL);
          if ( !v14 )
LABEL_28:
            sub_1B68930(DispLimitCount, v7);
          if ( v10 >= v14->max_length )
LABEL_27:
            sub_1B68938(DispLimitCount, v7);
          *((_DWORD *)&v14->obj.klass + v6) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v19 = *(_QWORD *)&v13->fields.limitCount.fields.currentCryptoKey;
            v18 = *(_QWORD *)&v13->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v22.fields.currentCryptoKey = v19;
            *(_QWORD *)&v22.fields.fakeValue = v18;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                                  v22,
                                                  0LL);
            if ( v10 >= deckLimitCountList->max_length )
              goto LABEL_27;
            *((_DWORD *)&deckLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v13, 0, 0LL);
            if ( v10 >= deckDispLimitCountList->max_length )
              goto LABEL_27;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v6;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_40164872(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x24
  __int64 v7; // x1
  __int64 v8; // x26
  BalanceConfig_c *DispLimitCount; // x0
  unsigned __int64 v10; // x28
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v13; // x21
  struct System_Int32_array *v14; // x29
  __int64 v15; // x22
  __int64 v16; // x23
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v18; // x22
  __int64 v19; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A09D88 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, eventDeckEntity);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A09D88 = 1;
  }
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = 8LL;
    v8 = 1LL - (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v10 = v6 - 8;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v10 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_28;
      if ( v10 >= deckSvtIdList->max_length )
        goto LABEL_27;
      *((_DWORD *)&deckSvtIdList->obj.klass + v6) = 0;
      if ( v8 + v6 != 8 )
      {
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, (int)v6 - 8, 0LL);
        if ( UserServant )
        {
          v13 = UserServant;
          v14 = this->fields.deckSvtIdList;
          v16 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v15 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = v16;
          *(_QWORD *)&v21.fields.fakeValue = v15;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                                v21,
                                                0LL);
          if ( !v14 )
LABEL_28:
            sub_1B68930(DispLimitCount, v7);
          if ( v10 >= v14->max_length )
LABEL_27:
            sub_1B68938(DispLimitCount, v7);
          *((_DWORD *)&v14->obj.klass + v6) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v19 = *(_QWORD *)&v13->fields.limitCount.fields.currentCryptoKey;
            v18 = *(_QWORD *)&v13->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v22.fields.currentCryptoKey = v19;
            *(_QWORD *)&v22.fields.fakeValue = v18;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                                  v22,
                                                  0LL);
            if ( v10 >= deckLimitCountList->max_length )
              goto LABEL_27;
            *((_DWORD *)&deckLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v13, 0, 0LL);
            if ( v10 >= deckDispLimitCountList->max_length )
              goto LABEL_27;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v6;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_40165304(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x27
  __int64 i; // x28
  PartyOrganizationListViewItem_o *Member; // x0
  struct System_Int32_array *v12; // x8
  int32_t *v13; // x8
  struct System_Int32_array *deckSvtIdList; // x29
  PartyOrganizationListViewItem_o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23

  if ( (byte_4A09D89 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, partyItem);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A09D89 = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v8 = 0LL;
    v9 = (unsigned int)num;
    for ( i = 32LL; ; i += 4LL )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v8 >= *(int *)(*(_QWORD *)&Member->fields.classId + 156LL) )
        return;
      if ( v9 == v8 )
        break;
      if ( !partyItem )
        goto LABEL_27;
      Member = PartyListViewItem__GetMember(partyItem, v8, 0LL);
      if ( !Member )
        goto LABEL_27;
      deckSvtIdList = this->fields.deckSvtIdList;
      v15 = Member;
      SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                                    SvtId,
                                                    0LL);
      if ( !deckSvtIdList )
LABEL_27:
        sub_1B68930(Member, partyItem);
      if ( v8 >= deckSvtIdList->max_length )
LABEL_28:
        sub_1B68938(Member, partyItem);
      deckSvtIdList->m_Items[v8 + 1] = (int)Member;
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( deckLimitCountList )
      {
        if ( v8 >= deckLimitCountList->max_length )
          goto LABEL_28;
        deckLimitCountList->m_Items[v8 + 1] = v15->fields.svtLimitCount;
      }
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( deckDispLimitCountList )
      {
        Member = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v15, 0LL);
        if ( v8 >= deckDispLimitCountList->max_length )
          goto LABEL_28;
        v13 = (int32_t *)((char *)deckDispLimitCountList + i);
LABEL_24:
        *v13 = (int)Member;
      }
      ++v8;
    }
    v12 = this->fields.deckSvtIdList;
    if ( !v12 )
      goto LABEL_27;
    if ( v12->max_length <= v9 )
      goto LABEL_28;
    LODWORD(Member) = 0;
    v13 = &v12->m_Items[v9 + 1];
    goto LABEL_24;
  }
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
  struct System_String_o *v74; // x20
  int32_t v75; // w1
  QuestRestrictionInfo_o *v76; // x29
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t v81; // w2
  int32_t v82; // w3
  int32_t v83; // w2
  int32_t v84; // w3
  int32_t v85; // w2
  int32_t v86; // w3
  ServantStatusBattleListViewItem_o *p_supportPositionList; // x21
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t v94; // w2
  int32_t v95; // w3
  int32_t v96; // w2
  int32_t v97; // w3
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v99; // x20
  int32_t v100; // w2
  int32_t v101; // w3
  System_Collections_Generic_List_int__o *v102; // x20
  int32_t v103; // w2
  int32_t v104; // w3
  int32_t v105; // w2
  int32_t v106; // w3
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t v109; // w2
  int32_t v110; // w3
  int32_t v111; // w2
  int32_t v112; // w3
  System_Collections_Generic_List_object__o *v113; // x20
  int32_t v114; // w2
  int32_t v115; // w3
  System_Collections_Generic_List_object__o *v116; // x20
  int32_t v117; // w2
  int32_t v118; // w3
  System_Collections_Generic_List_object__o *v119; // x20
  int32_t v120; // w2
  int32_t v121; // w3
  System_Collections_Generic_List_object__o *v122; // x20
  int32_t v123; // w2
  int32_t v124; // w3
  System_Collections_Generic_List_object__o *v125; // x20
  int32_t v126; // w2
  int32_t v127; // w3
  System_Collections_Generic_List_object__o *v128; // x20
  int32_t v129; // w2
  int32_t v130; // w3
  int32_t v131; // w2
  int32_t v132; // w3
  System_Collections_Generic_List_object__o *v133; // x20
  int32_t v134; // w2
  int32_t v135; // w3
  int32_t v136; // w2
  int32_t v137; // w3
  System_Collections_Generic_Dictionary_K__V__o **p_dialogMessageInfoDictionary; // x26
  int32_t v139; // w2
  int32_t v140; // w3
  __int64 Master_object; // x0
  Il2CppObject *monitor_low; // x1
  const MethodInfo *v143; // x4
  const MethodInfo *v144; // x1
  System_Collections_Generic_Dictionary_int__object__o *v145; // x20
  int32_t v146; // w2
  int32_t v147; // w3
  System_Collections_Generic_Dictionary_int__object__o *v148; // x20
  int32_t v149; // w2
  int32_t v150; // w3
  System_Collections_Generic_Dictionary_int__object__o *v151; // x20
  int32_t v152; // w2
  int32_t v153; // w3
  System_Collections_Generic_List_object__o *v154; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v157; // x0
  __int64 v158; // x0
  int32_t v159; // w2
  int32_t v160; // w3
  RestrictionBaseEntity_o *v161; // x8
  Il2CppObject *v162; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int32_t v164; // w2
  int32_t v165; // w3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v168; // w25
  RestrictionWholeEntity_o *v169; // x24
  System_Boolean_array *SetPossiblePosition; // x0
  int32_t v171; // w2
  int32_t v172; // w3
  Il2CppObject *v173; // x23
  int32_t v174; // w0
  int32_t v175; // w2
  int32_t v176; // w3
  System_Collections_Generic_List_object__o *v177; // x23
  int32_t v178; // w2
  int32_t v179; // w3
  struct System_Object_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  __int64 v183; // x1
  Il2CppClass **v184; // x0
  System_Collections_Generic_List_object__o *v185; // x23
  int32_t v186; // w2
  int32_t v187; // w3
  struct System_Object_array *items; // x8
  _QWORD *v189; // x9
  __int64 size; // x10
  __int64 v191; // x1
  Il2CppClass **v192; // x0
  System_Collections_Generic_List_object__o *v193; // x23
  int32_t v194; // w2
  int32_t v195; // w3
  struct System_Object_array *v196; // x8
  _QWORD *v197; // x9
  __int64 v198; // x10
  __int64 v199; // x1
  Il2CppClass **v200; // x0
  Il2CppObject *v201; // x23
  int32_t v202; // w0
  int32_t v203; // w2
  int32_t v204; // w3
  BalanceConfig_c *v205; // x0
  __int64 v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  __int64 v209; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  __int64 v212; // x0
  int32_t v213; // w2
  int32_t v214; // w3
  System_Boolean_array *v215; // x0
  int32_t v216; // w2
  int32_t v217; // w3
  Il2CppObject *v218; // x23
  int32_t v219; // w0
  int32_t v220; // w2
  int32_t v221; // w3
  System_Collections_Generic_List_object__o *v222; // x23
  int32_t v223; // w2
  int32_t v224; // w3
  struct System_Object_array *v225; // x8
  _QWORD *v226; // x9
  __int64 v227; // x10
  __int64 v228; // x1
  Il2CppClass **v229; // x0
  Il2CppObject *v230; // x23
  int32_t v231; // w0
  int32_t v232; // w2
  int32_t v233; // w3
  System_Collections_Generic_List_object__o *v234; // x23
  int32_t v235; // w2
  int32_t v236; // w3
  struct System_Object_array *v237; // x8
  _QWORD *v238; // x9
  __int64 v239; // x10
  __int64 v240; // x1
  Il2CppClass **v241; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v243; // x23
  int32_t v244; // w2
  int32_t v245; // w3
  struct System_Object_array *v246; // x8
  _QWORD *v247; // x9
  __int64 v248; // x10
  __int64 v249; // x1
  Il2CppClass **v250; // x0
  System_Collections_Generic_List_object__o *v251; // x23
  int32_t v252; // w2
  int32_t v253; // w3
  struct System_Object_array *v254; // x8
  _QWORD *v255; // x9
  __int64 v256; // x10
  __int64 v257; // x1
  Il2CppClass **v258; // x0
  int32_t restrictionMessageId; // w2
  int32_t v260; // w2
  int32_t v261; // w3
  struct System_Object_array *v262; // x8
  _QWORD *v263; // x9
  __int64 v264; // x10
  Il2CppClass **v265; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v266; // x23
  QuestRestrictionInfo_o *v267; // x28
  char isAllOutBattle; // w8
  System_Collections_Generic_Dictionary_K__V__o *v269; // x21
  int32_t v270; // w2
  int32_t v271; // w3
  BalanceConfig_c *v272; // x0
  __int64 v273; // x0
  int32_t v274; // w2
  int32_t v275; // w3
  int32_t v276; // w21
  int v277; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v278; // x8
  System_Object_array *v279; // x22
  System_Collections_Generic_List_int__o *v280; // x24
  int v281; // w8
  __int64 v282; // x19
  Il2CppObject *v283; // x23
  struct System_Int32_array *v284; // x8
  _QWORD *v285; // x9
  __int64 v286; // x10
  int32_t monitor_high; // w2
  int32_t v288; // w2
  int32_t v289; // w3
  struct System_Object_array *v290; // x8
  _QWORD *v291; // x9
  __int64 v292; // x10
  Il2CppClass **v293; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v294; // x23
  System_Object_array *v295; // x24
  ServantStatusBattleListViewItem_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v297; // x23
  int32_t v298; // w2
  int32_t v299; // w3
  int v300; // w19
  void **v301; // x0
  int servantNumMax; // w8
  ServantStatusBattleListViewItem_c *v303; // x8
  int32_t v304; // w24
  __int64 v305; // x8
  QuestRestrictionInfo___c_c *v306; // x0
  System_Func_object__bool__o *_9__82_0; // x23
  Il2CppObject *v308; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v310; // w2
  int32_t v311; // w3
  _BOOL4 v312; // w0
  QuestRestrictionInfo___c_c *v313; // x8
  _BOOL4 v314; // w23
  System_Func_object__bool__o *_9__82_1; // x25
  Il2CppObject *v316; // x28
  struct QuestRestrictionInfo___c_StaticFields *v317; // x0
  int32_t v318; // w2
  int32_t v319; // w3
  _BOOL4 v320; // w0
  QuestRestrictionInfo___c_c *v321; // x8
  _BOOL4 v322; // w25
  System_Func_object__bool__o *_9__82_2; // x28
  Il2CppObject *v324; // x27
  struct QuestRestrictionInfo___c_StaticFields *v325; // x0
  int32_t v326; // w2
  int32_t v327; // w3
  ServantStatusBattleListViewItem_c *v328; // x8
  __int64 v329; // x8
  ServantStatusBattleListViewItem_c *v330; // x8
  __int64 v331; // x8
  ServantStatusBattleListViewItem_c *v332; // x8
  __int64 v333; // x8
  int v334; // w8
  unsigned int v335; // w27
  Il2CppObject *v336; // x25
  Il2CppObject *v337; // x8
  ServantStatusBattleListViewItem_c *v338; // x8
  __int64 v339; // x8
  System_Collections_Generic_List_object__o *v340; // x23
  int32_t v341; // w2
  int32_t v342; // w3
  struct System_Object_array *v343; // x8
  _QWORD *v344; // x9
  __int64 v345; // x10
  __int64 v346; // x1
  Il2CppClass **v347; // x0
  ServantStatusBattleListViewItem_c *v348; // x8
  __int64 v349; // x8
  struct System_Int32_array *v350; // x8
  _QWORD *v351; // x9
  __int64 v352; // x10
  System_String_o *monitor; // x23
  ServantStatusBattleListViewItem_c *v354; // x8
  __int64 v355; // x8
  int32_t v356; // w2
  int32_t v357; // w3
  ServantStatusBattleListViewItem_c *v358; // x8
  __int64 v359; // x8
  System_String_o **v360; // x25
  ServantStatusBattleListViewItem_c *v361; // x8
  QuestRestrictionInfo___c_c *v362; // x0
  __int64 v363; // x27
  System_Func_object__bool__o *_9__82_3; // x23
  Il2CppObject *v365; // x25
  struct QuestRestrictionInfo___c_StaticFields *v366; // x0
  int32_t v367; // w2
  int32_t v368; // w3
  ServantStatusBattleListViewItem_c *v369; // x8
  __int64 v370; // x8
  ServantStatusBattleListViewItem_c *v371; // x8
  __int64 v372; // x8
  ServantStatusBattleListViewItem_c *v373; // x8
  __int64 v374; // x8
  System_Object_array *v375; // x0
  int32_t v376; // w2
  int32_t v377; // w3
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v379; // w10
  int v380; // w11
  int v381; // w9
  int v382; // w20
  int32_t v383; // w19
  QuestRestrictionInfo_SlotInfo_o *v384; // x13
  int v385; // w21
  int v386; // w22
  __int64 v387; // x8
  bool HasFlag_39214736; // w0
  bool v389; // w0
  Il2CppObject *Value_int__object; // x0
  int v391; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v393; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v394; // x8
  __int64 v395; // x8
  Il2CppObject *v396; // x20
  int32_t v397; // w0
  int32_t v398; // w2
  int32_t v399; // w3
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v401; // x0
  __int64 v402; // x1
  int v403; // w9
  int v404; // w10
  __int64 v405; // x11
  System_Text_StringBuilder_o *v406; // x20
  System_Text_StringBuilder_o *v407; // x21
  struct RestrictionWholeEntity_array *v408; // x19
  int v409; // w8
  unsigned int v410; // w22
  RestrictionWholeEntity_o *v411; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v414; // w25
  _BOOL4 v415; // w8
  __int64 v416; // x0
  int32_t v417; // w2
  int32_t v418; // w3
  System_String_o *v419; // x19
  System_String_o *v420; // x0
  System_String_o *v421; // x0
  int32_t v422; // w2
  int32_t v423; // w3
  __int64 v424; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+10h] [xbp-190h]
  ServantStatusBattleListViewItem_o *p_svtIdForceBattleList; // [xsp+18h] [xbp-188h]
  ServantStatusBattleListViewItem_o *p_restrictionMessage; // [xsp+20h] [xbp-180h]
  ServantStatusBattleListViewItem_o *p_confirmRestrictionMessage; // [xsp+28h] [xbp-178h]
  struct RestrictionWholeEntity_array *v429; // [xsp+30h] [xbp-170h]
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
  System_Collections_Generic_Dictionary_K__V__o **v444; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v448; // [xsp+C8h] [xbp-D8h]
  ServantStatusBattleListViewItem_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v450; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  ServantStatusBattleListViewItem_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v454; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v455; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v458; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v459; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4A09D85 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1B686D4(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___, v6);
    sub_1B686D4(&Method_BasicHelper_Any_RestrictionSlotEntity___, v7);
    sub_1B686D4(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____, v8);
    sub_1B686D4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMaster_QuestGroupMaster___, v10);
    sub_1B686D4(&Method_DataManager_GetMaster_QuestMaster___, v11);
    sub_1B686D4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v13);
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, v14);
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___, v15);
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionSlotMaster___, v16);
    sub_1B686D4(&Method_DataManager_GetMaster_RestrictionWholeMaster___, v17);
    sub_1B686D4(&DataManager_TypeInfo, v18);
    sub_1B686D4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v19);
    sub_1B686D4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v20);
    sub_1B686D4(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v21);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__, v22);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__, v23);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__, v24);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__, v25);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__, v26);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__, v27);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__, v28);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__, v29);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__, v30);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v31);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__, v32);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v33);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v34);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v35);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__,
      v36);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__,
      v37);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__,
      v38);
    sub_1B686D4(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo, v39);
    sub_1B686D4(&System_Func_RestrictionSlotEntity__bool__TypeInfo, v40);
    sub_1B686D4(&int___TypeInfo, v41);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v42);
    sub_1B686D4(&Method_System_Collections_Generic_List_bool____Add__, v43);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__, v44);
    sub_1B686D4(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__, v45);
    sub_1B686D4(&Method_System_Collections_Generic_List_int____Add__, v46);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v47);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__, v48);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__, v49);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v50);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v51);
    sub_1B686D4(&Method_System_Collections_Generic_List_bool_____ctor__, v52);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__, v53);
    sub_1B686D4(&Method_System_Collections_Generic_List_int_____ctor__, v54);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v55);
    sub_1B686D4(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo, v56);
    sub_1B686D4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v57);
    sub_1B686D4(&System_Collections_Generic_List_bool____TypeInfo, v58);
    sub_1B686D4(&System_Collections_Generic_List_int____TypeInfo, v59);
    sub_1B686D4(&LocalizationManager_TypeInfo, v60);
    sub_1B686D4(&QuestRestrictionInfo_SlotInfo___TypeInfo, v61);
    sub_1B686D4(&QuestRestrictionInfo_SlotInfo_TypeInfo, v62);
    sub_1B686D4(&System_Text_StringBuilder_TypeInfo, v63);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__Setup_b__82_0__, v64);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__Setup_b__82_1__, v65);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__Setup_b__82_2__, v66);
    sub_1B686D4(&Method_QuestRestrictionInfo___c__Setup_b__82_3__, v67);
    sub_1B686D4(&QuestRestrictionInfo___c_TypeInfo, v68);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__,
      v69);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v70);
    sub_1B686D4(&StringLiteral_10270/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v71);
    sub_1B686D4(&StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v72);
    sub_1B686D4(&StringLiteral_1/*""*/, v73);
    byte_4A09D85 = 1;
  }
  v458 = 0LL;
  v459 = 0LL;
  item = 0LL;
  entity = 0LL;
  memset(&v455, 0, sizeof(v455));
  this->fields.isRestriction = 0;
  v74 = (struct System_String_o *)StringLiteral_1/*""*/;
  v75 = (int)StringLiteral_1/*""*/;
  v76 = this;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (ServantStatusBattleListViewItem_o *)&this->fields.restrictionMessage;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.restrictionMessage, v75, questId, questPhase);
  this->fields.confirmRestrictionMessage = v74;
  p_confirmRestrictionMessage = (ServantStatusBattleListViewItem_o *)&this->fields.confirmRestrictionMessage;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.confirmRestrictionMessage, (int32_t)v74, v77, v78);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.supportOnlyRestrictionEntity, 0, v79, v80);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.uniqueSvtRestrictionEntity, 0, v81, v82);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList, 0, v83, v84);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.fixedSupportPositionRestrictionEntity, 0, v85, v86);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (ServantStatusBattleListViewItem_o *)&this->fields.supportPositionList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.supportPositionList, 0, v88, v89);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity, 0, v90, v91);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantNumRestrictionEntity, 0, v92, v93);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.myServantNumRestrictionEntity, 0, v94, v95);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  p_svtIdForceBattleList = (ServantStatusBattleListViewItem_o *)&this->fields.svtIdForceBattleList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.svtIdForceBattleList, 0, v96, v97);
  this->fields.isFatigure = 0;
  p_eventDeckNum = &this->fields.eventDeckNum;
  v76->fields.eventDeckNum = 0;
  *(int32_t *)((char *)p_eventDeckNum + 3) = 0;
  v99 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v99,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v76->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v99;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v76->fields.myServantOrNpcRestrictionEntityList,
    (int32_t)v99,
    v100,
    v101);
  v102 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v102,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  v76->fields.specifiedPositionList = v102;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.specifiedPositionList, (int32_t)v102, v103, v104);
  v76->fields.isNotTransitionSupportList = 0;
  v76->fields.supportInitIndex = 0;
  v76->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.fixedServantPositionRestrictionEntity, 0, v105, v106);
  v76->fields.uniqueIndividualityEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.uniqueIndividualityEntity, 0, v107, v108);
  v76->fields.isAllOutBattle = 0;
  v76->fields.isDataLostBattle = 0;
  v76->fields.allOutBattleGroupNo = -1;
  v76->fields.dataLostBattleId = -1;
  v76->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = (ServantStatusBattleListViewItem_o *)&v76->fields.deckLimitCountList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.deckLimitCountList, 0, v109, v110);
  v76->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = (ServantStatusBattleListViewItem_o *)&v76->fields.deckDispLimitCountList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.deckDispLimitCountList, 0, v111, v112);
  v76->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&v76->fields.isUniqueServant = 0;
  v113 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v113,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v76->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v113;
  p_positionsList = (System_Collections_Generic_List_object__o **)&v76->fields.positionsList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.positionsList, (int32_t)v113, v114, v115);
  v116 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v116,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_int_____ctor__);
  v76->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v116;
  p_fixedIndividualitiesList = (System_Collections_Generic_List_object__o **)&v76->fields.fixedIndividualitiesList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.fixedIndividualitiesList, (int32_t)v116, v117, v118);
  v76->fields.isFixedMyServantPosition = 0;
  v119 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v119,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v76->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v119;
  p_myServantPositionsList = (System_Collections_Generic_List_object__o **)&v76->fields.myServantPositionsList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.myServantPositionsList, (int32_t)v119, v120, v121);
  v122 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v122,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_int_____ctor__);
  v76->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v122;
  p_fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o **)&v76->fields.fixedMyServantIndividualitiesList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v76->fields.fixedMyServantIndividualitiesList,
    (int32_t)v122,
    v123,
    v124);
  v76->fields.isFixedSupportPosition = 0;
  v125 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v125,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_int_____ctor__);
  v76->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v125;
  p_fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o **)&v76->fields.fixedSupportIndividualitiesList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v76->fields.fixedSupportIndividualitiesList,
    (int32_t)v125,
    v126,
    v127);
  v76->fields.isFixedNpcPosition = 0;
  v128 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v128,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_int_____ctor__);
  v76->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v128;
  p_fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o **)&v76->fields.fixedNpcIndividualitiesList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.fixedNpcIndividualitiesList, (int32_t)v128, v129, v130);
  v76->fields.npcPositionList = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.npcPositionList, 0, v131, v132);
  v133 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v133,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_int_____ctor__);
  v76->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v133;
  p_needStartingIndividualitiesList = (System_Collections_Generic_List_object__o **)&v76->fields.needStartingIndividualitiesList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v76->fields.needStartingIndividualitiesList,
    (int32_t)v133,
    v134,
    v135);
  v76->fields.isNeedStarting = 0;
  v76->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&v76->fields.isMyServantOrNpc = 0;
  v76->fields.slotInfos = 0LL;
  p_fields = (ServantStatusBattleListViewItem_o *)&v76->fields;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields, 0, v136, v137);
  v76->fields.dialogMessageInfoDictionary = 0LL;
  p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v76->fields.dialogMessageInfoDictionary;
  v448 = v76;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.dialogMessageInfoDictionary, 0, v139, v140);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_387;
  p_restrictionBaseEntity = &v76->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &v76->fields.restrictionBaseEntity,
         v76->fields.questId,
         v76->fields.questPhase,
         v143) )
  {
    v76->fields.isRestriction = 1;
    v145 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v145,
      (const MethodInfo_31335CC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    v76->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v145;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v76->fields.restrictionSlotDictionary;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v76->fields.restrictionSlotDictionary, (int32_t)v145, v146, v147);
    v148 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v148,
      (const MethodInfo_31335CC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    v76->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v148;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&v76->fields.restrictionSlotDetailDictionary,
      (int32_t)v148,
      v149,
      v150);
    v151 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v151,
      (const MethodInfo_31335CC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    v76->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v151;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&v76->fields.dialogMessageInfoDictionary,
      (int32_t)v151,
      v152,
      v153);
    v154 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v154,
      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)v448->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v448->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2LL, 0LL);
    restrictionBaseEntity = v448->fields.restrictionBaseEntity;
    v448->fields.isNotTransitionSupportList = Master_object & 1;
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
    v448->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v157 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v157 = BalanceConfig_TypeInfo;
      }
      v158 = sub_1B6877C(int___TypeInfo, (unsigned int)v157->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (ServantStatusBattleListViewItem_c *)v158;
      sub_1B68678(p_deckSvtIdList, v158, v159, v160);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32LL, 0LL);
    v161 = v448->fields.restrictionBaseEntity;
    v448->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v161 )
      goto LABEL_387;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v161,
      &v448->fields.overwriteLimitCountSvtIds,
      &v448->fields.overwriteLimitCounts,
      &v448->fields.overwriteLimitCountIconIds,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v162 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( !Master_object )
      goto LABEL_387;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0LL);
    v448->fields.restrictionWholeEntities = Entities;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&v448->fields.restrictionWholeEntities,
      (int32_t)Entities,
      v164,
      v165);
    restrictionWholeEntities = v448->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v448->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_387;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v168 = 0;
      p_needStartingIndividualities = (ServantStatusBattleListViewItem_o *)&v448->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (ServantStatusBattleListViewItem_o *)&v448->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (ServantStatusBattleListViewItem_o *)&v448->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (ServantStatusBattleListViewItem_o *)&v448->fields.fixedNpcIndividualities;
      v429 = v448->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v168 >= max_length )
          goto LABEL_388;
        v169 = restrictionWholeEntities->m_Items[v168];
        if ( v169 )
        {
          switch ( v169->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_387;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0LL);
              v448->fields.allOutBattleGroupNo = Master_object;
              v448->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v169->fields.targetVals,
                                0LL);
              v448->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v185 = *p_positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v169, 0LL);
              if ( !v185 )
                goto LABEL_387;
              items = v185->fields._items;
              v189 = Method_System_Collections_Generic_List_bool____Add__;
              ++v185->fields._version;
              if ( !items )
                goto LABEL_387;
              size = v185->fields._size;
              v191 = Master_object;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v185,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
              }
              else
              {
                v192 = &items->obj.klass + size;
                v185->fields._size = size + 1;
                v192[4] = (Il2CppClass *)v191;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v192 + 4), v191, v186, v187);
              }
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v243 = *p_fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v243 )
                goto LABEL_387;
              Master_object = sub_1B68810(Master_object, int___TypeInfo);
              v246 = v243->fields._items;
              v247 = Method_System_Collections_Generic_List_int____Add__;
              ++v243->fields._version;
              if ( !v246 )
                goto LABEL_387;
              v248 = v243->fields._size;
              v249 = Master_object;
              if ( (unsigned int)v248 >= v246->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v243,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v247[4] + 192LL) + 112LL));
              }
              else
              {
                v250 = &v246->obj.klass + v248;
                v243->fields._size = v248 + 1;
                v250[4] = (Il2CppClass *)v249;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v250 + 4), v249, v244, v245);
              }
              v448->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v193 = *p_myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v169, 0LL);
              if ( !v193 )
                goto LABEL_387;
              v196 = v193->fields._items;
              v197 = Method_System_Collections_Generic_List_bool____Add__;
              ++v193->fields._version;
              if ( !v196 )
                goto LABEL_387;
              v198 = v193->fields._size;
              v199 = Master_object;
              if ( (unsigned int)v198 >= v196->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v193,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v197[4] + 192LL) + 112LL));
              }
              else
              {
                v200 = &v196->obj.klass + v198;
                v193->fields._size = v198 + 1;
                v200[4] = (Il2CppClass *)v199;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v200 + 4), v199, v194, v195);
              }
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v251 = *p_fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v251 )
                goto LABEL_387;
              Master_object = sub_1B68810(Master_object, int___TypeInfo);
              v254 = v251->fields._items;
              v255 = Method_System_Collections_Generic_List_int____Add__;
              ++v251->fields._version;
              if ( !v254 )
                goto LABEL_387;
              v256 = v251->fields._size;
              v257 = Master_object;
              if ( (unsigned int)v256 >= v254->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v251,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v255[4] + 192LL) + 112LL));
              }
              else
              {
                v258 = &v254->obj.klass + v256;
                v251->fields._size = v256 + 1;
                v258[4] = (Il2CppClass *)v257;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v258 + 4), v257, v252, v253);
              }
              v448->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v169, 0LL);
              p_supportPositionList->klass = (ServantStatusBattleListViewItem_c *)SetPossiblePosition;
              sub_1B68678(p_supportPositionList, (int32_t)SetPossiblePosition, v171, v172);
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v173 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedSupportIndividualities->klass = (ServantStatusBattleListViewItem_c *)sub_1B68810(
                                                                                            v173,
                                                                                            int___TypeInfo);
              v174 = sub_1B68810(v173, int___TypeInfo);
              sub_1B68678(p_fixedSupportIndividualities, v174, v175, v176);
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v177 = *p_fixedSupportIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v177 )
                goto LABEL_387;
              Master_object = sub_1B68810(Master_object, int___TypeInfo);
              v180 = v177->fields._items;
              v181 = Method_System_Collections_Generic_List_int____Add__;
              ++v177->fields._version;
              if ( !v180 )
                goto LABEL_387;
              v182 = v177->fields._size;
              v183 = Master_object;
              if ( (unsigned int)v182 >= v180->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v177,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
              }
              else
              {
                v184 = &v180->obj.klass + v182;
                v177->fields._size = v182 + 1;
                v184[4] = (Il2CppClass *)v183;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v184 + 4), v183, v178, v179);
              }
              v448->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v215 = RestrictionWholeEntity__GetSetPossiblePosition(v169, 0LL);
              p_supportPositionList->klass = (ServantStatusBattleListViewItem_c *)v215;
              sub_1B68678(p_supportPositionList, (int32_t)v215, v216, v217);
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v218 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedNpcIndividualities->klass = (ServantStatusBattleListViewItem_c *)sub_1B68810(v218, int___TypeInfo);
              v219 = sub_1B68810(v218, int___TypeInfo);
              sub_1B68678(p_fixedNpcIndividualities, v219, v220, v221);
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v222 = *p_fixedNpcIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v222 )
                goto LABEL_387;
              Master_object = sub_1B68810(Master_object, int___TypeInfo);
              v225 = v222->fields._items;
              v226 = Method_System_Collections_Generic_List_int____Add__;
              ++v222->fields._version;
              if ( !v225 )
                goto LABEL_387;
              v227 = v222->fields._size;
              v228 = Master_object;
              if ( (unsigned int)v227 >= v225->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v222,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v226[4] + 192LL) + 112LL));
              }
              else
              {
                v229 = &v225->obj.klass + v227;
                v222->fields._size = v227 + 1;
                v229[4] = (Il2CppClass *)v228;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v229 + 4), v228, v223, v224);
              }
              v448->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v230 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_needStartingIndividualities->klass = (ServantStatusBattleListViewItem_c *)sub_1B68810(
                                                                                            v230,
                                                                                            int___TypeInfo);
              v231 = sub_1B68810(v230, int___TypeInfo);
              sub_1B68678(p_needStartingIndividualities, v231, v232, v233);
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v234 = *p_needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v234 )
                goto LABEL_387;
              Master_object = sub_1B68810(Master_object, int___TypeInfo);
              v237 = v234->fields._items;
              v238 = Method_System_Collections_Generic_List_int____Add__;
              ++v234->fields._version;
              if ( !v237 )
                goto LABEL_387;
              v239 = v234->fields._size;
              v240 = Master_object;
              if ( (unsigned int)v239 >= v237->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v234,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v238[4] + 192LL) + 112LL));
              }
              else
              {
                v241 = &v237->obj.klass + v239;
                v234->fields._size = v239 + 1;
                v241[4] = (Il2CppClass *)v240;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v241 + 4), v240, v235, v236);
              }
              v448->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (__int64)v169->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v201 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_uniqueIndividualitys->klass = (ServantStatusBattleListViewItem_c *)sub_1B68810(v201, int___TypeInfo);
              v202 = sub_1B68810(v201, int___TypeInfo);
              sub_1B68678(p_uniqueIndividualitys, v202, v203, v204);
              v205 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v205 = BalanceConfig_TypeInfo;
              }
              v206 = sub_1B6877C(int___TypeInfo, (unsigned int)v205->static_fields->DeckMemberMax);
              v448->fields.deckSvtIdList = (struct System_Int32_array *)v206;
              sub_1B68678(p_deckSvtIdList, v206, v207, v208);
              v209 = sub_1B6877C(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v448->fields.deckLimitCountList = (struct System_Int32_array *)v209;
              sub_1B68678(p_deckLimitCountList, v209, v210, v211);
              v212 = sub_1B6877C(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v448->fields.deckDispLimitCountList = (struct System_Int32_array *)v212;
              sub_1B68678(p_deckDispLimitCountList, v212, v213, v214);
              restrictionWholeEntities = v429;
              v448->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v448->fields.isDataLostBattle = 1;
              targetVals = v169->fields.targetVals;
              if ( !targetVals )
                goto LABEL_387;
              if ( !targetVals->max_length )
                goto LABEL_388;
              v448->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_89:
              restrictionMessageId = v169->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_102;
              if ( !v162 )
                goto LABEL_387;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v162,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_102;
              if ( !v154 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v154,
                                entity,
                                (const MethodInfo_34BC608 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_102;
              monitor_low = entity;
              v262 = v154->fields._items;
              v263 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v154->fields._version;
              if ( !v262 )
                goto LABEL_387;
              v264 = v154->fields._size;
              if ( (unsigned int)v264 >= v262->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v154,
                  monitor_low,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
              }
              else
              {
                v265 = &v262->obj.klass + v264;
                v154->fields._size = v264 + 1;
                v265[4] = (Il2CppClass *)monitor_low;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v265 + 4), (int32_t)monitor_low, v260, v261);
              }
              v266 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1B68920(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v266, 0LL);
              if ( !v266 )
                goto LABEL_387;
              v266->fields.restrictionType = v169->fields.type;
              if ( !entity )
                goto LABEL_387;
              Master_object = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_387;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v266,
                (const MethodInfo_3133FA0 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_102:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v168 >= max_length )
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
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_QuestMaster___);
    v267 = v448;
    if ( !Master_object )
      goto LABEL_387;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v459,
      questId,
      (const MethodInfo_30E4514 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v459;
    if ( !v459 )
      goto LABEL_387;
    Master_object = QuestEntity__HasFlag_39214736((QuestEntity_o *)v459, 0x100000LL, questPhase, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v448 )
        goto LABEL_387;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v448->fields.isAllOutBattle;
    }
    v448->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (__int64)v459;
    if ( !v459 )
      goto LABEL_387;
    v448->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_39214736(
                                              (QuestEntity_o *)v459,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_object = (__int64)v459;
    if ( !v459 )
      goto LABEL_387;
    v448->fields.isFatigure = QuestEntity__HasFlag_39214736((QuestEntity_o *)v459, 0x200000LL, questPhase, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_387;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v458, questId, questPhase, 0LL) )
    {
      Master_object = sub_1B6877C(int___TypeInfo, 1LL);
      if ( !v458 )
        goto LABEL_387;
      v269 = (System_Collections_Generic_Dictionary_K__V__o *)Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v458, 0LL);
      if ( !v269 )
        goto LABEL_387;
      if ( !LODWORD(v269->fields._entries) )
        goto LABEL_388;
      v269->fields._count = Master_object;
      p_svtIdForceBattleList->klass = (ServantStatusBattleListViewItem_c *)v269;
      sub_1B68678(p_svtIdForceBattleList, (int32_t)v269, v270, v271);
      Master_object = (__int64)v458;
      if ( !v458 )
        goto LABEL_387;
      v448->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v458, 0LL);
      Master_object = (__int64)v458;
      if ( !v458 )
        goto LABEL_387;
      v448->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v458, 0LL);
    }
    else
    {
      v448->fields.correctionIconId = -1;
    }
    v272 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v272 = BalanceConfig_TypeInfo;
    }
    v273 = sub_1B6877C(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v272->static_fields->DeckMemberMax);
    p_fields->klass = (ServantStatusBattleListViewItem_c *)v273;
    sub_1B68678(p_fields, v273, v274, v275);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_3134128 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_3134128 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v276 = 1;
    v277 = 1;
    v444 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v276 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 156LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_387;
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v276,
                                 0LL);
      if ( !Master_object )
        goto LABEL_387;
      v278 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v279 = (System_Object_array *)Master_object;
      questIdb = v277;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v450 = v278 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_387;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v276,
        &v279->obj,
        (const MethodInfo_3133FA0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v280 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v280,
        (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
      v281 = v279->max_length;
      if ( v281 >= 1 )
      {
        v282 = 0LL;
        while ( (unsigned int)v282 < v281 )
        {
          v283 = v279->m_Items[v282];
          if ( !v283 || !v280 )
            goto LABEL_387;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v280,
                            (int32_t)v283[2].monitor,
                            (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            monitor_low = (Il2CppObject *)LODWORD(v283[2].monitor);
            v284 = v280->fields._items;
            v285 = Method_System_Collections_Generic_List_int__Add__;
            ++v280->fields._version;
            if ( !v284 )
              goto LABEL_387;
            v286 = v280->fields._size;
            if ( (unsigned int)v286 >= v284->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v280,
                (int32_t)monitor_low,
                *(const MethodInfo_349F254 **)(*(_QWORD *)(v285[4] + 192LL) + 112LL));
            }
            else
            {
              v280->fields._size = v286 + 1;
              v284->m_Items[v286 + 1] = (int)monitor_low;
            }
          }
          monitor_high = HIDWORD(v283[2].monitor);
          if ( monitor_high >= 1 )
          {
            if ( !v162 )
              goto LABEL_387;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v162,
                              &item,
                              monitor_high,
                              (const MethodInfo_30E4514 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v154 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v154,
                                item,
                                (const MethodInfo_34BC608 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                monitor_low = item;
                v290 = v154->fields._items;
                v291 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v154->fields._version;
                if ( !v290 )
                  goto LABEL_387;
                v292 = v154->fields._size;
                if ( (unsigned int)v292 >= v290->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v154,
                    monitor_low,
                    *(const MethodInfo_34BC278 **)(*(_QWORD *)(v291[4] + 192LL) + 112LL));
                }
                else
                {
                  v293 = &v290->obj.klass + v292;
                  v154->fields._size = v292 + 1;
                  v293[4] = (Il2CppClass *)monitor_low;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v293 + 4), (int32_t)monitor_low, v288, v289);
                }
                v294 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1B68920(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v294, 0LL);
                if ( !v294 )
                  goto LABEL_387;
                v294->fields.slotNo = v276;
                if ( !item )
                  goto LABEL_387;
                Master_object = (__int64)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_387;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v294,
                  (const MethodInfo_3133FA0 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v281 = v279->max_length;
          if ( (int)++v282 >= v281 )
            goto LABEL_163;
        }
        goto LABEL_388;
      }
LABEL_163:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v280,
                                 0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_387;
      v295 = (System_Object_array *)Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v276,
        (Il2CppObject *)Master_object,
        (const MethodInfo_3133FA0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v297 = (QuestRestrictionInfo_SlotInfo_o *)sub_1B68920(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v297, 0LL);
      if ( !klass )
        goto LABEL_387;
      if ( v297 )
      {
        Master_object = sub_1B68810(v297, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v424 = sub_1B68954(0LL);
          sub_1B687FC(v424, 0LL);
        }
      }
      v300 = v276 - 1;
      if ( (unsigned int)(v276 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_388;
      v301 = &klass->_1.image + v300;
      v301[4] = v297;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v301 + 4), (int32_t)v297, v298, v299);
      servantNumMax = v267->fields.servantNumMax;
      if ( servantNumMax < 1 || v300 < servantNumMax )
      {
        v306 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v306 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__82_0 = (System_Func_object__bool__o *)v306->static_fields->__9__82_0;
        if ( !_9__82_0 )
        {
          if ( !v306->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v306);
            v306 = QuestRestrictionInfo___c_TypeInfo;
          }
          v308 = (Il2CppObject *)v306->static_fields->__9;
          _9__82_0 = (System_Func_object__bool__o *)sub_1B68920(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__82_0, v308, Method_QuestRestrictionInfo___c__Setup_b__82_0__, 0LL);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__82_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_0;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v310, v311);
        }
        v312 = BasicHelper__Any_object__48452092(
                 v279,
                 (System_Func_T__bool__o *)_9__82_0,
                 (const MethodInfo_2E351FC *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v313 = QuestRestrictionInfo___c_TypeInfo;
        v314 = v312;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v313 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__82_1 = (System_Func_object__bool__o *)v313->static_fields->__9__82_1;
        if ( !_9__82_1 )
        {
          if ( !v313->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v313);
            v313 = QuestRestrictionInfo___c_TypeInfo;
          }
          v316 = (Il2CppObject *)v313->static_fields->__9;
          _9__82_1 = (System_Func_object__bool__o *)sub_1B68920(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__82_1, v316, Method_QuestRestrictionInfo___c__Setup_b__82_1__, 0LL);
          v317 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v317->__9__82_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_1;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v317->__9__82_1, (int32_t)_9__82_1, v318, v319);
        }
        v320 = BasicHelper__Any_object__48452092(
                 v279,
                 (System_Func_T__bool__o *)_9__82_1,
                 (const MethodInfo_2E351FC *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v321 = QuestRestrictionInfo___c_TypeInfo;
        v322 = v320;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v321 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__82_2 = (System_Func_object__bool__o *)v321->static_fields->__9__82_2;
        if ( !_9__82_2 )
        {
          if ( !v321->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v321);
            v321 = QuestRestrictionInfo___c_TypeInfo;
          }
          v324 = (Il2CppObject *)v321->static_fields->__9;
          _9__82_2 = (System_Func_object__bool__o *)sub_1B68920(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__82_2, v324, Method_QuestRestrictionInfo___c__Setup_b__82_2__, 0LL);
          v325 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v325->__9__82_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_2;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v325->__9__82_2, (int32_t)_9__82_2, v326, v327);
        }
        Master_object = BasicHelper__Any_object__48452092(
                          v279,
                          (System_Func_T__bool__o *)_9__82_2,
                          (const MethodInfo_2E351FC *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v322 || !v314 || (Master_object & 1) != 0 )
        {
          v267 = v448;
          if ( (v314 || !v322) | Master_object & 1 )
          {
            if ( v314 || v322 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v314 || !v322) )
              {
                if ( ((v314 || v322) & (unsigned int)Master_object & 1) != 0 )
                {
                  v371 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_387;
                  if ( (unsigned int)v300 >= LODWORD(v371->_1.namespaze) )
                    goto LABEL_388;
                  v372 = *((_QWORD *)&v371->_1.byval_arg.data + v300);
                  if ( !v372 )
                    goto LABEL_387;
                  *(_DWORD *)(v372 + 16) = 4;
                  v448->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v373 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v300 >= LODWORD(v373->_1.namespaze) )
                  goto LABEL_388;
                v374 = *((_QWORD *)&v373->_1.byval_arg.data + v300);
                if ( !v374 )
                  goto LABEL_387;
                *(_DWORD *)(v374 + 16) = 3;
                v448->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v330 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v300 >= LODWORD(v330->_1.namespaze) )
                goto LABEL_388;
              v331 = *((_QWORD *)&v330->_1.byval_arg.data + v300);
              if ( !v331 )
                goto LABEL_387;
              *(_DWORD *)(v331 + 16) = 2;
              v448->fields.supportInitIndex = v276;
            }
          }
          else
          {
            v332 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_387;
            if ( (unsigned int)v300 >= LODWORD(v332->_1.namespaze) )
              goto LABEL_388;
            v333 = *((_QWORD *)&v332->_1.byval_arg.data + v300);
            if ( !v333 )
              goto LABEL_387;
            *(_DWORD *)(v333 + 16) = 1;
          }
        }
        else
        {
          v267 = v448;
          v328 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_387;
          if ( (unsigned int)v300 >= LODWORD(v328->_1.namespaze) )
            goto LABEL_388;
          v329 = *((_QWORD *)&v328->_1.byval_arg.data + v300);
          if ( !v329 )
            goto LABEL_387;
          *(_DWORD *)(v329 + 16) = 0;
        }
        if ( !v295 )
          goto LABEL_387;
        v334 = v295->max_length;
        if ( v334 >= 1 )
        {
          v335 = 0;
          while ( v335 < v334 )
          {
            v336 = v295->m_Items[v335];
            if ( !v336 )
              goto LABEL_387;
            if ( !v279->max_length )
              break;
            v337 = v279->m_Items[0];
            if ( !v337 )
              goto LABEL_387;
            if ( LODWORD(v336[1].klass) == LODWORD(v337[2].monitor) )
            {
              v338 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v300 >= LODWORD(v338->_1.namespaze) )
                goto LABEL_388;
              v339 = *((_QWORD *)&v338->_1.byval_arg.data + v300);
              if ( !v339 )
                goto LABEL_387;
              if ( *(_DWORD *)(v339 + 16) <= 2u )
              {
                Master_object = (__int64)v336[2].monitor;
                if ( !Master_object )
                  goto LABEL_387;
                v340 = *(System_Collections_Generic_List_object__o **)(v339 + 24);
                Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
                if ( !v340 )
                  goto LABEL_387;
                Master_object = sub_1B68810(Master_object, int___TypeInfo);
                v343 = v340->fields._items;
                v344 = Method_System_Collections_Generic_List_int____Add__;
                ++v340->fields._version;
                if ( !v343 )
                  goto LABEL_387;
                v345 = v340->fields._size;
                v346 = Master_object;
                if ( (unsigned int)v345 >= v343->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v340,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_34BC278 **)(*(_QWORD *)(v344[4] + 192LL) + 112LL));
                }
                else
                {
                  v347 = &v343->obj.klass + v345;
                  v340->fields._size = v345 + 1;
                  v347[4] = (Il2CppClass *)v346;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v347 + 4), v346, v341, v342);
                }
                v348 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v300 >= LODWORD(v348->_1.namespaze) )
                  goto LABEL_388;
                v349 = *((_QWORD *)&v348->_1.byval_arg.data + v300);
                if ( !v349 )
                  goto LABEL_387;
                Master_object = *(_QWORD *)(v349 + 32);
                if ( !Master_object )
                  goto LABEL_387;
                monitor_low = (Il2CppObject *)LODWORD(v336[3].klass);
                v350 = *(struct System_Int32_array **)(Master_object + 16);
                v351 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v350 )
                  goto LABEL_387;
                v352 = *(int *)(Master_object + 24);
                if ( (unsigned int)v352 >= v350->max_length )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    (int32_t)monitor_low,
                    *(const MethodInfo_34A1A80 **)(*(_QWORD *)(v351[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v352 + 1;
                  v350->m_Items[v352 + 1] = (int)monitor_low;
                }
              }
              if ( LODWORD(v336[2].klass) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0LL);
                monitor = (System_String_o *)Master_object;
              }
              else
              {
                monitor = (System_String_o *)v336[1].monitor;
              }
              v354 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v300 >= LODWORD(v354->_1.namespaze) )
                goto LABEL_388;
              v355 = *((_QWORD *)&v354->_1.byval_arg.data + v300);
              if ( !v355 )
                goto LABEL_387;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v355 + 40), 0LL);
              v358 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v300 >= LODWORD(v358->_1.namespaze) )
                goto LABEL_388;
              v359 = *((_QWORD *)&v358->_1.byval_arg.data + v300);
              if ( !v359 )
                goto LABEL_387;
              v360 = (System_String_o **)(v359 + 40);
              if ( (Master_object & 1) == 0 )
                monitor = System_String__Concat_61430728(*v360, (System_String_o *)StringLiteral_43/*"\n"*/, monitor, 0LL);
              *v360 = monitor;
              sub_1B68678((ServantStatusBattleListViewItem_o *)v360, (int32_t)monitor, v356, v357);
            }
            v334 = v295->max_length;
            if ( (int)++v335 >= v334 )
              goto LABEL_253;
          }
          goto LABEL_388;
        }
LABEL_253:
        v361 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v300 >= LODWORD(v361->_1.namespaze) )
          goto LABEL_388;
        v362 = QuestRestrictionInfo___c_TypeInfo;
        v363 = *((_QWORD *)&v361->_1.byval_arg.data + v300);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v362 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__82_3 = (System_Func_object__bool__o *)v362->static_fields->__9__82_3;
        if ( !_9__82_3 )
        {
          if ( !v362->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v362);
            v362 = QuestRestrictionInfo___c_TypeInfo;
          }
          v365 = (Il2CppObject *)v362->static_fields->__9;
          _9__82_3 = (System_Func_object__bool__o *)sub_1B68920(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__82_3, v365, Method_QuestRestrictionInfo___c__Setup_b__82_3__, 0LL);
          v366 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v366->__9__82_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__82_3;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v366->__9__82_3, (int32_t)_9__82_3, v367, v368);
          v267 = v448;
        }
        Master_object = BasicHelper__Any_object__48452092(
                          v295,
                          (System_Func_T__bool__o *)_9__82_3,
                          (const MethodInfo_2E351FC *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v363 )
          goto LABEL_387;
        *(_BYTE *)(v363 + 48) = (Master_object & 1) == 0;
        v369 = p_fields->klass;
        v304 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v300 >= LODWORD(v369->_1.namespaze) )
          goto LABEL_388;
        v370 = *((_QWORD *)&v369->_1.byval_arg.data + v300);
        if ( !v370 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v444;
        if ( *(_DWORD *)(v370 + 16) == 1 )
        {
          if ( *(_BYTE *)(v370 + 48) )
            v267->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v370 + 49) = v279->max_length != 0;
      }
      else
      {
        v303 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        v304 = questIdb;
        if ( (unsigned int)v300 >= LODWORD(v303->_1.namespaze) )
          goto LABEL_388;
        v305 = *((_QWORD *)&v303->_1.byval_arg.data + v300);
        if ( !v305 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v444;
        *(_DWORD *)(v305 + 16) = 5;
        *(_BYTE *)(v305 + 48) = 0;
      }
      ++v276;
      v277 = v304 & v450;
    }
    if ( !v154
      || (v375 = System_Collections_Generic_List_object___ToArray(
                   v154,
                   (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v267->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v375,
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&v267->fields.restrictionMessageEntities,
            (int32_t)v375,
            v376,
            v377),
          (slotInfos = v267->fields.slotInfos) == 0LL) )
    {
LABEL_387:
      sub_1B68930(Master_object, monitor_low);
    }
    v379 = slotInfos->max_length;
    if ( v379 >= 1 )
    {
      v380 = 0;
      v381 = 0;
      v382 = 0;
      v383 = 0;
      while ( v379 != v380 )
      {
        v384 = slotInfos->m_Items[v380];
        if ( !v384 )
          goto LABEL_387;
        switch ( v384->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v383;
            break;
          case 1:
            ++v382;
            break;
          case 2:
            ++v381;
            break;
          default:
            break;
        }
        if ( v379 == ++v380 )
          goto LABEL_293;
      }
LABEL_388:
      sub_1B68938(Master_object, monitor_low);
    }
    v383 = 0;
    v382 = 0;
    v381 = 0;
LABEL_293:
    if ( v381 == 0 && (v277 & 1) != 0 )
      v267->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_387;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v267->fields.questId,
                               v267->fields.questPhase,
                               0LL);
    if ( !Master_object )
      goto LABEL_387;
    v385 = *(_DWORD *)(Master_object + 24);
    if ( v385 >= 1 )
    {
      v386 = 0;
      while ( v385 != v386 )
      {
        v387 = *(_QWORD *)(Master_object + 8LL * v386 + 32);
        if ( !v387 )
          goto LABEL_387;
        if ( !*(_BYTE *)(v387 + 105) && v385 != ++v386 )
          continue;
        goto LABEL_307;
      }
      goto LABEL_388;
    }
    v386 = 0;
LABEL_307:
    Master_object = (__int64)v459;
    if ( !v459 )
      goto LABEL_387;
    HasFlag_39214736 = QuestEntity__HasFlag_39214736((QuestEntity_o *)v459, 0x10000000LL, questPhase, 0LL);
    v267->fields.isNpcMultipleBattle = HasFlag_39214736;
    if ( !HasFlag_39214736 )
      v267->fields.isNpcMultipleBattle = v386 < v385 && v383 > 0 && v382 > 0;
    Master_object = (__int64)v459;
    if ( !v459 )
      goto LABEL_387;
    v389 = QuestEntity__HasFlag_39214736((QuestEntity_o *)v459, 0x20000000LL, questPhase, 0LL);
    v267->fields.isNpcOnlyBattle = v389;
    if ( !v389 )
      v267->fields.isNpcOnlyBattle = v386 < v385 && v383 == 0 && v382 > 0;
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_2E384C0 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v391 = 2;
      else
        v391 = 1;
      DeckMemberMax = v267->fields.servantNumMax;
      v267->fields.servantNumMin = v391;
      if ( !DeckMemberMax )
      {
        v393 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v393 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v393->static_fields->DeckMemberMax;
        v267->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v267->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v267->fields.isNpcMultipleBattle )
        v267->fields.myServantNumMax = v383;
    }
    else
    {
      v267->fields.myServantNumMax = v383;
      if ( v383 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (__int64)v267->fields.restrictionSlotDetailDictionary;
        v267->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_387;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_3133F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v394 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v394 )
          {
            if ( !(_DWORD)v394 )
              goto LABEL_388;
            v395 = *(_QWORD *)(Master_object + 32);
            if ( !v395 )
              goto LABEL_387;
            Master_object = *(_QWORD *)(v395 + 40);
            if ( !Master_object )
              goto LABEL_387;
            v396 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
            v267->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1B68810(
                                                                                              v396,
                                                                                              int___TypeInfo);
            v397 = sub_1B68810(v396, int___TypeInfo);
            sub_1B68678(
              (ServantStatusBattleListViewItem_o *)&v267->fields.fixedMyServantSingleIndividualities,
              v397,
              v398,
              v399);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_3133C50 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v267->fields.restrictionSlotDictionary;
    v267->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_3133DB0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v454,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_37C1910 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v455 = v454;
    do
    {
      v401 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v455,
               (const MethodInfo_327BB08 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v401 )
        break;
      if ( !v455.fields._currentValue )
        sub_1B68930(v401, v402);
      v403 = (int)v455.fields._currentValue[1].monitor;
      if ( v403 >= 1 )
      {
        v404 = 0;
        while ( 1 )
        {
          if ( v403 == v404 )
            sub_1B68938(v401, v402);
          v405 = *((_QWORD *)&v455.fields._currentValue[2].klass + v404);
          if ( !v405 )
            sub_1B68930(v401, v402);
          if ( *(_DWORD *)(v405 + 28) == 1 )
            break;
          if ( v403 == ++v404 )
            goto LABEL_348;
        }
        v267->fields.isSupportOnly = 0;
        break;
      }
LABEL_348:
      ;
    }
    while ( v267->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v455,
      (const MethodInfo_327BB04 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v406 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v406, 0LL);
    v407 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v407, 0LL);
    v408 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_387;
    v409 = v408->max_length;
    if ( v409 >= 1 )
    {
      v410 = 0;
      while ( 1 )
      {
        if ( v410 >= v409 )
          goto LABEL_388;
        v411 = v408->m_Items[v410];
        if ( !v411 )
          goto LABEL_387;
        Master_object = System_String__IsNullOrEmpty(v411->fields.summary, 0LL);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_377:
        v409 = v408->max_length;
        if ( (int)++v410 >= v409 )
          goto LABEL_378;
      }
      type = v411->fields.type;
      if ( type == 10 || type == 2 )
      {
        v414 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v411->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_387;
          v414 = 1;
          v415 = targetVals2->max_length == 1;
LABEL_365:
          if ( (v415 & v414) != 0 )
          {
            if ( v267->fields.isRestriction )
            {
              if ( !v407 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_60581364(v407, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v407 )
            {
              goto LABEL_387;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_60581364(v407, v411->fields.summary, 0LL);
            v267->fields.isRestriction = 1;
          }
          if ( v414 )
          {
            if ( v267->fields.isRestriction )
            {
              if ( !v406 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_60581364(v406, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v406 )
            {
              goto LABEL_387;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_60581364(v406, v411->fields.summary, 0LL);
            v267->fields.isRestriction = 1;
          }
          goto LABEL_377;
        }
        v414 = 0;
      }
      v415 = 1;
      goto LABEL_365;
    }
LABEL_378:
    if ( !v407 )
      goto LABEL_387;
    Master_object = System_Text_StringBuilder__get_Length(v407, 0LL);
    if ( (int)Master_object >= 1 )
    {
      v416 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v407->klass->vtable._3_ToString.method)(
               v407,
               v407->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (ServantStatusBattleListViewItem_c *)v416;
      sub_1B68678(p_confirmRestrictionMessage, v416, v417, v418);
    }
    if ( !v406 )
      goto LABEL_387;
    if ( System_Text_StringBuilder__get_Length(v406, 0LL) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v419 = LocalizationManager__Get((System_String_o *)StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v420 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v406->klass->vtable._3_ToString.method)(
                                  v406,
                                  v406->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v421 = System_String__Concat_61430728(v419, (System_String_o *)StringLiteral_43/*"\n"*/, v420, 0LL);
      p_restrictionMessage->klass = (ServantStatusBattleListViewItem_c *)v421;
      sub_1B68678(p_restrictionMessage, (int32_t)v421, v422, v423);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(v76, v144);
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
  System_Text_StringBuilder_o *v17; // x20
  System_Text_StringBuilder_o *v18; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  struct RestrictionEntity_array *restrictionEntityList; // x21
  int max_length; // w8
  unsigned int v25; // w22
  struct RestrictionEntity_o *v26; // x26
  BalanceConfig_c *v27; // x0
  struct System_Int32_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Boolean_array *DeckPositionList; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int *targetVals; // x8
  int32_t v35; // w8
  struct System_Int32_array *v36; // x8
  __int64 v37; // x9
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  Il2CppObject *v42; // x24
  int32_t v43; // w0
  int32_t v44; // w2
  int32_t v45; // w3
  BalanceConfig_c *v46; // x0
  struct System_Int32_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Int32_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Int32_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x8
  struct System_Int32_array *v60; // x8
  _BOOL4 isRestriction; // w9
  __int64 v62; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x24
  struct System_Int32_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  struct System_Collections_Generic_List_int__o *v67; // x24
  struct System_Int32_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  struct System_String_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x0
  struct System_String_o *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x0
  __int64 v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  bool HasFlag; // w0
  bool v83; // w0
  struct System_Int32_array *v84; // x20
  int32_t v85; // w2
  int32_t v86; // w3
  bool v87; // w0
  bool HasFlag_39214736; // w0
  bool v89; // w0
  struct System_Int32_array *v90; // x20
  int32_t v91; // w2
  int32_t v92; // w3
  bool v93; // w0
  int32_t v94; // w2
  int32_t v95; // w3
  int32_t v96; // w2
  int32_t v97; // w3
  ServantStatusBattleListViewItem_o *p_totalCostRestrictionEntity; // [xsp+20h] [xbp-D0h]
  ServantStatusBattleListViewItem_o *p_uniqueSvtRestrictionEntity; // [xsp+30h] [xbp-C0h]
  ServantStatusBattleListViewItem_o *p_servantNumRestrictionEntity; // [xsp+58h] [xbp-98h]
  ServantStatusBattleListViewItem_o *p_myServantNumRestrictionEntity; // [xsp+60h] [xbp-90h]
  ServantStatusBattleListViewItem_o *p_uniqueIndividualityEntity; // [xsp+70h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v103; // [xsp+78h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v104; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4A09D86 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v6);
    sub_1B686D4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1B686D4(&int___TypeInfo, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v10);
    sub_1B686D4(&LocalizationManager_TypeInfo, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B686D4(&System_Text_StringBuilder_TypeInfo, v14);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v15);
    sub_1B686D4(&StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v16);
    byte_4A09D86 = 1;
  }
  v104 = 0LL;
  entity = 0LL;
  v103 = 0LL;
  v17 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v17, 0LL);
  v18 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0LL);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_149;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualityEntity = (ServantStatusBattleListViewItem_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (ServantStatusBattleListViewItem_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (ServantStatusBattleListViewItem_o *)&this->fields.myServantNumRestrictionEntity;
    v25 = 0;
    p_uniqueSvtRestrictionEntity = (ServantStatusBattleListViewItem_o *)&this->fields.uniqueSvtRestrictionEntity;
    p_totalCostRestrictionEntity = (ServantStatusBattleListViewItem_o *)&this->fields.totalCostRestrictionEntity;
    while ( 1 )
    {
      if ( v25 >= max_length )
        goto LABEL_150;
      v26 = restrictionEntityList->m_Items[v25];
      if ( !v26 )
        goto LABEL_149;
      switch ( v26->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (ServantStatusBattleListViewItem_c *)v26;
          sub_1B68678(p_totalCostRestrictionEntity, (int32_t)v26, v21, v22);
          goto LABEL_66;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v26;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&this->fields.supportOnlyRestrictionEntity,
            (int32_t)v26,
            v21,
            v22);
          this->fields.isSupportOnly = 1;
          goto LABEL_66;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (ServantStatusBattleListViewItem_c *)v26;
          sub_1B68678(p_uniqueSvtRestrictionEntity, (int32_t)v26, v21, v22);
          v27 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v27 = BalanceConfig_TypeInfo;
          }
          v28 = (struct System_Int32_array *)sub_1B6877C(
                                               int___TypeInfo,
                                               (unsigned int)v27->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v28;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList, (int32_t)v28, v29, v30);
          this->fields.isUniqueServant = 1;
          goto LABEL_66;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v26;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int32_t)v26,
            v21,
            v22);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v26, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&this->fields.supportPositionList,
            (int32_t)DeckPositionList,
            v32,
            v33);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_66;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v26;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int32_t)v26,
            v21,
            v22);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_66;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v26;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int32_t)v26,
            v21,
            v22);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_66;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (ServantStatusBattleListViewItem_c *)v26;
          sub_1B68678(p_servantNumRestrictionEntity, (int32_t)v26, v21, v22);
          targetVals = (int *)v26->fields.targetVals;
          if ( v26->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v35 = targetVals[9];
LABEL_51:
              this->fields.servantNumMax = v35;
            }
          }
          else if ( targetVals )
          {
            v62 = *((_QWORD *)targetVals + 3);
            if ( v62 )
            {
              if ( !(_DWORD)v62 )
                goto LABEL_150;
              v35 = targetVals[8];
              goto LABEL_51;
            }
          }
LABEL_66:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v25 >= max_length )
            goto LABEL_67;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (ServantStatusBattleListViewItem_c *)v26;
          sub_1B68678(p_myServantNumRestrictionEntity, (int32_t)v26, v21, v22);
          v36 = v26->fields.targetVals;
          if ( !v36 )
            goto LABEL_66;
          v37 = *(_QWORD *)&v36->max_length;
          if ( !v37 )
            goto LABEL_66;
          if ( !(_DWORD)v37 )
            goto LABEL_150;
          this->fields.myServantNumMax = v36->m_Items[1];
          goto LABEL_66;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v39 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_149;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v26,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v26;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v26, v21, v22);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v26,
                                                                                               0LL);
          if ( !specifiedPositionList )
            goto LABEL_149;
          v64 = specifiedPositionList->fields._items;
          v65 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v64 )
            goto LABEL_149;
          v66 = specifiedPositionList->fields._size;
          v20 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v66 >= v64->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_349F254 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v66 + 1;
            v64->m_Items[v66 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_66;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v26;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int32_t)v26,
            v21,
            v22);
          this->fields.isNeedStarting = 1;
          goto LABEL_66;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (ServantStatusBattleListViewItem_c *)v26;
          sub_1B68678(p_uniqueIndividualityEntity, (int32_t)v26, v21, v22);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v26->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v42 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          this->fields.uniqueIndividualitys = (struct System_Int32_array *)sub_1B68810(v42, int___TypeInfo);
          v43 = sub_1B68810(v42, int___TypeInfo);
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.uniqueIndividualitys, v43, v44, v45);
          v46 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v46 = BalanceConfig_TypeInfo;
          }
          v47 = (struct System_Int32_array *)sub_1B6877C(
                                               int___TypeInfo,
                                               (unsigned int)v46->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v47;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList, (int32_t)v47, v48, v49);
          v50 = (struct System_Int32_array *)sub_1B6877C(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v50;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.deckLimitCountList, (int32_t)v50, v51, v52);
          v53 = (struct System_Int32_array *)sub_1B6877C(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v53;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.deckDispLimitCountList, (int32_t)v53, v54, v55);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_66;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v56 = myServantOrNpcRestrictionEntityList->fields._items;
          v57 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v56 )
            goto LABEL_149;
          v58 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v58 >= v56->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v26,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = &v56->obj.klass + v58;
            myServantOrNpcRestrictionEntityList->fields._size = v58 + 1;
            v59[4] = (Il2CppClass *)v26;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v26, v21, v22);
          }
          v67 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v26,
                                                                                               0LL);
          if ( !v67 )
            goto LABEL_149;
          v68 = v67->fields._items;
          v69 = Method_System_Collections_Generic_List_int__Add__;
          ++v67->fields._version;
          if ( !v68 )
            goto LABEL_149;
          v70 = v67->fields._size;
          v20 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v70 >= v68->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v67,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_349F254 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v67->fields._size = v70 + 1;
            v68->m_Items[v70 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_66;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v60 = v26->fields.targetVals;
          if ( !v60 )
            goto LABEL_149;
          if ( !v60->max_length )
            goto LABEL_150;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v60->m_Items[1];
          if ( isRestriction )
          {
LABEL_44:
            if ( !v17 )
              goto LABEL_149;
            System_Text_StringBuilder__Append_60581364(v17, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
          }
          else
          {
LABEL_11:
            if ( !v17 )
              goto LABEL_149;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_60581364(
                                                                                               v17,
                                                                                               v26->fields.name,
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
    if ( !v17 )
      goto LABEL_149;
    v71 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                                      v17,
                                      v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v71;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.confirmRestrictionMessage, (int32_t)v71, v72, v73);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_10237/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v75 = System_String__Concat_61430728(
            v74,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            this->fields.confirmRestrictionMessage,
            0LL);
    this->fields.restrictionMessage = v75;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.restrictionMessage, (int32_t)v75, v76, v77);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_30E4514 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v104,
    this->fields.questId,
    this->fields.questPhase,
    0LL);
  v78 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1BBA5B0(v78);
  v79 = *(_QWORD *)(*(_QWORD *)(v78 + 192) + 16LL);
  if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
    v79 = sub_1BBA5B0(v79);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v79 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v103,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
    if ( !v103 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v103, 0x100000LL, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_101;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
    if ( !v103 )
      goto LABEL_149;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v103, 0x400000000000000LL, 0LL);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_101;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
    if ( !v103 )
      goto LABEL_149;
    v83 = QuestRestrictionInfoEntity__HasFlag(v103, 0x80000LL, 0LL);
    this->fields.isSupportOnlyForceBattle = v83;
    if ( v83 )
    {
LABEL_101:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
      if ( v103 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v103, 0x10000000LL, 0LL);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
        if ( v103 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v103, 0x20000000LL, 0LL);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
          if ( v103 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v103, 0x800000000LL, 0LL);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
            if ( v103 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(
                                                          v103,
                                                          0x80000000000000LL,
                                                          0LL);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
              if ( v103 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v103,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0LL);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
                if ( v103 )
                {
                  v87 = QuestRestrictionInfoEntity__HasFlag(v103, 0x400000000000000LL, 0LL);
                  this->fields.isAllOutBattle = v87;
                  if ( v87 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0LL);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_39214736(
                                                (QuestEntity_o *)entity,
                                                0x200000LL,
                                                this->fields.questPhase,
                                                0LL);
                  if ( v104 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v104, 0LL);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v104;
                    if ( !v104 )
                      goto LABEL_149;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v104, 0LL);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
                  if ( v103 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v103,
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
      sub_1B68930(myServantOrNpcRestrictionEntityList, v20);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
    if ( !v103 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v103, 0x1000000LL, 0LL) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v103;
      if ( !v103 )
        goto LABEL_149;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v103, 0LL);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1B6877C(int___TypeInfo, 1LL);
    if ( !v103 )
      goto LABEL_149;
    v84 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v103,
                                                                                         0LL);
    if ( !v84 )
      goto LABEL_149;
    if ( v84->max_length )
    {
      v84->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v84;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.svtIdForceBattleList, (int32_t)v84, v85, v86);
      goto LABEL_101;
    }
LABEL_150:
    sub_1B68938(myServantOrNpcRestrictionEntityList, v20);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_39214736((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_149;
      HasFlag_39214736 = QuestEntity__HasFlag_39214736(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_39214736;
      if ( !HasFlag_39214736 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_149;
        v89 = QuestEntity__HasFlag_39214736((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v89;
        if ( !v89 )
        {
          if ( v104 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_149;
            if ( QuestEntity__HasFlag_39214736((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v104;
              if ( !v104 )
                goto LABEL_149;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v104, 0LL);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1B6877C(
                                                                                                 int___TypeInfo,
                                                                                                 1LL);
            if ( !v104 )
              goto LABEL_149;
            v90 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v104,
                                                                                                 0LL);
            if ( !v90 )
              goto LABEL_149;
            if ( !v90->max_length )
              goto LABEL_150;
            v90->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v90;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.svtIdForceBattleList, (int32_t)v90, v91, v92);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isFatigure = QuestEntity__HasFlag_39214736(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    v93 = QuestEntity__HasFlag_39214736((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v93;
    if ( v93 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_149;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_39214736(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_39214736(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_39214736(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_39214736(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_39214736(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v104 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v104, 0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v104;
    if ( !v104 )
      goto LABEL_149;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v104,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v104;
    if ( !v104 )
      goto LABEL_149;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v104, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.overwriteLimitCountSvtIds, 0, v80, v81);
    this->fields.overwriteLimitCounts = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.overwriteLimitCounts, 0, v94, v95);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.overwriteLimitCountIconIds, 0, v96, v97);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_T__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct System_String_o **p_summary; // x19
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A09DD1 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_int_____ctor__, v3);
    sub_1B686D4(&System_Collections_Generic_List_int____TypeInfo, v4);
    sub_1B686D4(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo, v5);
    sub_1B686D4(&StringLiteral_1/*""*/, v6);
    byte_4A09DD1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v7;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.individualityList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_1B68920(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_34A122C *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v10;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.rangeTypeList, (int32_t)v10, v11, v12);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_summary, v13, v15, v16);
  *((_WORD *)p_summary + 4) = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A09DD2 & 1) == 0 )
  {
    sub_1B686D4(&QuestRestrictionInfo___c_TypeInfo, v1);
    byte_4A09DD2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)QuestRestrictionInfo___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, 0LL);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B68930(this, 0LL);
  return e->fields.name;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__96_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4A09DD3 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1B686D4(&Method_System_Collections_Generic_List_int____get_Count__, s);
    byte_4A09DD3 = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0LL )
    sub_1B68930(this, s);
  return individualityList->fields._size > 0;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__95_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B68930(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__95_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B68930(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, x);
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
    sub_1B68938(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1B68930(this, x);
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
    sub_1B68938(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1B68930(this, x);
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
    sub_1B68930(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}