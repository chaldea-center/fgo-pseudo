void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


void __fastcall QuestRestrictionInfo___ctor_34132448(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct RestrictionEntity_array *RestrictionList_34132656; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t v19; // w1
  const MethodInfo *v20; // x4

  if ( (byte_42B4906 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4906 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v10);
  }
  RestrictionList_34132656 = QuestRestrictionMaster__getRestrictionList_34132656(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               v11);
  this->fields.restrictionEntityList = RestrictionList_34132656;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)RestrictionList_34132656,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  QuestRestrictionInfo__Setup(this, v19, questId, questPhase, v20);
}


void __fastcall QuestRestrictionInfo___ctor_34142072(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
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

  if ( (byte_42B4907 & 1) == 0 )
  {
    sub_B52984(&QuestRestrictionEntity___TypeInfo);
    sub_B52984(&RestrictionEntity___TypeInfo);
    byte_42B4907 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v11 = (struct QuestRestrictionEntity_array *)sub_B5299C(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionEntityList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( overwriteRestiction )
  {
    v18 = sub_B5299C(RestrictionEntity___TypeInfo, 1LL);
    if ( !v18 )
      sub_B52A5C(0LL, v19);
    v20 = v18;
    v21 = sub_B52A44(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v21 )
    {
      v36 = sub_B52A7C(0LL);
      sub_B52A28(v36, 0LL);
    }
    if ( !*(_DWORD *)(v20 + 24) )
    {
      v37 = sub_B52A88(v21);
      sub_B52A28(v37, 0LL);
    }
    *(_QWORD *)(v20 + 32) = overwriteRestiction;
    sub_B52920(
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
    v20 = sub_B5299C(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v20;
  sub_B52920(
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
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x1
  bool *v22; // x23
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_bool____o *myServantPositionsList; // x21
  __int64 v25; // x24
  int size; // w8
  System_Boolean_array *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FixedServantPositionSvtIdList; // x0
  BalanceConfig_c *v29; // x0
  struct System_Collections_Generic_List_bool____o *v30; // x21
  System_Boolean_array *v31; // x8
  _BOOL4 v32; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  struct System_Collections_Generic_List_bool____o *v34; // x21
  System_Boolean_array *v35; // x8
  bool *v36; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  bool *v38; // x23
  struct System_Collections_Generic_List_bool____o *positionsList; // x21
  __int64 v40; // x24
  int v41; // w8
  System_Boolean_array *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FixedPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct System_Collections_Generic_List_bool____o *v45; // x21
  System_Boolean_array *v46; // x8
  _BOOL4 v47; // w8
  __int64 v48; // x0
  bool *v49; // [xsp+0h] [xbp-60h]
  System_Collections_Generic_IEnumerable_TSource__o *second; // [xsp+8h] [xbp-58h]

  if ( (byte_42B4927 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B52984(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4927 = 1;
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
             (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v29 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v29 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v29->static_fields->DeckMainMemberMax <= num;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  v49 = isRestrictionNeedStarting;
  v22 = isRestrictionServantPos;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimit, 0LL);
  second = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
  if ( !this->fields.isFixedMyServantPosition )
    goto LABEL_44;
  myServantPositionsList = this->fields.myServantPositionsList;
  if ( !myServantPositionsList )
    goto LABEL_17;
  v25 = 0LL;
  while ( 1 )
  {
    size = myServantPositionsList->fields._size;
    if ( (int)v25 >= size )
      break;
    if ( size <= (unsigned int)v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v27 = myServantPositionsList->fields._items->m_Items[v25];
    if ( !v27 )
      goto LABEL_17;
    if ( v27->max_length <= num )
      goto LABEL_80;
    if ( v27->m_Items[num + 4] )
      goto LABEL_25;
    myServantPositionsList = this->fields.myServantPositionsList;
    ++v25;
    if ( !myServantPositionsList )
      goto LABEL_17;
  }
  LODWORD(v25) = 0;
LABEL_25:
  if ( isFollower )
  {
    v30 = this->fields.myServantPositionsList;
    if ( !v30 )
      goto LABEL_17;
    if ( v30->fields._size <= (unsigned int)v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v31 = v30->fields._items->m_Items[(int)v25];
    if ( !v31 )
      goto LABEL_17;
    if ( v31->max_length <= num )
      goto LABEL_80;
    v32 = v31->m_Items[num + 4];
  }
  else
  {
    Instance = (DataManager_o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(this, (int32_t)v21, v23);
    if ( !Instance )
      goto LABEL_44;
    v33 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
            second,
            (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v33,
                                  (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
    v34 = this->fields.myServantPositionsList;
    if ( !v34 )
      goto LABEL_17;
    if ( v34->fields._size <= (unsigned int)v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v35 = v34->fields._items->m_Items[(int)v25];
    if ( !v35 )
      goto LABEL_17;
    if ( v35->max_length <= num )
      goto LABEL_80;
    v32 = v35->m_Items[num + 4];
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_44;
      *isFixedServantPositionAgreement = 1;
      goto LABEL_43;
    }
  }
  if ( !v32 )
    goto LABEL_44;
  *isFixedServantPositionRestriction = 1;
  *isFixedServantPositionAgreement = 0;
LABEL_43:
  *isRestrictionMyServantPos = 1;
LABEL_44:
  if ( *isFixedServantPositionRestriction )
    return;
  v36 = v22;
  if ( this->fields.isNeedStarting )
  {
    Instance = (DataManager_o *)QuestRestrictionInfo__GetNeedStartingSvtIdList(this, v21);
    if ( Instance )
    {
      v37 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
              second,
              (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___);
      Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                    v37,
                                    (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v38 = v49;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v38 = v49;
        }
        *isFixedServantPositionRestriction = SLODWORD(Instance[1].fields.saveNameList[4].klass) <= num;
        *isFixedServantPositionAgreement = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax > num;
        *v38 = 1;
      }
    }
  }
  if ( *isFixedServantPositionRestriction || !this->fields.isFixedPosition )
    return;
  positionsList = this->fields.positionsList;
  if ( !positionsList )
    goto LABEL_17;
  v40 = 0LL;
  while ( 1 )
  {
    v41 = positionsList->fields._size;
    if ( (int)v40 >= v41 )
      break;
    if ( v41 <= (unsigned int)v40 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v42 = positionsList->fields._items->m_Items[v40];
    if ( !v42 )
      goto LABEL_17;
    if ( v42->max_length <= num )
      goto LABEL_80;
    if ( v42->m_Items[num + 4] )
      goto LABEL_68;
    positionsList = this->fields.positionsList;
    ++v40;
    if ( !positionsList )
      goto LABEL_17;
  }
  LODWORD(v40) = 0;
LABEL_68:
  FixedPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedPositionSvtIdList(
                                                                                  this,
                                                                                  (int32_t)v21,
                                                                                  v23);
  if ( !FixedPositionSvtIdList )
    return;
  v44 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          second,
          (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v44,
                                (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
  v45 = this->fields.positionsList;
  if ( !v45 )
    goto LABEL_17;
  if ( v45->fields._size <= (unsigned int)v40 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v46 = v45->fields._items->m_Items[(int)v40];
  if ( !v46 )
LABEL_17:
    sub_B52A5C(Instance, v21);
  if ( v46->max_length <= num )
  {
LABEL_80:
    v48 = sub_B52A88(Instance);
    sub_B52A28(v48, 0LL);
  }
  v47 = v46->m_Items[num + 4];
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v47 )
    {
      *isFixedServantPositionAgreement = 1;
LABEL_79:
      *v36 = 1;
    }
  }
  else if ( v47 )
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
    v9 = sub_B52A88(this);
    sub_B52A28(v9, 0LL);
  }
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(
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
  if ( (byte_42B4930 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B4930 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_22:
    sub_B52A5C(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v18, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_17;
    }
LABEL_21:
    v16 = sub_B52A88(this);
    sub_B52A28(v16, 0LL);
  }
LABEL_17:
  if ( !(_DWORD)dialogMessageInfoDictionary )
    goto LABEL_21;
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
  __int64 v9; // x9
  __int64 v10; // x22
  __int64 v11; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8
  __int64 v14; // x0

  if ( (byte_42B492F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B492F = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds )
  {
    if ( this->fields.overwriteLimitCounts )
    {
      v9 = *(_QWORD *)&overwriteLimitCountSvtIds->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = (int)v9;
        v11 = 8LL;
        do
        {
          if ( v11 - 8 >= (unsigned __int64)overwriteLimitCountSvtIds->max_length )
          {
LABEL_18:
            v14 = sub_B52A88(v6);
            sub_B52A28(v14, 0LL);
          }
          if ( *((_DWORD *)&overwriteLimitCountSvtIds->obj.klass + v11) == svtId )
          {
            overwriteLimitCounts = this->fields.overwriteLimitCounts;
            if ( !overwriteLimitCounts )
              break;
            if ( v11 - 8 >= (unsigned __int64)overwriteLimitCounts->max_length )
              goto LABEL_18;
            if ( !v5 )
              break;
            System_Collections_Generic_List_int___Add(
              v5,
              *((_DWORD *)&overwriteLimitCounts->obj.klass + v11),
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( v11 - 7 >= v10 )
            goto LABEL_16;
          overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
          ++v11;
        }
        while ( overwriteLimitCountSvtIds );
LABEL_15:
        sub_B52A5C(v6, v7);
      }
    }
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v9; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x9
  __int64 v11; // x22
  QuestRestrictionInfo_SlotInfo_o *v12; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int max_length; // w8
  unsigned int v15; // w22
  __int64 v16; // x23
  RestrictionWholeEntity_o *v17; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  unsigned __int64 v20; // x27
  int v21; // w8
  unsigned int v22; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v23; // x8
  QuestRestrictionInfo_SlotInfo_o *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v27; // x8
  struct QuestRestrictionInfo___c_StaticFields *v28; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__104_0; // x20
  Il2CppObject *v30; // x21
  struct QuestRestrictionInfo___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  QuestRestrictionInfo___c_c *v39; // x8
  struct QuestRestrictionInfo___c_StaticFields *v40; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__104_2; // x20
  Il2CppObject *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct QuestRestrictionInfo___c_StaticFields *v49; // x0
  BattleServantConfConponent_o *p__9__104_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v51; // x8
  QuestRestrictionInfo_SlotInfo_o *v52; // x8
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x9
  Il2CppObject *v54; // x21
  struct QuestRestrictionInfo___c_StaticFields *v55; // x0
  System_Collections_Generic_IEnumerable_string__o *v56; // x0
  __int64 v57; // x0

  v8 = this;
  if ( (byte_42B4919 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_B52984(&Method_System_Func_RestrictionEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_RestrictionEntity__string___ctor__);
    sub_B52984(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_B52984(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_0__);
    sub_B52984(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_1__);
    sub_B52984(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_2__);
    sub_B52984(&QuestRestrictionInfo___c_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4919 = 1;
  }
  if ( !v8->fields.restrictionBaseEntity )
  {
    RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                                                                          v8,
                                                                                          *(const MethodInfo **)&initPos);
    v27 = QuestRestrictionInfo___c_TypeInfo;
    if ( initPos < 1 )
    {
      if ( (WORD1(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v27 = QuestRestrictionInfo___c_TypeInfo;
      }
      static_fields = v27->static_fields;
      _9__104_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__104_2;
      if ( _9__104_2 )
        goto LABEL_70;
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__104_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__104_2,
        v54,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_2__,
        (const MethodInfo_2BCA808 *)Method_System_Func_RestrictionEntity__string___ctor__);
      v55 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v55->__9__104_2 = (struct System_Func_RestrictionEntity__string__o *)_9__104_2;
      p__9__104_2 = (BattleServantConfConponent_o *)&v55->__9__104_2;
    }
    else
    {
      if ( (WORD1(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v27 = QuestRestrictionInfo___c_TypeInfo;
      }
      v28 = v27->static_fields;
      _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v28->__9__104_0;
      if ( !_9__104_0 )
      {
        if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v28 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)v28->__9;
        _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__104_0,
          v30,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v31 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v31->__9__104_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__104_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v31->__9__104_0,
          (System_Int32_array **)_9__104_0,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__104_0,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v39 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = v38;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v39 = QuestRestrictionInfo___c_TypeInfo;
      }
      v40 = v39->static_fields;
      _9__104_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v40->__9__104_1;
      if ( _9__104_2 )
        goto LABEL_70;
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v40 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)v40->__9;
      _9__104_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__104_2,
        v42,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_1__,
        (const MethodInfo_2BCA808 *)Method_System_Func_RestrictionEntity__string___ctor__);
      v49 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v49->__9__104_1 = (struct System_Func_RestrictionEntity__string__o *)_9__104_2;
      p__9__104_2 = (BattleServantConfConponent_o *)&v49->__9__104_1;
    }
    sub_B52920(p__9__104_2, (System_Int32_array **)_9__104_2, v43, v44, v45, v46, v47, v48);
LABEL_70:
    v56 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                RestrictionMessageEntityList,
                                                                (System_Func_TSource__TResult__o *)_9__104_2,
                                                                (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    return System_String__Join_44623760((System_String_o *)StringLiteral_26/*"\n"*/, v56, 0LL);
  }
  v9 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_73;
    if ( v9 >= slotInfos->max_length )
      goto LABEL_72;
    v11 = v9;
    v12 = slotInfos->m_Items[v9];
    if ( !v12 )
      goto LABEL_73;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v12->fields.summary, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v51 = v8->fields.slotInfos;
      if ( v51 )
      {
        if ( (unsigned int)v11 >= v51->max_length )
          goto LABEL_72;
        v52 = v51->m_Items[v11];
        if ( v52 )
          return v52->fields.summary;
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
    sub_B52A5C(this, *(_QWORD *)&initPos);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return v8->fields.confirmRestrictionMessage;
  v15 = 0;
  v16 = pos - 1;
  while ( 1 )
  {
    if ( v15 >= max_length )
      goto LABEL_72;
    v17 = restrictionWholeEntities->m_Items[v15];
    if ( !v17 )
      goto LABEL_73;
    type = v17->fields.type;
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
        v23 = v8->fields.slotInfos;
        if ( !v23 )
          goto LABEL_73;
        if ( (unsigned int)v16 >= v23->max_length )
          goto LABEL_72;
        v24 = v23->m_Items[v16];
        if ( !v24 )
          goto LABEL_73;
        if ( v24->fields.slotType != 5 )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v17->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v17->fields.summary;
        }
      }
    }
    targetVals2 = v17->fields.targetVals2;
    if ( !targetVals2 )
      goto LABEL_73;
    if ( (unsigned int)*(_QWORD *)&targetVals2->max_length == 1 )
    {
      v20 = 0LL;
      v21 = 1;
      v22 = 1;
      while ( v20 < v22 )
      {
        if ( targetVals2->m_Items[v20 + 1] == pos )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v17->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v17->fields.summary;
          v21 = targetVals2->max_length;
        }
        ++v20;
        v22 = v21;
        if ( (__int64)v20 >= v21 )
          goto LABEL_37;
      }
LABEL_72:
      v57 = sub_B52A88(this);
      sub_B52A28(v57, 0LL);
    }
LABEL_37:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v15 >= max_length )
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
      v11 = sub_B52A88(this);
      sub_B52A28(v11, 0LL);
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
  System_Collections_Generic_List_int__o *v3; // x20
  int64_t IsDisplayedRestrictionDialog; // x0
  __int64 v5; // x1
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x22
  int v7; // w8
  int i; // w23
  RestrictionMessageEntity_o *v9; // x25
  int32_t frequencyType; // w8
  UserQuestMaster_o *v11; // x21
  UserQuestEntity_o *v12; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w23
  int v15; // w24
  int32_t v16; // w21
  int32_t *v17; // x27
  int32_t v18; // w8
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserQuestEntity_o *v20; // x22
  __int64 v22; // x0

  if ( (byte_42B492C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42B492C = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_61;
    max_length = questRestrictionEntityList->max_length;
    if ( max_length < 1 )
      goto LABEL_59;
    v15 = 1;
    while ( 1 )
    {
      v16 = v15 - 1;
      if ( v15 - 1 >= questRestrictionEntityList->max_length )
      {
LABEL_62:
        v22 = sub_B52A88(IsDisplayedRestrictionDialog);
        sub_B52A28(v22, 0LL);
      }
      v17 = (int32_t *)questRestrictionEntityList->m_Items[v16];
      if ( !v17 )
        goto LABEL_61;
      v18 = v17[7];
      if ( v18 == 1 )
        break;
      if ( v18 == 2 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        IsDisplayedRestrictionDialog = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsDisplayedRestrictionDialog )
          goto LABEL_61;
        IsDisplayedRestrictionDialog = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                         (PartyOrganizationUtility_o *)IsDisplayedRestrictionDialog,
                                         v17[4],
                                         v17[5],
                                         v17[6],
                                         1,
                                         0LL);
        if ( (IsDisplayedRestrictionDialog & 1) != 0 )
          goto LABEL_56;
        goto LABEL_54;
      }
      if ( v18 == 3 )
        goto LABEL_54;
LABEL_56:
      if ( v15 >= max_length )
        goto LABEL_59;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v15;
      if ( !questRestrictionEntityList )
        goto LABEL_61;
    }
    IsDisplayedRestrictionDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsDisplayedRestrictionDialog )
      goto LABEL_61;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)IsDisplayedRestrictionDialog,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
                                              v17[4],
                                              0LL);
    if ( IsDisplayedRestrictionDialog )
    {
      v20 = (UserQuestEntity_o *)IsDisplayedRestrictionDialog;
      IsDisplayedRestrictionDialog = UserQuestEntity__getClearNum(
                                       (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                                       0LL);
      if ( (_DWORD)IsDisplayedRestrictionDialog )
        goto LABEL_56;
      IsDisplayedRestrictionDialog = UserQuestEntity__HasStatus(v20, 16, 0LL);
      if ( (IsDisplayedRestrictionDialog & 1) != 0 )
        goto LABEL_56;
    }
LABEL_54:
    if ( !v3 )
      goto LABEL_61;
    System_Collections_Generic_List_int___Add(
      v3,
      v16,
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    goto LABEL_56;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_61;
  v7 = restrictionMessageEntities->max_length;
  if ( v7 >= 1 )
  {
    for ( i = 0; i < v7; ++i )
    {
      if ( i >= (unsigned int)v7 )
        goto LABEL_62;
      v9 = restrictionMessageEntities->m_Items[i];
      if ( !v9 )
        goto LABEL_61;
      frequencyType = v9->fields.frequencyType;
      switch ( frequencyType )
      {
        case 1:
          IsDisplayedRestrictionDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !IsDisplayedRestrictionDialog )
            goto LABEL_61;
          v11 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)IsDisplayedRestrictionDialog,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          IsDisplayedRestrictionDialog = NetworkManager__get_UserId(0LL);
          if ( !v11 )
            goto LABEL_61;
          IsDisplayedRestrictionDialog = (int64_t)UserQuestMaster__getEntityFromId(
                                                    v11,
                                                    IsDisplayedRestrictionDialog,
                                                    this->fields.questId,
                                                    0LL);
          if ( !IsDisplayedRestrictionDialog
            || (v12 = (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                IsDisplayedRestrictionDialog = UserQuestEntity__getClearNum(
                                                 (UserQuestEntity_o *)IsDisplayedRestrictionDialog,
                                                 0LL),
                !(_DWORD)IsDisplayedRestrictionDialog)
            && (IsDisplayedRestrictionDialog = UserQuestEntity__HasStatus(v12, 16, 0LL),
                (IsDisplayedRestrictionDialog & 1) == 0) )
          {
LABEL_27:
            if ( !v3 )
              goto LABEL_61;
            System_Collections_Generic_List_int___Add(
              v3,
              v9->fields.id,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          break;
        case 2:
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          IsDisplayedRestrictionDialog = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !IsDisplayedRestrictionDialog )
            goto LABEL_61;
          IsDisplayedRestrictionDialog = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                           (PartyOrganizationUtility_o *)IsDisplayedRestrictionDialog,
                                           this->fields.questId,
                                           this->fields.questPhase,
                                           v9->fields.id,
                                           1,
                                           0LL);
          if ( (IsDisplayedRestrictionDialog & 1) == 0 )
            goto LABEL_27;
          break;
        case 3:
          goto LABEL_27;
      }
      v7 = restrictionMessageEntities->max_length;
    }
  }
LABEL_59:
  if ( !v3 )
LABEL_61:
    sub_B52A5C(IsDisplayedRestrictionDialog, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_42B492D & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B492D = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_20:
        v13 = sub_B52A88(this);
        sub_B52A28(v13, 0LL);
      }
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_B52A5C(this, *(_QWORD *)&n);
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


QuestRestrictionInfo_DialogMessageInfo_o *__fastcall QuestRestrictionInfo__GetDialogMessageInfo(
        QuestRestrictionInfo_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  QuestRestrictionInfo_DialogMessageInfo_o *result; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0

  if ( (byte_42B4943 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_42B4943 = 1;
  }
  result = (QuestRestrictionInfo_DialogMessageInfo_o *)this->fields.dialogMessageInfoDictionary;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)result,
           messageId,
           (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
    {
      dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
      if ( !dialogMessageInfoDictionary )
        sub_B52A5C(0LL, v6);
      return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)dialogMessageInfoDictionary,
                                                           messageId,
                                                           (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  __int64 v9; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_42B4946 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4946 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
      }
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      if ( v7->fields.type == 5 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_20:
    sub_B52A5C(this, method);
  }
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_age;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSupportSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  __int64 v9; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_42B4948 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4948 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
      }
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      if ( v7->fields.type == 6 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_20:
    sub_B52A5C(this, method);
  }
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_age;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  int32_t type; // w8
  __int64 v10; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_42B4945 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4945 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_21;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1/*""*/;
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v10 = sub_B52A88(this);
        sub_B52A28(v10, 0LL);
      }
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_21;
      type = v7->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_21;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_21:
    sub_B52A5C(this, method);
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
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v6; // x19
  System_String_o **p_title; // x20
  unsigned int v8; // w21
  __int64 v9; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v11; // x8
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42B492E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B492E = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_21:
        v13 = sub_B52A88(this);
        sub_B52A28(v13, 0LL);
      }
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_title = &v11->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_B52A5C(this, *(_QWORD *)&n);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                     n,
                                     (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
  __int64 v6; // x0

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_8;
  if ( restrictionEntityList->max_length <= n )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_8:
    sub_B52A5C(this, n);
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
      sub_B52A5C(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= questRestrictionEntityList->max_length )
        {
          v18 = sub_B52A88(this);
          sub_B52A28(v18, 0LL);
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
    sub_B52920((BattleServantConfConponent_o *)message, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  sub_B52920(
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
  if ( (byte_42B4938 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10456/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_42B4938 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B4937 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10457/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_42B4937 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedMyServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B494E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_42B494E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields.current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v8,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields.current )
      sub_B52A5C(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B494B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B494B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_B52A5C(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields.current,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_B52A5C(fixedMyServantIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v23; // x0

  v10 = this;
  if ( (byte_42B4929 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4929 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               svtId,
                                               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_B52A5C(this, *(_QWORD *)&svtId);
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
    v23 = sub_B52A88(this);
    sub_B52A28(v23, 0LL);
  }
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B492A & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10455/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_42B492A = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10455/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B4950 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_42B4950 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields.current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v8,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields.current )
      sub_B52A5C(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B494D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B494D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_B52A5C(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields.current,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_B52A5C(fixedIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int v4; // w21
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v10; // w20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int v13; // w19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  int v16[2]; // [xsp+20h] [xbp-50h]
  int v17; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42B4926 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_42B4926 = 1;
  }
  memset(&i, 0, sizeof(i));
  v17 = 0;
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
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v4 = 0;
    for ( i = v15; ; v4 += LODWORD(i.fields.current[1].monitor) )
    {
      v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &i,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v5 )
        break;
      if ( !i.fields.current )
        sub_B52A5C(v5, v6);
    }
    v16[0] = 159;
    v17 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v17 = 0;
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
LABEL_32:
    sub_B52A5C(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v15; ; v10 += LODWORD(i.fields.current[1].monitor) )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v11 )
      break;
    if ( !i.fields.current )
      sub_B52A5C(v11, v12);
  }
  v16[0] = 232;
  v13 = ++v17;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( v13 && v16[v13 - 1] == 232 )
    v17 = v13 - 1;
  return v10;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B4928 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10454/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_42B4928 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10454/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
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
  int v10; // w21
  int v11; // w8
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int v16; // w21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  int v18[3]; // [xsp+20h] [xbp-50h]
  int v19; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42B4925 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B4925 = 1;
  }
  memset(&i, 0, sizeof(i));
  v19 = 0;
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
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedMyServantPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v17;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &i,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v6 )
        break;
      if ( !v3 )
        sub_B52A5C(v6, v7);
    }
    v18[0] = 134;
    v19 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v19 = 0;
  }
  if ( this->fields.isNeedStarting )
  {
    fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v17;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &i,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v3 )
        sub_B52A5C(v8, v9);
    }
    v18[0] = 196;
    v10 = ++v19;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v18[v10 - 1] == 196 )
      {
        --v10;
        v19 = v11;
      }
    }
  }
  else
  {
    v10 = 0;
  }
  if ( this->fields.isFixedPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v17;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v14 )
        break;
      if ( !v3 )
        sub_B52A5C(v14, v15);
    }
    v18[v10] = 260;
    v16 = ++v19;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v16 && v18[v16 - 1] == 260 )
      v19 = v16 - 1;
  }
  if ( !v3 )
LABEL_43:
    sub_B52A5C(fixedMyServantIndividualitiesList, v5);
  if ( v3->fields._size >= 1 )
    return System_Collections_Generic_List_int___ToArray(
             v3,
             (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0LL;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B4924 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10459/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_42B4924 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10459/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
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
  if ( (byte_42B4910 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4910 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_B52A5C(this, *(_QWORD *)&restrictionWholeType);
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
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
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_34149920(
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
  if ( (byte_42B4911 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4911 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_B52A5C(this, *(_QWORD *)&restrictionType);
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  void *IsNullOrEmpty; // x0
  System_String_o *summary; // x1
  System_String_o *v26; // x26
  System_String_o *v27; // x27
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x23
  int max_length; // w8
  unsigned int v30; // w24
  RestrictionWholeEntity_o *v31; // x21
  int v32; // w8
  void *v33; // x21
  unsigned int v34; // w22
  __int64 v35; // x26
  System_String_o *v36; // x0
  __int64 v38; // x0
  bool v39; // [xsp+Ch] [xbp-74h]
  unsigned int key; // [xsp+14h] [xbp-6Ch]

  if ( (byte_42B490E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10431/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_B52984(&StringLiteral_11186/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_B52984(&StringLiteral_11187/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_B52984(&StringLiteral_11183/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_B52984(&StringLiteral_6432/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_42B490E = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_86;
  v39 = individuality;
  key = pos;
  if ( !isSlotOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6432/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11187/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v27 = (System_String_o *)IsNullOrEmpty;
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
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11183/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( isNoneTitle )
      {
        if ( fatigue )
          goto LABEL_25;
      }
      else
      {
        IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( fatigue )
        {
LABEL_25:
          IsNullOrEmpty = System_String__Concat_44568316(summary, v27, 0LL);
          summary = (System_String_o *)IsNullOrEmpty;
          if ( !v23 )
            goto LABEL_88;
          goto LABEL_29;
        }
      }
      if ( !v23 )
        goto LABEL_88;
LABEL_29:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_30:
      if ( !this->fields.isNotSingleSupportOnly )
        goto LABEL_41;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( isNoneTitle )
      {
        if ( singleSupport )
          goto LABEL_36;
      }
      else
      {
        IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( singleSupport )
        {
LABEL_36:
          IsNullOrEmpty = System_String__Concat_44568316(summary, v27, 0LL);
          summary = (System_String_o *)IsNullOrEmpty;
          if ( !v23 )
            goto LABEL_88;
          goto LABEL_40;
        }
      }
      if ( !v23 )
        goto LABEL_88;
LABEL_40:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_41:
      restrictionWholeEntities = this->fields.restrictionWholeEntities;
      if ( !restrictionWholeEntities )
        goto LABEL_88;
      max_length = restrictionWholeEntities->max_length;
      if ( max_length >= 1 )
      {
        v30 = 0;
        while ( v30 < max_length )
        {
          v31 = restrictionWholeEntities->m_Items[v30];
          if ( !v31 )
            goto LABEL_88;
          IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v31->fields.summary, 0LL);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          {
            summary = v31->fields.summary;
            if ( !isNoneTitle )
            {
              IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)summary, 0LL);
              summary = (System_String_o *)IsNullOrEmpty;
            }
            switch ( v31->fields.type )
            {
              case 1:
                if ( v39 )
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
                  IsNullOrEmpty = System_String__Concat_44568316(summary, v27, 0LL);
                  summary = (System_String_o *)IsNullOrEmpty;
                }
                break;
              default:
                break;
            }
            if ( !v23 )
              goto LABEL_88;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
          }
          max_length = restrictionWholeEntities->max_length;
          if ( (int)++v30 >= max_length )
            goto LABEL_69;
        }
LABEL_89:
        v38 = sub_B52A88(IsNullOrEmpty);
        sub_B52A28(v38, 0LL);
      }
      goto LABEL_69;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11186/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_14;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( uniqueServant )
      {
LABEL_14:
        IsNullOrEmpty = System_String__Concat_44568316(summary, v27, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v23 )
          goto LABEL_88;
        goto LABEL_18;
      }
    }
    if ( !v23 )
      goto LABEL_88;
LABEL_18:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v23,
      (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
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
                            (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_88:
      sub_B52A5C(IsNullOrEmpty, summary);
    }
    v32 = *((_DWORD *)IsNullOrEmpty + 6);
    v33 = IsNullOrEmpty;
    if ( v32 >= 1 )
    {
      v34 = 0;
      while ( v34 < v32 )
      {
        v35 = *((_QWORD *)v33 + (int)v34 + 4);
        if ( !v35 )
          goto LABEL_88;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v35 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v35 + 24);
            if ( !v23 )
              goto LABEL_88;
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6432/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v36, *(Il2CppObject **)(v35 + 24), 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
            if ( !v23 )
              goto LABEL_88;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v32 = *((_DWORD *)v33 + 6);
        if ( (int)++v34 >= v32 )
          goto LABEL_86;
      }
      goto LABEL_89;
    }
  }
LABEL_86:
  if ( !v23 )
    goto LABEL_88;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_34148796(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x26
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *name; // x1
  signed int max_length; // w8
  unsigned int v24; // w20
  RestrictionEntity_o *v25; // x19
  __int64 v27; // x0

  if ( (byte_42B490F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10431/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_B52984(&StringLiteral_11187/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_B52984(&StringLiteral_11183/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_B52984(&StringLiteral_6432/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_42B490F = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6432/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11187/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !isSlotOnly && this->fields.isFatigure )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11183/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
    name = IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( !fatigue )
        goto LABEL_13;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
      if ( !fatigue )
      {
LABEL_13:
        if ( !v20 )
          goto LABEL_57;
        goto LABEL_17;
      }
    }
    IsNullOrEmpty = System_String__Concat_44568316(name, v19, 0LL);
    name = IsNullOrEmpty;
    if ( !v20 )
      goto LABEL_57;
LABEL_17:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)name,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_44568316(name, v19, 0LL);
      name = IsNullOrEmpty;
    }
    if ( !v20 )
      goto LABEL_57;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)name,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( !entities )
    goto LABEL_57;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
        v27 = sub_B52A88(IsNullOrEmpty);
        sub_B52A28(v27, 0LL);
      }
      v25 = entities->m_Items[v24];
      if ( !v25 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v25->fields.name, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v25->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v25, 0LL);
          name = IsNullOrEmpty;
        }
        switch ( v25->fields.type )
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
              IsNullOrEmpty = System_String__Concat_44568316(name, v19, 0LL);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v20 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)name,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_55;
    }
LABEL_57:
    sub_B52A5C(IsNullOrEmpty, name);
  }
LABEL_55:
  if ( !v20 )
    goto LABEL_57;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  WarEntity_o *v21; // x8
  __int64 v22; // x0
  WarEntity_o *v23; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_42B4936 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4936 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  if ( v3->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v3->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_57;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_16:
      slotInfos = v3->fields.slotInfos;
      if ( !slotInfos )
        goto LABEL_57;
      v9 = 0;
      while ( 1 )
      {
        v10 = slotInfos->max_length;
        if ( v9 >= v10 )
          return (System_String_o *)StringLiteral_1/*""*/;
        if ( v9 >= (unsigned int)v10 )
          goto LABEL_58;
        v11 = slotInfos->m_Items[v9];
        if ( !v11 )
          goto LABEL_57;
        if ( v11->fields.slotType )
        {
          ++v9;
        }
        else
        {
          this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
          if ( !this )
            goto LABEL_57;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                             ++v9,
                                             (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_57;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                               v9,
                                               (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
            if ( !this )
              goto LABEL_57;
            dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
            v13 = this;
            if ( dialogMessageInfoDictionary >= 1 )
            {
              v14 = 0;
              while ( 1 )
              {
                if ( v14 >= dialogMessageInfoDictionary )
                  goto LABEL_58;
                v15 = *((_QWORD *)&v13->fields.eventId + (int)v14);
                if ( !v15 )
                  goto LABEL_57;
                if ( *(_DWORD *)(v15 + 44) && !*(_DWORD *)(v15 + 40) )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_57;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     &v23,
                                                     *(_DWORD *)(v15 + 44),
                                                     (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
                dialogMessageInfoDictionary = (int)v13->fields.dialogMessageInfoDictionary;
                if ( (int)++v14 >= dialogMessageInfoDictionary )
                  goto LABEL_39;
              }
              v21 = v23;
              if ( v23 )
                return v21->fields.age;
LABEL_57:
              sub_B52A5C(this, method);
            }
          }
        }
LABEL_39:
        slotInfos = v3->fields.slotInfos;
        if ( !slotInfos )
          goto LABEL_57;
      }
    }
    v6 = 0;
    while ( v6 < max_length )
    {
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_57;
      if ( v7->fields.type == 3 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_57;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v21 = entity;
          if ( entity )
            return v21->fields.age;
          goto LABEL_57;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_16;
    }
    goto LABEL_58;
  }
  restrictionEntityList = v3->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_57;
  v17 = restrictionEntityList->max_length;
  if ( v17 >= 1 )
  {
    v18 = 0;
    method = 0LL;
    while ( v18 < v17 )
    {
      v19 = restrictionEntityList->m_Items[v18];
      if ( !v19 )
        goto LABEL_57;
      if ( v19->fields.type == 11 )
        method = (const MethodInfo *)v18;
      else
        method = (const MethodInfo *)(unsigned int)method;
      if ( (int)++v18 >= v17 )
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
    }
LABEL_58:
    v22 = sub_B52A88(this);
    sub_B52A28(v22, 0LL);
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
  Il2CppObject *RestrictedName; // x19
  __int64 *v8; // x8
  System_String_o *v9; // x0

  if ( (byte_42B493F & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10461/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_B52984(&StringLiteral_10464/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_42B493F = 1;
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
    v8 = &StringLiteral_10461/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = &StringLiteral_10464/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  }
  v9 = LocalizationManager__Get((System_String_o *)*v8, 0LL);
  return System_String__Format(v9, RestrictedName, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v2 = this;
  if ( (byte_42B4953 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_42B4953 = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_B52A5C(this, method);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_int__o *v14; // x20
  int v15; // w8
  void *v16; // x19
  unsigned int v17; // w21
  __int64 v18; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *changeMaterial; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x1
  const MethodInfo_1B63E74 *v22; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  peRenderTexture_ChangeLayerObject_o *v27; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v30; // x0

  if ( (byte_42B4941 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass184_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
    byte_42B4941 = 1;
  }
  v5 = sub_B52A54(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass184_0___ctor((QuestRestrictionInfo___c__DisplayClass184_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
        {
          v30 = sub_B52A88(restrictionSlotDetailDictionary);
          sub_B52A28(v30, 0LL);
        }
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
            (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          goto LABEL_15;
      }
LABEL_29:
      sub_B52A5C(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v14 )
      goto LABEL_29;
    if ( v14->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      changeMaterial = System_Linq_Enumerable__Distinct_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                         (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v22 = (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v28 = System_Linq_Enumerable__Intersect_int_(changeMaterial, v21, v22);
      return System_Linq_Enumerable__ToArray_int_(
               v28,
               (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v25,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass184_0__GetMyServantOrNpcSvtIdList_b__0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v26 )
      {
        v27 = v26;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        changeMaterial = (System_Collections_Generic_IEnumerable_TSource__o *)v27->fields.changeMaterial;
        v22 = (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  QuestRestrictionInfo___c__DisplayClass198_0_o *v8; // x22
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  _QWORD **v19; // x24
  __int64 v20; // x19
  __int16 v21; // w8
  __int64 v22; // x19
  __int64 v23; // x19
  __int64 v24; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x21
  System_Int32_array *MyServantOrNpcSvtIdList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x23
  peRenderTexture_ChangeLayerObject_o *v28; // x0
  peRenderTexture_ChangeLayerObject_o *v29; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  int32_t MyServantOrSupportTargetPos; // w25
  const MethodInfo *v33; // x2
  _QWORD **v34; // x21
  __int64 v35; // x19
  __int16 v36; // w8
  __int64 v37; // x19
  __int64 v38; // x19
  __int64 v39; // x19
  System_Collections_Generic_List_int__o *v40; // x23
  FollowerInfo_array *QuestFollowerList; // x24
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v43; // x26
  int i; // w22
  FollowerInfo_o *v45; // x27
  DataManager_o *v46; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  const MethodInfo *v49; // x3
  System_Int32_array *OverwriteIndividuality; // x0
  const MethodInfo *v51; // x3
  struct System_Collections_Generic_List_string__o *saveNameList; // x19
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x21
  int32_t v54; // w0
  const MethodInfo *v55; // x6
  struct System_Collections_Generic_List_string__o *v56; // x19
  struct System_Collections_Generic_List_long____o *v57; // x21
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v58; // x21
  struct System_Collections_Generic_List_string__o *v59; // x19
  struct System_Collections_Generic_List_long____o *v60; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v61; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  __int64 v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+8h] [xbp-78h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UserServantEntity_o *v68; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_42B494A & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Union_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo);
    byte_42B494A = 1;
  }
  v68 = 0LL;
  entity = 0LL;
  v8 = (QuestRestrictionInfo___c__DisplayClass198_0_o *)sub_B52A54(QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass198_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_76;
  v8->fields.index = index;
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v11;
  sub_B52920(
    (BattleServantConfConponent_o *)npcInfoDictionary,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v19 = (_QWORD **)Method_System_Array_Empty_int___;
  v20 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v21 = *(_WORD *)(v20 + 306);
  if ( (v21 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v21 = *(_WORD *)(v20 + 306);
  }
  if ( (v21 & 0x400) != 0 )
  {
    v22 = *v19[6];
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      sub_AEB684(*v19[6]);
    if ( !*(_DWORD *)(v22 + 224) )
    {
      v23 = *v19[6];
      if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
        sub_AEB684(*v19[6]);
      j_il2cpp_runtime_class_init_0(v23);
    }
  }
  v24 = *v19[6];
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AEB684(*v19[6]);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v24 + 184);
    v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v27,
      (Il2CppObject *)v8,
      Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_76;
    v28 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v27,
            (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v28 )
    {
      v29 = v28;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v31 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v29->fields.changeMaterial,
              CollectionList,
              (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v31,
                                  (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v8->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v8->fields.index, v18);
    if ( !MyServantOrNpcSvtIdList )
    {
      v34 = (_QWORD **)Method_System_Array_Empty_int___;
      v35 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v36 = *(_WORD *)(v35 + 306);
      if ( (v36 & 1) == 0 )
      {
        sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v36 = *(_WORD *)(v35 + 306);
      }
      if ( (v36 & 0x400) != 0 )
      {
        v37 = *v34[6];
        if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
          sub_AEB684(*v34[6]);
        if ( !*(_DWORD *)(v37 + 224) )
        {
          v38 = *v34[6];
          if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
            sub_AEB684(*v34[6]);
          j_il2cpp_runtime_class_init_0(v38);
        }
      }
      v39 = *v34[6];
      if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
        sub_AEB684(*v34[6]);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v39 + 184);
    }
    MyServantOrSupportTargetPos = v8->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v33);
  }
  v40 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_76;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        this->fields.questId,
                        this->fields.questPhase,
                        0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList,
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___),
        !QuestFollowerList) )
  {
LABEL_76:
    sub_B52A5C(Instance, v10);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v43 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v64 = sub_B52A88(Instance);
        sub_B52A28(v64, 0LL);
      }
      v45 = QuestFollowerList->m_Items[i];
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v45 )
        goto LABEL_76;
      Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(v45, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        if ( !v43 )
          goto LABEL_76;
        v46 = Instance;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               v43,
               &entity,
               v45->fields.npcFollowerSvtId,
               (const MethodInfo_23E255C *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
        {
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
          NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v45, 0, ReturnTypeByQuestId, 0LL);
          Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_34173516(
                                        this,
                                        NpcServantIndividuality,
                                        MyServantOrSupportTargetPos,
                                        v49);
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
                  &v68,
                  v45->fields.npcFollowerSvtId,
                  (const MethodInfo_23E255C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            goto LABEL_80;
          Instance = (DataManager_o *)v68;
          if ( !v68 )
            goto LABEL_76;
          if ( !NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v68, 0LL) )
            goto LABEL_80;
          Instance = (DataManager_o *)v68;
          if ( !v68 )
            goto LABEL_76;
          OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                     (NpcServantFollowerEntity_o *)v68,
                                     0LL);
          if ( QuestRestrictionInfo__IsRestrictionServantIndividuality_34173516(
                 this,
                 OverwriteIndividuality,
                 MyServantOrSupportTargetPos,
                 v51) )
          {
LABEL_80:
            saveNameList = v46->fields.saveNameList;
            saveDataMapList = v46->fields.saveDataMapList;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v70.fields.currentCryptoKey = saveNameList;
            *(_QWORD *)&v70.fields.fakeValue = saveDataMapList;
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v70, 0LL);
            Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                          this,
                                          v54,
                                          LODWORD(v46->fields.lastFrameTime),
                                          HIDWORD(v46[1].fields.datalist),
                                          MyServantOrSupportTargetPos,
                                          0,
                                          v55);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_74;
          }
        }
        v56 = v46->fields.saveNameList;
        v57 = v46->fields.saveDataMapList;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v71.fields.currentCryptoKey = v56;
        *(_QWORD *)&v71.fields.fakeValue = v57;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v71, 0LL);
        if ( !v40 )
          goto LABEL_76;
        System_Collections_Generic_List_int___Add(
          v40,
          (int32_t)Instance,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        v58 = *npcInfoDictionary;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v46->fields.saveNameList,
                                      0LL);
        if ( !v58 )
          goto LABEL_76;
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v58,
                                      (int32_t)Instance,
                                      (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v59 = v46->fields.saveNameList;
          v60 = v46->fields.saveDataMapList;
          v61 = *npcInfoDictionary;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v72.fields.currentCryptoKey = v59;
          *(_QWORD *)&v72.fields.fakeValue = v60;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v72, 0LL);
          if ( !v61 )
            goto LABEL_76;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v61,
            (int32_t)Instance,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v45,
            (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
        }
      }
LABEL_74:
      max_length = QuestFollowerList->max_length;
    }
  }
  v62 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v40,
          (const MethodInfo_1B717D8 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v62,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int v9; // w8
  int *v10; // x19
  __int64 v11; // x20
  int v12; // w23
  __int64 v14; // x0

  if ( (byte_42B4940 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10466/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_B52984(&StringLiteral_10465/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_B52984(&StringLiteral_10463/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_B52984(&StringLiteral_10462/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_42B4940 = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = &StringLiteral_10463/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = &StringLiteral_10462/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
  }
  else
  {
    MyServantOrNpcSvtIdList = (int *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
                                       this,
                                       pos,
                                       (const MethodInfo *)haveIndividualityServant);
    if ( MyServantOrNpcSvtIdList && (v9 = MyServantOrNpcSvtIdList[6], v10 = MyServantOrNpcSvtIdList, v9 >= 1) )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= v9 )
        {
          v14 = sub_B52A88(MyServantOrNpcSvtIdList);
          sub_B52A28(v14, 0LL);
        }
        MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        v12 = v10[v11 + 8];
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        }
        if ( v12 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 844LL) )
          break;
        v9 = v10[6];
        if ( (int)++v11 >= v9 )
          goto LABEL_23;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_10465/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_10466/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
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
  peRenderTexture_ChangeLayerObject_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0

  if ( (byte_42B4942 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass185_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
    byte_42B4942 = 1;
  }
  v5 = sub_B52A54(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass185_0___ctor((QuestRestrictionInfo___c__DisplayClass185_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
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
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass185_0__GetMyServantOrSupportTargetPos_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v6 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v16,
         (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  v17 = *(_QWORD *)&v6->fields.prevLayer;
  if ( !v17 )
LABEL_14:
    sub_B52A5C(v6, v7);
  if ( !*(_DWORD *)(v17 + 24) )
  {
    v18 = sub_B52A88(v6);
    sub_B52A28(v18, 0LL);
  }
  LODWORD(v6) = *(_DWORD *)(v17 + 32);
  return (int)v6;
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
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B52A5C(this, pos);
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
  int v10; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B4944 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4944 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !this->fields.restrictionBaseEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary )
    sub_B52A5C(0LL, *(_QWORD *)&pos);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dialogMessageInfoDictionary,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
           &v12,
           (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v12.fields.current.fields.value )
      sub_B52A5C(v6, v7);
    if ( LODWORD(v12.fields.current.fields.value[1].klass) == pos )
    {
      DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v12.fields.current.fields.key, v8);
      v10 = 34;
      goto LABEL_11;
    }
  }
  DialogMessage = 0LL;
  v10 = 28;
LABEL_11:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v12,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  if ( v10 != 34 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return DialogMessage;
}


int32_t __fastcall QuestRestrictionInfo__GetNeedStartingSvtCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B494F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_42B494F = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields.current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v8,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields.current )
      sub_B52A5C(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B494C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B494C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_B52A5C(v6, v7);
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v9.fields.current,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_15:
    sub_B52A5C(needStartingIndividualitiesList, v4);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  signed __int64 v11; // x25
  BattleServantConfConponent_o *i; // x21
  int32_t v13; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t maxLimitCount; // w22
  int32_t v16; // w1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x22
  __int64 v25; // x0
  __int64 v26; // x0
  UserServantCollectionEntity_o *v27; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B4931 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    byte_42B4931 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v5 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v4);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_42;
  v8 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_B5299C(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v9 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v5 >= 1 )
  {
    v10 = 0LL;
    v11 = v5;
    for ( i = (BattleServantConfConponent_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      if ( v10 >= *(unsigned int *)(v8 + 24) )
      {
LABEL_43:
        v25 = sub_B52A88(FixedServantPositionSvtIdList);
        sub_B52A28(v25, 0LL);
      }
      v13 = *(_DWORD *)(v8 + 32 + 4 * v10);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)FixedServantPositionSvtIdList,
              &entity,
              v13,
              (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)FixedServantPositionSvtIdList,
                                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
              &v27,
              FixedServantPositionSvtIdList,
              v13,
              0LL) )
        goto LABEL_26;
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
      v16 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v16, -1, 0LL);
      if ( !v9 )
        break;
      v23 = (System_Int32_array **)FixedServantPositionSvtIdList;
      if ( FixedServantPositionSvtIdList )
      {
        FixedServantPositionSvtIdList = sub_B52A44(FixedServantPositionSvtIdList, v9->obj.klass->_1.element_class);
        if ( !FixedServantPositionSvtIdList )
        {
          v26 = sub_B52A7C(0LL);
          sub_B52A28(v26, 0LL);
        }
      }
      if ( v10 >= v9->max_length )
        goto LABEL_43;
      i->klass = (BattleServantConfConponent_c *)v23;
      sub_B52920(i, v23, v17, v18, v19, v20, v21, v22);
      if ( (__int64)++v10 >= v11 )
        return v9;
    }
LABEL_42:
    sub_B52A5C(FixedServantPositionSvtIdList, v7);
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
  __int64 v6; // x0

  if ( !this->fields.restrictionBaseEntity )
    return 0LL;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_8;
  if ( pos - 1 >= slotInfos->max_length )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B52A5C(this, pos);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  __int64 v19; // x22
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  __int64 v24; // x0
  System_String_o *v25; // [xsp+8h] [xbp-58h]

  v4 = this;
  if ( (byte_42B493E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass181_0__GetRestrictedName_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B493E = 1;
  }
  v25 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v4->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                         pos,
                                         (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
              return v25;
          }
        }
        return v25;
      }
    }
LABEL_29:
    sub_B52A5C(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sub_B52A54(QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass181_0___ctor((QuestRestrictionInfo___c__DisplayClass181_0_o *)v11, 0LL);
      if ( v10 >= questRestrictionEntityList->max_length )
        break;
      if ( !v11 )
        goto LABEL_29;
      v18 = (System_Int32_array **)questRestrictionEntityList->m_Items[v10];
      *(_QWORD *)(v11 + 16) = v18;
      v19 = v11 + 16;
      sub_B52920((BattleServantConfConponent_o *)(v11 + 16), v18, v12, v13, v14, v15, v16, v17);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v21,
        (Il2CppObject *)v11,
        Method_QuestRestrictionInfo___c__DisplayClass181_0__GetRestrictedName_b__0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v21,
                                         (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !deckSvtIdList->max_length )
          break;
        if ( deckSvtIdList->m_Items[1] == pos )
        {
          if ( !*(_QWORD *)v19 )
            goto LABEL_29;
          v25 = *(System_String_o **)(*(_QWORD *)v19 + 48LL);
        }
      }
      if ( (__int64)++v10 >= (int)questRestrictionEntityList->max_length )
        return v25;
    }
LABEL_30:
    v24 = sub_B52A88(this);
    sub_B52A28(v24, 0LL);
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
  int v5; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x9
  __int64 v7; // x20
  QuestRestrictionInfo_SlotInfo_o *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v11; // x8
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__105_0; // x20
  Il2CppObject *v14; // x21
  struct QuestRestrictionInfo___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_String_o *v23; // x0
  System_Collections_Generic_IEnumerable_string__o *v24; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v25; // x8
  QuestRestrictionInfo_SlotInfo_o *v26; // x8
  __int64 v27; // x0

  v4 = this;
  if ( (byte_42B491A & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_B52984(&Method_System_Func_RestrictionEntity__string___ctor__);
    sub_B52984(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__105_0__);
    sub_B52984(&QuestRestrictionInfo___c_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_42B491A = 1;
  }
  if ( v4->fields.restrictionBaseEntity )
  {
    v5 = initPos - 1;
    if ( initPos < 1 )
      return v4->fields.restrictionMessage;
    slotInfos = v4->fields.slotInfos;
    if ( slotInfos )
    {
      if ( v5 >= slotInfos->max_length )
        goto LABEL_30;
      v7 = v5;
      v8 = slotInfos->m_Items[v5];
      if ( !v8 )
        goto LABEL_29;
      if ( System_String__IsNullOrEmpty(v8->fields.summary, 0LL) )
        return v4->fields.restrictionMessage;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v25 = v4->fields.slotInfos;
      if ( !v25 )
        goto LABEL_29;
      if ( (unsigned int)v7 >= v25->max_length )
      {
LABEL_30:
        v27 = sub_B52A88(this);
        sub_B52A28(v27, 0LL);
      }
      v26 = v25->m_Items[v7];
      if ( v26 )
        return System_String__Concat_44570600(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_26/*"\n"*/,
                 v26->fields.summary,
                 0LL);
    }
LABEL_29:
    sub_B52A5C(this, *(_QWORD *)&initPos);
  }
  RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                                                                        v4,
                                                                                        *(const MethodInfo **)&initPos);
  v11 = QuestRestrictionInfo___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v11 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__105_0,
      v14,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__105_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_RestrictionEntity__string___ctor__);
    v15 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v15->__9__105_0 = (struct System_Func_RestrictionEntity__string__o *)_9__105_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v15->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__105_0,
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v24 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_string_(
                                                              v22,
                                                              v23,
                                                              (const MethodInfo_1B668AC *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_44623760((System_String_o *)StringLiteral_26/*"\n"*/, v24, 0LL);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *__fastcall QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  QuestRestrictionInfo___c_c *v4; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__106_0; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B491B & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_B52984(&Method_System_Func_RestrictionEntity__bool___ctor__);
    sub_B52984(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__106_0__);
    sub_B52984(&QuestRestrictionInfo___c_TypeInfo);
    byte_42B491B = 1;
  }
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  v4 = QuestRestrictionInfo___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v4 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__106_0,
      v7,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__106_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
    v8 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v8->__9__106_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__106_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__106_0,
                                                                          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t ServantImageLimitSealAfter; // w21

  if ( (byte_42B4915 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4915 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v9);
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

  if ( (byte_42B4932 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B4932 = 1;
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
      sub_B52A5C(0LL, method);
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
  WarEntity_o *v18; // x8
  __int64 v19; // x0
  WarEntity_o *v20; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_42B4934 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4934 = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  if ( v3->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v3->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_51;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      if ( v3->fields.servantNumMin < 1 )
        return (System_String_o *)StringLiteral_1/*""*/;
      v8 = 1;
      while ( 1 )
      {
        this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                           v8,
                                           (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
        if ( !this )
          goto LABEL_51;
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v10 = this;
        if ( dialogMessageInfoDictionary >= 1 )
          break;
LABEL_33:
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
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_51;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                             &v20,
                                             *(_DWORD *)(v12 + 44),
                                             (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        dialogMessageInfoDictionary = (int)v10->fields.dialogMessageInfoDictionary;
        if ( (int)++v11 >= dialogMessageInfoDictionary )
          goto LABEL_33;
      }
      v18 = v20;
      if ( !v20 )
        goto LABEL_51;
    }
    else
    {
      v6 = 0;
      while ( 1 )
      {
        if ( v6 >= max_length )
          goto LABEL_52;
        v7 = restrictionWholeEntities->m_Items[v6];
        if ( !v7 )
          goto LABEL_51;
        if ( v7->fields.restrictionMessageId && v7->fields.type == 3 )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_51;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                             &entity,
                                             v7->fields.restrictionMessageId,
                                             (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_17;
      }
      v18 = entity;
      if ( !entity )
        goto LABEL_51;
    }
    return v18->fields.age;
  }
  else
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_51;
    v15 = restrictionEntityList->max_length;
    if ( v15 >= 1 )
    {
      v16 = 0;
      method = 0LL;
      while ( 1 )
      {
        if ( v16 >= v15 )
        {
LABEL_52:
          v19 = sub_B52A88(this);
          sub_B52A28(v19, 0LL);
        }
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
LABEL_51:
      sub_B52A5C(this, method);
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
  System_String_o *v6; // x20
  int32_t *v7; // x1
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-18h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B4933 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10468/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_B52984(&StringLiteral_10467/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_42B4933 = 1;
  }
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(this, method);
  if ( ServantNumRangeType == 5 )
    goto LABEL_20;
  if ( ServantNumRangeType != 4 )
    goto LABEL_21;
  servantNumMax = this->fields.servantNumMax;
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( servantNumMax > v5->static_fields->DeckMainMemberMax )
  {
LABEL_20:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10468/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
    v7 = &v11;
    v11 = this->fields.servantNumMax;
  }
  else
  {
LABEL_21:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
    v7 = &v10;
    v10 = this->fields.servantNumMax;
  }
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v7);
  return System_String__Format(v6, v8, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetServantRarity(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42B4914 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4914 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_B52A5C(Instance, v7);
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
  if ( (byte_42B491C & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10469/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_42B491C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
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

  if ( (byte_42B492B & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42B492B = 1;
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
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x8
  int max_length; // w9
  unsigned int v7; // w10
  RestrictionWholeEntity_o *v8; // x11
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42B4922 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10471/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4922 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_10471/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_19:
      sub_B52A5C(this, isFixMessage);
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
        if ( v7 >= max_length )
        {
          v10 = sub_B52A88(this);
          sub_B52A28(v10, 0LL);
        }
        v8 = restrictionWholeEntities->m_Items[v7];
        if ( !v8 )
          goto LABEL_19;
        if ( v8->fields.type == 9 )
          return v8->fields.summary;
        if ( (int)++v7 >= max_length )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetUniqueServantRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B4921 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10470/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_42B4921 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10470/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
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
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_8:
    sub_B52A5C(this, initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_B52A5C(this, method);
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
        v10 = sub_B52A88(this);
        sub_B52A28(v10, 0LL);
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
    sub_B52A5C(this, method);
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
  struct System_Collections_Generic_List_int____o *fixedNpcIndividualitiesList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-68h] BYREF
  int v13[2]; // [xsp+20h] [xbp-50h]
  int v14; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42B4947 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B4947 = 1;
  }
  memset(&i, 0, sizeof(i));
  v14 = 0;
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.isFixedSupportPosition )
  {
    fixedNpcIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( fixedNpcIndividualitiesList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v12,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v12;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
              (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &i,
               (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v9 )
          break;
        if ( !v3 )
          sub_B52A5C(v9, v10);
      }
      v13[0] = 142;
      v11 = ++v14;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
      if ( !v11 || v13[v11 - 1] != 142 )
        goto LABEL_14;
      v14 = v11 - 1;
      if ( v3 )
        return v3->fields._size > 0;
    }
LABEL_26:
    sub_B52A5C(fixedNpcIndividualitiesList, v4);
  }
  fixedNpcIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
  if ( !fixedNpcIndividualitiesList )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v12;
        ;
        System_Collections_Generic_List_int___AddRange(
          v3,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &i,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_B52A5C(v6, v7);
  }
  v13[0] = 142;
  v14 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  v14 = 0;
LABEL_14:
  if ( !v3 )
    goto LABEL_26;
  return v3->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_34157968(
        QuestRestrictionInfo_o *this,
        int32_t num,
        ServantLeaderInfo_o *servantInfo,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int v11; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x23
  __int64 v13; // x24
  __int64 v14; // x25
  ServantEntity_o *Entity; // x23
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v19; // x1
  int v20; // w21
  int v21; // w26
  struct System_Boolean_array *supportPositionList; // x8
  __int64 v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int v26; // w8
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+0h] [xbp-B0h] BYREF
  int v28[4]; // [xsp+18h] [xbp-98h]
  int v29; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v6 = this;
  if ( (byte_42B4923 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B4923 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
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
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_53;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v27;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &i,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v7 )
        sub_B52A5C(v8, v9);
    }
    v28[0] = 170;
    v29 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v11 = 0;
    v29 = 0;
LABEL_18:
    if ( !v7 )
      goto LABEL_53;
    goto LABEL_19;
  }
  this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v27;
        ;
        System_Collections_Generic_List_int___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v24 )
      break;
    if ( !v7 )
      sub_B52A5C(v24, v25);
  }
  v28[0] = 170;
  v11 = ++v29;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
    goto LABEL_18;
  v26 = v11 - 1;
  if ( v28[v11 - 1] != 170 )
    goto LABEL_18;
  --v11;
  v29 = v26;
  if ( !v7 )
    goto LABEL_53;
LABEL_19:
  if ( v7->fields._size < 1 )
    goto LABEL_38;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_53;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v14 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v14;
  *(_QWORD *)&v32.fields.fakeValue = v13;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v32, 0LL);
  if ( !v12 )
LABEL_53:
    sub_B52A5C(this, *(_QWORD *)&num);
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v12,
                                (int32_t)this,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    &v27,
    v7,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v30 = v27;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v30,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v30.fields.current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0LL);
    if ( !Entity )
      sub_B52A5C(DispLimitCount, v19);
    if ( ServantEntity__IsIndividuality(Entity, limitCount, DispLimitCount, current, 0LL) )
    {
      v20 = 1;
      goto LABEL_34;
    }
  }
  v20 = 0;
LABEL_34:
  v28[v11] = 277;
  v21 = ++v29;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v30,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v21 && v28[v21 - 1] == 277 )
    v29 = v21 - 1;
  if ( !v20 )
    return 1;
LABEL_38:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
    goto LABEL_53;
  if ( supportPositionList->max_length <= num )
  {
    v23 = sub_B52A88(this);
    sub_B52A28(v23, 0LL);
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


bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass176_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v9; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v12; // x20
  __int64 v13; // x0

  if ( (byte_42B4939 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass176_0__IsMyServantOrNpcRestriction_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo);
    byte_42B4939 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass176_0_o *)sub_B52A54(QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass176_0___ctor(v5, 0LL);
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
      if ( pos - 1 >= slotInfos->max_length )
      {
        v13 = sub_B52A88(v6);
        sub_B52A28(v13, 0LL);
      }
      v9 = slotInfos->m_Items[pos - 1];
      if ( v9 )
        return (unsigned int)(v9->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_B52A5C(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v12 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass176_0__IsMyServantOrNpcRestriction_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_2FF1E90 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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
  QuestRestrictionInfo___c__DisplayClass178_0_o *v5; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w8
  unsigned int v10; // w9
  __int64 v11; // x10
  __int64 v12; // x10
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0

  if ( (byte_42B493B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass178_0__IsNotIndividuality_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo);
    byte_42B493B = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass178_0_o *)sub_B52A54(QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass178_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  v5->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(this, pos, v8) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                          v5->fields.pos,
                                          (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v9 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v9 >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( v10 >= v9 )
          {
            v16 = sub_B52A88(restrictionSlotDetailDictionary);
            sub_B52A28(v16, 0LL);
          }
          v11 = *((_QWORD *)restrictionSlotDetailDictionary + (int)v10 + 4);
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
          if ( (int)++v10 >= v9 )
            goto LABEL_16;
        }
LABEL_23:
        sub_B52A5C(restrictionSlotDetailDictionary, v7);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
      v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass178_0__IsNotIndividuality_b__0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v14,
                                          (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
  __int64 v7; // x0

  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_10;
    if ( initPos - 1 >= slotInfos->max_length )
    {
      v7 = sub_B52A88(this);
      sub_B52A28(v7, 0LL);
    }
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_B52A5C(this, initPos);
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
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x19
  QuestRestrictionInfo___c_c *v4; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__96_0; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B4913 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_B52984(&Method_System_Func_QuestRestrictionInfo_SlotInfo__bool___ctor__);
    sub_B52984(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__96_0__);
    sub_B52984(&QuestRestrictionInfo___c_TypeInfo);
    byte_42B4913 = 1;
  }
  if ( !this->fields.restrictionBaseEntity )
    return 0;
  slotInfos = this->fields.slotInfos;
  v4 = QuestRestrictionInfo___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v4 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__96_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__96_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__96_0,
      v7,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__96_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_QuestRestrictionInfo_SlotInfo__bool___ctor__);
    v8 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v8->__9__96_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__96_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__96_0,
      (System_Int32_array **)_9__96_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)slotInfos,
           (System_Func_T__bool__o *)_9__96_0,
           (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionIndividualityWhole(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *restrictionWholeEntities; // x19
  QuestRestrictionInfo___c_c *v4; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__95_1; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 *v15; // x8
  QuestRestrictionInfo___c_c *v16; // x0
  struct QuestRestrictionInfo___c_StaticFields *v17; // x8
  Il2CppObject *v18; // x21
  struct QuestRestrictionInfo___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42B4912 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_B52984(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_B52984(&Method_System_Func_RestrictionWholeEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_RestrictionEntity__bool___ctor__);
    sub_B52984(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_B52984(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_0__);
    sub_B52984(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_1__);
    sub_B52984(&QuestRestrictionInfo___c_TypeInfo);
    byte_42B4912 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)this->fields.restrictionWholeEntities;
    v4 = QuestRestrictionInfo___c_TypeInfo;
    if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v4 = QuestRestrictionInfo___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__95_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__95_1;
    if ( !_9__95_1 )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__95_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__95_1,
        v7,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_1__,
        (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionWholeEntity__bool___ctor__);
      v8 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v8->__9__95_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__95_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->__9__95_1,
        (System_Int32_array **)_9__95_1,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    v15 = &Method_BasicHelper_Any_RestrictionWholeEntity___;
  }
  else
  {
    restrictionWholeEntities = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)this->fields.restrictionEntityList;
    v16 = QuestRestrictionInfo___c_TypeInfo;
    if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v16 = QuestRestrictionInfo___c_TypeInfo;
    }
    v17 = v16->static_fields;
    _9__95_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v17->__9__95_0;
    if ( !_9__95_1 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v17 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)v17->__9;
      _9__95_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__95_1,
        v18,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
      v19 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v19->__9__95_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__95_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v19->__9__95_0,
        (System_Int32_array **)_9__95_1,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v15 = &Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           restrictionWholeEntities,
           (System_Func_T__bool__o *)_9__95_1,
           (const MethodInfo_1A41D18 *)*v15);
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
  QuestRestrictionInfo___c__DisplayClass179_0_o *v13; // x24
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t ServantImageLimitSealAfter; // w20
  ServantEntity_o *Entity; // x21
  unsigned __int64 datalist_low; // x8
  unsigned __int64 i; // x9
  __int64 v21; // x12
  int v22; // w25
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x23
  struct System_Byte_array *masterDataBytes; // x8
  RestrictionEntity_o *v26; // x22
  __int64 v27; // x8
  System_Int32_array *v28; // x0
  struct DataMasterBase_array *datalist; // x9
  DataManager_o *v30; // x22
  unsigned __int64 v31; // x24
  RestrictionSlotDetailEntity_o *v32; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0
  __int64 v36; // x0

  if ( (byte_42B493C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass179_0__IsRestrictionServantIndividuality_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
    byte_42B493C = 1;
  }
  v13 = (QuestRestrictionInfo___c__DisplayClass179_0_o *)sub_B52A54(QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass179_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_52;
  v13->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(this, pos, v16) )
    goto LABEL_50;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_52;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v13->fields.pos,
                                    (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
              v36 = sub_B52A88(Instance);
              sub_B52A28(v36, 0LL);
            }
            v21 = *((_QWORD *)&Instance->fields.lookup + i);
            if ( isChkSupport )
            {
              if ( !v21 )
                goto LABEL_52;
              if ( *(_DWORD *)(v21 + 28) == 2 )
                goto LABEL_31;
            }
            else
            {
              if ( !v21 )
                goto LABEL_52;
              if ( *(_DWORD *)(v21 + 28) == 1 )
              {
LABEL_31:
                v22 = *(_DWORD *)(v21 + 40);
                goto LABEL_32;
              }
            }
          }
        }
        v22 = -1;
LABEL_32:
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                        v13->fields.pos,
                                        (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            datalist = Instance->fields.datalist;
            v30 = Instance;
            if ( (int)datalist >= 1 )
            {
              LOBYTE(v27) = 0;
              v31 = 0LL;
              while ( 1 )
              {
                if ( v31 >= (unsigned int)datalist )
                  goto LABEL_53;
                v32 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v30->fields.lookup + v31);
                if ( (v22 & 0x80000000) != 0 )
                {
                  if ( !v32 )
                    goto LABEL_52;
                }
                else
                {
                  if ( !v32 )
                    goto LABEL_52;
                  if ( v22 != v32->fields.id )
                    goto LABEL_48;
                }
                if ( v32->fields.type == 1 )
                {
                  targetVals = v32->fields.targetVals;
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
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v32, Individuality, 0LL);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_50;
                      LOBYTE(v27) = 1;
                    }
                  }
                }
LABEL_48:
                LODWORD(datalist) = v30->fields.datalist;
                if ( (__int64)++v31 >= (int)datalist )
                  return v27;
              }
            }
            goto LABEL_50;
          }
        }
      }
    }
LABEL_52:
    sub_B52A5C(Instance, v15);
  }
  if ( isChkSupport )
    goto LABEL_50;
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass179_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_52;
  Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v24,
                                (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_50;
  masterDataBytes = Instance->fields.masterDataBytes;
  v26 = (RestrictionEntity_o *)Instance;
  if ( !masterDataBytes )
    goto LABEL_52;
  v27 = *(_QWORD *)&masterDataBytes->max_length;
  if ( v27 )
  {
    if ( !Entity )
      goto LABEL_52;
    v28 = ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
    if ( RestrictionEntity__IsRestriction_29732520(v26, v28, 0LL) )
    {
      LOBYTE(v27) = 1;
      return v27;
    }
LABEL_50:
    LOBYTE(v27) = 0;
  }
  return v27;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_34173516(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass180_0_o *v7; // x22
  void *restrictionSlotDetailDictionary; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w9
  void *v12; // x20
  unsigned int v13; // w21
  __int64 v14; // x8
  __int64 v15; // x9
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x21
  __int64 v18; // x8
  __int64 v20; // x0

  if ( (byte_42B493D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass180_0__IsRestrictionServantIndividuality_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
    byte_42B493D = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass180_0_o *)sub_B52A54(QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass180_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_26;
  v7->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(this, pos, v10) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                        v7->fields.pos,
                                        (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
        {
          v20 = sub_B52A88(restrictionSlotDetailDictionary);
          sub_B52A28(v20, 0LL);
        }
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
      sub_B52A5C(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestRestrictionInfo___c__DisplayClass180_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    return RestrictionEntity__IsRestriction_29732520(
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
  return QuestRestrictionInfo__IsRestrictionSlot_34152184(this, ServantIndividuality, initPos, v14);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionSlot_34152184(
        QuestRestrictionInfo_o *this,
        System_Int32_array *svtIndividuality,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  int v7; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v9; // x23
  bool v10; // w21
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  int size; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v15; // x8
  QuestRestrictionInfo_SlotInfo_o *v16; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct QuestRestrictionInfo_SlotInfo_array *v18; // x8
  QuestRestrictionInfo_SlotInfo_o *v19; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *v20; // x28
  __int64 v22; // x0

  v6 = this;
  if ( (byte_42B4918 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_B52984(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_42B4918 = 1;
  }
  v7 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_33:
      sub_B52A5C(this, svtIndividuality);
    v9 = 0LL;
    v10 = 0;
    while ( 1 )
    {
      if ( v7 >= slotInfos->max_length )
      {
LABEL_36:
        v22 = sub_B52A88(this);
        sub_B52A28(v22, 0LL);
      }
      v11 = slotInfos->m_Items[v7];
      if ( !v11 )
        goto LABEL_33;
      individualityList = v11->fields.individualityList;
      if ( !individualityList )
        goto LABEL_33;
      size = individualityList->fields._size;
      if ( (int)v9 >= size )
        return v10;
      if ( size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (QuestRestrictionInfo_o *)individualityList->fields._items->m_Items[v9];
      if ( !this )
        goto LABEL_33;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v14 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v14,
                                           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
        v15 = v6->fields.slotInfos;
        if ( !v15 )
          goto LABEL_33;
        if ( v7 >= v15->max_length )
          goto LABEL_36;
        v16 = v15->m_Items[v7];
        if ( !v16 )
          goto LABEL_33;
        rangeTypeList = v16->fields.rangeTypeList;
        if ( !rangeTypeList )
          goto LABEL_33;
        if ( rangeTypeList->fields._size <= (unsigned int)v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( rangeTypeList->fields._items->m_Items[v9 + 1] == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                             (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
        }
        else
        {
          v18 = v6->fields.slotInfos;
          if ( !v18 )
            goto LABEL_33;
          if ( v7 >= v18->max_length )
            goto LABEL_36;
          v19 = v18->m_Items[v7];
          if ( !v19 )
            goto LABEL_33;
          v20 = v19->fields.rangeTypeList;
          if ( !v20 )
            goto LABEL_33;
          if ( v20->fields._size <= (unsigned int)v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( v20->fields._items->m_Items[v9 + 1] == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                               (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
            if ( ((unsigned __int8)this & 1) == 0 )
              return 0;
          }
        }
        v10 = 1;
      }
      slotInfos = v6->fields.slotInfos;
      ++v9;
      if ( !slotInfos )
        goto LABEL_33;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_34151352(
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
  if ( (byte_42B4916 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B52984(&Method_System_Array_Empty_int___);
    byte_42B4916 = 1;
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
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v21 = *(_WORD *)(v20 + 306);
    }
    if ( (v21 & 0x400) != 0 )
    {
      v22 = *v19[6];
      if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
        sub_AEB684(*v19[6]);
      if ( !*(_DWORD *)(v22 + 224) )
      {
        v23 = *v19[6];
        if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
          sub_AEB684(*v19[6]);
        j_il2cpp_runtime_class_init_0(v23);
      }
    }
    v24 = *v19[6];
    if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
      sub_AEB684(*v19[6]);
    ServantIndividuality = **(System_Int32_array ***)(v24 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_34151680(
           v12,
           &isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           targetType,
           v17);
}


bool __fastcall QuestRestrictionInfo__IsRestriction_34151680(
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
      sub_B52A5C(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
LABEL_29:
        v23 = sub_B52A88(this);
        sub_B52A28(v23, 0LL);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_29732520(v18, svtIndividuality, 0LL);
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
bool __fastcall QuestRestrictionInfo__IsRestriction_34152740(
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
  if ( (byte_42B4917 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B52984(&Method_System_Array_Empty_int___);
    byte_42B4917 = 1;
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
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v26 = *(_WORD *)(v25 + 306);
    }
    if ( (v26 & 0x400) != 0 )
    {
      v27 = *v24[6];
      if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
        sub_AEB684(*v24[6]);
      if ( !*(_DWORD *)(v27 + 224) )
      {
        v28 = *v24[6];
        if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
          sub_AEB684(*v24[6]);
        j_il2cpp_runtime_class_init_0(v28);
      }
    }
    v29 = *v24[6];
    if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
      sub_AEB684(*v24[6]);
    ServantIndividuality = **(System_Int32_array ***)(v29 + 184);
  }
  if ( QuestRestrictionInfo__IsRestriction_34151680(
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
    return QuestRestrictionInfo__IsRestrictionSlot_34152184(v16, ServantIndividuality, initPos, v30);
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass177_0_o *v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_34170356; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  bool v12; // zf
  peRenderTexture_ChangeLayerObject_o *v13; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20
  __int64 v16; // x0

  if ( (byte_42B493A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_B52984(&Method_System_Predicate_RestrictionEntity___ctor__);
    sub_B52984(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__DisplayClass177_0__IsSelectableNormalSupport_b__0__);
    sub_B52984(&QuestRestrictionInfo___c__DisplayClass177_0_TypeInfo);
    byte_42B493A = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass177_0_o *)sub_B52A54(QuestRestrictionInfo___c__DisplayClass177_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass177_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  v5->fields.pos = pos;
  IsMyServantOrNpcRestriction_34170356 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_34170356 )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_QuestRestrictionInfo___c__DisplayClass177_0__IsSelectableNormalSupport_b__0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v13 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v13 )
        return (char)v13;
      v12 = LODWORD(v13->fields.orgMaterial) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_B52A5C(IsMyServantOrNpcRestriction_34170356, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v10 = v5->fields.pos - 1;
  if ( v10 >= slotInfos->max_length )
  {
    v16 = sub_B52A88(IsMyServantOrNpcRestriction_34170356);
    sub_B52A28(v16, 0LL);
  }
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
  __int64 IsMyServantOrNpcRestriction_34170356; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  int v10; // w8
  unsigned int v11; // w9
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int max_length; // w9
  unsigned int v15; // w10
  __int64 v16; // x0

  if ( (byte_42B4935 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_42B4935 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    goto LABEL_23;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    goto LABEL_23;
  IsMyServantOrNpcRestriction_34170356 = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_34170356 = (__int64)BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    servantNumMax = *(_DWORD *)(*(_QWORD *)(IsMyServantOrNpcRestriction_34170356 + 184) + 156LL);
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
    IsMyServantOrNpcRestriction_34170356 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(
                                             this,
                                             pos,
                                             *(const MethodInfo **)&pos);
    if ( (IsMyServantOrNpcRestriction_34170356 & 1) == 0 )
    {
      if ( this->fields.isFixedMyServantPosition )
      {
        IsMyServantOrNpcRestriction_34170356 = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                          this,
                                                          *(const MethodInfo **)&svtId);
        if ( IsMyServantOrNpcRestriction_34170356 )
        {
          v10 = *(_DWORD *)(IsMyServantOrNpcRestriction_34170356 + 24);
          if ( v10 >= 1 )
          {
            v11 = 0;
            while ( v11 < v10 )
            {
              if ( *(_DWORD *)(IsMyServantOrNpcRestriction_34170356 + 4LL * (int)v11 + 32) == svtId )
                goto LABEL_23;
              if ( (int)++v11 >= v10 )
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
            v15 = 0;
            IsMyServantOrNpcRestriction_34170356 = 1LL;
            while ( v15 < max_length )
            {
              if ( targetVals->m_Items[v15 + 1] == svtId )
                goto LABEL_23;
              if ( (int)++v15 >= max_length )
                return IsMyServantOrNpcRestriction_34170356;
            }
LABEL_41:
            v16 = sub_B52A88(IsMyServantOrNpcRestriction_34170356);
            sub_B52A28(v16, 0LL);
          }
LABEL_40:
          LOBYTE(IsMyServantOrNpcRestriction_34170356) = 1;
          return IsMyServantOrNpcRestriction_34170356;
        }
      }
LABEL_42:
      sub_B52A5C(IsMyServantOrNpcRestriction_34170356, *(_QWORD *)&svtId);
    }
  }
LABEL_23:
  LOBYTE(IsMyServantOrNpcRestriction_34170356) = 0;
  return IsMyServantOrNpcRestriction_34170356;
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
  if ( (byte_42B4949 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B4949 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
    {
      v13 = sub_B52A88(this);
      sub_B52A28(v13, 0LL);
    }
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_B52A5C(this, *(_QWORD *)&pos);
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


bool __fastcall QuestRestrictionInfo__IsSlotRestrictionForSupport(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x21
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  unsigned int v14; // w22
  bool v15; // w20
  QuestRestrictionInfo_SlotInfo_o *v16; // x26
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  __int64 v18; // x27
  int size; // w8
  System_Int32_array *v20; // x8
  struct System_Collections_Generic_List_int____o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct System_Collections_Generic_List_Restriction_RangeType__o *v24; // x28
  __int64 v26; // x0

  if ( (byte_42B4952 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4952 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  svtId,
                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
        {
          v26 = sub_B52A88(Instance);
          sub_B52A28(v26, 0LL);
        }
        v16 = slotInfos->m_Items[v14];
        if ( !v16 )
          break;
        if ( v16->fields.slotType == 2 )
        {
          individualityList = v16->fields.individualityList;
          if ( !individualityList )
            break;
          v18 = 0LL;
          while ( 1 )
          {
            size = individualityList->fields._size;
            if ( (int)v18 >= size )
              break;
            if ( size <= (unsigned int)v18 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            v20 = individualityList->fields._items->m_Items[v18];
            if ( !v20 )
              goto LABEL_41;
            if ( *(_QWORD *)&v20->max_length )
            {
              v21 = v16->fields.individualityList;
              if ( !v21 )
                goto LABEL_41;
              if ( v21->fields._size <= (unsigned int)v18 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v22 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v21->fields._items->m_Items[v18],
                      v13,
                      (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                            v22,
                                            (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
              rangeTypeList = v16->fields.rangeTypeList;
              if ( !rangeTypeList )
                goto LABEL_41;
              if ( rangeTypeList->fields._size <= (unsigned int)v18 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              if ( rangeTypeList->fields._items->m_Items[v18 + 1] == 1 )
              {
                Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                              (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  return 0;
              }
              else
              {
                v24 = v16->fields.rangeTypeList;
                if ( !v24 )
                  goto LABEL_41;
                if ( v24->fields._size <= (unsigned int)v18 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                if ( v24->fields._items->m_Items[v18 + 1] == 2 )
                {
                  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                                (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
                  if ( ((unsigned __int8)Instance & 1) == 0 )
                    return 0;
                }
              }
              v15 = 1;
            }
            individualityList = v16->fields.individualityList;
            ++v18;
            if ( !individualityList )
              goto LABEL_41;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v14 >= max_length )
          return v15;
      }
LABEL_41:
      sub_B52A5C(Instance, v10);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x19
  unsigned int v8; // w21
  RestrictionWholeEntity_o *v9; // x8
  struct System_Int32_array *targetVals; // x23
  __int64 v11; // x8
  unsigned __int64 v12; // x24
  __int64 v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B4951 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_42B4951 = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
LABEL_24:
      v14 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v14, 0LL);
    }
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
LABEL_20:
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
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    v7,
                                                                    &entity,
                                                                    targetVals->m_Items[v12 + 1],
                                                                    (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
      return 0;
    LODWORD(v11) = targetVals->max_length;
    if ( (__int64)++v12 >= (int)v11 )
      goto LABEL_20;
  }
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_34156144(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x22
  struct System_Int32_array *uniqueIndividualitys; // x26
  __int64 v13; // x8
  ServantEntity_o *v14; // x23
  unsigned __int64 v15; // x27
  int32_t v16; // w24
  __int64 i; // x21
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  unsigned __int64 v21; // x19
  __int64 v22; // x0
  int32_t v24; // [xsp+8h] [xbp-58h]
  int32_t ServantImageLimitSealAfter; // [xsp+Ch] [xbp-54h]

  if ( (byte_42B491F & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B491F = 1;
  }
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_35;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_37;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_37:
    sub_B52A5C(Instance, v10);
  }
  v13 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v13 >= 1 )
  {
    v24 = limitCount;
    v14 = (ServantEntity_o *)Instance;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
      {
LABEL_38:
        v22 = sub_B52A88(Instance);
        sub_B52A28(v22, 0LL);
      }
      if ( !v14 )
        goto LABEL_37;
      v16 = uniqueIndividualitys->m_Items[v15 + 1];
      if ( ServantEntity__IsIndividuality(v14, v24, ServantImageLimitSealAfter, v16, 0LL) )
        break;
LABEL_33:
      LODWORD(v13) = uniqueIndividualitys->max_length;
      ++v15;
      Instance = 0LL;
      if ( (__int64)v15 >= (int)v13 )
        return (char)Instance;
    }
    for ( i = 8LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      v21 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v21 >= SHIDWORD(Instance[1].fields.saveNameList[3].fields._syncRoot) )
        goto LABEL_33;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_37;
      if ( v21 >= deckSvtIdList->max_length )
        goto LABEL_38;
      v10 = *((unsigned int *)&deckSvtIdList->obj.klass + i);
      if ( (int)v10 >= 1 )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      v10,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( !deckLimitCountList )
          goto LABEL_37;
        if ( v21 >= deckLimitCountList->max_length )
          goto LABEL_38;
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( !deckDispLimitCountList )
          goto LABEL_37;
        if ( v21 >= deckDispLimitCountList->max_length )
          goto LABEL_38;
        if ( !Instance )
          goto LABEL_37;
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
LABEL_35:
    LOBYTE(Instance) = 0;
  }
  return (char)Instance;
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_34156792(
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
  __int64 v14; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x24
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v17; // x8
  unsigned __int64 v18; // x25
  int32_t v19; // w26
  int32_t i; // w27
  PartyOrganizationListViewItem_o *v21; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  int32_t v23; // w0
  ServantEntity_o *v24; // x23
  int32_t svtLimitCount; // w22
  __int64 v27; // x0
  DataManager_o *v28; // [xsp+8h] [xbp-78h]
  struct System_Int32_array *v29; // [xsp+10h] [xbp-70h]
  int32_t ServantImageLimitSealAfter; // [xsp+1Ch] [xbp-64h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42B4920 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4920 = 1;
  }
  entity = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_38;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_38:
    sub_B52A5C(Instance, v14);
  }
  v17 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v17 < 1 )
    return 0;
  v18 = 0LL;
  v28 = Instance;
  v29 = uniqueIndividualitys;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)v17 )
    {
      v27 = sub_B52A88(Instance);
      sub_B52A28(v27, 0LL);
    }
    if ( !Instance )
      goto LABEL_38;
    v19 = uniqueIndividualitys->m_Items[v18 + 1];
    if ( ServantEntity__IsIndividuality((ServantEntity_o *)Instance, limitCount, ServantImageLimitSealAfter, v19, 0LL) )
      break;
LABEL_34:
    Instance = v28;
    uniqueIndividualitys = v29;
    ++v18;
    LODWORD(v17) = v29->max_length;
    if ( (__int64)v18 >= (int)v17 )
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
      v21 = (PartyOrganizationListViewItem_o *)Instance;
      v22 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v15,
             &entity,
             v23,
             (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v24 = (ServantEntity_o *)entity;
        svtLimitCount = v21->fields.svtLimitCount;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v21, 0LL);
        if ( !v24 )
          goto LABEL_38;
        if ( ServantEntity__IsIndividuality(v24, svtLimitCount, (int32_t)Instance, v19, 0LL) )
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
bool __fastcall QuestRestrictionInfo__IsUniqueServant_34155572(
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

  if ( (byte_42B491D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B491D = 1;
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
        sub_B52A5C(v7, *(_QWORD *)&svtId);
      if ( v6 >= deckSvtIdList->max_length )
      {
        v10 = sub_B52A88(v7);
        sub_B52A28(v10, 0LL);
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
bool __fastcall QuestRestrictionInfo__IsUniqueServant_34155796(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t i; // w23
  PartyOrganizationListViewItem_o *Member; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // kr00_16

  if ( (byte_42B491E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B491E = 1;
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
          sub_B52A5C(Member, *(_QWORD *)&svtId);
        v14 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL) == svtId )
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
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42B490D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42B490D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.deckSvtIdList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x24
  __int64 v6; // x1
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

  if ( (byte_42B490A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B490A = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    v5 = 8LL;
    v7 = 1LL - (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v19 = v5 - 8;
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
      *((_DWORD *)&deckSvtIdList->obj.klass + v5) = 0;
      if ( v7 + v5 != 8 )
      {
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, (int)v5 - 8, 0LL);
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
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                v21,
                                                0LL);
          if ( !v11 )
LABEL_31:
            sub_B52A5C(DispLimitCount, v6);
          if ( v19 >= v11->max_length )
          {
LABEL_30:
            v20 = sub_B52A88(DispLimitCount);
            sub_B52A28(v20, 0LL);
          }
          *((_DWORD *)&v11->obj.klass + v5) = (_DWORD)DispLimitCount;
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
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                  v22,
                                                  0LL);
            if ( v19 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v5) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v10, 0, 0LL);
            if ( v19 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v5) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v5;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_34146292(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x24
  __int64 v6; // x1
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

  if ( (byte_42B490B & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B490B = 1;
  }
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v5 = 8LL;
    v7 = 1LL - (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v19 = v5 - 8;
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
      *((_DWORD *)&deckSvtIdList->obj.klass + v5) = 0;
      if ( v7 + v5 != 8 )
      {
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, (int)v5 - 8, 0LL);
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
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                v21,
                                                0LL);
          if ( !v11 )
LABEL_31:
            sub_B52A5C(DispLimitCount, v6);
          if ( v19 >= v11->max_length )
          {
LABEL_30:
            v20 = sub_B52A88(DispLimitCount);
            sub_B52A28(v20, 0LL);
          }
          *((_DWORD *)&v11->obj.klass + v5) = (_DWORD)DispLimitCount;
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
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                  v22,
                                                  0LL);
            if ( v19 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v5) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v10, 0, 0LL);
            if ( v19 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v5) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v5;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_34146768(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x25
  struct System_Int32_array *v9; // x8
  PartyOrganizationListViewItem_o *Member; // x0
  char *v11; // x8
  struct System_Int32_array *deckSvtIdList; // x28
  PartyOrganizationListViewItem_o *v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  __int64 v17; // x0

  if ( (byte_42B490C & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B490C = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v7 = 0LL;
    v8 = (unsigned int)num;
    while ( 1 )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v7 >= *(int *)(*(_QWORD *)&Member->fields.frameType + 156LL) )
        return;
      if ( v7 == v8 )
        break;
      if ( !partyItem )
        goto LABEL_29;
      Member = PartyListViewItem__GetMember(partyItem, v7, 0LL);
      if ( !Member )
        goto LABEL_29;
      deckSvtIdList = this->fields.deckSvtIdList;
      v13 = Member;
      SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                    SvtId,
                                                    0LL);
      if ( !deckSvtIdList )
LABEL_29:
        sub_B52A5C(Member, partyItem);
      if ( v7 >= deckSvtIdList->max_length )
      {
LABEL_30:
        v17 = sub_B52A88(Member);
        sub_B52A28(v17, 0LL);
      }
      deckSvtIdList->m_Items[v7 + 1] = (int)Member;
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( deckLimitCountList )
      {
        if ( v7 >= deckLimitCountList->max_length )
          goto LABEL_30;
        deckLimitCountList->m_Items[v7 + 1] = v13->fields.svtLimitCount;
      }
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( deckDispLimitCountList )
      {
        Member = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v13, 0LL);
        if ( v7 >= deckDispLimitCountList->max_length )
          goto LABEL_30;
        v11 = (char *)deckDispLimitCountList + 4 * v7;
LABEL_22:
        *((_DWORD *)v11 + 8) = (_DWORD)Member;
      }
      ++v7;
    }
    v9 = this->fields.deckSvtIdList;
    if ( !v9 )
      goto LABEL_29;
    if ( v9->max_length <= v8 )
      goto LABEL_30;
    LODWORD(Member) = 0;
    v11 = (char *)v9 + 4 * v8;
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
  struct System_String_o *v9; // x20
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleServantConfConponent_o *p_supportPositionList; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x20
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_List_int__o *v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v110; // x20
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v124; // x20
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v131; // x20
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v138; // x20
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v145; // x20
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v158; // x20
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  BattleServantConfConponent_o *p_fields; // x25
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
  __int64 Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v179; // x1
  const MethodInfo *v180; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v181; // x20
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v188; // x20
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v195; // x20
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v204; // x0
  System_Int32_array **v205; // x0
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  RestrictionBaseEntity_o *v212; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v213; // x21
  struct RestrictionWholeEntity_array *Entities; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // x26
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  struct RestrictionWholeEntity_array *v222; // x19
  int max_length; // w8
  unsigned int v224; // w20
  RestrictionWholeEntity_o *v225; // x23
  System_Int32_array **SetPossiblePosition; // x0
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  Il2CppObject *v233; // x0
  System_Int32_array **v234; // x0
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v241; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v242; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v243; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v244; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v245; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v246; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v247; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v248; // x0
  Il2CppObject *v249; // x0
  System_Int32_array **v250; // x0
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  BalanceConfig_c *v257; // x0
  System_Int32_array **v258; // x0
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
  System_Int32_array **v265; // x0
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  System_Int32_array **v272; // x0
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  System_Int32_array **v279; // x0
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  Il2CppObject *v286; // x0
  System_Int32_array **v287; // x0
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v294; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v295; // x0
  Il2CppObject *v296; // x0
  System_Int32_array **v297; // x0
  System_String_array **v298; // x2
  System_String_array **v299; // x3
  System_Boolean_array **v300; // x4
  System_Int32_array **v301; // x5
  System_Int32_array *v302; // x6
  System_Int32_array *v303; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v304; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v305; // x0
  struct System_Int32_array *targetVals; // x8
  int32_t restrictionMessageId; // w2
  QuestRestrictionInfo_DialogMessageInfo_o *v308; // x26
  QuestRestrictionInfo_o *v309; // x26
  System_Collections_Generic_Dictionary_K__V__o **v310; // x28
  int isAllOutBattle; // w8
  const MethodInfo *v312; // x4
  __int64 v313; // x22
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  BalanceConfig_c *v320; // x0
  System_Int32_array **v321; // x0
  System_String_array **v322; // x2
  System_String_array **v323; // x3
  System_Boolean_array **v324; // x4
  System_Int32_array **v325; // x5
  System_Int32_array *v326; // x6
  System_Int32_array *v327; // x7
  int32_t v328; // w22
  int i; // w23
  BalanceConfig_c *v330; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v331; // x8
  __int64 v332; // x24
  System_Collections_Generic_List_int__o *v333; // x23
  int v334; // w8
  __int64 v335; // x19
  __int64 v336; // x26
  int32_t v337; // w2
  QuestRestrictionInfo_DialogMessageInfo_o *v338; // x26
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v339; // x23
  BattleServantConfConponent_c *klass; // x19
  QuestRestrictionInfo_SlotInfo_o *v341; // x27
  System_String_array **v342; // x2
  System_String_array **v343; // x3
  System_Boolean_array **v344; // x4
  System_Int32_array **v345; // x5
  System_Int32_array *v346; // x6
  System_Int32_array *v347; // x7
  int v348; // w20
  void **v349; // x0
  int servantNumMax; // w8
  BattleServantConfConponent_c *v351; // x8
  int32_t v352; // w23
  __int64 v353; // x8
  BattleServantConfConponent_c *v354; // x8
  __int64 v355; // x8
  QuestRestrictionInfo___c_c *v356; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_0; // x27
  Il2CppObject *v359; // x26
  struct QuestRestrictionInfo___c_StaticFields *v360; // x0
  System_String_array **v361; // x2
  System_String_array **v362; // x3
  System_Boolean_array **v363; // x4
  System_Int32_array **v364; // x5
  System_Int32_array *v365; // x6
  System_Int32_array *v366; // x7
  _BOOL4 v367; // w19
  QuestRestrictionInfo___c_c *v368; // x8
  struct QuestRestrictionInfo___c_StaticFields *v369; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_1; // x27
  Il2CppObject *v371; // x26
  struct QuestRestrictionInfo___c_StaticFields *v372; // x0
  System_String_array **v373; // x2
  System_String_array **v374; // x3
  System_Boolean_array **v375; // x4
  System_Int32_array **v376; // x5
  System_Int32_array *v377; // x6
  System_Int32_array *v378; // x7
  _BOOL4 v379; // w27
  QuestRestrictionInfo___c_c *v380; // x8
  struct QuestRestrictionInfo___c_StaticFields *v381; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_2; // x26
  Il2CppObject *v383; // x19
  struct QuestRestrictionInfo___c_StaticFields *v384; // x0
  System_String_array **v385; // x2
  System_String_array **v386; // x3
  System_Boolean_array **v387; // x4
  System_Int32_array **v388; // x5
  System_Int32_array *v389; // x6
  System_Int32_array *v390; // x7
  BattleServantConfConponent_c *v391; // x8
  __int64 v392; // x8
  BattleServantConfConponent_c *v393; // x8
  __int64 v394; // x8
  BattleServantConfConponent_c *v395; // x8
  __int64 v396; // x8
  int v397; // w8
  unsigned int v398; // w19
  WellFired_USFGOPlayBgmEventConditional_CondBGM_o *v399; // x27
  __int64 v400; // x8
  BattleServantConfConponent_c *v401; // x8
  __int64 v402; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v403; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v404; // x0
  BattleServantConfConponent_c *v405; // x8
  __int64 v406; // x8
  System_String_o *condValue; // x27
  BattleServantConfConponent_c *v408; // x8
  __int64 v409; // x8
  System_String_array **v410; // x2
  System_String_array **v411; // x3
  System_Boolean_array **v412; // x4
  System_Int32_array **v413; // x5
  System_Int32_array *v414; // x6
  System_Int32_array *v415; // x7
  BattleServantConfConponent_c *v416; // x8
  __int64 v417; // x8
  System_String_o **v418; // x26
  BattleServantConfConponent_o *v419; // x0
  System_Int32_array **v420; // x1
  BattleServantConfConponent_c *v421; // x8
  __int64 v422; // x27
  QuestRestrictionInfo___c_c *v423; // x0
  struct QuestRestrictionInfo___c_StaticFields *v424; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_3; // x26
  Il2CppObject *v426; // x19
  struct QuestRestrictionInfo___c_StaticFields *v427; // x0
  System_String_array **v428; // x2
  System_String_array **v429; // x3
  System_Boolean_array **v430; // x4
  System_Int32_array **v431; // x5
  System_Int32_array *v432; // x6
  System_Int32_array *v433; // x7
  BattleServantConfConponent_c *v434; // x10
  unsigned int namespaze; // w9
  void **v436; // x8
  __int64 *v437; // x8
  _DWORD *v438; // x11
  _DWORD *v439; // t1
  __int64 v440; // x8
  BattleServantConfConponent_c *v441; // x8
  __int64 v442; // x8
  BattleServantConfConponent_c *v443; // x8
  __int64 v444; // x8
  System_Int32_array **v445; // x0
  System_String_array **v446; // x2
  System_String_array **v447; // x3
  System_Boolean_array **v448; // x4
  System_Int32_array **v449; // x5
  System_Int32_array *v450; // x6
  System_Int32_array *v451; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v453; // w10
  unsigned int v454; // w11
  int v455; // w9
  int v456; // w20
  int32_t v457; // w19
  QuestRestrictionInfo_SlotInfo_o *v458; // x13
  int v459; // w8
  unsigned int v460; // w9
  __int64 v461; // x10
  char v462; // w21
  bool v463; // w8
  bool v464; // w8
  Il2CppObject *Value_int__object; // x0
  int v466; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v468; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v469; // x8
  __int64 v470; // x8
  Il2CppObject *v471; // x0
  System_Int32_array **v472; // x0
  System_String_array **v473; // x2
  System_String_array **v474; // x3
  System_Boolean_array **v475; // x4
  System_Int32_array **v476; // x5
  System_Int32_array *v477; // x6
  System_Int32_array *v478; // x7
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *restrictionSlotDictionary; // x8
  _BOOL8 v480; // x0
  __int64 v481; // x1
  int monitor; // w9
  unsigned int v483; // w10
  __int64 v484; // x11
  System_Text_StringBuilder_o *v485; // x20
  System_Text_StringBuilder_o *v486; // x21
  struct RestrictionWholeEntity_array *v487; // x19
  int v488; // w8
  unsigned int v489; // w22
  RestrictionWholeEntity_o *v490; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v493; // w25
  _BOOL4 v494; // w8
  System_Int32_array **v495; // x0
  System_String_array **v496; // x2
  System_String_array **v497; // x3
  System_Boolean_array **v498; // x4
  System_Int32_array **v499; // x5
  System_Int32_array *v500; // x6
  System_Int32_array *v501; // x7
  System_String_o *v502; // x19
  System_String_o *v503; // x0
  System_Int32_array **v504; // x0
  System_String_array **v505; // x2
  System_String_array **v506; // x3
  System_Boolean_array **v507; // x4
  System_Int32_array **v508; // x5
  System_Int32_array *v509; // x6
  System_Int32_array *v510; // x7
  __int64 v511; // x0
  __int64 v512; // x0
  __int64 v513; // x0
  BattleServantConfConponent_o *p_svtIdForceBattleList; // [xsp+0h] [xbp-190h]
  struct RestrictionWholeEntity_array **v515; // [xsp+8h] [xbp-188h]
  BattleServantConfConponent_o *p_confirmRestrictionMessage; // [xsp+10h] [xbp-180h]
  BattleServantConfConponent_o *p_restrictionMessage; // [xsp+18h] [xbp-178h]
  BattleServantConfConponent_o *v518; // [xsp+20h] [xbp-170h]
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
  _BOOL4 v533; // [xsp+90h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_restrictionSlotDetailDictionary; // [xsp+98h] [xbp-F8h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+A0h] [xbp-F0h]
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **p_dialogMessageInfoDictionary; // [xsp+A8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+B0h] [xbp-E0h]
  BattleServantConfConponent_o *p_deckSvtIdList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v539; // [xsp+B8h] [xbp-D8h]
  int32_t questIdb; // [xsp+C4h] [xbp-CCh]
  QuestRestrictionInfo_o *v542; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v543; // [xsp+D0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v544; // [xsp+D8h] [xbp-B8h] BYREF
  int v545; // [xsp+F0h] [xbp-A0h]
  int v546; // [xsp+F8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v547; // [xsp+100h] [xbp-90h] BYREF
  WarEntity_o *v548; // [xsp+118h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+120h] [xbp-70h] BYREF
  QuestPhaseEntity_o *v550; // [xsp+128h] [xbp-68h] BYREF
  WarEntity_o *v551; // [xsp+130h] [xbp-60h] BYREF

  if ( (byte_42B4908 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_B52984(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_B52984(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_B52984(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_B52984(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B52984(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_B52984(&Method_System_Func_RestrictionSlotEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__);
    sub_B52984(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_B52984(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_bool____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_int____TypeInfo);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_bool____TypeInfo);
    sub_B52984(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_B52984(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&Method_QuestRestrictionInfo___c__Setup_b__82_0__);
    sub_B52984(&Method_QuestRestrictionInfo___c__Setup_b__82_1__);
    sub_B52984(&Method_QuestRestrictionInfo___c__Setup_b__82_2__);
    sub_B52984(&Method_QuestRestrictionInfo___c__Setup_b__82_3__);
    sub_B52984(&QuestRestrictionInfo___c_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_10458/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_B52984(&StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4908 = 1;
  }
  v550 = 0LL;
  v551 = 0LL;
  v548 = 0LL;
  entity = 0LL;
  memset(&v547, 0, sizeof(v547));
  v546 = 0;
  this->fields.isRestriction = 0;
  p_restrictionMessage = (BattleServantConfConponent_o *)&this->fields.restrictionMessage;
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
    v10,
    *(System_String_array ***)&questId,
    *(System_String_array ***)&questPhase,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v9;
  p_confirmRestrictionMessage = (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.uniqueSvtRestrictionEntity,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (BattleServantConfConponent_o *)&this->fields.deckSvtIdList;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.deckSvtIdList, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (BattleServantConfConponent_o *)&this->fields.supportPositionList;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.supportPositionList, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0LL,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantNumRestrictionEntity,
    0LL,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.myServantNumRestrictionEntity,
    0LL,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList, 0LL, v66, v67, v68, v69, v70, v71);
  this->fields.isFatigure = 0;
  this->fields.isNpcEditablePos = 0;
  *(_WORD *)&this->fields.isNpcMultipleBattle = 0;
  this->fields.eventDeckNum = 0;
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v72;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v79,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.specifiedPositionList = v79;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.specifiedPositionList,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.isNotTransitionSupportList = 0;
  this->fields.supportInitIndex = 0;
  this->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0LL,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.uniqueIndividualityEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.uniqueIndividualityEntity, 0LL, v92, v93, v94, v95, v96, v97);
  this->fields.isAllOutBattle = 0;
  this->fields.isDataLostBattle = 0;
  this->fields.allOutBattleGroupNo = -1;
  this->fields.dataLostBattleId = -1;
  this->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = &this->fields.deckLimitCountList;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.deckLimitCountList, 0LL, v98, v99, v100, v101, v102, v103);
  this->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = &this->fields.deckDispLimitCountList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
    0LL,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  this->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&this->fields.isUniqueServant = 0;
  v110 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v110,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v110;
  p_positionsList = &this->fields.positionsList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.positionsList,
    (System_Int32_array **)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  v117 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v117,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v117;
  p_fixedIndividualitiesList = &this->fields.fixedIndividualitiesList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fixedIndividualitiesList,
    (System_Int32_array **)v117,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  this->fields.isFixedMyServantPosition = 0;
  v124 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v124,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v124;
  p_myServantPositionsList = &this->fields.myServantPositionsList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.myServantPositionsList,
    (System_Int32_array **)v124,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  v131 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v131,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v131;
  p_fixedMyServantIndividualitiesList = &this->fields.fixedMyServantIndividualitiesList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantIndividualitiesList,
    (System_Int32_array **)v131,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  this->fields.isFixedSupportPosition = 0;
  v138 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v138,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v138;
  p_fixedSupportIndividualitiesList = &this->fields.fixedSupportIndividualitiesList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportIndividualitiesList,
    (System_Int32_array **)v138,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  this->fields.isFixedNpcPosition = 0;
  v145 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v145,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v145;
  p_fixedNpcIndividualitiesList = &this->fields.fixedNpcIndividualitiesList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fixedNpcIndividualitiesList,
    (System_Int32_array **)v145,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  this->fields.npcPositionList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.npcPositionList, 0LL, v152, v153, v154, v155, v156, v157);
  v158 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v158,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v158;
  p_needStartingIndividualitiesList = &this->fields.needStartingIndividualitiesList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.needStartingIndividualitiesList,
    (System_Int32_array **)v158,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  this->fields.isNeedStarting = 0;
  this->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&this->fields.isMyServantOrNpc = 0;
  this->fields.slotInfos = 0LL;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, 0LL, v166, v167, v168, v169, v170, v171);
  this->fields.dialogMessageInfoDictionary = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
    0LL,
    v172,
    v173,
    v174,
    v175,
    v176,
    v177);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
    v181 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v181,
      (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v181;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&this->fields.restrictionSlotDictionary;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDictionary,
      (System_Int32_array **)v181,
      v182,
      v183,
      v184,
      v185,
      v186,
      v187);
    v188 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v188,
      (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v188;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.restrictionSlotDetailDictionary;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDetailDictionary,
      (System_Int32_array **)v188,
      v189,
      v190,
      v191,
      v192,
      v193,
      v194);
    v195 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v195,
      (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v195;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
      (System_Int32_array **)v195,
      v196,
      v197,
      v198,
      v199,
      v200,
      v201);
    v543 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v543,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
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
      v204 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v204 = BalanceConfig_TypeInfo;
      }
      v205 = (System_Int32_array **)sub_B5299C(int___TypeInfo, (unsigned int)v204->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (BattleServantConfConponent_c *)v205;
      sub_B52920(p_deckSvtIdList, v205, v206, v207, v208, v209, v210, v211);
    }
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = RestrictionBaseEntity__HasFlag(
                                       (RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster,
                                       32LL,
                                       0LL);
    v212 = this->fields.restrictionBaseEntity;
    this->fields.isNotSingleSupportOnly = Master_WarQuestSelectionMaster & 1;
    if ( !v212 )
      goto LABEL_378;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v212,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v213 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
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
    v542 = this;
    this->fields.restrictionWholeEntities = Entities;
    p_restrictionWholeEntities = &this->fields.restrictionWholeEntities;
    sub_B52920(
      (BattleServantConfConponent_o *)p_restrictionWholeEntities,
      (System_Int32_array **)Entities,
      v216,
      v217,
      v218,
      v219,
      v220,
      v221);
    v222 = *p_restrictionWholeEntities;
    v515 = p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_378;
    max_length = v222->max_length;
    if ( max_length >= 1 )
    {
      v224 = 0;
      p_fixedSupportIndividualities = (BattleServantConfConponent_o *)&v542->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (BattleServantConfConponent_o *)&v542->fields.fixedNpcIndividualities;
      p_uniqueIndividualitys = (BattleServantConfConponent_o *)&v542->fields.uniqueIndividualitys;
      p_needStartingIndividualities = (BattleServantConfConponent_o *)&v542->fields.needStartingIndividualities;
      v518 = p_supportPositionList;
      while ( 2 )
      {
        if ( v224 >= max_length )
          goto LABEL_379;
        v225 = v222->m_Items[v224];
        if ( v225 )
        {
          switch ( v225->fields.type )
          {
            case 2:
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = QuestGroupMaster__GetGroupId(
                                                 (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                                                 questId,
                                                 17,
                                                 0LL);
              v542->fields.allOutBattleGroupNo = Master_WarQuestSelectionMaster;
              v542->fields.isAllOutBattle = 1;
              goto LABEL_66;
            case 3:
              Master_WarQuestSelectionMaster = System_Linq_Enumerable__Min(
                                                 (System_Collections_Generic_IEnumerable_int__o *)v225->fields.targetVals,
                                                 0LL);
              v542->fields.servantNumMax = Master_WarQuestSelectionMaster - 1;
              goto LABEL_66;
            case 4:
              v243 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_positionsList;
              Master_WarQuestSelectionMaster = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v225, 0LL);
              if ( !v243 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v243,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_bool____Add__);
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v244 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v244 )
                goto LABEL_378;
              v245 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52A44(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v244,
                v245,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
              v542->fields.isFixedPosition = 1;
              goto LABEL_66;
            case 5:
              v246 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_myServantPositionsList;
              Master_WarQuestSelectionMaster = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v225, 0LL);
              if ( !v246 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v246,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_bool____Add__);
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v247 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedMyServantIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v247 )
                goto LABEL_378;
              v248 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52A44(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v247,
                v248,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
              v542->fields.isFixedMyServantPosition = 1;
              goto LABEL_66;
            case 6:
              SetPossiblePosition = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v225, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)SetPossiblePosition;
              sub_B52920(p_supportPositionList, SetPossiblePosition, v227, v228, v229, v230, v231, v232);
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v233 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v234 = (System_Int32_array **)sub_B52A44(v233, int___TypeInfo);
              p_fixedSupportIndividualities->klass = (BattleServantConfConponent_c *)v234;
              sub_B52920(p_fixedSupportIndividualities, v234, v235, v236, v237, v238, v239, v240);
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v241 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedSupportIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v241 )
                goto LABEL_378;
              v242 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52A44(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v241,
                v242,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
              v542->fields.isFixedSupportPosition = 1;
              goto LABEL_66;
            case 7:
              v279 = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v225, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)v279;
              sub_B52920(p_supportPositionList, v279, v280, v281, v282, v283, v284, v285);
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v286 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v287 = (System_Int32_array **)sub_B52A44(v286, int___TypeInfo);
              p_fixedNpcIndividualities->klass = (BattleServantConfConponent_c *)v287;
              sub_B52920(p_fixedNpcIndividualities, v287, v288, v289, v290, v291, v292, v293);
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v294 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedNpcIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v294 )
                goto LABEL_378;
              v295 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52A44(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v294,
                v295,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
              v542->fields.isFixedNpcPosition = 1;
              goto LABEL_66;
            case 8:
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v296 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v297 = (System_Int32_array **)sub_B52A44(v296, int___TypeInfo);
              p_needStartingIndividualities->klass = (BattleServantConfConponent_c *)v297;
              sub_B52920(p_needStartingIndividualities, v297, v298, v299, v300, v301, v302, v303);
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v304 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_needStartingIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v304 )
                goto LABEL_378;
              v305 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52A44(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v304,
                v305,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
              v542->fields.isNeedStarting = 1;
              goto LABEL_66;
            case 9:
              Master_WarQuestSelectionMaster = (__int64)v225->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v249 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v250 = (System_Int32_array **)sub_B52A44(v249, int___TypeInfo);
              p_uniqueIndividualitys->klass = (BattleServantConfConponent_c *)v250;
              sub_B52920(p_uniqueIndividualitys, v250, v251, v252, v253, v254, v255, v256);
              v257 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v257 = BalanceConfig_TypeInfo;
              }
              v258 = (System_Int32_array **)sub_B5299C(int___TypeInfo, (unsigned int)v257->static_fields->DeckMemberMax);
              v542->fields.deckSvtIdList = (struct System_Int32_array *)v258;
              sub_B52920(p_deckSvtIdList, v258, v259, v260, v261, v262, v263, v264);
              v265 = (System_Int32_array **)sub_B5299C(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v542->fields.deckLimitCountList = (struct System_Int32_array *)v265;
              sub_B52920((BattleServantConfConponent_o *)p_deckLimitCountList, v265, v266, v267, v268, v269, v270, v271);
              v272 = (System_Int32_array **)sub_B5299C(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v542->fields.deckDispLimitCountList = (struct System_Int32_array *)v272;
              sub_B52920(
                (BattleServantConfConponent_o *)p_deckDispLimitCountList,
                v272,
                v273,
                v274,
                v275,
                v276,
                v277,
                v278);
              p_supportPositionList = v518;
              v542->fields.isUniqueIndividuality = 1;
              goto LABEL_66;
            case 0xA:
              v542->fields.isDataLostBattle = 1;
              targetVals = v225->fields.targetVals;
              if ( !targetVals )
                goto LABEL_378;
              if ( !targetVals->max_length )
                goto LABEL_379;
              v542->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_66:
              restrictionMessageId = v225->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_75;
              if ( !v213 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 v213,
                                                 &entity,
                                                 restrictionMessageId,
                                                 (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                goto LABEL_75;
              Master_WarQuestSelectionMaster = (__int64)v543;
              if ( !v543 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v543,
                                                 (WarBoardManager_TaskList_o *)entity,
                                                 (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                goto LABEL_75;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v543,
                (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
              v308 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B52A54(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v308, 0LL);
              if ( !v308 )
                goto LABEL_378;
              v308->fields.restrictionType = v225->fields.type;
              if ( !entity )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_378;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                entity->fields.id,
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v308,
                (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_75:
              max_length = v222->max_length;
              if ( (int)++v224 >= max_length )
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
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestMaster___);
    v309 = v542;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
      &v551,
      questId,
      (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_WarQuestSelectionMaster = (__int64)v551;
    if ( !v551 )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = QuestEntity__HasFlag_25292224((QuestEntity_o *)v551, 0x100000LL, questPhase, 0LL);
    v310 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v542 )
        goto LABEL_378;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v542->fields.isAllOutBattle;
    }
    v542->fields.isNoSupportBattle = isAllOutBattle != 0;
    Master_WarQuestSelectionMaster = (__int64)v551;
    if ( !v551 )
      goto LABEL_378;
    v542->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_25292224(
                                              (QuestEntity_o *)v551,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_WarQuestSelectionMaster = (__int64)v551;
    if ( !v551 )
      goto LABEL_378;
    v542->fields.isFatigure = QuestEntity__HasFlag_25292224((QuestEntity_o *)v551, 0x200000LL, questPhase, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_378:
      sub_B52A5C(Master_WarQuestSelectionMaster, v179);
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
           &v550,
           questId,
           questPhase,
           v312) )
    {
      Master_WarQuestSelectionMaster = sub_B5299C(int___TypeInfo, 1LL);
      if ( !v550 )
        goto LABEL_378;
      v313 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = QuestPhaseEntity__GetSingleForceSvtId(v550, v179);
      if ( !v313 )
        goto LABEL_378;
      if ( !*(_DWORD *)(v313 + 24) )
        goto LABEL_379;
      *(_DWORD *)(v313 + 32) = Master_WarQuestSelectionMaster;
      p_svtIdForceBattleList->klass = (BattleServantConfConponent_c *)v313;
      sub_B52920(p_svtIdForceBattleList, (System_Int32_array **)v313, v314, v315, v316, v317, v318, v319);
      Master_WarQuestSelectionMaster = (__int64)v550;
      if ( !v550 )
        goto LABEL_378;
      v542->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v550, v179);
      Master_WarQuestSelectionMaster = (__int64)v550;
      if ( !v550 )
        goto LABEL_378;
      v542->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v550, v179);
    }
    else
    {
      v542->fields.correctionIconId = -1;
    }
    v320 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v320 = BalanceConfig_TypeInfo;
    }
    v321 = (System_Int32_array **)sub_B5299C(
                                    QuestRestrictionInfo_SlotInfo___TypeInfo,
                                    (unsigned int)v320->static_fields->DeckMemberMax);
    p_fields->klass = (BattleServantConfConponent_c *)v321;
    sub_B52920(p_fields, v321, v322, v323, v324, v325, v326, v327);
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v328 = 1;
    for ( i = 1; ; i = v352 & v539 )
    {
      v330 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v330 = BalanceConfig_TypeInfo;
      }
      if ( v328 > v330->static_fields->DeckMemberMax )
        break;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_378;
      questIdb = i;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      Master_WarQuestSelectionMaster = (__int64)RestrictionSlotMaster__GetEntities(
                                                  (RestrictionSlotMaster_o *)Master_WarQuestSelectionMaster,
                                                  (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                                  v328,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      v331 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_WarQuestSelectionMaster
                                                                                        + 24);
      v332 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
      v539 = v331 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_378;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
        v328,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v332,
        (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v333 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v333,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      v334 = *(_DWORD *)(v332 + 24);
      if ( v334 >= 1 )
      {
        v335 = 0LL;
        while ( (unsigned int)v335 < v334 )
        {
          v336 = *(_QWORD *)(v332 + 32 + 8 * v335);
          if ( !v336 || !v333 )
            goto LABEL_378;
          Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                             v333,
                                             *(_DWORD *)(v336 + 40),
                                             (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            System_Collections_Generic_List_int___Add(
              v333,
              *(_DWORD *)(v336 + 40),
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          v337 = *(_DWORD *)(v336 + 44);
          if ( v337 >= 1 )
          {
            if ( !v213 )
              goto LABEL_378;
            Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                               v213,
                                               &v548,
                                               v337,
                                               (const MethodInfo_23E2334 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              Master_WarQuestSelectionMaster = (__int64)v543;
              if ( !v543 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v543,
                                                 (WarBoardManager_TaskList_o *)v548,
                                                 (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v543,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v548,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
                v338 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B52A54(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v338, 0LL);
                if ( !v338 )
                  goto LABEL_378;
                v338->fields.slotNo = v328;
                if ( !v548 )
                  goto LABEL_378;
                Master_WarQuestSelectionMaster = (__int64)*v310;
                if ( !*v310 )
                  goto LABEL_378;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                  v548->fields.id,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v338,
                  (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v334 = *(_DWORD *)(v332 + 24);
          if ( (int)++v335 >= v334 )
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
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      Master_WarQuestSelectionMaster = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                                  (RestrictionSlotDetailMaster_o *)Master_WarQuestSelectionMaster,
                                                  v333,
                                                  0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_378;
      v339 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Master_WarQuestSelectionMaster;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        *p_restrictionSlotDetailDictionary,
        v328,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v341 = (QuestRestrictionInfo_SlotInfo_o *)sub_B52A54(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v341, 0LL);
      if ( !klass )
        goto LABEL_378;
      if ( v341 )
      {
        Master_WarQuestSelectionMaster = sub_B52A44(v341, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_WarQuestSelectionMaster )
        {
          v513 = sub_B52A7C(0LL);
          sub_B52A28(v513, 0LL);
        }
      }
      v348 = v328 - 1;
      if ( (unsigned int)(v328 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_379;
      v349 = &klass->_1.image + v348;
      v349[4] = v341;
      sub_B52920(
        (BattleServantConfConponent_o *)(v349 + 4),
        (System_Int32_array **)v341,
        v342,
        v343,
        v344,
        v345,
        v346,
        v347);
      v309 = v542;
      servantNumMax = v542->fields.servantNumMax;
      if ( servantNumMax >= 1 && v348 >= servantNumMax )
      {
        v351 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        v352 = questIdb;
        if ( (unsigned int)v348 >= LODWORD(v351->_1.namespaze) )
          goto LABEL_379;
        v353 = *((_QWORD *)&v351->_1.byval_arg.data + v348);
        if ( !v353 )
          goto LABEL_378;
        *(_DWORD *)(v353 + 16) = 5;
        v354 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v348 >= LODWORD(v354->_1.namespaze) )
          goto LABEL_379;
        v355 = *((_QWORD *)&v354->_1.byval_arg.data + v348);
        if ( !v355 )
          goto LABEL_378;
        *(_BYTE *)(v355 + 48) = 0;
        v310 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
        goto LABEL_251;
      }
      v356 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v356 = QuestRestrictionInfo___c_TypeInfo;
      }
      static_fields = v356->static_fields;
      _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__82_0;
      if ( !_9__82_0 )
      {
        if ( (BYTE3(v356->vtable._0_Equals.methodPtr) & 4) != 0 && !v356->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v356);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v359 = (Il2CppObject *)static_fields->__9;
        _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_0,
          v359,
          Method_QuestRestrictionInfo___c__Setup_b__82_0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v360 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v360->__9__82_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v360->__9__82_0,
          (System_Int32_array **)_9__82_0,
          v361,
          v362,
          v363,
          v364,
          v365,
          v366);
      }
      v367 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v332,
               (System_Func_T__bool__o *)_9__82_0,
               (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v368 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v368 = QuestRestrictionInfo___c_TypeInfo;
      }
      v369 = v368->static_fields;
      _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v369->__9__82_1;
      if ( !_9__82_1 )
      {
        if ( (BYTE3(v368->vtable._0_Equals.methodPtr) & 4) != 0 && !v368->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v368);
          v369 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v371 = (Il2CppObject *)v369->__9;
        _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_1,
          v371,
          Method_QuestRestrictionInfo___c__Setup_b__82_1__,
          (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v372 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v372->__9__82_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v372->__9__82_1,
          (System_Int32_array **)_9__82_1,
          v373,
          v374,
          v375,
          v376,
          v377,
          v378);
      }
      v379 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v332,
               (System_Func_T__bool__o *)_9__82_1,
               (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v380 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v380 = QuestRestrictionInfo___c_TypeInfo;
      }
      v381 = v380->static_fields;
      _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v381->__9__82_2;
      if ( !_9__82_2 )
      {
        v533 = v367;
        if ( (BYTE3(v380->vtable._0_Equals.methodPtr) & 4) != 0 && !v380->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v380);
          v381 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v383 = (Il2CppObject *)v381->__9;
        _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_2,
          v383,
          Method_QuestRestrictionInfo___c__Setup_b__82_2__,
          (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v384 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v384->__9__82_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_2;
        sub_B52920(
          (BattleServantConfConponent_o *)&v384->__9__82_2,
          (System_Int32_array **)_9__82_2,
          v385,
          v386,
          v387,
          v388,
          v389,
          v390);
        v367 = v533;
      }
      Master_WarQuestSelectionMaster = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v332,
                                         (System_Func_T__bool__o *)_9__82_2,
                                         (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      if ( v379 || !v367 || (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( (v367 || !v379) | Master_WarQuestSelectionMaster & 1 )
        {
          if ( !v367 && !v379 && (((unsigned int)Master_WarQuestSelectionMaster ^ 1) & 1) == 0 )
          {
            v393 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v348 >= LODWORD(v393->_1.namespaze) )
              goto LABEL_379;
            v394 = *((_QWORD *)&v393->_1.byval_arg.data + v348);
            if ( !v394 )
              goto LABEL_378;
            *(_DWORD *)(v394 + 16) = 2;
            v542->fields.supportInitIndex = v328;
            if ( !v339 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( !(Master_WarQuestSelectionMaster & 1 | (!v367 || !v379)) )
          {
            v443 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v348 >= LODWORD(v443->_1.namespaze) )
              goto LABEL_379;
            v444 = *((_QWORD *)&v443->_1.byval_arg.data + v348);
            if ( !v444 )
              goto LABEL_378;
            *(_DWORD *)(v444 + 16) = 3;
            v542->fields.isMyServantOrNpc = 1;
            if ( !v339 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( ((v367 || v379) & (unsigned int)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v441 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v348 >= LODWORD(v441->_1.namespaze) )
              goto LABEL_379;
            v442 = *((_QWORD *)&v441->_1.byval_arg.data + v348);
            if ( !v442 )
              goto LABEL_378;
            *(_DWORD *)(v442 + 16) = 4;
            v542->fields.isMyServantOrSupport = 1;
            if ( !v339 )
              goto LABEL_378;
            goto LABEL_196;
          }
        }
        else
        {
          v395 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_378;
          if ( (unsigned int)v348 >= LODWORD(v395->_1.namespaze) )
            goto LABEL_379;
          v396 = *((_QWORD *)&v395->_1.byval_arg.data + v348);
          if ( !v396 )
            goto LABEL_378;
          *(_DWORD *)(v396 + 16) = 1;
        }
        if ( !v339 )
          goto LABEL_378;
      }
      else
      {
        v391 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v348 >= LODWORD(v391->_1.namespaze) )
          goto LABEL_379;
        v392 = *((_QWORD *)&v391->_1.byval_arg.data + v348);
        if ( !v392 )
          goto LABEL_378;
        *(_DWORD *)(v392 + 16) = 0;
        if ( !v339 )
          goto LABEL_378;
      }
LABEL_196:
      v397 = v339->max_length;
      if ( v397 >= 1 )
      {
        v398 = 0;
        while ( v398 < v397 )
        {
          v399 = v339->m_Items[v398];
          if ( !v399 )
            goto LABEL_378;
          if ( !*(_DWORD *)(v332 + 24) )
            break;
          v400 = *(_QWORD *)(v332 + 32);
          if ( !v400 )
            goto LABEL_378;
          if ( v399->fields.condType == *(_DWORD *)(v400 + 40) )
          {
            v401 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v348 >= LODWORD(v401->_1.namespaze) )
              goto LABEL_379;
            v402 = *((_QWORD *)&v401->_1.byval_arg.data + v348);
            if ( !v402 )
              goto LABEL_378;
            if ( *(_DWORD *)(v402 + 16) <= 2u )
            {
              Master_WarQuestSelectionMaster = (__int64)v399[1].monitor;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v403 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v402 + 24);
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v403 )
                goto LABEL_378;
              v404 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52A44(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v403,
                v404,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
              v405 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_378;
              if ( (unsigned int)v348 >= LODWORD(v405->_1.namespaze) )
                goto LABEL_379;
              v406 = *((_QWORD *)&v405->_1.byval_arg.data + v348);
              if ( !v406 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = *(_QWORD *)(v406 + 32);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              System_Collections_Generic_List_VoiceCondType_Type___Add(
                (System_Collections_Generic_List_VoiceCondType_Type__o *)Master_WarQuestSelectionMaster,
                v399[1].fields.condType,
                (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
            }
            if ( LODWORD(v399[1].klass) == 2 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10458/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/,
                                                          0LL);
              condValue = (System_String_o *)Master_WarQuestSelectionMaster;
            }
            else
            {
              condValue = (System_String_o *)v399->fields.condValue;
            }
            v408 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v348 >= LODWORD(v408->_1.namespaze) )
              goto LABEL_379;
            v409 = *((_QWORD *)&v408->_1.byval_arg.data + v348);
            if ( !v409 )
              goto LABEL_378;
            Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(*(System_String_o **)(v409 + 40), 0LL);
            v416 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v348 >= LODWORD(v416->_1.namespaze) )
              goto LABEL_379;
            v417 = *((_QWORD *)&v416->_1.byval_arg.data + v348);
            if ( !v417 )
              goto LABEL_378;
            v418 = (System_String_o **)(v417 + 40);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              *v418 = condValue;
              v419 = (BattleServantConfConponent_o *)(v417 + 40);
              v420 = (System_Int32_array **)condValue;
            }
            else
            {
              v420 = (System_Int32_array **)System_String__Concat_44570600(
                                              *v418,
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              condValue,
                                              0LL);
              *v418 = (System_String_o *)v420;
              v419 = (BattleServantConfConponent_o *)v418;
            }
            sub_B52920(v419, v420, v410, v411, v412, v413, v414, v415);
          }
          v397 = v339->max_length;
          if ( (int)++v398 >= v397 )
            goto LABEL_231;
        }
        goto LABEL_379;
      }
LABEL_231:
      v421 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      if ( (unsigned int)v348 >= LODWORD(v421->_1.namespaze) )
        goto LABEL_379;
      v422 = *((_QWORD *)&v421->_1.byval_arg.data + v348);
      v423 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v423 = QuestRestrictionInfo___c_TypeInfo;
      }
      v424 = v423->static_fields;
      _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v424->__9__82_3;
      if ( !_9__82_3 )
      {
        if ( (BYTE3(v423->vtable._0_Equals.methodPtr) & 4) != 0 && !v423->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v423);
          v424 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v426 = (Il2CppObject *)v424->__9;
        _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_3,
          v426,
          Method_QuestRestrictionInfo___c__Setup_b__82_3__,
          (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__);
        v427 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v427->__9__82_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__82_3;
        sub_B52920(
          (BattleServantConfConponent_o *)&v427->__9__82_3,
          (System_Int32_array **)_9__82_3,
          v428,
          v429,
          v430,
          v431,
          v432,
          v433);
      }
      Master_WarQuestSelectionMaster = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         v339,
                                         (System_Func_T__bool__o *)_9__82_3,
                                         (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
      if ( !v422 )
        goto LABEL_378;
      *(_BYTE *)(v422 + 48) = (Master_WarQuestSelectionMaster & 1) == 0;
      v434 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      namespaze = (unsigned int)v434->_1.namespaze;
      v309 = v542;
      if ( v348 >= namespaze )
        goto LABEL_379;
      v436 = &v434->_1.image + v348;
      v439 = v436[4];
      v437 = (__int64 *)(v436 + 4);
      v438 = v439;
      if ( !v439 )
        goto LABEL_378;
      v310 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
      if ( v438[4] == 1 && *((_BYTE *)v438 + 48) )
      {
        v542->fields.isNpcEditablePos = 1;
        namespaze = (unsigned int)v434->_1.namespaze;
      }
      if ( v348 >= namespaze )
        goto LABEL_379;
      v440 = *v437;
      if ( !v440 )
        goto LABEL_378;
      v352 = questIdb;
      *(_BYTE *)(v440 + 49) = *(_DWORD *)(v332 + 24) != 0;
LABEL_251:
      ++v328;
    }
    Master_WarQuestSelectionMaster = (__int64)v543;
    if ( !v543 )
      goto LABEL_378;
    v445 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v543,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    v309->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v445;
    sub_B52920(
      (BattleServantConfConponent_o *)&v309->fields.restrictionMessageEntities,
      v445,
      v446,
      v447,
      v448,
      v449,
      v450,
      v451);
    slotInfos = v309->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_378;
    v453 = slotInfos->max_length;
    if ( v453 >= 1 )
    {
      v454 = 0;
      v455 = 0;
      v456 = 0;
      v457 = 0;
      while ( v454 < v453 )
      {
        v458 = slotInfos->m_Items[v454];
        if ( !v458 )
          goto LABEL_378;
        switch ( v458->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v457;
            break;
          case 1:
            ++v456;
            break;
          case 2:
            ++v455;
            break;
          default:
            break;
        }
        if ( (int)++v454 >= v453 )
          goto LABEL_277;
      }
LABEL_379:
      v511 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v511, 0LL);
    }
    v457 = 0;
    v456 = 0;
    v455 = 0;
LABEL_277:
    if ( v455 == 0 && (i & 1) != 0 )
      v309->fields.isNoSupportBattle = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                                (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                                                v309->fields.questId,
                                                v309->fields.questPhase,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    v459 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
    if ( v459 < 1 )
    {
LABEL_290:
      v462 = 0;
    }
    else
    {
      v460 = 0;
      while ( 1 )
      {
        if ( v460 >= v459 )
          goto LABEL_379;
        v461 = *(_QWORD *)(Master_WarQuestSelectionMaster + 8LL * (int)v460 + 32);
        if ( !v461 )
          goto LABEL_378;
        if ( *(_BYTE *)(v461 + 97) )
          break;
        if ( (int)++v460 >= v459 )
          goto LABEL_290;
      }
      v462 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)v551;
    if ( !v551 )
      goto LABEL_378;
    v463 = QuestEntity__HasFlag_25292224((QuestEntity_o *)v551, 0x10000000LL, questPhase, 0LL)
        || (v456 > 0) & (unsigned __int8)v462 & (v457 > 0);
    v309->fields.isNpcMultipleBattle = v463;
    Master_WarQuestSelectionMaster = (__int64)v551;
    if ( !v551 )
      goto LABEL_378;
    v464 = QuestEntity__HasFlag_25292224((QuestEntity_o *)v551, 0x20000000LL, questPhase, 0LL)
        || (v457 == 0) & (unsigned __int8)v462 & (v456 > 0);
    Master_WarQuestSelectionMaster = (__int64)v309->fields.restrictionBaseEntity;
    v309->fields.isNpcOnlyBattle = v464;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_1A43AFC *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v466 = 2;
      else
        v466 = 1;
      DeckMemberMax = v309->fields.servantNumMax;
      v309->fields.servantNumMin = v466;
      if ( !DeckMemberMax )
      {
        v468 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v468 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v468->static_fields->DeckMemberMax;
        v309->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v309->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v309->fields.isNpcMultipleBattle )
        v309->fields.myServantNumMax = v457;
      goto LABEL_324;
    }
    v309->fields.myServantNumMax = v457;
    if ( v457 == 1 && DeckMemberMax == 1 )
    {
      Master_WarQuestSelectionMaster = (__int64)v309->fields.restrictionSlotDetailDictionary;
      v309->fields.isFixedMyServantSingle = 1;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (__int64)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                                                    1,
                                                    (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_324;
        v469 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_WarQuestSelectionMaster
                                                                                          + 24);
        if ( !v469 )
          goto LABEL_324;
        if ( !(_DWORD)v469 )
          goto LABEL_379;
        v470 = *(_QWORD *)(Master_WarQuestSelectionMaster + 32);
        if ( v470 )
        {
          Master_WarQuestSelectionMaster = *(_QWORD *)(v470 + 40);
          if ( Master_WarQuestSelectionMaster )
          {
            v471 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
            v472 = (System_Int32_array **)sub_B52A44(v471, int___TypeInfo);
            v309->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)v472;
            sub_B52920(
              (BattleServantConfConponent_o *)&v309->fields.fixedMyServantSingleIndividualities,
              v472,
              v473,
              v474,
              v475,
              v476,
              v477,
              v478);
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
                                       (const MethodInfo_2F27904 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v309->fields.restrictionSlotDictionary;
    v309->fields.isSupportOnly = (int)Master_WarQuestSelectionMaster > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = (__int64)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                                restrictionSlotDictionary,
                                                (const MethodInfo_2F27AAC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      &v544,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2411CCC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v547 = v544;
    do
    {
      v480 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
               &v547,
               (const MethodInfo_288A750 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v480 )
        break;
      if ( !v547.fields.currentValue )
        sub_B52A5C(v480, v481);
      monitor = (int)v547.fields.currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v483 = 0;
        while ( 1 )
        {
          if ( v483 >= monitor )
          {
            v512 = sub_B52A88(v480);
            sub_B52A28(v512, 0LL);
          }
          v484 = *((_QWORD *)&v547.fields.currentValue[2].klass + (int)v483);
          if ( !v484 )
            sub_B52A5C(v480, v481);
          if ( *(_DWORD *)(v484 + 28) == 1 )
            break;
          if ( (int)++v483 >= monitor )
            goto LABEL_336;
        }
        v309->fields.isSupportOnly = 0;
        break;
      }
LABEL_336:
      ;
    }
    while ( v309->fields.isSupportOnly );
    v545 = 3158;
    v546 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v547,
      (const MethodInfo_288A74C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    if ( v545 == 3158 )
      v546 = 0;
    v485 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v485, 0LL);
    v486 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v486, 0LL);
    v487 = *v515;
    if ( !*v515 )
      goto LABEL_378;
    v488 = v487->max_length;
    if ( v488 >= 1 )
    {
      v489 = 0;
      while ( 1 )
      {
        if ( v489 >= v488 )
          goto LABEL_379;
        v490 = v487->m_Items[v489];
        if ( !v490 )
          goto LABEL_378;
        Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(v490->fields.summary, 0LL);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          break;
LABEL_367:
        v488 = v487->max_length;
        if ( (int)++v489 >= v488 )
          goto LABEL_368;
      }
      type = v490->fields.type;
      if ( type == 10 || type == 2 )
      {
        v493 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v490->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_378;
          v493 = 1;
          v494 = targetVals2->max_length == 1;
LABEL_355:
          if ( (v494 & v493) != 0 )
          {
            if ( v309->fields.isRestriction )
            {
              if ( !v486 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_42994048(v486, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
            }
            else if ( !v486 )
            {
              goto LABEL_378;
            }
            Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42994048(
                                                        v486,
                                                        v490->fields.summary,
                                                        0LL);
            v309->fields.isRestriction = 1;
          }
          if ( v493 )
          {
            if ( v309->fields.isRestriction )
            {
              if ( !v485 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_42994048(v485, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
            }
            else if ( !v485 )
            {
              goto LABEL_378;
            }
            Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42994048(
                                                        v485,
                                                        v490->fields.summary,
                                                        0LL);
            v309->fields.isRestriction = 1;
          }
          goto LABEL_367;
        }
        v493 = 0;
      }
      v494 = 1;
      goto LABEL_355;
    }
LABEL_368:
    if ( !v486 )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = System_Text_StringBuilder__get_Length(v486, 0LL);
    if ( (int)Master_WarQuestSelectionMaster >= 1 )
    {
      v495 = (System_Int32_array **)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v486->klass->vtable._3_ToString.method)(
                                      v486,
                                      v486->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (BattleServantConfConponent_c *)v495;
      sub_B52920(p_confirmRestrictionMessage, v495, v496, v497, v498, v499, v500, v501);
    }
    if ( !v485 )
      goto LABEL_378;
    if ( System_Text_StringBuilder__get_Length(v485, 0LL) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v502 = LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v503 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v485->klass->vtable._3_ToString.method)(
                                  v485,
                                  v485->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v504 = (System_Int32_array **)System_String__Concat_44570600(v502, (System_String_o *)StringLiteral_26/*"\n"*/, v503, 0LL);
      p_restrictionMessage->klass = (BattleServantConfConponent_c *)v504;
      sub_B52920(p_restrictionMessage, v504, v505, v506, v507, v508, v509, v510);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v180);
  }
}


void __fastcall QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *v4; // x0
  __int64 myServantOrNpcRestrictionEntityList; // x0
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x23
  int max_length; // w8
  unsigned int v15; // w28
  RestrictionEntity_o *v16; // x24
  Il2CppObject *v17; // x0
  struct System_Int32_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BalanceConfig_c *v25; // x0
  struct System_Int32_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Int32_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Int32_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_int__o *v54; // x21
  struct System_Int32_array *v55; // x8
  _BOOL4 isRestriction; // w9
  BalanceConfig_c *v57; // x0
  struct System_Int32_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *v66; // x8
  int32_t v67; // w8
  struct System_Int32_array *v68; // x8
  __int64 v69; // x9
  System_Collections_Generic_List_int__o *specifiedPositionList; // x21
  __int64 v71; // x9
  struct System_String_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_o *v79; // x0
  struct System_String_o *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  const MethodInfo *v87; // x4
  __int64 v88; // x20
  __int64 v89; // x20
  const MethodInfo *v90; // x4
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  MethodInfo *v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  int64_t v97; // x10
  __int64 v98; // x8
  struct System_Int32_array *v99; // x20
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  int64_t flag; // x8
  bool HasFlag_25292224; // w0
  bool v108; // w0
  struct System_Int32_array *v109; // x20
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  bool v116; // w0
  const MethodInfo *v117; // x4
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
  __int64 v130; // x0
  BattleServantConfConponent_o *p_uniqueIndividualityEntity; // [xsp+18h] [xbp-C8h]
  BattleServantConfConponent_o *p_myServantNumRestrictionEntity; // [xsp+28h] [xbp-B8h]
  BattleServantConfConponent_o *p_servantNumRestrictionEntity; // [xsp+30h] [xbp-B0h]
  BattleServantConfConponent_o *p_uniqueSvtRestrictionEntity; // [xsp+58h] [xbp-88h]
  BattleServantConfConponent_o *p_totalCostRestrictionEntity; // [xsp+68h] [xbp-78h]
  struct System_Int32_array **p_deckSvtIdList; // [xsp+70h] [xbp-70h]
  QuestRestrictionInfoEntity_o *v137; // [xsp+78h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v138; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_42B4909 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_42B4909 = 1;
  }
  v138 = 0LL;
  entity = 0LL;
  v137 = 0LL;
  v3 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  v4 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0LL);
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
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_128;
      v16 = restrictionEntityList->m_Items[v15];
      if ( !v16 )
        goto LABEL_127;
      switch ( v16->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (BattleServantConfConponent_c *)v16;
          sub_B52920(p_totalCostRestrictionEntity, (System_Int32_array **)v16, v7, v8, v9, v10, v11, v12);
          goto LABEL_53;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v16;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
            (System_Int32_array **)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isSupportOnly = 1;
          goto LABEL_53;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (BattleServantConfConponent_c *)v16;
          sub_B52920(p_uniqueSvtRestrictionEntity, (System_Int32_array **)v16, v7, v8, v9, v10, v11, v12);
          v57 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v57 = BalanceConfig_TypeInfo;
          }
          v58 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v57->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v58;
          sub_B52920(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          this->fields.isUniqueServant = 1;
          goto LABEL_53;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v16;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (System_Int32_array **)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v16, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.supportPositionList,
            (System_Int32_array **)DeckPositionList,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_53;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v16;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (System_Int32_array **)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_53;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v16;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (System_Int32_array **)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_53;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v16;
          sub_B52920(p_servantNumRestrictionEntity, (System_Int32_array **)v16, v7, v8, v9, v10, v11, v12);
          targetVals = v16->fields.targetVals;
          if ( v16->fields.rangeType == 5 )
          {
            if ( !targetVals || (int)targetVals->max_length < 2 )
              goto LABEL_53;
            this->fields.servantNumMin = targetVals->m_Items[1];
            v66 = v16->fields.targetVals;
            if ( !v66 )
              goto LABEL_127;
            if ( v66->max_length <= 1 )
              goto LABEL_128;
            v67 = v66->m_Items[2];
          }
          else
          {
            if ( !targetVals )
              goto LABEL_53;
            v71 = *(_QWORD *)&targetVals->max_length;
            if ( !v71 )
              goto LABEL_53;
            if ( !(_DWORD)v71 )
              goto LABEL_128;
            v67 = targetVals->m_Items[1];
          }
          this->fields.servantNumMax = v67;
LABEL_53:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v15 >= max_length )
            goto LABEL_54;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v16;
          sub_B52920(p_myServantNumRestrictionEntity, (System_Int32_array **)v16, v7, v8, v9, v10, v11, v12);
          v68 = v16->fields.targetVals;
          if ( !v68 )
            goto LABEL_53;
          v69 = *(_QWORD *)&v68->max_length;
          if ( !v69 )
            goto LABEL_53;
          if ( !(_DWORD)v69 )
            goto LABEL_128;
          this->fields.myServantNumMax = v68->m_Items[1];
          goto LABEL_53;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (__int64)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = RestrictionEntity__GetSpecifiedPosition(v16, 0LL);
          if ( !specifiedPositionList )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            specifiedPositionList,
            myServantOrNpcRestrictionEntityList,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_53;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v16;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (System_Int32_array **)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isNeedStarting = 1;
          goto LABEL_53;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (BattleServantConfConponent_c *)v16;
          sub_B52920(p_uniqueIndividualityEntity, (System_Int32_array **)v16, v7, v8, v9, v10, v11, v12);
          myServantOrNpcRestrictionEntityList = (__int64)v16->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          v17 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          v18 = (struct System_Int32_array *)sub_B52A44(v17, int___TypeInfo);
          this->fields.uniqueIndividualitys = v18;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.uniqueIndividualitys,
            (System_Int32_array **)v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v25 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v25 = BalanceConfig_TypeInfo;
          }
          v26 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v25->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v26;
          sub_B52920(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          v33 = (struct System_Int32_array *)sub_B5299C(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v33;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.deckLimitCountList,
            (System_Int32_array **)v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          v40 = (struct System_Int32_array *)sub_B5299C(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v40;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
            (System_Int32_array **)v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_53;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (__int64)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          v54 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = RestrictionEntity__GetSpecifiedPosition(v16, 0LL);
          if ( !v54 )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            v54,
            myServantOrNpcRestrictionEntityList,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_53;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v55 = v16->fields.targetVals;
          if ( !v55 )
            goto LABEL_127;
          if ( !v55->max_length )
            goto LABEL_128;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v55->m_Items[1];
          if ( isRestriction )
          {
LABEL_24:
            if ( !v3 )
              goto LABEL_127;
            System_Text_StringBuilder__Append_42994048(v3, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
          }
          else
          {
LABEL_27:
            if ( !v3 )
              goto LABEL_127;
          }
          myServantOrNpcRestrictionEntityList = (__int64)System_Text_StringBuilder__Append_42994048(
                                                           v3,
                                                           v16->fields.name,
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
    if ( !v3 )
      goto LABEL_127;
    v72 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v3->klass->vtable._3_ToString.method)(
                                      v3,
                                      v3->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v72;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
      (System_Int32_array **)v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v80 = System_String__Concat_44570600(
            v79,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            this->fields.confirmRestrictionMessage,
            0LL);
    this->fields.restrictionMessage = v80;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
      (System_Int32_array **)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v138,
    this->fields.questId,
    this->fields.questPhase,
    v87);
  v88 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v89 = **(_QWORD **)(v88 + 192);
  if ( (*(_BYTE *)(v89 + 306) & 1) == 0 )
    sub_AEB684(v89);
  myServantOrNpcRestrictionEntityList = **(_QWORD **)(v89 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v137,
         this->fields.questId,
         this->fields.questPhase,
         v90) )
  {
    myServantOrNpcRestrictionEntityList = (__int64)v137;
    if ( !v137 )
      goto LABEL_127;
    v97 = v137->fields.flag & 0x400000000100000LL;
    this->fields.isNoSupportBattle = v97 != 0;
    if ( v97
      || (v98 = *(_QWORD *)(myServantOrNpcRestrictionEntityList + 24),
          this->fields.isSupportOnlyForceBattle = (v98 & 0x80000) != 0) )
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
                                              v93);
      if ( !v137 )
        goto LABEL_127;
      flag = v137->fields.flag;
      this->fields.isAllOutBattle = (flag & 0x400000000000000LL) != 0;
      if ( (flag & 0x400000000000000LL) != 0 )
      {
        myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !myServantOrNpcRestrictionEntityList )
          goto LABEL_127;
        myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !myServantOrNpcRestrictionEntityList )
          goto LABEL_127;
        this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                             (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                             this->fields.questId,
                                             17,
                                             0LL);
      }
      if ( entity )
        this->fields.isFatigure = QuestEntity__HasFlag_25292224(
                                    (QuestEntity_o *)entity,
                                    0x200000LL,
                                    this->fields.questPhase,
                                    0LL);
      myServantOrNpcRestrictionEntityList = (__int64)v138;
      if ( v138 )
      {
        this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v138, v6);
        myServantOrNpcRestrictionEntityList = (__int64)v138;
        if ( !v138 )
          goto LABEL_127;
        myServantOrNpcRestrictionEntityList = QuestPhaseEntity__GetSupportInitDeckIndex(v138, v6);
        this->fields.supportInitIndex = myServantOrNpcRestrictionEntityList;
      }
      else
      {
        this->fields.correctionIconId = -1;
      }
      if ( v137 )
      {
        this->fields.isNotSingleSupportOnly = (v137->fields.flag & 0x1000000000000000LL) != 0;
        return;
      }
LABEL_127:
      sub_B52A5C(myServantOrNpcRestrictionEntityList, v6);
    }
    if ( (*(_BYTE *)(myServantOrNpcRestrictionEntityList + 27) & 1) != 0 )
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(
                                    (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                                    v6);
    myServantOrNpcRestrictionEntityList = sub_B5299C(int___TypeInfo, 1LL);
    if ( !v137 )
      goto LABEL_127;
    v99 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = QuestRestrictionInfoEntity__GetSingleForceSvtId(v137, v6);
    if ( !v99 )
      goto LABEL_127;
    if ( v99->max_length )
    {
      v99->m_Items[1] = myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v99;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
        (System_Int32_array **)v99,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      myServantOrNpcRestrictionEntityList = (__int64)v137;
      if ( !v137 )
        goto LABEL_127;
      goto LABEL_80;
    }
LABEL_128:
    v130 = sub_B52A88(myServantOrNpcRestrictionEntityList);
    sub_B52A28(v130, 0LL);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_25292224((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (__int64)entity;
      if ( !entity )
        goto LABEL_127;
      HasFlag_25292224 = QuestEntity__HasFlag_25292224(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_25292224;
      if ( !HasFlag_25292224 )
      {
        myServantOrNpcRestrictionEntityList = (__int64)entity;
        if ( !entity )
          goto LABEL_127;
        v108 = QuestEntity__HasFlag_25292224((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v108;
        if ( !v108 )
        {
          if ( v138 )
          {
            myServantOrNpcRestrictionEntityList = (__int64)entity;
            if ( !entity )
              goto LABEL_127;
            if ( QuestEntity__HasFlag_25292224((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (__int64)v138;
              if ( !v138 )
                goto LABEL_127;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v138, v6);
            }
            myServantOrNpcRestrictionEntityList = sub_B5299C(int___TypeInfo, 1LL);
            if ( !v138 )
              goto LABEL_127;
            v109 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = QuestPhaseEntity__GetSingleForceSvtId(v138, v6);
            if ( !v109 )
              goto LABEL_127;
            if ( !v109->max_length )
              goto LABEL_128;
            v109->m_Items[1] = myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v109;
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
              (System_Int32_array **)v109,
              v110,
              v111,
              v112,
              v113,
              v114,
              v115);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isFatigure = QuestEntity__HasFlag_25292224(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    v116 = QuestEntity__HasFlag_25292224((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v116;
    if ( v116 )
    {
      myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_127;
      myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_25292224(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_25292224(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_25292224(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_25292224(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_25292224(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v138 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v138, v6);
    myServantOrNpcRestrictionEntityList = (__int64)v138;
    if ( !v138 )
      goto LABEL_127;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v138,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      v117);
    myServantOrNpcRestrictionEntityList = (__int64)v138;
    if ( !v138 )
      goto LABEL_127;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v138, v6);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountSvtIds,
      0LL,
      v91,
      v92,
      (System_Boolean_array **)v93,
      v94,
      v95,
      v96);
    this->fields.overwriteLimitCounts = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCounts,
      0LL,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountIconIds,
      0LL,
      v124,
      v125,
      v126,
      v127,
      v128,
      v129);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42AF268 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_B52984(&System_Collections_Generic_List_int____TypeInfo);
    sub_B52984(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF268 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.individualityList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.rangeTypeList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.summary, v17, v18, v19, v20, v21, v22, v23);
  *(_WORD *)&this->fields.isMoved = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF266 & 1) == 0 )
  {
    sub_B52984(&QuestRestrictionInfo___c_TypeInfo);
    byte_42AF266 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRestrictionInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B52A5C(this, 0LL);
  return e->fields.name;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B52A5C(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__106_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int type; // w8

  if ( !e )
    sub_B52A5C(this, 0LL);
  type = e->fields.type;
  return type <= 4 && ((1 << type) & 0x16) != 0 || type == 13 || type == 17;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetRestrictionMessage_b__105_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B52A5C(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__96_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_42AF267 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_B52984(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_42AF267 = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0LL )
    sub_B52A5C(this, s);
  return individualityList->fields._size > 0;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__95_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B52A5C(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__95_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B52A5C(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, x);
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
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B52A5C(this, x);
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
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}