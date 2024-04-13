void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_34244212(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  struct RestrictionEntity_array *RestrictionList_34244420; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t v22; // w1
  const MethodInfo *v23; // x4

  if ( (byte_42ED294 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, eventId, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42ED294 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  RestrictionList_34244420 = QuestRestrictionMaster__getRestrictionList_34244420(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               v14);
  this->fields.restrictionEntityList = RestrictionList_34244420;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)RestrictionList_34244420,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  QuestRestrictionInfo__Setup(this, v22, questId, questPhase, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_34253836(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct QuestRestrictionEntity_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x23
  __int64 v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t v37; // w1
  const MethodInfo *v38; // x4
  __int64 v39; // x0
  __int64 v40; // x0

  if ( (byte_42ED295 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRestrictionEntity___TypeInfo, eventId, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&RestrictionEntity___TypeInfo, v11, v12, v13);
    byte_42ED295 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v14 = (struct QuestRestrictionEntity_array *)sub_B5D5DC(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionEntityList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( overwriteRestiction )
  {
    v21 = sub_B5D5DC(RestrictionEntity___TypeInfo, 1LL);
    if ( !v21 )
      sub_B5D69C(0LL, v22);
    v23 = v21;
    v24 = sub_B5D684(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
    if ( !v24 )
    {
      v39 = sub_B5D6BC(0LL);
      sub_B5D668(v39, 0LL);
    }
    if ( !*(_DWORD *)(v23 + 24) )
    {
      v40 = sub_B5D6C8(v24);
      sub_B5D668(v40, 0LL);
    }
    *(_QWORD *)(v23 + 32) = overwriteRestiction;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v23 + 32),
      (System_Int32_array **)overwriteRestiction,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  else
  {
    v23 = sub_B5D5DC(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)v23,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v45; // x1
  bool *v46; // x23
  const MethodInfo *v47; // x2
  struct System_Collections_Generic_List_bool____o *myServantPositionsList; // x21
  __int64 v49; // x24
  int size; // w8
  System_Boolean_array *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FixedServantPositionSvtIdList; // x0
  BalanceConfig_c *v53; // x0
  struct System_Collections_Generic_List_bool____o *v54; // x21
  System_Boolean_array *v55; // x8
  _BOOL4 v56; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  struct System_Collections_Generic_List_bool____o *v58; // x21
  System_Boolean_array *v59; // x8
  bool *v60; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  bool *v62; // x23
  struct System_Collections_Generic_List_bool____o *positionsList; // x21
  __int64 v64; // x24
  int v65; // w8
  System_Boolean_array *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FixedPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  struct System_Collections_Generic_List_bool____o *v69; // x21
  System_Boolean_array *v70; // x8
  _BOOL4 v71; // w8
  __int64 v72; // x0
  bool *v73; // [xsp+0h] [xbp-60h]
  System_Collections_Generic_IEnumerable_TSource__o *second; // [xsp+8h] [xbp-58h]

  if ( (byte_42ED2B5 & 1) == 0 )
  {
    sub_B5D5C4(
      &BalanceConfig_TypeInfo,
      (_DWORD)isFixedServantPositionRestriction,
      (_DWORD)isFixedServantPositionAgreement,
      isRestrictionMyServantPos);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v29, v30, v31);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int___, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool____get_Count__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool____get_Item__, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    byte_42ED2B5 = 1;
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
             (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v53 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v53 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v53->static_fields->DeckMainMemberMax <= num;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  v73 = isRestrictionNeedStarting;
  v46 = isRestrictionServantPos;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimit, 0LL);
  second = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
  if ( !this->fields.isFixedMyServantPosition )
    goto LABEL_44;
  myServantPositionsList = this->fields.myServantPositionsList;
  if ( !myServantPositionsList )
    goto LABEL_17;
  v49 = 0LL;
  while ( 1 )
  {
    size = myServantPositionsList->fields._size;
    if ( (int)v49 >= size )
      break;
    if ( size <= (unsigned int)v49 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v51 = myServantPositionsList->fields._items->m_Items[v49];
    if ( !v51 )
      goto LABEL_17;
    if ( v51->max_length <= num )
      goto LABEL_80;
    if ( v51->m_Items[num + 4] )
      goto LABEL_25;
    myServantPositionsList = this->fields.myServantPositionsList;
    ++v49;
    if ( !myServantPositionsList )
      goto LABEL_17;
  }
  LODWORD(v49) = 0;
LABEL_25:
  if ( isFollower )
  {
    v54 = this->fields.myServantPositionsList;
    if ( !v54 )
      goto LABEL_17;
    if ( v54->fields._size <= (unsigned int)v49 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v55 = v54->fields._items->m_Items[(int)v49];
    if ( !v55 )
      goto LABEL_17;
    if ( v55->max_length <= num )
      goto LABEL_80;
    v56 = v55->m_Items[num + 4];
  }
  else
  {
    Instance = (DataManager_o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(this, (int32_t)v45, v47);
    if ( !Instance )
      goto LABEL_44;
    v57 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
            second,
            (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v57,
                                  (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
    v58 = this->fields.myServantPositionsList;
    if ( !v58 )
      goto LABEL_17;
    if ( v58->fields._size <= (unsigned int)v49 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v59 = v58->fields._items->m_Items[(int)v49];
    if ( !v59 )
      goto LABEL_17;
    if ( v59->max_length <= num )
      goto LABEL_80;
    v56 = v59->m_Items[num + 4];
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v56 )
        goto LABEL_44;
      *isFixedServantPositionAgreement = 1;
      goto LABEL_43;
    }
  }
  if ( !v56 )
    goto LABEL_44;
  *isFixedServantPositionRestriction = 1;
  *isFixedServantPositionAgreement = 0;
LABEL_43:
  *isRestrictionMyServantPos = 1;
LABEL_44:
  if ( *isFixedServantPositionRestriction )
    return;
  v60 = v46;
  if ( this->fields.isNeedStarting )
  {
    Instance = (DataManager_o *)QuestRestrictionInfo__GetNeedStartingSvtIdList(this, v45);
    if ( Instance )
    {
      v61 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
              second,
              (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
      Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                    v61,
                                    (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v62 = v73;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v62 = v73;
        }
        *isFixedServantPositionRestriction = SLODWORD(Instance[1].fields.saveNameList[4].klass) <= num;
        *isFixedServantPositionAgreement = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax > num;
        *v62 = 1;
      }
    }
  }
  if ( *isFixedServantPositionRestriction || !this->fields.isFixedPosition )
    return;
  positionsList = this->fields.positionsList;
  if ( !positionsList )
    goto LABEL_17;
  v64 = 0LL;
  while ( 1 )
  {
    v65 = positionsList->fields._size;
    if ( (int)v64 >= v65 )
      break;
    if ( v65 <= (unsigned int)v64 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v66 = positionsList->fields._items->m_Items[v64];
    if ( !v66 )
      goto LABEL_17;
    if ( v66->max_length <= num )
      goto LABEL_80;
    if ( v66->m_Items[num + 4] )
      goto LABEL_68;
    positionsList = this->fields.positionsList;
    ++v64;
    if ( !positionsList )
      goto LABEL_17;
  }
  LODWORD(v64) = 0;
LABEL_68:
  FixedPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedPositionSvtIdList(
                                                                                  this,
                                                                                  (int32_t)v45,
                                                                                  v47);
  if ( !FixedPositionSvtIdList )
    return;
  v68 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          second,
          (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v68,
                                (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
  v69 = this->fields.positionsList;
  if ( !v69 )
    goto LABEL_17;
  if ( v69->fields._size <= (unsigned int)v64 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v70 = v69->fields._items->m_Items[(int)v64];
  if ( !v70 )
LABEL_17:
    sub_B5D69C(Instance, v45);
  if ( v70->max_length <= num )
  {
LABEL_80:
    v72 = sub_B5D6C8(Instance);
    sub_B5D668(v72, 0LL);
  }
  v71 = v70->m_Items[num + 4];
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v71 )
    {
      *isFixedServantPositionAgreement = 1;
LABEL_79:
      *v60 = 1;
    }
  }
  else if ( v71 )
  {
    *isFixedServantPositionRestriction = 1;
    *isFixedServantPositionAgreement = 0;
    goto LABEL_79;
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
  struct System_Int32_array *overwriteLimitCountSvtIds; // x11
  struct System_Int32_array *overwriteLimitCounts; // x8
  int max_length; // w10
  __int64 v6; // x9
  int32_t *v7; // x11
  __int64 v9; // x0

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return -1;
  overwriteLimitCounts = this->fields.overwriteLimitCounts;
  if ( !overwriteLimitCounts )
    return -1;
  max_length = overwriteLimitCountSvtIds->max_length;
  if ( max_length < 1 )
    return -1;
  v6 = 0LL;
  v7 = &overwriteLimitCountSvtIds->m_Items[1];
  while ( v7[v6] != svtId )
  {
    if ( (int)++v6 >= max_length )
      return -1;
  }
  if ( (unsigned int)v6 >= overwriteLimitCounts->max_length )
  {
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
  }
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(
        QuestRestrictionInfo_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRestrictionInfo_o *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x8
  QuestRestrictionInfo_o *v11; // x20
  __int64 v12; // x25
  int32_t v13; // w21
  __int64 v14; // x22
  __int64 v15; // x23
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v5 = this;
  if ( (byte_42ED2BE & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                       (_DWORD)userServantEntity,
                                       (_DWORD)method,
                                       v3);
    byte_42ED2BE = 1;
  }
  if ( !userServantEntity )
    goto LABEL_22;
  v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v5, v8, v9);
  if ( !this )
LABEL_22:
    sub_B5D69C(this, userServantEntity);
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  v11 = this;
  if ( !dialogMessageInfoDictionary )
    return -1;
  if ( (int)dialogMessageInfoDictionary >= 1 )
  {
    v12 = 0LL;
    while ( (unsigned int)v12 < (unsigned int)dialogMessageInfoDictionary )
    {
      v13 = *(&v11->fields.eventId + v12);
      v15 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.currentCryptoKey;
      v14 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v19.fields.currentCryptoKey = v15;
      *(_QWORD *)&v19.fields.fakeValue = v14;
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
      if ( (_DWORD)this == v13 )
        return v13;
      dialogMessageInfoDictionary = v11->fields.dialogMessageInfoDictionary;
      if ( (int)++v12 >= (int)dialogMessageInfoDictionary )
        goto LABEL_17;
    }
LABEL_21:
    v17 = sub_B5D6C8(this);
    sub_B5D668(v17, 0LL);
  }
LABEL_17:
  if ( !(_DWORD)dialogMessageInfoDictionary )
    goto LABEL_21;
  return v11->fields.eventId;
}


System_Int32_array *__fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_int__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  __int64 v19; // x9
  __int64 v20; // x22
  __int64 v21; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8
  __int64 v24; // x0

  if ( (byte_42ED2BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    byte_42ED2BD = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds )
  {
    if ( this->fields.overwriteLimitCounts )
    {
      v19 = *(_QWORD *)&overwriteLimitCountSvtIds->max_length;
      if ( (int)v19 >= 1 )
      {
        v20 = (int)v19;
        v21 = 8LL;
        do
        {
          if ( v21 - 8 >= (unsigned __int64)overwriteLimitCountSvtIds->max_length )
          {
LABEL_18:
            v24 = sub_B5D6C8(v16);
            sub_B5D668(v24, 0LL);
          }
          if ( *((_DWORD *)&overwriteLimitCountSvtIds->obj.klass + v21) == svtId )
          {
            overwriteLimitCounts = this->fields.overwriteLimitCounts;
            if ( !overwriteLimitCounts )
              break;
            if ( v21 - 8 >= (unsigned __int64)overwriteLimitCounts->max_length )
              goto LABEL_18;
            if ( !v15 )
              break;
            System_Collections_Generic_List_int___Add(
              v15,
              *((_DWORD *)&overwriteLimitCounts->obj.klass + v21),
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( v21 - 7 >= v20 )
            goto LABEL_16;
          overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
          ++v21;
        }
        while ( overwriteLimitCountSvtIds );
LABEL_15:
        sub_B5D69C(v16, v17);
      }
    }
  }
LABEL_16:
  if ( !v15 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x9
  __int64 v47; // x22
  QuestRestrictionInfo_SlotInfo_o *v48; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int max_length; // w8
  unsigned int v51; // w22
  __int64 v52; // x23
  RestrictionWholeEntity_o *v53; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  unsigned __int64 v56; // x27
  int v57; // w8
  unsigned int v58; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v59; // x8
  QuestRestrictionInfo_SlotInfo_o *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v63; // x8
  struct QuestRestrictionInfo___c_StaticFields *v64; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__104_0; // x20
  Il2CppObject *v66; // x21
  struct QuestRestrictionInfo___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  QuestRestrictionInfo___c_c *v75; // x8
  struct QuestRestrictionInfo___c_StaticFields *v76; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__104_2; // x20
  Il2CppObject *v78; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct QuestRestrictionInfo___c_StaticFields *v85; // x0
  BattleServantConfConponent_o *p__9__104_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v87; // x8
  QuestRestrictionInfo_SlotInfo_o *v88; // x8
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x9
  Il2CppObject *v90; // x21
  struct QuestRestrictionInfo___c_StaticFields *v91; // x0
  System_Collections_Generic_IEnumerable_string__o *v92; // x0
  __int64 v93; // x0

  v8 = this;
  if ( (byte_42ED2A7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, initPos, pos, isCheckPosForWhole);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_RestrictionEntity__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_RestrictionEntity__string___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_RestrictionEntity__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Func_RestrictionEntity__string__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_0__, v27, v28, v29);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_1__, v30, v31, v32);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_2__, v33, v34, v35);
    sub_B5D5C4(&QuestRestrictionInfo___c_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v39, v40, v41);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v42, v43, v44);
    byte_42ED2A7 = 1;
  }
  if ( !v8->fields.restrictionBaseEntity )
  {
    RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                                                                          v8,
                                                                                          *(const MethodInfo **)&initPos);
    v63 = QuestRestrictionInfo___c_TypeInfo;
    if ( initPos < 1 )
    {
      if ( (WORD1(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v63 = QuestRestrictionInfo___c_TypeInfo;
      }
      static_fields = v63->static_fields;
      _9__104_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__104_2;
      if ( _9__104_2 )
        goto LABEL_70;
      if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v63);
        static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v90 = (Il2CppObject *)static_fields->__9;
      _9__104_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__104_2,
        v90,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_2__,
        (const MethodInfo_2C3041C *)Method_System_Func_RestrictionEntity__string___ctor__);
      v91 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v91->__9__104_2 = (struct System_Func_RestrictionEntity__string__o *)_9__104_2;
      p__9__104_2 = (BattleServantConfConponent_o *)&v91->__9__104_2;
    }
    else
    {
      if ( (WORD1(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v63 = QuestRestrictionInfo___c_TypeInfo;
      }
      v64 = v63->static_fields;
      _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v64->__9__104_0;
      if ( !_9__104_0 )
      {
        if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          v64 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v66 = (Il2CppObject *)v64->__9;
        _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__104_0,
          v66,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v67 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v67->__9__104_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__104_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v67->__9__104_0,
          (System_Int32_array **)_9__104_0,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
      }
      v74 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__104_0,
              (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v75 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = v74;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v75 = QuestRestrictionInfo___c_TypeInfo;
      }
      v76 = v75->static_fields;
      _9__104_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v76->__9__104_1;
      if ( _9__104_2 )
        goto LABEL_70;
      if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v75);
        v76 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v78 = (Il2CppObject *)v76->__9;
      _9__104_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__104_2,
        v78,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_1__,
        (const MethodInfo_2C3041C *)Method_System_Func_RestrictionEntity__string___ctor__);
      v85 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v85->__9__104_1 = (struct System_Func_RestrictionEntity__string__o *)_9__104_2;
      p__9__104_2 = (BattleServantConfConponent_o *)&v85->__9__104_1;
    }
    sub_B5D560(p__9__104_2, (System_Int32_array **)_9__104_2, v79, v80, v81, v82, v83, v84);
LABEL_70:
    v92 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                RestrictionMessageEntityList,
                                                                (System_Func_TSource__TResult__o *)_9__104_2,
                                                                (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    return System_String__Join_44633232((System_String_o *)StringLiteral_26/*"\n"*/, v92, 0LL);
  }
  v45 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_73;
    if ( v45 >= slotInfos->max_length )
      goto LABEL_72;
    v47 = v45;
    v48 = slotInfos->m_Items[v45];
    if ( !v48 )
      goto LABEL_73;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v48->fields.summary, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v87 = v8->fields.slotInfos;
      if ( v87 )
      {
        if ( (unsigned int)v47 >= v87->max_length )
          goto LABEL_72;
        v88 = v87->m_Items[v47];
        if ( v88 )
          return v88->fields.summary;
      }
      goto LABEL_73;
    }
  }
  if ( !isCheckPosForWhole )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( pos < 1 )
    return v8->fields.confirmRestrictionMessage;
  restrictionWholeEntities = v8->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_73:
    sub_B5D69C(this, *(_QWORD *)&initPos);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return v8->fields.confirmRestrictionMessage;
  v51 = 0;
  v52 = pos - 1;
  while ( 1 )
  {
    if ( v51 >= max_length )
      goto LABEL_72;
    v53 = restrictionWholeEntities->m_Items[v51];
    if ( !v53 )
      goto LABEL_73;
    type = v53->fields.type;
    if ( (unsigned int)(type - 4) >= 4 )
    {
      if ( type != 8 )
        goto LABEL_37;
      this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
      }
      if ( this->fields.fixedSupportPositionRestrictionEntity[2].fields.type >= pos )
      {
        v59 = v8->fields.slotInfos;
        if ( !v59 )
          goto LABEL_73;
        if ( (unsigned int)v52 >= v59->max_length )
          goto LABEL_72;
        v60 = v59->m_Items[v52];
        if ( !v60 )
          goto LABEL_73;
        if ( v60->fields.slotType != 5 )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v53->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v53->fields.summary;
        }
      }
    }
    targetVals2 = v53->fields.targetVals2;
    if ( !targetVals2 )
      goto LABEL_73;
    if ( (unsigned int)*(_QWORD *)&targetVals2->max_length == 1 )
    {
      v56 = 0LL;
      v57 = 1;
      v58 = 1;
      while ( v56 < v58 )
      {
        if ( targetVals2->m_Items[v56 + 1] == pos )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v53->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v53->fields.summary;
          v57 = targetVals2->max_length;
        }
        ++v56;
        v58 = v57;
        if ( (__int64)v56 >= v57 )
          goto LABEL_37;
      }
LABEL_72:
      v93 = sub_B5D6C8(this);
      sub_B5D668(v93, 0LL);
    }
LABEL_37:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v51 >= max_length )
      return v8->fields.confirmRestrictionMessage;
  }
}


int32_t __fastcall QuestRestrictionInfo__GetCorrectionIconId(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x12
  struct System_Int32_array *overwriteLimitCountIconIds; // x8
  int max_length; // w10
  __int64 v7; // x11
  int32_t *p_correctionIconId; // x9
  int32_t *v9; // x12
  __int64 v11; // x0

  if ( !isFollower
    && (overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds) != 0LL
    && (overwriteLimitCountIconIds = this->fields.overwriteLimitCountIconIds) != 0LL
    && (max_length = overwriteLimitCountSvtIds->max_length, max_length >= 1) )
  {
    v7 = 0LL;
    p_correctionIconId = &overwriteLimitCountIconIds->m_Items[1];
    v9 = &overwriteLimitCountSvtIds->m_Items[1];
    while ( v9[v7] != svtId )
    {
      ++v7;
      ++p_correctionIconId;
      if ( (int)v7 >= max_length )
        goto LABEL_8;
    }
    if ( (unsigned int)v7 >= overwriteLimitCountIconIds->max_length )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
    }
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *v29; // x20
  int64_t IsDisplayedRestrictionDialog; // x0
  __int64 v31; // x1
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x22
  int v33; // w8
  int i; // w23
  RestrictionMessageEntity_o *v35; // x25
  int32_t frequencyType; // w8
  UserQuestMaster_o *v37; // x21
  UserQuestEntity_o *v38; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w23
  int v41; // w24
  int32_t v42; // w21
  int32_t *v43; // x27
  int32_t v44; // w8
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserQuestEntity_o *v46; // x22
  __int64 v48; // x0

  if ( (byte_42ED2BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v26, v27, v28);
    byte_42ED2BA = 1;
  }
  v29 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_61;
    max_length = questRestrictionEntityList->max_length;
    if ( max_length < 1 )
      goto LABEL_59;
    v41 = 1;
    while ( 1 )
    {
      v42 = v41 - 1;
      if ( v41 - 1 >= questRestrictionEntityList->max_length )
      {
LABEL_62:
        v48 = sub_B5D6C8(IsDisplayedRestrictionDialog);
        sub_B5D668(v48, 0LL);
      }
      v43 = (int32_t *)questRestrictionEntityList->m_Items[v42];
      if ( !v43 )
        goto LABEL_61;
      v44 = v43[7];
      if ( v44 == 1 )
        break;
      if ( v44 == 2 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        IsDisplayedRestrictionDialog = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsDisplayedRestrictionDialog )
          goto LABEL_61;
        IsDisplayedRestrictionDialog = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                         (PartyOrganizationUtility_o *)IsDisplayedRestrictionDialog,
                                         v43[4],
                                         v43[5],
                                         v43[6],
                                         1,
                                         0LL);
        if ( (IsDisplayedRestrictionDialog & 1) != 0 )
          goto LABEL_56;
        goto LABEL_54;
      }
      if ( v44 == 3 )
        goto LABEL_54;
LABEL_56:
      if ( v41 >= max_length )
        goto LABEL_59;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v41;
      if ( !questRestrictionEntityList )
        goto LABEL_61;
    }
    IsDisplayedRestrictionDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsDisplayedRestrictionDialog )
      goto LABEL_61;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)IsDisplayedRestrictionDialog,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    IsDisplayedRestrictionDialog = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_61;
    IsDisplayedRestrictionDialog = (int64_t)UserQuestMaster__getEntityFromId(
                                              MasterData_WarQuestSelectionMaster,
                                              IsDisplayedRestrictionDialog,
                                              v43[4],
                                              0LL);
    if ( IsDisplayedRestrictionDialog )
    {
      v46 = (UserQuestEntity_o *)IsDisplayedRestrictionDialog;
      IsDisplayedRestrictionDialog = UserQuestEntity__getClearNum(
                                       (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                                       0LL);
      if ( (_DWORD)IsDisplayedRestrictionDialog )
        goto LABEL_56;
      IsDisplayedRestrictionDialog = UserQuestEntity__HasStatus(v46, 16, 0LL);
      if ( (IsDisplayedRestrictionDialog & 1) != 0 )
        goto LABEL_56;
    }
LABEL_54:
    if ( !v29 )
      goto LABEL_61;
    System_Collections_Generic_List_int___Add(
      v29,
      v42,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    goto LABEL_56;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_61;
  v33 = restrictionMessageEntities->max_length;
  if ( v33 >= 1 )
  {
    for ( i = 0; i < v33; ++i )
    {
      if ( i >= (unsigned int)v33 )
        goto LABEL_62;
      v35 = restrictionMessageEntities->m_Items[i];
      if ( !v35 )
        goto LABEL_61;
      frequencyType = v35->fields.frequencyType;
      switch ( frequencyType )
      {
        case 1:
          IsDisplayedRestrictionDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !IsDisplayedRestrictionDialog )
            goto LABEL_61;
          v37 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)IsDisplayedRestrictionDialog,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          IsDisplayedRestrictionDialog = NetworkManager__get_UserId(0LL);
          if ( !v37 )
            goto LABEL_61;
          IsDisplayedRestrictionDialog = (int64_t)UserQuestMaster__getEntityFromId(
                                                    v37,
                                                    IsDisplayedRestrictionDialog,
                                                    this->fields.questId,
                                                    0LL);
          if ( !IsDisplayedRestrictionDialog
            || (v38 = (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                IsDisplayedRestrictionDialog = UserQuestEntity__getClearNum(
                                                 (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                                                 0LL),
                !(_DWORD)IsDisplayedRestrictionDialog)
            && (IsDisplayedRestrictionDialog = UserQuestEntity__HasStatus(v38, 16, 0LL),
                (IsDisplayedRestrictionDialog & 1) == 0) )
          {
LABEL_27:
            if ( !v29 )
              goto LABEL_61;
            System_Collections_Generic_List_int___Add(
              v29,
              v35->fields.id,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          break;
        case 2:
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          IsDisplayedRestrictionDialog = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !IsDisplayedRestrictionDialog )
            goto LABEL_61;
          IsDisplayedRestrictionDialog = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                           (PartyOrganizationUtility_o *)IsDisplayedRestrictionDialog,
                                           this->fields.questId,
                                           this->fields.questPhase,
                                           v35->fields.id,
                                           1,
                                           0LL);
          if ( (IsDisplayedRestrictionDialog & 1) == 0 )
            goto LABEL_27;
          break;
        case 3:
          goto LABEL_27;
      }
      v33 = restrictionMessageEntities->max_length;
    }
  }
LABEL_59:
  if ( !v29 )
LABEL_61:
    sub_B5D69C(IsDisplayedRestrictionDialog, v31);
  return System_Collections_Generic_List_int___ToArray(
           v29,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessage(
        QuestRestrictionInfo_o *this,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRestrictionInfo_o *v5; // x20
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x9
  int max_length; // w10
  System_String_o **p_dialogMessage; // x8
  unsigned int v9; // w11
  RestrictionMessageEntity_o *v10; // x12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v12; // x8
  __int64 v14; // x0

  v5 = this;
  if ( (byte_42ED2BB & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, n, (_DWORD)method, v3);
    byte_42ED2BB = 1;
  }
  if ( !v5->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v5->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_20:
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
      }
      v12 = questRestrictionEntityList->m_Items[n];
      if ( v12 )
      {
        p_dialogMessage = &v12->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_B5D69C(this, *(_QWORD *)&n);
  }
  restrictionMessageEntities = v5->fields.restrictionMessageEntities;
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
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        goto LABEL_20;
      v10 = restrictionMessageEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_19;
      if ( v10->fields.id == n )
        break;
      if ( (int)++v9 >= max_length )
        return *p_dialogMessage;
    }
    p_dialogMessage = &v10->fields.dialogMessage;
  }
  return *p_dialogMessage;
}


QuestRestrictionInfo_DialogMessageInfo_o *__fastcall QuestRestrictionInfo__GetDialogMessageInfo(
        QuestRestrictionInfo_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  QuestRestrictionInfo_DialogMessageInfo_o *result; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0

  if ( (byte_42ED2D1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__,
      messageId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__,
      v6,
      v7,
      v8);
    byte_42ED2D1 = 1;
  }
  result = (QuestRestrictionInfo_DialogMessageInfo_o *)this->fields.dialogMessageInfoDictionary;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)result,
           messageId,
           (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
    {
      dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
      if ( !dialogMessageInfoDictionary )
        sub_B5D69C(0LL, v10);
      return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)dialogMessageInfoDictionary,
                                                           messageId,
                                                           (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageMySvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v17; // w21
  RestrictionWholeEntity_o *v18; // x25
  __int64 v20; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42ED2D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__,
      v8,
      v9,
      v10);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42ED2D4 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v20 = sub_B5D6C8(this);
        sub_B5D668(v20, 0LL);
      }
      v18 = restrictionWholeEntities->m_Items[v17];
      if ( !v18 )
        goto LABEL_20;
      if ( v18->fields.type == 5 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v18->fields.restrictionMessageId,
                                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v17 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_20:
    sub_B5D69C(this, method);
  }
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_age;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSupportSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v17; // w21
  RestrictionWholeEntity_o *v18; // x25
  __int64 v20; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42ED2D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__,
      v8,
      v9,
      v10);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42ED2D6 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v20 = sub_B5D6C8(this);
        sub_B5D668(v20, 0LL);
      }
      v18 = restrictionWholeEntities->m_Items[v17];
      if ( !v18 )
        goto LABEL_20;
      if ( v18->fields.type == 6 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v18->fields.restrictionMessageId,
                                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v17 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_20:
    sub_B5D69C(this, method);
  }
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_age;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v17; // w21
  RestrictionWholeEntity_o *v18; // x25
  int32_t type; // w8
  __int64 v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42ED2D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__,
      v8,
      v9,
      v10);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42ED2D3 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_21;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v21 = sub_B5D6C8(this);
        sub_B5D668(v21, 0LL);
      }
      v18 = restrictionWholeEntities->m_Items[v17];
      if ( !v18 )
        goto LABEL_21;
      type = v18->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_21;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v18->fields.restrictionMessageId,
                                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v17 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_21:
    sub_B5D69C(this, method);
  }
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_age;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetDialogTargetName(
        QuestRestrictionInfo_o *this,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRestrictionInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v10; // x19
  System_String_o **p_title; // x20
  unsigned int v12; // w21
  __int64 v13; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v15; // x8
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42ED2BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__,
      n,
      (_DWORD)method,
      v3);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42ED2BC = 1;
  }
  if ( !v5->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v5->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_21:
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      v15 = questRestrictionEntityList->m_Items[n];
      if ( v15 )
      {
        p_title = &v15->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_B5D69C(this, *(_QWORD *)&n);
  }
  this = (QuestRestrictionInfo_o *)v5->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                     n,
                                     (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
  if ( !this )
    goto LABEL_20;
  dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
  v10 = this;
  if ( dialogMessageInfoDictionary < 1 )
  {
    p_title = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_title = (System_String_o **)&StringLiteral_1/*""*/;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= dialogMessageInfoDictionary )
        goto LABEL_21;
      v13 = *((_QWORD *)&v10->fields.eventId + (int)v12);
      if ( !v13 )
        goto LABEL_20;
      this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v13 + 32), 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      dialogMessageInfoDictionary = (int)v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v12 >= dialogMessageInfoDictionary )
        return *p_title;
    }
    p_title = (System_String_o **)(v13 + 32);
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
  __int64 v6; // x0

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_8;
  if ( restrictionEntityList->max_length <= n )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_8:
    sub_B5D69C(this, n);
  return v5->fields.type;
}


bool __fastcall QuestRestrictionInfo__GetExplanationMessage(
        QuestRestrictionInfo_o *this,
        System_String_o **message,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  QuestRestrictionInfo_o *v9; // x20
  struct RestrictionBaseEntity_o *v11; // x8
  System_String_o *noticeMessage; // x1
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w21
  il2cpp_array_size_t v15; // w22
  QuestRestrictionEntity_o *v16; // x23
  __int64 v18; // x0

  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  v9 = this;
  if ( !restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
LABEL_13:
      sub_B5D69C(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= questRestrictionEntityList->max_length )
        {
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
        }
        v16 = questRestrictionEntityList->m_Items[v15];
        if ( !v16 )
          goto LABEL_13;
        this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.noticeMessage, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( (int)++v15 >= max_length )
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
    sub_B5D560((BattleServantConfConponent_o *)message, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)noticeMessage,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return 1;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42ED2C6 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10500/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v4, v5, v6);
    byte_42ED2C6 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42ED2C5 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10501/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, v4, v5, v6);
    byte_42ED2C5 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10501/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedMyServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ED2DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12, v13);
    byte_42ED2DC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v19.fields.current[1].monitor) )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v16 )
      break;
    if ( !v19.fields.current )
      sub_B5D69C(v16, v17);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  __int64 v27; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ED2D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, idx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42ED2D9 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v29 )
      break;
    if ( !v26 )
      sub_B5D69C(v29, v30);
    System_Collections_Generic_List_int___AddRange(
      v26,
      (System_Collections_Generic_IEnumerable_T__o *)v32.fields.current,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v26 )
LABEL_15:
    sub_B5D69C(fixedMyServantIndividualitiesList, v27);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Int32_array *fixedMyServantSingleIndividualities; // x8
  int32_t ServantImageLimitSealAfter; // w22
  ServantEntity_o *v25; // x20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v27; // x21
  unsigned int v28; // w24
  RestrictionSlotDetailEntity_o *v29; // x23
  System_Int32_array *Individuality; // x0
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int32_t max_length; // w9
  __int64 v35; // x0

  v10 = this;
  if ( (byte_42ED2B7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      svtId,
      limitCount,
      *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      v17,
      v18,
      v19);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(
                                       &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                       v20,
                                       v21,
                                       v22);
    byte_42ED2B7 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               svtId,
                                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v25 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
              if ( this )
              {
                dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
                v27 = this;
                if ( dialogMessageInfoDictionary >= 1 )
                {
                  v28 = 0;
                  while ( 1 )
                  {
                    if ( v28 >= dialogMessageInfoDictionary )
                      goto LABEL_30;
                    v29 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v27->fields.eventId + (int)v28);
                    if ( !v29 )
                      goto LABEL_29;
                    if ( v29->fields.type == 1 )
                    {
                      if ( !v25 )
                        goto LABEL_29;
                      Individuality = ServantEntity__getIndividuality(v25, limitCount, ServantImageLimitSealAfter, 0LL);
                      this = (QuestRestrictionInfo_o *)RestrictionSlotDetailEntity__IsIndividuality(
                                                         v29,
                                                         Individuality,
                                                         0LL);
                      if ( ((unsigned __int8)this & 1) == 0 )
                        return 1;
                    }
                    dialogMessageInfoDictionary = (int)v27->fields.dialogMessageInfoDictionary;
                    if ( (int)++v28 >= dialogMessageInfoDictionary )
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
    sub_B5D69C(this, *(_QWORD *)&svtId);
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
  {
LABEL_30:
    v35 = sub_B5D6C8(this);
    sub_B5D668(v35, 0LL);
  }
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42ED2B8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10499/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, v4, v5, v6);
    byte_42ED2B8 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10499/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ED2DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12, v13);
    byte_42ED2DE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v19.fields.current[1].monitor) )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v16 )
      break;
    if ( !v19.fields.current )
      sub_B5D69C(v16, v17);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  __int64 v27; // x1
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ED2DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, idx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42ED2DB = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v29 )
      break;
    if ( !v26 )
      sub_B5D69C(v29, v30);
    System_Collections_Generic_List_int___AddRange(
      v26,
      (System_Collections_Generic_IEnumerable_T__o *)v32.fields.current,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v26 )
LABEL_15:
    sub_B5D69C(fixedIndividualitiesList, v27);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int v15; // w21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v21; // w20
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int v24; // w19
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  int v27[2]; // [xsp+20h] [xbp-50h]
  int v28; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42ED2B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12, v13);
    byte_42ED2B4 = 1;
  }
  memset(&i, 0, sizeof(i));
  v28 = 0;
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
      goto LABEL_32;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v15 = 0;
    for ( i = v26; ; v15 += LODWORD(i.fields.current[1].monitor) )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v16 )
        break;
      if ( !i.fields.current )
        sub_B5D69C(v16, v17);
    }
    v27[0] = 159;
    v28 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v28 = 0;
  }
  else
  {
    v15 = 0;
  }
  v21 = v15 + this->fields.isNeedStarting;
  if ( !this->fields.isFixedPosition )
    return v21;
  fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
LABEL_32:
    sub_B5D69C(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v26; ; v21 += LODWORD(i.fields.current[1].monitor) )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v22 )
      break;
    if ( !i.fields.current )
      sub_B5D69C(v22, v23);
  }
  v27[0] = 232;
  v24 = ++v28;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( v24 && v27[v24 - 1] == 232 )
    v28 = v24 - 1;
  return v21;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42ED2B6 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10498/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, v4, v5, v6);
    byte_42ED2B6 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10498/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *v29; // x19
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int v36; // w21
  int v37; // w8
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  _BOOL8 v40; // x0
  __int64 v41; // x1
  int v42; // w21
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-68h] BYREF
  int v44[3]; // [xsp+20h] [xbp-50h]
  int v45; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42ED2B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    byte_42ED2B3 = 1;
  }
  memset(&i, 0, sizeof(i));
  v45 = 0;
  if ( !this->fields.restrictionBaseEntity )
  {
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
  v29 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( this->fields.isFixedMyServantPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v43;
          ;
          System_Collections_Generic_List_int___AddRange(
            v29,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v32 )
        break;
      if ( !v29 )
        sub_B5D69C(v32, v33);
    }
    v44[0] = 134;
    v45 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v45 = 0;
  }
  if ( this->fields.isNeedStarting )
  {
    fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v43;
          ;
          System_Collections_Generic_List_int___AddRange(
            v29,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v34 )
        break;
      if ( !v29 )
        sub_B5D69C(v34, v35);
    }
    v44[0] = 196;
    v36 = ++v45;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v44[v36 - 1] == 196 )
      {
        --v36;
        v45 = v37;
      }
    }
  }
  else
  {
    v36 = 0;
  }
  if ( this->fields.isFixedPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v43;
          ;
          System_Collections_Generic_List_int___AddRange(
            v29,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v40 )
        break;
      if ( !v29 )
        sub_B5D69C(v40, v41);
    }
    v44[v36] = 260;
    v42 = ++v45;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v42 && v44[v42 - 1] == 260 )
      v45 = v42 - 1;
  }
  if ( !v29 )
LABEL_43:
    sub_B5D69C(fixedMyServantIndividualitiesList, v31);
  if ( v29->fields._size >= 1 )
    return System_Collections_Generic_List_int___ToArray(
             v29,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0LL;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42ED2B2 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10503/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, v4, v5, v6);
    byte_42ED2B2 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10503/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
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
  __int64 v3; // x3
  QuestRestrictionInfo_o *v5; // x20
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x9
  int max_length; // w10
  System_String_o **p_summary; // x8
  unsigned int v9; // w11
  RestrictionWholeEntity_o *v10; // x12
  __int64 v12; // x0

  v5 = this;
  if ( (byte_42ED29E & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, restrictionWholeType, (_DWORD)method, v3);
    byte_42ED29E = 1;
  }
  restrictionWholeEntities = v5->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_B5D69C(this, *(_QWORD *)&restrictionWholeType);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
  {
    p_summary = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_summary = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_15;
      if ( v10->fields.type == restrictionWholeType )
        break;
      if ( (int)++v9 >= max_length )
        return *p_summary;
    }
    p_summary = &v10->fields.summary;
  }
  return *p_summary;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_34261684(
        QuestRestrictionInfo_o *this,
        int32_t restrictionType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRestrictionInfo_o *v5; // x20
  struct RestrictionEntity_array *restrictionEntityList; // x9
  int max_length; // w10
  System_String_o **p_name; // x8
  unsigned int v9; // w11
  RestrictionEntity_o *v10; // x12
  __int64 v12; // x0

  v5 = this;
  if ( (byte_42ED29F & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, restrictionType, (_DWORD)method, v3);
    byte_42ED29F = 1;
  }
  restrictionEntityList = v5->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_B5D69C(this, *(_QWORD *)&restrictionType);
  max_length = restrictionEntityList->max_length;
  if ( max_length < 1 )
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      v10 = restrictionEntityList->m_Items[v9];
      if ( !v10 )
        goto LABEL_15;
      if ( v10->fields.type == restrictionType )
        break;
      if ( (int)++v9 >= max_length )
        return *p_name;
    }
    p_name = &v10->fields.name;
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
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x20
  void *IsNullOrEmpty; // x0
  System_String_o *summary; // x1
  System_String_o *v56; // x26
  System_String_o *v57; // x27
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x23
  int max_length; // w8
  unsigned int v60; // w24
  RestrictionWholeEntity_o *v61; // x21
  int v62; // w8
  void *v63; // x21
  unsigned int v64; // w22
  __int64 v65; // x26
  System_String_o *v66; // x0
  __int64 v68; // x0
  bool v69; // [xsp+Ch] [xbp-74h]
  unsigned int key; // [xsp+14h] [xbp-6Ch]

  if ( (byte_42ED29C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      pos,
      isNoneTitle,
      isSlotOnly);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_11232/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_11229/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v50, v51, v52);
    byte_42ED29C = 1;
  }
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_86;
  v69 = individuality;
  key = pos;
  if ( !isSlotOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v57 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
    {
LABEL_19:
      if ( !this->fields.isFatigure )
        goto LABEL_30;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11229/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( isNoneTitle )
      {
        if ( fatigue )
          goto LABEL_25;
      }
      else
      {
        IsNullOrEmpty = System_String__Format(v56, (Il2CppObject *)IsNullOrEmpty, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( fatigue )
        {
LABEL_25:
          IsNullOrEmpty = System_String__Concat_44577788(summary, v57, 0LL);
          summary = (System_String_o *)IsNullOrEmpty;
          if ( !v53 )
            goto LABEL_88;
          goto LABEL_29;
        }
      }
      if ( !v53 )
        goto LABEL_88;
LABEL_29:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v53,
        (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_30:
      if ( !this->fields.isNotSingleSupportOnly )
        goto LABEL_41;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( isNoneTitle )
      {
        if ( singleSupport )
          goto LABEL_36;
      }
      else
      {
        IsNullOrEmpty = System_String__Format(v56, (Il2CppObject *)IsNullOrEmpty, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( singleSupport )
        {
LABEL_36:
          IsNullOrEmpty = System_String__Concat_44577788(summary, v57, 0LL);
          summary = (System_String_o *)IsNullOrEmpty;
          if ( !v53 )
            goto LABEL_88;
          goto LABEL_40;
        }
      }
      if ( !v53 )
        goto LABEL_88;
LABEL_40:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v53,
        (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_41:
      restrictionWholeEntities = this->fields.restrictionWholeEntities;
      if ( !restrictionWholeEntities )
        goto LABEL_88;
      max_length = restrictionWholeEntities->max_length;
      if ( max_length >= 1 )
      {
        v60 = 0;
        while ( v60 < max_length )
        {
          v61 = restrictionWholeEntities->m_Items[v60];
          if ( !v61 )
            goto LABEL_88;
          IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v61->fields.summary, 0LL);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          {
            summary = v61->fields.summary;
            if ( !isNoneTitle )
            {
              IsNullOrEmpty = System_String__Format(v56, (Il2CppObject *)summary, 0LL);
              summary = (System_String_o *)IsNullOrEmpty;
            }
            switch ( v61->fields.type )
            {
              case 1:
                if ( v69 )
                  goto LABEL_65;
                break;
              case 2:
                if ( allOutBattle )
                  goto LABEL_65;
                break;
              case 4:
                if ( servantPos )
                  goto LABEL_65;
                break;
              case 5:
                if ( myServantPos )
                  goto LABEL_65;
                break;
              case 6:
              case 7:
                if ( supportPos )
                  goto LABEL_65;
                break;
              case 8:
                if ( needStarting )
                  goto LABEL_65;
                break;
              case 9:
                if ( uniqueIndividuality )
                  goto LABEL_65;
                break;
              case 0xA:
                if ( dataLostBattle )
                {
LABEL_65:
                  IsNullOrEmpty = System_String__Concat_44577788(summary, v57, 0LL);
                  summary = (System_String_o *)IsNullOrEmpty;
                }
                break;
              default:
                break;
            }
            if ( !v53 )
              goto LABEL_88;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v53,
              (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          }
          max_length = restrictionWholeEntities->max_length;
          if ( (int)++v60 >= max_length )
            goto LABEL_69;
        }
LABEL_89:
        v68 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v68, 0LL);
      }
      goto LABEL_69;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11232/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_14;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v56, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( uniqueServant )
      {
LABEL_14:
        IsNullOrEmpty = System_String__Concat_44577788(summary, v57, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v53 )
          goto LABEL_88;
        goto LABEL_18;
      }
    }
    if ( !v53 )
      goto LABEL_88;
LABEL_18:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v53,
      (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_19;
  }
LABEL_69:
  summary = (System_String_o *)key;
  if ( key )
  {
    IsNullOrEmpty = this->fields.restrictionSlotDetailDictionary;
    if ( !IsNullOrEmpty
      || (IsNullOrEmpty = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)IsNullOrEmpty,
                            key,
                            (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_88:
      sub_B5D69C(IsNullOrEmpty, summary);
    }
    v62 = *((_DWORD *)IsNullOrEmpty + 6);
    v63 = IsNullOrEmpty;
    if ( v62 >= 1 )
    {
      v64 = 0;
      while ( v64 < v62 )
      {
        v65 = *((_QWORD *)v63 + (int)v64 + 4);
        if ( !v65 )
          goto LABEL_88;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v65 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v65 + 24);
            if ( !v53 )
              goto LABEL_88;
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v66 = LocalizationManager__Get((System_String_o *)StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v66, *(Il2CppObject **)(v65 + 24), 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
            if ( !v53 )
              goto LABEL_88;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v53,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v62 = *((_DWORD *)v63 + 6);
        if ( (int)++v64 >= v62 )
          goto LABEL_86;
      }
      goto LABEL_89;
    }
  }
LABEL_86:
  if ( !v53 )
    goto LABEL_88;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v53,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall QuestRestrictionInfo__GetMessages_34260560(
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
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  System_String_o *v42; // x28
  System_String_o *v43; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x26
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *name; // x1
  signed int max_length; // w8
  unsigned int v48; // w20
  RestrictionEntity_o *v49; // x19
  __int64 v51; // x0

  if ( (byte_42ED29D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)entities, isNoneTitle, isSlotOnly);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_11229/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v39, v40, v41);
    byte_42ED29D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !isSlotOnly && this->fields.isFatigure )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11229/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
    name = IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( !fatigue )
        goto LABEL_13;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v42, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
      if ( !fatigue )
      {
LABEL_13:
        if ( !v44 )
          goto LABEL_57;
        goto LABEL_17;
      }
    }
    IsNullOrEmpty = System_String__Concat_44577788(name, v43, 0LL);
    name = IsNullOrEmpty;
    if ( !v44 )
      goto LABEL_57;
LABEL_17:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v44,
      (EventMissionProgressRequest_Argument_ProgressData_o *)name,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v42, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_44577788(name, v43, 0LL);
      name = IsNullOrEmpty;
    }
    if ( !v44 )
      goto LABEL_57;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v44,
      (EventMissionProgressRequest_Argument_ProgressData_o *)name,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( !entities )
    goto LABEL_57;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= max_length )
      {
        v51 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v51, 0LL);
      }
      v49 = entities->m_Items[v48];
      if ( !v49 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v49->fields.name, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v49->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v49, 0LL);
          name = IsNullOrEmpty;
        }
        switch ( v49->fields.type )
        {
          case 1:
            if ( individuality )
              goto LABEL_51;
            break;
          case 6:
            if ( uniqueServant )
              goto LABEL_51;
            break;
          case 7:
            if ( supportPos )
              goto LABEL_51;
            break;
          case 8:
          case 9:
          case 0xE:
            if ( fixedPos )
              goto LABEL_51;
            break;
          case 0xD:
            if ( allOutBattle )
              goto LABEL_51;
            break;
          case 0xF:
            if ( uniqueIndividuality )
              goto LABEL_51;
            break;
          case 0x11:
            if ( dataLostBattle )
            {
LABEL_51:
              IsNullOrEmpty = System_String__Concat_44577788(name, v43, 0LL);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v44 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v44,
          (EventMissionProgressRequest_Argument_ProgressData_o *)name,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v48 >= max_length )
        goto LABEL_55;
    }
LABEL_57:
    sub_B5D69C(IsNullOrEmpty, name);
  }
LABEL_55:
  if ( !v44 )
    goto LABEL_57;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v3; // x3
  QuestRestrictionInfo_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v22; // w21
  RestrictionWholeEntity_o *v23; // x25
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int32_t v25; // w20
  int32_t v26; // w9
  QuestRestrictionInfo_SlotInfo_o *v27; // x8
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v29; // x21
  unsigned int v30; // w27
  __int64 v31; // x28
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int v33; // w9
  unsigned int v34; // w10
  RestrictionEntity_o *v35; // x11
  WarEntity_o *v37; // x8
  __int64 v38; // x0
  WarEntity_o *v39; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_42ED2C4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v14, v15, v16);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42ED2C4 = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  if ( v4->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_57;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_16:
      slotInfos = v4->fields.slotInfos;
      if ( !slotInfos )
        goto LABEL_57;
      v25 = 0;
      while ( 1 )
      {
        v26 = slotInfos->max_length;
        if ( v25 >= v26 )
          return (System_String_o *)StringLiteral_1/*""*/;
        if ( v25 >= (unsigned int)v26 )
          goto LABEL_58;
        v27 = slotInfos->m_Items[v25];
        if ( !v27 )
          goto LABEL_57;
        if ( v27->fields.slotType )
        {
          ++v25;
        }
        else
        {
          this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
          if ( !this )
            goto LABEL_57;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                             ++v25,
                                             (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_57;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                               v25,
                                               (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
            if ( !this )
              goto LABEL_57;
            dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
            v29 = this;
            if ( dialogMessageInfoDictionary >= 1 )
            {
              v30 = 0;
              while ( 1 )
              {
                if ( v30 >= dialogMessageInfoDictionary )
                  goto LABEL_58;
                v31 = *((_QWORD *)&v29->fields.eventId + (int)v30);
                if ( !v31 )
                  goto LABEL_57;
                if ( *(_DWORD *)(v31 + 44) && !*(_DWORD *)(v31 + 40) )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_57;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     &v39,
                                                     *(_DWORD *)(v31 + 44),
                                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
                dialogMessageInfoDictionary = (int)v29->fields.dialogMessageInfoDictionary;
                if ( (int)++v30 >= dialogMessageInfoDictionary )
                  goto LABEL_39;
              }
              v37 = v39;
              if ( v39 )
                return v37->fields.age;
LABEL_57:
              sub_B5D69C(this, method);
            }
          }
        }
LABEL_39:
        slotInfos = v4->fields.slotInfos;
        if ( !slotInfos )
          goto LABEL_57;
      }
    }
    v22 = 0;
    while ( v22 < max_length )
    {
      v23 = restrictionWholeEntities->m_Items[v22];
      if ( !v23 )
        goto LABEL_57;
      if ( v23->fields.type == 3 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_57;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v23->fields.restrictionMessageId,
                                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v37 = entity;
          if ( entity )
            return v37->fields.age;
          goto LABEL_57;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_16;
    }
    goto LABEL_58;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_57;
  v33 = restrictionEntityList->max_length;
  if ( v33 >= 1 )
  {
    v34 = 0;
    method = 0LL;
    while ( v34 < v33 )
    {
      v35 = restrictionEntityList->m_Items[v34];
      if ( !v35 )
        goto LABEL_57;
      if ( v35->fields.type == 11 )
        method = (const MethodInfo *)v34;
      else
        method = (const MethodInfo *)(unsigned int)method;
      if ( (int)++v34 >= v33 )
        return QuestRestrictionInfo__GetDialogMessage(v4, (int32_t)method, v2);
    }
LABEL_58:
    v38 = sub_B5D6C8(this);
    sub_B5D668(v38, 0LL);
  }
  LODWORD(method) = 0;
  return QuestRestrictionInfo__GetDialogMessage(v4, (int32_t)method, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  Il2CppObject *RestrictedName; // x19
  __int64 *v14; // x8
  System_String_o *v15; // x0

  if ( (byte_42ED2CD & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, pos, haveIndividualityServant, method);
    sub_B5D5C4(&StringLiteral_10505/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_10508/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/, v10, v11, v12);
    byte_42ED2CD = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( haveIndividualityServant )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_10505/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_10508/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  }
  v15 = LocalizationManager__Get((System_String_o *)*v14, 0LL);
  return System_String__Format(v15, RestrictedName, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *v4; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v4 = this;
  if ( (byte_42ED2E1 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(
                                       &Method_System_Collections_Generic_List_RestrictionEntity__get_Count__,
                                       (_DWORD)method,
                                       v2,
                                       v3);
    byte_42ED2E1 = 1;
  }
  if ( !v4->fields.isMyServantOrNpc && !v4->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v4->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_B5D69C(this, method);
  return myServantOrNpcRestrictionEntityList->fields._size;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  __int64 v48; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_int__o *v57; // x20
  int v58; // w8
  void *v59; // x19
  unsigned int v60; // w21
  __int64 v61; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *changeMaterial; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x1
  const MethodInfo_1CACD4C *v65; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v68; // x20
  peRenderTexture_ChangeLayerObject_o *v69; // x0
  peRenderTexture_ChangeLayerObject_o *v70; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  __int64 v73; // x0

  if ( (byte_42ED2CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__DisplayClass184_0__GetMyServantOrNpcSvtIdList_b__0__, v42, v43, v44);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo, v45, v46, v47);
    byte_42ED2CF = 1;
  }
  v48 = sub_B5D694(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass184_0___ctor((QuestRestrictionInfo___c__DisplayClass184_0_o *)v48, 0LL);
  if ( !v48 )
    goto LABEL_29;
  *(_QWORD *)(v48 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 16), (System_Int32_array **)this, v51, v52, v53, v54, v55, v56);
  *(_DWORD *)(v48 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v57 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v57,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v48 + 24),
                                        (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v58 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v59 = restrictionSlotDetailDictionary;
    if ( v58 >= 1 )
    {
      v60 = 0;
      while ( 1 )
      {
        if ( v60 >= v58 )
        {
          v73 = sub_B5D6C8(restrictionSlotDetailDictionary);
          sub_B5D668(v73, 0LL);
        }
        v61 = *((_QWORD *)v59 + (int)v60 + 4);
        if ( !v61 )
          break;
        if ( *(_DWORD *)(v61 + 32) == 1 )
        {
          if ( !v57 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v57,
            *(System_Collections_Generic_IEnumerable_T__o **)(v61 + 40),
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v58 = *((_DWORD *)v59 + 6);
        if ( (int)++v60 >= v58 )
          goto LABEL_15;
      }
LABEL_29:
      sub_B5D69C(restrictionSlotDetailDictionary, v50);
    }
LABEL_15:
    if ( !v57 )
      goto LABEL_29;
    if ( v57->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      changeMaterial = System_Linq_Enumerable__Distinct_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                         (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
      v64 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v65 = (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v71 = System_Linq_Enumerable__Intersect_int_(changeMaterial, v64, v65);
      return System_Linq_Enumerable__ToArray_int_(
               v71,
               (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
  }
  else
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_29;
    if ( (signed int)questRestrictionEntityList->max_length > index )
    {
      myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
      v68 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v68,
        (Il2CppObject *)v48,
        Method_QuestRestrictionInfo___c__DisplayClass184_0__GetMyServantOrNpcSvtIdList_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v69 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v68,
              (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v69 )
      {
        v70 = v69;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v64 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        changeMaterial = (System_Collections_Generic_IEnumerable_TSource__o *)v70->fields.changeMaterial;
        v65 = (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  QuestRestrictionInfo___c__DisplayClass198_0_o *v80; // x22
  DataManager_o *Instance; // x0
  __int64 v82; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v83; // x19
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  const MethodInfo *v90; // x2
  _QWORD **v91; // x24
  __int64 v92; // x19
  __int16 v93; // w8
  __int64 v94; // x19
  __int64 v95; // x19
  __int64 v96; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x21
  System_Int32_array *MyServantOrNpcSvtIdList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v99; // x23
  peRenderTexture_ChangeLayerObject_o *v100; // x0
  peRenderTexture_ChangeLayerObject_o *v101; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x0
  int32_t MyServantOrSupportTargetPos; // w25
  const MethodInfo *v105; // x2
  _QWORD **v106; // x21
  __int64 v107; // x19
  __int16 v108; // w8
  __int64 v109; // x19
  __int64 v110; // x19
  __int64 v111; // x19
  System_Collections_Generic_List_int__o *v112; // x23
  FollowerInfo_array *QuestFollowerList; // x24
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v115; // x26
  int i; // w22
  FollowerInfo_o *v117; // x27
  DataManager_o *v118; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  const MethodInfo *v121; // x3
  System_Int32_array *OverwriteIndividuality; // x0
  const MethodInfo *v123; // x3
  struct System_Collections_Generic_List_string__o *saveNameList; // x19
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x21
  int32_t v126; // w0
  const MethodInfo *v127; // x6
  struct System_Collections_Generic_List_string__o *v128; // x19
  struct System_Collections_Generic_List_long____o *v129; // x21
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v130; // x21
  struct System_Collections_Generic_List_string__o *v131; // x19
  struct System_Collections_Generic_List_long____o *v132; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v133; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x0
  __int64 v136; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+8h] [xbp-78h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UserServantEntity_o *v140; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_42ED2D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)npcInfoDictionary, index, indexIsPos);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int___, v41, v42, v43);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v44, v45, v46);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Union_int___, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v65, v66, v67);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v71, v72, v73);
    sub_B5D5C4(
      &Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      v74,
      v75,
      v76);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo, v77, v78, v79);
    byte_42ED2D8 = 1;
  }
  v140 = 0LL;
  entity = 0LL;
  v80 = (QuestRestrictionInfo___c__DisplayClass198_0_o *)sub_B5D694(QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass198_0___ctor(v80, 0LL);
  if ( !v80 )
    goto LABEL_76;
  v80->fields.index = index;
  v83 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v83,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v83;
  sub_B5D560(
    (BattleServantConfConponent_o *)npcInfoDictionary,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v91 = (_QWORD **)Method_System_Array_Empty_int___;
  v92 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v93 = *(_WORD *)(v92 + 306);
  if ( (v93 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v93 = *(_WORD *)(v92 + 306);
  }
  if ( (v93 & 0x400) != 0 )
  {
    v94 = *v91[6];
    if ( (*(_BYTE *)(v94 + 306) & 1) == 0 )
      sub_AF52C4(*v91[6]);
    if ( !*(_DWORD *)(v94 + 224) )
    {
      v95 = *v91[6];
      if ( (*(_BYTE *)(v95 + 306) & 1) == 0 )
        sub_AF52C4(*v91[6]);
      j_il2cpp_runtime_class_init_0(v95);
    }
  }
  v96 = *v91[6];
  if ( (*(_BYTE *)(v96 + 306) & 1) == 0 )
    sub_AF52C4(*v91[6]);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v96 + 184);
    v99 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v99,
      (Il2CppObject *)v80,
      Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_76;
    v100 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
             (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
             (System_Predicate_T__o *)v99,
             (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v100 )
    {
      v101 = v100;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v103 = System_Linq_Enumerable__Intersect_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v101->fields.changeMaterial,
               CollectionList,
               (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v103,
                                  (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v80->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v80->fields.index, v90);
    if ( !MyServantOrNpcSvtIdList )
    {
      v106 = (_QWORD **)Method_System_Array_Empty_int___;
      v107 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v108 = *(_WORD *)(v107 + 306);
      if ( (v108 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v108 = *(_WORD *)(v107 + 306);
      }
      if ( (v108 & 0x400) != 0 )
      {
        v109 = *v106[6];
        if ( (*(_BYTE *)(v109 + 306) & 1) == 0 )
          sub_AF52C4(*v106[6]);
        if ( !*(_DWORD *)(v109 + 224) )
        {
          v110 = *v106[6];
          if ( (*(_BYTE *)(v110 + 306) & 1) == 0 )
            sub_AF52C4(*v106[6]);
          j_il2cpp_runtime_class_init_0(v110);
        }
      }
      v111 = *v106[6];
      if ( (*(_BYTE *)(v111 + 306) & 1) == 0 )
        sub_AF52C4(*v106[6]);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v111 + 184);
    }
    MyServantOrSupportTargetPos = v80->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v105);
  }
  v112 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v112,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_76;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        this->fields.questId,
                        this->fields.questPhase,
                        0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList,
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___),
        !QuestFollowerList) )
  {
LABEL_76:
    sub_B5D69C(Instance, v82);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v115 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v136 = sub_B5D6C8(Instance);
        sub_B5D668(v136, 0LL);
      }
      v117 = QuestFollowerList->m_Items[i];
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v117 )
        goto LABEL_76;
      Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(v117, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        if ( !v115 )
          goto LABEL_76;
        v118 = Instance;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               v115,
               &entity,
               v117->fields.npcFollowerSvtId,
               (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
        {
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
          NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v117, 0, ReturnTypeByQuestId, 0LL);
          Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_34285280(
                                        this,
                                        NpcServantIndividuality,
                                        MyServantOrSupportTargetPos,
                                        v121);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_74;
        }
        else
        {
          Instance = (DataManager_o *)Master_WarQuestSelectionMaster;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_76;
          if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                  Master_WarQuestSelectionMaster,
                  &v140,
                  v117->fields.npcFollowerSvtId,
                  (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            goto LABEL_80;
          Instance = (DataManager_o *)v140;
          if ( !v140 )
            goto LABEL_76;
          if ( !NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v140, 0LL) )
            goto LABEL_80;
          Instance = (DataManager_o *)v140;
          if ( !v140 )
            goto LABEL_76;
          OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                     (NpcServantFollowerEntity_o *)v140,
                                     0LL);
          if ( QuestRestrictionInfo__IsRestrictionServantIndividuality_34285280(
                 this,
                 OverwriteIndividuality,
                 MyServantOrSupportTargetPos,
                 v123) )
          {
LABEL_80:
            saveNameList = v118->fields.saveNameList;
            saveDataMapList = v118->fields.saveDataMapList;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v142.fields.currentCryptoKey = saveNameList;
            *(_QWORD *)&v142.fields.fakeValue = saveDataMapList;
            v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v142, 0LL);
            Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                          this,
                                          v126,
                                          LODWORD(v118->fields.lastFrameTime),
                                          HIDWORD(v118[1].fields.datalist),
                                          MyServantOrSupportTargetPos,
                                          0,
                                          v127);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_74;
          }
        }
        v128 = v118->fields.saveNameList;
        v129 = v118->fields.saveDataMapList;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v143.fields.currentCryptoKey = v128;
        *(_QWORD *)&v143.fields.fakeValue = v129;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v143, 0LL);
        if ( !v112 )
          goto LABEL_76;
        System_Collections_Generic_List_int___Add(
          v112,
          (int32_t)Instance,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        v130 = *npcInfoDictionary;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v118->fields.saveNameList,
                                      0LL);
        if ( !v130 )
          goto LABEL_76;
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v130,
                                      (int32_t)Instance,
                                      (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v131 = v118->fields.saveNameList;
          v132 = v118->fields.saveDataMapList;
          v133 = *npcInfoDictionary;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v144.fields.currentCryptoKey = v131;
          *(_QWORD *)&v144.fields.fakeValue = v132;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v144, 0LL);
          if ( !v133 )
            goto LABEL_76;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v133,
            (int32_t)Instance,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v117,
            (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
        }
      }
LABEL_74:
      max_length = QuestFollowerList->max_length;
    }
  }
  v134 = System_Linq_Enumerable__Union_int_(
           first,
           (System_Collections_Generic_IEnumerable_TSource__o *)v112,
           (const MethodInfo_1CBAA28 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v134,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 *v22; // x8
  int *MyServantOrNpcSvtIdList; // x0
  int v24; // w8
  int *v25; // x19
  __int64 v26; // x20
  int v27; // w23
  __int64 v29; // x0

  if ( (byte_42ED2CE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, pos, haveIndividualityServant, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_10510/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_10509/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_10507/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10506/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/, v19, v20, v21);
    byte_42ED2CE = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = &StringLiteral_10507/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = &StringLiteral_10506/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
  }
  else
  {
    MyServantOrNpcSvtIdList = (int *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
                                       this,
                                       pos,
                                       (const MethodInfo *)haveIndividualityServant);
    if ( MyServantOrNpcSvtIdList && (v24 = MyServantOrNpcSvtIdList[6], v25 = MyServantOrNpcSvtIdList, v24 >= 1) )
    {
      v26 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v26 >= v24 )
        {
          v29 = sub_B5D6C8(MyServantOrNpcSvtIdList);
          sub_B5D668(v29, 0LL);
        }
        MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        v27 = v25[v26 + 8];
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        }
        if ( v27 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 844LL) )
          break;
        v24 = v25[6];
        if ( (int)++v26 >= v24 )
          goto LABEL_23;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = &StringLiteral_10509/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = &StringLiteral_10510/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
    }
  }
  return LocalizationManager__Get((System_String_o *)*v22, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  peRenderTexture_ChangeLayerObject_o *v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x20
  __int64 v30; // x8
  __int64 v31; // x0

  if ( (byte_42ED2D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_QuestRestrictionInfo___c__DisplayClass185_0__GetMyServantOrSupportTargetPos_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo, v15, v16, v17);
    byte_42ED2D0 = 1;
  }
  v18 = sub_B5D694(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass185_0___ctor((QuestRestrictionInfo___c__DisplayClass185_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_14;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v18 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
    goto LABEL_12;
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_14;
  if ( (signed int)questRestrictionEntityList->max_length <= index )
  {
LABEL_12:
    LODWORD(v19) = 0;
    return (int)v19;
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_QuestRestrictionInfo___c__DisplayClass185_0__GetMyServantOrSupportTargetPos_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v19 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
          (System_Predicate_T__o *)v29,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v19 )
    return (int)v19;
  v30 = *(_QWORD *)&v19->fields.prevLayer;
  if ( !v30 )
LABEL_14:
    sub_B5D69C(v19, v20);
  if ( !*(_DWORD *)(v30 + 24) )
  {
    v31 = sub_B5D6C8(v19);
    sub_B5D668(v31, 0LL);
  }
  LODWORD(v19) = *(_DWORD *)(v30 + 32);
  return (int)v19;
}


System_Collections_Generic_List_int____o *__fastcall QuestRestrictionInfo__GetNeedIndividualityList(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8
  __int64 v6; // x0

  if ( !this->fields.restrictionBaseEntity )
    return 0LL;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_8;
  if ( pos - 1 >= slotInfos->max_length )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B5D69C(this, pos);
  return v4->fields.individualityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetNeedIndividualityMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  System_String_o *DialogMessage; // x19
  int v29; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42ED2D2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__,
      pos,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42ED2D2 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !this->fields.restrictionBaseEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary )
    sub_B5D69C(0LL, *(_QWORD *)&pos);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dialogMessageInfoDictionary,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
  while ( 1 )
  {
    v25 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v31,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    if ( !v25 )
      break;
    if ( !v31.fields.current.fields.value )
      sub_B5D69C(v25, v26);
    if ( LODWORD(v31.fields.current.fields.value[1].klass) == pos )
    {
      DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v31.fields.current.fields.key, v27);
      v29 = 34;
      goto LABEL_11;
    }
  }
  DialogMessage = 0LL;
  v29 = 28;
LABEL_11:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v31,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  if ( v29 != 34 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return DialogMessage;
}


int32_t __fastcall QuestRestrictionInfo__GetNeedStartingSvtCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ED2DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12, v13);
    byte_42ED2DD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v19.fields.current[1].monitor) )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v16 )
      break;
    if ( !v19.fields.current )
      sub_B5D69C(v16, v17);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetNeedStartingSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  __int64 v27; // x1
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ED2DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42ED2DA = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v29 )
      break;
    if ( !v26 )
      sub_B5D69C(v29, v30);
    System_Collections_Generic_List_int___AddRange(
      v26,
      (System_Collections_Generic_IEnumerable_T__o *)v32.fields.current,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v26 )
LABEL_15:
    sub_B5D69C(needStartingIndividualitiesList, v27);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int32_t FixedServantPositionCount; // w0
  const MethodInfo *v27; // x1
  int v28; // w21
  __int64 FixedServantPositionSvtIdList; // x0
  __int64 v30; // x1
  __int64 v31; // x20
  System_String_array *v32; // x19
  unsigned __int64 v33; // x24
  signed __int64 v34; // x25
  BattleServantConfConponent_o *i; // x21
  int32_t v36; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t maxLimitCount; // w22
  int32_t v39; // w1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  __int64 v48; // x0
  __int64 v49; // x0
  UserServantCollectionEntity_o *v50; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42ED2BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&OptionManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&string___TypeInfo, v23, v24, v25);
    byte_42ED2BF = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v28 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v27);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_42;
  v31 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_B5D5DC(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v32 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v28 >= 1 )
  {
    v33 = 0LL;
    v34 = v28;
    for ( i = (BattleServantConfConponent_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      if ( v33 >= *(unsigned int *)(v31 + 24) )
      {
LABEL_43:
        v48 = sub_B5D6C8(FixedServantPositionSvtIdList);
        sub_B5D668(v48, 0LL);
      }
      v36 = *(_DWORD *)(v31 + 32 + 4 * v33);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)FixedServantPositionSvtIdList,
              &entity,
              v36,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)FixedServantPositionSvtIdList,
                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      FixedServantPositionSvtIdList = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &v50,
              FixedServantPositionSvtIdList,
              v36,
              0LL) )
        goto LABEL_26;
      FixedServantPositionSvtIdList = (__int64)v50;
      if ( !v50 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v50, 0LL);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v50 )
          break;
        maxLimitCount = v50->fields.maxLimitCount;
      }
      else
      {
LABEL_26:
        maxLimitCount = -1;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      FixedServantPositionSvtIdList = OptionManager__GetSpoilerSetting(0LL);
      if ( !entity )
        break;
      v39 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v39, -1, 0LL);
      if ( !v32 )
        break;
      v46 = (System_Int32_array **)FixedServantPositionSvtIdList;
      if ( FixedServantPositionSvtIdList )
      {
        FixedServantPositionSvtIdList = sub_B5D684(FixedServantPositionSvtIdList, v32->obj.klass->_1.element_class);
        if ( !FixedServantPositionSvtIdList )
        {
          v49 = sub_B5D6BC(0LL);
          sub_B5D668(v49, 0LL);
        }
      }
      if ( v33 >= v32->max_length )
        goto LABEL_43;
      i->klass = (BattleServantConfConponent_c *)v46;
      sub_B5D560(i, v46, v40, v41, v42, v43, v44, v45);
      if ( (__int64)++v33 >= v34 )
        return v32;
    }
LABEL_42:
    sub_B5D69C(FixedServantPositionSvtIdList, v30);
  }
  return v32;
}


System_Collections_Generic_List_Restriction_RangeType__o *__fastcall QuestRestrictionInfo__GetRangeTypeList(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8
  __int64 v6; // x0

  if ( !this->fields.restrictionBaseEntity )
    return 0LL;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_8;
  if ( pos - 1 >= slotInfos->max_length )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B5D69C(this, pos);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v25; // x20
  unsigned int v26; // w19
  __int64 v27; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v29; // x27
  __int64 v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  __int64 v38; // x22
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  __int64 v43; // x0
  System_String_o *v44; // [xsp+8h] [xbp-58h]

  v5 = this;
  if ( (byte_42ED2CC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__,
      pos,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__DisplayClass181_0__GetRestrictedName_b__0__, v15, v16, v17);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo, v18, v19, v20);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42ED2CC = 1;
  }
  v44 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v5->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v5->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                         pos,
                                         (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v25 = this;
        if ( dialogMessageInfoDictionary >= 1 )
        {
          v26 = 0;
          while ( 1 )
          {
            if ( v26 >= dialogMessageInfoDictionary )
              goto LABEL_30;
            v27 = *((_QWORD *)&v25->fields.eventId + (int)v26);
            if ( !v27 )
              goto LABEL_29;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v27 + 32), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              return *(System_String_o **)(v27 + 32);
            dialogMessageInfoDictionary = (int)v25->fields.dialogMessageInfoDictionary;
            if ( (int)++v26 >= dialogMessageInfoDictionary )
              return v44;
          }
        }
        return v44;
      }
    }
LABEL_29:
    sub_B5D69C(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v5->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      v30 = sub_B5D694(QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass181_0___ctor((QuestRestrictionInfo___c__DisplayClass181_0_o *)v30, 0LL);
      if ( v29 >= questRestrictionEntityList->max_length )
        break;
      if ( !v30 )
        goto LABEL_29;
      v37 = (System_Int32_array **)questRestrictionEntityList->m_Items[v29];
      *(_QWORD *)(v30 + 16) = v37;
      v38 = v30 + 16;
      sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), v37, v31, v32, v33, v34, v35, v36);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v5->fields.myServantOrNpcRestrictionEntityList;
      v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v40,
        (Il2CppObject *)v30,
        Method_QuestRestrictionInfo___c__DisplayClass181_0__GetRestrictedName_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v40,
                                         (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !deckSvtIdList->max_length )
          break;
        if ( deckSvtIdList->m_Items[1] == pos )
        {
          if ( !*(_QWORD *)v38 )
            goto LABEL_29;
          v44 = *(System_String_o **)(*(_QWORD *)v38 + 48LL);
        }
      }
      if ( (__int64)++v29 >= (int)questRestrictionEntityList->max_length )
        return v44;
    }
LABEL_30:
    v43 = sub_B5D6C8(this);
    sub_B5D668(v43, 0LL);
  }
  return v44;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRestrictionInfo_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x9
  __int64 v32; // x20
  QuestRestrictionInfo_SlotInfo_o *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v36; // x8
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__105_0; // x20
  Il2CppObject *v39; // x21
  struct QuestRestrictionInfo___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  System_String_o *v48; // x0
  System_Collections_Generic_IEnumerable_string__o *v49; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v50; // x8
  QuestRestrictionInfo_SlotInfo_o *v51; // x8
  __int64 v52; // x0

  v5 = this;
  if ( (byte_42ED2A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Prepend_string___, initPos, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_RestrictionEntity__string___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_RestrictionEntity__string__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__105_0__, v18, v19, v20);
    sub_B5D5C4(&QuestRestrictionInfo___c_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v24, v25, v26);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v27, v28, v29);
    byte_42ED2A8 = 1;
  }
  if ( v5->fields.restrictionBaseEntity )
  {
    v30 = initPos - 1;
    if ( initPos < 1 )
      return v5->fields.restrictionMessage;
    slotInfos = v5->fields.slotInfos;
    if ( slotInfos )
    {
      if ( v30 >= slotInfos->max_length )
        goto LABEL_30;
      v32 = v30;
      v33 = slotInfos->m_Items[v30];
      if ( !v33 )
        goto LABEL_29;
      if ( System_String__IsNullOrEmpty(v33->fields.summary, 0LL) )
        return v5->fields.restrictionMessage;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v50 = v5->fields.slotInfos;
      if ( !v50 )
        goto LABEL_29;
      if ( (unsigned int)v32 >= v50->max_length )
      {
LABEL_30:
        v52 = sub_B5D6C8(this);
        sub_B5D668(v52, 0LL);
      }
      v51 = v50->m_Items[v32];
      if ( v51 )
        return System_String__Concat_44580072(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_26/*"\n"*/,
                 v51->fields.summary,
                 0LL);
    }
LABEL_29:
    sub_B5D69C(this, *(_QWORD *)&initPos);
  }
  RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                                                                        v5,
                                                                                        *(const MethodInfo **)&initPos);
  v36 = QuestRestrictionInfo___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v36 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__105_0,
      v39,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__105_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_RestrictionEntity__string___ctor__);
    v40 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v40->__9__105_0 = (struct System_Func_RestrictionEntity__string__o *)_9__105_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__105_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v49 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_string_(
                                                              v47,
                                                              v48,
                                                              (const MethodInfo_1CAF784 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_44633232((System_String_o *)StringLiteral_26/*"\n"*/, v49, 0LL);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *__fastcall QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  QuestRestrictionInfo___c_c *v18; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__106_0; // x20
  Il2CppObject *v21; // x21
  struct QuestRestrictionInfo___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42ED2A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_RestrictionEntity__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_RestrictionEntity__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__106_0__, v11, v12, v13);
    sub_B5D5C4(&QuestRestrictionInfo___c_TypeInfo, v14, v15, v16);
    byte_42ED2A9 = 1;
  }
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  v18 = QuestRestrictionInfo___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v18 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__106_0,
      v21,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__106_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionEntity__bool___ctor__);
    v22 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v22->__9__106_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__106_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__106_0,
                                                                          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int32_t ServantImageLimitSealAfter; // w21

  if ( (byte_42ED2A3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      svtId,
      limitCount,
      *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42ED2A3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v18);
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
  int v2; // w2
  __int64 v3; // x3
  RestrictionBaseEntity_o *restrictionBaseEntity; // x0
  struct RestrictionEntity_o *servantNumRestrictionEntity; // x8
  int32_t servantNumMax; // w19
  BalanceConfig_c *v9; // x0

  if ( (byte_42ED2C0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED2C0 = 1;
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
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
      sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  QuestRestrictionInfo_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v19; // w21
  RestrictionWholeEntity_o *v20; // x25
  int32_t v21; // w20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v23; // x21
  unsigned int v24; // w26
  __int64 v25; // x27
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int v28; // w9
  unsigned int v29; // w10
  RestrictionEntity_o *v30; // x11
  WarEntity_o *v31; // x8
  __int64 v32; // x0
  WarEntity_o *v33; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42ED2C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v11, v12, v13);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42ED2C2 = 1;
  }
  entity = 0LL;
  v33 = 0LL;
  if ( v4->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_51;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      if ( v4->fields.servantNumMin < 1 )
        return (System_String_o *)StringLiteral_1/*""*/;
      v21 = 1;
      while ( 1 )
      {
        this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                           v21,
                                           (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
        if ( !this )
          goto LABEL_51;
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v23 = this;
        if ( dialogMessageInfoDictionary >= 1 )
          break;
LABEL_33:
        if ( ++v21 > v4->fields.servantNumMin )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
      v24 = 0;
      while ( 1 )
      {
        if ( v24 >= dialogMessageInfoDictionary )
          goto LABEL_52;
        v25 = *((_QWORD *)&v23->fields.eventId + (int)v24);
        if ( !v25 )
          goto LABEL_51;
        if ( *(_DWORD *)(v25 + 44) && !*(_DWORD *)(v25 + 40) )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_51;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                             &v33,
                                             *(_DWORD *)(v25 + 44),
                                             (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        dialogMessageInfoDictionary = (int)v23->fields.dialogMessageInfoDictionary;
        if ( (int)++v24 >= dialogMessageInfoDictionary )
          goto LABEL_33;
      }
      v31 = v33;
      if ( !v33 )
        goto LABEL_51;
    }
    else
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= max_length )
          goto LABEL_52;
        v20 = restrictionWholeEntities->m_Items[v19];
        if ( !v20 )
          goto LABEL_51;
        if ( v20->fields.restrictionMessageId && v20->fields.type == 3 )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_51;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                             &entity,
                                             v20->fields.restrictionMessageId,
                                             (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v19 >= max_length )
          goto LABEL_17;
      }
      v31 = entity;
      if ( !entity )
        goto LABEL_51;
    }
    return v31->fields.age;
  }
  else
  {
    restrictionEntityList = v4->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_51;
    v28 = restrictionEntityList->max_length;
    if ( v28 >= 1 )
    {
      v29 = 0;
      method = 0LL;
      while ( 1 )
      {
        if ( v29 >= v28 )
        {
LABEL_52:
          v32 = sub_B5D6C8(this);
          sub_B5D668(v32, 0LL);
        }
        v30 = restrictionEntityList->m_Items[v29];
        if ( !v30 )
          break;
        if ( v30->fields.type == 10 )
          method = (const MethodInfo *)v29;
        else
          method = (const MethodInfo *)(unsigned int)method;
        if ( (int)++v29 >= v28 )
          return QuestRestrictionInfo__GetDialogMessage(v4, (int32_t)method, v2);
      }
LABEL_51:
      sub_B5D69C(this, method);
    }
    LODWORD(method) = 0;
    return QuestRestrictionInfo__GetDialogMessage(v4, (int32_t)method, v2);
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetServantNumRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t ServantNumRangeType; // w0
  int32_t servantNumMax; // w20
  BalanceConfig_c *v19; // x0
  System_String_o *v20; // x20
  int32_t *v21; // x1
  Il2CppObject *v22; // x0
  int32_t v24; // [xsp+8h] [xbp-18h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ED2C1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10512/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10511/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, v14, v15, v16);
    byte_42ED2C1 = 1;
  }
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(this, method);
  if ( ServantNumRangeType == 5 )
    goto LABEL_20;
  if ( ServantNumRangeType != 4 )
    goto LABEL_21;
  servantNumMax = this->fields.servantNumMax;
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( servantNumMax > v19->static_fields->DeckMainMemberMax )
  {
LABEL_20:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10512/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
    v21 = &v25;
    v25 = this->fields.servantNumMax;
  }
  else
  {
LABEL_21:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
    v21 = &v24;
    v24 = this->fields.servantNumMax;
  }
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v21);
  return System_String__Format(v20, v22, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetServantRarity(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42ED2A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, svtId, limitCount, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42ED2A2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42ED2AA & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10513/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, v4, v5, v6);
    byte_42ED2AA = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10513/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  System_String_o *result; // x0
  System_String_c *klass; // x19
  Il2CppObject *v7; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ED2B9 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED2B9 = 1;
  }
  result = (System_String_o *)this->fields.totalCostRestrictionEntity;
  if ( result )
  {
    klass = result[1].klass;
    TotalCost = RestrictionEntity__getTotalCost((RestrictionEntity_o *)result, 0LL);
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalCost);
    return System_String__Format((System_String_o *)klass, v7, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetUniqueIndividualityRestrictionMessage(
        QuestRestrictionInfo_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRestrictionInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x8
  int max_length; // w9
  unsigned int v14; // w10
  RestrictionWholeEntity_o *v15; // x11
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42ED2B0 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, isFixMessage, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_10515/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, v6, v7, v8);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42ED2B0 = 1;
  }
  if ( !v5->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_10515/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v5->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_19:
      sub_B5D69C(this, isFixMessage);
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
        {
          v17 = sub_B5D6C8(this);
          sub_B5D668(v17, 0LL);
        }
        v15 = restrictionWholeEntities->m_Items[v14];
        if ( !v15 )
          goto LABEL_19;
        if ( v15->fields.type == 9 )
          return v15->fields.summary;
        if ( (int)++v14 >= max_length )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetUniqueServantRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42ED2AF & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10514/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, v4, v5, v6);
    byte_42ED2AF = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10514/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
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
  struct System_Int32_array *overwriteLimitCountSvtIds; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return 0;
  if ( !this->fields.overwriteLimitCounts )
    return 0;
  max_length = overwriteLimitCountSvtIds->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0LL;
  v6 = &overwriteLimitCountSvtIds->m_Items[1];
  while ( v6[v5] != svtId )
  {
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
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
  __int64 v6; // x0

  if ( !this->fields.restrictionBaseEntity )
    return 1;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_8;
  if ( initPos - 1 >= slotInfos->max_length )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_8:
    sub_B5D69C(this, initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_B5D69C(this, method);
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
  unsigned int v4; // w12
  signed int v5; // w10
  signed int v6; // w11
  RestrictionEntity_o *v7; // x13
  int32_t type; // w13
  __int64 v10; // x0

  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_17;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
      }
      v7 = restrictionEntityList->m_Items[v4];
      if ( !v7 )
        break;
      type = v7->fields.type;
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
LABEL_17:
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  __int64 v27; // x1
  struct System_Collections_Generic_List_int____o *fixedNpcIndividualitiesList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int v34; // w20
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF
  int v36[2]; // [xsp+20h] [xbp-50h]
  int v37; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42ED2D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42ED2D5 = 1;
  }
  memset(&i, 0, sizeof(i));
  v37 = 0;
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !this->fields.isFixedSupportPosition )
  {
    fixedNpcIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( fixedNpcIndividualitiesList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v35,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v35;
            ;
            System_Collections_Generic_List_int___AddRange(
              v26,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
              (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v32 )
          break;
        if ( !v26 )
          sub_B5D69C(v32, v33);
      }
      v36[0] = 142;
      v34 = ++v37;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
      if ( !v34 || v36[v34 - 1] != 142 )
        goto LABEL_14;
      v37 = v34 - 1;
      if ( v26 )
        return v26->fields._size > 0;
    }
LABEL_26:
    sub_B5D69C(fixedNpcIndividualitiesList, v27);
  }
  fixedNpcIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
  if ( !fixedNpcIndividualitiesList )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v35;
        ;
        System_Collections_Generic_List_int___AddRange(
          v26,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v29 )
      break;
    if ( !v26 )
      sub_B5D69C(v29, v30);
  }
  v36[0] = 142;
  v37 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  v37 = 0;
LABEL_14:
  if ( !v26 )
    goto LABEL_26;
  return v26->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_34269732(
        QuestRestrictionInfo_o *this,
        int32_t num,
        ServantLeaderInfo_o *servantInfo,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  System_Collections_Generic_List_int__o *v52; // x22
  _BOOL8 v53; // x0
  __int64 v54; // x1
  int v56; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x23
  __int64 v58; // x24
  __int64 v59; // x25
  ServantEntity_o *Entity; // x23
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v64; // x1
  int v65; // w21
  int v66; // w26
  struct System_Boolean_array *supportPositionList; // x8
  __int64 v68; // x0
  _BOOL8 v69; // x0
  __int64 v70; // x1
  int v71; // w8
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+0h] [xbp-B0h] BYREF
  int v73[4]; // [xsp+18h] [xbp-98h]
  int v74; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  v6 = this;
  if ( (byte_42ED2B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, num, (_DWORD)servantInfo, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v43, v44, v45);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v46, v47, v48);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49, v50, v51);
    byte_42ED2B1 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v75, 0, sizeof(v75));
  v74 = 0;
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
    goto LABEL_53;
  this = (QuestRestrictionInfo_o *)ServantLeaderInfo__IsNpc(servantInfo, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
LABEL_9:
  if ( !v6->fields.restrictionBaseEntity )
    goto LABEL_38;
  v52 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_53;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v72,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v72;
          ;
          System_Collections_Generic_List_int___AddRange(
            v52,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v53 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v53 )
        break;
      if ( !v52 )
        sub_B5D69C(v53, v54);
    }
    v73[0] = 170;
    v74 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v56 = 0;
    v74 = 0;
LABEL_18:
    if ( !v52 )
      goto LABEL_53;
    goto LABEL_19;
  }
  this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v72;
        ;
        System_Collections_Generic_List_int___AddRange(
          v52,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v69 )
      break;
    if ( !v52 )
      sub_B5D69C(v69, v70);
  }
  v73[0] = 170;
  v56 = ++v74;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v56 )
    goto LABEL_18;
  v71 = v56 - 1;
  if ( v73[v56 - 1] != 170 )
    goto LABEL_18;
  --v56;
  v74 = v71;
  if ( !v52 )
    goto LABEL_53;
LABEL_19:
  if ( v52->fields._size < 1 )
    goto LABEL_38;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_53;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v59 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v77.fields.currentCryptoKey = v59;
  *(_QWORD *)&v77.fields.fakeValue = v58;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v77, 0LL);
  if ( !v57 )
LABEL_53:
    sub_B5D69C(this, *(_QWORD *)&num);
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v57,
                                (int32_t)this,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    &v72,
    v52,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v75 = v72;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v75,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v75.fields.current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0LL);
    if ( !Entity )
      sub_B5D69C(DispLimitCount, v64);
    if ( ServantEntity__IsIndividuality(Entity, limitCount, DispLimitCount, current, 0LL) )
    {
      v65 = 1;
      goto LABEL_34;
    }
  }
  v65 = 0;
LABEL_34:
  v73[v56] = 277;
  v66 = ++v74;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v75,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v66 && v73[v66 - 1] == 277 )
    v74 = v66 - 1;
  if ( !v65 )
    return 1;
LABEL_38:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
    goto LABEL_53;
  if ( supportPositionList->max_length <= num )
  {
    v68 = sub_B5D6C8(this);
    sub_B5D668(v68, 0LL);
  }
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


bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  QuestRestrictionInfo___c__DisplayClass176_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v22; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20
  __int64 v26; // x0

  if ( (byte_42ED2C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__, pos, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__DisplayClass176_0__IsMyServantOrNpcRestriction_b__0__, v12, v13, v14);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo, v15, v16, v17);
    byte_42ED2C7 = 1;
  }
  v18 = (QuestRestrictionInfo___c__DisplayClass176_0_o *)sub_B5D694(QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass176_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_14;
  v18->fields.pos = pos;
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( pos - 1 >= slotInfos->max_length )
      {
        v26 = sub_B5D6C8(v19);
        sub_B5D668(v26, 0LL);
      }
      v22 = slotInfos->m_Items[pos - 1];
      if ( v22 )
        return (unsigned int)(v22->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_B5D69C(v19, v20);
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v18,
    Method_QuestRestrictionInfo___c__DisplayClass176_0__IsMyServantOrNpcRestriction_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v25,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  QuestRestrictionInfo___c__DisplayClass178_0_o *v21; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  int v25; // w8
  unsigned int v26; // w9
  __int64 v27; // x10
  __int64 v28; // x10
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x20
  __int64 v31; // x8
  __int64 v32; // x0

  if ( (byte_42ED2C9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      pos,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__DisplayClass178_0__IsNotIndividuality_b__0__, v15, v16, v17);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo, v18, v19, v20);
    byte_42ED2C9 = 1;
  }
  v21 = (QuestRestrictionInfo___c__DisplayClass178_0_o *)sub_B5D694(QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass178_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_23;
  v21->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(this, pos, v24) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                          v21->fields.pos,
                                          (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v25 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v25 >= 1 )
      {
        v26 = 0;
        while ( 1 )
        {
          if ( v26 >= v25 )
          {
            v32 = sub_B5D6C8(restrictionSlotDetailDictionary);
            sub_B5D668(v32, 0LL);
          }
          v27 = *((_QWORD *)restrictionSlotDetailDictionary + (int)v26 + 4);
          if ( !v27 )
            break;
          if ( *(_DWORD *)(v27 + 32) == 1 )
          {
            v28 = *(_QWORD *)(v27 + 40);
            if ( v28 )
            {
              if ( *(_QWORD *)(v28 + 24) )
                goto LABEL_17;
            }
          }
          if ( (int)++v26 >= v25 )
            goto LABEL_16;
        }
LABEL_23:
        sub_B5D69C(restrictionSlotDetailDictionary, v23);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
      v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v30,
        (Il2CppObject *)v21,
        Method_QuestRestrictionInfo___c__DisplayClass178_0__IsNotIndividuality_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v30,
                                          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( restrictionSlotDetailDictionary )
      {
        v31 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
        if ( !v31 )
          goto LABEL_23;
        LOBYTE(restrictionSlotDetailDictionary) = *(_DWORD *)(v31 + 24) == 0;
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
  __int64 v7; // x0

  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_10;
    if ( initPos - 1 >= slotInfos->max_length )
    {
      v7 = sub_B5D6C8(this);
      sub_B5D668(v7, 0LL);
    }
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_B5D69C(this, initPos);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x19
  QuestRestrictionInfo___c_c *v18; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__96_0; // x20
  Il2CppObject *v21; // x21
  struct QuestRestrictionInfo___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42ED2A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_QuestRestrictionInfo_SlotInfo__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__96_0__, v11, v12, v13);
    sub_B5D5C4(&QuestRestrictionInfo___c_TypeInfo, v14, v15, v16);
    byte_42ED2A1 = 1;
  }
  if ( !this->fields.restrictionBaseEntity )
    return 0;
  slotInfos = this->fields.slotInfos;
  v18 = QuestRestrictionInfo___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v18 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__96_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__96_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__96_0,
      v21,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__96_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestRestrictionInfo_SlotInfo__bool___ctor__);
    v22 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v22->__9__96_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__96_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__96_0,
      (System_Int32_array **)_9__96_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)slotInfos,
           (System_Func_T__bool__o *)_9__96_0,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionIndividualityWhole(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *restrictionWholeEntities; // x19
  QuestRestrictionInfo___c_c *v30; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__95_1; // x20
  Il2CppObject *v33; // x21
  struct QuestRestrictionInfo___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 *v41; // x8
  QuestRestrictionInfo___c_c *v42; // x0
  struct QuestRestrictionInfo___c_StaticFields *v43; // x8
  Il2CppObject *v44; // x21
  struct QuestRestrictionInfo___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_42ED2A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_RestrictionEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_Any_RestrictionWholeEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_RestrictionWholeEntity__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_RestrictionEntity__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_RestrictionEntity__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Func_RestrictionWholeEntity__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_0__, v20, v21, v22);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_1__, v23, v24, v25);
    sub_B5D5C4(&QuestRestrictionInfo___c_TypeInfo, v26, v27, v28);
    byte_42ED2A0 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)this->fields.restrictionWholeEntities;
    v30 = QuestRestrictionInfo___c_TypeInfo;
    if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v30 = QuestRestrictionInfo___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    _9__95_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__95_1;
    if ( !_9__95_1 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__95_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__95_1,
        v33,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionWholeEntity__bool___ctor__);
      v34 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v34->__9__95_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__95_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v34->__9__95_1,
        (System_Int32_array **)_9__95_1,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    v41 = &Method_BasicHelper_Any_RestrictionWholeEntity___;
  }
  else
  {
    restrictionWholeEntities = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)this->fields.restrictionEntityList;
    v42 = QuestRestrictionInfo___c_TypeInfo;
    if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v42 = QuestRestrictionInfo___c_TypeInfo;
    }
    v43 = v42->static_fields;
    _9__95_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v43->__9__95_0;
    if ( !_9__95_1 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v43 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v43->__9;
      _9__95_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__95_1,
        v44,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionEntity__bool___ctor__);
      v45 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v45->__9__95_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__95_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v45->__9__95_0,
        (System_Int32_array **)_9__95_1,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v41 = &Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           restrictionWholeEntities,
           (System_Func_T__bool__o *)_9__95_1,
           (const MethodInfo_1AD6DE0 *)*v41);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  QuestRestrictionInfo___c__DisplayClass179_0_o *v43; // x24
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  int32_t ServantImageLimitSealAfter; // w20
  ServantEntity_o *Entity; // x21
  unsigned __int64 datalist_low; // x8
  unsigned __int64 i; // x9
  __int64 v51; // x12
  int v52; // w25
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v54; // x23
  struct System_Byte_array *masterDataBytes; // x8
  RestrictionEntity_o *v56; // x22
  __int64 v57; // x8
  System_Int32_array *v58; // x0
  struct DataMasterBase_array *datalist; // x9
  DataManager_o *v60; // x22
  unsigned __int64 v61; // x24
  RestrictionSlotDetailEntity_o *v62; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0
  __int64 v66; // x0

  if ( (byte_42ED2CA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      svtId,
      limitCount,
      *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v19, v20, v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(
      &Method_QuestRestrictionInfo___c__DisplayClass179_0__IsRestrictionServantIndividuality_b__0__,
      v37,
      v38,
      v39);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo, v40, v41, v42);
    byte_42ED2CA = 1;
  }
  v43 = (QuestRestrictionInfo___c__DisplayClass179_0_o *)sub_B5D694(QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass179_0___ctor(v43, 0LL);
  if ( !v43 )
    goto LABEL_52;
  v43->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(this, pos, v46) )
    goto LABEL_50;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_52;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v43->fields.pos,
                                    (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( Instance )
      {
        datalist_low = LODWORD(Instance->fields.datalist);
        if ( (__int64)(datalist_low << 32) >= 1 )
        {
          for ( i = 0LL; (__int64)i < (int)datalist_low; ++i )
          {
            if ( i >= datalist_low )
            {
LABEL_53:
              v66 = sub_B5D6C8(Instance);
              sub_B5D668(v66, 0LL);
            }
            v51 = *((_QWORD *)&Instance->fields.lookup + i);
            if ( isChkSupport )
            {
              if ( !v51 )
                goto LABEL_52;
              if ( *(_DWORD *)(v51 + 28) == 2 )
                goto LABEL_31;
            }
            else
            {
              if ( !v51 )
                goto LABEL_52;
              if ( *(_DWORD *)(v51 + 28) == 1 )
              {
LABEL_31:
                v52 = *(_DWORD *)(v51 + 40);
                goto LABEL_32;
              }
            }
          }
        }
        v52 = -1;
LABEL_32:
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                        v43->fields.pos,
                                        (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            datalist = Instance->fields.datalist;
            v60 = Instance;
            if ( (int)datalist >= 1 )
            {
              LOBYTE(v57) = 0;
              v61 = 0LL;
              while ( 1 )
              {
                if ( v61 >= (unsigned int)datalist )
                  goto LABEL_53;
                v62 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v60->fields.lookup + v61);
                if ( (v52 & 0x80000000) != 0 )
                {
                  if ( !v62 )
                    goto LABEL_52;
                }
                else
                {
                  if ( !v62 )
                    goto LABEL_52;
                  if ( v52 != v62->fields.id )
                    goto LABEL_48;
                }
                if ( v62->fields.type == 1 )
                {
                  targetVals = v62->fields.targetVals;
                  if ( targetVals )
                  {
                    if ( *(_QWORD *)&targetVals->max_length )
                    {
                      if ( !Entity )
                        goto LABEL_52;
                      Individuality = ServantEntity__getIndividuality(
                                        Entity,
                                        limitCount,
                                        ServantImageLimitSealAfter,
                                        0LL);
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v62, Individuality, 0LL);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_50;
                      LOBYTE(v57) = 1;
                    }
                  }
                }
LABEL_48:
                LODWORD(datalist) = v60->fields.datalist;
                if ( (__int64)++v61 >= (int)datalist )
                  return v57;
              }
            }
            goto LABEL_50;
          }
        }
      }
    }
LABEL_52:
    sub_B5D69C(Instance, v45);
  }
  if ( isChkSupport )
    goto LABEL_50;
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v54 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v54,
    (Il2CppObject *)v43,
    Method_QuestRestrictionInfo___c__DisplayClass179_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_52;
  Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v54,
                                (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_50;
  masterDataBytes = Instance->fields.masterDataBytes;
  v56 = (RestrictionEntity_o *)Instance;
  if ( !masterDataBytes )
    goto LABEL_52;
  v57 = *(_QWORD *)&masterDataBytes->max_length;
  if ( v57 )
  {
    if ( !Entity )
      goto LABEL_52;
    v58 = ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
    if ( RestrictionEntity__IsRestriction_29508216(v56, v58, 0LL) )
    {
      LOBYTE(v57) = 1;
      return v57;
    }
LABEL_50:
    LOBYTE(v57) = 0;
  }
  return v57;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_34285280(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  QuestRestrictionInfo___c__DisplayClass180_0_o *v22; // x22
  void *restrictionSlotDetailDictionary; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int v26; // w9
  void *v27; // x20
  unsigned int v28; // w21
  __int64 v29; // x8
  __int64 v30; // x9
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x21
  __int64 v33; // x8
  __int64 v35; // x0

  if ( (byte_42ED2CB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      (_DWORD)individuality,
      pos,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(
      &Method_QuestRestrictionInfo___c__DisplayClass180_0__IsRestrictionServantIndividuality_b__0__,
      v16,
      v17,
      v18);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo, v19, v20, v21);
    byte_42ED2CB = 1;
  }
  v22 = (QuestRestrictionInfo___c__DisplayClass180_0_o *)sub_B5D694(QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass180_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_26;
  v22->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(this, pos, v25) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                        v22->fields.pos,
                                        (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v26 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v27 = restrictionSlotDetailDictionary;
    if ( v26 >= 1 )
    {
      v28 = 0;
      LOBYTE(v29) = 0;
      while ( 1 )
      {
        if ( v28 >= v26 )
        {
          v35 = sub_B5D6C8(restrictionSlotDetailDictionary);
          sub_B5D668(v35, 0LL);
        }
        restrictionSlotDetailDictionary = (void *)*((_QWORD *)v27 + (int)v28 + 4);
        if ( !restrictionSlotDetailDictionary )
          break;
        if ( *((_DWORD *)restrictionSlotDetailDictionary + 8) == 1 )
        {
          v30 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
          if ( v30 )
          {
            if ( *(_QWORD *)(v30 + 24) )
            {
              restrictionSlotDetailDictionary = (void *)RestrictionSlotDetailEntity__IsIndividuality(
                                                          (RestrictionSlotDetailEntity_o *)restrictionSlotDetailDictionary,
                                                          individuality,
                                                          0LL);
              if ( ((unsigned __int8)restrictionSlotDetailDictionary & 1) != 0 )
                goto LABEL_24;
              LOBYTE(v29) = 1;
            }
          }
        }
        v26 = *((_DWORD *)v27 + 6);
        if ( (int)++v28 >= v26 )
          return v29 & 1;
      }
LABEL_26:
      sub_B5D69C(restrictionSlotDetailDictionary, v24);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v32,
    (Il2CppObject *)v22,
    Method_QuestRestrictionInfo___c__DisplayClass180_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v32,
                                      (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !restrictionSlotDetailDictionary )
  {
LABEL_24:
    LOBYTE(v29) = 0;
    return v29 & 1;
  }
  v33 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
  if ( !v33 )
    goto LABEL_26;
  v29 = *(_QWORD *)(v33 + 24);
  if ( v29 )
    return RestrictionEntity__IsRestriction_29508216(
             (RestrictionEntity_o *)restrictionSlotDetailDictionary,
             individuality,
             0LL);
  return v29 & 1;
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
  return QuestRestrictionInfo__IsRestrictionSlot_34263948(this, ServantIndividuality, initPos, v14);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionSlot_34263948(
        QuestRestrictionInfo_o *this,
        System_Int32_array *svtIndividuality,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v24; // x23
  bool v25; // w21
  QuestRestrictionInfo_SlotInfo_o *v26; // x8
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  int size; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v30; // x8
  QuestRestrictionInfo_SlotInfo_o *v31; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct QuestRestrictionInfo_SlotInfo_array *v33; // x8
  QuestRestrictionInfo_SlotInfo_o *v34; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *v35; // x28
  __int64 v37; // x0

  v6 = this;
  if ( (byte_42ED2A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int___, (_DWORD)svtIndividuality, initPos, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Item__, v16, v17, v18);
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(
                                       &Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__,
                                       v19,
                                       v20,
                                       v21);
    byte_42ED2A6 = 1;
  }
  v22 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_33:
      sub_B5D69C(this, svtIndividuality);
    v24 = 0LL;
    v25 = 0;
    while ( 1 )
    {
      if ( v22 >= slotInfos->max_length )
      {
LABEL_36:
        v37 = sub_B5D6C8(this);
        sub_B5D668(v37, 0LL);
      }
      v26 = slotInfos->m_Items[v22];
      if ( !v26 )
        goto LABEL_33;
      individualityList = v26->fields.individualityList;
      if ( !individualityList )
        goto LABEL_33;
      size = individualityList->fields._size;
      if ( (int)v24 >= size )
        return v25;
      if ( size <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (QuestRestrictionInfo_o *)individualityList->fields._items->m_Items[v24];
      if ( !this )
        goto LABEL_33;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v29 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v29,
                                           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
        v30 = v6->fields.slotInfos;
        if ( !v30 )
          goto LABEL_33;
        if ( v22 >= v30->max_length )
          goto LABEL_36;
        v31 = v30->m_Items[v22];
        if ( !v31 )
          goto LABEL_33;
        rangeTypeList = v31->fields.rangeTypeList;
        if ( !rangeTypeList )
          goto LABEL_33;
        if ( rangeTypeList->fields._size <= (unsigned int)v24 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( rangeTypeList->fields._items->m_Items[v24 + 1] == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                             (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
        }
        else
        {
          v33 = v6->fields.slotInfos;
          if ( !v33 )
            goto LABEL_33;
          if ( v22 >= v33->max_length )
            goto LABEL_36;
          v34 = v33->m_Items[v22];
          if ( !v34 )
            goto LABEL_33;
          v35 = v34->fields.rangeTypeList;
          if ( !v35 )
            goto LABEL_33;
          if ( v35->fields._size <= (unsigned int)v24 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( v35->fields._items->m_Items[v24 + 1] == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                               (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
            if ( ((unsigned __int8)this & 1) == 0 )
              return 0;
          }
        }
        v25 = 1;
      }
      slotInfos = v6->fields.slotInfos;
      ++v24;
      if ( !slotInfos )
        goto LABEL_33;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_34263116(
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
  _QWORD **v19; // x24
  __int64 v20; // x23
  __int16 v21; // w8
  __int64 v22; // x23
  __int64 v23; // x23
  __int64 v24; // x23
  bool isWhole; // [xsp+Ch] [xbp-34h] BYREF

  v12 = this;
  if ( (byte_42ED2A4 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(
                                       &Method_System_Array_Empty_int___,
                                       svtId,
                                       limitCount,
                                       *(_QWORD *)&dispLimitCount);
    byte_42ED2A4 = 1;
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
    v19 = (_QWORD **)Method_System_Array_Empty_int___;
    v20 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v21 = *(_WORD *)(v20 + 306);
    if ( (v21 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v21 = *(_WORD *)(v20 + 306);
    }
    if ( (v21 & 0x400) != 0 )
    {
      v22 = *v19[6];
      if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
        sub_AF52C4(*v19[6]);
      if ( !*(_DWORD *)(v22 + 224) )
      {
        v23 = *v19[6];
        if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
          sub_AF52C4(*v19[6]);
        j_il2cpp_runtime_class_init_0(v23);
      }
    }
    v24 = *v19[6];
    if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
      sub_AF52C4(*v19[6]);
    ServantIndividuality = **(System_Int32_array ***)(v24 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_34263444(
           v12,
           &isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           targetType,
           v17);
}


bool __fastcall QuestRestrictionInfo__IsRestriction_34263444(
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
  __int64 v23; // x0

  *isWhole = 0;
  if ( !this->fields.restrictionBaseEntity )
  {
    restrictionEntityList = this->fields.restrictionEntityList;
    if ( !restrictionEntityList )
LABEL_30:
      sub_B5D69C(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
LABEL_29:
        v23 = sub_B5D6C8(this);
        sub_B5D668(v23, 0LL);
      }
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
        goto LABEL_24;
      }
      if ( type == 1 )
      {
        this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestrictionTarget(v18, targetType, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_29508216(v18, svtIndividuality, 0LL);
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
LABEL_24:
    this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction(v20, v21, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    goto LABEL_25;
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
bool __fastcall QuestRestrictionInfo__IsRestriction_34264504(
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
  _QWORD **v24; // x26
  __int64 v25; // x25
  __int16 v26; // w8
  __int64 v27; // x25
  __int64 v28; // x25
  __int64 v29; // x25
  const MethodInfo *v30; // x3

  v16 = this;
  if ( (byte_42ED2A5 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(
                                       &Method_System_Array_Empty_int___,
                                       (_DWORD)isWhole,
                                       svtId,
                                       *(_QWORD *)&limitCount);
    byte_42ED2A5 = 1;
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
    v24 = (_QWORD **)Method_System_Array_Empty_int___;
    v25 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v26 = *(_WORD *)(v25 + 306);
    if ( (v26 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v26 = *(_WORD *)(v25 + 306);
    }
    if ( (v26 & 0x400) != 0 )
    {
      v27 = *v24[6];
      if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
        sub_AF52C4(*v24[6]);
      if ( !*(_DWORD *)(v27 + 224) )
      {
        v28 = *v24[6];
        if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
          sub_AF52C4(*v24[6]);
        j_il2cpp_runtime_class_init_0(v28);
      }
    }
    v29 = *v24[6];
    if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
      sub_AF52C4(*v24[6]);
    ServantIndividuality = **(System_Int32_array ***)(v29 + 184);
  }
  if ( QuestRestrictionInfo__IsRestriction_34263444(
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
    return QuestRestrictionInfo__IsRestrictionSlot_34263948(v16, ServantIndividuality, initPos, v30);
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  QuestRestrictionInfo___c__DisplayClass177_0_o *v18; // x21
  _BOOL8 IsMyServantOrNpcRestriction_34282120; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v23; // w9
  QuestRestrictionInfo_SlotInfo_o *v24; // x8
  bool v25; // zf
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x20
  __int64 v29; // x0

  if ( (byte_42ED2C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, pos, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_RestrictionEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_RestrictionEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__DisplayClass177_0__IsSelectableNormalSupport_b__0__, v12, v13, v14);
    sub_B5D5C4(&QuestRestrictionInfo___c__DisplayClass177_0_TypeInfo, v15, v16, v17);
    byte_42ED2C8 = 1;
  }
  v18 = (QuestRestrictionInfo___c__DisplayClass177_0_o *)sub_B5D694(QuestRestrictionInfo___c__DisplayClass177_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass177_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_18;
  v18->fields.pos = pos;
  IsMyServantOrNpcRestriction_34282120 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(this, pos, v21);
  if ( !IsMyServantOrNpcRestriction_34282120 )
  {
    LOBYTE(v26) = 0;
    return (char)v26;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v28,
      (Il2CppObject *)v18,
      Method_QuestRestrictionInfo___c__DisplayClass177_0__IsSelectableNormalSupport_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v28,
              (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v26 )
        return (char)v26;
      v25 = LODWORD(v26->fields.orgMaterial) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_B5D69C(IsMyServantOrNpcRestriction_34282120, v20);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v23 = v18->fields.pos - 1;
  if ( v23 >= slotInfos->max_length )
  {
    v29 = sub_B5D6C8(IsMyServantOrNpcRestriction_34282120);
    sub_B5D668(v29, 0LL);
  }
  v24 = slotInfos->m_Items[v23];
  if ( !v24 )
    goto LABEL_18;
  v25 = v24->fields.slotType == 4;
LABEL_14:
  LOBYTE(v26) = v25;
  return (char)v26;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t servantNumMax; // w8
  __int64 IsMyServantOrNpcRestriction_34282120; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  int v13; // w8
  unsigned int v14; // w9
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int max_length; // w9
  unsigned int v18; // w10
  __int64 v19; // x0

  if ( (byte_42ED2C3 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, pos, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, v7, v8, v9);
    byte_42ED2C3 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    goto LABEL_23;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    goto LABEL_23;
  IsMyServantOrNpcRestriction_34282120 = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_34282120 = (__int64)BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    servantNumMax = *(_DWORD *)(*(_QWORD *)(IsMyServantOrNpcRestriction_34282120 + 184) + 156LL);
  }
  else if ( this->fields.myServantNumMax > 0 )
  {
    servantNumMax = this->fields.myServantNumMax;
  }
  if ( this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_42;
    servantNumMax -= myServantOrNpcRestrictionEntityList->fields._size;
  }
  if ( servantNumMax == 1 )
  {
    IsMyServantOrNpcRestriction_34282120 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
                                             this,
                                             pos,
                                             *(const MethodInfo **)&pos);
    if ( (IsMyServantOrNpcRestriction_34282120 & 1) == 0 )
    {
      if ( this->fields.isFixedMyServantPosition )
      {
        IsMyServantOrNpcRestriction_34282120 = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                          this,
                                                          *(const MethodInfo **)&svtId);
        if ( IsMyServantOrNpcRestriction_34282120 )
        {
          v13 = *(_DWORD *)(IsMyServantOrNpcRestriction_34282120 + 24);
          if ( v13 >= 1 )
          {
            v14 = 0;
            while ( v14 < v13 )
            {
              if ( *(_DWORD *)(IsMyServantOrNpcRestriction_34282120 + 4LL * (int)v14 + 32) == svtId )
                goto LABEL_23;
              if ( (int)++v14 >= v13 )
                goto LABEL_40;
            }
            goto LABEL_41;
          }
          goto LABEL_40;
        }
      }
      else
      {
        fixedServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity;
        if ( !fixedServantPositionRestrictionEntity )
          goto LABEL_40;
        targetVals = fixedServantPositionRestrictionEntity->fields.targetVals;
        if ( targetVals )
        {
          max_length = targetVals->max_length;
          if ( max_length >= 1 )
          {
            v18 = 0;
            IsMyServantOrNpcRestriction_34282120 = 1LL;
            while ( v18 < max_length )
            {
              if ( targetVals->m_Items[v18 + 1] == svtId )
                goto LABEL_23;
              if ( (int)++v18 >= max_length )
                return IsMyServantOrNpcRestriction_34282120;
            }
LABEL_41:
            v19 = sub_B5D6C8(IsMyServantOrNpcRestriction_34282120);
            sub_B5D668(v19, 0LL);
          }
LABEL_40:
          LOBYTE(IsMyServantOrNpcRestriction_34282120) = 1;
          return IsMyServantOrNpcRestriction_34282120;
        }
      }
LABEL_42:
      sub_B5D69C(IsMyServantOrNpcRestriction_34282120, *(_QWORD *)&svtId);
    }
  }
LABEL_23:
  LOBYTE(IsMyServantOrNpcRestriction_34282120) = 0;
  return IsMyServantOrNpcRestriction_34282120;
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
  __int64 v13; // x0

  v6 = this;
  if ( (byte_42ED2D7 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, pos, initPos, method);
    byte_42ED2D7 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_B5D69C(this, *(_QWORD *)&pos);
    if ( v8->fields.isRequired )
      return 1;
  }
  servantNumMax = v6->fields.servantNumMax;
  if ( servantNumMax < 1 || v6->fields.servantNumMin > 0 )
    return 0;
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  DeckMainMemberMax = v11->static_fields->DeckMainMemberMax;
  if ( servantNumMax <= DeckMainMemberMax )
  {
    DeckMainMemberMax = v6->fields.servantNumMax;
  }
  else if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x21
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  unsigned int v38; // w22
  bool v39; // w20
  QuestRestrictionInfo_SlotInfo_o *v40; // x26
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  __int64 v42; // x27
  int size; // w8
  System_Int32_array *v44; // x8
  struct System_Collections_Generic_List_int____o *v45; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct System_Collections_Generic_List_Restriction_RangeType__o *v48; // x28
  __int64 v50; // x0

  if ( (byte_42ED2E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, limitCount, *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Item__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42ED2E0 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  svtId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)ServantEntity__getIndividuality(
                                  (ServantEntity_o *)Instance,
                                  limitCount,
                                  dispLimitCount,
                                  0LL);
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_41;
    max_length = slotInfos->max_length;
    if ( max_length >= 1 )
    {
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v38 = 0;
      v39 = 0;
      while ( 1 )
      {
        if ( v38 >= max_length )
        {
          v50 = sub_B5D6C8(Instance);
          sub_B5D668(v50, 0LL);
        }
        v40 = slotInfos->m_Items[v38];
        if ( !v40 )
          break;
        if ( v40->fields.slotType == 2 )
        {
          individualityList = v40->fields.individualityList;
          if ( !individualityList )
            break;
          v42 = 0LL;
          while ( 1 )
          {
            size = individualityList->fields._size;
            if ( (int)v42 >= size )
              break;
            if ( size <= (unsigned int)v42 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v44 = individualityList->fields._items->m_Items[v42];
            if ( !v44 )
              goto LABEL_41;
            if ( *(_QWORD *)&v44->max_length )
            {
              v45 = v40->fields.individualityList;
              if ( !v45 )
                goto LABEL_41;
              if ( v45->fields._size <= (unsigned int)v42 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v46 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v45->fields._items->m_Items[v42],
                      v37,
                      (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                            v46,
                                            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
              rangeTypeList = v40->fields.rangeTypeList;
              if ( !rangeTypeList )
                goto LABEL_41;
              if ( rangeTypeList->fields._size <= (unsigned int)v42 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              if ( rangeTypeList->fields._items->m_Items[v42 + 1] == 1 )
              {
                Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                              (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  return 0;
              }
              else
              {
                v48 = v40->fields.rangeTypeList;
                if ( !v48 )
                  goto LABEL_41;
                if ( v48->fields._size <= (unsigned int)v42 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                if ( v48->fields._items->m_Items[v42 + 1] == 2 )
                {
                  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                                (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
                  if ( ((unsigned __int8)Instance & 1) == 0 )
                    return 0;
                }
              }
              v39 = 1;
            }
            individualityList = v40->fields.individualityList;
            ++v42;
            if ( !individualityList )
              goto LABEL_41;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v38 >= max_length )
          return v39;
      }
LABEL_41:
      sub_B5D69C(Instance, v34);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x19
  unsigned int v16; // w21
  RestrictionWholeEntity_o *v17; // x8
  struct System_Int32_array *targetVals; // x23
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  __int64 v22; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ED2DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42ED2DF = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
LABEL_24:
      v22 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v22, 0LL);
    }
    v17 = restrictionWholeEntities->m_Items[v16];
    if ( !v17 )
      goto LABEL_23;
    if ( v17->fields.type == 9 )
    {
      targetVals = v17->fields.targetVals;
      if ( !targetVals )
        goto LABEL_23;
      v19 = *(_QWORD *)&targetVals->max_length;
      if ( (int)v19 >= 1 )
        break;
    }
LABEL_20:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v16 >= max_length )
      return 1;
  }
  v20 = 0LL;
  while ( 1 )
  {
    if ( v20 >= (unsigned int)v19 )
      goto LABEL_24;
    if ( !v15 )
      goto LABEL_23;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    v15,
                                                                    &entity,
                                                                    targetVals->m_Items[v20 + 1],
                                                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
      return 0;
    LODWORD(v19) = targetVals->max_length;
    if ( (__int64)++v20 >= (int)v19 )
      goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_34267908(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x22
  struct System_Int32_array *uniqueIndividualitys; // x26
  __int64 v28; // x8
  ServantEntity_o *v29; // x23
  unsigned __int64 v30; // x27
  int32_t v31; // w24
  __int64 i; // x21
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  unsigned __int64 v36; // x19
  __int64 v37; // x0
  int32_t v39; // [xsp+8h] [xbp-58h]
  int32_t ServantImageLimitSealAfter; // [xsp+Ch] [xbp-54h]

  if ( (byte_42ED2AD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, limitCount, *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42ED2AD = 1;
  }
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_35;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_37;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_37:
    sub_B5D69C(Instance, v25);
  }
  v28 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v28 >= 1 )
  {
    v39 = limitCount;
    v29 = (ServantEntity_o *)Instance;
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v28 )
      {
LABEL_38:
        v37 = sub_B5D6C8(Instance);
        sub_B5D668(v37, 0LL);
      }
      if ( !v29 )
        goto LABEL_37;
      v31 = uniqueIndividualitys->m_Items[v30 + 1];
      if ( ServantEntity__IsIndividuality(v29, v39, ServantImageLimitSealAfter, v31, 0LL) )
        break;
LABEL_33:
      LODWORD(v28) = uniqueIndividualitys->max_length;
      ++v30;
      Instance = 0LL;
      if ( (__int64)v30 >= (int)v28 )
        return (char)Instance;
    }
    for ( i = 8LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      v36 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v36 >= SHIDWORD(Instance[1].fields.saveNameList[3].fields._syncRoot) )
        goto LABEL_33;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_37;
      if ( v36 >= deckSvtIdList->max_length )
        goto LABEL_38;
      v25 = *((unsigned int *)&deckSvtIdList->obj.klass + i);
      if ( (int)v25 >= 1 )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v26,
                                      v25,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( !deckLimitCountList )
          goto LABEL_37;
        if ( v36 >= deckLimitCountList->max_length )
          goto LABEL_38;
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( !deckDispLimitCountList )
          goto LABEL_37;
        if ( v36 >= deckDispLimitCountList->max_length )
          goto LABEL_38;
        if ( !Instance )
          goto LABEL_37;
        if ( ServantEntity__IsIndividuality(
               (ServantEntity_o *)Instance,
               *((_DWORD *)&deckLimitCountList->obj.klass + i),
               *((_DWORD *)&deckDispLimitCountList->obj.klass + i),
               v31,
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
LABEL_35:
    LOBYTE(Instance) = 0;
  }
  return (char)Instance;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_34268556(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x24
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v38; // x8
  unsigned __int64 v39; // x25
  int32_t v40; // w26
  int32_t i; // w27
  PartyOrganizationListViewItem_o *v42; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // kr00_16
  int32_t v44; // w0
  ServantEntity_o *v45; // x23
  int32_t svtLimitCount; // w22
  __int64 v48; // x0
  DataManager_o *v49; // [xsp+8h] [xbp-78h]
  struct System_Int32_array *v50; // [xsp+10h] [xbp-70h]
  int32_t ServantImageLimitSealAfter; // [xsp+1Ch] [xbp-64h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42ED2AE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, limitCount, *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42ED2AE = 1;
  }
  entity = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_38;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_38:
    sub_B5D69C(Instance, v35);
  }
  v38 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v38 < 1 )
    return 0;
  v39 = 0LL;
  v49 = Instance;
  v50 = uniqueIndividualitys;
  while ( 1 )
  {
    if ( v39 >= (unsigned int)v38 )
    {
      v48 = sub_B5D6C8(Instance);
      sub_B5D668(v48, 0LL);
    }
    if ( !Instance )
      goto LABEL_38;
    v40 = uniqueIndividualitys->m_Items[v39 + 1];
    if ( ServantEntity__IsIndividuality((ServantEntity_o *)Instance, limitCount, ServantImageLimitSealAfter, v40, 0LL) )
      break;
LABEL_34:
    Instance = v49;
    uniqueIndividualitys = v50;
    ++v39;
    LODWORD(v38) = v50->max_length;
    if ( (__int64)v39 >= (int)v38 )
      return 0;
  }
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( i >= SHIDWORD(Instance[1].fields.saveNameList[3].fields._syncRoot) )
      goto LABEL_34;
    if ( num != i && partyIndex != i )
    {
      if ( !partyItem )
        goto LABEL_38;
      Instance = (DataManager_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
      if ( !Instance )
        goto LABEL_38;
      v42 = (PartyOrganizationListViewItem_o *)Instance;
      v43 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v36,
             &entity,
             v44,
             (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v45 = (ServantEntity_o *)entity;
        svtLimitCount = v42->fields.svtLimitCount;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v42, 0LL);
        if ( !v45 )
          goto LABEL_38;
        if ( ServantEntity__IsIndividuality(v45, svtLimitCount, (int32_t)Instance, v40, 0LL) )
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
bool __fastcall QuestRestrictionInfo__IsUniqueServant_34267336(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  bool result; // w0
  il2cpp_array_size_t v7; // w22
  BalanceConfig_c *v8; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  int32_t v10; // w8
  __int64 v11; // x0

  if ( (byte_42ED2AB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, (_DWORD)method, v3);
    byte_42ED2AB = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  result = 0;
  if ( svtId >= 1 && this->fields.deckSvtIdList )
  {
    v7 = 0;
    v8 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = BalanceConfig_TypeInfo;
      }
      if ( (signed int)v7 >= v8->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        sub_B5D69C(v8, *(_QWORD *)&svtId);
      if ( v7 >= deckSvtIdList->max_length )
      {
        v11 = sub_B5D6C8(v8);
        sub_B5D668(v11, 0LL);
      }
      v10 = deckSvtIdList->m_Items[++v7];
      if ( v10 == svtId )
        return 1;
    }
    return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_34267560(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  bool result; // w0
  int32_t i; // w23
  PartyOrganizationListViewItem_o *Member; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // kr00_16

  if ( (byte_42ED2AC & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, (_DWORD)partyItem, *(_QWORD *)&num);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    byte_42ED2AC = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  result = 0;
  if ( svtId >= 1 && this->fields.deckSvtIdList )
  {
    for ( i = 0; ; ++i )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&Member->fields.classId + 156LL) )
        break;
      if ( num != i && partyIndex != i )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, i, 0LL)) == 0LL )
          sub_B5D69C(Member, *(_QWORD *)&svtId);
        v17 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL) == svtId )
          return 1;
      }
    }
    return 0;
  }
  return result;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  struct System_Int32_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42ED29B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42ED29B = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.deckSvtIdList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x24
  __int64 v10; // x1
  __int64 v11; // x26
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v14; // x21
  struct System_Int32_array *v15; // x27
  __int64 v16; // x22
  __int64 v17; // x23
  BalanceConfig_c *DispLimitCount; // x0
  struct System_Int32_array *deckLimitCountList; // x27
  __int64 v20; // x22
  __int64 v21; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  unsigned __int64 v23; // x28
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42ED298 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)userDeckEntity, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42ED298 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    v9 = 8LL;
    v11 = 1LL - (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v23 = v9 - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v23 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_31;
      if ( v23 >= deckSvtIdList->max_length )
        goto LABEL_30;
      *((_DWORD *)&deckSvtIdList->obj.klass + v9) = 0;
      if ( v11 + v9 != 8 )
      {
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, (int)v9 - 8, 0LL);
        if ( UserServant )
        {
          v14 = UserServant;
          v15 = this->fields.deckSvtIdList;
          v17 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v16 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v25.fields.currentCryptoKey = v17;
          *(_QWORD *)&v25.fields.fakeValue = v16;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v25,
                                                0LL);
          if ( !v15 )
LABEL_31:
            sub_B5D69C(DispLimitCount, v10);
          if ( v23 >= v15->max_length )
          {
LABEL_30:
            v24 = sub_B5D6C8(DispLimitCount);
            sub_B5D668(v24, 0LL);
          }
          *((_DWORD *)&v15->obj.klass + v9) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v21 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
            v20 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v26.fields.currentCryptoKey = v21;
            *(_QWORD *)&v26.fields.fakeValue = v20;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v26,
                                                  0LL);
            if ( v23 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v9) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v14, 0, 0LL);
            if ( v23 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v9) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v9;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_34258056(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x24
  __int64 v10; // x1
  __int64 v11; // x26
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v14; // x21
  struct System_Int32_array *v15; // x27
  __int64 v16; // x22
  __int64 v17; // x23
  BalanceConfig_c *DispLimitCount; // x0
  struct System_Int32_array *deckLimitCountList; // x27
  __int64 v20; // x22
  __int64 v21; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  unsigned __int64 v23; // x28
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42ED299 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)eventDeckEntity, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42ED299 = 1;
  }
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v9 = 8LL;
    v11 = 1LL - (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v23 = v9 - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v23 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_31;
      if ( v23 >= deckSvtIdList->max_length )
        goto LABEL_30;
      *((_DWORD *)&deckSvtIdList->obj.klass + v9) = 0;
      if ( v11 + v9 != 8 )
      {
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, (int)v9 - 8, 0LL);
        if ( UserServant )
        {
          v14 = UserServant;
          v15 = this->fields.deckSvtIdList;
          v17 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v16 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v25.fields.currentCryptoKey = v17;
          *(_QWORD *)&v25.fields.fakeValue = v16;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v25,
                                                0LL);
          if ( !v15 )
LABEL_31:
            sub_B5D69C(DispLimitCount, v10);
          if ( v23 >= v15->max_length )
          {
LABEL_30:
            v24 = sub_B5D6C8(DispLimitCount);
            sub_B5D668(v24, 0LL);
          }
          *((_DWORD *)&v15->obj.klass + v9) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v21 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
            v20 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v26.fields.currentCryptoKey = v21;
            *(_QWORD *)&v26.fields.fakeValue = v20;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v26,
                                                  0LL);
            if ( v23 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v9) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v14, 0, 0LL);
            if ( v23 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v9) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v9;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_34258532(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  unsigned __int64 v10; // x21
  unsigned __int64 v11; // x25
  struct System_Int32_array *v12; // x8
  PartyOrganizationListViewItem_o *Member; // x0
  char *v14; // x8
  struct System_Int32_array *deckSvtIdList; // x28
  PartyOrganizationListViewItem_o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  __int64 v20; // x0

  if ( (byte_42ED29A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)partyItem, num, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    byte_42ED29A = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v10 = 0LL;
    v11 = (unsigned int)num;
    while ( 1 )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v10 >= *(int *)(*(_QWORD *)&Member->fields.classId + 156LL) )
        return;
      if ( v10 == v11 )
        break;
      if ( !partyItem )
        goto LABEL_29;
      Member = PartyListViewItem__GetMember(partyItem, v10, 0LL);
      if ( !Member )
        goto LABEL_29;
      deckSvtIdList = this->fields.deckSvtIdList;
      v16 = Member;
      SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                    SvtId,
                                                    0LL);
      if ( !deckSvtIdList )
LABEL_29:
        sub_B5D69C(Member, partyItem);
      if ( v10 >= deckSvtIdList->max_length )
      {
LABEL_30:
        v20 = sub_B5D6C8(Member);
        sub_B5D668(v20, 0LL);
      }
      deckSvtIdList->m_Items[v10 + 1] = (int)Member;
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( deckLimitCountList )
      {
        if ( v10 >= deckLimitCountList->max_length )
          goto LABEL_30;
        deckLimitCountList->m_Items[v10 + 1] = v16->fields.svtLimitCount;
      }
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( deckDispLimitCountList )
      {
        Member = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v16, 0LL);
        if ( v10 >= deckDispLimitCountList->max_length )
          goto LABEL_30;
        v14 = (char *)deckDispLimitCountList + 4 * v10;
LABEL_22:
        *((_DWORD *)v14 + 8) = (_DWORD)Member;
      }
      ++v10;
    }
    v12 = this->fields.deckSvtIdList;
    if ( !v12 )
      goto LABEL_29;
    if ( v12->max_length <= v11 )
      goto LABEL_30;
    LODWORD(Member) = 0;
    v14 = (char *)v12 + 4 * v11;
    goto LABEL_22;
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  int v162; // w1
  int v163; // w2
  __int64 v164; // x3
  int v165; // w1
  int v166; // w2
  __int64 v167; // x3
  int v168; // w1
  int v169; // w2
  __int64 v170; // x3
  int v171; // w1
  int v172; // w2
  __int64 v173; // x3
  int v174; // w1
  int v175; // w2
  __int64 v176; // x3
  int v177; // w1
  int v178; // w2
  __int64 v179; // x3
  int v180; // w1
  int v181; // w2
  __int64 v182; // x3
  int v183; // w1
  int v184; // w2
  __int64 v185; // x3
  int v186; // w1
  int v187; // w2
  __int64 v188; // x3
  int v189; // w1
  int v190; // w2
  __int64 v191; // x3
  int v192; // w1
  int v193; // w2
  __int64 v194; // x3
  int v195; // w1
  int v196; // w2
  __int64 v197; // x3
  int v198; // w1
  int v199; // w2
  __int64 v200; // x3
  int v201; // w1
  int v202; // w2
  __int64 v203; // x3
  int v204; // w1
  int v205; // w2
  __int64 v206; // x3
  int v207; // w1
  int v208; // w2
  __int64 v209; // x3
  int v210; // w1
  int v211; // w2
  __int64 v212; // x3
  int v213; // w1
  int v214; // w2
  __int64 v215; // x3
  int v216; // w1
  int v217; // w2
  __int64 v218; // x3
  struct System_String_o *v219; // x20
  System_Int32_array **v220; // x1
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  System_String_array **v245; // x2
  System_String_array **v246; // x3
  System_Boolean_array **v247; // x4
  System_Int32_array **v248; // x5
  System_Int32_array *v249; // x6
  System_Int32_array *v250; // x7
  BattleServantConfConponent_o *p_supportPositionList; // x22
  System_String_array **v252; // x2
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  System_String_array **v264; // x2
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  System_String_array **v270; // x2
  System_String_array **v271; // x3
  System_Boolean_array **v272; // x4
  System_Int32_array **v273; // x5
  System_Int32_array *v274; // x6
  System_Int32_array *v275; // x7
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v282; // x20
  System_String_array **v283; // x2
  System_String_array **v284; // x3
  System_Boolean_array **v285; // x4
  System_Int32_array **v286; // x5
  System_Int32_array *v287; // x6
  System_Int32_array *v288; // x7
  System_Collections_Generic_List_int__o *v289; // x20
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  System_String_array **v308; // x2
  System_String_array **v309; // x3
  System_Boolean_array **v310; // x4
  System_Int32_array **v311; // x5
  System_Int32_array *v312; // x6
  System_Int32_array *v313; // x7
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v320; // x20
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v327; // x20
  System_String_array **v328; // x2
  System_String_array **v329; // x3
  System_Boolean_array **v330; // x4
  System_Int32_array **v331; // x5
  System_Int32_array *v332; // x6
  System_Int32_array *v333; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v334; // x20
  System_String_array **v335; // x2
  System_String_array **v336; // x3
  System_Boolean_array **v337; // x4
  System_Int32_array **v338; // x5
  System_Int32_array *v339; // x6
  System_Int32_array *v340; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v341; // x20
  System_String_array **v342; // x2
  System_String_array **v343; // x3
  System_Boolean_array **v344; // x4
  System_Int32_array **v345; // x5
  System_Int32_array *v346; // x6
  System_Int32_array *v347; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v348; // x20
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v355; // x20
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  System_String_array **v362; // x2
  System_String_array **v363; // x3
  System_Boolean_array **v364; // x4
  System_Int32_array **v365; // x5
  System_Int32_array *v366; // x6
  System_Int32_array *v367; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v368; // x20
  System_String_array **v369; // x2
  System_String_array **v370; // x3
  System_Boolean_array **v371; // x4
  System_Int32_array **v372; // x5
  System_Int32_array *v373; // x6
  System_Int32_array *v374; // x7
  BattleServantConfConponent_o *p_fields; // x25
  System_String_array **v376; // x2
  System_String_array **v377; // x3
  System_Boolean_array **v378; // x4
  System_Int32_array **v379; // x5
  System_Int32_array *v380; // x6
  System_Int32_array *v381; // x7
  System_String_array **v382; // x2
  System_String_array **v383; // x3
  System_Boolean_array **v384; // x4
  System_Int32_array **v385; // x5
  System_Int32_array *v386; // x6
  System_Int32_array *v387; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v389; // x1
  const MethodInfo *v390; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v391; // x20
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v398; // x20
  System_String_array **v399; // x2
  System_String_array **v400; // x3
  System_Boolean_array **v401; // x4
  System_Int32_array **v402; // x5
  System_Int32_array *v403; // x6
  System_Int32_array *v404; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v405; // x20
  System_String_array **v406; // x2
  System_String_array **v407; // x3
  System_Boolean_array **v408; // x4
  System_Int32_array **v409; // x5
  System_Int32_array *v410; // x6
  System_Int32_array *v411; // x7
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v414; // x0
  System_Int32_array **v415; // x0
  System_String_array **v416; // x2
  System_String_array **v417; // x3
  System_Boolean_array **v418; // x4
  System_Int32_array **v419; // x5
  System_Int32_array *v420; // x6
  System_Int32_array *v421; // x7
  RestrictionBaseEntity_o *v422; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v423; // x21
  struct RestrictionWholeEntity_array *Entities; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // x26
  System_String_array **v426; // x2
  System_String_array **v427; // x3
  System_Boolean_array **v428; // x4
  System_Int32_array **v429; // x5
  System_Int32_array *v430; // x6
  System_Int32_array *v431; // x7
  struct RestrictionWholeEntity_array *v432; // x19
  int max_length; // w8
  unsigned int v434; // w20
  RestrictionWholeEntity_o *v435; // x23
  System_Int32_array **SetPossiblePosition; // x0
  System_String_array **v437; // x2
  System_String_array **v438; // x3
  System_Boolean_array **v439; // x4
  System_Int32_array **v440; // x5
  System_Int32_array *v441; // x6
  System_Int32_array *v442; // x7
  Il2CppObject *v443; // x0
  System_Int32_array **v444; // x0
  System_String_array **v445; // x2
  System_String_array **v446; // x3
  System_Boolean_array **v447; // x4
  System_Int32_array **v448; // x5
  System_Int32_array *v449; // x6
  System_Int32_array *v450; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v451; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v452; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v453; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v454; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v455; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v456; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v457; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v458; // x0
  Il2CppObject *v459; // x0
  System_Int32_array **v460; // x0
  System_String_array **v461; // x2
  System_String_array **v462; // x3
  System_Boolean_array **v463; // x4
  System_Int32_array **v464; // x5
  System_Int32_array *v465; // x6
  System_Int32_array *v466; // x7
  BalanceConfig_c *v467; // x0
  System_Int32_array **v468; // x0
  System_String_array **v469; // x2
  System_String_array **v470; // x3
  System_Boolean_array **v471; // x4
  System_Int32_array **v472; // x5
  System_Int32_array *v473; // x6
  System_Int32_array *v474; // x7
  System_Int32_array **v475; // x0
  System_String_array **v476; // x2
  System_String_array **v477; // x3
  System_Boolean_array **v478; // x4
  System_Int32_array **v479; // x5
  System_Int32_array *v480; // x6
  System_Int32_array *v481; // x7
  System_Int32_array **v482; // x0
  System_String_array **v483; // x2
  System_String_array **v484; // x3
  System_Boolean_array **v485; // x4
  System_Int32_array **v486; // x5
  System_Int32_array *v487; // x6
  System_Int32_array *v488; // x7
  System_Int32_array **v489; // x0
  System_String_array **v490; // x2
  System_String_array **v491; // x3
  System_Boolean_array **v492; // x4
  System_Int32_array **v493; // x5
  System_Int32_array *v494; // x6
  System_Int32_array *v495; // x7
  Il2CppObject *v496; // x0
  System_Int32_array **v497; // x0
  System_String_array **v498; // x2
  System_String_array **v499; // x3
  System_Boolean_array **v500; // x4
  System_Int32_array **v501; // x5
  System_Int32_array *v502; // x6
  System_Int32_array *v503; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v504; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v505; // x0
  Il2CppObject *v506; // x0
  System_Int32_array **v507; // x0
  System_String_array **v508; // x2
  System_String_array **v509; // x3
  System_Boolean_array **v510; // x4
  System_Int32_array **v511; // x5
  System_Int32_array *v512; // x6
  System_Int32_array *v513; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v514; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v515; // x0
  struct System_Int32_array *targetVals; // x8
  int32_t restrictionMessageId; // w2
  QuestRestrictionInfo_DialogMessageInfo_o *v518; // x26
  QuestRestrictionInfo_o *v519; // x26
  System_Collections_Generic_Dictionary_K__V__o **v520; // x28
  int isAllOutBattle; // w8
  const MethodInfo *v522; // x4
  __int64 v523; // x22
  System_String_array **v524; // x2
  System_String_array **v525; // x3
  System_Boolean_array **v526; // x4
  System_Int32_array **v527; // x5
  System_Int32_array *v528; // x6
  System_Int32_array *v529; // x7
  BalanceConfig_c *v530; // x0
  System_Int32_array **v531; // x0
  System_String_array **v532; // x2
  System_String_array **v533; // x3
  System_Boolean_array **v534; // x4
  System_Int32_array **v535; // x5
  System_Int32_array *v536; // x6
  System_Int32_array *v537; // x7
  int32_t v538; // w22
  int i; // w23
  BalanceConfig_c *v540; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v541; // x8
  __int64 v542; // x24
  System_Collections_Generic_List_int__o *v543; // x23
  int v544; // w8
  __int64 v545; // x19
  __int64 v546; // x26
  int32_t v547; // w2
  QuestRestrictionInfo_DialogMessageInfo_o *v548; // x26
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v549; // x23
  BattleServantConfConponent_c *klass; // x19
  QuestRestrictionInfo_SlotInfo_o *v551; // x27
  System_String_array **v552; // x2
  System_String_array **v553; // x3
  System_Boolean_array **v554; // x4
  System_Int32_array **v555; // x5
  System_Int32_array *v556; // x6
  System_Int32_array *v557; // x7
  int v558; // w20
  void **v559; // x0
  int servantNumMax; // w8
  BattleServantConfConponent_c *v561; // x8
  int32_t v562; // w23
  __int64 v563; // x8
  BattleServantConfConponent_c *v564; // x8
  __int64 v565; // x8
  QuestRestrictionInfo___c_c *v566; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_0; // x27
  Il2CppObject *v569; // x26
  struct QuestRestrictionInfo___c_StaticFields *v570; // x0
  System_String_array **v571; // x2
  System_String_array **v572; // x3
  System_Boolean_array **v573; // x4
  System_Int32_array **v574; // x5
  System_Int32_array *v575; // x6
  System_Int32_array *v576; // x7
  _BOOL4 v577; // w19
  QuestRestrictionInfo___c_c *v578; // x8
  struct QuestRestrictionInfo___c_StaticFields *v579; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_1; // x27
  Il2CppObject *v581; // x26
  struct QuestRestrictionInfo___c_StaticFields *v582; // x0
  System_String_array **v583; // x2
  System_String_array **v584; // x3
  System_Boolean_array **v585; // x4
  System_Int32_array **v586; // x5
  System_Int32_array *v587; // x6
  System_Int32_array *v588; // x7
  _BOOL4 v589; // w27
  QuestRestrictionInfo___c_c *v590; // x8
  struct QuestRestrictionInfo___c_StaticFields *v591; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_2; // x26
  Il2CppObject *v593; // x19
  struct QuestRestrictionInfo___c_StaticFields *v594; // x0
  System_String_array **v595; // x2
  System_String_array **v596; // x3
  System_Boolean_array **v597; // x4
  System_Int32_array **v598; // x5
  System_Int32_array *v599; // x6
  System_Int32_array *v600; // x7
  BattleServantConfConponent_c *v601; // x8
  __int64 v602; // x8
  BattleServantConfConponent_c *v603; // x8
  __int64 v604; // x8
  BattleServantConfConponent_c *v605; // x8
  __int64 v606; // x8
  int v607; // w8
  unsigned int v608; // w19
  WellFired_USFGOPlayBgmEventConditional_CondBGM_o *v609; // x27
  __int64 v610; // x8
  BattleServantConfConponent_c *v611; // x8
  __int64 v612; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v613; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v614; // x0
  BattleServantConfConponent_c *v615; // x8
  __int64 v616; // x8
  System_String_o *condValue; // x27
  BattleServantConfConponent_c *v618; // x8
  __int64 v619; // x8
  System_String_array **v620; // x2
  System_String_array **v621; // x3
  System_Boolean_array **v622; // x4
  System_Int32_array **v623; // x5
  System_Int32_array *v624; // x6
  System_Int32_array *v625; // x7
  BattleServantConfConponent_c *v626; // x8
  __int64 v627; // x8
  System_String_o **v628; // x26
  BattleServantConfConponent_o *v629; // x0
  System_Int32_array **v630; // x1
  BattleServantConfConponent_c *v631; // x8
  __int64 v632; // x27
  QuestRestrictionInfo___c_c *v633; // x0
  struct QuestRestrictionInfo___c_StaticFields *v634; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_3; // x26
  Il2CppObject *v636; // x19
  struct QuestRestrictionInfo___c_StaticFields *v637; // x0
  System_String_array **v638; // x2
  System_String_array **v639; // x3
  System_Boolean_array **v640; // x4
  System_Int32_array **v641; // x5
  System_Int32_array *v642; // x6
  System_Int32_array *v643; // x7
  BattleServantConfConponent_c *v644; // x10
  unsigned int namespaze; // w9
  void **v646; // x8
  __int64 *v647; // x8
  _DWORD *v648; // x11
  _DWORD *v649; // t1
  __int64 v650; // x8
  BattleServantConfConponent_c *v651; // x8
  __int64 v652; // x8
  BattleServantConfConponent_c *v653; // x8
  __int64 v654; // x8
  System_Int32_array **v655; // x0
  System_String_array **v656; // x2
  System_String_array **v657; // x3
  System_Boolean_array **v658; // x4
  System_Int32_array **v659; // x5
  System_Int32_array *v660; // x6
  System_Int32_array *v661; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v663; // w10
  unsigned int v664; // w11
  int v665; // w9
  int v666; // w20
  int32_t v667; // w19
  QuestRestrictionInfo_SlotInfo_o *v668; // x13
  int v669; // w8
  unsigned int v670; // w9
  __int64 v671; // x10
  char v672; // w21
  bool v673; // w8
  bool v674; // w8
  Il2CppObject *Value_int__object; // x0
  int v676; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v678; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v679; // x8
  __int64 v680; // x8
  Il2CppObject *v681; // x0
  System_Int32_array **v682; // x0
  System_String_array **v683; // x2
  System_String_array **v684; // x3
  System_Boolean_array **v685; // x4
  System_Int32_array **v686; // x5
  System_Int32_array *v687; // x6
  System_Int32_array *v688; // x7
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *restrictionSlotDictionary; // x8
  _BOOL8 v690; // x0
  __int64 v691; // x1
  int monitor; // w9
  unsigned int v693; // w10
  __int64 v694; // x11
  System_Text_StringBuilder_o *v695; // x20
  System_Text_StringBuilder_o *v696; // x21
  struct RestrictionWholeEntity_array *v697; // x19
  int v698; // w8
  unsigned int v699; // w22
  RestrictionWholeEntity_o *v700; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v703; // w25
  _BOOL4 v704; // w8
  System_Int32_array **v705; // x0
  System_String_array **v706; // x2
  System_String_array **v707; // x3
  System_Boolean_array **v708; // x4
  System_Int32_array **v709; // x5
  System_Int32_array *v710; // x6
  System_Int32_array *v711; // x7
  System_String_o *v712; // x19
  System_String_o *v713; // x0
  System_Int32_array **v714; // x0
  System_String_array **v715; // x2
  System_String_array **v716; // x3
  System_Boolean_array **v717; // x4
  System_Int32_array **v718; // x5
  System_Int32_array *v719; // x6
  System_Int32_array *v720; // x7
  __int64 v721; // x0
  __int64 v722; // x0
  __int64 v723; // x0
  BattleServantConfConponent_o *p_svtIdForceBattleList; // [xsp+0h] [xbp-190h]
  struct RestrictionWholeEntity_array **v725; // [xsp+8h] [xbp-188h]
  BattleServantConfConponent_o *p_confirmRestrictionMessage; // [xsp+10h] [xbp-180h]
  BattleServantConfConponent_o *p_restrictionMessage; // [xsp+18h] [xbp-178h]
  BattleServantConfConponent_o *v728; // [xsp+20h] [xbp-170h]
  BattleServantConfConponent_o *p_uniqueIndividualitys; // [xsp+28h] [xbp-168h]
  BattleServantConfConponent_o *p_needStartingIndividualities; // [xsp+30h] [xbp-160h]
  BattleServantConfConponent_o *p_fixedNpcIndividualities; // [xsp+38h] [xbp-158h]
  BattleServantConfConponent_o *p_fixedSupportIndividualities; // [xsp+40h] [xbp-150h]
  struct System_Collections_Generic_List_int____o **p_needStartingIndividualitiesList; // [xsp+50h] [xbp-140h]
  struct System_Collections_Generic_List_int____o **p_fixedNpcIndividualitiesList; // [xsp+58h] [xbp-138h]
  struct System_Collections_Generic_List_int____o **p_fixedSupportIndividualitiesList; // [xsp+60h] [xbp-130h]
  struct System_Collections_Generic_List_int____o **p_fixedMyServantIndividualitiesList; // [xsp+68h] [xbp-128h]
  struct System_Collections_Generic_List_bool____o **p_myServantPositionsList; // [xsp+70h] [xbp-120h]
  struct System_Collections_Generic_List_int____o **p_fixedIndividualitiesList; // [xsp+78h] [xbp-118h]
  struct System_Collections_Generic_List_bool____o **p_positionsList; // [xsp+80h] [xbp-110h]
  struct System_Int32_array **p_deckDispLimitCountList; // [xsp+88h] [xbp-108h]
  struct System_Int32_array **p_deckLimitCountList; // [xsp+90h] [xbp-100h]
  _BOOL4 v743; // [xsp+90h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_restrictionSlotDetailDictionary; // [xsp+98h] [xbp-F8h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+A0h] [xbp-F0h]
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **p_dialogMessageInfoDictionary; // [xsp+A8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+B0h] [xbp-E0h]
  BattleServantConfConponent_o *p_deckSvtIdList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v749; // [xsp+B8h] [xbp-D8h]
  int32_t questIdb; // [xsp+C4h] [xbp-CCh]
  QuestRestrictionInfo_o *v752; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v753; // [xsp+D0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v754; // [xsp+D8h] [xbp-B8h] BYREF
  int v755; // [xsp+F0h] [xbp-A0h]
  int v756; // [xsp+F8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v757; // [xsp+100h] [xbp-90h] BYREF
  WarEntity_o *v758; // [xsp+118h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+120h] [xbp-70h] BYREF
  QuestPhaseEntity_o *v760; // [xsp+128h] [xbp-68h] BYREF
  WarEntity_o *v761; // [xsp+130h] [xbp-60h] BYREF

  if ( (byte_42ED296 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, eventId, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_Any_RestrictionSlotEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___, v36, v37, v38);
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionSlotMaster___, v39, v40, v41);
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionWholeMaster___, v42, v43, v44);
    sub_B5D5C4(&DataManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__,
      v48,
      v49,
      v50);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v51, v52, v53);
    sub_B5D5C4(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v54, v55, v56);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__,
      v57,
      v58,
      v59);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__, v66, v67, v68);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__, v69, v70, v71);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__,
      v72,
      v73,
      v74);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__, v75, v76, v77);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__, v78, v79, v80);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__, v81, v82, v83);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      v84,
      v85,
      v86);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__, v87, v88, v89);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v90, v91, v92);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v93, v94, v95);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo,
      v96,
      v97,
      v98);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__,
      v99,
      v100,
      v101);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__,
      v102,
      v103,
      v104);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__,
      v105,
      v106,
      v107);
    sub_B5D5C4(&Method_System_Func_RestrictionSlotEntity__bool___ctor__, v108, v109, v110);
    sub_B5D5C4(&Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__, v111, v112, v113);
    sub_B5D5C4(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo, v114, v115, v116);
    sub_B5D5C4(&System_Func_RestrictionSlotEntity__bool__TypeInfo, v117, v118, v119);
    sub_B5D5C4(&int___TypeInfo, v120, v121, v122);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Add__, v123, v124, v125);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__, v126, v127, v128);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool____Add__, v129, v130, v131);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__, v132, v133, v134);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v135, v136, v137);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__, v138, v139, v140);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v141, v142, v143);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__, v144, v145, v146);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v147, v148, v149);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool_____ctor__, v150, v151, v152);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v153, v154, v155);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v156, v157, v158);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__, v159, v160, v161);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v162, v163, v164);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v165, v166, v167);
    sub_B5D5C4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v168, v169, v170);
    sub_B5D5C4(&System_Collections_Generic_List_bool____TypeInfo, v171, v172, v173);
    sub_B5D5C4(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo, v174, v175, v176);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v177, v178, v179);
    sub_B5D5C4(&QuestRestrictionInfo_SlotInfo___TypeInfo, v180, v181, v182);
    sub_B5D5C4(&QuestRestrictionInfo_SlotInfo_TypeInfo, v183, v184, v185);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v186, v187, v188);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__Setup_b__82_0__, v189, v190, v191);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__Setup_b__82_1__, v192, v193, v194);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__Setup_b__82_2__, v195, v196, v197);
    sub_B5D5C4(&Method_QuestRestrictionInfo___c__Setup_b__82_3__, v198, v199, v200);
    sub_B5D5C4(&QuestRestrictionInfo___c_TypeInfo, v201, v202, v203);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__,
      v204,
      v205,
      v206);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v207, v208, v209);
    sub_B5D5C4(&StringLiteral_10502/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v210, v211, v212);
    sub_B5D5C4(&StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v213, v214, v215);
    sub_B5D5C4(&StringLiteral_1/*""*/, v216, v217, v218);
    byte_42ED296 = 1;
  }
  v760 = 0LL;
  v761 = 0LL;
  v758 = 0LL;
  entity = 0LL;
  memset(&v757, 0, sizeof(v757));
  v756 = 0;
  this->fields.isRestriction = 0;
  p_restrictionMessage = (BattleServantConfConponent_o *)&this->fields.restrictionMessage;
  v219 = (struct System_String_o *)StringLiteral_1/*""*/;
  v220 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
    v220,
    *(System_String_array ***)&questId,
    *(System_String_array ***)&questPhase,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v219;
  p_confirmRestrictionMessage = (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
    (System_Int32_array **)v219,
    v221,
    v222,
    v223,
    v224,
    v225,
    v226);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
    0LL,
    v227,
    v228,
    v229,
    v230,
    v231,
    v232);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.uniqueSvtRestrictionEntity,
    0LL,
    v233,
    v234,
    v235,
    v236,
    v237,
    v238);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (BattleServantConfConponent_o *)&this->fields.deckSvtIdList;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.deckSvtIdList, 0LL, v239, v240, v241, v242, v243, v244);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0LL,
    v245,
    v246,
    v247,
    v248,
    v249,
    v250);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (BattleServantConfConponent_o *)&this->fields.supportPositionList;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.supportPositionList, 0LL, v252, v253, v254, v255, v256, v257);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0LL,
    v258,
    v259,
    v260,
    v261,
    v262,
    v263);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantNumRestrictionEntity,
    0LL,
    v264,
    v265,
    v266,
    v267,
    v268,
    v269);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.myServantNumRestrictionEntity,
    0LL,
    v270,
    v271,
    v272,
    v273,
    v274,
    v275);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
    0LL,
    v276,
    v277,
    v278,
    v279,
    v280,
    v281);
  this->fields.isFatigure = 0;
  this->fields.isNpcEditablePos = 0;
  *(_WORD *)&this->fields.isNpcMultipleBattle = 0;
  this->fields.eventDeckNum = 0;
  v282 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v282,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v282;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (System_Int32_array **)v282,
    v283,
    v284,
    v285,
    v286,
    v287,
    v288);
  v289 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v289,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.specifiedPositionList = v289;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.specifiedPositionList,
    (System_Int32_array **)v289,
    v290,
    v291,
    v292,
    v293,
    v294,
    v295);
  this->fields.isNotTransitionSupportList = 0;
  this->fields.supportInitIndex = 0;
  this->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0LL,
    v296,
    v297,
    v298,
    v299,
    v300,
    v301);
  this->fields.uniqueIndividualityEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.uniqueIndividualityEntity,
    0LL,
    v302,
    v303,
    v304,
    v305,
    v306,
    v307);
  this->fields.isAllOutBattle = 0;
  this->fields.isDataLostBattle = 0;
  this->fields.allOutBattleGroupNo = -1;
  this->fields.dataLostBattleId = -1;
  this->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = &this->fields.deckLimitCountList;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.deckLimitCountList, 0LL, v308, v309, v310, v311, v312, v313);
  this->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = &this->fields.deckDispLimitCountList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
    0LL,
    v314,
    v315,
    v316,
    v317,
    v318,
    v319);
  this->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&this->fields.isUniqueServant = 0;
  v320 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v320,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v320;
  p_positionsList = &this->fields.positionsList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.positionsList,
    (System_Int32_array **)v320,
    v321,
    v322,
    v323,
    v324,
    v325,
    v326);
  v327 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v327,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v327;
  p_fixedIndividualitiesList = &this->fields.fixedIndividualitiesList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixedIndividualitiesList,
    (System_Int32_array **)v327,
    v328,
    v329,
    v330,
    v331,
    v332,
    v333);
  this->fields.isFixedMyServantPosition = 0;
  v334 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v334,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v334;
  p_myServantPositionsList = &this->fields.myServantPositionsList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.myServantPositionsList,
    (System_Int32_array **)v334,
    v335,
    v336,
    v337,
    v338,
    v339,
    v340);
  v341 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v341,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v341;
  p_fixedMyServantIndividualitiesList = &this->fields.fixedMyServantIndividualitiesList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantIndividualitiesList,
    (System_Int32_array **)v341,
    v342,
    v343,
    v344,
    v345,
    v346,
    v347);
  this->fields.isFixedSupportPosition = 0;
  v348 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v348,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v348;
  p_fixedSupportIndividualitiesList = &this->fields.fixedSupportIndividualitiesList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportIndividualitiesList,
    (System_Int32_array **)v348,
    v349,
    v350,
    v351,
    v352,
    v353,
    v354);
  this->fields.isFixedNpcPosition = 0;
  v355 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v355,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v355;
  p_fixedNpcIndividualitiesList = &this->fields.fixedNpcIndividualitiesList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixedNpcIndividualitiesList,
    (System_Int32_array **)v355,
    v356,
    v357,
    v358,
    v359,
    v360,
    v361);
  this->fields.npcPositionList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.npcPositionList, 0LL, v362, v363, v364, v365, v366, v367);
  v368 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v368,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v368;
  p_needStartingIndividualitiesList = &this->fields.needStartingIndividualitiesList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.needStartingIndividualitiesList,
    (System_Int32_array **)v368,
    v369,
    v370,
    v371,
    v372,
    v373,
    v374);
  this->fields.isNeedStarting = 0;
  this->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&this->fields.isMyServantOrNpc = 0;
  this->fields.slotInfos = 0LL;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v376, v377, v378, v379, v380, v381);
  this->fields.dialogMessageInfoDictionary = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
    0LL,
    v382,
    v383,
    v384,
    v385,
    v386,
    v387);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_378;
  p_restrictionBaseEntity = &this->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_WarQuestSelectionMaster,
         &this->fields.restrictionBaseEntity,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
    this->fields.isRestriction = 1;
    v391 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v391,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v391;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&this->fields.restrictionSlotDictionary;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDictionary,
      (System_Int32_array **)v391,
      v392,
      v393,
      v394,
      v395,
      v396,
      v397);
    v398 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v398,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v398;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.restrictionSlotDetailDictionary;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDetailDictionary,
      (System_Int32_array **)v398,
      v399,
      v400,
      v401,
      v402,
      v403,
      v404);
    v405 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v405,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v405;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
      (System_Int32_array **)v405,
      v406,
      v407,
      v408,
      v409,
      v410,
      v411);
    v753 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v753,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_WarQuestSelectionMaster = (__int64)this->fields.restrictionBaseEntity;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = RestrictionBaseEntity__HasFlag(
                                       (RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster,
                                       2LL,
                                       0LL);
    restrictionBaseEntity = this->fields.restrictionBaseEntity;
    this->fields.isNotTransitionSupportList = Master_WarQuestSelectionMaster & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_378;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (__int64)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_378;
      this->fields.eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo(
                                    (RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster,
                                    0LL);
    }
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster, 16LL, 0LL);
    this->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v414 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v414 = BalanceConfig_TypeInfo;
      }
      v415 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, (unsigned int)v414->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (BattleServantConfConponent_c *)v415;
      sub_B5D560(p_deckSvtIdList, v415, v416, v417, v418, v419, v420, v421);
    }
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = RestrictionBaseEntity__HasFlag(
                                       (RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster,
                                       32LL,
                                       0LL);
    v422 = this->fields.restrictionBaseEntity;
    this->fields.isNotSingleSupportOnly = Master_WarQuestSelectionMaster & 1;
    if ( !v422 )
      goto LABEL_378;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v422,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v423 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    p_svtIdForceBattleList = (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList;
    p_dialogMessageInfoDictionary = &this->fields.dialogMessageInfoDictionary;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_WarQuestSelectionMaster,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0LL);
    v752 = this;
    this->fields.restrictionWholeEntities = Entities;
    p_restrictionWholeEntities = &this->fields.restrictionWholeEntities;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_restrictionWholeEntities,
      (System_Int32_array **)Entities,
      v426,
      v427,
      v428,
      v429,
      v430,
      v431);
    v432 = *p_restrictionWholeEntities;
    v725 = p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_378;
    max_length = v432->max_length;
    if ( max_length >= 1 )
    {
      v434 = 0;
      p_fixedSupportIndividualities = (BattleServantConfConponent_o *)&v752->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (BattleServantConfConponent_o *)&v752->fields.fixedNpcIndividualities;
      p_uniqueIndividualitys = (BattleServantConfConponent_o *)&v752->fields.uniqueIndividualitys;
      p_needStartingIndividualities = (BattleServantConfConponent_o *)&v752->fields.needStartingIndividualities;
      v728 = p_supportPositionList;
      while ( 2 )
      {
        if ( v434 >= max_length )
          goto LABEL_379;
        v435 = v432->m_Items[v434];
        if ( v435 )
        {
          switch ( v435->fields.type )
          {
            case 2:
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = QuestGroupMaster__GetGroupId(
                                                 (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                                                 questId,
                                                 17,
                                                 0LL);
              v752->fields.allOutBattleGroupNo = Master_WarQuestSelectionMaster;
              v752->fields.isAllOutBattle = 1;
              goto LABEL_66;
            case 3:
              Master_WarQuestSelectionMaster = System_Linq_Enumerable__Min(
                                                 (System_Collections_Generic_IEnumerable_int__o *)v435->fields.targetVals,
                                                 0LL);
              v752->fields.servantNumMax = Master_WarQuestSelectionMaster - 1;
              goto LABEL_66;
            case 4:
              v453 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_positionsList;
              Master_WarQuestSelectionMaster = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v435, 0LL);
              if ( !v453 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v453,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_bool____Add__);
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v454 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v454 )
                goto LABEL_378;
              v455 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D684(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v454,
                v455,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
              v752->fields.isFixedPosition = 1;
              goto LABEL_66;
            case 5:
              v456 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_myServantPositionsList;
              Master_WarQuestSelectionMaster = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v435, 0LL);
              if ( !v456 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v456,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_bool____Add__);
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v457 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedMyServantIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v457 )
                goto LABEL_378;
              v458 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D684(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v457,
                v458,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
              v752->fields.isFixedMyServantPosition = 1;
              goto LABEL_66;
            case 6:
              SetPossiblePosition = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v435, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)SetPossiblePosition;
              sub_B5D560(p_supportPositionList, SetPossiblePosition, v437, v438, v439, v440, v441, v442);
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v443 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v444 = (System_Int32_array **)sub_B5D684(v443, int___TypeInfo);
              p_fixedSupportIndividualities->klass = (BattleServantConfConponent_c *)v444;
              sub_B5D560(p_fixedSupportIndividualities, v444, v445, v446, v447, v448, v449, v450);
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v451 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedSupportIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v451 )
                goto LABEL_378;
              v452 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D684(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v451,
                v452,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
              v752->fields.isFixedSupportPosition = 1;
              goto LABEL_66;
            case 7:
              v489 = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v435, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)v489;
              sub_B5D560(p_supportPositionList, v489, v490, v491, v492, v493, v494, v495);
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v496 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v497 = (System_Int32_array **)sub_B5D684(v496, int___TypeInfo);
              p_fixedNpcIndividualities->klass = (BattleServantConfConponent_c *)v497;
              sub_B5D560(p_fixedNpcIndividualities, v497, v498, v499, v500, v501, v502, v503);
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v504 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedNpcIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v504 )
                goto LABEL_378;
              v505 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D684(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v504,
                v505,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
              v752->fields.isFixedNpcPosition = 1;
              goto LABEL_66;
            case 8:
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v506 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v507 = (System_Int32_array **)sub_B5D684(v506, int___TypeInfo);
              p_needStartingIndividualities->klass = (BattleServantConfConponent_c *)v507;
              sub_B5D560(p_needStartingIndividualities, v507, v508, v509, v510, v511, v512, v513);
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v514 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_needStartingIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v514 )
                goto LABEL_378;
              v515 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D684(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v514,
                v515,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
              v752->fields.isNeedStarting = 1;
              goto LABEL_66;
            case 9:
              Master_WarQuestSelectionMaster = (__int64)v435->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v459 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v460 = (System_Int32_array **)sub_B5D684(v459, int___TypeInfo);
              p_uniqueIndividualitys->klass = (BattleServantConfConponent_c *)v460;
              sub_B5D560(p_uniqueIndividualitys, v460, v461, v462, v463, v464, v465, v466);
              v467 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v467 = BalanceConfig_TypeInfo;
              }
              v468 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, (unsigned int)v467->static_fields->DeckMemberMax);
              v752->fields.deckSvtIdList = (struct System_Int32_array *)v468;
              sub_B5D560(p_deckSvtIdList, v468, v469, v470, v471, v472, v473, v474);
              v475 = (System_Int32_array **)sub_B5D5DC(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v752->fields.deckLimitCountList = (struct System_Int32_array *)v475;
              sub_B5D560((BattleServantConfConponent_o *)p_deckLimitCountList, v475, v476, v477, v478, v479, v480, v481);
              v482 = (System_Int32_array **)sub_B5D5DC(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v752->fields.deckDispLimitCountList = (struct System_Int32_array *)v482;
              sub_B5D560(
                (BattleServantConfConponent_o *)p_deckDispLimitCountList,
                v482,
                v483,
                v484,
                v485,
                v486,
                v487,
                v488);
              p_supportPositionList = v728;
              v752->fields.isUniqueIndividuality = 1;
              goto LABEL_66;
            case 0xA:
              v752->fields.isDataLostBattle = 1;
              targetVals = v435->fields.targetVals;
              if ( !targetVals )
                goto LABEL_378;
              if ( !targetVals->max_length )
                goto LABEL_379;
              v752->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_66:
              restrictionMessageId = v435->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_75;
              if ( !v423 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 v423,
                                                 &entity,
                                                 restrictionMessageId,
                                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                goto LABEL_75;
              Master_WarQuestSelectionMaster = (__int64)v753;
              if ( !v753 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v753,
                                                 (WarBoardManager_TaskList_o *)entity,
                                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                goto LABEL_75;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v753,
                (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
              v518 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B5D694(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v518, 0LL);
              if ( !v518 )
                goto LABEL_378;
              v518->fields.restrictionType = v435->fields.type;
              if ( !entity )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_378;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                entity->fields.id,
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v518,
                (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_75:
              max_length = v432->max_length;
              if ( (int)++v434 >= max_length )
                goto LABEL_76;
              continue;
            default:
              goto LABEL_66;
          }
        }
        goto LABEL_378;
      }
    }
LABEL_76:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
    v519 = v752;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
      &v761,
      questId,
      (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_WarQuestSelectionMaster = (__int64)v761;
    if ( !v761 )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = QuestEntity__HasFlag_25406292((QuestEntity_o *)v761, 0x100000LL, questPhase, 0LL);
    v520 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v752 )
        goto LABEL_378;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v752->fields.isAllOutBattle;
    }
    v752->fields.isNoSupportBattle = isAllOutBattle != 0;
    Master_WarQuestSelectionMaster = (__int64)v761;
    if ( !v761 )
      goto LABEL_378;
    v752->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_25406292(
                                              (QuestEntity_o *)v761,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_WarQuestSelectionMaster = (__int64)v761;
    if ( !v761 )
      goto LABEL_378;
    v752->fields.isFatigure = QuestEntity__HasFlag_25406292((QuestEntity_o *)v761, 0x200000LL, questPhase, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_378:
      sub_B5D69C(Master_WarQuestSelectionMaster, v389);
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
           &v760,
           questId,
           questPhase,
           v522) )
    {
      Master_WarQuestSelectionMaster = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v760 )
        goto LABEL_378;
      v523 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = QuestPhaseEntity__GetSingleForceSvtId(v760, v389);
      if ( !v523 )
        goto LABEL_378;
      if ( !*(_DWORD *)(v523 + 24) )
        goto LABEL_379;
      *(_DWORD *)(v523 + 32) = Master_WarQuestSelectionMaster;
      p_svtIdForceBattleList->klass = (BattleServantConfConponent_c *)v523;
      sub_B5D560(p_svtIdForceBattleList, (System_Int32_array **)v523, v524, v525, v526, v527, v528, v529);
      Master_WarQuestSelectionMaster = (__int64)v760;
      if ( !v760 )
        goto LABEL_378;
      v752->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v760, v389);
      Master_WarQuestSelectionMaster = (__int64)v760;
      if ( !v760 )
        goto LABEL_378;
      v752->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v760, v389);
    }
    else
    {
      v752->fields.correctionIconId = -1;
    }
    v530 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v530 = BalanceConfig_TypeInfo;
    }
    v531 = (System_Int32_array **)sub_B5D5DC(
                                    QuestRestrictionInfo_SlotInfo___TypeInfo,
                                    (unsigned int)v530->static_fields->DeckMemberMax);
    p_fields->klass = (BattleServantConfConponent_c *)v531;
    sub_B5D560(p_fields, v531, v532, v533, v534, v535, v536, v537);
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v538 = 1;
    for ( i = 1; ; i = v562 & v749 )
    {
      v540 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v540 = BalanceConfig_TypeInfo;
      }
      if ( v538 > v540->static_fields->DeckMemberMax )
        break;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_378;
      questIdb = i;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      Master_WarQuestSelectionMaster = (__int64)RestrictionSlotMaster__GetEntities(
                                                  (RestrictionSlotMaster_o *)Master_WarQuestSelectionMaster,
                                                  (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                                  v538,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      v541 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_WarQuestSelectionMaster
                                                                                        + 24);
      v542 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
      v749 = v541 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_378;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
        v538,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v542,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v543 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v543,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      v544 = *(_DWORD *)(v542 + 24);
      if ( v544 >= 1 )
      {
        v545 = 0LL;
        while ( (unsigned int)v545 < v544 )
        {
          v546 = *(_QWORD *)(v542 + 32 + 8 * v545);
          if ( !v546 || !v543 )
            goto LABEL_378;
          Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                             v543,
                                             *(_DWORD *)(v546 + 40),
                                             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            System_Collections_Generic_List_int___Add(
              v543,
              *(_DWORD *)(v546 + 40),
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v547 = *(_DWORD *)(v546 + 44);
          if ( v547 >= 1 )
          {
            if ( !v423 )
              goto LABEL_378;
            Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                               v423,
                                               &v758,
                                               v547,
                                               (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              Master_WarQuestSelectionMaster = (__int64)v753;
              if ( !v753 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v753,
                                                 (WarBoardManager_TaskList_o *)v758,
                                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v753,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v758,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
                v548 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B5D694(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v548, 0LL);
                if ( !v548 )
                  goto LABEL_378;
                v548->fields.slotNo = v538;
                if ( !v758 )
                  goto LABEL_378;
                Master_WarQuestSelectionMaster = (__int64)*v520;
                if ( !*v520 )
                  goto LABEL_378;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                  v758->fields.id,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v548,
                  (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v544 = *(_DWORD *)(v542 + 24);
          if ( (int)++v545 >= v544 )
            goto LABEL_134;
        }
        goto LABEL_379;
      }
LABEL_134:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      Master_WarQuestSelectionMaster = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                                  (RestrictionSlotDetailMaster_o *)Master_WarQuestSelectionMaster,
                                                  v543,
                                                  0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_378;
      v549 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Master_WarQuestSelectionMaster;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        *p_restrictionSlotDetailDictionary,
        v538,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v551 = (QuestRestrictionInfo_SlotInfo_o *)sub_B5D694(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v551, 0LL);
      if ( !klass )
        goto LABEL_378;
      if ( v551 )
      {
        Master_WarQuestSelectionMaster = sub_B5D684(v551, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_WarQuestSelectionMaster )
        {
          v723 = sub_B5D6BC(0LL);
          sub_B5D668(v723, 0LL);
        }
      }
      v558 = v538 - 1;
      if ( (unsigned int)(v538 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_379;
      v559 = &klass->_1.image + v558;
      v559[4] = v551;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v559 + 4),
        (System_Int32_array **)v551,
        v552,
        v553,
        v554,
        v555,
        v556,
        v557);
      v519 = v752;
      servantNumMax = v752->fields.servantNumMax;
      if ( servantNumMax >= 1 && v558 >= servantNumMax )
      {
        v561 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        v562 = questIdb;
        if ( (unsigned int)v558 >= LODWORD(v561->_1.namespaze) )
          goto LABEL_379;
        v563 = *((_QWORD *)&v561->_1.byval_arg.data + v558);
        if ( !v563 )
          goto LABEL_378;
        *(_DWORD *)(v563 + 16) = 5;
        v564 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v558 >= LODWORD(v564->_1.namespaze) )
          goto LABEL_379;
        v565 = *((_QWORD *)&v564->_1.byval_arg.data + v558);
        if ( !v565 )
          goto LABEL_378;
        *(_BYTE *)(v565 + 48) = 0;
        v520 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
        goto LABEL_251;
      }
      v566 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v566 = QuestRestrictionInfo___c_TypeInfo;
      }
      static_fields = v566->static_fields;
      _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__82_0;
      if ( !_9__82_0 )
      {
        if ( (BYTE3(v566->vtable._0_Equals.methodPtr) & 4) != 0 && !v566->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v566);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v569 = (Il2CppObject *)static_fields->__9;
        _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_0,
          v569,
          Method_QuestRestrictionInfo___c__Setup_b__82_0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v570 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v570->__9__82_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v570->__9__82_0,
          (System_Int32_array **)_9__82_0,
          v571,
          v572,
          v573,
          v574,
          v575,
          v576);
      }
      v577 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v542,
               (System_Func_T__bool__o *)_9__82_0,
               (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v578 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v578 = QuestRestrictionInfo___c_TypeInfo;
      }
      v579 = v578->static_fields;
      _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v579->__9__82_1;
      if ( !_9__82_1 )
      {
        if ( (BYTE3(v578->vtable._0_Equals.methodPtr) & 4) != 0 && !v578->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v578);
          v579 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v581 = (Il2CppObject *)v579->__9;
        _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_1,
          v581,
          Method_QuestRestrictionInfo___c__Setup_b__82_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v582 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v582->__9__82_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v582->__9__82_1,
          (System_Int32_array **)_9__82_1,
          v583,
          v584,
          v585,
          v586,
          v587,
          v588);
      }
      v589 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v542,
               (System_Func_T__bool__o *)_9__82_1,
               (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v590 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v590 = QuestRestrictionInfo___c_TypeInfo;
      }
      v591 = v590->static_fields;
      _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v591->__9__82_2;
      if ( !_9__82_2 )
      {
        v743 = v577;
        if ( (BYTE3(v590->vtable._0_Equals.methodPtr) & 4) != 0 && !v590->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v590);
          v591 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v593 = (Il2CppObject *)v591->__9;
        _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_2,
          v593,
          Method_QuestRestrictionInfo___c__Setup_b__82_2__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v594 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v594->__9__82_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_2;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v594->__9__82_2,
          (System_Int32_array **)_9__82_2,
          v595,
          v596,
          v597,
          v598,
          v599,
          v600);
        v577 = v743;
      }
      Master_WarQuestSelectionMaster = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v542,
                                         (System_Func_T__bool__o *)_9__82_2,
                                         (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      if ( v589 || !v577 || (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( (v577 || !v589) | Master_WarQuestSelectionMaster & 1 )
        {
          if ( !v577 && !v589 && (((unsigned int)Master_WarQuestSelectionMaster ^ 1) & 1) == 0 )
          {
            v603 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v558 >= LODWORD(v603->_1.namespaze) )
              goto LABEL_379;
            v604 = *((_QWORD *)&v603->_1.byval_arg.data + v558);
            if ( !v604 )
              goto LABEL_378;
            *(_DWORD *)(v604 + 16) = 2;
            v752->fields.supportInitIndex = v538;
            if ( !v549 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( !(Master_WarQuestSelectionMaster & 1 | (!v577 || !v589)) )
          {
            v653 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v558 >= LODWORD(v653->_1.namespaze) )
              goto LABEL_379;
            v654 = *((_QWORD *)&v653->_1.byval_arg.data + v558);
            if ( !v654 )
              goto LABEL_378;
            *(_DWORD *)(v654 + 16) = 3;
            v752->fields.isMyServantOrNpc = 1;
            if ( !v549 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( ((v577 || v589) & (unsigned int)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v651 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v558 >= LODWORD(v651->_1.namespaze) )
              goto LABEL_379;
            v652 = *((_QWORD *)&v651->_1.byval_arg.data + v558);
            if ( !v652 )
              goto LABEL_378;
            *(_DWORD *)(v652 + 16) = 4;
            v752->fields.isMyServantOrSupport = 1;
            if ( !v549 )
              goto LABEL_378;
            goto LABEL_196;
          }
        }
        else
        {
          v605 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_378;
          if ( (unsigned int)v558 >= LODWORD(v605->_1.namespaze) )
            goto LABEL_379;
          v606 = *((_QWORD *)&v605->_1.byval_arg.data + v558);
          if ( !v606 )
            goto LABEL_378;
          *(_DWORD *)(v606 + 16) = 1;
        }
        if ( !v549 )
          goto LABEL_378;
      }
      else
      {
        v601 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v558 >= LODWORD(v601->_1.namespaze) )
          goto LABEL_379;
        v602 = *((_QWORD *)&v601->_1.byval_arg.data + v558);
        if ( !v602 )
          goto LABEL_378;
        *(_DWORD *)(v602 + 16) = 0;
        if ( !v549 )
          goto LABEL_378;
      }
LABEL_196:
      v607 = v549->max_length;
      if ( v607 >= 1 )
      {
        v608 = 0;
        while ( v608 < v607 )
        {
          v609 = v549->m_Items[v608];
          if ( !v609 )
            goto LABEL_378;
          if ( !*(_DWORD *)(v542 + 24) )
            break;
          v610 = *(_QWORD *)(v542 + 32);
          if ( !v610 )
            goto LABEL_378;
          if ( v609->fields.condType == *(_DWORD *)(v610 + 40) )
          {
            v611 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v558 >= LODWORD(v611->_1.namespaze) )
              goto LABEL_379;
            v612 = *((_QWORD *)&v611->_1.byval_arg.data + v558);
            if ( !v612 )
              goto LABEL_378;
            if ( *(_DWORD *)(v612 + 16) <= 2u )
            {
              Master_WarQuestSelectionMaster = (__int64)v609[1].monitor;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v613 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v612 + 24);
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v613 )
                goto LABEL_378;
              v614 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D684(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v613,
                v614,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
              v615 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_378;
              if ( (unsigned int)v558 >= LODWORD(v615->_1.namespaze) )
                goto LABEL_379;
              v616 = *((_QWORD *)&v615->_1.byval_arg.data + v558);
              if ( !v616 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = *(_QWORD *)(v616 + 32);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              System_Collections_Generic_List_VoiceCondType_Type___Add(
                (System_Collections_Generic_List_VoiceCondType_Type__o *)Master_WarQuestSelectionMaster,
                v609[1].fields.condType,
                (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
            }
            if ( LODWORD(v609[1].klass) == 2 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10502/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/,
                                                          0LL);
              condValue = (System_String_o *)Master_WarQuestSelectionMaster;
            }
            else
            {
              condValue = (System_String_o *)v609->fields.condValue;
            }
            v618 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v558 >= LODWORD(v618->_1.namespaze) )
              goto LABEL_379;
            v619 = *((_QWORD *)&v618->_1.byval_arg.data + v558);
            if ( !v619 )
              goto LABEL_378;
            Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(*(System_String_o **)(v619 + 40), 0LL);
            v626 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v558 >= LODWORD(v626->_1.namespaze) )
              goto LABEL_379;
            v627 = *((_QWORD *)&v626->_1.byval_arg.data + v558);
            if ( !v627 )
              goto LABEL_378;
            v628 = (System_String_o **)(v627 + 40);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              *v628 = condValue;
              v629 = (BattleServantConfConponent_o *)(v627 + 40);
              v630 = (System_Int32_array **)condValue;
            }
            else
            {
              v630 = (System_Int32_array **)System_String__Concat_44580072(
                                              *v628,
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              condValue,
                                              0LL);
              *v628 = (System_String_o *)v630;
              v629 = (BattleServantConfConponent_o *)v628;
            }
            sub_B5D560(v629, v630, v620, v621, v622, v623, v624, v625);
          }
          v607 = v549->max_length;
          if ( (int)++v608 >= v607 )
            goto LABEL_231;
        }
        goto LABEL_379;
      }
LABEL_231:
      v631 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      if ( (unsigned int)v558 >= LODWORD(v631->_1.namespaze) )
        goto LABEL_379;
      v632 = *((_QWORD *)&v631->_1.byval_arg.data + v558);
      v633 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v633 = QuestRestrictionInfo___c_TypeInfo;
      }
      v634 = v633->static_fields;
      _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v634->__9__82_3;
      if ( !_9__82_3 )
      {
        if ( (BYTE3(v633->vtable._0_Equals.methodPtr) & 4) != 0 && !v633->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v633);
          v634 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v636 = (Il2CppObject *)v634->__9;
        _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_3,
          v636,
          Method_QuestRestrictionInfo___c__Setup_b__82_3__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__);
        v637 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v637->__9__82_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__82_3;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v637->__9__82_3,
          (System_Int32_array **)_9__82_3,
          v638,
          v639,
          v640,
          v641,
          v642,
          v643);
      }
      Master_WarQuestSelectionMaster = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         v549,
                                         (System_Func_T__bool__o *)_9__82_3,
                                         (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
      if ( !v632 )
        goto LABEL_378;
      *(_BYTE *)(v632 + 48) = (Master_WarQuestSelectionMaster & 1) == 0;
      v644 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      namespaze = (unsigned int)v644->_1.namespaze;
      v519 = v752;
      if ( v558 >= namespaze )
        goto LABEL_379;
      v646 = &v644->_1.image + v558;
      v649 = v646[4];
      v647 = (__int64 *)(v646 + 4);
      v648 = v649;
      if ( !v649 )
        goto LABEL_378;
      v520 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
      if ( v648[4] == 1 && *((_BYTE *)v648 + 48) )
      {
        v752->fields.isNpcEditablePos = 1;
        namespaze = (unsigned int)v644->_1.namespaze;
      }
      if ( v558 >= namespaze )
        goto LABEL_379;
      v650 = *v647;
      if ( !v650 )
        goto LABEL_378;
      v562 = questIdb;
      *(_BYTE *)(v650 + 49) = *(_DWORD *)(v542 + 24) != 0;
LABEL_251:
      ++v538;
    }
    Master_WarQuestSelectionMaster = (__int64)v753;
    if ( !v753 )
      goto LABEL_378;
    v655 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v753,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    v519->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v655;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v519->fields.restrictionMessageEntities,
      v655,
      v656,
      v657,
      v658,
      v659,
      v660,
      v661);
    slotInfos = v519->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_378;
    v663 = slotInfos->max_length;
    if ( v663 >= 1 )
    {
      v664 = 0;
      v665 = 0;
      v666 = 0;
      v667 = 0;
      while ( v664 < v663 )
      {
        v668 = slotInfos->m_Items[v664];
        if ( !v668 )
          goto LABEL_378;
        switch ( v668->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v667;
            break;
          case 1:
            ++v666;
            break;
          case 2:
            ++v665;
            break;
          default:
            break;
        }
        if ( (int)++v664 >= v663 )
          goto LABEL_277;
      }
LABEL_379:
      v721 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v721, 0LL);
    }
    v667 = 0;
    v666 = 0;
    v665 = 0;
LABEL_277:
    if ( v665 == 0 && (i & 1) != 0 )
      v519->fields.isNoSupportBattle = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                                (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                                                v519->fields.questId,
                                                v519->fields.questPhase,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    v669 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
    if ( v669 < 1 )
    {
LABEL_290:
      v672 = 0;
    }
    else
    {
      v670 = 0;
      while ( 1 )
      {
        if ( v670 >= v669 )
          goto LABEL_379;
        v671 = *(_QWORD *)(Master_WarQuestSelectionMaster + 8LL * (int)v670 + 32);
        if ( !v671 )
          goto LABEL_378;
        if ( *(_BYTE *)(v671 + 97) )
          break;
        if ( (int)++v670 >= v669 )
          goto LABEL_290;
      }
      v672 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)v761;
    if ( !v761 )
      goto LABEL_378;
    v673 = QuestEntity__HasFlag_25406292((QuestEntity_o *)v761, 0x10000000LL, questPhase, 0LL)
        || (v666 > 0) & (unsigned __int8)v672 & (v667 > 0);
    v519->fields.isNpcMultipleBattle = v673;
    Master_WarQuestSelectionMaster = (__int64)v761;
    if ( !v761 )
      goto LABEL_378;
    v674 = QuestEntity__HasFlag_25406292((QuestEntity_o *)v761, 0x20000000LL, questPhase, 0LL)
        || (v667 == 0) & (unsigned __int8)v672 & (v666 > 0);
    Master_WarQuestSelectionMaster = (__int64)v519->fields.restrictionBaseEntity;
    v519->fields.isNpcOnlyBattle = v674;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_1AD8BC4 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v676 = 2;
      else
        v676 = 1;
      DeckMemberMax = v519->fields.servantNumMax;
      v519->fields.servantNumMin = v676;
      if ( !DeckMemberMax )
      {
        v678 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v678 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v678->static_fields->DeckMemberMax;
        v519->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v519->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v519->fields.isNpcMultipleBattle )
        v519->fields.myServantNumMax = v667;
      goto LABEL_324;
    }
    v519->fields.myServantNumMax = v667;
    if ( v667 == 1 && DeckMemberMax == 1 )
    {
      Master_WarQuestSelectionMaster = (__int64)v519->fields.restrictionSlotDetailDictionary;
      v519->fields.isFixedMyServantSingle = 1;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (__int64)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                                                    1,
                                                    (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_324;
        v679 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_WarQuestSelectionMaster
                                                                                          + 24);
        if ( !v679 )
          goto LABEL_324;
        if ( !(_DWORD)v679 )
          goto LABEL_379;
        v680 = *(_QWORD *)(Master_WarQuestSelectionMaster + 32);
        if ( v680 )
        {
          Master_WarQuestSelectionMaster = *(_QWORD *)(v680 + 40);
          if ( Master_WarQuestSelectionMaster )
          {
            v681 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
            v682 = (System_Int32_array **)sub_B5D684(v681, int___TypeInfo);
            v519->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)v682;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v519->fields.fixedMyServantSingleIndividualities,
              v682,
              v683,
              v684,
              v685,
              v686,
              v687,
              v688);
            goto LABEL_324;
          }
        }
      }
      goto LABEL_378;
    }
LABEL_324:
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v519->fields.restrictionSlotDictionary;
    v519->fields.isSupportOnly = (int)Master_WarQuestSelectionMaster > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = (__int64)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                                restrictionSlotDictionary,
                                                (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      &v754,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v757 = v754;
    do
    {
      v690 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
               &v757,
               (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v690 )
        break;
      if ( !v757.fields.currentValue )
        sub_B5D69C(v690, v691);
      monitor = (int)v757.fields.currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v693 = 0;
        while ( 1 )
        {
          if ( v693 >= monitor )
          {
            v722 = sub_B5D6C8(v690);
            sub_B5D668(v722, 0LL);
          }
          v694 = *((_QWORD *)&v757.fields.currentValue[2].klass + (int)v693);
          if ( !v694 )
            sub_B5D69C(v690, v691);
          if ( *(_DWORD *)(v694 + 28) == 1 )
            break;
          if ( (int)++v693 >= monitor )
            goto LABEL_336;
        }
        v519->fields.isSupportOnly = 0;
        break;
      }
LABEL_336:
      ;
    }
    while ( v519->fields.isSupportOnly );
    v755 = 3158;
    v756 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v757,
      (const MethodInfo_28A2E20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    if ( v755 == 3158 )
      v756 = 0;
    v695 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v695, 0LL);
    v696 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v696, 0LL);
    v697 = *v725;
    if ( !*v725 )
      goto LABEL_378;
    v698 = v697->max_length;
    if ( v698 >= 1 )
    {
      v699 = 0;
      while ( 1 )
      {
        if ( v699 >= v698 )
          goto LABEL_379;
        v700 = v697->m_Items[v699];
        if ( !v700 )
          goto LABEL_378;
        Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(v700->fields.summary, 0LL);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          break;
LABEL_367:
        v698 = v697->max_length;
        if ( (int)++v699 >= v698 )
          goto LABEL_368;
      }
      type = v700->fields.type;
      if ( type == 10 || type == 2 )
      {
        v703 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v700->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_378;
          v703 = 1;
          v704 = targetVals2->max_length == 1;
LABEL_355:
          if ( (v704 & v703) != 0 )
          {
            if ( v519->fields.isRestriction )
            {
              if ( !v696 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_42953744(v696, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
            }
            else if ( !v696 )
            {
              goto LABEL_378;
            }
            Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42953744(
                                                        v696,
                                                        v700->fields.summary,
                                                        0LL);
            v519->fields.isRestriction = 1;
          }
          if ( v703 )
          {
            if ( v519->fields.isRestriction )
            {
              if ( !v695 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_42953744(v695, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
            }
            else if ( !v695 )
            {
              goto LABEL_378;
            }
            Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42953744(
                                                        v695,
                                                        v700->fields.summary,
                                                        0LL);
            v519->fields.isRestriction = 1;
          }
          goto LABEL_367;
        }
        v703 = 0;
      }
      v704 = 1;
      goto LABEL_355;
    }
LABEL_368:
    if ( !v696 )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = System_Text_StringBuilder__get_Length(v696, 0LL);
    if ( (int)Master_WarQuestSelectionMaster >= 1 )
    {
      v705 = (System_Int32_array **)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v696->klass->vtable._3_ToString.method)(
                                      v696,
                                      v696->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (BattleServantConfConponent_c *)v705;
      sub_B5D560(p_confirmRestrictionMessage, v705, v706, v707, v708, v709, v710, v711);
    }
    if ( !v695 )
      goto LABEL_378;
    if ( System_Text_StringBuilder__get_Length(v695, 0LL) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v712 = LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v713 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v695->klass->vtable._3_ToString.method)(
                                  v695,
                                  v695->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v714 = (System_Int32_array **)System_String__Concat_44580072(v712, (System_String_o *)StringLiteral_26/*"\n"*/, v713, 0LL);
      p_restrictionMessage->klass = (BattleServantConfConponent_c *)v714;
      sub_B5D560(p_restrictionMessage, v714, v715, v716, v717, v718, v719, v720);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v390);
  }
}


void __fastcall QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_Text_StringBuilder_o *v47; // x20
  System_Text_StringBuilder_o *v48; // x0
  __int64 myServantOrNpcRestrictionEntityList; // x0
  const MethodInfo *v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x23
  int max_length; // w8
  unsigned int v59; // w28
  RestrictionEntity_o *v60; // x24
  Il2CppObject *v61; // x0
  struct System_Int32_array *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  BalanceConfig_c *v69; // x0
  struct System_Int32_array *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct System_Int32_array *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct System_Int32_array *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Collections_Generic_List_int__o *v98; // x21
  struct System_Int32_array *v99; // x8
  _BOOL4 isRestriction; // w9
  BalanceConfig_c *v101; // x0
  struct System_Int32_array *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *v110; // x8
  int32_t v111; // w8
  struct System_Int32_array *v112; // x8
  __int64 v113; // x9
  System_Collections_Generic_List_int__o *specifiedPositionList; // x21
  __int64 v115; // x9
  struct System_String_o *v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_String_o *v123; // x0
  struct System_String_o *v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  const MethodInfo *v131; // x4
  __int64 v132; // x20
  __int64 v133; // x20
  const MethodInfo *v134; // x4
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  MethodInfo *v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  int64_t v141; // x10
  __int64 v142; // x8
  struct System_Int32_array *v143; // x20
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  int64_t flag; // x8
  bool HasFlag_25406292; // w0
  bool v152; // w0
  struct System_Int32_array *v153; // x20
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  bool v160; // w0
  const MethodInfo *v161; // x4
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  __int64 v174; // x0
  BattleServantConfConponent_o *p_uniqueIndividualityEntity; // [xsp+18h] [xbp-C8h]
  BattleServantConfConponent_o *p_myServantNumRestrictionEntity; // [xsp+28h] [xbp-B8h]
  BattleServantConfConponent_o *p_servantNumRestrictionEntity; // [xsp+30h] [xbp-B0h]
  BattleServantConfConponent_o *p_uniqueSvtRestrictionEntity; // [xsp+58h] [xbp-88h]
  BattleServantConfConponent_o *p_totalCostRestrictionEntity; // [xsp+68h] [xbp-78h]
  struct System_Int32_array **p_deckSvtIdList; // [xsp+70h] [xbp-70h]
  QuestRestrictionInfoEntity_o *v181; // [xsp+78h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v182; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_42ED297 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&int___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v44, v45, v46);
    byte_42ED297 = 1;
  }
  v182 = 0LL;
  entity = 0LL;
  v181 = 0LL;
  v47 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v47, 0LL);
  v48 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v48, 0LL);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_127;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_totalCostRestrictionEntity = (BattleServantConfConponent_o *)&this->fields.totalCostRestrictionEntity;
    p_uniqueSvtRestrictionEntity = (BattleServantConfConponent_o *)&this->fields.uniqueSvtRestrictionEntity;
    p_servantNumRestrictionEntity = (BattleServantConfConponent_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (BattleServantConfConponent_o *)&this->fields.myServantNumRestrictionEntity;
    p_uniqueIndividualityEntity = (BattleServantConfConponent_o *)&this->fields.uniqueIndividualityEntity;
    p_deckSvtIdList = &this->fields.deckSvtIdList;
    v59 = 0;
    while ( 1 )
    {
      if ( v59 >= max_length )
        goto LABEL_128;
      v60 = restrictionEntityList->m_Items[v59];
      if ( !v60 )
        goto LABEL_127;
      switch ( v60->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (BattleServantConfConponent_c *)v60;
          sub_B5D560(p_totalCostRestrictionEntity, (System_Int32_array **)v60, v51, v52, v53, v54, v55, v56);
          goto LABEL_53;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v60;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
            (System_Int32_array **)v60,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          this->fields.isSupportOnly = 1;
          goto LABEL_53;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (BattleServantConfConponent_c *)v60;
          sub_B5D560(p_uniqueSvtRestrictionEntity, (System_Int32_array **)v60, v51, v52, v53, v54, v55, v56);
          v101 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v101 = BalanceConfig_TypeInfo;
          }
          v102 = (struct System_Int32_array *)sub_B5D5DC(
                                                int___TypeInfo,
                                                (unsigned int)v101->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v102;
          sub_B5D560(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v102,
            v103,
            v104,
            v105,
            v106,
            v107,
            v108);
          this->fields.isUniqueServant = 1;
          goto LABEL_53;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v60;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (System_Int32_array **)v60,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v60, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.supportPositionList,
            (System_Int32_array **)DeckPositionList,
            v92,
            v93,
            v94,
            v95,
            v96,
            v97);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_53;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v60;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (System_Int32_array **)v60,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_53;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v60;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (System_Int32_array **)v60,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_53;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v60;
          sub_B5D560(p_servantNumRestrictionEntity, (System_Int32_array **)v60, v51, v52, v53, v54, v55, v56);
          targetVals = v60->fields.targetVals;
          if ( v60->fields.rangeType == 5 )
          {
            if ( !targetVals || (int)targetVals->max_length < 2 )
              goto LABEL_53;
            this->fields.servantNumMin = targetVals->m_Items[1];
            v110 = v60->fields.targetVals;
            if ( !v110 )
              goto LABEL_127;
            if ( v110->max_length <= 1 )
              goto LABEL_128;
            v111 = v110->m_Items[2];
          }
          else
          {
            if ( !targetVals )
              goto LABEL_53;
            v115 = *(_QWORD *)&targetVals->max_length;
            if ( !v115 )
              goto LABEL_53;
            if ( !(_DWORD)v115 )
              goto LABEL_128;
            v111 = targetVals->m_Items[1];
          }
          this->fields.servantNumMax = v111;
LABEL_53:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v59 >= max_length )
            goto LABEL_54;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v60;
          sub_B5D560(p_myServantNumRestrictionEntity, (System_Int32_array **)v60, v51, v52, v53, v54, v55, v56);
          v112 = v60->fields.targetVals;
          if ( !v112 )
            goto LABEL_53;
          v113 = *(_QWORD *)&v112->max_length;
          if ( !v113 )
            goto LABEL_53;
          if ( !(_DWORD)v113 )
            goto LABEL_128;
          this->fields.myServantNumMax = v112->m_Items[1];
          goto LABEL_53;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (__int64)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = RestrictionEntity__GetSpecifiedPosition(v60, 0LL);
          if ( !specifiedPositionList )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            specifiedPositionList,
            myServantOrNpcRestrictionEntityList,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_53;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v60;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (System_Int32_array **)v60,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          this->fields.isNeedStarting = 1;
          goto LABEL_53;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (BattleServantConfConponent_c *)v60;
          sub_B5D560(p_uniqueIndividualityEntity, (System_Int32_array **)v60, v51, v52, v53, v54, v55, v56);
          myServantOrNpcRestrictionEntityList = (__int64)v60->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          v61 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          v62 = (struct System_Int32_array *)sub_B5D684(v61, int___TypeInfo);
          this->fields.uniqueIndividualitys = v62;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.uniqueIndividualitys,
            (System_Int32_array **)v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
          v69 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v69 = BalanceConfig_TypeInfo;
          }
          v70 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v69->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v70;
          sub_B5D560(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v70,
            v71,
            v72,
            v73,
            v74,
            v75,
            v76);
          v77 = (struct System_Int32_array *)sub_B5D5DC(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v77;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.deckLimitCountList,
            (System_Int32_array **)v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
          v84 = (struct System_Int32_array *)sub_B5D5DC(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v84;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
            (System_Int32_array **)v84,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_53;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (__int64)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          v98 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = RestrictionEntity__GetSpecifiedPosition(v60, 0LL);
          if ( !v98 )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            v98,
            myServantOrNpcRestrictionEntityList,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_53;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v99 = v60->fields.targetVals;
          if ( !v99 )
            goto LABEL_127;
          if ( !v99->max_length )
            goto LABEL_128;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v99->m_Items[1];
          if ( isRestriction )
          {
LABEL_24:
            if ( !v47 )
              goto LABEL_127;
            System_Text_StringBuilder__Append_42953744(v47, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
          }
          else
          {
LABEL_27:
            if ( !v47 )
              goto LABEL_127;
          }
          myServantOrNpcRestrictionEntityList = (__int64)System_Text_StringBuilder__Append_42953744(
                                                           v47,
                                                           v60->fields.name,
                                                           0LL);
          this->fields.isRestriction = 1;
          goto LABEL_53;
        default:
          if ( !this->fields.isRestriction )
            goto LABEL_27;
          goto LABEL_24;
      }
    }
  }
LABEL_54:
  if ( this->fields.isRestriction )
  {
    if ( !v47 )
      goto LABEL_127;
    v116 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v47->klass->vtable._3_ToString.method)(
                                       v47,
                                       v47->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v116;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
      (System_Int32_array **)v116,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v123 = LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v124 = System_String__Concat_44580072(
             v123,
             (System_String_o *)StringLiteral_26/*"\n"*/,
             this->fields.confirmRestrictionMessage,
             0LL);
    this->fields.restrictionMessage = v124;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
      (System_Int32_array **)v124,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
  }
  myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v182,
    this->fields.questId,
    this->fields.questPhase,
    v131);
  v132 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v132 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v133 = **(_QWORD **)(v132 + 192);
  if ( (*(_BYTE *)(v133 + 306) & 1) == 0 )
    sub_AF52C4(v133);
  myServantOrNpcRestrictionEntityList = **(_QWORD **)(v133 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v181,
         this->fields.questId,
         this->fields.questPhase,
         v134) )
  {
    myServantOrNpcRestrictionEntityList = (__int64)v181;
    if ( !v181 )
      goto LABEL_127;
    v141 = v181->fields.flag & 0x400000000100000LL;
    this->fields.isNoSupportBattle = v141 != 0;
    if ( v141
      || (v142 = *(_QWORD *)(myServantOrNpcRestrictionEntityList + 24),
          this->fields.isSupportOnlyForceBattle = (v142 & 0x80000) != 0) )
    {
LABEL_80:
      this->fields.isNpcMultipleBattle = (*(_DWORD *)(myServantOrNpcRestrictionEntityList + 24) & 0x10000000) != 0;
      this->fields.isNpcOnlyBattle = (*(_DWORD *)(myServantOrNpcRestrictionEntityList + 24) & 0x20000000) != 0;
      this->fields.isNpcEditablePos = (*(_QWORD *)(myServantOrNpcRestrictionEntityList + 24) & 0x800000000LL) != 0;
      this->fields.isNotTransitionSupportList = (*(_QWORD *)(myServantOrNpcRestrictionEntityList + 24) & 0x80000000000000LL) != 0;
      myServantOrNpcRestrictionEntityList = QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                                              (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                                              &this->fields.overwriteLimitCountSvtIds,
                                              &this->fields.overwriteLimitCounts,
                                              &this->fields.overwriteLimitCountIconIds,
                                              v137);
      if ( !v181 )
        goto LABEL_127;
      flag = v181->fields.flag;
      this->fields.isAllOutBattle = (flag & 0x400000000000000LL) != 0;
      if ( (flag & 0x400000000000000LL) != 0 )
      {
        myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !myServantOrNpcRestrictionEntityList )
          goto LABEL_127;
        myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !myServantOrNpcRestrictionEntityList )
          goto LABEL_127;
        this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                             (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                             this->fields.questId,
                                             17,
                                             0LL);
      }
      if ( entity )
        this->fields.isFatigure = QuestEntity__HasFlag_25406292(
                                    (QuestEntity_o *)entity,
                                    0x200000LL,
                                    this->fields.questPhase,
                                    0LL);
      myServantOrNpcRestrictionEntityList = (__int64)v182;
      if ( v182 )
      {
        this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v182, v50);
        myServantOrNpcRestrictionEntityList = (__int64)v182;
        if ( !v182 )
          goto LABEL_127;
        myServantOrNpcRestrictionEntityList = QuestPhaseEntity__GetSupportInitDeckIndex(v182, v50);
        this->fields.supportInitIndex = myServantOrNpcRestrictionEntityList;
      }
      else
      {
        this->fields.correctionIconId = -1;
      }
      if ( v181 )
      {
        this->fields.isNotSingleSupportOnly = (v181->fields.flag & 0x1000000000000000LL) != 0;
        return;
      }
LABEL_127:
      sub_B5D69C(myServantOrNpcRestrictionEntityList, v50);
    }
    if ( (*(_BYTE *)(myServantOrNpcRestrictionEntityList + 27) & 1) != 0 )
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(
                                    (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                                    v50);
    myServantOrNpcRestrictionEntityList = sub_B5D5DC(int___TypeInfo, 1LL);
    if ( !v181 )
      goto LABEL_127;
    v143 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = QuestRestrictionInfoEntity__GetSingleForceSvtId(v181, v50);
    if ( !v143 )
      goto LABEL_127;
    if ( v143->max_length )
    {
      v143->m_Items[1] = myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v143;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
        (System_Int32_array **)v143,
        v144,
        v145,
        v146,
        v147,
        v148,
        v149);
      myServantOrNpcRestrictionEntityList = (__int64)v181;
      if ( !v181 )
        goto LABEL_127;
      goto LABEL_80;
    }
LABEL_128:
    v174 = sub_B5D6C8(myServantOrNpcRestrictionEntityList);
    sub_B5D668(v174, 0LL);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_25406292((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (__int64)entity;
      if ( !entity )
        goto LABEL_127;
      HasFlag_25406292 = QuestEntity__HasFlag_25406292(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_25406292;
      if ( !HasFlag_25406292 )
      {
        myServantOrNpcRestrictionEntityList = (__int64)entity;
        if ( !entity )
          goto LABEL_127;
        v152 = QuestEntity__HasFlag_25406292((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v152;
        if ( !v152 )
        {
          if ( v182 )
          {
            myServantOrNpcRestrictionEntityList = (__int64)entity;
            if ( !entity )
              goto LABEL_127;
            if ( QuestEntity__HasFlag_25406292((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (__int64)v182;
              if ( !v182 )
                goto LABEL_127;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v182, v50);
            }
            myServantOrNpcRestrictionEntityList = sub_B5D5DC(int___TypeInfo, 1LL);
            if ( !v182 )
              goto LABEL_127;
            v153 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = QuestPhaseEntity__GetSingleForceSvtId(v182, v50);
            if ( !v153 )
              goto LABEL_127;
            if ( !v153->max_length )
              goto LABEL_128;
            v153->m_Items[1] = myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v153;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
              (System_Int32_array **)v153,
              v154,
              v155,
              v156,
              v157,
              v158,
              v159);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isFatigure = QuestEntity__HasFlag_25406292(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    v160 = QuestEntity__HasFlag_25406292((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v160;
    if ( v160 )
    {
      myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_127;
      myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_127;
      this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                           (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                           this->fields.questId,
                                           17,
                                           0LL);
    }
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_25406292(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_25406292(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_25406292(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_25406292(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_25406292(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v182 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v182, v50);
    myServantOrNpcRestrictionEntityList = (__int64)v182;
    if ( !v182 )
      goto LABEL_127;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v182,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      v161);
    myServantOrNpcRestrictionEntityList = (__int64)v182;
    if ( !v182 )
      goto LABEL_127;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v182, v50);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountSvtIds,
      0LL,
      v135,
      v136,
      (System_Boolean_array **)v137,
      v138,
      v139,
      v140);
    this->fields.overwriteLimitCounts = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCounts,
      0LL,
      v162,
      v163,
      v164,
      v165,
      v166,
      v167);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountIconIds,
      0LL,
      v168,
      v169,
      v170,
      v171,
      v172,
      v173);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E7F0C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E7F0C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.individualityList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v24,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rangeTypeList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.summary, v31, v32, v33, v34, v35, v36, v37);
  *(_WORD *)&this->fields.isMoved = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F0A & 1) == 0 )
  {
    sub_B5D5C4(&QuestRestrictionInfo___c_TypeInfo, v1, v2, v3);
    byte_42E7F0A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRestrictionInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B5D69C(this, 0LL);
  return e->fields.name;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B5D69C(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__106_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int type; // w8

  if ( !e )
    sub_B5D69C(this, 0LL);
  type = e->fields.type;
  return type <= 4 && ((1 << type) & 0x16) != 0 || type == 13 || type == 17;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetRestrictionMessage_b__105_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B5D69C(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__96_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_42E7F0B & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_int____get_Count__,
                                           (_DWORD)s,
                                           (_DWORD)method,
                                           v3);
    byte_42E7F0B = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0LL )
    sub_B5D69C(this, s);
  return individualityList->fields._size > 0;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__95_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B5D69C(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__95_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B5D69C(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
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
  __int64 v8; // x0

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
  {
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B5D69C(this, x);
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
  __int64 v8; // x0

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
  {
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}