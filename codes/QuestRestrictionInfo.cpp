void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_31206600(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  struct RestrictionEntity_array *RestrictionList_31206808; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t v20; // w1
  const MethodInfo *v21; // x4

  if ( (byte_418AF0A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418AF0A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v11);
  }
  RestrictionList_31206808 = QuestRestrictionMaster__getRestrictionList_31206808(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               v12);
  this->fields.restrictionEntityList = RestrictionList_31206808;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)RestrictionList_31206808,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  QuestRestrictionInfo__Setup(this, v20, questId, questPhase, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_31216236(
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
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x0
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
  int32_t v35; // w1
  const MethodInfo *v36; // x4
  __int64 v37; // x0
  __int64 v38; // x0

  if ( (byte_418AF0B & 1) == 0 )
  {
    sub_B2C35C(&QuestRestrictionEntity___TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&RestrictionEntity___TypeInfo, v11);
    byte_418AF0B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v12 = (struct QuestRestrictionEntity_array *)sub_B2C374(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v12;
  sub_B2C2F8(
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
    v19 = sub_B2C374(RestrictionEntity___TypeInfo, 1LL);
    if ( !v19 )
      sub_B2C434(0LL, v20);
    v21 = v19;
    v22 = sub_B2C41C(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v22 )
    {
      v37 = sub_B2C454(0LL);
      sub_B2C400(v37, 0LL);
    }
    if ( !*(_DWORD *)(v21 + 24) )
    {
      v38 = sub_B2C460(v22);
      sub_B2C400(v38, 0LL);
    }
    *(_QWORD *)(v21 + 32) = overwriteRestiction;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v21 + 32),
      (System_Int32_array **)overwriteRestiction,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  else
  {
    v21 = sub_B2C374(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)v21,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  QuestRestrictionInfo__Setup(this, v35, questId, questPhase, v36);
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
  bool *v30; // x23
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

  if ( (byte_418AF24 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isFixedServantPositionRestriction);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int___, v22);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v23);
    sub_B2C35C(&Method_System_Linq_Enumerable_Intersect_int___, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool____get_Count__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool____get_Item__, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_418AF24 = 1;
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
             (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  v57 = isRestrictionNeedStarting;
  v30 = isRestrictionServantPos;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v39 = v38->fields._items->m_Items[(int)v33];
    if ( !v39 )
      goto LABEL_17;
    if ( v39->max_length <= num )
      goto LABEL_80;
    v40 = v39->m_Items[num + 4];
  }
  else
  {
    Instance = (DataManager_o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(this, (int32_t)v29, v31);
    if ( !Instance )
      goto LABEL_44;
    v41 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
            second,
            (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v41,
                                  (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
    v42 = this->fields.myServantPositionsList;
    if ( !v42 )
      goto LABEL_17;
    if ( v42->fields._size <= (unsigned int)v33 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  v44 = v30;
  if ( this->fields.isNeedStarting )
  {
    Instance = (DataManager_o *)QuestRestrictionInfo__GetNeedStartingSvtIdList(this, v29);
    if ( Instance )
    {
      v45 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
              second,
              (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___);
      Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                    v45,
                                    (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                                                                                  (int32_t)v29,
                                                                                  v31);
  if ( !FixedPositionSvtIdList )
    return;
  v52 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          second,
          (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v52,
                                (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
  v53 = this->fields.positionsList;
  if ( !v53 )
    goto LABEL_17;
  if ( v53->fields._size <= (unsigned int)v48 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v54 = v53->fields._items->m_Items[(int)v48];
  if ( !v54 )
LABEL_17:
    sub_B2C434(Instance, v29);
  if ( v54->max_length <= num )
  {
LABEL_80:
    v56 = sub_B2C460(Instance);
    sub_B2C400(v56, 0LL);
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
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(
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
  if ( (byte_418AF2D & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B2C35C(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                       userServantEntity);
    byte_418AF2D = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_22:
    sub_B2C434(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_17;
    }
LABEL_21:
    v16 = sub_B2C460(this);
    sub_B2C400(v16, 0LL);
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
  __int64 v10; // x1
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  __int64 v12; // x9
  __int64 v13; // x22
  __int64 v14; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8
  __int64 v17; // x0

  if ( (byte_418AF2C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_418AF2C = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds )
  {
    if ( this->fields.overwriteLimitCounts )
    {
      v12 = *(_QWORD *)&overwriteLimitCountSvtIds->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = (int)v12;
        v14 = 8LL;
        do
        {
          if ( v14 - 8 >= (unsigned __int64)overwriteLimitCountSvtIds->max_length )
          {
LABEL_18:
            v17 = sub_B2C460(v9);
            sub_B2C400(v17, 0LL);
          }
          if ( *((_DWORD *)&overwriteLimitCountSvtIds->obj.klass + v14) == svtId )
          {
            overwriteLimitCounts = this->fields.overwriteLimitCounts;
            if ( !overwriteLimitCounts )
              break;
            if ( v14 - 8 >= (unsigned __int64)overwriteLimitCounts->max_length )
              goto LABEL_18;
            if ( !v8 )
              break;
            System_Collections_Generic_List_int___Add(
              v8,
              *((_DWORD *)&overwriteLimitCounts->obj.klass + v14),
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( v14 - 7 >= v13 )
            goto LABEL_16;
          overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
          ++v14;
        }
        while ( overwriteLimitCountSvtIds );
LABEL_15:
        sub_B2C434(v9, v10);
      }
    }
  }
LABEL_16:
  if ( !v8 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_418AF17 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418AF17 = 1;
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
    sub_B2C434(this, *(_QWORD *)&initPos);
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
      v30 = sub_B2C460(this);
      sub_B2C400(v30, 0LL);
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
      v11 = sub_B2C460(this);
      sub_B2C400(v11, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  int64_t IsDisplayedRestrictionDialog; // x0
  __int64 v13; // x1
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

  if ( (byte_418AF29 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v10);
    byte_418AF29 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
        v30 = sub_B2C460(IsDisplayedRestrictionDialog);
        sub_B2C400(v30, 0LL);
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
        IsDisplayedRestrictionDialog = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    IsDisplayedRestrictionDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsDisplayedRestrictionDialog )
      goto LABEL_61;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)IsDisplayedRestrictionDialog,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    if ( !v11 )
      goto LABEL_61;
    System_Collections_Generic_List_int___Add(
      v11,
      v24,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
          IsDisplayedRestrictionDialog = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !IsDisplayedRestrictionDialog )
            goto LABEL_61;
          v19 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)IsDisplayedRestrictionDialog,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
            if ( !v11 )
              goto LABEL_61;
            System_Collections_Generic_List_int___Add(
              v11,
              v17->fields.id,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          break;
        case 2:
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          IsDisplayedRestrictionDialog = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  if ( !v11 )
LABEL_61:
    sub_B2C434(IsDisplayedRestrictionDialog, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_418AF2A & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, *(_QWORD *)&n);
    byte_418AF2A = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_20:
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_B2C434(this, *(_QWORD *)&n);
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
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0

  if ( (byte_418AF40 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__,
      *(_QWORD *)&messageId);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__,
      v5);
    byte_418AF40 = 1;
  }
  result = (QuestRestrictionInfo_DialogMessageInfo_o *)this->fields.dialogMessageInfoDictionary;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)result,
           messageId,
           (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
    {
      dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
      if ( !dialogMessageInfoDictionary )
        sub_B2C434(0LL, v7);
      return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)dialogMessageInfoDictionary,
                                                           messageId,
                                                           (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  if ( (byte_418AF43 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AF43 = 1;
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
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_B2C434(this, method);
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
  if ( (byte_418AF45 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AF45 = 1;
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
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_B2C434(this, method);
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
  if ( (byte_418AF42 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AF42 = 1;
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
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_21;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_B2C434(this, method);
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
  if ( (byte_418AF2B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&n);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AF2B = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_21:
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
      }
      v12 = questRestrictionEntityList->m_Items[n];
      if ( v12 )
      {
        p_title = &v12->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_B2C434(this, *(_QWORD *)&n);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                     n,
                                     (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_8:
    sub_B2C434(this, n);
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
      sub_B2C434(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= questRestrictionEntityList->max_length )
        {
          v18 = sub_B2C460(this);
          sub_B2C400(v18, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)message, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  sub_B2C2F8(
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

  if ( (byte_418AF35 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10392/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v2);
    byte_418AF35 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_418AF34 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10393/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, v2);
    byte_418AF34 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10393/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AF4B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_418AF4B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields.current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.current )
      sub_B2C434(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418AF48 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_418AF48 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !v11 )
      sub_B2C434(v14, v15);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v17.fields.current,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_B2C434(fixedMyServantIndividualitiesList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_418AF26 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v13);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418AF26 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               svtId,
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v17 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_B2C434(this, *(_QWORD *)&svtId);
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
    v27 = sub_B2C460(this);
    sub_B2C400(v27, 0LL);
  }
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_418AF27 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10391/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, v2);
    byte_418AF27 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AF4D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_418AF4D = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields.current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.current )
      sub_B2C434(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418AF4A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_418AF4A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !v11 )
      sub_B2C434(v14, v15);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v17.fields.current,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_B2C434(fixedIndividualitiesList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v13; // w20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int v16; // w19
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  int v19[2]; // [xsp+20h] [xbp-50h]
  int v20; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_418AF23 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_418AF23 = 1;
  }
  memset(&i, 0, sizeof(i));
  v20 = 0;
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
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v7 = 0;
    for ( i = v18; ; v7 += LODWORD(i.fields.current[1].monitor) )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &i,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields.current )
        sub_B2C434(v8, v9);
    }
    v19[0] = 159;
    v20 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v20 = 0;
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
LABEL_32:
    sub_B2C434(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v18; ; v13 += LODWORD(i.fields.current[1].monitor) )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !i.fields.current )
      sub_B2C434(v14, v15);
  }
  v19[0] = 232;
  v16 = ++v20;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( v16 && v19[v16 - 1] == 232 )
    v20 = v16 - 1;
  return v13;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_418AF25 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10390/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, v2);
    byte_418AF25 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10390/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
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
  int v18; // w21
  int v19; // w8
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int v24; // w21
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  int v26[3]; // [xsp+20h] [xbp-50h]
  int v27; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_418AF22 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_418AF22 = 1;
  }
  memset(&i, 0, sizeof(i));
  v27 = 0;
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
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedMyServantPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v25;
          ;
          System_Collections_Generic_List_int___AddRange(
            v11,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v14 )
        break;
      if ( !v11 )
        sub_B2C434(v14, v15);
    }
    v26[0] = 134;
    v27 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v27 = 0;
  }
  if ( this->fields.isNeedStarting )
  {
    fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v25;
          ;
          System_Collections_Generic_List_int___AddRange(
            v11,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v16 )
        break;
      if ( !v11 )
        sub_B2C434(v16, v17);
    }
    v26[0] = 196;
    v18 = ++v27;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v26[v18 - 1] == 196 )
      {
        --v18;
        v27 = v19;
      }
    }
  }
  else
  {
    v18 = 0;
  }
  if ( this->fields.isFixedPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v25;
          ;
          System_Collections_Generic_List_int___AddRange(
            v11,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v22 )
        break;
      if ( !v11 )
        sub_B2C434(v22, v23);
    }
    v26[v18] = 260;
    v24 = ++v27;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v24 && v26[v24 - 1] == 260 )
      v27 = v24 - 1;
  }
  if ( !v11 )
LABEL_43:
    sub_B2C434(fixedMyServantIndividualitiesList, v13);
  if ( v11->fields._size >= 1 )
    return System_Collections_Generic_List_int___ToArray(
             v11,
             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0LL;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_418AF21 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10395/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, v2);
    byte_418AF21 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
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
  if ( (byte_418AF14 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionWholeType);
    byte_418AF14 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_B2C434(this, *(_QWORD *)&restrictionWholeType);
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
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
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
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_31224112(
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
  if ( (byte_418AF15 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionType);
    byte_418AF15 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_B2C434(this, *(_QWORD *)&restrictionType);
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
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
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
  System_String_o *summary; // x1
  System_String_o *v36; // x26
  System_String_o *v37; // x27
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x23
  int max_length; // w8
  unsigned int v40; // w24
  RestrictionWholeEntity_o *v41; // x21
  int v42; // w8
  void *v43; // x21
  unsigned int v44; // w22
  __int64 v45; // x26
  System_String_o *v46; // x0
  __int64 v48; // x0
  bool v49; // [xsp+Ch] [xbp-74h]
  unsigned int key; // [xsp+14h] [xbp-6Ch]

  if ( (byte_418AF12 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v25);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v26);
    sub_B2C35C(&LocalizationManager_TypeInfo, v27);
    sub_B2C35C(&StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v28);
    sub_B2C35C(&StringLiteral_11099/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v29);
    sub_B2C35C(&StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v30);
    sub_B2C35C(&StringLiteral_11096/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v31);
    sub_B2C35C(&StringLiteral_6389/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v32);
    byte_418AF12 = 1;
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_86;
  v49 = individuality;
  key = pos;
  if ( !isSlotOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6389/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v37 = (System_String_o *)IsNullOrEmpty;
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
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11096/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( isNoneTitle )
      {
        if ( fatigue )
          goto LABEL_25;
      }
      else
      {
        IsNullOrEmpty = System_String__Format(v36, (Il2CppObject *)IsNullOrEmpty, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( fatigue )
        {
LABEL_25:
          IsNullOrEmpty = System_String__Concat_44305532(summary, v37, 0LL);
          summary = (System_String_o *)IsNullOrEmpty;
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
        (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_30:
      if ( !this->fields.isNotSingleSupportOnly )
        goto LABEL_41;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( isNoneTitle )
      {
        if ( singleSupport )
          goto LABEL_36;
      }
      else
      {
        IsNullOrEmpty = System_String__Format(v36, (Il2CppObject *)IsNullOrEmpty, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( singleSupport )
        {
LABEL_36:
          IsNullOrEmpty = System_String__Concat_44305532(summary, v37, 0LL);
          summary = (System_String_o *)IsNullOrEmpty;
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
        (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_41:
      restrictionWholeEntities = this->fields.restrictionWholeEntities;
      if ( !restrictionWholeEntities )
        goto LABEL_88;
      max_length = restrictionWholeEntities->max_length;
      if ( max_length >= 1 )
      {
        v40 = 0;
        while ( v40 < max_length )
        {
          v41 = restrictionWholeEntities->m_Items[v40];
          if ( !v41 )
            goto LABEL_88;
          IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v41->fields.summary, 0LL);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          {
            summary = v41->fields.summary;
            if ( !isNoneTitle )
            {
              IsNullOrEmpty = System_String__Format(v36, (Il2CppObject *)summary, 0LL);
              summary = (System_String_o *)IsNullOrEmpty;
            }
            switch ( v41->fields.type )
            {
              case 1:
                if ( v49 )
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
                  IsNullOrEmpty = System_String__Concat_44305532(summary, v37, 0LL);
                  summary = (System_String_o *)IsNullOrEmpty;
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
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          }
          max_length = restrictionWholeEntities->max_length;
          if ( (int)++v40 >= max_length )
            goto LABEL_69;
        }
LABEL_89:
        v48 = sub_B2C460(IsNullOrEmpty);
        sub_B2C400(v48, 0LL);
      }
      goto LABEL_69;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11099/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_14;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v36, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( uniqueServant )
      {
LABEL_14:
        IsNullOrEmpty = System_String__Concat_44305532(summary, v37, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
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
      (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
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
                            (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_88:
      sub_B2C434(IsNullOrEmpty, summary);
    }
    v42 = *((_DWORD *)IsNullOrEmpty + 6);
    v43 = IsNullOrEmpty;
    if ( v42 >= 1 )
    {
      v44 = 0;
      while ( v44 < v42 )
      {
        v45 = *((_QWORD *)v43 + (int)v44 + 4);
        if ( !v45 )
          goto LABEL_88;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v45 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v45 + 24);
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
            v46 = LocalizationManager__Get((System_String_o *)StringLiteral_6389/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v46, *(Il2CppObject **)(v45 + 24), 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
            if ( !v33 )
              goto LABEL_88;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v42 = *((_DWORD *)v43 + 6);
        if ( (int)++v44 >= v42 )
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
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_31222988(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x26
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *name; // x1
  signed int max_length; // w8
  unsigned int v32; // w20
  RestrictionEntity_o *v33; // x19
  __int64 v35; // x0

  if ( (byte_418AF13 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, entities);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v19);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v22);
    sub_B2C35C(&StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v23);
    sub_B2C35C(&StringLiteral_11096/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v24);
    sub_B2C35C(&StringLiteral_6389/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v25);
    byte_418AF13 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6389/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !isSlotOnly && this->fields.isFatigure )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11096/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
    name = IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( !fatigue )
        goto LABEL_13;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
      if ( !fatigue )
      {
LABEL_13:
        if ( !v28 )
          goto LABEL_57;
        goto LABEL_17;
      }
    }
    IsNullOrEmpty = System_String__Concat_44305532(name, v27, 0LL);
    name = IsNullOrEmpty;
    if ( !v28 )
      goto LABEL_57;
LABEL_17:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v28,
      (EventMissionProgressRequest_Argument_ProgressData_o *)name,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_44305532(name, v27, 0LL);
      name = IsNullOrEmpty;
    }
    if ( !v28 )
      goto LABEL_57;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v28,
      (EventMissionProgressRequest_Argument_ProgressData_o *)name,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( !entities )
    goto LABEL_57;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
      {
        v35 = sub_B2C460(IsNullOrEmpty);
        sub_B2C400(v35, 0LL);
      }
      v33 = entities->m_Items[v32];
      if ( !v33 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v33->fields.name, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v33->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v33, 0LL);
          name = IsNullOrEmpty;
        }
        switch ( v33->fields.type )
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
              IsNullOrEmpty = System_String__Concat_44305532(name, v27, 0LL);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v28 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)name,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_55;
    }
LABEL_57:
    sub_B2C434(IsNullOrEmpty, name);
  }
LABEL_55:
  if ( !v28 )
    goto LABEL_57;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
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
  WarEntity_o *v26; // x8
  __int64 v27; // x0
  WarEntity_o *v28; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_418AF33 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v7);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418AF33 = 1;
  }
  v28 = 0LL;
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
      v14 = 0;
      while ( 1 )
      {
        v15 = slotInfos->max_length;
        if ( v14 >= v15 )
          return (System_String_o *)StringLiteral_1/*""*/;
        if ( v14 >= (unsigned int)v15 )
          goto LABEL_58;
        v16 = slotInfos->m_Items[v14];
        if ( !v16 )
          goto LABEL_57;
        if ( v16->fields.slotType )
        {
          ++v14;
        }
        else
        {
          this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
          if ( !this )
            goto LABEL_57;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                             ++v14,
                                             (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_57;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                               v14,
                                               (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
            if ( !this )
              goto LABEL_57;
            dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
            v18 = this;
            if ( dialogMessageInfoDictionary >= 1 )
            {
              v19 = 0;
              while ( 1 )
              {
                if ( v19 >= dialogMessageInfoDictionary )
                  goto LABEL_58;
                v20 = *((_QWORD *)&v18->fields.eventId + (int)v19);
                if ( !v20 )
                  goto LABEL_57;
                if ( *(_DWORD *)(v20 + 44) && !*(_DWORD *)(v20 + 40) )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_57;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     &v28,
                                                     *(_DWORD *)(v20 + 44),
                                                     (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
                dialogMessageInfoDictionary = (int)v18->fields.dialogMessageInfoDictionary;
                if ( (int)++v19 >= dialogMessageInfoDictionary )
                  goto LABEL_39;
              }
              v26 = v28;
              if ( v28 )
                return v26->fields.age;
LABEL_57:
              sub_B2C434(this, method);
            }
          }
        }
LABEL_39:
        slotInfos = v3->fields.slotInfos;
        if ( !slotInfos )
          goto LABEL_57;
      }
    }
    v11 = 0;
    while ( v11 < max_length )
    {
      v12 = restrictionWholeEntities->m_Items[v11];
      if ( !v12 )
        goto LABEL_57;
      if ( v12->fields.type == 3 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_57;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           v12->fields.restrictionMessageId,
                                           (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v26 = entity;
          if ( entity )
            return v26->fields.age;
          goto LABEL_57;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
    goto LABEL_58;
  }
  restrictionEntityList = v3->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_57;
  v22 = restrictionEntityList->max_length;
  if ( v22 >= 1 )
  {
    v23 = 0;
    method = 0LL;
    while ( v23 < v22 )
    {
      v24 = restrictionEntityList->m_Items[v23];
      if ( !v24 )
        goto LABEL_57;
      if ( v24->fields.type == 11 )
        method = (const MethodInfo *)v23;
      else
        method = (const MethodInfo *)(unsigned int)method;
      if ( (int)++v23 >= v22 )
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
    }
LABEL_58:
    v27 = sub_B2C460(this);
    sub_B2C400(v27, 0LL);
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
  Il2CppObject *RestrictedName; // x19
  __int64 *v10; // x8
  System_String_o *v11; // x0

  if ( (byte_418AF3C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&pos);
    sub_B2C35C(&StringLiteral_10397/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, v7);
    sub_B2C35C(&StringLiteral_10400/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/, v8);
    byte_418AF3C = 1;
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
    v10 = &StringLiteral_10397/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_10400/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
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
  if ( (byte_418AF50 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B2C35C(
                                       &Method_System_Collections_Generic_List_RestrictionEntity__get_Count__,
                                       method);
    byte_418AF50 = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_B2C434(this, method);
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
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_int__o *v28; // x20
  int v29; // w8
  void *v30; // x19
  unsigned int v31; // w21
  __int64 v32; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *changeMaterial; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x1
  const MethodInfo_1A91638 *v36; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x20
  peRenderTexture_ChangeLayerObject_o *v40; // x0
  peRenderTexture_ChangeLayerObject_o *v41; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  __int64 v44; // x0

  if ( (byte_418AF3E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Intersect_int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v14);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass175_0__GetMyServantOrNpcSvtIdList_b__0__, v17);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass175_0_TypeInfo, v18);
    byte_418AF3E = 1;
  }
  v19 = sub_B2C42C(QuestRestrictionInfo___c__DisplayClass175_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass175_0___ctor((QuestRestrictionInfo___c__DisplayClass175_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_29;
  *(_QWORD *)(v19 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v19 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v28 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v19 + 24),
                                        (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v29 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v30 = restrictionSlotDetailDictionary;
    if ( v29 >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        if ( v31 >= v29 )
        {
          v44 = sub_B2C460(restrictionSlotDetailDictionary);
          sub_B2C400(v44, 0LL);
        }
        v32 = *((_QWORD *)v30 + (int)v31 + 4);
        if ( !v32 )
          break;
        if ( *(_DWORD *)(v32 + 32) == 1 )
        {
          if ( !v28 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v28,
            *(System_Collections_Generic_IEnumerable_T__o **)(v32 + 40),
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v29 = *((_DWORD *)v30 + 6);
        if ( (int)++v31 >= v29 )
          goto LABEL_15;
      }
LABEL_29:
      sub_B2C434(restrictionSlotDetailDictionary, v21);
    }
LABEL_15:
    if ( !v28 )
      goto LABEL_29;
    if ( v28->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      changeMaterial = System_Linq_Enumerable__Distinct_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                         (const MethodInfo_1A8D698 *)Method_System_Linq_Enumerable_Distinct_int___);
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v36 = (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v42 = System_Linq_Enumerable__Intersect_int_(changeMaterial, v35, v36);
      return System_Linq_Enumerable__ToArray_int_(
               v42,
               (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v39,
        (Il2CppObject *)v19,
        Method_QuestRestrictionInfo___c__DisplayClass175_0__GetMyServantOrNpcSvtIdList_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v40 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v39,
              (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v40 )
      {
        v41 = v40;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v35 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        changeMaterial = (System_Collections_Generic_IEnumerable_TSource__o *)v41->fields.changeMaterial;
        v36 = (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  __int64 v31; // x1
  QuestRestrictionInfo___c__DisplayClass189_0_o *v32; // x22
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v35; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x2
  _QWORD **v43; // x24
  __int64 v44; // x19
  __int16 v45; // w8
  __int64 v46; // x19
  __int64 v47; // x19
  __int64 v48; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x21
  System_Int32_array *MyServantOrNpcSvtIdList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v51; // x23
  peRenderTexture_ChangeLayerObject_o *v52; // x0
  peRenderTexture_ChangeLayerObject_o *v53; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  int32_t MyServantOrSupportTargetPos; // w25
  const MethodInfo *v57; // x2
  _QWORD **v58; // x21
  __int64 v59; // x19
  __int16 v60; // w8
  __int64 v61; // x19
  __int64 v62; // x19
  __int64 v63; // x19
  System_Collections_Generic_List_int__o *v64; // x23
  FollowerInfo_array *QuestFollowerList; // x24
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v67; // x26
  int i; // w22
  FollowerInfo_o *v69; // x27
  DataManager_o *v70; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  const MethodInfo *v73; // x3
  System_Int32_array *OverwriteIndividuality; // x0
  const MethodInfo *v75; // x3
  struct System_Collections_Generic_List_string__o *saveNameList; // x19
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x21
  int32_t v78; // w0
  const MethodInfo *v79; // x6
  struct System_Collections_Generic_List_string__o *v80; // x19
  struct System_Collections_Generic_List_long____o *v81; // x21
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v82; // x21
  struct System_Collections_Generic_List_string__o *v83; // x19
  struct System_Collections_Generic_List_long____o *v84; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v85; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  __int64 v88; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+8h] [xbp-78h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UserServantEntity_o *v92; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_418AF47 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, npcInfoDictionary);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v13);
    sub_B2C35C(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v18);
    sub_B2C35C(&Method_System_Linq_Enumerable_Intersect_int___, v19);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_B2C35C(&Method_System_Linq_Enumerable_Union_int___, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v27);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass189_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__, v30);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo, v31);
    byte_418AF47 = 1;
  }
  v92 = 0LL;
  entity = 0LL;
  v32 = (QuestRestrictionInfo___c__DisplayClass189_0_o *)sub_B2C42C(QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass189_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_76;
  v32->fields.index = index;
  v35 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v35,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)npcInfoDictionary,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v43 = (_QWORD **)Method_System_Array_Empty_int___;
  v44 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v45 = *(_WORD *)(v44 + 306);
  if ( (v45 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v45 = *(_WORD *)(v44 + 306);
  }
  if ( (v45 & 0x400) != 0 )
  {
    v46 = *v43[6];
    if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
      sub_AC505C(*v43[6]);
    if ( !*(_DWORD *)(v46 + 224) )
    {
      v47 = *v43[6];
      if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
        sub_AC505C(*v43[6]);
      j_il2cpp_runtime_class_init_0(v47);
    }
  }
  v48 = *v43[6];
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    sub_AC505C(*v43[6]);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v48 + 184);
    v51 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v51,
      (Il2CppObject *)v32,
      Method_QuestRestrictionInfo___c__DisplayClass189_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_76;
    v52 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v51,
            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v52 )
    {
      v53 = v52;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v55 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v53->fields.changeMaterial,
              CollectionList,
              (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v55,
                                  (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v32->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v32->fields.index, v42);
    if ( !MyServantOrNpcSvtIdList )
    {
      v58 = (_QWORD **)Method_System_Array_Empty_int___;
      v59 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v60 = *(_WORD *)(v59 + 306);
      if ( (v60 & 1) == 0 )
      {
        sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v60 = *(_WORD *)(v59 + 306);
      }
      if ( (v60 & 0x400) != 0 )
      {
        v61 = *v58[6];
        if ( (*(_BYTE *)(v61 + 306) & 1) == 0 )
          sub_AC505C(*v58[6]);
        if ( !*(_DWORD *)(v61 + 224) )
        {
          v62 = *v58[6];
          if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
            sub_AC505C(*v58[6]);
          j_il2cpp_runtime_class_init_0(v62);
        }
      }
      v63 = *v58[6];
      if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
        sub_AC505C(*v58[6]);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v63 + 184);
    }
    MyServantOrSupportTargetPos = v32->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v57);
  }
  v64 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v64,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_76;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        this->fields.questId,
                        this->fields.questPhase,
                        0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList,
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___),
        !QuestFollowerList) )
  {
LABEL_76:
    sub_B2C434(Instance, v34);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v67 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v88 = sub_B2C460(Instance);
        sub_B2C400(v88, 0LL);
      }
      v69 = QuestFollowerList->m_Items[i];
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v69 )
        goto LABEL_76;
      Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(v69, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        if ( !v67 )
          goto LABEL_76;
        v70 = Instance;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               v67,
               &entity,
               v69->fields.npcFollowerSvtId,
               (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
        {
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
          NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v69, 0, ReturnTypeByQuestId, 0LL);
          Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_31244412(
                                        this,
                                        NpcServantIndividuality,
                                        MyServantOrSupportTargetPos,
                                        v73);
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
                  &v92,
                  v69->fields.npcFollowerSvtId,
                  (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            goto LABEL_80;
          Instance = (DataManager_o *)v92;
          if ( !v92 )
            goto LABEL_76;
          if ( !NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v92, 0LL) )
            goto LABEL_80;
          Instance = (DataManager_o *)v92;
          if ( !v92 )
            goto LABEL_76;
          OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                     (NpcServantFollowerEntity_o *)v92,
                                     0LL);
          if ( QuestRestrictionInfo__IsRestrictionServantIndividuality_31244412(
                 this,
                 OverwriteIndividuality,
                 MyServantOrSupportTargetPos,
                 v75) )
          {
LABEL_80:
            saveNameList = v70->fields.saveNameList;
            saveDataMapList = v70->fields.saveDataMapList;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v94.fields.currentCryptoKey = saveNameList;
            *(_QWORD *)&v94.fields.fakeValue = saveDataMapList;
            v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v94, 0LL);
            Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                          this,
                                          v78,
                                          LODWORD(v70->fields.lastFrameTime),
                                          HIDWORD(v70[1].fields.datalist),
                                          MyServantOrSupportTargetPos,
                                          0,
                                          v79);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_74;
          }
        }
        v80 = v70->fields.saveNameList;
        v81 = v70->fields.saveDataMapList;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v95.fields.currentCryptoKey = v80;
        *(_QWORD *)&v95.fields.fakeValue = v81;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v95, 0LL);
        if ( !v64 )
          goto LABEL_76;
        System_Collections_Generic_List_int___Add(
          v64,
          (int32_t)Instance,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        v82 = *npcInfoDictionary;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v70->fields.saveNameList,
                                      0LL);
        if ( !v82 )
          goto LABEL_76;
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v82,
                                      (int32_t)Instance,
                                      (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v83 = v70->fields.saveNameList;
          v84 = v70->fields.saveDataMapList;
          v85 = *npcInfoDictionary;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v96.fields.currentCryptoKey = v83;
          *(_QWORD *)&v96.fields.fakeValue = v84;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v96, 0LL);
          if ( !v85 )
            goto LABEL_76;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v85,
            (int32_t)Instance,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v69,
            (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
        }
      }
LABEL_74:
      max_length = QuestFollowerList->max_length;
    }
  }
  v86 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v64,
          (const MethodInfo_1A9E190 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v86,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_418AF3D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_10402/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/, v8);
    sub_B2C35C(&StringLiteral_10401/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/, v9);
    sub_B2C35C(&StringLiteral_10399/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/, v10);
    sub_B2C35C(&StringLiteral_10398/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/, v11);
    byte_418AF3D = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_10399/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_10398/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
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
          v19 = sub_B2C460(MyServantOrNpcSvtIdList);
          sub_B2C400(v19, 0LL);
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
      v12 = &StringLiteral_10401/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = &StringLiteral_10402/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x0

  if ( (byte_418AF3F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v5);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass176_0__GetMyServantOrSupportTargetPos_b__0__, v7);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo, v8);
    byte_418AF3F = 1;
  }
  v9 = sub_B2C42C(QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass176_0___ctor((QuestRestrictionInfo___c__DisplayClass176_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
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
  v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_QuestRestrictionInfo___c__DisplayClass176_0__GetMyServantOrSupportTargetPos_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v10 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v10 )
    return (int)v10;
  v21 = *(_QWORD *)&v10->fields.prevLayer;
  if ( !v21 )
LABEL_14:
    sub_B2C434(v10, v11);
  if ( !*(_DWORD *)(v21 + 24) )
  {
    v22 = sub_B2C460(v10);
    sub_B2C400(v22, 0LL);
  }
  LODWORD(v10) = *(_DWORD *)(v21 + 32);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B2C434(this, pos);
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
  int v16; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418AF41 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__,
      *(_QWORD *)&pos);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__,
      v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418AF41 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !this->fields.restrictionBaseEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary )
    sub_B2C434(0LL, *(_QWORD *)&pos);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dialogMessageInfoDictionary,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v18,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    if ( !v12 )
      break;
    if ( !v18.fields.current.fields.value )
      sub_B2C434(v12, v13);
    if ( LODWORD(v18.fields.current.fields.value[1].klass) == pos )
    {
      DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v18.fields.current.fields.key, v14);
      v16 = 34;
      goto LABEL_11;
    }
  }
  DialogMessage = 0LL;
  v16 = 28;
LABEL_11:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v18,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  if ( v16 != 34 )
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
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AF4C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_418AF4C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields.current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.current )
      sub_B2C434(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418AF49 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_418AF49 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v10 )
      sub_B2C434(v13, v14);
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)v16.fields.current,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v10 )
LABEL_15:
    sub_B2C434(needStartingIndividualitiesList, v11);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  signed __int64 v18; // x25
  BattleServantConfConponent_o *i; // x21
  int32_t v20; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t maxLimitCount; // w22
  int32_t v23; // w1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x22
  __int64 v32; // x0
  __int64 v33; // x0
  UserServantCollectionEntity_o *v34; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418AF2E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&OptionManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&string___TypeInfo, v9);
    byte_418AF2E = 1;
  }
  v34 = 0LL;
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
  v15 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_B2C374(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v16 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v12 >= 1 )
  {
    v17 = 0LL;
    v18 = v12;
    for ( i = (BattleServantConfConponent_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      if ( v17 >= *(unsigned int *)(v15 + 24) )
      {
LABEL_43:
        v32 = sub_B2C460(FixedServantPositionSvtIdList);
        sub_B2C400(v32, 0LL);
      }
      v20 = *(_DWORD *)(v15 + 32 + 4 * v17);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)FixedServantPositionSvtIdList,
              &entity,
              v20,
              (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)FixedServantPositionSvtIdList,
                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
              &v34,
              FixedServantPositionSvtIdList,
              v20,
              0LL) )
        goto LABEL_26;
      FixedServantPositionSvtIdList = (__int64)v34;
      if ( !v34 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v34, 0LL);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v34 )
          break;
        maxLimitCount = v34->fields.maxLimitCount;
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
      v23 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v23, -1, 0LL);
      if ( !v16 )
        break;
      v30 = (System_Int32_array **)FixedServantPositionSvtIdList;
      if ( FixedServantPositionSvtIdList )
      {
        FixedServantPositionSvtIdList = sub_B2C41C(FixedServantPositionSvtIdList, v16->obj.klass->_1.element_class);
        if ( !FixedServantPositionSvtIdList )
        {
          v33 = sub_B2C454(0LL);
          sub_B2C400(v33, 0LL);
        }
      }
      if ( v17 >= v16->max_length )
        goto LABEL_43;
      i->klass = (BattleServantConfConponent_c *)v30;
      sub_B2C2F8(i, v30, v24, v25, v26, v27, v28, v29);
      if ( (__int64)++v17 >= v18 )
        return v16;
    }
LABEL_42:
    sub_B2C434(FixedServantPositionSvtIdList, v14);
  }
  return v16;
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B2C434(this, pos);
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
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  __int64 v30; // x0
  System_String_o *v31; // [xsp+8h] [xbp-58h]

  v4 = this;
  if ( (byte_418AF3B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&pos);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v6);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v7);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass172_0__GetRestrictedName_b__0__, v8);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass172_0_TypeInfo, v9);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418AF3B = 1;
  }
  v31 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v4->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                         pos,
                                         (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
              return v31;
          }
        }
        return v31;
      }
    }
LABEL_29:
    sub_B2C434(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sub_B2C42C(QuestRestrictionInfo___c__DisplayClass172_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass172_0___ctor((QuestRestrictionInfo___c__DisplayClass172_0_o *)v17, 0LL);
      if ( v16 >= questRestrictionEntityList->max_length )
        break;
      if ( !v17 )
        goto LABEL_29;
      v24 = (System_Int32_array **)questRestrictionEntityList->m_Items[v16];
      *(_QWORD *)(v17 + 16) = v24;
      v25 = v17 + 16;
      sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), v24, v18, v19, v20, v21, v22, v23);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v27,
        (Il2CppObject *)v17,
        Method_QuestRestrictionInfo___c__DisplayClass172_0__GetRestrictedName_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v27,
                                         (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
          v31 = *(System_String_o **)(*(_QWORD *)v25 + 48LL);
        }
      }
      if ( (__int64)++v16 >= (int)questRestrictionEntityList->max_length )
        return v31;
    }
LABEL_30:
    v30 = sub_B2C460(this);
    sub_B2C400(v30, 0LL);
  }
  return v31;
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
  if ( (byte_418AF18 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&initPos);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v5);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v6);
    byte_418AF18 = 1;
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
  this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v12 = v4->fields.slotInfos;
  if ( !v12 )
LABEL_17:
    sub_B2C434(this, *(_QWORD *)&initPos);
  if ( (unsigned int)v9 >= v12->max_length )
  {
LABEL_18:
    v14 = sub_B2C460(this);
    sub_B2C400(v14, 0LL);
  }
  v13 = v12->m_Items[v9];
  if ( !v13 )
    goto LABEL_17;
  return System_String__Concat_44307816(
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

  if ( (byte_418AF2F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418AF2F = 1;
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
      sub_B2C434(0LL, method);
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
  WarEntity_o *v22; // x8
  __int64 v23; // x0
  WarEntity_o *v24; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_418AF31 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v6);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418AF31 = 1;
  }
  entity = 0LL;
  v24 = 0LL;
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
      v12 = 1;
      while ( 1 )
      {
        this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                           v12,
                                           (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
        if ( !this )
          goto LABEL_51;
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
          goto LABEL_52;
        v16 = *((_QWORD *)&v14->fields.eventId + (int)v15);
        if ( !v16 )
          goto LABEL_51;
        if ( *(_DWORD *)(v16 + 44) && !*(_DWORD *)(v16 + 40) )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_51;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                             &v24,
                                             *(_DWORD *)(v16 + 44),
                                             (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        dialogMessageInfoDictionary = (int)v14->fields.dialogMessageInfoDictionary;
        if ( (int)++v15 >= dialogMessageInfoDictionary )
          goto LABEL_33;
      }
      v22 = v24;
      if ( !v24 )
        goto LABEL_51;
    }
    else
    {
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
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_51;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                             &entity,
                                             v11->fields.restrictionMessageId,
                                             (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_17;
      }
      v22 = entity;
      if ( !entity )
        goto LABEL_51;
    }
    return v22->fields.age;
  }
  else
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_51;
    v19 = restrictionEntityList->max_length;
    if ( v19 >= 1 )
    {
      v20 = 0;
      method = 0LL;
      while ( 1 )
      {
        if ( v20 >= v19 )
        {
LABEL_52:
          v23 = sub_B2C460(this);
          sub_B2C400(v23, 0LL);
        }
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
LABEL_51:
      sub_B2C434(this, method);
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
  System_String_o *v10; // x20
  int32_t *v11; // x1
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+8h] [xbp-18h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418AF30 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_10404/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, v5);
    sub_B2C35C(&StringLiteral_10403/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, v6);
    byte_418AF30 = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10404/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10403/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
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

  if ( (byte_418AF19 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10405/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, v2);
    byte_418AF19 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10405/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
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

  if ( (byte_418AF28 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    byte_418AF28 = 1;
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
  if ( (byte_418AF1F & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, isFixMessage);
    sub_B2C35C(&StringLiteral_10407/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, v5);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418AF1F = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_10407/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_19:
      sub_B2C434(this, isFixMessage);
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
          v12 = sub_B2C460(this);
          sub_B2C400(v12, 0LL);
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

  if ( (byte_418AF1E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10406/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, v2);
    byte_418AF1E = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10406/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_8:
    sub_B2C434(this, initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_B2C434(this, method);
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
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, method);
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
  struct System_Collections_Generic_List_int____o *fixedNpcIndividualitiesList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int v18; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  int v20[2]; // [xsp+20h] [xbp-50h]
  int v21; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_418AF44 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_418AF44 = 1;
  }
  memset(&i, 0, sizeof(i));
  v21 = 0;
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.isFixedSupportPosition )
  {
    fixedNpcIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( fixedNpcIndividualitiesList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v19,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v19;
            ;
            System_Collections_Generic_List_int___AddRange(
              v10,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
              (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v16 )
          break;
        if ( !v10 )
          sub_B2C434(v16, v17);
      }
      v20[0] = 142;
      v18 = ++v21;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
      if ( !v18 || v20[v18 - 1] != 142 )
        goto LABEL_14;
      v21 = v18 - 1;
      if ( v10 )
        return v10->fields._size > 0;
    }
LABEL_26:
    sub_B2C434(fixedNpcIndividualitiesList, v11);
  }
  fixedNpcIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
  if ( !fixedNpcIndividualitiesList )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v19;
        ;
        System_Collections_Generic_List_int___AddRange(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v10 )
      sub_B2C434(v13, v14);
  }
  v20[0] = 142;
  v21 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  v21 = 0;
LABEL_14:
  if ( !v10 )
    goto LABEL_26;
  return v10->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_31228864(
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
  int v26; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x23
  __int64 v28; // x24
  __int64 v29; // x25
  ServantEntity_o *Entity; // x23
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v34; // x1
  int v35; // w21
  int v36; // w26
  struct System_Boolean_array *supportPositionList; // x8
  __int64 v38; // x0
  _BOOL8 v39; // x0
  __int64 v40; // x1
  int v41; // w8
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+0h] [xbp-B0h] BYREF
  int v43[4]; // [xsp+18h] [xbp-98h]
  int v44; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v6 = this;
  if ( (byte_418AF20 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&num);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v20);
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_418AF20 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
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
  v22 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_53;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v42,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v42;
          ;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v23 )
        break;
      if ( !v22 )
        sub_B2C434(v23, v24);
    }
    v43[0] = 170;
    v44 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v26 = 0;
    v44 = 0;
LABEL_18:
    if ( !v22 )
      goto LABEL_53;
    goto LABEL_19;
  }
  this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v42;
        ;
        System_Collections_Generic_List_int___AddRange(
          v22,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v39 )
      break;
    if ( !v22 )
      sub_B2C434(v39, v40);
  }
  v43[0] = 170;
  v26 = ++v44;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v26 )
    goto LABEL_18;
  v41 = v26 - 1;
  if ( v43[v26 - 1] != 170 )
    goto LABEL_18;
  --v26;
  v44 = v41;
  if ( !v22 )
    goto LABEL_53;
LABEL_19:
  if ( v22->fields._size < 1 )
    goto LABEL_38;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_53;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v29 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v29;
  *(_QWORD *)&v47.fields.fakeValue = v28;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
  if ( !v27 )
LABEL_53:
    sub_B2C434(this, *(_QWORD *)&num);
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v27,
                                (int32_t)this,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    &v42,
    v22,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v45 = v42;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v45,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v45.fields.current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0LL);
    if ( !Entity )
      sub_B2C434(DispLimitCount, v34);
    if ( ServantEntity__IsIndividuality(Entity, limitCount, DispLimitCount, current, 0LL) )
    {
      v35 = 1;
      goto LABEL_34;
    }
  }
  v35 = 0;
LABEL_34:
  v43[v26] = 277;
  v36 = ++v44;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v45,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v36 && v43[v36 - 1] == 277 )
    v44 = v36 - 1;
  if ( !v35 )
    return 1;
LABEL_38:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
    goto LABEL_53;
  if ( supportPositionList->max_length <= num )
  {
    v38 = sub_B2C460(this);
    sub_B2C400(v38, 0LL);
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
bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
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
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v13; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x20
  __int64 v17; // x0

  if ( (byte_418AF36 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__, *(_QWORD *)&pos);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v5);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass167_0__IsMyServantOrNpcRestriction_b__0__, v7);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass167_0_TypeInfo, v8);
    byte_418AF36 = 1;
  }
  v9 = (QuestRestrictionInfo___c__DisplayClass167_0_o *)sub_B2C42C(QuestRestrictionInfo___c__DisplayClass167_0_TypeInfo);
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
        v17 = sub_B2C460(v10);
        sub_B2C400(v17, 0LL);
      }
      v13 = slotInfos->m_Items[pos - 1];
      if ( v13 )
        return (unsigned int)(v13->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_B2C434(v10, v11);
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_QuestRestrictionInfo___c__DisplayClass167_0__IsMyServantOrNpcRestriction_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v16,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int v14; // w8
  unsigned int v15; // w9
  __int64 v16; // x10
  __int64 v17; // x10
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x0

  if ( (byte_418AF38 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v6);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v7);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass169_0__IsNotIndividuality_b__0__, v8);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass169_0_TypeInfo, v9);
    byte_418AF38 = 1;
  }
  v10 = (QuestRestrictionInfo___c__DisplayClass169_0_o *)sub_B2C42C(QuestRestrictionInfo___c__DisplayClass169_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass169_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_23;
  v10->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(this, pos, v13) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                          v10->fields.pos,
                                          (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v14 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v14 >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          if ( v15 >= v14 )
          {
            v21 = sub_B2C460(restrictionSlotDetailDictionary);
            sub_B2C400(v21, 0LL);
          }
          v16 = *((_QWORD *)restrictionSlotDetailDictionary + (int)v15 + 4);
          if ( !v16 )
            break;
          if ( *(_DWORD *)(v16 + 32) == 1 )
          {
            v17 = *(_QWORD *)(v16 + 40);
            if ( v17 )
            {
              if ( *(_QWORD *)(v17 + 24) )
                goto LABEL_17;
            }
          }
          if ( (int)++v15 >= v14 )
            goto LABEL_16;
        }
LABEL_23:
        sub_B2C434(restrictionSlotDetailDictionary, v12);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
      v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v19,
        (Il2CppObject *)v10,
        Method_QuestRestrictionInfo___c__DisplayClass169_0__IsNotIndividuality_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v19,
                                          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( restrictionSlotDetailDictionary )
      {
        v20 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
        if ( !v20 )
          goto LABEL_23;
        LOBYTE(restrictionSlotDetailDictionary) = *(_DWORD *)(v20 + 24) == 0;
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
      v7 = sub_B2C460(this);
      sub_B2C400(v7, 0LL);
    }
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_B2C434(this, initPos);
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
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int32_t ServantImageLimitSealAfter; // w20
  ServantEntity_o *Entity; // x21
  unsigned __int64 datalist_low; // x8
  unsigned __int64 i; // x9
  __int64 v31; // x12
  int v32; // w25
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x23
  struct System_Byte_array *masterDataBytes; // x8
  RestrictionEntity_o *v36; // x22
  __int64 v37; // x8
  System_Int32_array *v38; // x0
  struct DataMasterBase_array *datalist; // x9
  DataManager_o *v40; // x22
  unsigned __int64 v41; // x24
  RestrictionSlotDetailEntity_o *v42; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0
  __int64 v46; // x0

  if ( (byte_418AF39 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v17);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v18);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass170_0__IsRestrictionServantIndividuality_b__0__, v21);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass170_0_TypeInfo, v22);
    byte_418AF39 = 1;
  }
  v23 = (QuestRestrictionInfo___c__DisplayClass170_0_o *)sub_B2C42C(QuestRestrictionInfo___c__DisplayClass170_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass170_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_52;
  v23->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(this, pos, v26) )
    goto LABEL_50;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_52;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v23->fields.pos,
                                    (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
              v46 = sub_B2C460(Instance);
              sub_B2C400(v46, 0LL);
            }
            v31 = *((_QWORD *)&Instance->fields.lookup + i);
            if ( isChkSupport )
            {
              if ( !v31 )
                goto LABEL_52;
              if ( *(_DWORD *)(v31 + 28) == 2 )
                goto LABEL_31;
            }
            else
            {
              if ( !v31 )
                goto LABEL_52;
              if ( *(_DWORD *)(v31 + 28) == 1 )
              {
LABEL_31:
                v32 = *(_DWORD *)(v31 + 40);
                goto LABEL_32;
              }
            }
          }
        }
        v32 = -1;
LABEL_32:
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                        v23->fields.pos,
                                        (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            datalist = Instance->fields.datalist;
            v40 = Instance;
            if ( (int)datalist >= 1 )
            {
              LOBYTE(v37) = 0;
              v41 = 0LL;
              while ( 1 )
              {
                if ( v41 >= (unsigned int)datalist )
                  goto LABEL_53;
                v42 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v40->fields.lookup + v41);
                if ( (v32 & 0x80000000) != 0 )
                {
                  if ( !v42 )
                    goto LABEL_52;
                }
                else
                {
                  if ( !v42 )
                    goto LABEL_52;
                  if ( v32 != v42->fields.id )
                    goto LABEL_48;
                }
                if ( v42->fields.type == 1 )
                {
                  targetVals = v42->fields.targetVals;
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
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v42, Individuality, 0LL);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_50;
                      LOBYTE(v37) = 1;
                    }
                  }
                }
LABEL_48:
                LODWORD(datalist) = v40->fields.datalist;
                if ( (__int64)++v41 >= (int)datalist )
                  return v37;
              }
            }
            goto LABEL_50;
          }
        }
      }
    }
LABEL_52:
    sub_B2C434(Instance, v25);
  }
  if ( isChkSupport )
    goto LABEL_50;
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v34,
    (Il2CppObject *)v23,
    Method_QuestRestrictionInfo___c__DisplayClass170_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_52;
  Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v34,
                                (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_50;
  masterDataBytes = Instance->fields.masterDataBytes;
  v36 = (RestrictionEntity_o *)Instance;
  if ( !masterDataBytes )
    goto LABEL_52;
  v37 = *(_QWORD *)&masterDataBytes->max_length;
  if ( v37 )
  {
    if ( !Entity )
      goto LABEL_52;
    v38 = ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
    if ( RestrictionEntity__IsRestriction_32861000(v36, v38, 0LL) )
    {
      LOBYTE(v37) = 1;
      return v37;
    }
LABEL_50:
    LOBYTE(v37) = 0;
  }
  return v37;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_31244412(
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
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int v16; // w9
  void *v17; // x20
  unsigned int v18; // w21
  __int64 v19; // x8
  __int64 v20; // x9
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x21
  __int64 v23; // x8
  __int64 v25; // x0

  if ( (byte_418AF3A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      individuality);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v8);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v9);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass171_0__IsRestrictionServantIndividuality_b__0__, v10);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass171_0_TypeInfo, v11);
    byte_418AF3A = 1;
  }
  v12 = (QuestRestrictionInfo___c__DisplayClass171_0_o *)sub_B2C42C(QuestRestrictionInfo___c__DisplayClass171_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass171_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_26;
  v12->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(this, pos, v15) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                                        v12->fields.pos,
                                        (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v16 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v17 = restrictionSlotDetailDictionary;
    if ( v16 >= 1 )
    {
      v18 = 0;
      LOBYTE(v19) = 0;
      while ( 1 )
      {
        if ( v18 >= v16 )
        {
          v25 = sub_B2C460(restrictionSlotDetailDictionary);
          sub_B2C400(v25, 0LL);
        }
        restrictionSlotDetailDictionary = (void *)*((_QWORD *)v17 + (int)v18 + 4);
        if ( !restrictionSlotDetailDictionary )
          break;
        if ( *((_DWORD *)restrictionSlotDetailDictionary + 8) == 1 )
        {
          v20 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
          if ( v20 )
          {
            if ( *(_QWORD *)(v20 + 24) )
            {
              restrictionSlotDetailDictionary = (void *)RestrictionSlotDetailEntity__IsIndividuality(
                                                          (RestrictionSlotDetailEntity_o *)restrictionSlotDetailDictionary,
                                                          individuality,
                                                          0LL);
              if ( ((unsigned __int8)restrictionSlotDetailDictionary & 1) != 0 )
                goto LABEL_24;
              LOBYTE(v19) = 1;
            }
          }
        }
        v16 = *((_DWORD *)v17 + 6);
        if ( (int)++v18 >= v16 )
          return v19 & 1;
      }
LABEL_26:
      sub_B2C434(restrictionSlotDetailDictionary, v14);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_QuestRestrictionInfo___c__DisplayClass171_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v22,
                                      (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !restrictionSlotDetailDictionary )
  {
LABEL_24:
    LOBYTE(v19) = 0;
    return v19 & 1;
  }
  v23 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
  if ( !v23 )
    goto LABEL_26;
  v19 = *(_QWORD *)(v23 + 24);
  if ( v19 )
    return RestrictionEntity__IsRestriction_32861000(
             (RestrictionEntity_o *)restrictionSlotDetailDictionary,
             individuality,
             0LL);
  return v19 & 1;
}


bool __fastcall QuestRestrictionInfo__IsRestriction_31224308(
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
  __int64 v26; // x1
  int32_t ServantImageLimitSealAfter; // w24
  ServantEntity_o *Entity; // x26
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int v30; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  unsigned int v32; // w24
  bool v33; // vf
  int v34; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v36; // x23
  bool v37; // w21
  QuestRestrictionInfo_SlotInfo_o *v38; // x8
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  int size; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v42; // x8
  QuestRestrictionInfo_SlotInfo_o *v43; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct QuestRestrictionInfo_SlotInfo_array *v45; // x8
  QuestRestrictionInfo_SlotInfo_o *v46; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *v47; // x28
  struct RestrictionEntity_array *restrictionEntityList; // x22
  int max_length; // w8
  DataManager_o *v50; // x25
  unsigned int v51; // w23
  RestrictionEntity_o *v52; // x19
  int32_t type; // w8
  System_Int32_array *Individuality; // x0
  int32_t datalist; // w1
  RestrictionEntity_o *v56; // x0
  __int64 v58; // x0

  if ( (byte_418AF16 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, isWhole);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int___, v18);
    sub_B2C35C(&Method_System_Linq_Enumerable_Intersect_int___, v19);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Count__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_418AF16 = 1;
  }
  *isWhole = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_70;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    v50 = Instance;
    v51 = 0;
    while ( 1 )
    {
      if ( v51 >= max_length )
        goto LABEL_71;
      v52 = restrictionEntityList->m_Items[v51];
      if ( !v52 )
        goto LABEL_70;
      type = v52->fields.type;
      if ( type == 4 )
        break;
      if ( type == 2 )
      {
        if ( !v50 )
          goto LABEL_70;
        datalist = (int32_t)v50->fields.datalist;
        v56 = restrictionEntityList->m_Items[v51];
LABEL_64:
        Instance = (DataManager_o *)RestrictionEntity__IsRestriction(v56, datalist, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return 1;
        goto LABEL_65;
      }
      if ( type == 1 )
      {
        if ( !Entity )
          goto LABEL_70;
        Individuality = ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
        Instance = (DataManager_o *)RestrictionEntity__IsRestriction_32861000(v52, Individuality, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return 1;
      }
LABEL_65:
      max_length = restrictionEntityList->max_length;
      if ( (int)++v51 >= max_length )
        return 0;
    }
    v56 = restrictionEntityList->m_Items[v51];
    datalist = lv;
    goto LABEL_64;
  }
  if ( !Entity )
    goto LABEL_70;
  Instance = (DataManager_o *)ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_70;
  v30 = restrictionWholeEntities->max_length;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
  if ( v30 < 1 )
  {
LABEL_19:
    v33 = __OFSUB__(initPos, 1);
    v34 = initPos - 1;
    if ( v34 < 0 == v33 )
    {
      slotInfos = this->fields.slotInfos;
      if ( slotInfos )
      {
        v36 = 0LL;
        v37 = 0;
        while ( v34 < slotInfos->max_length )
        {
          v38 = slotInfos->m_Items[v34];
          if ( !v38 )
            goto LABEL_70;
          individualityList = v38->fields.individualityList;
          if ( !individualityList )
            goto LABEL_70;
          size = individualityList->fields._size;
          if ( (int)v36 >= size )
            return v37;
          if ( size <= (unsigned int)v36 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          Instance = (DataManager_o *)individualityList->fields._items->m_Items[v36];
          if ( !Instance )
            goto LABEL_70;
          if ( Instance->fields.datalist )
          {
            v41 = System_Linq_Enumerable__Intersect_int_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                    v31,
                    (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___);
            Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                          v41,
                                          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
            v42 = this->fields.slotInfos;
            if ( !v42 )
              goto LABEL_70;
            if ( v34 >= v42->max_length )
              break;
            v43 = v42->m_Items[v34];
            if ( !v43 )
              goto LABEL_70;
            rangeTypeList = v43->fields.rangeTypeList;
            if ( !rangeTypeList )
              goto LABEL_70;
            if ( rangeTypeList->fields._size <= (unsigned int)v36 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( rangeTypeList->fields._items->m_Items[v36 + 1] == 1 )
            {
              Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                            (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 0;
            }
            else
            {
              v45 = this->fields.slotInfos;
              if ( !v45 )
                goto LABEL_70;
              if ( v34 >= v45->max_length )
                break;
              v46 = v45->m_Items[v34];
              if ( !v46 )
                goto LABEL_70;
              v47 = v46->fields.rangeTypeList;
              if ( !v47 )
                goto LABEL_70;
              if ( v47->fields._size <= (unsigned int)v36 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              if ( v47->fields._items->m_Items[v36 + 1] == 2 )
              {
                Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                              (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                  return 0;
              }
            }
            v37 = 1;
          }
          slotInfos = this->fields.slotInfos;
          ++v36;
          if ( !slotInfos )
            goto LABEL_70;
        }
LABEL_71:
        v58 = sub_B2C460(Instance);
        sub_B2C400(v58, 0LL);
      }
LABEL_70:
      sub_B2C434(Instance, v26);
    }
    return 0;
  }
  v32 = 0;
  while ( 1 )
  {
    if ( v32 >= v30 )
      goto LABEL_71;
    Instance = (DataManager_o *)restrictionWholeEntities->m_Items[v32];
    if ( !Instance )
      goto LABEL_70;
    if ( LODWORD(Instance->fields.lookup) == 1 )
    {
      Instance = (DataManager_o *)RestrictionWholeEntity__IsIndividuality(
                                    (RestrictionWholeEntity_o *)Instance,
                                    (System_Int32_array *)v31,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
    }
    v30 = restrictionWholeEntities->max_length;
    if ( (int)++v32 >= v30 )
      goto LABEL_19;
  }
  v37 = 1;
  *isWhole = 1;
  return v37;
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
  _BOOL8 IsMyServantOrNpcRestriction_31241252; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v14; // w9
  QuestRestrictionInfo_SlotInfo_o *v15; // x8
  bool v16; // zf
  peRenderTexture_ChangeLayerObject_o *v17; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x20
  __int64 v20; // x0

  if ( (byte_418AF37 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&pos);
    sub_B2C35C(&Method_System_Predicate_RestrictionEntity___ctor__, v5);
    sub_B2C35C(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__DisplayClass168_0__IsSelectableNormalSupport_b__0__, v7);
    sub_B2C35C(&QuestRestrictionInfo___c__DisplayClass168_0_TypeInfo, v8);
    byte_418AF37 = 1;
  }
  v9 = (QuestRestrictionInfo___c__DisplayClass168_0_o *)sub_B2C42C(QuestRestrictionInfo___c__DisplayClass168_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass168_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v9->fields.pos = pos;
  IsMyServantOrNpcRestriction_31241252 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(this, pos, v12);
  if ( !IsMyServantOrNpcRestriction_31241252 )
  {
    LOBYTE(v17) = 0;
    return (char)v17;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v19,
      (Il2CppObject *)v9,
      Method_QuestRestrictionInfo___c__DisplayClass168_0__IsSelectableNormalSupport_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v17 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v19,
              (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v17 )
        return (char)v17;
      v16 = LODWORD(v17->fields.orgMaterial) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_B2C434(IsMyServantOrNpcRestriction_31241252, v11);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v14 = v9->fields.pos - 1;
  if ( v14 >= slotInfos->max_length )
  {
    v20 = sub_B2C460(IsMyServantOrNpcRestriction_31241252);
    sub_B2C400(v20, 0LL);
  }
  v15 = slotInfos->m_Items[v14];
  if ( !v15 )
    goto LABEL_18;
  v16 = v15->fields.slotType == 4;
LABEL_14:
  LOBYTE(v17) = v16;
  return (char)v17;
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
  __int64 IsMyServantOrNpcRestriction_31241252; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  int v11; // w8
  unsigned int v12; // w9
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int max_length; // w9
  unsigned int v16; // w10
  __int64 v17; // x0

  if ( (byte_418AF32 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, v7);
    byte_418AF32 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    goto LABEL_23;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    goto LABEL_23;
  IsMyServantOrNpcRestriction_31241252 = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_31241252 = (__int64)BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    servantNumMax = *(_DWORD *)(*(_QWORD *)(IsMyServantOrNpcRestriction_31241252 + 184) + 156LL);
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
    IsMyServantOrNpcRestriction_31241252 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                                             this,
                                             pos,
                                             *(const MethodInfo **)&pos);
    if ( (IsMyServantOrNpcRestriction_31241252 & 1) == 0 )
    {
      if ( this->fields.isFixedMyServantPosition )
      {
        IsMyServantOrNpcRestriction_31241252 = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                          this,
                                                          *(const MethodInfo **)&svtId);
        if ( IsMyServantOrNpcRestriction_31241252 )
        {
          v11 = *(_DWORD *)(IsMyServantOrNpcRestriction_31241252 + 24);
          if ( v11 >= 1 )
          {
            v12 = 0;
            while ( v12 < v11 )
            {
              if ( *(_DWORD *)(IsMyServantOrNpcRestriction_31241252 + 4LL * (int)v12 + 32) == svtId )
                goto LABEL_23;
              if ( (int)++v12 >= v11 )
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
            v16 = 0;
            IsMyServantOrNpcRestriction_31241252 = 1LL;
            while ( v16 < max_length )
            {
              if ( targetVals->m_Items[v16 + 1] == svtId )
                goto LABEL_23;
              if ( (int)++v16 >= max_length )
                return IsMyServantOrNpcRestriction_31241252;
            }
LABEL_41:
            v17 = sub_B2C460(IsMyServantOrNpcRestriction_31241252);
            sub_B2C400(v17, 0LL);
          }
LABEL_40:
          LOBYTE(IsMyServantOrNpcRestriction_31241252) = 1;
          return IsMyServantOrNpcRestriction_31241252;
        }
      }
LABEL_42:
      sub_B2C434(IsMyServantOrNpcRestriction_31241252, *(_QWORD *)&svtId);
    }
  }
LABEL_23:
  LOBYTE(IsMyServantOrNpcRestriction_31241252) = 0;
  return IsMyServantOrNpcRestriction_31241252;
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
  if ( (byte_418AF46 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    byte_418AF46 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_B2C434(this, *(_QWORD *)&pos);
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
  __int64 v18; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x21
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  unsigned int v22; // w22
  bool v23; // w20
  QuestRestrictionInfo_SlotInfo_o *v24; // x26
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  __int64 v26; // x27
  int size; // w8
  System_Int32_array *v28; // x8
  struct System_Collections_Generic_List_int____o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct System_Collections_Generic_List_Restriction_RangeType__o *v32; // x28
  __int64 v34; // x0

  if ( (byte_418AF4F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Intersect_int___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418AF4F = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  svtId,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v22 = 0;
      v23 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
        {
          v34 = sub_B2C460(Instance);
          sub_B2C400(v34, 0LL);
        }
        v24 = slotInfos->m_Items[v22];
        if ( !v24 )
          break;
        if ( v24->fields.slotType == 2 )
        {
          individualityList = v24->fields.individualityList;
          if ( !individualityList )
            break;
          v26 = 0LL;
          while ( 1 )
          {
            size = individualityList->fields._size;
            if ( (int)v26 >= size )
              break;
            if ( size <= (unsigned int)v26 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v28 = individualityList->fields._items->m_Items[v26];
            if ( !v28 )
              goto LABEL_41;
            if ( *(_QWORD *)&v28->max_length )
            {
              v29 = v24->fields.individualityList;
              if ( !v29 )
                goto LABEL_41;
              if ( v29->fields._size <= (unsigned int)v26 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v30 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v29->fields._items->m_Items[v26],
                      v21,
                      (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                            v30,
                                            (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
              rangeTypeList = v24->fields.rangeTypeList;
              if ( !rangeTypeList )
                goto LABEL_41;
              if ( rangeTypeList->fields._size <= (unsigned int)v26 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              if ( rangeTypeList->fields._items->m_Items[v26 + 1] == 1 )
              {
                Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                              (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  return 0;
              }
              else
              {
                v32 = v24->fields.rangeTypeList;
                if ( !v32 )
                  goto LABEL_41;
                if ( v32->fields._size <= (unsigned int)v26 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                if ( v32->fields._items->m_Items[v26 + 1] == 2 )
                {
                  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                                (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
                  if ( ((unsigned __int8)Instance & 1) == 0 )
                    return 0;
                }
              }
              v23 = 1;
            }
            individualityList = v24->fields.individualityList;
            ++v26;
            if ( !individualityList )
              goto LABEL_41;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v22 >= max_length )
          return v23;
      }
LABEL_41:
      sub_B2C434(Instance, v18);
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
  __int64 v6; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x19
  unsigned int v10; // w21
  RestrictionWholeEntity_o *v11; // x8
  struct System_Int32_array *targetVals; // x23
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  __int64 v16; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418AF4E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    byte_418AF4E = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_B2C434(Master_WarQuestSelectionMaster, v6);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
LABEL_24:
      v16 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v16, 0LL);
    }
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
LABEL_20:
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
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    v9,
                                                                    &entity,
                                                                    targetVals->m_Items[v14 + 1],
                                                                    (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
      return 0;
    LODWORD(v13) = targetVals->max_length;
    if ( (__int64)++v14 >= (int)v13 )
      goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_31227040(
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
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x22
  struct System_Int32_array *uniqueIndividualitys; // x26
  __int64 v18; // x8
  ServantEntity_o *v19; // x23
  unsigned __int64 v20; // x27
  int32_t v21; // w24
  __int64 i; // x21
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  unsigned __int64 v26; // x19
  __int64 v27; // x0
  int32_t v29; // [xsp+8h] [xbp-58h]
  int32_t ServantImageLimitSealAfter; // [xsp+Ch] [xbp-54h]

  if ( (byte_418AF1C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418AF1C = 1;
  }
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_35;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_37;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_37:
    sub_B2C434(Instance, v15);
  }
  v18 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v18 >= 1 )
  {
    v29 = limitCount;
    v19 = (ServantEntity_o *)Instance;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
      {
LABEL_38:
        v27 = sub_B2C460(Instance);
        sub_B2C400(v27, 0LL);
      }
      if ( !v19 )
        goto LABEL_37;
      v21 = uniqueIndividualitys->m_Items[v20 + 1];
      if ( ServantEntity__IsIndividuality(v19, v29, ServantImageLimitSealAfter, v21, 0LL) )
        break;
LABEL_33:
      LODWORD(v18) = uniqueIndividualitys->max_length;
      ++v20;
      Instance = 0LL;
      if ( (__int64)v20 >= (int)v18 )
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
      v15 = *((unsigned int *)&deckSvtIdList->obj.klass + i);
      if ( (int)v15 >= 1 )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v16,
                                      v15,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
LABEL_35:
    LOBYTE(Instance) = 0;
  }
  return (char)Instance;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_31227688(
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
  __int64 v21; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x24
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  int32_t v26; // w26
  int32_t i; // w27
  PartyOrganizationListViewItem_o *v28; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  int32_t v30; // w0
  ServantEntity_o *v31; // x23
  int32_t svtLimitCount; // w22
  __int64 v34; // x0
  DataManager_o *v35; // [xsp+8h] [xbp-78h]
  struct System_Int32_array *v36; // [xsp+10h] [xbp-70h]
  int32_t ServantImageLimitSealAfter; // [xsp+1Ch] [xbp-64h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_418AF1D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418AF1D = 1;
  }
  entity = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_38;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      svtId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_38:
    sub_B2C434(Instance, v21);
  }
  v24 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v24 < 1 )
    return 0;
  v25 = 0LL;
  v35 = Instance;
  v36 = uniqueIndividualitys;
  while ( 1 )
  {
    if ( v25 >= (unsigned int)v24 )
    {
      v34 = sub_B2C460(Instance);
      sub_B2C400(v34, 0LL);
    }
    if ( !Instance )
      goto LABEL_38;
    v26 = uniqueIndividualitys->m_Items[v25 + 1];
    if ( ServantEntity__IsIndividuality((ServantEntity_o *)Instance, limitCount, ServantImageLimitSealAfter, v26, 0LL) )
      break;
LABEL_34:
    Instance = v35;
    uniqueIndividualitys = v36;
    ++v25;
    LODWORD(v24) = v36->max_length;
    if ( (__int64)v25 >= (int)v24 )
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
      v28 = (PartyOrganizationListViewItem_o *)Instance;
      v29 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL);
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v22,
             &entity,
             v30,
             (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v31 = (ServantEntity_o *)entity;
        svtLimitCount = v28->fields.svtLimitCount;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v28, 0LL);
        if ( !v31 )
          goto LABEL_38;
        if ( ServantEntity__IsIndividuality(v31, svtLimitCount, (int32_t)Instance, v26, 0LL) )
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
bool __fastcall QuestRestrictionInfo__IsUniqueServant_31226468(
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

  if ( (byte_418AF1A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_418AF1A = 1;
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
        sub_B2C434(v7, *(_QWORD *)&svtId);
      if ( v6 >= deckSvtIdList->max_length )
      {
        v10 = sub_B2C460(v7);
        sub_B2C400(v10, 0LL);
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
bool __fastcall QuestRestrictionInfo__IsUniqueServant_31226692(
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

  if ( (byte_418AF1B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_418AF1B = 1;
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
          sub_B2C434(Member, *(_QWORD *)&svtId);
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL) == svtId )
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

  if ( (byte_418AF11 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_418AF11 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v5;
  sub_B2C2F8(
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
  __int64 v7; // x1
  __int64 v8; // x26
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v11; // x21
  struct System_Int32_array *v12; // x27
  __int64 v13; // x22
  __int64 v14; // x23
  BalanceConfig_c *DispLimitCount; // x0
  struct System_Int32_array *deckLimitCountList; // x27
  __int64 v17; // x22
  __int64 v18; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  unsigned __int64 v20; // x28
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_418AF0E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userDeckEntity);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_418AF0E = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = 8LL;
    v8 = 1LL - (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v20 = v6 - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v20 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_31;
      if ( v20 >= deckSvtIdList->max_length )
        goto LABEL_30;
      *((_DWORD *)&deckSvtIdList->obj.klass + v6) = 0;
      if ( v8 + v6 != 8 )
      {
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, (int)v6 - 8, 0LL);
        if ( UserServant )
        {
          v11 = UserServant;
          v12 = this->fields.deckSvtIdList;
          v14 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v13 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v22.fields.currentCryptoKey = v14;
          *(_QWORD *)&v22.fields.fakeValue = v13;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                v22,
                                                0LL);
          if ( !v12 )
LABEL_31:
            sub_B2C434(DispLimitCount, v7);
          if ( v20 >= v12->max_length )
          {
LABEL_30:
            v21 = sub_B2C460(DispLimitCount);
            sub_B2C400(v21, 0LL);
          }
          *((_DWORD *)&v12->obj.klass + v6) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v18 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v23.fields.currentCryptoKey = v18;
            *(_QWORD *)&v23.fields.fakeValue = v17;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v23,
                                                  0LL);
            if ( v20 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v11, 0, 0LL);
            if ( v20 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v6;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_31220484(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x24
  __int64 v7; // x1
  __int64 v8; // x26
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v11; // x21
  struct System_Int32_array *v12; // x27
  __int64 v13; // x22
  __int64 v14; // x23
  BalanceConfig_c *DispLimitCount; // x0
  struct System_Int32_array *deckLimitCountList; // x27
  __int64 v17; // x22
  __int64 v18; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  unsigned __int64 v20; // x28
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_418AF0F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, eventDeckEntity);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_418AF0F = 1;
  }
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = 8LL;
    v8 = 1LL - (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v20 = v6 - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v20 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_31;
      if ( v20 >= deckSvtIdList->max_length )
        goto LABEL_30;
      *((_DWORD *)&deckSvtIdList->obj.klass + v6) = 0;
      if ( v8 + v6 != 8 )
      {
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, (int)v6 - 8, 0LL);
        if ( UserServant )
        {
          v11 = UserServant;
          v12 = this->fields.deckSvtIdList;
          v14 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v13 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v22.fields.currentCryptoKey = v14;
          *(_QWORD *)&v22.fields.fakeValue = v13;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                v22,
                                                0LL);
          if ( !v12 )
LABEL_31:
            sub_B2C434(DispLimitCount, v7);
          if ( v20 >= v12->max_length )
          {
LABEL_30:
            v21 = sub_B2C460(DispLimitCount);
            sub_B2C400(v21, 0LL);
          }
          *((_DWORD *)&v12->obj.klass + v6) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v18 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v23.fields.currentCryptoKey = v18;
            *(_QWORD *)&v23.fields.fakeValue = v17;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v23,
                                                  0LL);
            if ( v20 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v11, 0, 0LL);
            if ( v20 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v6;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_31220960(
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

  if ( (byte_418AF10 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, partyItem);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_418AF10 = 1;
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
      Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                    SvtId,
                                                    0LL);
      if ( !deckSvtIdList )
LABEL_29:
        sub_B2C434(Member, partyItem);
      if ( v8 >= deckSvtIdList->max_length )
      {
LABEL_30:
        v18 = sub_B2C460(Member);
        sub_B2C400(v18, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v142; // x20
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Collections_Generic_List_int__o *v149; // x20
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
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
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v180; // x20
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v187; // x20
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v194; // x20
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v201; // x20
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v208; // x20
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v215; // x20
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v228; // x20
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  BattleServantConfConponent_o *p_fields; // x25
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v249; // x1
  const MethodInfo *v250; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v251; // x20
  System_String_array **v252; // x2
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v258; // x20
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v265; // x20
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v274; // x0
  System_Int32_array **v275; // x0
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  RestrictionBaseEntity_o *v282; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v283; // x21
  struct RestrictionWholeEntity_array *Entities; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // x26
  System_String_array **v286; // x2
  System_String_array **v287; // x3
  System_Boolean_array **v288; // x4
  System_Int32_array **v289; // x5
  System_Int32_array *v290; // x6
  System_Int32_array *v291; // x7
  struct RestrictionWholeEntity_array *v292; // x19
  int max_length; // w8
  unsigned int v294; // w20
  RestrictionWholeEntity_o *v295; // x23
  System_Int32_array **SetPossiblePosition; // x0
  System_String_array **v297; // x2
  System_String_array **v298; // x3
  System_Boolean_array **v299; // x4
  System_Int32_array **v300; // x5
  System_Int32_array *v301; // x6
  System_Int32_array *v302; // x7
  Il2CppObject *v303; // x0
  System_Int32_array **v304; // x0
  System_String_array **v305; // x2
  System_String_array **v306; // x3
  System_Boolean_array **v307; // x4
  System_Int32_array **v308; // x5
  System_Int32_array *v309; // x6
  System_Int32_array *v310; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v311; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v312; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v313; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v314; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v315; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v316; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v317; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v318; // x0
  Il2CppObject *v319; // x0
  System_Int32_array **v320; // x0
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  BalanceConfig_c *v327; // x0
  System_Int32_array **v328; // x0
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  System_Int32_array **v335; // x0
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  System_Int32_array **v342; // x0
  System_String_array **v343; // x2
  System_String_array **v344; // x3
  System_Boolean_array **v345; // x4
  System_Int32_array **v346; // x5
  System_Int32_array *v347; // x6
  System_Int32_array *v348; // x7
  System_Int32_array **v349; // x0
  System_String_array **v350; // x2
  System_String_array **v351; // x3
  System_Boolean_array **v352; // x4
  System_Int32_array **v353; // x5
  System_Int32_array *v354; // x6
  System_Int32_array *v355; // x7
  Il2CppObject *v356; // x0
  System_Int32_array **v357; // x0
  System_String_array **v358; // x2
  System_String_array **v359; // x3
  System_Boolean_array **v360; // x4
  System_Int32_array **v361; // x5
  System_Int32_array *v362; // x6
  System_Int32_array *v363; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v364; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v365; // x0
  Il2CppObject *v366; // x0
  System_Int32_array **v367; // x0
  System_String_array **v368; // x2
  System_String_array **v369; // x3
  System_Boolean_array **v370; // x4
  System_Int32_array **v371; // x5
  System_Int32_array *v372; // x6
  System_Int32_array *v373; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v374; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v375; // x0
  struct System_Int32_array *targetVals; // x8
  int32_t restrictionMessageId; // w2
  QuestRestrictionInfo_DialogMessageInfo_o *v378; // x26
  QuestRestrictionInfo_o *v379; // x26
  System_Collections_Generic_Dictionary_K__V__o **v380; // x28
  int isAllOutBattle; // w8
  const MethodInfo *v382; // x4
  __int64 v383; // x22
  System_String_array **v384; // x2
  System_String_array **v385; // x3
  System_Boolean_array **v386; // x4
  System_Int32_array **v387; // x5
  System_Int32_array *v388; // x6
  System_Int32_array *v389; // x7
  BalanceConfig_c *v390; // x0
  System_Int32_array **v391; // x0
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  int32_t v398; // w22
  int i; // w23
  BalanceConfig_c *v400; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v401; // x8
  __int64 v402; // x24
  System_Collections_Generic_List_int__o *v403; // x23
  int v404; // w8
  __int64 v405; // x19
  __int64 v406; // x26
  int32_t v407; // w2
  QuestRestrictionInfo_DialogMessageInfo_o *v408; // x26
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v409; // x23
  BattleServantConfConponent_c *klass; // x19
  QuestRestrictionInfo_SlotInfo_o *v411; // x27
  System_String_array **v412; // x2
  System_String_array **v413; // x3
  System_Boolean_array **v414; // x4
  System_Int32_array **v415; // x5
  System_Int32_array *v416; // x6
  System_Int32_array *v417; // x7
  int v418; // w20
  void **v419; // x0
  int servantNumMax; // w8
  BattleServantConfConponent_c *v421; // x8
  int32_t v422; // w23
  __int64 v423; // x8
  BattleServantConfConponent_c *v424; // x8
  __int64 v425; // x8
  QuestRestrictionInfo___c_c *v426; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_0; // x27
  Il2CppObject *v429; // x26
  struct QuestRestrictionInfo___c_StaticFields *v430; // x0
  System_String_array **v431; // x2
  System_String_array **v432; // x3
  System_Boolean_array **v433; // x4
  System_Int32_array **v434; // x5
  System_Int32_array *v435; // x6
  System_Int32_array *v436; // x7
  _BOOL4 v437; // w19
  QuestRestrictionInfo___c_c *v438; // x8
  struct QuestRestrictionInfo___c_StaticFields *v439; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_1; // x27
  Il2CppObject *v441; // x26
  struct QuestRestrictionInfo___c_StaticFields *v442; // x0
  System_String_array **v443; // x2
  System_String_array **v444; // x3
  System_Boolean_array **v445; // x4
  System_Int32_array **v446; // x5
  System_Int32_array *v447; // x6
  System_Int32_array *v448; // x7
  _BOOL4 v449; // w27
  QuestRestrictionInfo___c_c *v450; // x8
  struct QuestRestrictionInfo___c_StaticFields *v451; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_2; // x26
  Il2CppObject *v453; // x19
  struct QuestRestrictionInfo___c_StaticFields *v454; // x0
  System_String_array **v455; // x2
  System_String_array **v456; // x3
  System_Boolean_array **v457; // x4
  System_Int32_array **v458; // x5
  System_Int32_array *v459; // x6
  System_Int32_array *v460; // x7
  BattleServantConfConponent_c *v461; // x8
  __int64 v462; // x8
  BattleServantConfConponent_c *v463; // x8
  __int64 v464; // x8
  BattleServantConfConponent_c *v465; // x8
  __int64 v466; // x8
  int v467; // w8
  unsigned int v468; // w19
  WellFired_USFGOPlayBgmEventConditional_CondBGM_o *v469; // x27
  __int64 v470; // x8
  BattleServantConfConponent_c *v471; // x8
  __int64 v472; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v473; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v474; // x0
  BattleServantConfConponent_c *v475; // x8
  __int64 v476; // x8
  System_String_o *condValue; // x27
  BattleServantConfConponent_c *v478; // x8
  __int64 v479; // x8
  System_String_array **v480; // x2
  System_String_array **v481; // x3
  System_Boolean_array **v482; // x4
  System_Int32_array **v483; // x5
  System_Int32_array *v484; // x6
  System_Int32_array *v485; // x7
  BattleServantConfConponent_c *v486; // x8
  __int64 v487; // x8
  System_String_o **v488; // x26
  BattleServantConfConponent_o *v489; // x0
  System_Int32_array **v490; // x1
  BattleServantConfConponent_c *v491; // x8
  __int64 v492; // x27
  QuestRestrictionInfo___c_c *v493; // x0
  struct QuestRestrictionInfo___c_StaticFields *v494; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_3; // x26
  Il2CppObject *v496; // x19
  struct QuestRestrictionInfo___c_StaticFields *v497; // x0
  System_String_array **v498; // x2
  System_String_array **v499; // x3
  System_Boolean_array **v500; // x4
  System_Int32_array **v501; // x5
  System_Int32_array *v502; // x6
  System_Int32_array *v503; // x7
  BattleServantConfConponent_c *v504; // x10
  unsigned int namespaze; // w9
  void **v506; // x8
  __int64 *v507; // x8
  _DWORD *v508; // x11
  _DWORD *v509; // t1
  __int64 v510; // x8
  BattleServantConfConponent_c *v511; // x8
  __int64 v512; // x8
  BattleServantConfConponent_c *v513; // x8
  __int64 v514; // x8
  System_Int32_array **v515; // x0
  System_String_array **v516; // x2
  System_String_array **v517; // x3
  System_Boolean_array **v518; // x4
  System_Int32_array **v519; // x5
  System_Int32_array *v520; // x6
  System_Int32_array *v521; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v523; // w10
  unsigned int v524; // w11
  int v525; // w9
  int v526; // w20
  int32_t v527; // w19
  QuestRestrictionInfo_SlotInfo_o *v528; // x13
  int v529; // w8
  unsigned int v530; // w9
  __int64 v531; // x10
  char v532; // w21
  bool v533; // w8
  bool v534; // w8
  Il2CppObject *Value_int__object; // x0
  int v536; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v538; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v539; // x8
  __int64 v540; // x8
  Il2CppObject *v541; // x0
  System_Int32_array **v542; // x0
  System_String_array **v543; // x2
  System_String_array **v544; // x3
  System_Boolean_array **v545; // x4
  System_Int32_array **v546; // x5
  System_Int32_array *v547; // x6
  System_Int32_array *v548; // x7
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *restrictionSlotDictionary; // x8
  _BOOL8 v550; // x0
  __int64 v551; // x1
  int monitor; // w9
  unsigned int v553; // w10
  __int64 v554; // x11
  System_Text_StringBuilder_o *v555; // x20
  System_Text_StringBuilder_o *v556; // x21
  struct RestrictionWholeEntity_array *v557; // x19
  int v558; // w8
  unsigned int v559; // w22
  RestrictionWholeEntity_o *v560; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v563; // w25
  _BOOL4 v564; // w8
  System_Int32_array **v565; // x0
  System_String_array **v566; // x2
  System_String_array **v567; // x3
  System_Boolean_array **v568; // x4
  System_Int32_array **v569; // x5
  System_Int32_array *v570; // x6
  System_Int32_array *v571; // x7
  System_String_o *v572; // x19
  System_String_o *v573; // x0
  System_Int32_array **v574; // x0
  System_String_array **v575; // x2
  System_String_array **v576; // x3
  System_Boolean_array **v577; // x4
  System_Int32_array **v578; // x5
  System_Int32_array *v579; // x6
  System_Int32_array *v580; // x7
  __int64 v581; // x0
  __int64 v582; // x0
  __int64 v583; // x0
  BattleServantConfConponent_o *p_svtIdForceBattleList; // [xsp+0h] [xbp-190h]
  struct RestrictionWholeEntity_array **v585; // [xsp+8h] [xbp-188h]
  BattleServantConfConponent_o *p_confirmRestrictionMessage; // [xsp+10h] [xbp-180h]
  BattleServantConfConponent_o *p_restrictionMessage; // [xsp+18h] [xbp-178h]
  BattleServantConfConponent_o *v588; // [xsp+20h] [xbp-170h]
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
  _BOOL4 v603; // [xsp+90h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_restrictionSlotDetailDictionary; // [xsp+98h] [xbp-F8h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+A0h] [xbp-F0h]
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **p_dialogMessageInfoDictionary; // [xsp+A8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+B0h] [xbp-E0h]
  BattleServantConfConponent_o *p_deckSvtIdList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v609; // [xsp+B8h] [xbp-D8h]
  int32_t questIdb; // [xsp+C4h] [xbp-CCh]
  QuestRestrictionInfo_o *v612; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v613; // [xsp+D0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v614; // [xsp+D8h] [xbp-B8h] BYREF
  int v615; // [xsp+F0h] [xbp-A0h]
  int v616; // [xsp+F8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v617; // [xsp+100h] [xbp-90h] BYREF
  WarEntity_o *v618; // [xsp+118h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+120h] [xbp-70h] BYREF
  QuestPhaseEntity_o *v620; // [xsp+128h] [xbp-68h] BYREF
  WarEntity_o *v621; // [xsp+130h] [xbp-60h] BYREF

  if ( (byte_418AF0C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___, v9);
    sub_B2C35C(&Method_BasicHelper_Any_RestrictionSlotEntity___, v10);
    sub_B2C35C(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestGroupMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionMessageMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionSlotMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionWholeMaster___, v20);
    sub_B2C35C(&DataManager_TypeInfo, v21);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v22);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v23);
    sub_B2C35C(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v24);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__, v35);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v36);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v37);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v38);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__,
      v39);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__,
      v40);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__,
      v41);
    sub_B2C35C(&Method_System_Func_RestrictionSlotEntity__bool___ctor__, v42);
    sub_B2C35C(&Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__, v43);
    sub_B2C35C(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo, v44);
    sub_B2C35C(&System_Func_RestrictionSlotEntity__bool__TypeInfo, v45);
    sub_B2C35C(&int___TypeInfo, v46);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____Add__, v47);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__, v48);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool____Add__, v49);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__, v50);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v51);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__, v52);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v53);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__, v54);
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, v55);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool_____ctor__, v56);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v57);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v58);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__, v59);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v60);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v61);
    sub_B2C35C(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v62);
    sub_B2C35C(&System_Collections_Generic_List_bool____TypeInfo, v63);
    sub_B2C35C(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo, v64);
    sub_B2C35C(&LocalizationManager_TypeInfo, v65);
    sub_B2C35C(&QuestRestrictionInfo_SlotInfo___TypeInfo, v66);
    sub_B2C35C(&QuestRestrictionInfo_SlotInfo_TypeInfo, v67);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v68);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__Setup_b__82_0__, v69);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__Setup_b__82_1__, v70);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__Setup_b__82_2__, v71);
    sub_B2C35C(&Method_QuestRestrictionInfo___c__Setup_b__82_3__, v72);
    sub_B2C35C(&QuestRestrictionInfo___c_TypeInfo, v73);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__,
      v74);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v75);
    sub_B2C35C(&StringLiteral_10394/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v76);
    sub_B2C35C(&StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v77);
    sub_B2C35C(&StringLiteral_1/*""*/, v78);
    byte_418AF0C = 1;
  }
  v620 = 0LL;
  v621 = 0LL;
  v618 = 0LL;
  entity = 0LL;
  memset(&v617, 0, sizeof(v617));
  v616 = 0;
  this->fields.isRestriction = 0;
  p_restrictionMessage = (BattleServantConfConponent_o *)&this->fields.restrictionMessage;
  v79 = (struct System_String_o *)StringLiteral_1/*""*/;
  v80 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
    (System_Int32_array **)v79,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
    0LL,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.deckSvtIdList, 0LL, v99, v100, v101, v102, v103, v104);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.supportPositionList, 0LL, v112, v113, v114, v115, v116, v117);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0LL,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  v142 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v142,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v142;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (System_Int32_array **)v142,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  v149 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v149,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.specifiedPositionList = v149;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.specifiedPositionList,
    (System_Int32_array **)v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  this->fields.isNotTransitionSupportList = 0;
  this->fields.supportInitIndex = 0;
  this->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0LL,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  this->fields.uniqueIndividualityEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.uniqueIndividualityEntity,
    0LL,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  this->fields.isAllOutBattle = 0;
  this->fields.isDataLostBattle = 0;
  this->fields.allOutBattleGroupNo = -1;
  this->fields.dataLostBattleId = -1;
  this->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = &this->fields.deckLimitCountList;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.deckLimitCountList, 0LL, v168, v169, v170, v171, v172, v173);
  this->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = &this->fields.deckDispLimitCountList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
    0LL,
    v174,
    v175,
    v176,
    v177,
    v178,
    v179);
  this->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&this->fields.isUniqueServant = 0;
  v180 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v180,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v180;
  p_positionsList = &this->fields.positionsList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.positionsList,
    (System_Int32_array **)v180,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  v187 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v187,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v187;
  p_fixedIndividualitiesList = &this->fields.fixedIndividualitiesList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fixedIndividualitiesList,
    (System_Int32_array **)v187,
    v188,
    v189,
    v190,
    v191,
    v192,
    v193);
  this->fields.isFixedMyServantPosition = 0;
  v194 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v194,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v194;
  p_myServantPositionsList = &this->fields.myServantPositionsList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.myServantPositionsList,
    (System_Int32_array **)v194,
    v195,
    v196,
    v197,
    v198,
    v199,
    v200);
  v201 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v201,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v201;
  p_fixedMyServantIndividualitiesList = &this->fields.fixedMyServantIndividualitiesList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantIndividualitiesList,
    (System_Int32_array **)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  this->fields.isFixedSupportPosition = 0;
  v208 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v208,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v208;
  p_fixedSupportIndividualitiesList = &this->fields.fixedSupportIndividualitiesList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportIndividualitiesList,
    (System_Int32_array **)v208,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214);
  this->fields.isFixedNpcPosition = 0;
  v215 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v215,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v215;
  p_fixedNpcIndividualitiesList = &this->fields.fixedNpcIndividualitiesList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fixedNpcIndividualitiesList,
    (System_Int32_array **)v215,
    v216,
    v217,
    v218,
    v219,
    v220,
    v221);
  this->fields.npcPositionList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.npcPositionList, 0LL, v222, v223, v224, v225, v226, v227);
  v228 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v228,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v228;
  p_needStartingIndividualitiesList = &this->fields.needStartingIndividualitiesList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.needStartingIndividualitiesList,
    (System_Int32_array **)v228,
    v229,
    v230,
    v231,
    v232,
    v233,
    v234);
  this->fields.isNeedStarting = 0;
  this->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&this->fields.isMyServantOrNpc = 0;
  this->fields.slotInfos = 0LL;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v236, v237, v238, v239, v240, v241);
  this->fields.dialogMessageInfoDictionary = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
    0LL,
    v242,
    v243,
    v244,
    v245,
    v246,
    v247);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
    v251 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v251,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v251;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&this->fields.restrictionSlotDictionary;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDictionary,
      (System_Int32_array **)v251,
      v252,
      v253,
      v254,
      v255,
      v256,
      v257);
    v258 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v258,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v258;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.restrictionSlotDetailDictionary;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDetailDictionary,
      (System_Int32_array **)v258,
      v259,
      v260,
      v261,
      v262,
      v263,
      v264);
    v265 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v265,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v265;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
      (System_Int32_array **)v265,
      v266,
      v267,
      v268,
      v269,
      v270,
      v271);
    v613 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v613,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
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
      v274 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v274 = BalanceConfig_TypeInfo;
      }
      v275 = (System_Int32_array **)sub_B2C374(int___TypeInfo, (unsigned int)v274->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (BattleServantConfConponent_c *)v275;
      sub_B2C2F8(p_deckSvtIdList, v275, v276, v277, v278, v279, v280, v281);
    }
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = RestrictionBaseEntity__HasFlag(
                                       (RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster,
                                       32LL,
                                       0LL);
    v282 = this->fields.restrictionBaseEntity;
    this->fields.isNotSingleSupportOnly = Master_WarQuestSelectionMaster & 1;
    if ( !v282 )
      goto LABEL_378;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v282,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v283 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
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
    v612 = this;
    this->fields.restrictionWholeEntities = Entities;
    p_restrictionWholeEntities = &this->fields.restrictionWholeEntities;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_restrictionWholeEntities,
      (System_Int32_array **)Entities,
      v286,
      v287,
      v288,
      v289,
      v290,
      v291);
    v292 = *p_restrictionWholeEntities;
    v585 = p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_378;
    max_length = v292->max_length;
    if ( max_length >= 1 )
    {
      v294 = 0;
      p_fixedSupportIndividualities = (BattleServantConfConponent_o *)&v612->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (BattleServantConfConponent_o *)&v612->fields.fixedNpcIndividualities;
      p_uniqueIndividualitys = (BattleServantConfConponent_o *)&v612->fields.uniqueIndividualitys;
      p_needStartingIndividualities = (BattleServantConfConponent_o *)&v612->fields.needStartingIndividualities;
      v588 = p_supportPositionList;
      while ( 2 )
      {
        if ( v294 >= max_length )
          goto LABEL_379;
        v295 = v292->m_Items[v294];
        if ( v295 )
        {
          switch ( v295->fields.type )
          {
            case 2:
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = QuestGroupMaster__GetGroupId(
                                                 (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                                                 questId,
                                                 17,
                                                 0LL);
              v612->fields.allOutBattleGroupNo = Master_WarQuestSelectionMaster;
              v612->fields.isAllOutBattle = 1;
              goto LABEL_66;
            case 3:
              Master_WarQuestSelectionMaster = System_Linq_Enumerable__Min(
                                                 (System_Collections_Generic_IEnumerable_int__o *)v295->fields.targetVals,
                                                 0LL);
              v612->fields.servantNumMax = Master_WarQuestSelectionMaster - 1;
              goto LABEL_66;
            case 4:
              v313 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_positionsList;
              Master_WarQuestSelectionMaster = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v295, 0LL);
              if ( !v313 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v313,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_bool____Add__);
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v314 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v314 )
                goto LABEL_378;
              v315 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C41C(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v314,
                v315,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
              v612->fields.isFixedPosition = 1;
              goto LABEL_66;
            case 5:
              v316 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_myServantPositionsList;
              Master_WarQuestSelectionMaster = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v295, 0LL);
              if ( !v316 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v316,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_bool____Add__);
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v317 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedMyServantIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v317 )
                goto LABEL_378;
              v318 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C41C(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v317,
                v318,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
              v612->fields.isFixedMyServantPosition = 1;
              goto LABEL_66;
            case 6:
              SetPossiblePosition = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v295, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)SetPossiblePosition;
              sub_B2C2F8(p_supportPositionList, SetPossiblePosition, v297, v298, v299, v300, v301, v302);
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v303 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v304 = (System_Int32_array **)sub_B2C41C(v303, int___TypeInfo);
              p_fixedSupportIndividualities->klass = (BattleServantConfConponent_c *)v304;
              sub_B2C2F8(p_fixedSupportIndividualities, v304, v305, v306, v307, v308, v309, v310);
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v311 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedSupportIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v311 )
                goto LABEL_378;
              v312 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C41C(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v311,
                v312,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
              v612->fields.isFixedSupportPosition = 1;
              goto LABEL_66;
            case 7:
              v349 = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v295, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)v349;
              sub_B2C2F8(p_supportPositionList, v349, v350, v351, v352, v353, v354, v355);
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v356 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v357 = (System_Int32_array **)sub_B2C41C(v356, int___TypeInfo);
              p_fixedNpcIndividualities->klass = (BattleServantConfConponent_c *)v357;
              sub_B2C2F8(p_fixedNpcIndividualities, v357, v358, v359, v360, v361, v362, v363);
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v364 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedNpcIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v364 )
                goto LABEL_378;
              v365 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C41C(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v364,
                v365,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
              v612->fields.isFixedNpcPosition = 1;
              goto LABEL_66;
            case 8:
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v366 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v367 = (System_Int32_array **)sub_B2C41C(v366, int___TypeInfo);
              p_needStartingIndividualities->klass = (BattleServantConfConponent_c *)v367;
              sub_B2C2F8(p_needStartingIndividualities, v367, v368, v369, v370, v371, v372, v373);
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v374 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_needStartingIndividualitiesList;
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v374 )
                goto LABEL_378;
              v375 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C41C(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v374,
                v375,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
              v612->fields.isNeedStarting = 1;
              goto LABEL_66;
            case 9:
              Master_WarQuestSelectionMaster = (__int64)v295->fields.targetVals;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v319 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
              v320 = (System_Int32_array **)sub_B2C41C(v319, int___TypeInfo);
              p_uniqueIndividualitys->klass = (BattleServantConfConponent_c *)v320;
              sub_B2C2F8(p_uniqueIndividualitys, v320, v321, v322, v323, v324, v325, v326);
              v327 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v327 = BalanceConfig_TypeInfo;
              }
              v328 = (System_Int32_array **)sub_B2C374(int___TypeInfo, (unsigned int)v327->static_fields->DeckMemberMax);
              v612->fields.deckSvtIdList = (struct System_Int32_array *)v328;
              sub_B2C2F8(p_deckSvtIdList, v328, v329, v330, v331, v332, v333, v334);
              v335 = (System_Int32_array **)sub_B2C374(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v612->fields.deckLimitCountList = (struct System_Int32_array *)v335;
              sub_B2C2F8((BattleServantConfConponent_o *)p_deckLimitCountList, v335, v336, v337, v338, v339, v340, v341);
              v342 = (System_Int32_array **)sub_B2C374(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v612->fields.deckDispLimitCountList = (struct System_Int32_array *)v342;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)p_deckDispLimitCountList,
                v342,
                v343,
                v344,
                v345,
                v346,
                v347,
                v348);
              p_supportPositionList = v588;
              v612->fields.isUniqueIndividuality = 1;
              goto LABEL_66;
            case 0xA:
              v612->fields.isDataLostBattle = 1;
              targetVals = v295->fields.targetVals;
              if ( !targetVals )
                goto LABEL_378;
              if ( !targetVals->max_length )
                goto LABEL_379;
              v612->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_66:
              restrictionMessageId = v295->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_75;
              if ( !v283 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 v283,
                                                 &entity,
                                                 restrictionMessageId,
                                                 (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                goto LABEL_75;
              Master_WarQuestSelectionMaster = (__int64)v613;
              if ( !v613 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v613,
                                                 (WarBoardManager_TaskList_o *)entity,
                                                 (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                goto LABEL_75;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v613,
                (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
              v378 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B2C42C(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v378, 0LL);
              if ( !v378 )
                goto LABEL_378;
              v378->fields.restrictionType = v295->fields.type;
              if ( !entity )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_378;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                entity->fields.id,
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v378,
                (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_75:
              max_length = v292->max_length;
              if ( (int)++v294 >= max_length )
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
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
    v379 = v612;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
      &v621,
      questId,
      (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_WarQuestSelectionMaster = (__int64)v621;
    if ( !v621 )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = QuestEntity__HasFlag_23879348((QuestEntity_o *)v621, 0x100000LL, questPhase, 0LL);
    v380 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v612 )
        goto LABEL_378;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v612->fields.isAllOutBattle;
    }
    v612->fields.isNoSupportBattle = isAllOutBattle != 0;
    Master_WarQuestSelectionMaster = (__int64)v621;
    if ( !v621 )
      goto LABEL_378;
    v612->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_23879348(
                                              (QuestEntity_o *)v621,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_WarQuestSelectionMaster = (__int64)v621;
    if ( !v621 )
      goto LABEL_378;
    v612->fields.isFatigure = QuestEntity__HasFlag_23879348((QuestEntity_o *)v621, 0x200000LL, questPhase, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_378:
      sub_B2C434(Master_WarQuestSelectionMaster, v249);
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
           &v620,
           questId,
           questPhase,
           v382) )
    {
      Master_WarQuestSelectionMaster = sub_B2C374(int___TypeInfo, 1LL);
      if ( !v620 )
        goto LABEL_378;
      v383 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = QuestPhaseEntity__GetSingleForceSvtId(v620, 0LL);
      if ( !v383 )
        goto LABEL_378;
      if ( !*(_DWORD *)(v383 + 24) )
        goto LABEL_379;
      *(_DWORD *)(v383 + 32) = Master_WarQuestSelectionMaster;
      p_svtIdForceBattleList->klass = (BattleServantConfConponent_c *)v383;
      sub_B2C2F8(p_svtIdForceBattleList, (System_Int32_array **)v383, v384, v385, v386, v387, v388, v389);
      Master_WarQuestSelectionMaster = (__int64)v620;
      if ( !v620 )
        goto LABEL_378;
      v612->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v620, 0LL);
      Master_WarQuestSelectionMaster = (__int64)v620;
      if ( !v620 )
        goto LABEL_378;
      v612->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v620, 0LL);
    }
    else
    {
      v612->fields.correctionIconId = -1;
    }
    v390 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v390 = BalanceConfig_TypeInfo;
    }
    v391 = (System_Int32_array **)sub_B2C374(
                                    QuestRestrictionInfo_SlotInfo___TypeInfo,
                                    (unsigned int)v390->static_fields->DeckMemberMax);
    p_fields->klass = (BattleServantConfConponent_c *)v391;
    sub_B2C2F8(p_fields, v391, v392, v393, v394, v395, v396, v397);
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v398 = 1;
    for ( i = 1; ; i = v422 & v609 )
    {
      v400 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v400 = BalanceConfig_TypeInfo;
      }
      if ( v398 > v400->static_fields->DeckMemberMax )
        break;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_378;
      questIdb = i;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      Master_WarQuestSelectionMaster = (__int64)RestrictionSlotMaster__GetEntities(
                                                  (RestrictionSlotMaster_o *)Master_WarQuestSelectionMaster,
                                                  (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                                  v398,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      v401 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_WarQuestSelectionMaster
                                                                                        + 24);
      v402 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = (__int64)*p_restrictionSlotDictionary;
      v609 = v401 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_378;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
        v398,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v402,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v403 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v403,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      v404 = *(_DWORD *)(v402 + 24);
      if ( v404 >= 1 )
      {
        v405 = 0LL;
        while ( (unsigned int)v405 < v404 )
        {
          v406 = *(_QWORD *)(v402 + 32 + 8 * v405);
          if ( !v406 || !v403 )
            goto LABEL_378;
          Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                             v403,
                                             *(_DWORD *)(v406 + 40),
                                             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            System_Collections_Generic_List_int___Add(
              v403,
              *(_DWORD *)(v406 + 40),
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          v407 = *(_DWORD *)(v406 + 44);
          if ( v407 >= 1 )
          {
            if ( !v283 )
              goto LABEL_378;
            Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                               v283,
                                               &v618,
                                               v407,
                                               (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              Master_WarQuestSelectionMaster = (__int64)v613;
              if ( !v613 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v613,
                                                 (WarBoardManager_TaskList_o *)v618,
                                                 (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v613,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v618,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
                v408 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B2C42C(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v408, 0LL);
                if ( !v408 )
                  goto LABEL_378;
                v408->fields.slotNo = v398;
                if ( !v618 )
                  goto LABEL_378;
                Master_WarQuestSelectionMaster = (__int64)*v380;
                if ( !*v380 )
                  goto LABEL_378;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                  v618->fields.id,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v408,
                  (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v404 = *(_DWORD *)(v402 + 24);
          if ( (int)++v405 >= v404 )
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
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_378;
      Master_WarQuestSelectionMaster = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                                  (RestrictionSlotDetailMaster_o *)Master_WarQuestSelectionMaster,
                                                  v403,
                                                  0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_378;
      v409 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Master_WarQuestSelectionMaster;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        *p_restrictionSlotDetailDictionary,
        v398,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v411 = (QuestRestrictionInfo_SlotInfo_o *)sub_B2C42C(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v411, 0LL);
      if ( !klass )
        goto LABEL_378;
      if ( v411 )
      {
        Master_WarQuestSelectionMaster = sub_B2C41C(v411, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_WarQuestSelectionMaster )
        {
          v583 = sub_B2C454(0LL);
          sub_B2C400(v583, 0LL);
        }
      }
      v418 = v398 - 1;
      if ( (unsigned int)(v398 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_379;
      v419 = &klass->_1.image + v418;
      v419[4] = v411;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)(v419 + 4),
        (System_Int32_array **)v411,
        v412,
        v413,
        v414,
        v415,
        v416,
        v417);
      v379 = v612;
      servantNumMax = v612->fields.servantNumMax;
      if ( servantNumMax >= 1 && v418 >= servantNumMax )
      {
        v421 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        v422 = questIdb;
        if ( (unsigned int)v418 >= LODWORD(v421->_1.namespaze) )
          goto LABEL_379;
        v423 = *((_QWORD *)&v421->_1.byval_arg.data + v418);
        if ( !v423 )
          goto LABEL_378;
        *(_DWORD *)(v423 + 16) = 5;
        v424 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v418 >= LODWORD(v424->_1.namespaze) )
          goto LABEL_379;
        v425 = *((_QWORD *)&v424->_1.byval_arg.data + v418);
        if ( !v425 )
          goto LABEL_378;
        *(_BYTE *)(v425 + 48) = 0;
        v380 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
        goto LABEL_251;
      }
      v426 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v426 = QuestRestrictionInfo___c_TypeInfo;
      }
      static_fields = v426->static_fields;
      _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__82_0;
      if ( !_9__82_0 )
      {
        if ( (BYTE3(v426->vtable._0_Equals.methodPtr) & 4) != 0 && !v426->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v426);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v429 = (Il2CppObject *)static_fields->__9;
        _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_0,
          v429,
          Method_QuestRestrictionInfo___c__Setup_b__82_0__,
          (const MethodInfo_2711C04 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v430 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v430->__9__82_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v430->__9__82_0,
          (System_Int32_array **)_9__82_0,
          v431,
          v432,
          v433,
          v434,
          v435,
          v436);
      }
      v437 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v402,
               (System_Func_T__bool__o *)_9__82_0,
               (const MethodInfo_1726758 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v438 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v438 = QuestRestrictionInfo___c_TypeInfo;
      }
      v439 = v438->static_fields;
      _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v439->__9__82_1;
      if ( !_9__82_1 )
      {
        if ( (BYTE3(v438->vtable._0_Equals.methodPtr) & 4) != 0 && !v438->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v438);
          v439 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v441 = (Il2CppObject *)v439->__9;
        _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_1,
          v441,
          Method_QuestRestrictionInfo___c__Setup_b__82_1__,
          (const MethodInfo_2711C04 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v442 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v442->__9__82_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v442->__9__82_1,
          (System_Int32_array **)_9__82_1,
          v443,
          v444,
          v445,
          v446,
          v447,
          v448);
      }
      v449 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v402,
               (System_Func_T__bool__o *)_9__82_1,
               (const MethodInfo_1726758 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v450 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v450 = QuestRestrictionInfo___c_TypeInfo;
      }
      v451 = v450->static_fields;
      _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v451->__9__82_2;
      if ( !_9__82_2 )
      {
        v603 = v437;
        if ( (BYTE3(v450->vtable._0_Equals.methodPtr) & 4) != 0 && !v450->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v450);
          v451 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v453 = (Il2CppObject *)v451->__9;
        _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_2,
          v453,
          Method_QuestRestrictionInfo___c__Setup_b__82_2__,
          (const MethodInfo_2711C04 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v454 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v454->__9__82_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_2;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v454->__9__82_2,
          (System_Int32_array **)_9__82_2,
          v455,
          v456,
          v457,
          v458,
          v459,
          v460);
        v437 = v603;
      }
      Master_WarQuestSelectionMaster = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v402,
                                         (System_Func_T__bool__o *)_9__82_2,
                                         (const MethodInfo_1726758 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      if ( v449 || !v437 || (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( (v437 || !v449) | Master_WarQuestSelectionMaster & 1 )
        {
          if ( !v437 && !v449 && (((unsigned int)Master_WarQuestSelectionMaster ^ 1) & 1) == 0 )
          {
            v463 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v418 >= LODWORD(v463->_1.namespaze) )
              goto LABEL_379;
            v464 = *((_QWORD *)&v463->_1.byval_arg.data + v418);
            if ( !v464 )
              goto LABEL_378;
            *(_DWORD *)(v464 + 16) = 2;
            v612->fields.supportInitIndex = v398;
            if ( !v409 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( !(Master_WarQuestSelectionMaster & 1 | (!v437 || !v449)) )
          {
            v513 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v418 >= LODWORD(v513->_1.namespaze) )
              goto LABEL_379;
            v514 = *((_QWORD *)&v513->_1.byval_arg.data + v418);
            if ( !v514 )
              goto LABEL_378;
            *(_DWORD *)(v514 + 16) = 3;
            v612->fields.isMyServantOrNpc = 1;
            if ( !v409 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( ((v437 || v449) & (unsigned int)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v511 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v418 >= LODWORD(v511->_1.namespaze) )
              goto LABEL_379;
            v512 = *((_QWORD *)&v511->_1.byval_arg.data + v418);
            if ( !v512 )
              goto LABEL_378;
            *(_DWORD *)(v512 + 16) = 4;
            v612->fields.isMyServantOrSupport = 1;
            if ( !v409 )
              goto LABEL_378;
            goto LABEL_196;
          }
        }
        else
        {
          v465 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_378;
          if ( (unsigned int)v418 >= LODWORD(v465->_1.namespaze) )
            goto LABEL_379;
          v466 = *((_QWORD *)&v465->_1.byval_arg.data + v418);
          if ( !v466 )
            goto LABEL_378;
          *(_DWORD *)(v466 + 16) = 1;
        }
        if ( !v409 )
          goto LABEL_378;
      }
      else
      {
        v461 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v418 >= LODWORD(v461->_1.namespaze) )
          goto LABEL_379;
        v462 = *((_QWORD *)&v461->_1.byval_arg.data + v418);
        if ( !v462 )
          goto LABEL_378;
        *(_DWORD *)(v462 + 16) = 0;
        if ( !v409 )
          goto LABEL_378;
      }
LABEL_196:
      v467 = v409->max_length;
      if ( v467 >= 1 )
      {
        v468 = 0;
        while ( v468 < v467 )
        {
          v469 = v409->m_Items[v468];
          if ( !v469 )
            goto LABEL_378;
          if ( !*(_DWORD *)(v402 + 24) )
            break;
          v470 = *(_QWORD *)(v402 + 32);
          if ( !v470 )
            goto LABEL_378;
          if ( v469->fields.condType == *(_DWORD *)(v470 + 40) )
          {
            v471 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v418 >= LODWORD(v471->_1.namespaze) )
              goto LABEL_379;
            v472 = *((_QWORD *)&v471->_1.byval_arg.data + v418);
            if ( !v472 )
              goto LABEL_378;
            if ( *(_DWORD *)(v472 + 16) <= 2u )
            {
              Master_WarQuestSelectionMaster = (__int64)v469[1].monitor;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              v473 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v472 + 24);
              Master_WarQuestSelectionMaster = (__int64)System_Array__Clone(
                                                          (System_Array_o *)Master_WarQuestSelectionMaster,
                                                          0LL);
              if ( !v473 )
                goto LABEL_378;
              v474 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C41C(
                                                                              Master_WarQuestSelectionMaster,
                                                                              int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v473,
                v474,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
              v475 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_378;
              if ( (unsigned int)v418 >= LODWORD(v475->_1.namespaze) )
                goto LABEL_379;
              v476 = *((_QWORD *)&v475->_1.byval_arg.data + v418);
              if ( !v476 )
                goto LABEL_378;
              Master_WarQuestSelectionMaster = *(_QWORD *)(v476 + 32);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_378;
              System_Collections_Generic_List_VoiceCondType_Type___Add(
                (System_Collections_Generic_List_VoiceCondType_Type__o *)Master_WarQuestSelectionMaster,
                v469[1].fields.condType,
                (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
            }
            if ( LODWORD(v469[1].klass) == 2 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10394/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/,
                                                          0LL);
              condValue = (System_String_o *)Master_WarQuestSelectionMaster;
            }
            else
            {
              condValue = (System_String_o *)v469->fields.condValue;
            }
            v478 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v418 >= LODWORD(v478->_1.namespaze) )
              goto LABEL_379;
            v479 = *((_QWORD *)&v478->_1.byval_arg.data + v418);
            if ( !v479 )
              goto LABEL_378;
            Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(*(System_String_o **)(v479 + 40), 0LL);
            v486 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v418 >= LODWORD(v486->_1.namespaze) )
              goto LABEL_379;
            v487 = *((_QWORD *)&v486->_1.byval_arg.data + v418);
            if ( !v487 )
              goto LABEL_378;
            v488 = (System_String_o **)(v487 + 40);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              *v488 = condValue;
              v489 = (BattleServantConfConponent_o *)(v487 + 40);
              v490 = (System_Int32_array **)condValue;
            }
            else
            {
              v490 = (System_Int32_array **)System_String__Concat_44307816(
                                              *v488,
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              condValue,
                                              0LL);
              *v488 = (System_String_o *)v490;
              v489 = (BattleServantConfConponent_o *)v488;
            }
            sub_B2C2F8(v489, v490, v480, v481, v482, v483, v484, v485);
          }
          v467 = v409->max_length;
          if ( (int)++v468 >= v467 )
            goto LABEL_231;
        }
        goto LABEL_379;
      }
LABEL_231:
      v491 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      if ( (unsigned int)v418 >= LODWORD(v491->_1.namespaze) )
        goto LABEL_379;
      v492 = *((_QWORD *)&v491->_1.byval_arg.data + v418);
      v493 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v493 = QuestRestrictionInfo___c_TypeInfo;
      }
      v494 = v493->static_fields;
      _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v494->__9__82_3;
      if ( !_9__82_3 )
      {
        if ( (BYTE3(v493->vtable._0_Equals.methodPtr) & 4) != 0 && !v493->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v493);
          v494 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v496 = (Il2CppObject *)v494->__9;
        _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_3,
          v496,
          Method_QuestRestrictionInfo___c__Setup_b__82_3__,
          (const MethodInfo_2711C04 *)Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__);
        v497 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v497->__9__82_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__82_3;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v497->__9__82_3,
          (System_Int32_array **)_9__82_3,
          v498,
          v499,
          v500,
          v501,
          v502,
          v503);
      }
      Master_WarQuestSelectionMaster = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         v409,
                                         (System_Func_T__bool__o *)_9__82_3,
                                         (const MethodInfo_1726758 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
      if ( !v492 )
        goto LABEL_378;
      *(_BYTE *)(v492 + 48) = (Master_WarQuestSelectionMaster & 1) == 0;
      v504 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      namespaze = (unsigned int)v504->_1.namespaze;
      v379 = v612;
      if ( v418 >= namespaze )
        goto LABEL_379;
      v506 = &v504->_1.image + v418;
      v509 = v506[4];
      v507 = (__int64 *)(v506 + 4);
      v508 = v509;
      if ( !v509 )
        goto LABEL_378;
      v380 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
      if ( v508[4] == 1 && *((_BYTE *)v508 + 48) )
      {
        v612->fields.isNpcEditablePos = 1;
        namespaze = (unsigned int)v504->_1.namespaze;
      }
      if ( v418 >= namespaze )
        goto LABEL_379;
      v510 = *v507;
      if ( !v510 )
        goto LABEL_378;
      v422 = questIdb;
      *(_BYTE *)(v510 + 49) = *(_DWORD *)(v402 + 24) != 0;
LABEL_251:
      ++v398;
    }
    Master_WarQuestSelectionMaster = (__int64)v613;
    if ( !v613 )
      goto LABEL_378;
    v515 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v613,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    v379->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v515;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v379->fields.restrictionMessageEntities,
      v515,
      v516,
      v517,
      v518,
      v519,
      v520,
      v521);
    slotInfos = v379->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_378;
    v523 = slotInfos->max_length;
    if ( v523 >= 1 )
    {
      v524 = 0;
      v525 = 0;
      v526 = 0;
      v527 = 0;
      while ( v524 < v523 )
      {
        v528 = slotInfos->m_Items[v524];
        if ( !v528 )
          goto LABEL_378;
        switch ( v528->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v527;
            break;
          case 1:
            ++v526;
            break;
          case 2:
            ++v525;
            break;
          default:
            break;
        }
        if ( (int)++v524 >= v523 )
          goto LABEL_277;
      }
LABEL_379:
      v581 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v581, 0LL);
    }
    v527 = 0;
    v526 = 0;
    v525 = 0;
LABEL_277:
    if ( v525 == 0 && (i & 1) != 0 )
      v379->fields.isNoSupportBattle = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                                (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                                                v379->fields.questId,
                                                v379->fields.questPhase,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    v529 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
    if ( v529 < 1 )
    {
LABEL_290:
      v532 = 0;
    }
    else
    {
      v530 = 0;
      while ( 1 )
      {
        if ( v530 >= v529 )
          goto LABEL_379;
        v531 = *(_QWORD *)(Master_WarQuestSelectionMaster + 8LL * (int)v530 + 32);
        if ( !v531 )
          goto LABEL_378;
        if ( *(_BYTE *)(v531 + 97) )
          break;
        if ( (int)++v530 >= v529 )
          goto LABEL_290;
      }
      v532 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)v621;
    if ( !v621 )
      goto LABEL_378;
    v533 = QuestEntity__HasFlag_23879348((QuestEntity_o *)v621, 0x10000000LL, questPhase, 0LL)
        || (v526 > 0) & (unsigned __int8)v532 & (v527 > 0);
    v379->fields.isNpcMultipleBattle = v533;
    Master_WarQuestSelectionMaster = (__int64)v621;
    if ( !v621 )
      goto LABEL_378;
    v534 = QuestEntity__HasFlag_23879348((QuestEntity_o *)v621, 0x20000000LL, questPhase, 0LL)
        || (v527 == 0) & (unsigned __int8)v532 & (v526 > 0);
    Master_WarQuestSelectionMaster = (__int64)v379->fields.restrictionBaseEntity;
    v379->fields.isNpcOnlyBattle = v534;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_WarQuestSelectionMaster, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_172853C *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v536 = 2;
      else
        v536 = 1;
      DeckMemberMax = v379->fields.servantNumMax;
      v379->fields.servantNumMin = v536;
      if ( !DeckMemberMax )
      {
        v538 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v538 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v538->static_fields->DeckMemberMax;
        v379->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v379->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v379->fields.isNpcMultipleBattle )
        v379->fields.myServantNumMax = v527;
      goto LABEL_324;
    }
    v379->fields.myServantNumMax = v527;
    if ( v527 == 1 && DeckMemberMax == 1 )
    {
      Master_WarQuestSelectionMaster = (__int64)v379->fields.restrictionSlotDetailDictionary;
      v379->fields.isFixedMyServantSingle = 1;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (__int64)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Master_WarQuestSelectionMaster,
                                                    1,
                                                    (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_324;
        v539 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_WarQuestSelectionMaster
                                                                                          + 24);
        if ( !v539 )
          goto LABEL_324;
        if ( !(_DWORD)v539 )
          goto LABEL_379;
        v540 = *(_QWORD *)(Master_WarQuestSelectionMaster + 32);
        if ( v540 )
        {
          Master_WarQuestSelectionMaster = *(_QWORD *)(v540 + 40);
          if ( Master_WarQuestSelectionMaster )
          {
            v541 = System_Array__Clone((System_Array_o *)Master_WarQuestSelectionMaster, 0LL);
            v542 = (System_Int32_array **)sub_B2C41C(v541, int___TypeInfo);
            v379->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)v542;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v379->fields.fixedMyServantSingleIndividualities,
              v542,
              v543,
              v544,
              v545,
              v546,
              v547,
              v548);
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
                                       (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v379->fields.restrictionSlotDictionary;
    v379->fields.isSupportOnly = (int)Master_WarQuestSelectionMaster > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = (__int64)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                                restrictionSlotDictionary,
                                                (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      &v614,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2403028 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v617 = v614;
    do
    {
      v550 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
               &v617,
               (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v550 )
        break;
      if ( !v617.fields.currentValue )
        sub_B2C434(v550, v551);
      monitor = (int)v617.fields.currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v553 = 0;
        while ( 1 )
        {
          if ( v553 >= monitor )
          {
            v582 = sub_B2C460(v550);
            sub_B2C400(v582, 0LL);
          }
          v554 = *((_QWORD *)&v617.fields.currentValue[2].klass + (int)v553);
          if ( !v554 )
            sub_B2C434(v550, v551);
          if ( *(_DWORD *)(v554 + 28) == 1 )
            break;
          if ( (int)++v553 >= monitor )
            goto LABEL_336;
        }
        v379->fields.isSupportOnly = 0;
        break;
      }
LABEL_336:
      ;
    }
    while ( v379->fields.isSupportOnly );
    v615 = 3158;
    v616 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v617,
      (const MethodInfo_277F154 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    if ( v615 == 3158 )
      v616 = 0;
    v555 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v555, 0LL);
    v556 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v556, 0LL);
    v557 = *v585;
    if ( !*v585 )
      goto LABEL_378;
    v558 = v557->max_length;
    if ( v558 >= 1 )
    {
      v559 = 0;
      while ( 1 )
      {
        if ( v559 >= v558 )
          goto LABEL_379;
        v560 = v557->m_Items[v559];
        if ( !v560 )
          goto LABEL_378;
        Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(v560->fields.summary, 0LL);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          break;
LABEL_367:
        v558 = v557->max_length;
        if ( (int)++v559 >= v558 )
          goto LABEL_368;
      }
      type = v560->fields.type;
      if ( type == 10 || type == 2 )
      {
        v563 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v560->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_378;
          v563 = 1;
          v564 = targetVals2->max_length == 1;
LABEL_355:
          if ( (v564 & v563) != 0 )
          {
            if ( v379->fields.isRestriction )
            {
              if ( !v556 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_42408700(v556, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
            }
            else if ( !v556 )
            {
              goto LABEL_378;
            }
            Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42408700(
                                                        v556,
                                                        v560->fields.summary,
                                                        0LL);
            v379->fields.isRestriction = 1;
          }
          if ( v563 )
          {
            if ( v379->fields.isRestriction )
            {
              if ( !v555 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_42408700(v555, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
            }
            else if ( !v555 )
            {
              goto LABEL_378;
            }
            Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42408700(
                                                        v555,
                                                        v560->fields.summary,
                                                        0LL);
            v379->fields.isRestriction = 1;
          }
          goto LABEL_367;
        }
        v563 = 0;
      }
      v564 = 1;
      goto LABEL_355;
    }
LABEL_368:
    if ( !v556 )
      goto LABEL_378;
    Master_WarQuestSelectionMaster = System_Text_StringBuilder__get_Length(v556, 0LL);
    if ( (int)Master_WarQuestSelectionMaster >= 1 )
    {
      v565 = (System_Int32_array **)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v556->klass->vtable._3_ToString.method)(
                                      v556,
                                      v556->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (BattleServantConfConponent_c *)v565;
      sub_B2C2F8(p_confirmRestrictionMessage, v565, v566, v567, v568, v569, v570, v571);
    }
    if ( !v555 )
      goto LABEL_378;
    if ( System_Text_StringBuilder__get_Length(v555, 0LL) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v572 = LocalizationManager__Get((System_String_o *)StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v573 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v555->klass->vtable._3_ToString.method)(
                                  v555,
                                  v555->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v574 = (System_Int32_array **)System_String__Concat_44307816(v572, (System_String_o *)StringLiteral_26/*"\n"*/, v573, 0LL);
      p_restrictionMessage->klass = (BattleServantConfConponent_c *)v574;
      sub_B2C2F8(p_restrictionMessage, v574, v575, v576, v577, v578, v579, v580);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v250);
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
  __int64 myServantOrNpcRestrictionEntityList; // x0
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x23
  int max_length; // w8
  unsigned int v29; // w28
  RestrictionEntity_o *v30; // x24
  Il2CppObject *v31; // x0
  struct System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BalanceConfig_c *v39; // x0
  struct System_Int32_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Int32_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct System_Int32_array *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_int__o *v68; // x21
  struct System_Int32_array *v69; // x8
  _BOOL4 isRestriction; // w9
  BalanceConfig_c *v71; // x0
  struct System_Int32_array *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *v80; // x8
  int32_t v81; // w8
  struct System_Int32_array *v82; // x8
  __int64 v83; // x9
  System_Collections_Generic_List_int__o *specifiedPositionList; // x21
  __int64 v85; // x9
  struct System_String_o *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_o *v93; // x0
  struct System_String_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  const MethodInfo *v101; // x4
  __int64 v102; // x20
  __int64 v103; // x20
  const MethodInfo *v104; // x4
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  MethodInfo *v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  int64_t v111; // x10
  __int64 v112; // x8
  struct System_Int32_array *v113; // x20
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  int64_t flag; // x8
  bool HasFlag_23879348; // w0
  bool v122; // w0
  struct System_Int32_array *v123; // x20
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  bool v130; // w0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  __int64 v143; // x0
  BattleServantConfConponent_o *p_uniqueIndividualityEntity; // [xsp+18h] [xbp-C8h]
  BattleServantConfConponent_o *p_myServantNumRestrictionEntity; // [xsp+28h] [xbp-B8h]
  BattleServantConfConponent_o *p_servantNumRestrictionEntity; // [xsp+30h] [xbp-B0h]
  BattleServantConfConponent_o *p_uniqueSvtRestrictionEntity; // [xsp+58h] [xbp-88h]
  BattleServantConfConponent_o *p_totalCostRestrictionEntity; // [xsp+68h] [xbp-78h]
  struct System_Int32_array **p_deckSvtIdList; // [xsp+70h] [xbp-70h]
  QuestRestrictionInfoEntity_o *v150; // [xsp+78h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v151; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_418AF0D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v15);
    sub_B2C35C(&StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v16);
    byte_418AF0D = 1;
  }
  v151 = 0LL;
  entity = 0LL;
  v150 = 0LL;
  v17 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v17, 0LL);
  v18 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0LL);
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
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        goto LABEL_128;
      v30 = restrictionEntityList->m_Items[v29];
      if ( !v30 )
        goto LABEL_127;
      switch ( v30->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (BattleServantConfConponent_c *)v30;
          sub_B2C2F8(p_totalCostRestrictionEntity, (System_Int32_array **)v30, v21, v22, v23, v24, v25, v26);
          goto LABEL_53;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v30;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
            (System_Int32_array **)v30,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          this->fields.isSupportOnly = 1;
          goto LABEL_53;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (BattleServantConfConponent_c *)v30;
          sub_B2C2F8(p_uniqueSvtRestrictionEntity, (System_Int32_array **)v30, v21, v22, v23, v24, v25, v26);
          v71 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v71 = BalanceConfig_TypeInfo;
          }
          v72 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v71->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v72;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v72,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
          this->fields.isUniqueServant = 1;
          goto LABEL_53;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v30;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (System_Int32_array **)v30,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v30, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.supportPositionList,
            (System_Int32_array **)DeckPositionList,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_53;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v30;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (System_Int32_array **)v30,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_53;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v30;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (System_Int32_array **)v30,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_53;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v30;
          sub_B2C2F8(p_servantNumRestrictionEntity, (System_Int32_array **)v30, v21, v22, v23, v24, v25, v26);
          targetVals = v30->fields.targetVals;
          if ( v30->fields.rangeType == 5 )
          {
            if ( !targetVals || (int)targetVals->max_length < 2 )
              goto LABEL_53;
            this->fields.servantNumMin = targetVals->m_Items[1];
            v80 = v30->fields.targetVals;
            if ( !v80 )
              goto LABEL_127;
            if ( v80->max_length <= 1 )
              goto LABEL_128;
            v81 = v80->m_Items[2];
          }
          else
          {
            if ( !targetVals )
              goto LABEL_53;
            v85 = *(_QWORD *)&targetVals->max_length;
            if ( !v85 )
              goto LABEL_53;
            if ( !(_DWORD)v85 )
              goto LABEL_128;
            v81 = targetVals->m_Items[1];
          }
          this->fields.servantNumMax = v81;
LABEL_53:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v29 >= max_length )
            goto LABEL_54;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v30;
          sub_B2C2F8(p_myServantNumRestrictionEntity, (System_Int32_array **)v30, v21, v22, v23, v24, v25, v26);
          v82 = v30->fields.targetVals;
          if ( !v82 )
            goto LABEL_53;
          v83 = *(_QWORD *)&v82->max_length;
          if ( !v83 )
            goto LABEL_53;
          if ( !(_DWORD)v83 )
            goto LABEL_128;
          this->fields.myServantNumMax = v82->m_Items[1];
          goto LABEL_53;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (__int64)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = RestrictionEntity__GetSpecifiedPosition(v30, 0LL);
          if ( !specifiedPositionList )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            specifiedPositionList,
            myServantOrNpcRestrictionEntityList,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_53;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v30;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (System_Int32_array **)v30,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          this->fields.isNeedStarting = 1;
          goto LABEL_53;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (BattleServantConfConponent_c *)v30;
          sub_B2C2F8(p_uniqueIndividualityEntity, (System_Int32_array **)v30, v21, v22, v23, v24, v25, v26);
          myServantOrNpcRestrictionEntityList = (__int64)v30->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          v31 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          v32 = (struct System_Int32_array *)sub_B2C41C(v31, int___TypeInfo);
          this->fields.uniqueIndividualitys = v32;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.uniqueIndividualitys,
            (System_Int32_array **)v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          v39 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v39 = BalanceConfig_TypeInfo;
          }
          v40 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v39->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v40;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          v47 = (struct System_Int32_array *)sub_B2C374(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v47;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.deckLimitCountList,
            (System_Int32_array **)v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
          v54 = (struct System_Int32_array *)sub_B2C374(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v54;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
            (System_Int32_array **)v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_53;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (__int64)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          v68 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = RestrictionEntity__GetSpecifiedPosition(v30, 0LL);
          if ( !v68 )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            v68,
            myServantOrNpcRestrictionEntityList,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_53;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v69 = v30->fields.targetVals;
          if ( !v69 )
            goto LABEL_127;
          if ( !v69->max_length )
            goto LABEL_128;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v69->m_Items[1];
          if ( isRestriction )
          {
LABEL_24:
            if ( !v17 )
              goto LABEL_127;
            System_Text_StringBuilder__Append_42408700(v17, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
          }
          else
          {
LABEL_27:
            if ( !v17 )
              goto LABEL_127;
          }
          myServantOrNpcRestrictionEntityList = (__int64)System_Text_StringBuilder__Append_42408700(
                                                           v17,
                                                           v30->fields.name,
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
    if ( !v17 )
      goto LABEL_127;
    v86 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                                      v17,
                                      v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v86;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
      (System_Int32_array **)v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v94 = System_String__Concat_44307816(
            v93,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            this->fields.confirmRestrictionMessage,
            0LL);
    this->fields.restrictionMessage = v94;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
      (System_Int32_array **)v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
  }
  myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v151,
    this->fields.questId,
    this->fields.questPhase,
    v101);
  v102 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v102 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v103 = **(_QWORD **)(v102 + 192);
  if ( (*(_BYTE *)(v103 + 306) & 1) == 0 )
    sub_AC505C(v103);
  myServantOrNpcRestrictionEntityList = **(_QWORD **)(v103 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_127;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v150,
         this->fields.questId,
         this->fields.questPhase,
         v104) )
  {
    myServantOrNpcRestrictionEntityList = (__int64)v150;
    if ( !v150 )
      goto LABEL_127;
    v111 = v150->fields.flag & 0x400000000100000LL;
    this->fields.isNoSupportBattle = v111 != 0;
    if ( v111
      || (v112 = *(_QWORD *)(myServantOrNpcRestrictionEntityList + 24),
          this->fields.isSupportOnlyForceBattle = (v112 & 0x80000) != 0) )
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
                                              v107);
      if ( !v150 )
        goto LABEL_127;
      flag = v150->fields.flag;
      this->fields.isAllOutBattle = (flag & 0x400000000000000LL) != 0;
      if ( (flag & 0x400000000000000LL) != 0 )
      {
        myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !myServantOrNpcRestrictionEntityList )
          goto LABEL_127;
        myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !myServantOrNpcRestrictionEntityList )
          goto LABEL_127;
        this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                             (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                             this->fields.questId,
                                             17,
                                             0LL);
      }
      if ( entity )
        this->fields.isFatigure = QuestEntity__HasFlag_23879348(
                                    (QuestEntity_o *)entity,
                                    0x200000LL,
                                    this->fields.questPhase,
                                    0LL);
      myServantOrNpcRestrictionEntityList = (__int64)v151;
      if ( v151 )
      {
        this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v151, 0LL);
        myServantOrNpcRestrictionEntityList = (__int64)v151;
        if ( !v151 )
          goto LABEL_127;
        myServantOrNpcRestrictionEntityList = QuestPhaseEntity__GetSupportInitDeckIndex(v151, 0LL);
        this->fields.supportInitIndex = myServantOrNpcRestrictionEntityList;
      }
      else
      {
        this->fields.correctionIconId = -1;
      }
      if ( v150 )
      {
        this->fields.isNotSingleSupportOnly = (v150->fields.flag & 0x1000000000000000LL) != 0;
        return;
      }
LABEL_127:
      sub_B2C434(myServantOrNpcRestrictionEntityList, v20);
    }
    if ( (*(_BYTE *)(myServantOrNpcRestrictionEntityList + 27) & 1) != 0 )
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(
                                    (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                                    v20);
    myServantOrNpcRestrictionEntityList = sub_B2C374(int___TypeInfo, 1LL);
    if ( !v150 )
      goto LABEL_127;
    v113 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = QuestRestrictionInfoEntity__GetSingleForceSvtId(v150, v20);
    if ( !v113 )
      goto LABEL_127;
    if ( v113->max_length )
    {
      v113->m_Items[1] = myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v113;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
        (System_Int32_array **)v113,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      myServantOrNpcRestrictionEntityList = (__int64)v150;
      if ( !v150 )
        goto LABEL_127;
      goto LABEL_80;
    }
LABEL_128:
    v143 = sub_B2C460(myServantOrNpcRestrictionEntityList);
    sub_B2C400(v143, 0LL);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_23879348((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (__int64)entity;
      if ( !entity )
        goto LABEL_127;
      HasFlag_23879348 = QuestEntity__HasFlag_23879348(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_23879348;
      if ( !HasFlag_23879348 )
      {
        myServantOrNpcRestrictionEntityList = (__int64)entity;
        if ( !entity )
          goto LABEL_127;
        v122 = QuestEntity__HasFlag_23879348((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v122;
        if ( !v122 )
        {
          if ( v151 )
          {
            myServantOrNpcRestrictionEntityList = (__int64)entity;
            if ( !entity )
              goto LABEL_127;
            if ( QuestEntity__HasFlag_23879348((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (__int64)v151;
              if ( !v151 )
                goto LABEL_127;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v151, 0LL);
            }
            myServantOrNpcRestrictionEntityList = sub_B2C374(int___TypeInfo, 1LL);
            if ( !v151 )
              goto LABEL_127;
            v123 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = QuestPhaseEntity__GetSingleForceSvtId(v151, 0LL);
            if ( !v123 )
              goto LABEL_127;
            if ( !v123->max_length )
              goto LABEL_128;
            v123->m_Items[1] = myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v123;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
              (System_Int32_array **)v123,
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
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isFatigure = QuestEntity__HasFlag_23879348(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    v130 = QuestEntity__HasFlag_23879348((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v130;
    if ( v130 )
    {
      myServantOrNpcRestrictionEntityList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_127;
      myServantOrNpcRestrictionEntityList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_23879348(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_23879348(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_23879348(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_23879348(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (__int64)entity;
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_23879348(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v151 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v151, 0LL);
    myServantOrNpcRestrictionEntityList = (__int64)v151;
    if ( !v151 )
      goto LABEL_127;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v151,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    myServantOrNpcRestrictionEntityList = (__int64)v151;
    if ( !v151 )
      goto LABEL_127;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v151, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountSvtIds,
      0LL,
      v105,
      v106,
      (System_Boolean_array **)v107,
      v108,
      v109,
      v110);
    this->fields.overwriteLimitCounts = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCounts,
      0LL,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountIconIds,
      0LL,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_Collections_Generic_List_VoiceCondType_Type__o *v8; // x20
  void *v9; // x1

  if ( (byte_4185617 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4185617 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v7;
  sub_B2C2F8(&this->fields.individualityList, v7);
  v8 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v8,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v8;
  sub_B2C2F8(&this->fields.rangeTypeList, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.summary, v9);
  *(_WORD *)&this->fields.isMoved = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4185616 & 1) == 0 )
  {
    sub_B2C35C(&QuestRestrictionInfo___c_TypeInfo, v1);
    byte_4185616 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, x);
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
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B2C434(this, x);
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
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B2C434(this, x);
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
    sub_B2C434(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}