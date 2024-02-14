void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_30590996(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x4
  struct RestrictionEntity_array *RestrictionList_30591204; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t v19; // w1
  const MethodInfo *v20; // x4

  if ( (byte_4217C85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4217C85 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  RestrictionList_30591204 = QuestRestrictionMaster__getRestrictionList_30591204(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               v11);
  this->fields.restrictionEntityList = RestrictionList_30591204;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)RestrictionList_30591204,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  QuestRestrictionInfo__Setup(this, v19, questId, questPhase, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_30600632(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct QuestRestrictionEntity_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x23
  __int64 v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w1
  const MethodInfo *v35; // x4
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_4217C86 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRestrictionEntity___TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&RestrictionEntity___TypeInfo, v11);
    byte_4217C86 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v12 = (struct QuestRestrictionEntity_array *)sub_B0D8BC(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionEntityList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( overwriteRestiction )
  {
    v19 = sub_B0D8BC(RestrictionEntity___TypeInfo, 1LL);
    if ( !v19 )
      sub_B0D97C(0LL);
    v20 = v19;
    v21 = sub_B0D964(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v21 )
    {
      v36 = sub_B0D99C(0LL);
      sub_B0D948(v36, 0LL);
    }
    if ( !*(_DWORD *)(v20 + 24) )
    {
      v37 = sub_B0D9A8(v21);
      sub_B0D948(v37, 0LL);
    }
    *(_QWORD *)(v20 + 32) = overwriteRestiction;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v20 + 32),
      (System_Int32_array **)overwriteRestiction,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  else
  {
    v20 = sub_B0D8BC(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v20;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)v20,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  QuestRestrictionInfo__Setup(this, v34, questId, questPhase, v35);
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
  bool *v29; // x23
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_bool____o *myServantPositionsList; // x21
  __int64 v33; // x24
  int size; // w8
  System_Boolean_array *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FixedServantPositionSvtIdList; // x0
  BalanceConfig_c *v37; // x0
  struct System_Collections_Generic_List_bool____o *v38; // x21
  System_Boolean_array *v39; // x8
  _BOOL4 v40; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  struct System_Collections_Generic_List_bool____o *v42; // x21
  System_Boolean_array *v43; // x8
  bool *v44; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  bool *v46; // x23
  struct System_Collections_Generic_List_bool____o *positionsList; // x21
  __int64 v48; // x24
  int v49; // w8
  System_Boolean_array *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FixedPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  struct System_Collections_Generic_List_bool____o *v53; // x21
  System_Boolean_array *v54; // x8
  _BOOL4 v55; // w8
  __int64 v56; // x0
  bool *v57; // [xsp+0h] [xbp-60h]
  System_Collections_Generic_IEnumerable_TSource__o *second; // [xsp+8h] [xbp-58h]

  if ( (byte_4217C9F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isFixedServantPositionRestriction);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int___, v22);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v23);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Intersect_int___, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool____get_Count__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool____get_Item__, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_4217C9F = 1;
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
             (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v37 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v37 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v37->static_fields->DeckMainMemberMax <= num;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  v57 = isRestrictionNeedStarting;
  v29 = isRestrictionServantPos;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimit, 0LL);
  second = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
  if ( !this->fields.isFixedMyServantPosition )
    goto LABEL_44;
  myServantPositionsList = this->fields.myServantPositionsList;
  if ( !myServantPositionsList )
    goto LABEL_17;
  v33 = 0LL;
  while ( 1 )
  {
    size = myServantPositionsList->fields._size;
    if ( (int)v33 >= size )
      break;
    if ( size <= (unsigned int)v33 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v35 = myServantPositionsList->fields._items->m_Items[v33];
    if ( !v35 )
      goto LABEL_17;
    if ( v35->max_length <= num )
      goto LABEL_80;
    if ( v35->m_Items[num + 4] )
      goto LABEL_25;
    myServantPositionsList = this->fields.myServantPositionsList;
    ++v33;
    if ( !myServantPositionsList )
      goto LABEL_17;
  }
  LODWORD(v33) = 0;
LABEL_25:
  if ( isFollower )
  {
    v38 = this->fields.myServantPositionsList;
    if ( !v38 )
      goto LABEL_17;
    if ( v38->fields._size <= (unsigned int)v33 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v39 = v38->fields._items->m_Items[(int)v33];
    if ( !v39 )
      goto LABEL_17;
    if ( v39->max_length <= num )
      goto LABEL_80;
    v40 = v39->m_Items[num + 4];
  }
  else
  {
    Instance = (DataManager_o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(this, (int32_t)v30, v31);
    if ( !Instance )
      goto LABEL_44;
    v41 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
            second,
            (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v41,
                                  (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
    v42 = this->fields.myServantPositionsList;
    if ( !v42 )
      goto LABEL_17;
    if ( v42->fields._size <= (unsigned int)v33 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v43 = v42->fields._items->m_Items[(int)v33];
    if ( !v43 )
      goto LABEL_17;
    if ( v43->max_length <= num )
      goto LABEL_80;
    v40 = v43->m_Items[num + 4];
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v40 )
        goto LABEL_44;
      *isFixedServantPositionAgreement = 1;
      goto LABEL_43;
    }
  }
  if ( !v40 )
    goto LABEL_44;
  *isFixedServantPositionRestriction = 1;
  *isFixedServantPositionAgreement = 0;
LABEL_43:
  *isRestrictionMyServantPos = 1;
LABEL_44:
  if ( *isFixedServantPositionRestriction )
    return;
  v44 = v29;
  if ( this->fields.isNeedStarting )
  {
    Instance = (DataManager_o *)QuestRestrictionInfo__GetNeedStartingSvtIdList(this, v30);
    if ( Instance )
    {
      v45 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
              second,
              (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___);
      Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                    v45,
                                    (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v46 = v57;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v46 = v57;
        }
        *isFixedServantPositionRestriction = SLODWORD(Instance[1].fields.saveNameList[4].klass) <= num;
        *isFixedServantPositionAgreement = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax > num;
        *v46 = 1;
      }
    }
  }
  if ( *isFixedServantPositionRestriction || !this->fields.isFixedPosition )
    return;
  positionsList = this->fields.positionsList;
  if ( !positionsList )
    goto LABEL_17;
  v48 = 0LL;
  while ( 1 )
  {
    v49 = positionsList->fields._size;
    if ( (int)v48 >= v49 )
      break;
    if ( v49 <= (unsigned int)v48 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v50 = positionsList->fields._items->m_Items[v48];
    if ( !v50 )
      goto LABEL_17;
    if ( v50->max_length <= num )
      goto LABEL_80;
    if ( v50->m_Items[num + 4] )
      goto LABEL_68;
    positionsList = this->fields.positionsList;
    ++v48;
    if ( !positionsList )
      goto LABEL_17;
  }
  LODWORD(v48) = 0;
LABEL_68:
  FixedPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedPositionSvtIdList(
                                                                                  this,
                                                                                  (int32_t)v30,
                                                                                  v31);
  if ( !FixedPositionSvtIdList )
    return;
  v52 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          second,
          (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v52,
                                (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
  v53 = this->fields.positionsList;
  if ( !v53 )
    goto LABEL_17;
  if ( v53->fields._size <= (unsigned int)v48 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v54 = v53->fields._items->m_Items[(int)v48];
  if ( !v54 )
LABEL_17:
    sub_B0D97C(Instance);
  if ( v54->max_length <= num )
  {
LABEL_80:
    v56 = sub_B0D9A8(Instance);
    sub_B0D948(v56, 0LL);
  }
  v55 = v54->m_Items[num + 4];
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v55 )
    {
      *isFixedServantPositionAgreement = 1;
LABEL_79:
      *v44 = 1;
    }
  }
  else if ( v55 )
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
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(
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
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4217CA8 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                       userServantEntity);
    byte_4217CA8 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_22;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_22:
    sub_B0D97C(this);
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
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v18.fields.currentCryptoKey = v14;
      *(_QWORD *)&v18.fields.fakeValue = v13;
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_17;
    }
LABEL_21:
    v16 = sub_B0D9A8(this);
    sub_B0D948(v16, 0LL);
  }
LABEL_17:
  if ( !(_DWORD)dialogMessageInfoDictionary )
    goto LABEL_21;
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
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  __int64 v11; // x9
  __int64 v12; // x22
  __int64 v13; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8
  __int64 v16; // x0

  if ( (byte_4217CA7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4217CA7 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&svtId,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds )
  {
    if ( this->fields.overwriteLimitCounts )
    {
      v11 = *(_QWORD *)&overwriteLimitCountSvtIds->max_length;
      if ( (int)v11 >= 1 )
      {
        v12 = (int)v11;
        v13 = 8LL;
        do
        {
          if ( v13 - 8 >= (unsigned __int64)overwriteLimitCountSvtIds->max_length )
          {
LABEL_18:
            v16 = sub_B0D9A8(v9);
            sub_B0D948(v16, 0LL);
          }
          if ( *((_DWORD *)&overwriteLimitCountSvtIds->obj.klass + v13) == svtId )
          {
            overwriteLimitCounts = this->fields.overwriteLimitCounts;
            if ( !overwriteLimitCounts )
              break;
            if ( v13 - 8 >= (unsigned __int64)overwriteLimitCounts->max_length )
              goto LABEL_18;
            if ( !v8 )
              break;
            System_Collections_Generic_List_int___Add(
              v8,
              *((_DWORD *)&overwriteLimitCounts->obj.klass + v13),
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( v13 - 7 >= v12 )
            goto LABEL_16;
          overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
          ++v13;
        }
        while ( overwriteLimitCountSvtIds );
LABEL_15:
        sub_B0D97C(v9);
      }
    }
  }
LABEL_16:
  if ( !v8 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v10; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x9
  __int64 v12; // x22
  QuestRestrictionInfo_SlotInfo_o *v13; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int max_length; // w8
  unsigned int v16; // w22
  __int64 v17; // x23
  RestrictionWholeEntity_o *v18; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  unsigned __int64 v21; // x27
  int v22; // w8
  System_String_o **p_summary; // x25
  unsigned int v24; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v25; // x8
  QuestRestrictionInfo_SlotInfo_o *v26; // x8
  struct QuestRestrictionInfo_SlotInfo_array *v27; // x8
  QuestRestrictionInfo_SlotInfo_o *v28; // x8
  __int64 v30; // x0

  v8 = this;
  if ( (byte_4217C92 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4217C92 = 1;
  }
  if ( !v8->fields.restrictionBaseEntity )
    goto LABEL_38;
  v10 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_46;
    if ( v10 >= slotInfos->max_length )
      goto LABEL_45;
    v12 = v10;
    v13 = slotInfos->m_Items[v10];
    if ( !v13 )
      goto LABEL_46;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v13->fields.summary, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v27 = v8->fields.slotInfos;
      if ( v27 )
      {
        if ( (unsigned int)v12 >= v27->max_length )
          goto LABEL_45;
        v28 = v27->m_Items[v12];
        if ( v28 )
        {
          p_summary = &v28->fields.summary;
          return *p_summary;
        }
      }
      goto LABEL_46;
    }
  }
  if ( !isCheckPosForWhole )
  {
    p_summary = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_summary;
  }
  if ( pos < 1 )
    goto LABEL_38;
  restrictionWholeEntities = v8->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_46:
    sub_B0D97C(this);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
  {
LABEL_38:
    p_summary = &v8->fields.confirmRestrictionMessage;
    return *p_summary;
  }
  v16 = 0;
  v17 = pos - 1;
  while ( 1 )
  {
    if ( v16 >= max_length )
      goto LABEL_45;
    v18 = restrictionWholeEntities->m_Items[v16];
    if ( !v18 )
      goto LABEL_46;
    type = v18->fields.type;
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
        v25 = v8->fields.slotInfos;
        if ( !v25 )
          goto LABEL_46;
        if ( (unsigned int)v17 >= v25->max_length )
          goto LABEL_45;
        v26 = v25->m_Items[v17];
        if ( !v26 )
          goto LABEL_46;
        if ( v26->fields.slotType != 5 )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v18->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            break;
        }
      }
    }
    targetVals2 = v18->fields.targetVals2;
    if ( !targetVals2 )
      goto LABEL_46;
    if ( (unsigned int)*(_QWORD *)&targetVals2->max_length == 1 )
    {
      v21 = 0LL;
      v22 = 1;
      p_summary = &v18->fields.summary;
      v24 = 1;
      while ( v21 < v24 )
      {
        if ( targetVals2->m_Items[v21 + 1] == pos )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*p_summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return *p_summary;
          v22 = targetVals2->max_length;
        }
        ++v21;
        v24 = v22;
        if ( (__int64)v21 >= v22 )
          goto LABEL_37;
      }
LABEL_45:
      v30 = sub_B0D9A8(this);
      sub_B0D948(v30, 0LL);
    }
LABEL_37:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v16 >= max_length )
      goto LABEL_38;
  }
  p_summary = &v18->fields.summary;
  return *p_summary;
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
      v11 = sub_B0D9A8(this);
      sub_B0D948(v11, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  int64_t IsDisplayedRestrictionDialog; // x0
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x22
  int v15; // w8
  int i; // w23
  RestrictionMessageEntity_o *v17; // x25
  int32_t frequencyType; // w8
  UserQuestMaster_o *v19; // x21
  UserQuestEntity_o *v20; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w23
  int v23; // w24
  int32_t v24; // w21
  int32_t *v25; // x27
  int32_t v26; // w8
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserQuestEntity_o *v28; // x22
  __int64 v30; // x0

  if ( (byte_4217CA4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    byte_4217CA4 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_61;
    max_length = questRestrictionEntityList->max_length;
    if ( max_length < 1 )
      goto LABEL_59;
    v23 = 1;
    while ( 1 )
    {
      v24 = v23 - 1;
      if ( v23 - 1 >= questRestrictionEntityList->max_length )
      {
LABEL_62:
        v30 = sub_B0D9A8(IsDisplayedRestrictionDialog);
        sub_B0D948(v30, 0LL);
      }
      v25 = (int32_t *)questRestrictionEntityList->m_Items[v24];
      if ( !v25 )
        goto LABEL_61;
      v26 = v25[7];
      if ( v26 == 1 )
        break;
      if ( v26 == 2 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        IsDisplayedRestrictionDialog = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsDisplayedRestrictionDialog )
          goto LABEL_61;
        IsDisplayedRestrictionDialog = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                         (PartyOrganizationUtility_o *)IsDisplayedRestrictionDialog,
                                         v25[4],
                                         v25[5],
                                         v25[6],
                                         1,
                                         0LL);
        if ( (IsDisplayedRestrictionDialog & 1) != 0 )
          goto LABEL_56;
        goto LABEL_54;
      }
      if ( v26 == 3 )
        goto LABEL_54;
LABEL_56:
      if ( v23 >= max_length )
        goto LABEL_59;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v23;
      if ( !questRestrictionEntityList )
        goto LABEL_61;
    }
    IsDisplayedRestrictionDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsDisplayedRestrictionDialog )
      goto LABEL_61;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)IsDisplayedRestrictionDialog,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
                                              v25[4],
                                              0LL);
    if ( IsDisplayedRestrictionDialog )
    {
      v28 = (UserQuestEntity_o *)IsDisplayedRestrictionDialog;
      IsDisplayedRestrictionDialog = UserQuestEntity__getClearNum(
                                       (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                                       0LL);
      if ( (_DWORD)IsDisplayedRestrictionDialog )
        goto LABEL_56;
      IsDisplayedRestrictionDialog = UserQuestEntity__HasStatus(v28, 16, 0LL);
      if ( (IsDisplayedRestrictionDialog & 1) != 0 )
        goto LABEL_56;
    }
LABEL_54:
    if ( !v12 )
      goto LABEL_61;
    System_Collections_Generic_List_int___Add(
      v12,
      v24,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    goto LABEL_56;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_61;
  v15 = restrictionMessageEntities->max_length;
  if ( v15 >= 1 )
  {
    for ( i = 0; i < v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        goto LABEL_62;
      v17 = restrictionMessageEntities->m_Items[i];
      if ( !v17 )
        goto LABEL_61;
      frequencyType = v17->fields.frequencyType;
      switch ( frequencyType )
      {
        case 1:
          IsDisplayedRestrictionDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !IsDisplayedRestrictionDialog )
            goto LABEL_61;
          v19 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)IsDisplayedRestrictionDialog,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          IsDisplayedRestrictionDialog = NetworkManager__get_UserId(0LL);
          if ( !v19 )
            goto LABEL_61;
          IsDisplayedRestrictionDialog = (int64_t)UserQuestMaster__getEntityFromId(
                                                    v19,
                                                    IsDisplayedRestrictionDialog,
                                                    this->fields.questId,
                                                    0LL);
          if ( !IsDisplayedRestrictionDialog
            || (v20 = (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                IsDisplayedRestrictionDialog = UserQuestEntity__getClearNum(
                                                 (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                                                 0LL),
                !(_DWORD)IsDisplayedRestrictionDialog)
            && (IsDisplayedRestrictionDialog = UserQuestEntity__HasStatus(v20, 16, 0LL),
                (IsDisplayedRestrictionDialog & 1) == 0) )
          {
LABEL_27:
            if ( !v12 )
              goto LABEL_61;
            System_Collections_Generic_List_int___Add(
              v12,
              v17->fields.id,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          break;
        case 2:
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          IsDisplayedRestrictionDialog = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !IsDisplayedRestrictionDialog )
            goto LABEL_61;
          IsDisplayedRestrictionDialog = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                           (PartyOrganizationUtility_o *)IsDisplayedRestrictionDialog,
                                           this->fields.questId,
                                           this->fields.questPhase,
                                           v17->fields.id,
                                           1,
                                           0LL);
          if ( (IsDisplayedRestrictionDialog & 1) == 0 )
            goto LABEL_27;
          break;
        case 3:
          goto LABEL_27;
      }
      v15 = restrictionMessageEntities->max_length;
    }
  }
LABEL_59:
  if ( !v12 )
LABEL_61:
    sub_B0D97C(IsDisplayedRestrictionDialog);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  unsigned int v8; // w11
  RestrictionMessageEntity_o *v9; // x12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v11; // x8
  __int64 v13; // x0

  v4 = this;
  if ( (byte_4217CA5 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, *(_QWORD *)&n);
    byte_4217CA5 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_20:
        v13 = sub_B0D9A8(this);
        sub_B0D948(v13, 0LL);
      }
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_B0D97C(this);
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
      if ( v8 >= max_length )
        goto LABEL_20;
      v9 = restrictionMessageEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_19;
      if ( v9->fields.id == n )
        break;
      if ( (int)++v8 >= max_length )
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
  QuestRestrictionInfo_DialogMessageInfo_o *result; // x0
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0

  if ( (byte_4217CBB & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__,
      *(_QWORD *)&messageId);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__,
      v5);
    byte_4217CBB = 1;
  }
  result = (QuestRestrictionInfo_DialogMessageInfo_o *)this->fields.dialogMessageInfoDictionary;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)result,
           messageId,
           (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
    {
      dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
      if ( !dialogMessageInfoDictionary )
        sub_B0D97C(0LL);
      return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)dialogMessageInfoDictionary,
                                                           messageId,
                                                           (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  QuestRestrictionInfo_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v9; // w21
  RestrictionWholeEntity_o *v10; // x25
  __int64 v12; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4217CBE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4217CBE = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_20;
      if ( v10->fields.type == 5 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v9 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_20:
    sub_B0D97C(this);
  }
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_age;
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
  System_String_o **p_age; // x20
  unsigned int v9; // w21
  RestrictionWholeEntity_o *v10; // x25
  __int64 v12; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4217CC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4217CC0 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_20;
      if ( v10->fields.type == 6 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v9 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_20:
    sub_B0D97C(this);
  }
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_age;
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
  System_String_o **p_age; // x20
  unsigned int v9; // w21
  RestrictionWholeEntity_o *v10; // x25
  int32_t type; // w8
  __int64 v13; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4217CBD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4217CBD = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_21;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v13 = sub_B0D9A8(this);
        sub_B0D948(v13, 0LL);
      }
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_21;
      type = v10->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_21;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v9 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_21:
    sub_B0D97C(this);
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
  QuestRestrictionInfo_o *v4; // x20
  __int64 v5; // x1
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v7; // x19
  System_String_o **p_title; // x20
  unsigned int v9; // w21
  __int64 v10; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v12; // x8
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4217CA6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&n);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4217CA6 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_21:
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
      }
      v12 = questRestrictionEntityList->m_Items[n];
      if ( v12 )
      {
        p_title = &v12->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_B0D97C(this);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                     n,
                                     (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_8:
    sub_B0D97C(this);
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
      sub_B0D97C(this);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= questRestrictionEntityList->max_length )
        {
          v18 = sub_B0D9A8(this);
          sub_B0D948(v18, 0LL);
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
    sub_B0D840((BattleServantConfConponent_o *)message, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  sub_B0D840(
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
  __int64 v2; // x1

  if ( (byte_4217CB0 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10416/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v2);
    byte_4217CB0 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10416/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4217CAF & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10417/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, v2);
    byte_4217CAF = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10417/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217CC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4217CC6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v10.fields.current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields.current )
      sub_B0D97C(v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217CC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4217CC3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&idx,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v11 )
      sub_B0D97C(v13);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v15.fields.current,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_B0D97C(fixedMyServantIndividualitiesList);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v27; // x0

  v10 = this;
  if ( (byte_4217CA1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v13);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4217CA1 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               svtId,
                                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v17 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_B0D97C(this);
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
    v27 = sub_B0D9A8(this);
    sub_B0D948(v27, 0LL);
  }
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4217CA2 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10415/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, v2);
    byte_4217CA2 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217CC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4217CC8 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v10.fields.current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields.current )
      sub_B0D97C(v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217CC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4217CC5 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&idx,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v11 )
      sub_B0D97C(v13);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v15.fields.current,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_B0D97C(fixedIndividualitiesList);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int v7; // w21
  _BOOL8 v8; // x0
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v12; // w20
  _BOOL8 v13; // x0
  int v14; // w19
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  int v17[2]; // [xsp+20h] [xbp-50h]
  int v18; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_4217C9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4217C9E = 1;
  }
  memset(&i, 0, sizeof(i));
  v18 = 0;
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
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v7 = 0;
    for ( i = v16; ; v7 += LODWORD(i.fields.current[1].monitor) )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &i,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields.current )
        sub_B0D97C(v8);
    }
    v17[0] = 159;
    v18 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v18 = 0;
  }
  else
  {
    v7 = 0;
  }
  v12 = v7 + this->fields.isNeedStarting;
  if ( !this->fields.isFixedPosition )
    return v12;
  fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
LABEL_32:
    sub_B0D97C(fixedMyServantIndividualitiesList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v16; ; v12 += LODWORD(i.fields.current[1].monitor) )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !i.fields.current )
      sub_B0D97C(v13);
  }
  v17[0] = 232;
  v14 = ++v18;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( v14 && v17[v14 - 1] == 232 )
    v18 = v14 - 1;
  return v12;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4217CA0 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10414/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, v2);
    byte_4217CA0 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10414/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x19
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  _BOOL8 v14; // x0
  _BOOL8 v15; // x0
  int v16; // w21
  int v17; // w8
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  _BOOL8 v20; // x0
  int v21; // w21
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  int v23[3]; // [xsp+20h] [xbp-50h]
  int v24; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_4217C9D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4217C9D = 1;
  }
  memset(&i, 0, sizeof(i));
  v24 = 0;
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
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedMyServantPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v12,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v14 )
        break;
      if ( !v12 )
        sub_B0D97C(v14);
    }
    v23[0] = 134;
    v24 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v24 = 0;
  }
  if ( this->fields.isNeedStarting )
  {
    fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v12,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v15 )
        break;
      if ( !v12 )
        sub_B0D97C(v15);
    }
    v23[0] = 196;
    v16 = ++v24;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v23[v16 - 1] == 196 )
      {
        --v16;
        v24 = v17;
      }
    }
  }
  else
  {
    v16 = 0;
  }
  if ( this->fields.isFixedPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v12,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v20 )
        break;
      if ( !v12 )
        sub_B0D97C(v20);
    }
    v23[v16] = 260;
    v21 = ++v24;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v21 && v23[v21 - 1] == 260 )
      v24 = v21 - 1;
  }
  if ( !v12 )
LABEL_43:
    sub_B0D97C(fixedMyServantIndividualitiesList);
  if ( v12->fields._size >= 1 )
    return System_Collections_Generic_List_int___ToArray(
             v12,
             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0LL;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4217C9C & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10419/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, v2);
    byte_4217C9C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10419/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
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
  unsigned int v8; // w11
  RestrictionWholeEntity_o *v9; // x12
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4217C8F & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionWholeType);
    byte_4217C8F = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_B0D97C(this);
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
      if ( v8 >= max_length )
      {
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
      }
      v9 = restrictionWholeEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_15;
      if ( v9->fields.type == restrictionWholeType )
        break;
      if ( (int)++v8 >= max_length )
        return *p_summary;
    }
    p_summary = &v9->fields.summary;
  }
  return *p_summary;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_30608508(
        QuestRestrictionInfo_o *this,
        int32_t restrictionType,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  struct RestrictionEntity_array *restrictionEntityList; // x9
  int max_length; // w10
  System_String_o **p_name; // x8
  unsigned int v8; // w11
  RestrictionEntity_o *v9; // x12
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4217C90 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionType);
    byte_4217C90 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_B0D97C(this);
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
      if ( v8 >= max_length )
      {
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
      }
      v9 = restrictionEntityList->m_Items[v8];
      if ( !v9 )
        goto LABEL_15;
      if ( v9->fields.type == restrictionType )
        break;
      if ( (int)++v8 >= max_length )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  void *IsNullOrEmpty; // x0
  System_String_o *v35; // x26
  System_String_o *v36; // x27
  System_String_o *v37; // x1
  System_String_o *v38; // x1
  System_String_o *v39; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x23
  int max_length; // w8
  unsigned int v42; // w24
  RestrictionWholeEntity_o *v43; // x21
  Il2CppObject *summary; // x1
  int v45; // w8
  void *v46; // x21
  unsigned int v47; // w22
  __int64 v48; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x1
  System_String_o *v50; // x0
  __int64 v52; // x0
  bool v53; // [xsp+Ch] [xbp-74h]
  int32_t key; // [xsp+14h] [xbp-6Ch]

  if ( (byte_4217C8D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v25);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v26);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v27);
    sub_B0D8A4(&StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v28);
    sub_B0D8A4(&StringLiteral_11126/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v29);
    sub_B0D8A4(&StringLiteral_11127/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v30);
    sub_B0D8A4(&StringLiteral_11123/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v31);
    sub_B0D8A4(&StringLiteral_6406/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v32);
    byte_4217C8D = 1;
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  *(_QWORD *)&pos,
                                                                                                  isNoneTitle);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_86;
  v53 = individuality;
  key = pos;
  if ( !isSlotOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_6406/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11127/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v36 = (System_String_o *)IsNullOrEmpty;
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
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11123/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
      v38 = (System_String_o *)IsNullOrEmpty;
      if ( isNoneTitle )
      {
        if ( fatigue )
          goto LABEL_25;
      }
      else
      {
        IsNullOrEmpty = System_String__Format(v35, (Il2CppObject *)IsNullOrEmpty, 0LL);
        v38 = (System_String_o *)IsNullOrEmpty;
        if ( fatigue )
        {
LABEL_25:
          IsNullOrEmpty = System_String__Concat_43849904(v38, v36, 0LL);
          v38 = (System_String_o *)IsNullOrEmpty;
          if ( !v33 )
            goto LABEL_88;
          goto LABEL_29;
        }
      }
      if ( !v33 )
        goto LABEL_88;
LABEL_29:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_30:
      if ( !this->fields.isNotSingleSupportOnly )
        goto LABEL_41;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
      v39 = (System_String_o *)IsNullOrEmpty;
      if ( isNoneTitle )
      {
        if ( singleSupport )
          goto LABEL_36;
      }
      else
      {
        IsNullOrEmpty = System_String__Format(v35, (Il2CppObject *)IsNullOrEmpty, 0LL);
        v39 = (System_String_o *)IsNullOrEmpty;
        if ( singleSupport )
        {
LABEL_36:
          IsNullOrEmpty = System_String__Concat_43849904(v39, v36, 0LL);
          v39 = (System_String_o *)IsNullOrEmpty;
          if ( !v33 )
            goto LABEL_88;
          goto LABEL_40;
        }
      }
      if ( !v33 )
        goto LABEL_88;
LABEL_40:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_41:
      restrictionWholeEntities = this->fields.restrictionWholeEntities;
      if ( !restrictionWholeEntities )
        goto LABEL_88;
      max_length = restrictionWholeEntities->max_length;
      if ( max_length >= 1 )
      {
        v42 = 0;
        while ( v42 < max_length )
        {
          v43 = restrictionWholeEntities->m_Items[v42];
          if ( !v43 )
            goto LABEL_88;
          IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v43->fields.summary, 0LL);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          {
            summary = (Il2CppObject *)v43->fields.summary;
            if ( !isNoneTitle )
            {
              IsNullOrEmpty = System_String__Format(v35, summary, 0LL);
              summary = (Il2CppObject *)IsNullOrEmpty;
            }
            switch ( v43->fields.type )
            {
              case 1:
                if ( v53 )
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
                  IsNullOrEmpty = System_String__Concat_43849904((System_String_o *)summary, v36, 0LL);
                  summary = (Il2CppObject *)IsNullOrEmpty;
                }
                break;
              default:
                break;
            }
            if ( !v33 )
              goto LABEL_88;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v33,
              (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
          }
          max_length = restrictionWholeEntities->max_length;
          if ( (int)++v42 >= max_length )
            goto LABEL_69;
        }
LABEL_89:
        v52 = sub_B0D9A8(IsNullOrEmpty);
        sub_B0D948(v52, 0LL);
      }
      goto LABEL_69;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11126/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
    v37 = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_14;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v35, (Il2CppObject *)IsNullOrEmpty, 0LL);
      v37 = (System_String_o *)IsNullOrEmpty;
      if ( uniqueServant )
      {
LABEL_14:
        IsNullOrEmpty = System_String__Concat_43849904(v37, v36, 0LL);
        v37 = (System_String_o *)IsNullOrEmpty;
        if ( !v33 )
          goto LABEL_88;
        goto LABEL_18;
      }
    }
    if ( !v33 )
      goto LABEL_88;
LABEL_18:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v33,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_19;
  }
LABEL_69:
  if ( key )
  {
    IsNullOrEmpty = this->fields.restrictionSlotDetailDictionary;
    if ( !IsNullOrEmpty
      || (IsNullOrEmpty = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)IsNullOrEmpty,
                            key,
                            (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_88:
      sub_B0D97C(IsNullOrEmpty);
    }
    v45 = *((_DWORD *)IsNullOrEmpty + 6);
    v46 = IsNullOrEmpty;
    if ( v45 >= 1 )
    {
      v47 = 0;
      while ( v47 < v45 )
      {
        v48 = *((_QWORD *)v46 + (int)v47 + 4);
        if ( !v48 )
          goto LABEL_88;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v48 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            v49 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v48 + 24);
            if ( !v33 )
              goto LABEL_88;
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_6406/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v50, *(Il2CppObject **)(v48 + 24), 0LL);
            v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)IsNullOrEmpty;
            if ( !v33 )
              goto LABEL_88;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            v49,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v45 = *((_DWORD *)v46 + 6);
        if ( (int)++v47 >= v45 )
          goto LABEL_86;
      }
      goto LABEL_89;
    }
  }
LABEL_86:
  if ( !v33 )
    goto LABEL_88;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_30607384(
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
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x26
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v32; // x1
  System_String_o *v33; // x1
  signed int max_length; // w8
  unsigned int v35; // w20
  RestrictionEntity_o *v36; // x19
  System_String_o *name; // x1
  __int64 v39; // x0

  if ( (byte_4217C8E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, entities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v22);
    sub_B0D8A4(&StringLiteral_11127/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v23);
    sub_B0D8A4(&StringLiteral_11123/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v24);
    sub_B0D8A4(&StringLiteral_6406/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v25);
    byte_4217C8E = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6406/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11127/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !isSlotOnly && this->fields.isFatigure )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11123/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
    v32 = IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( !fatigue )
        goto LABEL_13;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
      v32 = IsNullOrEmpty;
      if ( !fatigue )
      {
LABEL_13:
        if ( !v30 )
          goto LABEL_57;
        goto LABEL_17;
      }
    }
    IsNullOrEmpty = System_String__Concat_43849904(v32, v27, 0LL);
    v32 = IsNullOrEmpty;
    if ( !v30 )
      goto LABEL_57;
LABEL_17:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    v33 = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
      v33 = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_43849904(v33, v27, 0LL);
      v33 = IsNullOrEmpty;
    }
    if ( !v30 )
      goto LABEL_57;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( !entities )
    goto LABEL_57;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
      {
        v39 = sub_B0D9A8(IsNullOrEmpty);
        sub_B0D948(v39, 0LL);
      }
      v36 = entities->m_Items[v35];
      if ( !v36 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v36->fields.name, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v36->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v36, 0LL);
          name = IsNullOrEmpty;
        }
        switch ( v36->fields.type )
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
              IsNullOrEmpty = System_String__Concat_43849904(name, v27, 0LL);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v30 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)name,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_55;
    }
LABEL_57:
    sub_B0D97C(IsNullOrEmpty);
  }
LABEL_55:
  if ( !v30 )
    goto LABEL_57;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  int32_t v23; // w10
  int32_t v24; // w1
  RestrictionEntity_o *v25; // x11
  WarEntity_o *v27; // x8
  __int64 v28; // x0
  WarEntity_o *v29; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4217CAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v7);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4217CAE = 1;
  }
  v29 = 0LL;
  entity = 0LL;
  if ( v3->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v3->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_56;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_16:
      slotInfos = v3->fields.slotInfos;
      if ( !slotInfos )
        goto LABEL_56;
      v14 = 0;
      while ( 1 )
      {
        v15 = slotInfos->max_length;
        if ( v14 >= v15 )
          return (System_String_o *)StringLiteral_1/*""*/;
        if ( v14 >= (unsigned int)v15 )
          goto LABEL_57;
        v16 = slotInfos->m_Items[v14];
        if ( !v16 )
          goto LABEL_56;
        if ( v16->fields.slotType )
        {
          ++v14;
        }
        else
        {
          this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
          if ( !this )
            goto LABEL_56;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                             ++v14,
                                             (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_56;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                               v14,
                                               (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
            if ( !this )
              goto LABEL_56;
            dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
            v18 = this;
            if ( dialogMessageInfoDictionary >= 1 )
            {
              v19 = 0;
              while ( 1 )
              {
                if ( v19 >= dialogMessageInfoDictionary )
                  goto LABEL_57;
                v20 = *((_QWORD *)&v18->fields.eventId + (int)v19);
                if ( !v20 )
                  goto LABEL_56;
                if ( *(_DWORD *)(v20 + 44) && !*(_DWORD *)(v20 + 40) )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_56;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     &v29,
                                                     *(_DWORD *)(v20 + 44),
                                                     (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
                dialogMessageInfoDictionary = (int)v18->fields.dialogMessageInfoDictionary;
                if ( (int)++v19 >= dialogMessageInfoDictionary )
                  goto LABEL_39;
              }
              v27 = v29;
              if ( v29 )
                return v27->fields.age;
LABEL_56:
              sub_B0D97C(this);
            }
          }
        }
LABEL_39:
        slotInfos = v3->fields.slotInfos;
        if ( !slotInfos )
          goto LABEL_56;
      }
    }
    v11 = 0;
    while ( v11 < max_length )
    {
      v12 = restrictionWholeEntities->m_Items[v11];
      if ( !v12 )
        goto LABEL_56;
      if ( v12->fields.type == 3 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_56;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v12->fields.restrictionMessageId,
                                           (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v27 = entity;
          if ( entity )
            return v27->fields.age;
          goto LABEL_56;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
    goto LABEL_57;
  }
  restrictionEntityList = v3->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_56;
  v22 = restrictionEntityList->max_length;
  if ( v22 >= 1 )
  {
    v23 = 0;
    v24 = 0;
    while ( v23 < (unsigned int)v22 )
    {
      v25 = restrictionEntityList->m_Items[v23];
      if ( !v25 )
        goto LABEL_56;
      if ( v25->fields.type == 11 )
        v24 = v23;
      if ( ++v23 >= v22 )
        return QuestRestrictionInfo__GetDialogMessage(v3, v24, v2);
    }
LABEL_57:
    v28 = sub_B0D9A8(this);
    sub_B0D948(v28, 0LL);
  }
  v24 = 0;
  return QuestRestrictionInfo__GetDialogMessage(v3, v24, v2);
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
  Il2CppObject *RestrictedName; // x19
  __int64 *v10; // x8
  System_String_o *v11; // x0

  if ( (byte_4217CB7 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&pos);
    sub_B0D8A4(&StringLiteral_10421/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, v7);
    sub_B0D8A4(&StringLiteral_10424/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/, v8);
    byte_4217CB7 = 1;
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
    v10 = &StringLiteral_10421/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_10424/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  }
  v11 = LocalizationManager__Get((System_String_o *)*v10, 0LL);
  return System_String__Format(v11, RestrictedName, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v2 = this;
  if ( (byte_4217CCB & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(
                                       &Method_System_Collections_Generic_List_RestrictionEntity__get_Count__,
                                       method);
    byte_4217CCB = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_B0D97C(this);
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
  __int64 v18; // x1
  __int64 v19; // x21
  void *restrictionSlotDetailDictionary; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x20
  int v30; // w8
  void *v31; // x19
  unsigned int v32; // w21
  __int64 v33; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *changeMaterial; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x1
  const MethodInfo_1B4C904 *v37; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x20
  peRenderTexture_ChangeLayerObject_o *v41; // x0
  peRenderTexture_ChangeLayerObject_o *v42; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v45; // x0

  if ( (byte_4217CB9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Intersect_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v14);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass175_0__GetMyServantOrNpcSvtIdList_b__0__, v17);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass175_0_TypeInfo, v18);
    byte_4217CB9 = 1;
  }
  v19 = sub_B0D974(QuestRestrictionInfo___c__DisplayClass175_0_TypeInfo, *(_QWORD *)&index, method);
  QuestRestrictionInfo___c__DisplayClass175_0___ctor((QuestRestrictionInfo___c__DisplayClass175_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_29;
  *(_QWORD *)(v19 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v19 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v29 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v27, v28);
    System_Collections_Generic_List_int____ctor(
      v29,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v19 + 24),
                                        (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v30 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v31 = restrictionSlotDetailDictionary;
    if ( v30 >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        if ( v32 >= v30 )
        {
          v45 = sub_B0D9A8(restrictionSlotDetailDictionary);
          sub_B0D948(v45, 0LL);
        }
        v33 = *((_QWORD *)v31 + (int)v32 + 4);
        if ( !v33 )
          break;
        if ( *(_DWORD *)(v33 + 32) == 1 )
        {
          if ( !v29 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v29,
            *(System_Collections_Generic_IEnumerable_T__o **)(v33 + 40),
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v30 = *((_DWORD *)v31 + 6);
        if ( (int)++v32 >= v30 )
          goto LABEL_15;
      }
LABEL_29:
      sub_B0D97C(restrictionSlotDetailDictionary);
    }
LABEL_15:
    if ( !v29 )
      goto LABEL_29;
    if ( v29->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      changeMaterial = System_Linq_Enumerable__Distinct_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                         (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v37 = (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v43 = System_Linq_Enumerable__Intersect_int_(changeMaterial, v36, v37);
      return System_Linq_Enumerable__ToArray_int_(
               v43,
               (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_RestrictionEntity__TypeInfo,
                                                                       v27,
                                                                       v28);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v40,
        (Il2CppObject *)v19,
        Method_QuestRestrictionInfo___c__DisplayClass175_0__GetMyServantOrNpcSvtIdList_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v41 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v40,
              (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v41 )
      {
        v42 = v41;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v36 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        changeMaterial = (System_Collections_Generic_IEnumerable_TSource__o *)v42->fields.changeMaterial;
        v37 = (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  QuestRestrictionInfo___c__DisplayClass189_0_o *v32; // x22
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v36; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  _QWORD **v45; // x24
  __int64 v46; // x19
  __int16 v47; // w8
  __int64 v48; // x19
  __int64 v49; // x19
  __int64 v50; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x21
  System_Int32_array *MyServantOrNpcSvtIdList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v53; // x23
  peRenderTexture_ChangeLayerObject_o *v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  peRenderTexture_ChangeLayerObject_o *v57; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  int32_t MyServantOrSupportTargetPos; // w25
  _QWORD **v61; // x21
  __int64 v62; // x19
  __int16 v63; // w8
  __int64 v64; // x19
  __int64 v65; // x19
  __int64 v66; // x19
  System_Collections_Generic_List_int__o *v67; // x23
  FollowerInfo_array *QuestFollowerList; // x24
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v70; // x26
  int i; // w22
  FollowerInfo_o *v72; // x27
  DataManager_o *v73; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  const MethodInfo *v76; // x3
  System_Int32_array *OverwriteIndividuality; // x0
  const MethodInfo *v78; // x3
  struct System_Collections_Generic_List_string__o *saveNameList; // x19
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x21
  int32_t v81; // w0
  const MethodInfo *v82; // x6
  struct System_Collections_Generic_List_string__o *v83; // x19
  struct System_Collections_Generic_List_long____o *v84; // x21
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v85; // x21
  struct System_Collections_Generic_List_string__o *v86; // x19
  struct System_Collections_Generic_List_long____o *v87; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v88; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  __int64 v91; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+8h] [xbp-78h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UserServantEntity_o *v95; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_4217CC2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, npcInfoDictionary);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v13);
    sub_B0D8A4(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Intersect_int___, v19);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Union_int___, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v27);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass189_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__, v30);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo, v31);
    byte_4217CC2 = 1;
  }
  v95 = 0LL;
  entity = 0LL;
  v32 = (QuestRestrictionInfo___c__DisplayClass189_0_o *)sub_B0D974(
                                                           QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo,
                                                           npcInfoDictionary,
                                                           *(_QWORD *)&index);
  QuestRestrictionInfo___c__DisplayClass189_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_76;
  v32->fields.index = index;
  v36 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                                                   v34,
                                                                                                   v35);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v36,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v36;
  sub_B0D840(
    (BattleServantConfConponent_o *)npcInfoDictionary,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = (_QWORD **)Method_System_Array_Empty_int___;
  v46 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v47 = *(_WORD *)(v46 + 306);
  if ( (v47 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v47 = *(_WORD *)(v46 + 306);
  }
  if ( (v47 & 0x400) != 0 )
  {
    v48 = *v45[6];
    if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
      sub_AA65A4(*v45[6]);
    if ( !*(_DWORD *)(v48 + 224) )
    {
      v49 = *v45[6];
      if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
        sub_AA65A4(*v45[6]);
      j_il2cpp_runtime_class_init_0(v49);
    }
  }
  v50 = *v45[6];
  if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
    sub_AA65A4(*v45[6]);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v50 + 184);
    v53 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_RestrictionEntity__TypeInfo,
                                                                     v43,
                                                                     v44);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v53,
      (Il2CppObject *)v32,
      Method_QuestRestrictionInfo___c__DisplayClass189_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_76;
    v54 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v53,
            (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v54 )
    {
      v57 = v54;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v59 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v57->fields.changeMaterial,
              CollectionList,
              (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v59,
                                  (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v32->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v32->fields.index, v44);
    if ( !MyServantOrNpcSvtIdList )
    {
      v61 = (_QWORD **)Method_System_Array_Empty_int___;
      v62 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v63 = *(_WORD *)(v62 + 306);
      if ( (v63 & 1) == 0 )
      {
        sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v63 = *(_WORD *)(v62 + 306);
      }
      if ( (v63 & 0x400) != 0 )
      {
        v64 = *v61[6];
        if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
          sub_AA65A4(*v61[6]);
        if ( !*(_DWORD *)(v64 + 224) )
        {
          v65 = *v61[6];
          if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
            sub_AA65A4(*v61[6]);
          j_il2cpp_runtime_class_init_0(v65);
        }
      }
      v66 = *v61[6];
      if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
        sub_AA65A4(*v61[6]);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v66 + 184);
    }
    MyServantOrSupportTargetPos = v32->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v56);
  }
  v67 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v55, v56);
  System_Collections_Generic_List_int____ctor(
    v67,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_76;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        this->fields.questId,
                        this->fields.questPhase,
                        0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList,
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___),
        !QuestFollowerList) )
  {
LABEL_76:
    sub_B0D97C(Instance);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v70 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v91 = sub_B0D9A8(Instance);
        sub_B0D948(v91, 0LL);
      }
      v72 = QuestFollowerList->m_Items[i];
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v72 )
        goto LABEL_76;
      Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(v72, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        if ( !v70 )
          goto LABEL_76;
        v73 = Instance;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               v70,
               &entity,
               v72->fields.npcFollowerSvtId,
               (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
        {
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
          NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v72, 0, ReturnTypeByQuestId, 0LL);
          Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_30628808(
                                        this,
                                        NpcServantIndividuality,
                                        MyServantOrSupportTargetPos,
                                        v76);
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
                  &v95,
                  v72->fields.npcFollowerSvtId,
                  (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            goto LABEL_80;
          Instance = (DataManager_o *)v95;
          if ( !v95 )
            goto LABEL_76;
          if ( !NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v95, 0LL) )
            goto LABEL_80;
          Instance = (DataManager_o *)v95;
          if ( !v95 )
            goto LABEL_76;
          OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                     (NpcServantFollowerEntity_o *)v95,
                                     0LL);
          if ( QuestRestrictionInfo__IsRestrictionServantIndividuality_30628808(
                 this,
                 OverwriteIndividuality,
                 MyServantOrSupportTargetPos,
                 v78) )
          {
LABEL_80:
            saveNameList = v73->fields.saveNameList;
            saveDataMapList = v73->fields.saveDataMapList;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v97.fields.currentCryptoKey = saveNameList;
            *(_QWORD *)&v97.fields.fakeValue = saveDataMapList;
            v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v97, 0LL);
            Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                          this,
                                          v81,
                                          LODWORD(v73->fields.lastFrameTime),
                                          HIDWORD(v73[1].fields.datalist),
                                          MyServantOrSupportTargetPos,
                                          0,
                                          v82);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_74;
          }
        }
        v83 = v73->fields.saveNameList;
        v84 = v73->fields.saveDataMapList;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v98.fields.currentCryptoKey = v83;
        *(_QWORD *)&v98.fields.fakeValue = v84;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v98, 0LL);
        if ( !v67 )
          goto LABEL_76;
        System_Collections_Generic_List_int___Add(
          v67,
          (int32_t)Instance,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        v85 = *npcInfoDictionary;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v73->fields.saveNameList,
                                      0LL);
        if ( !v85 )
          goto LABEL_76;
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v85,
                                      (int32_t)Instance,
                                      (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v86 = v73->fields.saveNameList;
          v87 = v73->fields.saveDataMapList;
          v88 = *npcInfoDictionary;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v99.fields.currentCryptoKey = v86;
          *(_QWORD *)&v99.fields.fakeValue = v87;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v99, 0LL);
          if ( !v88 )
            goto LABEL_76;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v88,
            (int32_t)Instance,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v72,
            (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
        }
      }
LABEL_74:
      max_length = QuestFollowerList->max_length;
    }
  }
  v89 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v67,
          (const MethodInfo_1B5945C *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v89,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int *MyServantOrNpcSvtIdList; // x0
  int v14; // w8
  int *v15; // x19
  __int64 v16; // x20
  int v17; // w23
  __int64 v19; // x0

  if ( (byte_4217CB8 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_10426/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/, v8);
    sub_B0D8A4(&StringLiteral_10425/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/, v9);
    sub_B0D8A4(&StringLiteral_10423/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/, v10);
    sub_B0D8A4(&StringLiteral_10422/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/, v11);
    byte_4217CB8 = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_10423/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_10422/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
  }
  else
  {
    MyServantOrNpcSvtIdList = (int *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
                                       this,
                                       pos,
                                       (const MethodInfo *)haveIndividualityServant);
    if ( MyServantOrNpcSvtIdList && (v14 = MyServantOrNpcSvtIdList[6], v15 = MyServantOrNpcSvtIdList, v14 >= 1) )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= v14 )
        {
          v19 = sub_B0D9A8(MyServantOrNpcSvtIdList);
          sub_B0D948(v19, 0LL);
        }
        MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        v17 = v15[v16 + 8];
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        }
        if ( v17 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 844LL) )
          break;
        v14 = v15[6];
        if ( (int)++v16 >= v14 )
          goto LABEL_23;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = &StringLiteral_10425/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = &StringLiteral_10426/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
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
  __int64 v8; // x1
  __int64 v9; // x21
  peRenderTexture_ChangeLayerObject_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x0

  if ( (byte_4217CBA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v5);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass176_0__GetMyServantOrSupportTargetPos_b__0__, v7);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo, v8);
    byte_4217CBA = 1;
  }
  v9 = sub_B0D974(QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo, *(_QWORD *)&index, method);
  QuestRestrictionInfo___c__DisplayClass176_0___ctor((QuestRestrictionInfo___c__DisplayClass176_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v9 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
    goto LABEL_12;
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_14;
  if ( (signed int)questRestrictionEntityList->max_length <= index )
  {
LABEL_12:
    LODWORD(v10) = 0;
    return (int)v10;
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_RestrictionEntity__TypeInfo,
                                                                   v17,
                                                                   v18);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_QuestRestrictionInfo___c__DisplayClass176_0__GetMyServantOrSupportTargetPos_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v10 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
          (System_Predicate_T__o *)v21,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v10 )
    return (int)v10;
  v22 = *(_QWORD *)&v10->fields.prevLayer;
  if ( !v22 )
LABEL_14:
    sub_B0D97C(v10);
  if ( !*(_DWORD *)(v22 + 24) )
  {
    v23 = sub_B0D9A8(v10);
    sub_B0D948(v23, 0LL);
  }
  LODWORD(v10) = *(_DWORD *)(v22 + 32);
  return (int)v10;
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B0D97C(this);
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
  const MethodInfo *v13; // x2
  System_String_o *DialogMessage; // x19
  int v15; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4217CBC & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__,
      *(_QWORD *)&pos);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__,
      v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__,
      v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4217CBC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dialogMessageInfoDictionary,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v17,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    if ( !v12 )
      break;
    if ( !v17.fields.current.fields.value )
      sub_B0D97C(v12);
    if ( LODWORD(v17.fields.current.fields.value[1].klass) == pos )
    {
      DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v17.fields.current.fields.key, v13);
      v15 = 34;
      goto LABEL_11;
    }
  }
  DialogMessage = 0LL;
  v15 = 28;
LABEL_11:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v17,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  if ( v15 != 34 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return DialogMessage;
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217CC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4217CC7 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v10.fields.current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields.current )
      sub_B0D97C(v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetNeedStartingSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217CC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4217CC4 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v11 )
      sub_B0D97C(v13);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v15.fields.current,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_B0D97C(needStartingIndividualitiesList);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v14; // x20
  System_String_array *v15; // x19
  unsigned __int64 v16; // x24
  signed __int64 v17; // x25
  BattleServantConfConponent_o *i; // x21
  int32_t v19; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t maxLimitCount; // w22
  int32_t v22; // w1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x22
  __int64 v31; // x0
  __int64 v32; // x0
  UserServantCollectionEntity_o *v33; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217CA9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&OptionManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&string___TypeInfo, v9);
    byte_4217CA9 = 1;
  }
  v33 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v12 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v11);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_42;
  v14 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_B0D8BC(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v15 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v12 >= 1 )
  {
    v16 = 0LL;
    v17 = v12;
    for ( i = (BattleServantConfConponent_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      if ( v16 >= *(unsigned int *)(v14 + 24) )
      {
LABEL_43:
        v31 = sub_B0D9A8(FixedServantPositionSvtIdList);
        sub_B0D948(v31, 0LL);
      }
      v19 = *(_DWORD *)(v14 + 32 + 4 * v16);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)FixedServantPositionSvtIdList,
              &entity,
              v19,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)FixedServantPositionSvtIdList,
                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
              &v33,
              FixedServantPositionSvtIdList,
              v19,
              0LL) )
        goto LABEL_26;
      FixedServantPositionSvtIdList = (__int64)v33;
      if ( !v33 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v33, 0LL);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v33 )
          break;
        maxLimitCount = v33->fields.maxLimitCount;
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
      v22 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v22, -1, 0LL);
      if ( !v15 )
        break;
      v29 = (System_Int32_array **)FixedServantPositionSvtIdList;
      if ( FixedServantPositionSvtIdList )
      {
        FixedServantPositionSvtIdList = sub_B0D964(FixedServantPositionSvtIdList, v15->obj.klass->_1.element_class);
        if ( !FixedServantPositionSvtIdList )
        {
          v32 = sub_B0D99C(0LL);
          sub_B0D948(v32, 0LL);
        }
      }
      if ( v16 >= v15->max_length )
        goto LABEL_43;
      i->klass = (BattleServantConfConponent_c *)v29;
      sub_B0D840(i, v29, v23, v24, v25, v26, v27, v28);
      if ( (__int64)++v16 >= v17 )
        return v15;
    }
LABEL_42:
    sub_B0D97C(FixedServantPositionSvtIdList);
  }
  return v15;
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B0D97C(this);
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
  __int64 v10; // x1
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v12; // x20
  unsigned int v13; // w19
  __int64 v14; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v16; // x27
  __int64 v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  __int64 v25; // x22
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *myServantOrNpcRestrictionEntityList; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  __int64 v32; // x0
  System_String_o *v33; // [xsp+8h] [xbp-58h]

  v4 = this;
  if ( (byte_4217CB6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&pos);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v6);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass172_0__GetRestrictedName_b__0__, v8);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass172_0_TypeInfo, v9);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4217CB6 = 1;
  }
  v33 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v4->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                         pos,
                                         (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v12 = this;
        if ( dialogMessageInfoDictionary >= 1 )
        {
          v13 = 0;
          while ( 1 )
          {
            if ( v13 >= dialogMessageInfoDictionary )
              goto LABEL_30;
            v14 = *((_QWORD *)&v12->fields.eventId + (int)v13);
            if ( !v14 )
              goto LABEL_29;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 32), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              return *(System_String_o **)(v14 + 32);
            dialogMessageInfoDictionary = (int)v12->fields.dialogMessageInfoDictionary;
            if ( (int)++v13 >= dialogMessageInfoDictionary )
              return v33;
          }
        }
        return v33;
      }
    }
LABEL_29:
    sub_B0D97C(this);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sub_B0D974(QuestRestrictionInfo___c__DisplayClass172_0_TypeInfo, *(_QWORD *)&pos, method);
      QuestRestrictionInfo___c__DisplayClass172_0___ctor((QuestRestrictionInfo___c__DisplayClass172_0_o *)v17, 0LL);
      if ( v16 >= questRestrictionEntityList->max_length )
        break;
      if ( !v17 )
        goto LABEL_29;
      v24 = (System_Int32_array **)questRestrictionEntityList->m_Items[v16];
      *(_QWORD *)(v17 + 16) = v24;
      v25 = v17 + 16;
      sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), v24, v18, v19, v20, v21, v22, v23);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_RestrictionEntity__TypeInfo,
                                                                       v27,
                                                                       v28);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v29,
        (Il2CppObject *)v17,
        Method_QuestRestrictionInfo___c__DisplayClass172_0__GetRestrictedName_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v29,
                                         (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !deckSvtIdList->max_length )
          break;
        if ( deckSvtIdList->m_Items[1] == pos )
        {
          if ( !*(_QWORD *)v25 )
            goto LABEL_29;
          v33 = *(System_String_o **)(*(_QWORD *)v25 + 48LL);
        }
      }
      if ( (__int64)++v16 >= (int)questRestrictionEntityList->max_length )
        return v33;
    }
LABEL_30:
    v32 = sub_B0D9A8(this);
    sub_B0D948(v32, 0LL);
  }
  return v33;
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
  int v7; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x9
  __int64 v9; // x20
  QuestRestrictionInfo_SlotInfo_o *v10; // x8
  struct QuestRestrictionInfo_SlotInfo_array *v12; // x8
  QuestRestrictionInfo_SlotInfo_o *v13; // x8
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4217C93 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&initPos);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v5);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v6);
    byte_4217C93 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
    return v4->fields.restrictionMessage;
  v7 = initPos - 1;
  if ( initPos < 1 )
    return v4->fields.restrictionMessage;
  slotInfos = v4->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_17;
  if ( v7 >= slotInfos->max_length )
    goto LABEL_18;
  v9 = v7;
  v10 = slotInfos->m_Items[v7];
  if ( !v10 )
    goto LABEL_17;
  if ( System_String__IsNullOrEmpty(v10->fields.summary, 0LL) )
    return v4->fields.restrictionMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v12 = v4->fields.slotInfos;
  if ( !v12 )
LABEL_17:
    sub_B0D97C(this);
  if ( (unsigned int)v9 >= v12->max_length )
  {
LABEL_18:
    v14 = sub_B0D9A8(this);
    sub_B0D948(v14, 0LL);
  }
  v13 = v12->m_Items[v9];
  if ( !v13 )
    goto LABEL_17;
  return System_String__Concat_43852188(
           (System_String_o *)this,
           (System_String_o *)StringLiteral_26/*"\n"*/,
           v13->fields.summary,
           0LL);
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

  if ( (byte_4217CAA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4217CAA = 1;
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
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
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
      sub_B0D97C(0LL);
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
  int32_t v20; // w10
  int32_t v21; // w1
  RestrictionEntity_o *v22; // x11
  WarEntity_o *v23; // x8
  __int64 v24; // x0
  WarEntity_o *v25; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4217CAC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v6);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4217CAC = 1;
  }
  entity = 0LL;
  v25 = 0LL;
  if ( v3->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v3->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_50;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      if ( v3->fields.servantNumMin < 1 )
        return (System_String_o *)StringLiteral_1/*""*/;
      v12 = 1;
      while ( 1 )
      {
        this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
        if ( !this )
          goto LABEL_50;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                           v12,
                                           (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
        if ( !this )
          goto LABEL_50;
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v14 = this;
        if ( dialogMessageInfoDictionary >= 1 )
          break;
LABEL_33:
        if ( ++v12 > v3->fields.servantNumMin )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= dialogMessageInfoDictionary )
          goto LABEL_51;
        v16 = *((_QWORD *)&v14->fields.eventId + (int)v15);
        if ( !v16 )
          goto LABEL_50;
        if ( *(_DWORD *)(v16 + 44) && !*(_DWORD *)(v16 + 40) )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_50;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                             &v25,
                                             *(_DWORD *)(v16 + 44),
                                             (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        dialogMessageInfoDictionary = (int)v14->fields.dialogMessageInfoDictionary;
        if ( (int)++v15 >= dialogMessageInfoDictionary )
          goto LABEL_33;
      }
      v23 = v25;
      if ( !v25 )
        goto LABEL_50;
    }
    else
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          goto LABEL_51;
        v11 = restrictionWholeEntities->m_Items[v10];
        if ( !v11 )
          goto LABEL_50;
        if ( v11->fields.restrictionMessageId && v11->fields.type == 3 )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_50;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                             &entity,
                                             v11->fields.restrictionMessageId,
                                             (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_17;
      }
      v23 = entity;
      if ( !entity )
        goto LABEL_50;
    }
    return v23->fields.age;
  }
  else
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_50;
    v19 = restrictionEntityList->max_length;
    if ( v19 >= 1 )
    {
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)v19 )
        {
LABEL_51:
          v24 = sub_B0D9A8(this);
          sub_B0D948(v24, 0LL);
        }
        v22 = restrictionEntityList->m_Items[v20];
        if ( !v22 )
          break;
        if ( v22->fields.type == 10 )
          v21 = v20;
        if ( ++v20 >= v19 )
          return QuestRestrictionInfo__GetDialogMessage(v3, v21, v2);
      }
LABEL_50:
      sub_B0D97C(this);
    }
    v21 = 0;
    return QuestRestrictionInfo__GetDialogMessage(v3, v21, v2);
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
  System_String_o *v10; // x20
  int32_t *v11; // x1
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+8h] [xbp-18h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4217CAB & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_10428/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, v5);
    sub_B0D8A4(&StringLiteral_10427/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, v6);
    byte_4217CAB = 1;
  }
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(this, method);
  if ( ServantNumRangeType == 5 )
    goto LABEL_20;
  if ( ServantNumRangeType != 4 )
    goto LABEL_21;
  servantNumMax = this->fields.servantNumMax;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( servantNumMax > v9->static_fields->DeckMainMemberMax )
  {
LABEL_20:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10428/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
    v11 = &v15;
    v15 = this->fields.servantNumMax;
  }
  else
  {
LABEL_21:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
    v11 = &v14;
    v14 = this->fields.servantNumMax;
  }
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v11);
  return System_String__Format(v10, v12, 0LL);
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

  if ( (byte_4217C94 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10429/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, v2);
    byte_4217C94 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
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
  Il2CppObject *v5; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4217CA3 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    byte_4217CA3 = 1;
  }
  result = (System_String_o *)this->fields.totalCostRestrictionEntity;
  if ( result )
  {
    klass = result[1].klass;
    TotalCost = RestrictionEntity__getTotalCost((RestrictionEntity_o *)result, 0LL);
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalCost);
    return System_String__Format((System_String_o *)klass, v5, 0LL);
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
  unsigned int v9; // w10
  RestrictionWholeEntity_o *v10; // x11
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4217C9A & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, isFixMessage);
    sub_B0D8A4(&StringLiteral_10431/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, v5);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4217C9A = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_19:
      sub_B0D97C(this);
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
        if ( v9 >= max_length )
        {
          v12 = sub_B0D9A8(this);
          sub_B0D948(v12, 0LL);
        }
        v10 = restrictionWholeEntities->m_Items[v9];
        if ( !v10 )
          goto LABEL_19;
        if ( v10->fields.type == 9 )
          return v10->fields.summary;
        if ( (int)++v9 >= max_length )
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

  if ( (byte_4217C99 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10430/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, v2);
    byte_4217C99 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_8:
    sub_B0D97C(this);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_B0D97C(this);
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
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  struct System_Collections_Generic_List_int____o *fixedNpcIndividualitiesList; // x0
  _BOOL8 v13; // x0
  _BOOL8 v15; // x0
  int v16; // w20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  int v18[2]; // [xsp+20h] [xbp-50h]
  int v19; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_4217CBF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4217CBF = 1;
  }
  memset(&i, 0, sizeof(i));
  v19 = 0;
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.isFixedSupportPosition )
  {
    fixedNpcIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( fixedNpcIndividualitiesList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v17,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v17;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
              (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v15 )
          break;
        if ( !v11 )
          sub_B0D97C(v15);
      }
      v18[0] = 142;
      v16 = ++v19;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
      if ( !v16 || v18[v16 - 1] != 142 )
        goto LABEL_14;
      v19 = v16 - 1;
      if ( v11 )
        return v11->fields._size > 0;
    }
LABEL_26:
    sub_B0D97C(fixedNpcIndividualitiesList);
  }
  fixedNpcIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
  if ( !fixedNpcIndividualitiesList )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v17;
        ;
        System_Collections_Generic_List_int___AddRange(
          v11,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v11 )
      sub_B0D97C(v13);
  }
  v18[0] = 142;
  v19 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  v19 = 0;
LABEL_14:
  if ( !v11 )
    goto LABEL_26;
  return v11->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_30613260(
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
  int v25; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  ServantEntity_o *Entity; // x23
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  int v33; // w21
  int v34; // w26
  struct System_Boolean_array *supportPositionList; // x8
  __int64 v36; // x0
  _BOOL8 v37; // x0
  int v38; // w8
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+0h] [xbp-B0h] BYREF
  int v40[4]; // [xsp+18h] [xbp-98h]
  int v41; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v6 = this;
  if ( (byte_4217C9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&num);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v20);
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4217C9B = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v42, 0, sizeof(v42));
  v41 = 0;
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
  v22 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&num,
                                                    servantInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_53;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v39,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v39;
          ;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v23 )
        break;
      if ( !v22 )
        sub_B0D97C(v23);
    }
    v40[0] = 170;
    v41 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v25 = 0;
    v41 = 0;
LABEL_18:
    if ( !v22 )
      goto LABEL_53;
    goto LABEL_19;
  }
  this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v39;
        ;
        System_Collections_Generic_List_int___AddRange(
          v22,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v37 )
      break;
    if ( !v22 )
      sub_B0D97C(v37);
  }
  v40[0] = 170;
  v25 = ++v41;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v25 )
    goto LABEL_18;
  v38 = v25 - 1;
  if ( v40[v25 - 1] != 170 )
    goto LABEL_18;
  --v25;
  v41 = v38;
  if ( !v22 )
    goto LABEL_53;
LABEL_19:
  if ( v22->fields._size < 1 )
    goto LABEL_38;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_53;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v28 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v28;
  *(_QWORD *)&v44.fields.fakeValue = v27;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v44, 0LL);
  if ( !v26 )
LABEL_53:
    sub_B0D97C(this);
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v26,
                                (int32_t)this,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    &v39,
    v22,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v42 = v39;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v42,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v42.fields.current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0LL);
    if ( !Entity )
      sub_B0D97C(DispLimitCount);
    if ( ServantEntity__IsIndividuality(Entity, limitCount, DispLimitCount, current, 0LL) )
    {
      v33 = 1;
      goto LABEL_34;
    }
  }
  v33 = 0;
LABEL_34:
  v40[v25] = 277;
  v34 = ++v41;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v42,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v34 && v40[v34 - 1] == 277 )
    v41 = v34 - 1;
  if ( !v33 )
    return 1;
LABEL_38:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
    goto LABEL_53;
  if ( supportPositionList->max_length <= num )
  {
    v36 = sub_B0D9A8(this);
    sub_B0D948(v36, 0LL);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestRestrictionInfo___c__DisplayClass167_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v14; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20
  __int64 v18; // x0

  if ( (byte_4217CB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__, *(_QWORD *)&pos);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v5);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass167_0__IsMyServantOrNpcRestriction_b__0__, v7);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass167_0_TypeInfo, v8);
    byte_4217CB1 = 1;
  }
  v9 = (QuestRestrictionInfo___c__DisplayClass167_0_o *)sub_B0D974(
                                                          QuestRestrictionInfo___c__DisplayClass167_0_TypeInfo,
                                                          *(_QWORD *)&pos,
                                                          method);
  QuestRestrictionInfo___c__DisplayClass167_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  v9->fields.pos = pos;
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( pos - 1 >= slotInfos->max_length )
      {
        v18 = sub_B0D9A8(v10);
        sub_B0D948(v18, 0LL);
      }
      v14 = slotInfos->m_Items[pos - 1];
      if ( v14 )
        return (unsigned int)(v14->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_B0D97C(v10);
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_RestrictionEntity__TypeInfo,
                                                                   v11,
                                                                   v12);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_QuestRestrictionInfo___c__DisplayClass167_0__IsMyServantOrNpcRestriction_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v17,
           (const MethodInfo_2FC5F74 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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
  __int64 v9; // x1
  QuestRestrictionInfo___c__DisplayClass169_0_o *v10; // x21
  void *restrictionSlotDetailDictionary; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int v15; // w8
  unsigned int v16; // w9
  __int64 v17; // x10
  __int64 v18; // x10
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x0

  if ( (byte_4217CB3 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v6);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass169_0__IsNotIndividuality_b__0__, v8);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass169_0_TypeInfo, v9);
    byte_4217CB3 = 1;
  }
  v10 = (QuestRestrictionInfo___c__DisplayClass169_0_o *)sub_B0D974(
                                                           QuestRestrictionInfo___c__DisplayClass169_0_TypeInfo,
                                                           *(_QWORD *)&pos,
                                                           method);
  QuestRestrictionInfo___c__DisplayClass169_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_23;
  v10->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(this, pos, v12) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                          v10->fields.pos,
                                          (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v15 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= v15 )
          {
            v22 = sub_B0D9A8(restrictionSlotDetailDictionary);
            sub_B0D948(v22, 0LL);
          }
          v17 = *((_QWORD *)restrictionSlotDetailDictionary + (int)v16 + 4);
          if ( !v17 )
            break;
          if ( *(_DWORD *)(v17 + 32) == 1 )
          {
            v18 = *(_QWORD *)(v17 + 40);
            if ( v18 )
            {
              if ( *(_QWORD *)(v18 + 24) )
                goto LABEL_17;
            }
          }
          if ( (int)++v16 >= v15 )
            goto LABEL_16;
        }
LABEL_23:
        sub_B0D97C(restrictionSlotDetailDictionary);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
      v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_RestrictionEntity__TypeInfo,
                                                                       v13,
                                                                       v14);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v20,
        (Il2CppObject *)v10,
        Method_QuestRestrictionInfo___c__DisplayClass169_0__IsNotIndividuality_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v20,
                                          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( restrictionSlotDetailDictionary )
      {
        v21 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
        if ( !v21 )
          goto LABEL_23;
        LOBYTE(restrictionSlotDetailDictionary) = *(_DWORD *)(v21 + 24) == 0;
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
      v7 = sub_B0D9A8(this);
      sub_B0D948(v7, 0LL);
    }
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_B0D97C(this);
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
  __int64 v22; // x1
  QuestRestrictionInfo___c__DisplayClass170_0_o *v23; // x24
  DataManager_o *Instance; // x0
  const MethodInfo *v25; // x2
  int32_t ServantImageLimitSealAfter; // w20
  __int64 v27; // x1
  __int64 v28; // x2
  ServantEntity_o *Entity; // x21
  unsigned __int64 datalist_low; // x8
  unsigned __int64 i; // x9
  __int64 v32; // x12
  int v33; // w25
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x23
  struct System_Byte_array *masterDataBytes; // x8
  RestrictionEntity_o *v37; // x22
  __int64 v38; // x8
  System_Int32_array *v39; // x0
  struct DataMasterBase_array *datalist; // x9
  DataManager_o *v41; // x22
  unsigned __int64 v42; // x24
  RestrictionSlotDetailEntity_o *v43; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0
  __int64 v47; // x0

  if ( (byte_4217CB4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v17);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v18);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass170_0__IsRestrictionServantIndividuality_b__0__, v21);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass170_0_TypeInfo, v22);
    byte_4217CB4 = 1;
  }
  v23 = (QuestRestrictionInfo___c__DisplayClass170_0_o *)sub_B0D974(
                                                           QuestRestrictionInfo___c__DisplayClass170_0_TypeInfo,
                                                           *(_QWORD *)&svtId,
                                                           *(_QWORD *)&limitCount);
  QuestRestrictionInfo___c__DisplayClass170_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_52;
  v23->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(this, pos, v25) )
    goto LABEL_50;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_52;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v23->fields.pos,
                                    (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
              v47 = sub_B0D9A8(Instance);
              sub_B0D948(v47, 0LL);
            }
            v32 = *((_QWORD *)&Instance->fields.lookup + i);
            if ( isChkSupport )
            {
              if ( !v32 )
                goto LABEL_52;
              if ( *(_DWORD *)(v32 + 28) == 2 )
                goto LABEL_31;
            }
            else
            {
              if ( !v32 )
                goto LABEL_52;
              if ( *(_DWORD *)(v32 + 28) == 1 )
              {
LABEL_31:
                v33 = *(_DWORD *)(v32 + 40);
                goto LABEL_32;
              }
            }
          }
        }
        v33 = -1;
LABEL_32:
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                        v23->fields.pos,
                                        (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            datalist = Instance->fields.datalist;
            v41 = Instance;
            if ( (int)datalist >= 1 )
            {
              LOBYTE(v38) = 0;
              v42 = 0LL;
              while ( 1 )
              {
                if ( v42 >= (unsigned int)datalist )
                  goto LABEL_53;
                v43 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v41->fields.lookup + v42);
                if ( (v33 & 0x80000000) != 0 )
                {
                  if ( !v43 )
                    goto LABEL_52;
                }
                else
                {
                  if ( !v43 )
                    goto LABEL_52;
                  if ( v33 != v43->fields.id )
                    goto LABEL_48;
                }
                if ( v43->fields.type == 1 )
                {
                  targetVals = v43->fields.targetVals;
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
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v43, Individuality, 0LL);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_50;
                      LOBYTE(v38) = 1;
                    }
                  }
                }
LABEL_48:
                LODWORD(datalist) = v41->fields.datalist;
                if ( (__int64)++v42 >= (int)datalist )
                  return v38;
              }
            }
            goto LABEL_50;
          }
        }
      }
    }
LABEL_52:
    sub_B0D97C(Instance);
  }
  if ( isChkSupport )
    goto LABEL_50;
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_RestrictionEntity__TypeInfo,
                                                                   v27,
                                                                   v28);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v35,
    (Il2CppObject *)v23,
    Method_QuestRestrictionInfo___c__DisplayClass170_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_52;
  Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v35,
                                (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_50;
  masterDataBytes = Instance->fields.masterDataBytes;
  v37 = (RestrictionEntity_o *)Instance;
  if ( !masterDataBytes )
    goto LABEL_52;
  v38 = *(_QWORD *)&masterDataBytes->max_length;
  if ( v38 )
  {
    if ( !Entity )
      goto LABEL_52;
    v39 = ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
    if ( RestrictionEntity__IsRestriction_32089632(v37, v39, 0LL) )
    {
      LOBYTE(v38) = 1;
      return v38;
    }
LABEL_50:
    LOBYTE(v38) = 0;
  }
  return v38;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_30628808(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  QuestRestrictionInfo___c__DisplayClass171_0_o *v12; // x22
  void *restrictionSlotDetailDictionary; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // w9
  void *v18; // x20
  unsigned int v19; // w21
  __int64 v20; // x8
  __int64 v21; // x9
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x21
  __int64 v24; // x8
  __int64 v26; // x0

  if ( (byte_4217CB5 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      individuality);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v8);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass171_0__IsRestrictionServantIndividuality_b__0__, v10);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass171_0_TypeInfo, v11);
    byte_4217CB5 = 1;
  }
  v12 = (QuestRestrictionInfo___c__DisplayClass171_0_o *)sub_B0D974(
                                                           QuestRestrictionInfo___c__DisplayClass171_0_TypeInfo,
                                                           individuality,
                                                           *(_QWORD *)&pos);
  QuestRestrictionInfo___c__DisplayClass171_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_26;
  v12->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(this, pos, v14) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                        v12->fields.pos,
                                        (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v17 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v18 = restrictionSlotDetailDictionary;
    if ( v17 >= 1 )
    {
      v19 = 0;
      LOBYTE(v20) = 0;
      while ( 1 )
      {
        if ( v19 >= v17 )
        {
          v26 = sub_B0D9A8(restrictionSlotDetailDictionary);
          sub_B0D948(v26, 0LL);
        }
        restrictionSlotDetailDictionary = (void *)*((_QWORD *)v18 + (int)v19 + 4);
        if ( !restrictionSlotDetailDictionary )
          break;
        if ( *((_DWORD *)restrictionSlotDetailDictionary + 8) == 1 )
        {
          v21 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
          if ( v21 )
          {
            if ( *(_QWORD *)(v21 + 24) )
            {
              restrictionSlotDetailDictionary = (void *)RestrictionSlotDetailEntity__IsIndividuality(
                                                          (RestrictionSlotDetailEntity_o *)restrictionSlotDetailDictionary,
                                                          individuality,
                                                          0LL);
              if ( ((unsigned __int8)restrictionSlotDetailDictionary & 1) != 0 )
                goto LABEL_24;
              LOBYTE(v20) = 1;
            }
          }
        }
        v17 = *((_DWORD *)v18 + 6);
        if ( (int)++v19 >= v17 )
          return v20 & 1;
      }
LABEL_26:
      sub_B0D97C(restrictionSlotDetailDictionary);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_RestrictionEntity__TypeInfo,
                                                                   v15,
                                                                   v16);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_QuestRestrictionInfo___c__DisplayClass171_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v23,
                                      (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !restrictionSlotDetailDictionary )
  {
LABEL_24:
    LOBYTE(v20) = 0;
    return v20 & 1;
  }
  v24 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
  if ( !v24 )
    goto LABEL_26;
  v20 = *(_QWORD *)(v24 + 24);
  if ( v20 )
    return RestrictionEntity__IsRestriction_32089632(
             (RestrictionEntity_o *)restrictionSlotDetailDictionary,
             individuality,
             0LL);
  return v20 & 1;
}


bool __fastcall QuestRestrictionInfo__IsRestriction_30608704(
        QuestRestrictionInfo_o *this,
        bool *isWhole,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t lv,
        int32_t initPos,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  int32_t ServantImageLimitSealAfter; // w24
  ServantEntity_o *Entity; // x26
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int v29; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  unsigned int v31; // w24
  bool v32; // vf
  int v33; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v35; // x23
  bool v36; // w21
  QuestRestrictionInfo_SlotInfo_o *v37; // x8
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  int size; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v41; // x8
  QuestRestrictionInfo_SlotInfo_o *v42; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct QuestRestrictionInfo_SlotInfo_array *v44; // x8
  QuestRestrictionInfo_SlotInfo_o *v45; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *v46; // x28
  struct RestrictionEntity_array *restrictionEntityList; // x22
  int max_length; // w8
  DataManager_o *v49; // x25
  unsigned int v50; // w23
  RestrictionEntity_o *v51; // x19
  int32_t type; // w8
  System_Int32_array *Individuality; // x0
  int32_t datalist; // w1
  RestrictionEntity_o *v55; // x0
  __int64 v57; // x0

  if ( (byte_4217C91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, isWhole);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int___, v18);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Intersect_int___, v19);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Count__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4217C91 = 1;
  }
  *isWhole = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_70;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL);
  if ( !this->fields.restrictionBaseEntity )
  {
    restrictionEntityList = this->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_70;
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v49 = Instance;
    v50 = 0;
    while ( 1 )
    {
      if ( v50 >= max_length )
        goto LABEL_71;
      v51 = restrictionEntityList->m_Items[v50];
      if ( !v51 )
        goto LABEL_70;
      type = v51->fields.type;
      if ( type == 4 )
        break;
      if ( type == 2 )
      {
        if ( !v49 )
          goto LABEL_70;
        datalist = (int32_t)v49->fields.datalist;
        v55 = restrictionEntityList->m_Items[v50];
LABEL_64:
        Instance = (DataManager_o *)RestrictionEntity__IsRestriction(v55, datalist, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return 1;
        goto LABEL_65;
      }
      if ( type == 1 )
      {
        if ( !Entity )
          goto LABEL_70;
        Individuality = ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
        Instance = (DataManager_o *)RestrictionEntity__IsRestriction_32089632(v51, Individuality, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return 1;
      }
LABEL_65:
      max_length = restrictionEntityList->max_length;
      if ( (int)++v50 >= max_length )
        return 0;
    }
    v55 = restrictionEntityList->m_Items[v50];
    datalist = lv;
    goto LABEL_64;
  }
  if ( !Entity )
    goto LABEL_70;
  Instance = (DataManager_o *)ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_70;
  v29 = restrictionWholeEntities->max_length;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
  if ( v29 < 1 )
  {
LABEL_19:
    v32 = __OFSUB__(initPos, 1);
    v33 = initPos - 1;
    if ( v33 < 0 == v32 )
    {
      slotInfos = this->fields.slotInfos;
      if ( slotInfos )
      {
        v35 = 0LL;
        v36 = 0;
        while ( v33 < slotInfos->max_length )
        {
          v37 = slotInfos->m_Items[v33];
          if ( !v37 )
            goto LABEL_70;
          individualityList = v37->fields.individualityList;
          if ( !individualityList )
            goto LABEL_70;
          size = individualityList->fields._size;
          if ( (int)v35 >= size )
            return v36;
          if ( size <= (unsigned int)v35 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          Instance = (DataManager_o *)individualityList->fields._items->m_Items[v35];
          if ( !Instance )
            goto LABEL_70;
          if ( Instance->fields.datalist )
          {
            v40 = System_Linq_Enumerable__Intersect_int_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                    v30,
                    (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___);
            Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                          v40,
                                          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
            v41 = this->fields.slotInfos;
            if ( !v41 )
              goto LABEL_70;
            if ( v33 >= v41->max_length )
              break;
            v42 = v41->m_Items[v33];
            if ( !v42 )
              goto LABEL_70;
            rangeTypeList = v42->fields.rangeTypeList;
            if ( !rangeTypeList )
              goto LABEL_70;
            if ( rangeTypeList->fields._size <= (unsigned int)v35 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            if ( rangeTypeList->fields._items->m_Items[v35 + 1] == 1 )
            {
              Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                            (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 0;
            }
            else
            {
              v44 = this->fields.slotInfos;
              if ( !v44 )
                goto LABEL_70;
              if ( v33 >= v44->max_length )
                break;
              v45 = v44->m_Items[v33];
              if ( !v45 )
                goto LABEL_70;
              v46 = v45->fields.rangeTypeList;
              if ( !v46 )
                goto LABEL_70;
              if ( v46->fields._size <= (unsigned int)v35 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              if ( v46->fields._items->m_Items[v35 + 1] == 2 )
              {
                Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                              (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                  return 0;
              }
            }
            v36 = 1;
          }
          slotInfos = this->fields.slotInfos;
          ++v35;
          if ( !slotInfos )
            goto LABEL_70;
        }
LABEL_71:
        v57 = sub_B0D9A8(Instance);
        sub_B0D948(v57, 0LL);
      }
LABEL_70:
      sub_B0D97C(Instance);
    }
    return 0;
  }
  v31 = 0;
  while ( 1 )
  {
    if ( v31 >= v29 )
      goto LABEL_71;
    Instance = (DataManager_o *)restrictionWholeEntities->m_Items[v31];
    if ( !Instance )
      goto LABEL_70;
    if ( LODWORD(Instance->fields.lookup) == 1 )
    {
      Instance = (DataManager_o *)RestrictionWholeEntity__IsIndividuality(
                                    (RestrictionWholeEntity_o *)Instance,
                                    (System_Int32_array *)v30,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
    }
    v29 = restrictionWholeEntities->max_length;
    if ( (int)++v31 >= v29 )
      goto LABEL_19;
  }
  v36 = 1;
  *isWhole = 1;
  return v36;
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
  __int64 v8; // x1
  QuestRestrictionInfo___c__DisplayClass168_0_o *v9; // x21
  _BOOL8 IsMyServantOrNpcRestriction_30625648; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v15; // w9
  QuestRestrictionInfo_SlotInfo_o *v16; // x8
  bool v17; // zf
  peRenderTexture_ChangeLayerObject_o *v18; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20
  __int64 v21; // x0

  if ( (byte_4217CB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&pos);
    sub_B0D8A4(&Method_System_Predicate_RestrictionEntity___ctor__, v5);
    sub_B0D8A4(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__DisplayClass168_0__IsSelectableNormalSupport_b__0__, v7);
    sub_B0D8A4(&QuestRestrictionInfo___c__DisplayClass168_0_TypeInfo, v8);
    byte_4217CB2 = 1;
  }
  v9 = (QuestRestrictionInfo___c__DisplayClass168_0_o *)sub_B0D974(
                                                          QuestRestrictionInfo___c__DisplayClass168_0_TypeInfo,
                                                          *(_QWORD *)&pos,
                                                          method);
  QuestRestrictionInfo___c__DisplayClass168_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v9->fields.pos = pos;
  IsMyServantOrNpcRestriction_30625648 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(this, pos, v11);
  if ( !IsMyServantOrNpcRestriction_30625648 )
  {
    LOBYTE(v18) = 0;
    return (char)v18;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_RestrictionEntity__TypeInfo,
                                                                     v12,
                                                                     v13);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v20,
      (Il2CppObject *)v9,
      Method_QuestRestrictionInfo___c__DisplayClass168_0__IsSelectableNormalSupport_b__0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v20,
              (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v18 )
        return (char)v18;
      v17 = LODWORD(v18->fields.orgMaterial) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_B0D97C(IsMyServantOrNpcRestriction_30625648);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v15 = v9->fields.pos - 1;
  if ( v15 >= slotInfos->max_length )
  {
    v21 = sub_B0D9A8(IsMyServantOrNpcRestriction_30625648);
    sub_B0D948(v21, 0LL);
  }
  v16 = slotInfos->m_Items[v15];
  if ( !v16 )
    goto LABEL_18;
  v17 = v16->fields.slotType == 4;
LABEL_14:
  LOBYTE(v18) = v17;
  return (char)v18;
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
  __int64 IsMyServantOrNpcRestriction_30625648; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  const MethodInfo *v11; // x1
  int v12; // w8
  unsigned int v13; // w9
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int max_length; // w9
  unsigned int v17; // w10
  __int64 v18; // x0

  if ( (byte_4217CAD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, v7);
    byte_4217CAD = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    goto LABEL_23;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    goto LABEL_23;
  IsMyServantOrNpcRestriction_30625648 = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_30625648 = (__int64)BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    servantNumMax = *(_DWORD *)(*(_QWORD *)(IsMyServantOrNpcRestriction_30625648 + 184) + 156LL);
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
    IsMyServantOrNpcRestriction_30625648 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
                                             this,
                                             pos,
                                             *(const MethodInfo **)&pos);
    if ( (IsMyServantOrNpcRestriction_30625648 & 1) == 0 )
    {
      if ( this->fields.isFixedMyServantPosition )
      {
        IsMyServantOrNpcRestriction_30625648 = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                          this,
                                                          v11);
        if ( IsMyServantOrNpcRestriction_30625648 )
        {
          v12 = *(_DWORD *)(IsMyServantOrNpcRestriction_30625648 + 24);
          if ( v12 >= 1 )
          {
            v13 = 0;
            while ( v13 < v12 )
            {
              if ( *(_DWORD *)(IsMyServantOrNpcRestriction_30625648 + 4LL * (int)v13 + 32) == svtId )
                goto LABEL_23;
              if ( (int)++v13 >= v12 )
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
            v17 = 0;
            IsMyServantOrNpcRestriction_30625648 = 1LL;
            while ( v17 < max_length )
            {
              if ( targetVals->m_Items[v17 + 1] == svtId )
                goto LABEL_23;
              if ( (int)++v17 >= max_length )
                return IsMyServantOrNpcRestriction_30625648;
            }
LABEL_41:
            v18 = sub_B0D9A8(IsMyServantOrNpcRestriction_30625648);
            sub_B0D948(v18, 0LL);
          }
LABEL_40:
          LOBYTE(IsMyServantOrNpcRestriction_30625648) = 1;
          return IsMyServantOrNpcRestriction_30625648;
        }
      }
LABEL_42:
      sub_B0D97C(IsMyServantOrNpcRestriction_30625648);
    }
  }
LABEL_23:
  LOBYTE(IsMyServantOrNpcRestriction_30625648) = 0;
  return IsMyServantOrNpcRestriction_30625648;
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
  if ( (byte_4217CC1 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    byte_4217CC1 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
    {
      v13 = sub_B0D9A8(this);
      sub_B0D948(v13, 0LL);
    }
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_B0D97C(this);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x21
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  unsigned int v21; // w22
  bool v22; // w20
  QuestRestrictionInfo_SlotInfo_o *v23; // x26
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  __int64 v25; // x27
  int size; // w8
  System_Int32_array *v27; // x8
  struct System_Collections_Generic_List_int____o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct System_Collections_Generic_List_Restriction_RangeType__o *v31; // x28
  __int64 v33; // x0

  if ( (byte_4217CCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Intersect_int___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4217CCA = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  svtId,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
        {
          v33 = sub_B0D9A8(Instance);
          sub_B0D948(v33, 0LL);
        }
        v23 = slotInfos->m_Items[v21];
        if ( !v23 )
          break;
        if ( v23->fields.slotType == 2 )
        {
          individualityList = v23->fields.individualityList;
          if ( !individualityList )
            break;
          v25 = 0LL;
          while ( 1 )
          {
            size = individualityList->fields._size;
            if ( (int)v25 >= size )
              break;
            if ( size <= (unsigned int)v25 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v27 = individualityList->fields._items->m_Items[v25];
            if ( !v27 )
              goto LABEL_41;
            if ( *(_QWORD *)&v27->max_length )
            {
              v28 = v23->fields.individualityList;
              if ( !v28 )
                goto LABEL_41;
              if ( v28->fields._size <= (unsigned int)v25 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v29 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields._items->m_Items[v25],
                      v20,
                      (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                            v29,
                                            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
              rangeTypeList = v23->fields.rangeTypeList;
              if ( !rangeTypeList )
                goto LABEL_41;
              if ( rangeTypeList->fields._size <= (unsigned int)v25 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              if ( rangeTypeList->fields._items->m_Items[v25 + 1] == 1 )
              {
                Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                              (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  return 0;
              }
              else
              {
                v31 = v23->fields.rangeTypeList;
                if ( !v31 )
                  goto LABEL_41;
                if ( v31->fields._size <= (unsigned int)v25 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                if ( v31->fields._items->m_Items[v25 + 1] == 2 )
                {
                  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                                (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
                  if ( ((unsigned __int8)Instance & 1) == 0 )
                    return 0;
                }
              }
              v22 = 1;
            }
            individualityList = v23->fields.individualityList;
            ++v25;
            if ( !individualityList )
              goto LABEL_41;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v21 >= max_length )
          return v22;
      }
LABEL_41:
      sub_B0D97C(Instance);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  unsigned int v9; // w21
  RestrictionWholeEntity_o *v10; // x8
  struct System_Int32_array *targetVals; // x23
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217CC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    byte_4217CC9 = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
LABEL_24:
      v15 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v15, 0LL);
    }
    v10 = restrictionWholeEntities->m_Items[v9];
    if ( !v10 )
      goto LABEL_23;
    if ( v10->fields.type == 9 )
    {
      targetVals = v10->fields.targetVals;
      if ( !targetVals )
        goto LABEL_23;
      v12 = *(_QWORD *)&targetVals->max_length;
      if ( (int)v12 >= 1 )
        break;
    }
LABEL_20:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v9 >= max_length )
      return 1;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v12 )
      goto LABEL_24;
    if ( !v8 )
      goto LABEL_23;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    v8,
                                                                    &entity,
                                                                    targetVals->m_Items[v13 + 1],
                                                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
      return 0;
    LODWORD(v12) = targetVals->max_length;
    if ( (__int64)++v13 >= (int)v12 )
      goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_30611436(
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
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x22
  struct System_Int32_array *uniqueIndividualitys; // x26
  __int64 v17; // x8
  ServantEntity_o *v18; // x23
  unsigned __int64 v19; // x27
  int32_t v20; // w24
  __int64 i; // x21
  struct System_Int32_array *deckSvtIdList; // x8
  int32_t v23; // w1
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  unsigned __int64 v26; // x19
  __int64 v27; // x0
  int32_t v29; // [xsp+8h] [xbp-58h]
  int32_t ServantImageLimitSealAfter; // [xsp+Ch] [xbp-54h]

  if ( (byte_4217C97 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4217C97 = 1;
  }
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_35;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_37;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_37:
    sub_B0D97C(Instance);
  }
  v17 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v17 >= 1 )
  {
    v29 = limitCount;
    v18 = (ServantEntity_o *)Instance;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
      {
LABEL_38:
        v27 = sub_B0D9A8(Instance);
        sub_B0D948(v27, 0LL);
      }
      if ( !v18 )
        goto LABEL_37;
      v20 = uniqueIndividualitys->m_Items[v19 + 1];
      if ( ServantEntity__IsIndividuality(v18, v29, ServantImageLimitSealAfter, v20, 0LL) )
        break;
LABEL_33:
      LODWORD(v17) = uniqueIndividualitys->max_length;
      ++v19;
      Instance = 0LL;
      if ( (__int64)v19 >= (int)v17 )
        return (char)Instance;
    }
    for ( i = 8LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      v26 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v26 >= SHIDWORD(Instance[1].fields.saveNameList[3].fields._syncRoot) )
        goto LABEL_33;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_37;
      if ( v26 >= deckSvtIdList->max_length )
        goto LABEL_38;
      v23 = *((_DWORD *)&deckSvtIdList->obj.klass + i);
      if ( v23 >= 1 )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v15,
                                      v23,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( !deckLimitCountList )
          goto LABEL_37;
        if ( v26 >= deckLimitCountList->max_length )
          goto LABEL_38;
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( !deckDispLimitCountList )
          goto LABEL_37;
        if ( v26 >= deckDispLimitCountList->max_length )
          goto LABEL_38;
        if ( !Instance )
          goto LABEL_37;
        if ( ServantEntity__IsIndividuality(
               (ServantEntity_o *)Instance,
               *((_DWORD *)&deckLimitCountList->obj.klass + i),
               *((_DWORD *)&deckDispLimitCountList->obj.klass + i),
               v20,
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
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_30612084(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x24
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v23; // x8
  unsigned __int64 v24; // x25
  int32_t v25; // w26
  int32_t i; // w27
  PartyOrganizationListViewItem_o *v27; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr00_16
  int32_t v29; // w0
  ServantEntity_o *v30; // x23
  int32_t svtLimitCount; // w22
  __int64 v33; // x0
  DataManager_o *v34; // [xsp+8h] [xbp-78h]
  struct System_Int32_array *v35; // [xsp+10h] [xbp-70h]
  int32_t ServantImageLimitSealAfter; // [xsp+1Ch] [xbp-64h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4217C98 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4217C98 = 1;
  }
  entity = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_38;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_38:
    sub_B0D97C(Instance);
  }
  v23 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v23 < 1 )
    return 0;
  v24 = 0LL;
  v34 = Instance;
  v35 = uniqueIndividualitys;
  while ( 1 )
  {
    if ( v24 >= (unsigned int)v23 )
    {
      v33 = sub_B0D9A8(Instance);
      sub_B0D948(v33, 0LL);
    }
    if ( !Instance )
      goto LABEL_38;
    v25 = uniqueIndividualitys->m_Items[v24 + 1];
    if ( ServantEntity__IsIndividuality((ServantEntity_o *)Instance, limitCount, ServantImageLimitSealAfter, v25, 0LL) )
      break;
LABEL_34:
    Instance = v34;
    uniqueIndividualitys = v35;
    ++v24;
    LODWORD(v23) = v35->max_length;
    if ( (__int64)v24 >= (int)v23 )
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
      v27 = (PartyOrganizationListViewItem_o *)Instance;
      v28 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v28, 0LL);
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v21,
             &entity,
             v29,
             (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v30 = (ServantEntity_o *)entity;
        svtLimitCount = v27->fields.svtLimitCount;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v27, 0LL);
        if ( !v30 )
          goto LABEL_38;
        if ( ServantEntity__IsIndividuality(v30, svtLimitCount, (int32_t)Instance, v25, 0LL) )
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
bool __fastcall QuestRestrictionInfo__IsUniqueServant_30610864(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool result; // w0
  il2cpp_array_size_t v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  int32_t v9; // w8
  __int64 v10; // x0

  if ( (byte_4217C95 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4217C95 = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  result = 0;
  if ( svtId >= 1 && this->fields.deckSvtIdList )
  {
    v6 = 0;
    v7 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      if ( (signed int)v6 >= v7->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        sub_B0D97C(v7);
      if ( v6 >= deckSvtIdList->max_length )
      {
        v10 = sub_B0D9A8(v7);
        sub_B0D948(v10, 0LL);
      }
      v9 = deckSvtIdList->m_Items[++v6];
      if ( v9 == svtId )
        return 1;
    }
    return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_30611088(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  bool result; // w0
  int32_t i; // w23
  PartyOrganizationListViewItem_o *Member; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // kr00_16

  if ( (byte_4217C96 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4217C96 = 1;
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
      if ( i >= *(_DWORD *)(*(_QWORD *)&Member->fields.frameType + 156LL) )
        break;
      if ( num != i && partyIndex != i )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, i, 0LL)) == 0LL )
          sub_B0D97C(Member);
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL) == svtId )
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
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4217C8C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_4217C8C = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.deckSvtIdList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x24
  __int64 v7; // x26
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v10; // x21
  struct System_Int32_array *v11; // x27
  __int64 v12; // x22
  __int64 v13; // x23
  BalanceConfig_c *DispLimitCount; // x0
  struct System_Int32_array *deckLimitCountList; // x27
  __int64 v16; // x22
  __int64 v17; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  unsigned __int64 v19; // x28
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4217C89 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userDeckEntity);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4217C89 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = 8LL;
    v7 = 1LL - (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v19 = v6 - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v19 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_31;
      if ( v19 >= deckSvtIdList->max_length )
        goto LABEL_30;
      *((_DWORD *)&deckSvtIdList->obj.klass + v6) = 0;
      if ( v7 + v6 != 8 )
      {
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, (int)v6 - 8, 0LL);
        if ( UserServant )
        {
          v10 = UserServant;
          v11 = this->fields.deckSvtIdList;
          v13 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v12 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v21.fields.currentCryptoKey = v13;
          *(_QWORD *)&v21.fields.fakeValue = v12;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v21,
                                                0LL);
          if ( !v11 )
LABEL_31:
            sub_B0D97C(DispLimitCount);
          if ( v19 >= v11->max_length )
          {
LABEL_30:
            v20 = sub_B0D9A8(DispLimitCount);
            sub_B0D948(v20, 0LL);
          }
          *((_DWORD *)&v11->obj.klass + v6) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v17 = *(_QWORD *)&v10->fields.limitCount.fields.currentCryptoKey;
            v16 = *(_QWORD *)&v10->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v22.fields.currentCryptoKey = v17;
            *(_QWORD *)&v22.fields.fakeValue = v16;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                  v22,
                                                  0LL);
            if ( v19 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v10, 0, 0LL);
            if ( v19 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v6;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_30604880(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x24
  __int64 v7; // x26
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v10; // x21
  struct System_Int32_array *v11; // x27
  __int64 v12; // x22
  __int64 v13; // x23
  BalanceConfig_c *DispLimitCount; // x0
  struct System_Int32_array *deckLimitCountList; // x27
  __int64 v16; // x22
  __int64 v17; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  unsigned __int64 v19; // x28
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4217C8A & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, eventDeckEntity);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4217C8A = 1;
  }
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = 8LL;
    v7 = 1LL - (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v19 = v6 - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v19 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_31;
      if ( v19 >= deckSvtIdList->max_length )
        goto LABEL_30;
      *((_DWORD *)&deckSvtIdList->obj.klass + v6) = 0;
      if ( v7 + v6 != 8 )
      {
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, (int)v6 - 8, 0LL);
        if ( UserServant )
        {
          v10 = UserServant;
          v11 = this->fields.deckSvtIdList;
          v13 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v12 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v21.fields.currentCryptoKey = v13;
          *(_QWORD *)&v21.fields.fakeValue = v12;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v21,
                                                0LL);
          if ( !v11 )
LABEL_31:
            sub_B0D97C(DispLimitCount);
          if ( v19 >= v11->max_length )
          {
LABEL_30:
            v20 = sub_B0D9A8(DispLimitCount);
            sub_B0D948(v20, 0LL);
          }
          *((_DWORD *)&v11->obj.klass + v6) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v17 = *(_QWORD *)&v10->fields.limitCount.fields.currentCryptoKey;
            v16 = *(_QWORD *)&v10->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v22.fields.currentCryptoKey = v17;
            *(_QWORD *)&v22.fields.fakeValue = v16;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                  v22,
                                                  0LL);
            if ( v19 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v10, 0, 0LL);
            if ( v19 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v6;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_30605356(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x25
  struct System_Int32_array *v10; // x8
  PartyOrganizationListViewItem_o *Member; // x0
  char *v12; // x8
  struct System_Int32_array *deckSvtIdList; // x28
  PartyOrganizationListViewItem_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  __int64 v18; // x0

  if ( (byte_4217C8B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, partyItem);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4217C8B = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v8 = 0LL;
    v9 = (unsigned int)num;
    while ( 1 )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v8 >= *(int *)(*(_QWORD *)&Member->fields.frameType + 156LL) )
        return;
      if ( v8 == v9 )
        break;
      if ( !partyItem )
        goto LABEL_29;
      Member = PartyListViewItem__GetMember(partyItem, v8, 0LL);
      if ( !Member )
        goto LABEL_29;
      deckSvtIdList = this->fields.deckSvtIdList;
      v14 = Member;
      SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                    SvtId,
                                                    0LL);
      if ( !deckSvtIdList )
LABEL_29:
        sub_B0D97C(Member);
      if ( v8 >= deckSvtIdList->max_length )
      {
LABEL_30:
        v18 = sub_B0D9A8(Member);
        sub_B0D948(v18, 0LL);
      }
      deckSvtIdList->m_Items[v8 + 1] = (int)Member;
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( deckLimitCountList )
      {
        if ( v8 >= deckLimitCountList->max_length )
          goto LABEL_30;
        deckLimitCountList->m_Items[v8 + 1] = v14->fields.svtLimitCount;
      }
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( deckDispLimitCountList )
      {
        Member = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v14, 0LL);
        if ( v8 >= deckDispLimitCountList->max_length )
          goto LABEL_30;
        v12 = (char *)deckDispLimitCountList + 4 * v8;
LABEL_22:
        *((_DWORD *)v12 + 8) = (_DWORD)Member;
      }
      ++v8;
    }
    v10 = this->fields.deckSvtIdList;
    if ( !v10 )
      goto LABEL_29;
    if ( v10->max_length <= v9 )
      goto LABEL_30;
    LODWORD(Member) = 0;
    v12 = (char *)v10 + 4 * v9;
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
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  struct System_String_o *v79; // x20
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  BattleServantConfConponent_o *p_supportPositionList; // x22
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  __int64 v142; // x1
  __int64 v143; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v144; // x20
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  __int64 v151; // x1
  __int64 v152; // x2
  System_Collections_Generic_List_int__o *v153; // x20
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  __int64 v184; // x1
  __int64 v185; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v186; // x20
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  __int64 v193; // x1
  __int64 v194; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v195; // x20
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  __int64 v202; // x1
  __int64 v203; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v204; // x20
  System_String_array **v205; // x2
  System_String_array **v206; // x3
  System_Boolean_array **v207; // x4
  System_Int32_array **v208; // x5
  System_Int32_array *v209; // x6
  System_Int32_array *v210; // x7
  __int64 v211; // x1
  __int64 v212; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v213; // x20
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  __int64 v220; // x1
  __int64 v221; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v222; // x20
  System_String_array **v223; // x2
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  __int64 v229; // x1
  __int64 v230; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v231; // x20
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  __int64 v244; // x1
  __int64 v245; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v246; // x20
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  BattleServantConfConponent_o *p_fields; // x25
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v267; // x1
  __int64 v268; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v269; // x20
  System_String_array **v270; // x2
  System_String_array **v271; // x3
  System_Boolean_array **v272; // x4
  System_Int32_array **v273; // x5
  System_Int32_array *v274; // x6
  System_Int32_array *v275; // x7
  __int64 v276; // x1
  __int64 v277; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v278; // x20
  System_String_array **v279; // x2
  System_String_array **v280; // x3
  System_Boolean_array **v281; // x4
  System_Int32_array **v282; // x5
  System_Int32_array *v283; // x6
  System_Int32_array *v284; // x7
  __int64 v285; // x1
  __int64 v286; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v287; // x20
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  __int64 v294; // x1
  __int64 v295; // x2
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v298; // x0
  System_Int32_array **v299; // x0
  System_String_array **v300; // x2
  System_String_array **v301; // x3
  System_Boolean_array **v302; // x4
  System_Int32_array **v303; // x5
  System_Int32_array *v304; // x6
  System_Int32_array *v305; // x7
  RestrictionBaseEntity_o *v306; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v307; // x21
  struct RestrictionWholeEntity_array *Entities; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // x26
  System_String_array **v310; // x2
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  struct RestrictionWholeEntity_array *v316; // x19
  int max_length; // w8
  unsigned int v318; // w20
  RestrictionWholeEntity_o *v319; // x23
  System_Int32_array **SetPossiblePosition; // x0
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  Il2CppObject *v327; // x0
  System_Int32_array **v328; // x0
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v335; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v336; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v337; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v338; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v339; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v340; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v341; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v342; // x0
  Il2CppObject *v343; // x0
  System_Int32_array **v344; // x0
  System_String_array **v345; // x2
  System_String_array **v346; // x3
  System_Boolean_array **v347; // x4
  System_Int32_array **v348; // x5
  System_Int32_array *v349; // x6
  System_Int32_array *v350; // x7
  BalanceConfig_c *v351; // x0
  System_Int32_array **v352; // x0
  System_String_array **v353; // x2
  System_String_array **v354; // x3
  System_Boolean_array **v355; // x4
  System_Int32_array **v356; // x5
  System_Int32_array *v357; // x6
  System_Int32_array *v358; // x7
  System_Int32_array **v359; // x0
  System_String_array **v360; // x2
  System_String_array **v361; // x3
  System_Boolean_array **v362; // x4
  System_Int32_array **v363; // x5
  System_Int32_array *v364; // x6
  System_Int32_array *v365; // x7
  System_Int32_array **v366; // x0
  System_String_array **v367; // x2
  System_String_array **v368; // x3
  System_Boolean_array **v369; // x4
  System_Int32_array **v370; // x5
  System_Int32_array *v371; // x6
  System_Int32_array *v372; // x7
  System_Int32_array **v373; // x0
  System_String_array **v374; // x2
  System_String_array **v375; // x3
  System_Boolean_array **v376; // x4
  System_Int32_array **v377; // x5
  System_Int32_array *v378; // x6
  System_Int32_array *v379; // x7
  Il2CppObject *v380; // x0
  System_Int32_array **v381; // x0
  System_String_array **v382; // x2
  System_String_array **v383; // x3
  System_Boolean_array **v384; // x4
  System_Int32_array **v385; // x5
  System_Int32_array *v386; // x6
  System_Int32_array *v387; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v388; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v389; // x0
  Il2CppObject *v390; // x0
  System_Int32_array **v391; // x0
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v398; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v399; // x0
  struct System_Int32_array *targetVals; // x8
  int32_t restrictionMessageId; // w2
  __int64 v402; // x1
  __int64 v403; // x2
  QuestRestrictionInfo_DialogMessageInfo_o *v404; // x26
  QuestRestrictionInfo_o *v405; // x26
  System_Collections_Generic_Dictionary_K__V__o **v406; // x28
  int isAllOutBattle; // w8
  const MethodInfo *v408; // x4
  __int64 v409; // x22
  System_String_array **v410; // x2
  System_String_array **v411; // x3
  System_Boolean_array **v412; // x4
  System_Int32_array **v413; // x5
  System_Int32_array *v414; // x6
  System_Int32_array *v415; // x7
  BalanceConfig_c *v416; // x0
  System_Int32_array **v417; // x0
  System_String_array **v418; // x2
  System_String_array **v419; // x3
  System_Boolean_array **v420; // x4
  System_Int32_array **v421; // x5
  System_Int32_array *v422; // x6
  System_Int32_array *v423; // x7
  int32_t v424; // w22
  int i; // w23
  BalanceConfig_c *v426; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v427; // x8
  __int64 v428; // x24
  __int64 v429; // x1
  __int64 v430; // x2
  System_Collections_Generic_List_int__o *v431; // x23
  int v432; // w8
  __int64 v433; // x19
  __int64 v434; // x26
  int32_t v435; // w2
  __int64 v436; // x1
  __int64 v437; // x2
  QuestRestrictionInfo_DialogMessageInfo_o *v438; // x26
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v439; // x23
  BattleServantConfConponent_c *klass; // x19
  __int64 v441; // x1
  __int64 v442; // x2
  QuestRestrictionInfo_SlotInfo_o *v443; // x27
  System_String_array **v444; // x2
  System_String_array **v445; // x3
  System_Boolean_array **v446; // x4
  System_Int32_array **v447; // x5
  System_Int32_array *v448; // x6
  System_Int32_array *v449; // x7
  int v450; // w20
  void **v451; // x0
  __int64 v452; // x1
  __int64 v453; // x2
  int servantNumMax; // w8
  BattleServantConfConponent_c *v455; // x8
  int32_t v456; // w23
  __int64 v457; // x8
  BattleServantConfConponent_c *v458; // x8
  __int64 v459; // x8
  QuestRestrictionInfo___c_c *v460; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_0; // x27
  Il2CppObject *v463; // x26
  struct QuestRestrictionInfo___c_StaticFields *v464; // x0
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  __int64 v471; // x1
  __int64 v472; // x2
  _BOOL4 v473; // w19
  QuestRestrictionInfo___c_c *v474; // x8
  struct QuestRestrictionInfo___c_StaticFields *v475; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_1; // x27
  Il2CppObject *v477; // x26
  struct QuestRestrictionInfo___c_StaticFields *v478; // x0
  System_String_array **v479; // x2
  System_String_array **v480; // x3
  System_Boolean_array **v481; // x4
  System_Int32_array **v482; // x5
  System_Int32_array *v483; // x6
  System_Int32_array *v484; // x7
  __int64 v485; // x1
  __int64 v486; // x2
  _BOOL4 v487; // w27
  QuestRestrictionInfo___c_c *v488; // x8
  struct QuestRestrictionInfo___c_StaticFields *v489; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_2; // x26
  Il2CppObject *v491; // x19
  struct QuestRestrictionInfo___c_StaticFields *v492; // x0
  System_String_array **v493; // x2
  System_String_array **v494; // x3
  System_Boolean_array **v495; // x4
  System_Int32_array **v496; // x5
  System_Int32_array *v497; // x6
  System_Int32_array *v498; // x7
  __int64 v499; // x1
  __int64 v500; // x2
  BattleServantConfConponent_c *v501; // x8
  __int64 v502; // x8
  BattleServantConfConponent_c *v503; // x8
  __int64 v504; // x8
  BattleServantConfConponent_c *v505; // x8
  __int64 v506; // x8
  int v507; // w8
  unsigned int v508; // w19
  WellFired_USFGOPlayBgmEventConditional_CondBGM_o *v509; // x27
  __int64 v510; // x8
  BattleServantConfConponent_c *v511; // x8
  __int64 v512; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v513; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v514; // x0
  BattleServantConfConponent_c *v515; // x8
  __int64 v516; // x8
  System_String_o *condValue; // x27
  BattleServantConfConponent_c *v518; // x8
  __int64 v519; // x8
  System_String_array **v520; // x2
  System_String_array **v521; // x3
  System_Boolean_array **v522; // x4
  System_Int32_array **v523; // x5
  System_Int32_array *v524; // x6
  System_Int32_array *v525; // x7
  BattleServantConfConponent_c *v526; // x8
  __int64 v527; // x8
  System_String_o **v528; // x26
  BattleServantConfConponent_o *v529; // x0
  System_Int32_array **v530; // x1
  BattleServantConfConponent_c *v531; // x8
  __int64 v532; // x27
  QuestRestrictionInfo___c_c *v533; // x0
  struct QuestRestrictionInfo___c_StaticFields *v534; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_3; // x26
  Il2CppObject *v536; // x19
  struct QuestRestrictionInfo___c_StaticFields *v537; // x0
  System_String_array **v538; // x2
  System_String_array **v539; // x3
  System_Boolean_array **v540; // x4
  System_Int32_array **v541; // x5
  System_Int32_array *v542; // x6
  System_Int32_array *v543; // x7
  BattleServantConfConponent_c *v544; // x10
  unsigned int namespaze; // w9
  void **v546; // x8
  __int64 *v547; // x8
  _DWORD *v548; // x11
  _DWORD *v549; // t1
  __int64 v550; // x8
  BattleServantConfConponent_c *v551; // x8
  __int64 v552; // x8
  BattleServantConfConponent_c *v553; // x8
  __int64 v554; // x8
  System_Int32_array **v555; // x0
  System_String_array **v556; // x2
  System_String_array **v557; // x3
  System_Boolean_array **v558; // x4
  System_Int32_array **v559; // x5
  System_Int32_array *v560; // x6
  System_Int32_array *v561; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v563; // w10
  unsigned int v564; // w11
  int v565; // w9
  int v566; // w20
  int32_t v567; // w19
  QuestRestrictionInfo_SlotInfo_o *v568; // x13
  int v569; // w8
  unsigned int v570; // w9
  __int64 v571; // x10
  char v572; // w21
  bool v573; // w8
  bool v574; // w8
  Il2CppObject *Value_int__object; // x0
  int v576; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v578; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v579; // x8
  __int64 v580; // x8
  Il2CppObject *v581; // x0
  System_Int32_array **v582; // x0
  System_String_array **v583; // x2
  System_String_array **v584; // x3
  System_Boolean_array **v585; // x4
  System_Int32_array **v586; // x5
  System_Int32_array *v587; // x6
  System_Int32_array *v588; // x7
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *restrictionSlotDictionary; // x8
  _BOOL8 v590; // x0
  int monitor; // w9
  unsigned int v592; // w10
  __int64 v593; // x11
  __int64 v594; // x1
  __int64 v595; // x2
  System_Text_StringBuilder_o *v596; // x20
  __int64 v597; // x1
  __int64 v598; // x2
  System_Text_StringBuilder_o *v599; // x21
  struct RestrictionWholeEntity_array *v600; // x19
  int v601; // w8
  unsigned int v602; // w22
  RestrictionWholeEntity_o *v603; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v606; // w25
  _BOOL4 v607; // w8
  System_Int32_array **v608; // x0
  System_String_array **v609; // x2
  System_String_array **v610; // x3
  System_Boolean_array **v611; // x4
  System_Int32_array **v612; // x5
  System_Int32_array *v613; // x6
  System_Int32_array *v614; // x7
  System_String_o *v615; // x19
  System_String_o *v616; // x0
  System_Int32_array **v617; // x0
  System_String_array **v618; // x2
  System_String_array **v619; // x3
  System_Boolean_array **v620; // x4
  System_Int32_array **v621; // x5
  System_Int32_array *v622; // x6
  System_Int32_array *v623; // x7
  __int64 v624; // x0
  __int64 v625; // x0
  __int64 v626; // x0
  BattleServantConfConponent_o *p_svtIdForceBattleList; // [xsp+0h] [xbp-190h]
  struct RestrictionWholeEntity_array **v628; // [xsp+8h] [xbp-188h]
  BattleServantConfConponent_o *p_confirmRestrictionMessage; // [xsp+10h] [xbp-180h]
  BattleServantConfConponent_o *p_restrictionMessage; // [xsp+18h] [xbp-178h]
  BattleServantConfConponent_o *v631; // [xsp+20h] [xbp-170h]
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
  _BOOL4 v646; // [xsp+90h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_restrictionSlotDetailDictionary; // [xsp+98h] [xbp-F8h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+A0h] [xbp-F0h]
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **p_dialogMessageInfoDictionary; // [xsp+A8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+B0h] [xbp-E0h]
  BattleServantConfConponent_o *p_deckSvtIdList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v652; // [xsp+B8h] [xbp-D8h]
  int32_t questIdb; // [xsp+C4h] [xbp-CCh]
  QuestRestrictionInfo_o *v655; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v656; // [xsp+D0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v657; // [xsp+D8h] [xbp-B8h] BYREF
  int v658; // [xsp+F0h] [xbp-A0h]
  int v659; // [xsp+F8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v660; // [xsp+100h] [xbp-90h] BYREF
  WarEntity_o *v661; // [xsp+118h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+120h] [xbp-70h] BYREF
  QuestPhaseEntity_o *v663; // [xsp+128h] [xbp-68h] BYREF
  WarEntity_o *v664; // [xsp+130h] [xbp-60h] BYREF

  if ( (byte_4217C87 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___, v9);
    sub_B0D8A4(&Method_BasicHelper_Any_RestrictionSlotEntity___, v10);
    sub_B0D8A4(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestGroupMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionMessageMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionSlotMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionWholeMaster___, v20);
    sub_B0D8A4(&DataManager_TypeInfo, v21);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v22);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v23);
    sub_B0D8A4(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__, v35);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v36);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v37);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v38);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__,
      v39);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__,
      v40);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__,
      v41);
    sub_B0D8A4(&Method_System_Func_RestrictionSlotEntity__bool___ctor__, v42);
    sub_B0D8A4(&Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__, v43);
    sub_B0D8A4(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo, v44);
    sub_B0D8A4(&System_Func_RestrictionSlotEntity__bool__TypeInfo, v45);
    sub_B0D8A4(&int___TypeInfo, v46);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Add__, v47);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__, v48);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool____Add__, v49);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__, v50);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v51);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__, v52);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v53);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__, v54);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v55);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool_____ctor__, v56);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v57);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v58);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__, v59);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v60);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v61);
    sub_B0D8A4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v62);
    sub_B0D8A4(&System_Collections_Generic_List_bool____TypeInfo, v63);
    sub_B0D8A4(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo, v64);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v65);
    sub_B0D8A4(&QuestRestrictionInfo_SlotInfo___TypeInfo, v66);
    sub_B0D8A4(&QuestRestrictionInfo_SlotInfo_TypeInfo, v67);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v68);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__Setup_b__82_0__, v69);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__Setup_b__82_1__, v70);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__Setup_b__82_2__, v71);
    sub_B0D8A4(&Method_QuestRestrictionInfo___c__Setup_b__82_3__, v72);
    sub_B0D8A4(&QuestRestrictionInfo___c_TypeInfo, v73);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__,
      v74);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v75);
    sub_B0D8A4(&StringLiteral_10418/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v76);
    sub_B0D8A4(&StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v77);
    sub_B0D8A4(&StringLiteral_1/*""*/, v78);
    byte_4217C87 = 1;
  }
  v663 = 0LL;
  v664 = 0LL;
  v661 = 0LL;
  entity = 0LL;
  memset(&v660, 0, sizeof(v660));
  v659 = 0;
  this->fields.isRestriction = 0;
  p_restrictionMessage = (BattleServantConfConponent_o *)&this->fields.restrictionMessage;
  v79 = (struct System_String_o *)StringLiteral_1/*""*/;
  v80 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
    v80,
    *(System_String_array ***)&questId,
    *(System_String_array ***)&questPhase,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v79;
  p_confirmRestrictionMessage = (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
    (System_Int32_array **)v79,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
    0LL,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.uniqueSvtRestrictionEntity,
    0LL,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (BattleServantConfConponent_o *)&this->fields.deckSvtIdList;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.deckSvtIdList, 0LL, v99, v100, v101, v102, v103, v104);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0LL,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (BattleServantConfConponent_o *)&this->fields.supportPositionList;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.supportPositionList, 0LL, v112, v113, v114, v115, v116, v117);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0LL,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantNumRestrictionEntity,
    0LL,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.myServantNumRestrictionEntity,
    0LL,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
    0LL,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  this->fields.isFatigure = 0;
  this->fields.isNpcEditablePos = 0;
  *(_WORD *)&this->fields.isNpcMultipleBattle = 0;
  this->fields.eventDeckNum = 0;
  v144 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                                                                   v142,
                                                                                                   v143);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v144,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v144;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (System_Int32_array **)v144,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  v153 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v151, v152);
  System_Collections_Generic_List_int____ctor(
    v153,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.specifiedPositionList = v153;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.specifiedPositionList,
    (System_Int32_array **)v153,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  this->fields.isNotTransitionSupportList = 0;
  this->fields.supportInitIndex = 0;
  this->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0LL,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  this->fields.uniqueIndividualityEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.uniqueIndividualityEntity,
    0LL,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  this->fields.isAllOutBattle = 0;
  this->fields.isDataLostBattle = 0;
  this->fields.allOutBattleGroupNo = -1;
  this->fields.dataLostBattleId = -1;
  this->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = &this->fields.deckLimitCountList;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.deckLimitCountList, 0LL, v172, v173, v174, v175, v176, v177);
  this->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = &this->fields.deckDispLimitCountList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
    0LL,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  this->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&this->fields.isUniqueServant = 0;
  v186 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_bool____TypeInfo,
                                                                                                   v184,
                                                                                                   v185);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v186,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v186;
  p_positionsList = &this->fields.positionsList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.positionsList,
    (System_Int32_array **)v186,
    v187,
    v188,
    v189,
    v190,
    v191,
    v192);
  v195 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v193,
                                                                                                   v194);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v195,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v195;
  p_fixedIndividualitiesList = &this->fields.fixedIndividualitiesList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixedIndividualitiesList,
    (System_Int32_array **)v195,
    v196,
    v197,
    v198,
    v199,
    v200,
    v201);
  this->fields.isFixedMyServantPosition = 0;
  v204 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_bool____TypeInfo,
                                                                                                   v202,
                                                                                                   v203);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v204,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v204;
  p_myServantPositionsList = &this->fields.myServantPositionsList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.myServantPositionsList,
    (System_Int32_array **)v204,
    v205,
    v206,
    v207,
    v208,
    v209,
    v210);
  v213 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v211,
                                                                                                   v212);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v213,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v213;
  p_fixedMyServantIndividualitiesList = &this->fields.fixedMyServantIndividualitiesList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantIndividualitiesList,
    (System_Int32_array **)v213,
    v214,
    v215,
    v216,
    v217,
    v218,
    v219);
  this->fields.isFixedSupportPosition = 0;
  v222 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v220,
                                                                                                   v221);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v222,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v222;
  p_fixedSupportIndividualitiesList = &this->fields.fixedSupportIndividualitiesList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportIndividualitiesList,
    (System_Int32_array **)v222,
    v223,
    v224,
    v225,
    v226,
    v227,
    v228);
  this->fields.isFixedNpcPosition = 0;
  v231 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v229,
                                                                                                   v230);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v231,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v231;
  p_fixedNpcIndividualitiesList = &this->fields.fixedNpcIndividualitiesList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixedNpcIndividualitiesList,
    (System_Int32_array **)v231,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  this->fields.npcPositionList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.npcPositionList, 0LL, v238, v239, v240, v241, v242, v243);
  v246 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v244,
                                                                                                   v245);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v246,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v246;
  p_needStartingIndividualitiesList = &this->fields.needStartingIndividualitiesList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.needStartingIndividualitiesList,
    (System_Int32_array **)v246,
    v247,
    v248,
    v249,
    v250,
    v251,
    v252);
  this->fields.isNeedStarting = 0;
  this->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&this->fields.isMyServantOrNpc = 0;
  this->fields.slotInfos = 0LL;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, 0LL, v254, v255, v256, v257, v258, v259);
  this->fields.dialogMessageInfoDictionary = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
    0LL,
    v260,
    v261,
    v262,
    v263,
    v264,
    v265);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
    v269 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v267, v268);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v269,
      (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v269;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&this->fields.restrictionSlotDictionary;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDictionary,
      (System_Int32_array **)v269,
      v270,
      v271,
      v272,
      v273,
      v274,
      v275);
    v278 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v276, v277);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v278,
      (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v278;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.restrictionSlotDetailDictionary;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDetailDictionary,
      (System_Int32_array **)v278,
      v279,
      v280,
      v281,
      v282,
      v283,
      v284);
    v287 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v285, v286);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v287,
      (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v287;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
      (System_Int32_array **)v287,
      v288,
      v289,
      v290,
      v291,
      v292,
      v293);
    v656 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo,
                                                                                                     v294,
                                                                                                     v295);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v656,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
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
      v298 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v298 = BalanceConfig_TypeInfo;
      }
      v299 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, (unsigned int)v298->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (BattleServantConfConponent_c *)v299;
      sub_B0D840(p_deckSvtIdList, v299, v300, v301, v302, v303, v304, v305);
    }
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = RestrictionBaseEntity__HasFlag(
                                       (RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster,
                                       32LL,
                                       0LL);
    v306 = this->fields.restrictionBaseEntity;
    this->fields.isNotSingleSupportOnly = Master_WarQuestSelectionMaster & 1;
    if ( !v306 )
      goto LABEL_378;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v306,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v307 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
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
    v655 = this;
    this->fields.restrictionWholeEntities = Entities;
    p_restrictionWholeEntities = &this->fields.restrictionWholeEntities;
    sub_B0D840(
      (BattleServantConfConponent_o *)p_restrictionWholeEntities,
      (System_Int32_array **)Entities,
      v310,
      v311,
      v312,
      v313,
      v314,
      v315);
    v316 = *p_restrictionWholeEntities;
    v628 = p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_378;
    max_length = v316->max_length;
    if ( max_length >= 1 )
    {
      v318 = 0;
      p_fixedSupportIndividualities = (BattleServantConfConponent_o *)&v655->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (BattleServantConfConponent_o *)&v655->fields.fixedNpcIndividualities;
      p_uniqueIndividualitys = (BattleServantConfConponent_o *)&v655->fields.uniqueIndividualitys;
      p_needStartingIndividualities = (BattleServantConfConponent_o *)&v655->fields.needStartingIndividualities;
      v631 = p_supportPositionList;
      while ( 2 )
      {
        if ( v318 >= max_length )
          goto LABEL_379;
        v319 = v316->m_Items[v318];
        if ( v319 )
        {
          switch ( v319->fields.type )
          {
            case 2:
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = QuestGroupMaster__GetGroupId(
                                                 (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                                                 questId,
                                                 17,
                                                 0LL);
              v655->fields.allOutBattleGroupNo = Master_WarQuestSelectionMaster;
              v655->fields.isAllOutBattle = 1;
              goto LABEL_66;
            case 3:
              Master_WarQuestSelectionMaster = System_Linq_Enumerable__Min(
                                                 (System_Collections_Generic_IEnumerable_int__o *)v319->fields.targetVals,
                                                 0LL);
              v655->fields.servantNumMax = Master_WarQuestSelectionMaster - 1;
              goto LABEL_66;
            case 4:
              v337 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_positionsList;
              Master_WarQuestSelectionMaster = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v319, 0LL);
              if ( !v337 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v337,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_bool____Add__);
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v338 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v338 )
                goto LABEL_378;
              v339 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0D964(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v338,
                v339,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
              v655->fields.isFixedPosition = 1;
              goto LABEL_66;
            case 5:
              v340 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_myServantPositionsList;
              Master_WarQuestSelectionMaster = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v319, 0LL);
              if ( !v340 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v340,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_bool____Add__);
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v341 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedMyServantIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v341 )
                goto LABEL_378;
              v342 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0D964(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v341,
                v342,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
              v655->fields.isFixedMyServantPosition = 1;
              goto LABEL_66;
            case 6:
              SetPossiblePosition = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v319, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)SetPossiblePosition;
              sub_B0D840(p_supportPositionList, SetPossiblePosition, v321, v322, v323, v324, v325, v326);
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v327 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v328 = (System_Int32_array **)sub_B0D964(v327, int___TypeInfo);
              p_fixedSupportIndividualities->klass = (BattleServantConfConponent_c *)v328;
              sub_B0D840(p_fixedSupportIndividualities, v328, v329, v330, v331, v332, v333, v334);
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v335 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedSupportIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v335 )
                goto LABEL_378;
              v336 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0D964(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v335,
                v336,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
              v655->fields.isFixedSupportPosition = 1;
              goto LABEL_66;
            case 7:
              v373 = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v319, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)v373;
              sub_B0D840(p_supportPositionList, v373, v374, v375, v376, v377, v378, v379);
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v380 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v381 = (System_Int32_array **)sub_B0D964(v380, int___TypeInfo);
              p_fixedNpcIndividualities->klass = (BattleServantConfConponent_c *)v381;
              sub_B0D840(p_fixedNpcIndividualities, v381, v382, v383, v384, v385, v386, v387);
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v388 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedNpcIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v388 )
                goto LABEL_378;
              v389 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0D964(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v388,
                v389,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
              v655->fields.isFixedNpcPosition = 1;
              goto LABEL_66;
            case 8:
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v390 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v391 = (System_Int32_array **)sub_B0D964(v390, int___TypeInfo);
              p_needStartingIndividualities->klass = (BattleServantConfConponent_c *)v391;
              sub_B0D840(p_needStartingIndividualities, v391, v392, v393, v394, v395, v396, v397);
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v398 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_needStartingIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v398 )
                goto LABEL_378;
              v399 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0D964(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v398,
                v399,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
              v655->fields.isNeedStarting = 1;
              goto LABEL_66;
            case 9:
              Master_WarQuestSelectionMaster = (__int64)v319->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v343 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v344 = (System_Int32_array **)sub_B0D964(v343, int___TypeInfo);
              p_uniqueIndividualitys->klass = (BattleServantConfConponent_c *)v344;
              sub_B0D840(p_uniqueIndividualitys, v344, v345, v346, v347, v348, v349, v350);
              v351 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v351 = BalanceConfig_TypeInfo;
              }
              v352 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, (unsigned int)v351->static_fields->DeckMemberMax);
              v655->fields.deckSvtIdList = (struct System_Int32_array *)v352;
              sub_B0D840(p_deckSvtIdList, v352, v353, v354, v355, v356, v357, v358);
              v359 = (System_Int32_array **)sub_B0D8BC(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v655->fields.deckLimitCountList = (struct System_Int32_array *)v359;
              sub_B0D840((BattleServantConfConponent_o *)p_deckLimitCountList, v359, v360, v361, v362, v363, v364, v365);
              v366 = (System_Int32_array **)sub_B0D8BC(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v655->fields.deckDispLimitCountList = (struct System_Int32_array *)v366;
              sub_B0D840(
                (BattleServantConfConponent_o *)p_deckDispLimitCountList,
                v366,
                v367,
                v368,
                v369,
                v370,
                v371,
                v372);
              p_supportPositionList = v631;
              v655->fields.isUniqueIndividuality = 1;
              goto LABEL_66;
            case 0xA:
              v655->fields.isDataLostBattle = 1;
              targetVals = v319->fields.targetVals;
              if ( !targetVals )
                goto LABEL_378;
              if ( !targetVals->max_length )
                goto LABEL_379;
              v655->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_66:
              restrictionMessageId = v319->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_75;
              if ( !v307 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 v307,
                                                 &entity,
                                                 restrictionMessageId,
                                                 (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                goto LABEL_75;
              Master_WarQuestSelectionMaster = (__int64)v656;
              if ( !v656 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v656,
                                                 (WarBoardManager_TaskList_o *)entity,
                                                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                goto LABEL_75;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v656,
                (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
              v404 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B0D974(
                                                                   QuestRestrictionInfo_DialogMessageInfo_TypeInfo,
                                                                   v402,
                                                                   v403);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v404, 0LL);
              if ( !v404 )
                goto LABEL_378;
              v404->fields.restrictionType = v319->fields.type;
              if ( !entity )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_378;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                entity->fields.id,
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v404,
                (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_75:
              max_length = v316->max_length;
              if ( (int)++v318 >= max_length )
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
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
    v405 = v655;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
      &v664,
      questId,
      (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_WarQuestSelectionMaster = (__int64)v664;
    if ( !v664 )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = QuestEntity__HasFlag_23244236((QuestEntity_o *)v664, 0x100000LL, questPhase, 0LL);
    v406 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v655 )
        goto LABEL_378;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v655->fields.isAllOutBattle;
    }
    v655->fields.isNoSupportBattle = isAllOutBattle != 0;
    Master_WarQuestSelectionMaster = (__int64)v664;
    if ( !v664 )
      goto LABEL_378;
    v655->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_23244236(
                                              (QuestEntity_o *)v664,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_WarQuestSelectionMaster = (__int64)v664;
    if ( !v664 )
      goto LABEL_378;
    v655->fields.isFatigure = QuestEntity__HasFlag_23244236((QuestEntity_o *)v664, 0x200000LL, questPhase, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_378:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
           &v663,
           questId,
           questPhase,
           v408) )
    {
      Master_WarQuestSelectionMaster = sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !v663 )
        goto LABEL_378;
      v409 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = QuestPhaseEntity__GetSingleForceSvtId(v663, 0LL);
      if ( !v409 )
        goto LABEL_378;
      if ( !*(_DWORD *)(v409 + 24) )
        goto LABEL_379;
      *(_DWORD *)(v409 + 32) = Master_WarQuestSelectionMaster;
      p_svtIdForceBattleList->klass = (BattleServantConfConponent_c *)v409;
      sub_B0D840(p_svtIdForceBattleList, (System_Int32_array **)v409, v410, v411, v412, v413, v414, v415);
      Master_WarQuestSelectionMaster = (__int64)v663;
      if ( !v663 )
        goto LABEL_378;
      v655->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v663, 0LL);
      Master_WarQuestSelectionMaster = (__int64)v663;
      if ( !v663 )
        goto LABEL_378;
      v655->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v663, 0LL);
    }
    else
    {
      v655->fields.correctionIconId = -1;
    }
    v416 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v416 = BalanceConfig_TypeInfo;
    }
    v417 = (System_Int32_array **)sub_B0D8BC(
                                    QuestRestrictionInfo_SlotInfo___TypeInfo,
                                    (unsigned int)v416->static_fields->DeckMemberMax);
    p_fields->klass = (BattleServantConfConponent_c *)v417;
    sub_B0D840(p_fields, v417, v418, v419, v420, v421, v422, v423);
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v424 = 1;
    for ( i = 1; ; i = v456 & v652 )
    {
      v426 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v426 = BalanceConfig_TypeInfo;
      }
      if ( v424 > v426->static_fields->DeckMemberMax )
        break;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_378;
      questIdb = i;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      Master_WarQuestSelectionMaster = (__int64)RestrictionSlotMaster__GetEntities(
                                                  (RestrictionSlotMaster_o *)Master_WarQuestSelectionMaster,
                                                  (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                                  v424,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      v427 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_WarQuestSelectionMaster
                                                                                        + 24);
      v428 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
      v652 = v427 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_378;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
        v424,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v428,
        (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v431 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v429,
                                                         v430);
      System_Collections_Generic_List_int____ctor(
        v431,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      v432 = *(_DWORD *)(v428 + 24);
      if ( v432 >= 1 )
      {
        v433 = 0LL;
        while ( (unsigned int)v433 < v432 )
        {
          v434 = *(_QWORD *)(v428 + 32 + 8 * v433);
          if ( !v434 || !v431 )
            goto LABEL_378;
          Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                             v431,
                                             *(_DWORD *)(v434 + 40),
                                             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            System_Collections_Generic_List_int___Add(
              v431,
              *(_DWORD *)(v434 + 40),
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v435 = *(_DWORD *)(v434 + 44);
          if ( v435 >= 1 )
          {
            if ( !v307 )
              goto LABEL_378;
            Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                               v307,
                                               &v661,
                                               v435,
                                               (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              Master_WarQuestSelectionMaster = (__int64)v656;
              if ( !v656 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v656,
                                                 (WarBoardManager_TaskList_o *)v661,
                                                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v656,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v661,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
                v438 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B0D974(
                                                                     QuestRestrictionInfo_DialogMessageInfo_TypeInfo,
                                                                     v436,
                                                                     v437);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v438, 0LL);
                if ( !v438 )
                  goto LABEL_378;
                v438->fields.slotNo = v424;
                if ( !v661 )
                  goto LABEL_378;
                Master_WarQuestSelectionMaster = (__int64)*v406;
                if ( !*v406 )
                  goto LABEL_378;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                  v661->fields.id,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v438,
                  (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v432 = *(_DWORD *)(v428 + 24);
          if ( (int)++v433 >= v432 )
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
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      Master_WarQuestSelectionMaster = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                                  (RestrictionSlotDetailMaster_o *)Master_WarQuestSelectionMaster,
                                                  v431,
                                                  0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_378;
      v439 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Master_WarQuestSelectionMaster;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        *p_restrictionSlotDetailDictionary,
        v424,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v443 = (QuestRestrictionInfo_SlotInfo_o *)sub_B0D974(QuestRestrictionInfo_SlotInfo_TypeInfo, v441, v442);
      QuestRestrictionInfo_SlotInfo___ctor(v443, 0LL);
      if ( !klass )
        goto LABEL_378;
      if ( v443 )
      {
        Master_WarQuestSelectionMaster = sub_B0D964(v443, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_WarQuestSelectionMaster )
        {
          v626 = sub_B0D99C(0LL);
          sub_B0D948(v626, 0LL);
        }
      }
      v450 = v424 - 1;
      if ( (unsigned int)(v424 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_379;
      v451 = &klass->_1.image + v450;
      v451[4] = v443;
      sub_B0D840(
        (BattleServantConfConponent_o *)(v451 + 4),
        (System_Int32_array **)v443,
        v444,
        v445,
        v446,
        v447,
        v448,
        v449);
      v405 = v655;
      servantNumMax = v655->fields.servantNumMax;
      if ( servantNumMax >= 1 && v450 >= servantNumMax )
      {
        v455 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        v456 = questIdb;
        if ( (unsigned int)v450 >= LODWORD(v455->_1.namespaze) )
          goto LABEL_379;
        v457 = *((_QWORD *)&v455->_1.byval_arg.data + v450);
        if ( !v457 )
          goto LABEL_378;
        *(_DWORD *)(v457 + 16) = 5;
        v458 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v450 >= LODWORD(v458->_1.namespaze) )
          goto LABEL_379;
        v459 = *((_QWORD *)&v458->_1.byval_arg.data + v450);
        if ( !v459 )
          goto LABEL_378;
        *(_BYTE *)(v459 + 48) = 0;
        v406 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
        goto LABEL_251;
      }
      v460 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v460 = QuestRestrictionInfo___c_TypeInfo;
      }
      static_fields = v460->static_fields;
      _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__82_0;
      if ( !_9__82_0 )
      {
        if ( (BYTE3(v460->vtable._0_Equals.methodPtr) & 4) != 0 && !v460->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v460);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v463 = (Il2CppObject *)static_fields->__9;
        _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                                                        v452,
                                                                                        v453);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_0,
          v463,
          Method_QuestRestrictionInfo___c__Setup_b__82_0__,
          (const MethodInfo_26189B8 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v464 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v464->__9__82_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v464->__9__82_0,
          (System_Int32_array **)_9__82_0,
          v465,
          v466,
          v467,
          v468,
          v469,
          v470);
      }
      v473 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v428,
               (System_Func_T__bool__o *)_9__82_0,
               (const MethodInfo_17071E4 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v474 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v474 = QuestRestrictionInfo___c_TypeInfo;
      }
      v475 = v474->static_fields;
      _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v475->__9__82_1;
      if ( !_9__82_1 )
      {
        if ( (BYTE3(v474->vtable._0_Equals.methodPtr) & 4) != 0 && !v474->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v474);
          v475 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v477 = (Il2CppObject *)v475->__9;
        _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                                                        v471,
                                                                                        v472);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_1,
          v477,
          Method_QuestRestrictionInfo___c__Setup_b__82_1__,
          (const MethodInfo_26189B8 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v478 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v478->__9__82_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v478->__9__82_1,
          (System_Int32_array **)_9__82_1,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484);
      }
      v487 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v428,
               (System_Func_T__bool__o *)_9__82_1,
               (const MethodInfo_17071E4 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v488 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v488 = QuestRestrictionInfo___c_TypeInfo;
      }
      v489 = v488->static_fields;
      _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v489->__9__82_2;
      if ( !_9__82_2 )
      {
        v646 = v473;
        if ( (BYTE3(v488->vtable._0_Equals.methodPtr) & 4) != 0 && !v488->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v488);
          v489 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v491 = (Il2CppObject *)v489->__9;
        _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                                                        v485,
                                                                                        v486);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_2,
          v491,
          Method_QuestRestrictionInfo___c__Setup_b__82_2__,
          (const MethodInfo_26189B8 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v492 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v492->__9__82_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_2;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v492->__9__82_2,
          (System_Int32_array **)_9__82_2,
          v493,
          v494,
          v495,
          v496,
          v497,
          v498);
        v473 = v646;
      }
      Master_WarQuestSelectionMaster = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v428,
                                         (System_Func_T__bool__o *)_9__82_2,
                                         (const MethodInfo_17071E4 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      if ( v487 || !v473 || (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( (v473 || !v487) | Master_WarQuestSelectionMaster & 1 )
        {
          if ( !v473 && !v487 && (((unsigned int)Master_WarQuestSelectionMaster ^ 1) & 1) == 0 )
          {
            v503 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v450 >= LODWORD(v503->_1.namespaze) )
              goto LABEL_379;
            v504 = *((_QWORD *)&v503->_1.byval_arg.data + v450);
            if ( !v504 )
              goto LABEL_378;
            *(_DWORD *)(v504 + 16) = 2;
            v655->fields.supportInitIndex = v424;
            if ( !v439 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( !(Master_WarQuestSelectionMaster & 1 | (!v473 || !v487)) )
          {
            v553 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v450 >= LODWORD(v553->_1.namespaze) )
              goto LABEL_379;
            v554 = *((_QWORD *)&v553->_1.byval_arg.data + v450);
            if ( !v554 )
              goto LABEL_378;
            *(_DWORD *)(v554 + 16) = 3;
            v655->fields.isMyServantOrNpc = 1;
            if ( !v439 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( ((v473 || v487) & (unsigned int)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v551 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v450 >= LODWORD(v551->_1.namespaze) )
              goto LABEL_379;
            v552 = *((_QWORD *)&v551->_1.byval_arg.data + v450);
            if ( !v552 )
              goto LABEL_378;
            *(_DWORD *)(v552 + 16) = 4;
            v655->fields.isMyServantOrSupport = 1;
            if ( !v439 )
              goto LABEL_378;
            goto LABEL_196;
          }
        }
        else
        {
          v505 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_378;
          if ( (unsigned int)v450 >= LODWORD(v505->_1.namespaze) )
            goto LABEL_379;
          v506 = *((_QWORD *)&v505->_1.byval_arg.data + v450);
          if ( !v506 )
            goto LABEL_378;
          *(_DWORD *)(v506 + 16) = 1;
        }
        if ( !v439 )
          goto LABEL_378;
      }
      else
      {
        v501 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v450 >= LODWORD(v501->_1.namespaze) )
          goto LABEL_379;
        v502 = *((_QWORD *)&v501->_1.byval_arg.data + v450);
        if ( !v502 )
          goto LABEL_378;
        *(_DWORD *)(v502 + 16) = 0;
        if ( !v439 )
          goto LABEL_378;
      }
LABEL_196:
      v507 = v439->max_length;
      if ( v507 >= 1 )
      {
        v508 = 0;
        while ( v508 < v507 )
        {
          v509 = v439->m_Items[v508];
          if ( !v509 )
            goto LABEL_378;
          if ( !*(_DWORD *)(v428 + 24) )
            break;
          v510 = *(_QWORD *)(v428 + 32);
          if ( !v510 )
            goto LABEL_378;
          if ( v509->fields.condType == *(_DWORD *)(v510 + 40) )
          {
            v511 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v450 >= LODWORD(v511->_1.namespaze) )
              goto LABEL_379;
            v512 = *((_QWORD *)&v511->_1.byval_arg.data + v450);
            if ( !v512 )
              goto LABEL_378;
            if ( *(_DWORD *)(v512 + 16) <= 2u )
            {
              Master_WarQuestSelectionMaster = (__int64)v509[1].monitor;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v513 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v512 + 24);
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v513 )
                goto LABEL_378;
              v514 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0D964(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v513,
                v514,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
              v515 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_378;
              if ( (unsigned int)v450 >= LODWORD(v515->_1.namespaze) )
                goto LABEL_379;
              v516 = *((_QWORD *)&v515->_1.byval_arg.data + v450);
              if ( !v516 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = *(_QWORD *)(v516 + 32);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              System_Collections_Generic_List_VoiceCondType_Type___Add(
                (System_Collections_Generic_List_VoiceCondType_Type__o *)Master_WarQuestSelectionMaster,
                v509[1].fields.condType,
                (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
            }
            if ( LODWORD(v509[1].klass) == 2 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10418/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/,
                                                          0LL);
              condValue = (System_String_o *)Master_WarQuestSelectionMaster;
            }
            else
            {
              condValue = (System_String_o *)v509->fields.condValue;
            }
            v518 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v450 >= LODWORD(v518->_1.namespaze) )
              goto LABEL_379;
            v519 = *((_QWORD *)&v518->_1.byval_arg.data + v450);
            if ( !v519 )
              goto LABEL_378;
            Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(*(System_String_o **)(v519 + 40), 0LL);
            v526 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v450 >= LODWORD(v526->_1.namespaze) )
              goto LABEL_379;
            v527 = *((_QWORD *)&v526->_1.byval_arg.data + v450);
            if ( !v527 )
              goto LABEL_378;
            v528 = (System_String_o **)(v527 + 40);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              *v528 = condValue;
              v529 = (BattleServantConfConponent_o *)(v527 + 40);
              v530 = (System_Int32_array **)condValue;
            }
            else
            {
              v530 = (System_Int32_array **)System_String__Concat_43852188(
                                              *v528,
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              condValue,
                                              0LL);
              *v528 = (System_String_o *)v530;
              v529 = (BattleServantConfConponent_o *)v528;
            }
            sub_B0D840(v529, v530, v520, v521, v522, v523, v524, v525);
          }
          v507 = v439->max_length;
          if ( (int)++v508 >= v507 )
            goto LABEL_231;
        }
        goto LABEL_379;
      }
LABEL_231:
      v531 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      if ( (unsigned int)v450 >= LODWORD(v531->_1.namespaze) )
        goto LABEL_379;
      v532 = *((_QWORD *)&v531->_1.byval_arg.data + v450);
      v533 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v533 = QuestRestrictionInfo___c_TypeInfo;
      }
      v534 = v533->static_fields;
      _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v534->__9__82_3;
      if ( !_9__82_3 )
      {
        if ( (BYTE3(v533->vtable._0_Equals.methodPtr) & 4) != 0 && !v533->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v533);
          v534 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v536 = (Il2CppObject *)v534->__9;
        _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_RestrictionSlotDetailEntity__bool__TypeInfo,
                                                                                        v499,
                                                                                        v500);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_3,
          v536,
          Method_QuestRestrictionInfo___c__Setup_b__82_3__,
          (const MethodInfo_26189B8 *)Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__);
        v537 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v537->__9__82_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__82_3;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v537->__9__82_3,
          (System_Int32_array **)_9__82_3,
          v538,
          v539,
          v540,
          v541,
          v542,
          v543);
      }
      Master_WarQuestSelectionMaster = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         v439,
                                         (System_Func_T__bool__o *)_9__82_3,
                                         (const MethodInfo_17071E4 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
      if ( !v532 )
        goto LABEL_378;
      *(_BYTE *)(v532 + 48) = (Master_WarQuestSelectionMaster & 1) == 0;
      v544 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      namespaze = (unsigned int)v544->_1.namespaze;
      v405 = v655;
      if ( v450 >= namespaze )
        goto LABEL_379;
      v546 = &v544->_1.image + v450;
      v549 = v546[4];
      v547 = (__int64 *)(v546 + 4);
      v548 = v549;
      if ( !v549 )
        goto LABEL_378;
      v406 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
      if ( v548[4] == 1 && *((_BYTE *)v548 + 48) )
      {
        v655->fields.isNpcEditablePos = 1;
        namespaze = (unsigned int)v544->_1.namespaze;
      }
      if ( v450 >= namespaze )
        goto LABEL_379;
      v550 = *v547;
      if ( !v550 )
        goto LABEL_378;
      v456 = questIdb;
      *(_BYTE *)(v550 + 49) = *(_DWORD *)(v428 + 24) != 0;
LABEL_251:
      ++v424;
    }
    Master_WarQuestSelectionMaster = (__int64)v656;
    if ( !v656 )
      goto LABEL_378;
    v555 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v656,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    v405->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v555;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v405->fields.restrictionMessageEntities,
      v555,
      v556,
      v557,
      v558,
      v559,
      v560,
      v561);
    slotInfos = v405->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_378;
    v563 = slotInfos->max_length;
    if ( v563 >= 1 )
    {
      v564 = 0;
      v565 = 0;
      v566 = 0;
      v567 = 0;
      while ( v564 < v563 )
      {
        v568 = slotInfos->m_Items[v564];
        if ( !v568 )
          goto LABEL_378;
        switch ( v568->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v567;
            break;
          case 1:
            ++v566;
            break;
          case 2:
            ++v565;
            break;
          default:
            break;
        }
        if ( (int)++v564 >= v563 )
          goto LABEL_277;
      }
LABEL_379:
      v624 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v624, 0LL);
    }
    v567 = 0;
    v566 = 0;
    v565 = 0;
LABEL_277:
    if ( v565 == 0 && (i & 1) != 0 )
      v405->fields.isNoSupportBattle = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                                (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                                                v405->fields.questId,
                                                v405->fields.questPhase,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    v569 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
    if ( v569 < 1 )
    {
LABEL_290:
      v572 = 0;
    }
    else
    {
      v570 = 0;
      while ( 1 )
      {
        if ( v570 >= v569 )
          goto LABEL_379;
        v571 = *(_QWORD *)(Master_WarQuestSelectionMaster + 8LL * (int)v570 + 32);
        if ( !v571 )
          goto LABEL_378;
        if ( *(_BYTE *)(v571 + 97) )
          break;
        if ( (int)++v570 >= v569 )
          goto LABEL_290;
      }
      v572 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)v664;
    if ( !v664 )
      goto LABEL_378;
    v573 = QuestEntity__HasFlag_23244236((QuestEntity_o *)v664, 0x10000000LL, questPhase, 0LL)
        || (v566 > 0) & (unsigned __int8)v572 & (v567 > 0);
    v405->fields.isNpcMultipleBattle = v573;
    Master_WarQuestSelectionMaster = (__int64)v664;
    if ( !v664 )
      goto LABEL_378;
    v574 = QuestEntity__HasFlag_23244236((QuestEntity_o *)v664, 0x20000000LL, questPhase, 0LL)
        || (v567 == 0) & (unsigned __int8)v572 & (v566 > 0);
    Master_WarQuestSelectionMaster = (__int64)v405->fields.restrictionBaseEntity;
    v405->fields.isNpcOnlyBattle = v574;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_1708FC8 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v576 = 2;
      else
        v576 = 1;
      DeckMemberMax = v405->fields.servantNumMax;
      v405->fields.servantNumMin = v576;
      if ( !DeckMemberMax )
      {
        v578 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v578 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v578->static_fields->DeckMemberMax;
        v405->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v405->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v405->fields.isNpcMultipleBattle )
        v405->fields.myServantNumMax = v567;
      goto LABEL_324;
    }
    v405->fields.myServantNumMax = v567;
    if ( v567 == 1 && DeckMemberMax == 1 )
    {
      Master_WarQuestSelectionMaster = (__int64)v405->fields.restrictionSlotDetailDictionary;
      v405->fields.isFixedMyServantSingle = 1;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (__int64)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                                                    1,
                                                    (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_324;
        v579 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_WarQuestSelectionMaster
                                                                                          + 24);
        if ( !v579 )
          goto LABEL_324;
        if ( !(_DWORD)v579 )
          goto LABEL_379;
        v580 = *(_QWORD *)(Master_WarQuestSelectionMaster + 32);
        if ( v580 )
        {
          Master_WarQuestSelectionMaster = *(_QWORD *)(v580 + 40);
          if ( Master_WarQuestSelectionMaster )
          {
            v581 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
            v582 = (System_Int32_array **)sub_B0D964(v581, int___TypeInfo);
            v405->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)v582;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v405->fields.fixedMyServantSingleIndividualities,
              v582,
              v583,
              v584,
              v585,
              v586,
              v587,
              v588);
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
                                       (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v405->fields.restrictionSlotDictionary;
    v405->fields.isSupportOnly = (int)Master_WarQuestSelectionMaster > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = (__int64)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                                restrictionSlotDictionary,
                                                (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      &v657,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_22CF168 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v660 = v657;
    do
    {
      v590 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
               &v660,
               (const MethodInfo_2811954 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v590 )
        break;
      if ( !v660.fields.currentValue )
        sub_B0D97C(v590);
      monitor = (int)v660.fields.currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v592 = 0;
        while ( 1 )
        {
          if ( v592 >= monitor )
          {
            v625 = sub_B0D9A8(v590);
            sub_B0D948(v625, 0LL);
          }
          v593 = *((_QWORD *)&v660.fields.currentValue[2].klass + (int)v592);
          if ( !v593 )
            sub_B0D97C(v590);
          if ( *(_DWORD *)(v593 + 28) == 1 )
            break;
          if ( (int)++v592 >= monitor )
            goto LABEL_336;
        }
        v405->fields.isSupportOnly = 0;
        break;
      }
LABEL_336:
      ;
    }
    while ( v405->fields.isSupportOnly );
    v658 = 3158;
    v659 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v660,
      (const MethodInfo_2811950 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    if ( v658 == 3158 )
      v659 = 0;
    v596 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v594, v595);
    System_Text_StringBuilder___ctor(v596, 0LL);
    v599 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v597, v598);
    System_Text_StringBuilder___ctor(v599, 0LL);
    v600 = *v628;
    if ( !*v628 )
      goto LABEL_378;
    v601 = v600->max_length;
    if ( v601 >= 1 )
    {
      v602 = 0;
      while ( 1 )
      {
        if ( v602 >= v601 )
          goto LABEL_379;
        v603 = v600->m_Items[v602];
        if ( !v603 )
          goto LABEL_378;
        Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(v603->fields.summary, 0LL);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          break;
LABEL_367:
        v601 = v600->max_length;
        if ( (int)++v602 >= v601 )
          goto LABEL_368;
      }
      type = v603->fields.type;
      if ( type == 10 || type == 2 )
      {
        v606 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v603->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_378;
          v606 = 1;
          v607 = targetVals2->max_length == 1;
LABEL_355:
          if ( (v607 & v606) != 0 )
          {
            if ( v405->fields.isRestriction )
            {
              if ( !v599 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_42155400(v599, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
            }
            else if ( !v599 )
            {
              goto LABEL_378;
            }
            Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42155400(
                                                        v599,
                                                        v603->fields.summary,
                                                        0LL);
            v405->fields.isRestriction = 1;
          }
          if ( v606 )
          {
            if ( v405->fields.isRestriction )
            {
              if ( !v596 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_42155400(v596, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
            }
            else if ( !v596 )
            {
              goto LABEL_378;
            }
            Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42155400(
                                                        v596,
                                                        v603->fields.summary,
                                                        0LL);
            v405->fields.isRestriction = 1;
          }
          goto LABEL_367;
        }
        v606 = 0;
      }
      v607 = 1;
      goto LABEL_355;
    }
LABEL_368:
    if ( !v599 )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = System_Text_StringBuilder__get_Length(v599, 0LL);
    if ( (int)Master_WarQuestSelectionMaster >= 1 )
    {
      v608 = (System_Int32_array **)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v599->klass->vtable._3_ToString.method)(
                                      v599,
                                      v599->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (BattleServantConfConponent_c *)v608;
      sub_B0D840(p_confirmRestrictionMessage, v608, v609, v610, v611, v612, v613, v614);
    }
    if ( !v596 )
      goto LABEL_378;
    if ( System_Text_StringBuilder__get_Length(v596, 0LL) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v615 = LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v616 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v596->klass->vtable._3_ToString.method)(
                                  v596,
                                  v596->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v617 = (System_Int32_array **)System_String__Concat_43852188(v615, (System_String_o *)StringLiteral_26/*"\n"*/, v616, 0LL);
      p_restrictionMessage->klass = (BattleServantConfConponent_c *)v617;
      sub_B0D840(p_restrictionMessage, v617, v618, v619, v620, v621, v622, v623);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v267);
  }
}


void __fastcall QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Text_StringBuilder_o *v21; // x0
  __int64 myServantOrNpcRestrictionEntityList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x23
  int max_length; // w8
  unsigned int v31; // w28
  RestrictionEntity_o *v32; // x24
  Il2CppObject *v33; // x0
  struct System_Int32_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BalanceConfig_c *v41; // x0
  struct System_Int32_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Int32_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_Int32_array *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_List_int__o *v70; // x21
  struct System_Int32_array *v71; // x8
  _BOOL4 isRestriction; // w9
  BalanceConfig_c *v73; // x0
  struct System_Int32_array *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *v82; // x8
  int32_t v83; // w8
  struct System_Int32_array *v84; // x8
  __int64 v85; // x9
  System_Collections_Generic_List_int__o *specifiedPositionList; // x21
  __int64 v87; // x9
  struct System_String_o *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_o *v95; // x0
  struct System_String_o *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  const MethodInfo *v103; // x4
  __int64 v104; // x20
  __int64 v105; // x20
  const MethodInfo *v106; // x4
  const MethodInfo *v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  MethodInfo *v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  int64_t v114; // x10
  __int64 v115; // x8
  const MethodInfo *v116; // x1
  struct System_Int32_array *v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  int64_t flag; // x8
  bool HasFlag_23244236; // w0
  bool v126; // w0
  struct System_Int32_array *v127; // x20
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  bool v134; // w0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  __int64 v147; // x0
  BattleServantConfConponent_o *p_uniqueIndividualityEntity; // [xsp+18h] [xbp-C8h]
  BattleServantConfConponent_o *p_myServantNumRestrictionEntity; // [xsp+28h] [xbp-B8h]
  BattleServantConfConponent_o *p_servantNumRestrictionEntity; // [xsp+30h] [xbp-B0h]
  BattleServantConfConponent_o *p_uniqueSvtRestrictionEntity; // [xsp+58h] [xbp-88h]
  BattleServantConfConponent_o *p_totalCostRestrictionEntity; // [xsp+68h] [xbp-78h]
  struct System_Int32_array **p_deckSvtIdList; // [xsp+70h] [xbp-70h]
  QuestRestrictionInfoEntity_o *v154; // [xsp+78h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v155; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_4217C88 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v16);
    sub_B0D8A4(&StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v17);
    byte_4217C88 = 1;
  }
  v155 = 0LL;
  entity = 0LL;
  v154 = 0LL;
  v18 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, method, v2);
  System_Text_StringBuilder___ctor(v18, 0LL);
  v21 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v19, v20);
  System_Text_StringBuilder___ctor(v21, 0LL);
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
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
        goto LABEL_128;
      v32 = restrictionEntityList->m_Items[v31];
      if ( !v32 )
        goto LABEL_127;
      switch ( v32->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (BattleServantConfConponent_c *)v32;
          sub_B0D840(p_totalCostRestrictionEntity, (System_Int32_array **)v32, v23, v24, v25, v26, v27, v28);
          goto LABEL_53;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v32;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
            (System_Int32_array **)v32,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          this->fields.isSupportOnly = 1;
          goto LABEL_53;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (BattleServantConfConponent_c *)v32;
          sub_B0D840(p_uniqueSvtRestrictionEntity, (System_Int32_array **)v32, v23, v24, v25, v26, v27, v28);
          v73 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v73 = BalanceConfig_TypeInfo;
          }
          v74 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v73->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v74;
          sub_B0D840(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v74,
            v75,
            v76,
            v77,
            v78,
            v79,
            v80);
          this->fields.isUniqueServant = 1;
          goto LABEL_53;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v32;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (System_Int32_array **)v32,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v32, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.supportPositionList,
            (System_Int32_array **)DeckPositionList,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_53;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v32;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (System_Int32_array **)v32,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_53;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v32;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (System_Int32_array **)v32,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_53;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v32;
          sub_B0D840(p_servantNumRestrictionEntity, (System_Int32_array **)v32, v23, v24, v25, v26, v27, v28);
          targetVals = v32->fields.targetVals;
          if ( v32->fields.rangeType == 5 )
          {
            if ( !targetVals || (int)targetVals->max_length < 2 )
              goto LABEL_53;
            this->fields.servantNumMin = targetVals->m_Items[1];
            v82 = v32->fields.targetVals;
            if ( !v82 )
              goto LABEL_127;
            if ( v82->max_length <= 1 )
              goto LABEL_128;
            v83 = v82->m_Items[2];
          }
          else
          {
            if ( !targetVals )
              goto LABEL_53;
            v87 = *(_QWORD *)&targetVals->max_length;
            if ( !v87 )
              goto LABEL_53;
            if ( !(_DWORD)v87 )
              goto LABEL_128;
            v83 = targetVals->m_Items[1];
          }
          this->fields.servantNumMax = v83;
LABEL_53:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v31 >= max_length )
            goto LABEL_54;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v32;
          sub_B0D840(p_myServantNumRestrictionEntity, (System_Int32_array **)v32, v23, v24, v25, v26, v27, v28);
          v84 = v32->fields.targetVals;
          if ( !v84 )
            goto LABEL_53;
          v85 = *(_QWORD *)&v84->max_length;
          if ( !v85 )
            goto LABEL_53;
          if ( !(_DWORD)v85 )
            goto LABEL_128;
          this->fields.myServantNumMax = v84->m_Items[1];
          goto LABEL_53;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (__int64)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = RestrictionEntity__GetSpecifiedPosition(v32, 0LL);
          if ( !specifiedPositionList )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            specifiedPositionList,
            myServantOrNpcRestrictionEntityList,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_53;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v32;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (System_Int32_array **)v32,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          this->fields.isNeedStarting = 1;
          goto LABEL_53;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (BattleServantConfConponent_c *)v32;
          sub_B0D840(p_uniqueIndividualityEntity, (System_Int32_array **)v32, v23, v24, v25, v26, v27, v28);
          myServantOrNpcRestrictionEntityList = (__int64)v32->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          v33 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          v34 = (struct System_Int32_array *)sub_B0D964(v33, int___TypeInfo);
          this->fields.uniqueIndividualitys = v34;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.uniqueIndividualitys,
            (System_Int32_array **)v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          v41 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v41 = BalanceConfig_TypeInfo;
          }
          v42 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v41->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v42;
          sub_B0D840(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
          v49 = (struct System_Int32_array *)sub_B0D8BC(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v49;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.deckLimitCountList,
            (System_Int32_array **)v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          v56 = (struct System_Int32_array *)sub_B0D8BC(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v56;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
            (System_Int32_array **)v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_53;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (__int64)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          v70 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = RestrictionEntity__GetSpecifiedPosition(v32, 0LL);
          if ( !v70 )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            v70,
            myServantOrNpcRestrictionEntityList,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_53;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v71 = v32->fields.targetVals;
          if ( !v71 )
            goto LABEL_127;
          if ( !v71->max_length )
            goto LABEL_128;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v71->m_Items[1];
          if ( isRestriction )
          {
LABEL_24:
            if ( !v18 )
              goto LABEL_127;
            System_Text_StringBuilder__Append_42155400(v18, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
          }
          else
          {
LABEL_27:
            if ( !v18 )
              goto LABEL_127;
          }
          myServantOrNpcRestrictionEntityList = (__int64)System_Text_StringBuilder__Append_42155400(
                                                           v18,
                                                           v32->fields.name,
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
    if ( !v18 )
      goto LABEL_127;
    v88 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                      v18,
                                      v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v88;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
      (System_Int32_array **)v88,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v96 = System_String__Concat_43852188(
            v95,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            this->fields.confirmRestrictionMessage,
            0LL);
    this->fields.restrictionMessage = v96;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
      (System_Int32_array **)v96,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
  }
  myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v155,
    this->fields.questId,
    this->fields.questPhase,
    v103);
  v104 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v104 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v105 = **(_QWORD **)(v104 + 192);
  if ( (*(_BYTE *)(v105 + 306) & 1) == 0 )
    sub_AA65A4(v105);
  myServantOrNpcRestrictionEntityList = **(_QWORD **)(v105 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v154,
         this->fields.questId,
         this->fields.questPhase,
         v106) )
  {
    myServantOrNpcRestrictionEntityList = (__int64)v154;
    if ( !v154 )
      goto LABEL_127;
    v114 = v154->fields.flag & 0x400000000100000LL;
    this->fields.isNoSupportBattle = v114 != 0;
    if ( v114
      || (v115 = *(_QWORD *)(myServantOrNpcRestrictionEntityList + 24),
          this->fields.isSupportOnlyForceBattle = (v115 & 0x80000) != 0) )
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
                                              v110);
      if ( !v154 )
        goto LABEL_127;
      flag = v154->fields.flag;
      this->fields.isAllOutBattle = (flag & 0x400000000000000LL) != 0;
      if ( (flag & 0x400000000000000LL) != 0 )
      {
        myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !myServantOrNpcRestrictionEntityList )
          goto LABEL_127;
        myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !myServantOrNpcRestrictionEntityList )
          goto LABEL_127;
        this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                             (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                             this->fields.questId,
                                             17,
                                             0LL);
      }
      if ( entity )
        this->fields.isFatigure = QuestEntity__HasFlag_23244236(
                                    (QuestEntity_o *)entity,
                                    0x200000LL,
                                    this->fields.questPhase,
                                    0LL);
      myServantOrNpcRestrictionEntityList = (__int64)v155;
      if ( v155 )
      {
        this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v155, 0LL);
        myServantOrNpcRestrictionEntityList = (__int64)v155;
        if ( !v155 )
          goto LABEL_127;
        myServantOrNpcRestrictionEntityList = QuestPhaseEntity__GetSupportInitDeckIndex(v155, 0LL);
        this->fields.supportInitIndex = myServantOrNpcRestrictionEntityList;
      }
      else
      {
        this->fields.correctionIconId = -1;
      }
      if ( v154 )
      {
        this->fields.isNotSingleSupportOnly = (v154->fields.flag & 0x1000000000000000LL) != 0;
        return;
      }
LABEL_127:
      sub_B0D97C(myServantOrNpcRestrictionEntityList);
    }
    if ( (*(_BYTE *)(myServantOrNpcRestrictionEntityList + 27) & 1) != 0 )
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(
                                    (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                                    v107);
    myServantOrNpcRestrictionEntityList = sub_B0D8BC(int___TypeInfo, 1LL);
    if ( !v154 )
      goto LABEL_127;
    v117 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = QuestRestrictionInfoEntity__GetSingleForceSvtId(v154, v116);
    if ( !v117 )
      goto LABEL_127;
    if ( v117->max_length )
    {
      v117->m_Items[1] = myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v117;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
        (System_Int32_array **)v117,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
      myServantOrNpcRestrictionEntityList = (__int64)v154;
      if ( !v154 )
        goto LABEL_127;
      goto LABEL_80;
    }
LABEL_128:
    v147 = sub_B0D9A8(myServantOrNpcRestrictionEntityList);
    sub_B0D948(v147, 0LL);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_23244236((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (__int64)entity;
      if ( !entity )
        goto LABEL_127;
      HasFlag_23244236 = QuestEntity__HasFlag_23244236(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_23244236;
      if ( !HasFlag_23244236 )
      {
        myServantOrNpcRestrictionEntityList = (__int64)entity;
        if ( !entity )
          goto LABEL_127;
        v126 = QuestEntity__HasFlag_23244236((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v126;
        if ( !v126 )
        {
          if ( v155 )
          {
            myServantOrNpcRestrictionEntityList = (__int64)entity;
            if ( !entity )
              goto LABEL_127;
            if ( QuestEntity__HasFlag_23244236((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (__int64)v155;
              if ( !v155 )
                goto LABEL_127;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v155, 0LL);
            }
            myServantOrNpcRestrictionEntityList = sub_B0D8BC(int___TypeInfo, 1LL);
            if ( !v155 )
              goto LABEL_127;
            v127 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = QuestPhaseEntity__GetSingleForceSvtId(v155, 0LL);
            if ( !v127 )
              goto LABEL_127;
            if ( !v127->max_length )
              goto LABEL_128;
            v127->m_Items[1] = myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v127;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
              (System_Int32_array **)v127,
              v128,
              v129,
              v130,
              v131,
              v132,
              v133);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isFatigure = QuestEntity__HasFlag_23244236(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    v134 = QuestEntity__HasFlag_23244236((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v134;
    if ( v134 )
    {
      myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_127;
      myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_23244236(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_23244236(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_23244236(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_23244236(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_23244236(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v155 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v155, 0LL);
    myServantOrNpcRestrictionEntityList = (__int64)v155;
    if ( !v155 )
      goto LABEL_127;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v155,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    myServantOrNpcRestrictionEntityList = (__int64)v155;
    if ( !v155 )
      goto LABEL_127;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v155, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountSvtIds,
      0LL,
      v108,
      v109,
      (System_Boolean_array **)v110,
      v111,
      v112,
      v113);
    this->fields.overwriteLimitCounts = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCounts,
      0LL,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountIconIds,
      0LL,
      v141,
      v142,
      v143,
      v144,
      v145,
      v146);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x20
  void *v13; // x1

  if ( (byte_42124E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v4);
    sub_B0D8A4(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_42124E8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_int____TypeInfo,
                                                                                                 v7,
                                                                                                 v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v9;
  sub_B0D840(&this->fields.individualityList, v9);
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_Restriction_RangeType__TypeInfo,
                                                                   v10,
                                                                   v11);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v12;
  sub_B0D840(&this->fields.rangeTypeList, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.summary, v13);
  *(_WORD *)&this->fields.isMoved = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0

  if ( (byte_42124E7 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRestrictionInfo___c_TypeInfo, v1);
    byte_42124E7 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestRestrictionInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall QuestRestrictionInfo___c___ctor(QuestRestrictionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type == 2;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass167_0___ctor(
        QuestRestrictionInfo___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass167_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass167_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass168_0___ctor(
        QuestRestrictionInfo___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass168_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass168_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass169_0___ctor(
        QuestRestrictionInfo___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass169_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass169_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass170_0___ctor(
        QuestRestrictionInfo___c__DisplayClass170_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass170_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass170_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass171_0___ctor(
        QuestRestrictionInfo___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass171_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass171_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass172_0___ctor(
        QuestRestrictionInfo___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass172_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass172_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0LL )
    sub_B0D97C(this);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass175_0___ctor(
        QuestRestrictionInfo___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass175_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass175_0_o *this,
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
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B0D97C(this);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass176_0___ctor(
        QuestRestrictionInfo___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass176_0___GetMyServantOrSupportTargetPos_b__0(
        QuestRestrictionInfo___c__DisplayClass176_0_o *this,
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
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B0D97C(this);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass189_0___ctor(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass189_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}