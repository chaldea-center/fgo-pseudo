void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_41587168(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct RestrictionEntity_array *RestrictionList_40703924; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w1
  const MethodInfo *v20; // x4

  if ( (byte_4BB58A4 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB58A4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v11);
  }
  RestrictionList_40703924 = QuestRestrictionMaster__getRestrictionList_40703924(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0LL);
  this->fields.restrictionEntityList = RestrictionList_40703924;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.restrictionEntityList,
    (int64_t)RestrictionList_40703924,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  QuestRestrictionInfo__Setup(this, v19, questId, questPhase, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_41596768(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct QuestRestrictionEntity_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w1
  const MethodInfo *v37; // x4
  __int64 v38; // x0

  if ( (byte_4BB58A5 & 1) == 0 )
  {
    sub_1C13D24(&QuestRestrictionEntity___TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&RestrictionEntity___TypeInfo, v11);
    byte_4BB58A5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v12 = (struct QuestRestrictionEntity_array *)sub_1C13DCC(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v12;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionEntityList,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( overwriteRestiction )
  {
    v19 = sub_1C13DCC(RestrictionEntity___TypeInfo, 1LL);
    if ( !v19 )
      sub_1C13F80(0LL, v20);
    v21 = v19;
    v22 = sub_1C13E60(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v22 )
    {
      v38 = sub_1C13FA4(0LL);
      sub_1C13E4C(v38, 0LL);
    }
    if ( !*(_DWORD *)(v21 + 24) )
      sub_1C13F88(v22, v23);
    *(_QWORD *)(v21 + 32) = overwriteRestiction;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)overwriteRestiction, v24, v25, v26, v27, v28, v29);
  }
  else
  {
    v21 = sub_1C13DCC(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v21;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.restrictionEntityList, v21, v30, v31, v32, v33, v34, v35);
  QuestRestrictionInfo__Setup(this, v36, questId, questPhase, v37);
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

  if ( (byte_4BB58C6 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, isFixedServantPositionRestriction);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_int___, v22);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v23);
    sub_1C13D24(&Method_System_Linq_Enumerable_Intersect_int___, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_bool____get_Count__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_List_bool____get_Item__, v26);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_4BB58C6 = 1;
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
             (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_bool____get_Item__);
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
                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_bool____get_Item__);
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
            (const MethodInfo_2FB37C8 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v36,
                                  (const MethodInfo_2F9A3DC *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v37 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v31,
                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_bool____get_Item__);
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
              (const MethodInfo_2FB37C8 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v39, (const MethodInfo_2F9A3DC *)Method_System_Linq_Enumerable_Any_int___) )
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
                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_bool____get_Item__);
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
          (const MethodInfo_2FB37C8 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v43,
                                (const MethodInfo_2F9A3DC *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v45 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v41,
                                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0LL) )
  {
LABEL_15:
    sub_1C13F80(Instance, v29);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1C13F88(Instance, v29);
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
    sub_1C13F88(this, *(_QWORD *)&svtId);
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41625188(
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
  if ( (byte_4BB58CF & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C13D24(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                       userServantEntity);
    byte_4BB58CF = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v16, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1C13F80(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v17, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C13F88(this, userServantEntity);
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

  if ( (byte_4BB58CE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4BB58CE = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C13F88(v9, v10);
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
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
    sub_1C13F80(v9, v10);
  }
LABEL_19:
  if ( !v8 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  QuestRestrictionInfo___c_c *v48; // x8
  System_Func_TSource__TResult__o *_9__107_2; // x20
  Il2CppObject *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct QuestRestrictionInfo___c_StaticFields *v57; // x0
  PartyOrganizationUtility_o *p__9__107_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v59; // x8
  QuestRestrictionInfo_SlotInfo_o *v60; // x8
  Il2CppObject *v61; // x21
  struct QuestRestrictionInfo___c_StaticFields *v62; // x0
  System_Collections_Generic_IEnumerable_string__o *v63; // x0

  v8 = this;
  if ( (byte_4BB58B8 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v10);
    sub_1C13D24(&System_Func_RestrictionEntity__bool__TypeInfo, v11);
    sub_1C13D24(&System_Func_RestrictionEntity__string__TypeInfo, v12);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__, v13);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_1__, v14);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_2__, v15);
    sub_1C13D24(&QuestRestrictionInfo___c_TypeInfo, v16);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v17);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v18);
    byte_4BB58B8 = 1;
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
        v63 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__107_2,
                                                                    (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_62983600((System_String_o *)StringLiteral_43/*"\n"*/, v63, 0LL);
      }
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = QuestRestrictionInfo___c_TypeInfo;
      }
      v61 = (Il2CppObject *)v36->static_fields->__9;
      _9__107_2 = (System_Func_TSource__TResult__o *)sub_1C13F70(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__107_2,
        v61,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_2__,
        0LL);
      v62 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v62->__9__107_2 = (struct System_Func_RestrictionEntity__string__o *)_9__107_2;
      p__9__107_2 = (PartyOrganizationUtility_o *)&v62->__9__107_2;
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
        _9__107_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__107_0,
          v39,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__,
          0LL);
        v40 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v40->__9__107_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__107_0;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v40->__9__107_0, (int64_t)_9__107_0, v41, v42, v43, v44, v45, v46);
      }
      v47 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__107_0,
              (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v48 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v47;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v48 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__107_2 = (System_Func_TSource__TResult__o *)v48->static_fields->__9__107_1;
      if ( _9__107_2 )
        goto LABEL_61;
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = QuestRestrictionInfo___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v48->static_fields->__9;
      _9__107_2 = (System_Func_TSource__TResult__o *)sub_1C13F70(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__107_2,
        v50,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_1__,
        0LL);
      v57 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v57->__9__107_1 = (struct System_Func_RestrictionEntity__string__o *)_9__107_2;
      p__9__107_2 = (PartyOrganizationUtility_o *)&v57->__9__107_1;
    }
    sub_1C13CC8(p__9__107_2, (int64_t)_9__107_2, v51, v52, v53, v54, v55, v56);
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
      v59 = v8->fields.slotInfos;
      if ( v59 )
      {
        if ( (unsigned int)v20 >= v59->max_length )
          goto LABEL_63;
        v60 = v59->m_Items[v20];
        if ( v60 )
          return v60->fields.summary;
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
    sub_1C13F80(this, *(_QWORD *)&initPos);
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
      sub_1C13F88(this, *(_QWORD *)&initPos);
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
      sub_1C13F88(this, *(_QWORD *)&svtId);
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

  if ( (byte_4BB58CB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    byte_4BB58CB = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C13F88(Instance, id);
      v27 = (int32_t *)questRestrictionEntityList->m_Items[v26];
      if ( !v27 )
        goto LABEL_67;
      v28 = v27[7];
      if ( v28 == 1 )
        break;
      if ( v28 == 2 )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BAF1E5 )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, id);
      byte_4BAF1E5 = 1;
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
                                               Instance[1].fields._normalFollowerInfo->fields.tutorial1,
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
        *(const MethodInfo_36101A8 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
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
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAF1E5 )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, id);
        byte_4BAF1E5 = 1;
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
                                                 Instance[1].fields._normalFollowerInfo->fields.tutorial1,
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
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        *(const MethodInfo_36101A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
    sub_1C13F80(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4BB58CC & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, *(_QWORD *)&n);
    byte_4BB58CC = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_20:
        sub_1C13F88(this, *(_QWORD *)&n);
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_1C13F80(this, *(_QWORD *)&n);
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

  if ( (byte_4BB58E2 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__,
      *(_QWORD *)&messageId);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__,
      v5);
    byte_4BB58E2 = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0LL;
  }
  v8 = this->fields.dialogMessageInfoDictionary;
  if ( !v8 )
    sub_1C13F80(0LL, v7);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v8,
                                                       messageId,
                                                       (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  if ( (byte_4BB58E5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB58E5 = 1;
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
        sub_1C13F88(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_19;
      if ( v10->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C13F80(this, method);
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
  if ( (byte_4BB58E7 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB58E7 = 1;
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
        sub_1C13F88(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_19;
      if ( v10->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C13F80(this, method);
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
  if ( (byte_4BB58E4 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB58E4 = 1;
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
        sub_1C13F88(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_20;
      type = v10->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C13F80(this, method);
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
  if ( (byte_4BB58CD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&n);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB58CD = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_21:
        sub_1C13F88(this, *(_QWORD *)&n);
      v12 = questRestrictionEntityList->m_Items[n];
      if ( v12 )
      {
        p_title = &v12->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_1C13F80(this, *(_QWORD *)&n);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     n,
                                     (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
    sub_1C13F88(this, *(_QWORD *)&n);
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_7:
    sub_1C13F80(this, n);
  return v5->fields.type;
}


bool __fastcall QuestRestrictionInfo__GetExplanationMessage(
        QuestRestrictionInfo_o *this,
        System_String_o **message,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  QuestRestrictionInfo_o *v9; // x20
  struct RestrictionBaseEntity_o *v11; // x8
  System_String_o *noticeMessage; // x1
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w21
  il2cpp_array_size_t v15; // w22
  QuestRestrictionEntity_o *v16; // x23

  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  v9 = this;
  if ( !restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
LABEL_13:
      sub_1C13F80(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= questRestrictionEntityList->max_length )
          sub_1C13F88(this, message);
        v16 = questRestrictionEntityList->m_Items[v15];
        if ( !v16 )
          goto LABEL_13;
        this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.noticeMessage, 0LL);
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
    *message = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)message, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)message, (int64_t)noticeMessage, (int64_t)method, v3, v4, v5, v6, v7);
  return 1;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BB58D7 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10498/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v2);
    byte_4BB58D7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10498/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BB58D6 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10499/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v2);
    byte_4BB58D6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10499/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, 0LL);
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

  if ( (byte_4BB58ED & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4BB58ED = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C13F80(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4BB58EA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BB58EA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !v11 )
      sub_1C13F80(v14, v15);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v17.fields._current,
      (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_1C13F80(fixedMyServantIndividualitiesList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4BB58C8 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v13);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BB58C8 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v17 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_1C13F80(this, *(_QWORD *)&svtId);
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
    sub_1C13F88(this, *(_QWORD *)&svtId);
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BB58C9 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10497/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v2);
    byte_4BB58C9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10497/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, 0LL);
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

  if ( (byte_4BB58EF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4BB58EF = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C13F80(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4BB58EC & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BB58EC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !v11 )
      sub_1C13F80(v14, v15);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v17.fields._current,
      (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_1C13F80(fixedIndividualitiesList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4BB58C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4BB58C5 = 1;
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
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v7 = 0;
    for ( i = v17; ; v7 += LODWORD(i.fields._current[1].monitor) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1C13F80(v8, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    sub_1C13F80(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v17; ; v13 += LODWORD(i.fields._current[1].monitor) )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !i.fields._current )
      sub_1C13F80(v14, v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v13;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BB58C7 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10496/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v2);
    byte_4BB58C7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10496/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
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

  if ( (byte_4BB58C4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BB58C4 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v14 )
          break;
        if ( !v11 )
          sub_1C13F80(v14, v15);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v16 )
          break;
        if ( !v11 )
          sub_1C13F80(v16, v17);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v18 )
          break;
        if ( !v11 )
          sub_1C13F80(v18, v19);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v11 )
    {
      if ( v11->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v11,
                 (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0LL;
    }
LABEL_38:
    sub_1C13F80(fixedMyServantIndividualitiesList, v13);
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

  if ( (byte_4BB58C3 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10501/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, v2);
    byte_4BB58C3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10501/*"PARTY_ORGANIZATION_SERVANT_EVENT_JOIN"*/, 0LL);
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
  if ( (byte_4BB58AF & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionWholeType);
    byte_4BB58AF = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1C13F80(this, *(_QWORD *)&restrictionWholeType);
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
        sub_1C13F88(this, *(_QWORD *)&restrictionWholeType);
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
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_41606580(
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
  if ( (byte_4BB58B0 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionType);
    byte_4BB58B0 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1C13F80(this, *(_QWORD *)&restrictionType);
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
        sub_1C13F88(this, *(_QWORD *)&restrictionType);
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v68; // w23
  RestrictionWholeEntity_o *v69; // x29
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  int v80; // w8
  void *v81; // x21
  unsigned int v82; // w22
  __int64 v83; // x26
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_String_o *v90; // x0
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0

  if ( (byte_4BB58AD & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__ToArray__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v23);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v24);
    sub_1C13D24(&LocalizationManager_TypeInfo, v25);
    sub_1C13D24(&StringLiteral_10471/*"PARTY_ORGANIZATION_NAME_INIT"*/, v26);
    sub_1C13D24(&StringLiteral_11273/*"RESET_CAMERA_NOBLEEND"*/, v27);
    sub_1C13D24(&StringLiteral_11274/*"RESET_CAMERA_TAC"*/, v28);
    sub_1C13D24(&StringLiteral_11270/*"RESET_BIRTHDAY_NOTICE"*/, v29);
    sub_1C13D24(&StringLiteral_6576/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, v30);
    byte_4BB58AD = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6576/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11274/*"RESET_CAMERA_TAC"*/, 0LL);
    v35 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11273/*"RESET_CAMERA_NOBLEEND"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_62967944(summary, v35, 0LL);
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
    v43 = Method_System_Collections_Generic_List_string__Add__;
    ++v31->fields._version;
    if ( !items )
      goto LABEL_100;
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)summary,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v45[4] = (Il2CppClass *)summary;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)summary, v36, v37, v38, v39, v40, v41);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11270/*"RESET_BIRTHDAY_NOTICE"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_62967944(summary, v35, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v31 )
          goto LABEL_100;
        goto LABEL_29;
      }
    }
    if ( !v31 )
      goto LABEL_100;
LABEL_29:
    v52 = v31->fields._items;
    v53 = Method_System_Collections_Generic_List_string__Add__;
    ++v31->fields._version;
    if ( !v52 )
      goto LABEL_100;
    v54 = v31->fields._size;
    if ( (unsigned int)v54 >= v52->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)summary,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v31->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)summary;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)summary, v46, v47, v48, v49, v50, v51);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10471/*"PARTY_ORGANIZATION_NAME_INIT"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_62967944(summary, v35, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v31 )
          goto LABEL_100;
        goto LABEL_42;
      }
    }
    if ( !v31 )
      goto LABEL_100;
LABEL_42:
    v62 = v31->fields._items;
    v63 = Method_System_Collections_Generic_List_string__Add__;
    ++v31->fields._version;
    if ( !v62 )
      goto LABEL_100;
    v64 = v31->fields._size;
    if ( (unsigned int)v64 >= v62->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)summary,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    }
    else
    {
      v65 = &v62->obj.klass + v64;
      v31->fields._size = v64 + 1;
      v65[4] = (Il2CppClass *)summary;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)summary, v56, v57, v58, v59, v60, v61);
    }
LABEL_46:
    restrictionWholeEntities = this->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_100;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v68 = 0;
      while ( v68 < max_length )
      {
        v69 = restrictionWholeEntities->m_Items[v68];
        if ( !v69 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v69->fields.summary, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = v69->fields.summary;
          }
          else
          {
            IsNullOrEmpty = System_String__Format(v34, (Il2CppObject *)v69->fields.summary, 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          switch ( v69->fields.type )
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
                IsNullOrEmpty = System_String__Concat_62967944(summary, v35, 0LL);
                summary = (System_String_o *)IsNullOrEmpty;
              }
              break;
            default:
              break;
          }
          if ( !v31 )
            goto LABEL_100;
          v76 = v31->fields._items;
          v77 = Method_System_Collections_Generic_List_string__Add__;
          ++v31->fields._version;
          if ( !v76 )
            goto LABEL_100;
          v78 = v31->fields._size;
          if ( (unsigned int)v78 >= v76->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)summary,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = &v76->obj.klass + v78;
            v31->fields._size = v78 + 1;
            v79[4] = (Il2CppClass *)summary;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)summary, v70, v71, v72, v73, v74, v75);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v68 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1C13F88(IsNullOrEmpty, summary);
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
                            (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_100:
      sub_1C13F80(IsNullOrEmpty, summary);
    }
    v80 = *((_DWORD *)IsNullOrEmpty + 6);
    v81 = IsNullOrEmpty;
    if ( v80 >= 1 )
    {
      v82 = 0;
      while ( v82 < v80 )
      {
        v83 = *((_QWORD *)v81 + (int)v82 + 4);
        if ( !v83 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v83 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v83 + 24);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v90 = LocalizationManager__Get((System_String_o *)StringLiteral_6576/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v90, *(Il2CppObject **)(v83 + 24), 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          if ( !v31 )
            goto LABEL_100;
          v91 = v31->fields._items;
          v92 = Method_System_Collections_Generic_List_string__Add__;
          ++v31->fields._version;
          if ( !v91 )
            goto LABEL_100;
          v93 = v31->fields._size;
          if ( (unsigned int)v93 >= v91->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)summary,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v94 = &v91->obj.klass + v93;
            v31->fields._size = v93 + 1;
            v94[4] = (Il2CppClass *)summary;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)summary, v84, v85, v86, v87, v88, v89);
          }
        }
        v80 = *((_DWORD *)v81 + 6);
        if ( (int)++v82 >= v80 )
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
                                  (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_41605312(
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  signed int max_length; // w8
  unsigned int v52; // w19
  RestrictionEntity_o *v53; // x27
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0

  if ( (byte_4BB58AE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, entities);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__ToArray__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1C13D24(&LocalizationManager_TypeInfo, v21);
    sub_1C13D24(&StringLiteral_10471/*"PARTY_ORGANIZATION_NAME_INIT"*/, v22);
    sub_1C13D24(&StringLiteral_11274/*"RESET_CAMERA_TAC"*/, v23);
    sub_1C13D24(&StringLiteral_11270/*"RESET_BIRTHDAY_NOTICE"*/, v24);
    sub_1C13D24(&StringLiteral_6576/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, v25);
    byte_4BB58AE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6576/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11274/*"RESET_CAMERA_TAC"*/, 0LL);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11270/*"RESET_BIRTHDAY_NOTICE"*/, 0LL);
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
  IsNullOrEmpty = System_String__Concat_62967944(name, v27, 0LL);
  name = IsNullOrEmpty;
  if ( !v28 )
    goto LABEL_64;
LABEL_15:
  items = v28->fields._items;
  v38 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)name,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v40[4] = (Il2CppClass *)name;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)name, v31, v32, v33, v34, v35, v36);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10471/*"PARTY_ORGANIZATION_NAME_INIT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_62967944(name, v27, 0LL);
      name = IsNullOrEmpty;
    }
    if ( !v28 )
      goto LABEL_64;
    v47 = v28->fields._items;
    v48 = Method_System_Collections_Generic_List_string__Add__;
    ++v28->fields._version;
    if ( !v47 )
      goto LABEL_64;
    v49 = v28->fields._size;
    if ( (unsigned int)v49 >= v47->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)name,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &v47->obj.klass + v49;
      v28->fields._size = v49 + 1;
      v50[4] = (Il2CppClass *)name;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)name, v41, v42, v43, v44, v45, v46);
    }
  }
  if ( !entities )
    goto LABEL_64;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v52 = 0;
    while ( 1 )
    {
      if ( v52 >= max_length )
        sub_1C13F88(IsNullOrEmpty, name);
      v53 = entities->m_Items[v52];
      if ( !v53 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v53->fields.name, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v53->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v53, 0LL);
          name = IsNullOrEmpty;
        }
        switch ( v53->fields.type )
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
              IsNullOrEmpty = System_String__Concat_62967944(name, v27, 0LL);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v28 )
          break;
        v60 = v28->fields._items;
        v61 = Method_System_Collections_Generic_List_string__Add__;
        ++v28->fields._version;
        if ( !v60 )
          break;
        v62 = v28->fields._size;
        if ( (unsigned int)v62 >= v60->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)name,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &v60->obj.klass + v62;
          v28->fields._size = v62 + 1;
          v63[4] = (Il2CppClass *)name;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)name, v54, v55, v56, v57, v58, v59);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v52 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1C13F80(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v28 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v28,
                                  (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  if ( (byte_4BB58D5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v7);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB58D5 = 1;
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
                                             (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_55;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                               (System_Collections_Generic_Dictionary_int__object__o *)this,
                                               v14,
                                               (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_55;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &v27,
                                                     *(_DWORD *)(v20 + 44),
                                                     (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
              sub_1C13F80(this, method);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_55;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v12->fields.restrictionMessageId,
                                           (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C13F88(this, method);
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

  if ( (byte_4BB58DE & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, *(_QWORD *)&pos);
    sub_1C13D24(&StringLiteral_10503/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v7);
    sub_1C13D24(&StringLiteral_10506/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, v8);
    byte_4BB58DE = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( haveIndividualityServant )
    v10 = (System_String_o **)&StringLiteral_10503/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/;
  else
    v10 = (System_String_o **)&StringLiteral_10506/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/;
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
  if ( (byte_4BB58F2 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C13D24(
                                       &Method_System_Collections_Generic_List_RestrictionEntity__get_Count__,
                                       method);
    byte_4BB58F2 = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1C13F80(this, method);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_int__o *v27; // x20
  int v28; // w8
  void *v29; // x19
  unsigned int v30; // w21
  __int64 v31; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x1
  const MethodInfo_2FB37C8 *v35; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v38; // x20
  Il2CppObject *v39; // x0
  Il2CppObject *v40; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0

  if ( (byte_4BB58E0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Intersect_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass187_0__GetMyServantOrNpcSvtIdList_b__0__, v16);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo, v17);
    byte_4BB58E0 = 1;
  }
  v18 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_29;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v18 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v27 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v27,
      (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v18 + 24),
                                        (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v28 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v29 = restrictionSlotDetailDictionary;
    if ( v28 >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= v28 )
          sub_1C13F88(restrictionSlotDetailDictionary, v20);
        v31 = *((_QWORD *)v29 + (int)v30 + 4);
        if ( !v31 )
          break;
        if ( *(_DWORD *)(v31 + 32) == 1 )
        {
          if ( !v27 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v27,
            *(System_Collections_Generic_IEnumerable_T__o **)(v31 + 40),
            (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v28 = *((_DWORD *)v29 + 6);
        if ( (int)++v30 >= v28 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1C13F80(restrictionSlotDetailDictionary, v20);
    }
LABEL_15:
    if ( !v27 )
      goto LABEL_29;
    if ( v27->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                  (const MethodInfo_2FAC754 *)Method_System_Linq_Enumerable_Distinct_int___);
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v35 = (const MethodInfo_2FB37C8 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v41 = System_Linq_Enumerable__Intersect_int_(monitor, v34, v35);
      return System_Linq_Enumerable__ToArray_int_(
               v41,
               (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v38 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v38,
        (Il2CppObject *)v18,
        Method_QuestRestrictionInfo___c__DisplayClass187_0__GetMyServantOrNpcSvtIdList_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v39 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v38,
              (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v39 )
      {
        v40 = v39;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v34 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v40[2].monitor;
        v35 = (const MethodInfo_2FB37C8 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  __int64 v27; // x22
  void *Instance; // x0
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_int__object__o *v30; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2
  long double inited; // q0
  _QWORD *v39; // x23
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Int32_array *MyServantOrNpcSvtIdList; // x27
  System_Predicate_object__o *v45; // x24
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  int32_t MyServantOrSupportTargetPos; // w22
  const MethodInfo *v51; // x2
  long double v52; // q0
  _QWORD *v53; // x21
  __int64 v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  System_Collections_Generic_List_int__o *v57; // x23
  int v58; // w8
  void *v59; // x24
  unsigned int v60; // w29
  FollowerInfo_o *v61; // x25
  ServantLeaderInfo_o *v62; // x26
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividualityFull; // x27
  const MethodInfo *v65; // x1
  int32_t Rarity; // w0
  const MethodInfo *v67; // x7
  const MethodInfo *v68; // x3
  __int64 v69; // x27
  __int64 v70; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v74; // x27
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v75; // x27
  __int64 v76; // x26
  __int64 v77; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-70h]
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4BB58E9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_int___, npcInfoDictionary);
    sub_1C13D24(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v14);
    sub_1C13D24(&Method_System_Linq_Enumerable_Intersect_int___, v15);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v16);
    sub_1C13D24(&Method_System_Linq_Enumerable_Union_int___, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v23);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass201_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__, v25);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass201_0_TypeInfo, v26);
    byte_4BB58E9 = 1;
  }
  isWhole = 0;
  v27 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass201_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_56;
  *(_DWORD *)(v27 + 16) = index;
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)npcInfoDictionary, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v39 = Method_System_Array_Empty_int___;
  v40 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v40 )
  {
    sub_1C65C5C(Method_System_Array_Empty_int___);
    v40 = v39[7];
  }
  v41 = *(_QWORD *)(v40 + 16);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1C65C00(inited);
  if ( !*(_DWORD *)(v41 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v41);
  v42 = *(_QWORD *)(v39[7] + 16LL);
  if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
    v42 = sub_1C65C00(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v42 + 184);
    v45 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v45,
      (Il2CppObject *)v27,
      Method_QuestRestrictionInfo___c__DisplayClass201_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0LL);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_56;
    v46 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v45,
            (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v46 )
    {
      v47 = v46;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_56;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_56;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v49 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v47[2].monitor,
              CollectionList,
              (const MethodInfo_2FB37C8 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v49,
                                  (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v27 + 16);
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, *(_DWORD *)(v27 + 16), v37);
    if ( !MyServantOrNpcSvtIdList )
    {
      v53 = Method_System_Array_Empty_int___;
      v54 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v54 )
      {
        sub_1C65C5C(Method_System_Array_Empty_int___);
        v54 = v53[7];
      }
      v55 = *(_QWORD *)(v54 + 16);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1C65C00(v52);
      if ( !*(_DWORD *)(v55 + 224) )
        v52 = j_il2cpp_runtime_class_init_0(v55);
      v56 = *(_QWORD *)(v53[7] + 16LL);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1C65C00(v52);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v56 + 184);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v27 + 16);
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v51);
  }
  v57 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v57,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = NpcFollowerMaster__GetQuestFollowerList(
               (NpcFollowerMaster_o *)Instance,
               this->fields.questId,
               this->fields.questPhase,
               0LL);
  if ( !Instance )
    goto LABEL_56;
  v58 = *((_DWORD *)Instance + 6);
  v59 = Instance;
  if ( v58 >= 1 )
  {
    v60 = 0;
    while ( 1 )
    {
      if ( v60 >= v58 )
        sub_1C13F88(Instance, v29);
      v61 = (FollowerInfo_o *)*((_QWORD *)v59 + (int)v60 + 4);
      Instance = (void *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v61 )
        break;
      Instance = FollowerInfo__getServantLeaderInfo(v61, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        v62 = (ServantLeaderInfo_o *)Instance;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(v61, 0, ReturnTypeByQuestId, 0LL);
        Rarity = ServantLeaderInfo__getRarity(v62, v65);
        Instance = (void *)QuestRestrictionInfo__IsRestriction_41609392(
                             this,
                             &isWhole,
                             NpcServantIndividualityFull,
                             Rarity,
                             v62->fields.lv,
                             MyServantOrSupportTargetPos,
                             3,
                             v67);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41631072(
                               this,
                               NpcServantIndividualityFull,
                               MyServantOrSupportTargetPos,
                               v68);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v70 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
            v69 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v82.fields.currentCryptoKey = v70;
            *(_QWORD *)&v82.fields.fakeValue = v69;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v82, 0LL);
            if ( !v57 )
              break;
            items = v57->fields._items;
            v72 = Method_System_Collections_Generic_List_int__Add__;
            ++v57->fields._version;
            if ( !items )
              break;
            size = v57->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v57,
                (int32_t)Instance,
                *(const MethodInfo_36101A8 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v57->fields._size = size + 1;
              items->m_Items[size + 1] = (int)Instance;
            }
            v74 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                 v62->fields.svtId,
                                 0LL);
            if ( !v74 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v74,
                                 (int32_t)Instance,
                                 (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v75 = *npcInfoDictionary;
              v77 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
              v76 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v83.fields.currentCryptoKey = v77;
              *(_QWORD *)&v83.fields.fakeValue = v76;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v83, 0LL);
              if ( !v75 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v75,
                (int32_t)Instance,
                (Il2CppObject *)v61,
                (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v58 = *((_DWORD *)v59 + 6);
      if ( (int)++v60 >= v58 )
        goto LABEL_55;
    }
LABEL_56:
    sub_1C13F80(Instance, v29);
  }
LABEL_55:
  v78 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v57,
          (const MethodInfo_2FCCF4C *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v78,
           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4BB58DF & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_10508/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, v8);
    sub_1C13D24(&StringLiteral_10507/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v9);
    sub_1C13D24(&StringLiteral_10505/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, v10);
    sub_1C13D24(&StringLiteral_10504/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v11);
    byte_4BB58DF = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10505/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10504/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/;
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
          sub_1C13F88(MyServantOrNpcSvtIdList, v14);
        MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        v18 = v16[v17 + 8];
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        }
        if ( v18 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 868LL) )
          break;
        v15 = v16[6];
        if ( (int)++v17 >= v15 )
          goto LABEL_20;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_10507/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/;
    }
    else
    {
LABEL_20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_10508/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/;
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v19; // x20
  Il2CppClass *klass; // x8

  if ( (byte_4BB58E1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&index);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass188_0__GetMyServantOrSupportTargetPos_b__0__, v6);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo, v7);
    byte_4BB58E1 = 1;
  }
  v8 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
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
  v19 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_QuestRestrictionInfo___c__DisplayClass188_0__GetMyServantOrSupportTargetPos_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v9 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v19,
         (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v9 )
    return (int)v9;
  klass = v9[3].klass;
  if ( !klass )
LABEL_14:
    sub_1C13F80(v9, v10);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1C13F88(v9, v10);
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
    sub_1C13F88(this, *(_QWORD *)&pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C13F80(this, pos);
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

  if ( (byte_4BB58E3 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__,
      *(_QWORD *)&pos);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__,
      v5);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__,
      v6);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__,
      v7);
    sub_1C13D24(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__,
      v8);
    sub_1C13D24(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__,
      v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB58E3 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1C13F80(0LL, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v17,
              (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v12 )
        break;
      if ( !v17.fields._current.fields.value )
        sub_1C13F80(v12, v13);
      if ( LODWORD(v17.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v17.fields._current.fields.key, v14);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v17,
          (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v17,
      (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
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

  if ( (byte_4BB58EE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4BB58EE = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C13F80(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4BB58EB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4BB58EB = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v10 )
      sub_1C13F80(v13, v14);
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)v16.fields._current,
      (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v10 )
LABEL_15:
    sub_1C13F80(needStartingIndividualitiesList, v11);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int64_t FixedServantPositionSvtIdList; // x0
  __int64 v14; // x1
  int64_t v15; // x20
  System_String_array *v16; // x19
  unsigned __int64 v17; // x25
  __int64 v18; // x26
  PartyOrganizationUtility_o *i; // x21
  int32_t v20; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t maxLimitCount; // w23
  int32_t v23; // w1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UserServantCollectionEntity_o *v31; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BB58D0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&OptionManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C13D24(&string___TypeInfo, v9);
    byte_4BB58D0 = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v12 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v11);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_41;
  v15 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_1C13DCC(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v16 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v12 >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)v12;
    for ( i = (PartyOrganizationUtility_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (PartyOrganizationUtility_o *)((char *)i + 8) )
    {
      if ( v17 >= *(unsigned int *)(v15 + 24) )
LABEL_42:
        sub_1C13F88(FixedServantPositionSvtIdList, v14);
      v20 = *(_DWORD *)(v15 + 32 + 4 * v17);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v20,
              (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAF1E5 )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, v14);
        byte_4BAF1E5 = 1;
      }
      FixedServantPositionSvtIdList = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        FixedServantPositionSvtIdList = (int64_t)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)MasterData_object,
              &v31,
              *(_QWORD *)(*(_QWORD *)(FixedServantPositionSvtIdList + 184) + 64LL),
              v20,
              0LL) )
        goto LABEL_28;
      FixedServantPositionSvtIdList = (int64_t)v31;
      if ( !v31 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v31, 0LL);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v31 )
          break;
        maxLimitCount = v31->fields.maxLimitCount;
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
      FixedServantPositionSvtIdList = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v23, -1, 0LL);
      if ( !v16 )
        break;
      if ( v17 >= v16->max_length )
        goto LABEL_42;
      i->klass = (PartyOrganizationUtility_c *)FixedServantPositionSvtIdList;
      sub_1C13CC8(i, FixedServantPositionSvtIdList, v24, v25, v26, v27, v28, v29);
      if ( v18 == ++v17 )
        return v16;
    }
LABEL_41:
    sub_1C13F80(FixedServantPositionSvtIdList, v14);
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
    sub_1C13F88(this, *(_QWORD *)&pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C13F80(this, pos);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  __int64 v24; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_object__o *v26; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  System_String_o *v29; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4BB58DD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&pos);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass184_0__GetRestrictedName_b__0__, v7);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo, v8);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v9);
    byte_4BB58DD = 1;
  }
  v29 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v4->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         pos,
                                         (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
              return v29;
          }
        }
        return v29;
      }
    }
LABEL_29:
    sub_1C13F80(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( v15 >= questRestrictionEntityList->max_length )
        break;
      if ( !v16 )
        goto LABEL_29;
      v23 = (int64_t)questRestrictionEntityList->m_Items[v15];
      *(_QWORD *)(v16 + 16) = v23;
      v24 = v16 + 16;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 16), v23, v17, v18, v19, v20, v21, v22);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v26 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v26,
        (Il2CppObject *)v16,
        Method_QuestRestrictionInfo___c__DisplayClass184_0__GetRestrictedName_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v26,
                                         (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !deckSvtIdList->max_length )
          break;
        if ( deckSvtIdList->m_Items[1] == pos )
        {
          if ( !*(_QWORD *)v24 )
            goto LABEL_29;
          v29 = *(System_String_o **)(*(_QWORD *)v24 + 48LL);
        }
      }
      if ( (__int64)++v15 >= (int)questRestrictionEntityList->max_length )
        return v29;
    }
LABEL_30:
    sub_1C13F88(this, *(_QWORD *)&pos);
  }
  return v29;
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  Il2CppObject *v28; // x0
  System_Collections_Generic_IEnumerable_string__o *v29; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v30; // x8
  QuestRestrictionInfo_SlotInfo_o *v31; // x8

  v4 = this;
  if ( (byte_4BB58B9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Prepend_string___, *(_QWORD *)&initPos);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v5);
    sub_1C13D24(&System_Func_RestrictionEntity__string__TypeInfo, v6);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__108_0__, v8);
    sub_1C13D24(&QuestRestrictionInfo___c_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v10);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_10467/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, v11);
    byte_4BB58B9 = 1;
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
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, 0LL);
      v30 = v4->fields.slotInfos;
      if ( !v30 )
        goto LABEL_25;
      if ( (unsigned int)v13 >= v30->max_length )
LABEL_26:
        sub_1C13F88(this, *(_QWORD *)&initPos);
      v31 = v30->m_Items[v13];
      if ( v31 )
        return System_String__Concat_62979204(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v31->fields.summary,
                 0LL);
    }
LABEL_25:
    sub_1C13F80(this, *(_QWORD *)&initPos);
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
    _9__108_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__108_0,
      v19,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__108_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_RestrictionEntity__string__o *)_9__108_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__108_0,
      (int64_t)_9__108_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__108_0,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, 0LL);
  v29 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v27,
                                                              v28,
                                                              (const MethodInfo_2FB8BE8 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_62983600((System_String_o *)StringLiteral_43/*"\n"*/, v29, 0LL);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB58BA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, method);
    sub_1C13D24(&System_Func_RestrictionEntity__bool__TypeInfo, v3);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__, v4);
    sub_1C13D24(&QuestRestrictionInfo___c_TypeInfo, v5);
    byte_4BB58BA = 1;
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
    _9__109_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v9,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__109_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__109_0,
      (int64_t)_9__109_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__109_0,
                                                                          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
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

  if ( (byte_4BB58B4 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB58B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C13F80(Instance, v12);
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

  if ( (byte_4BB58D1 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    byte_4BB58D1 = 1;
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
      sub_1C13F80(0LL, method);
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
  if ( (byte_4BB58D3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v6);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v7);
    byte_4BB58D3 = 1;
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
                                           (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &v23,
                                             *(_DWORD *)(v16 + 44),
                                             (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &entity,
                                             v11->fields.restrictionMessageId,
                                             (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
          sub_1C13F88(this, method);
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
      sub_1C13F80(this, method);
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

  if ( (byte_4BB58D2 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&int_TypeInfo, v3);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_10510/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, v5);
    sub_1C13D24(&StringLiteral_10509/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v6);
    byte_4BB58D2 = 1;
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
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10510/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
    v14 = &v18;
    v18 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10509/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0LL);
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

  if ( (byte_4BB58B3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BB58B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_1C13F80(Instance, v8);
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

  if ( (byte_4BB58BB & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10511/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v2);
    byte_4BB58BB = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
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

  if ( (byte_4BB58CA & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    byte_4BB58CA = 1;
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
  if ( (byte_4BB58C1 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, isFixMessage);
    sub_1C13D24(&StringLiteral_10513/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/, v5);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB58C1 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10513/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1C13F80(this, isFixMessage);
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
          sub_1C13F88(this, isFixMessage);
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

  if ( (byte_4BB58C0 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10512/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, v2);
    byte_4BB58C0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10512/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, 0LL);
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
    sub_1C13F88(this, *(_QWORD *)&initPos);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C13F80(this, initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1C13F80(this, method);
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
        sub_1C13F88(this, method);
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB58E6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4BB58E6 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v18;
          ;
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v13 )
        break;
      if ( !v10 )
        sub_1C13F80(v13, v14);
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
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v18;
          ;
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v16 )
        break;
      if ( !v10 )
        sub_1C13F80(v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v10 )
LABEL_23:
    sub_1C13F80(fixedSupportIndividualitiesList, v11);
  return v10->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_41615484(
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
  const MethodInfo *v32; // x1
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v36; // x1
  struct System_Boolean_array *supportPositionList; // x8
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v6 = this;
  if ( (byte_4BB58C2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&num);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____GetEnumerator__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v20);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4BB58C2 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v39, 0, sizeof(v39));
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
  v22 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v38;
          ;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v23 )
        break;
      if ( !v22 )
        sub_1C13F80(v23, v24);
    }
  }
  else
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v38;
          ;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v26 )
        break;
      if ( !v22 )
        sub_1C13F80(v26, v27);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v22 )
    goto LABEL_42;
  if ( v22->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v30 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v30;
  *(_QWORD *)&v41.fields.fakeValue = v29;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v41, 0LL);
  if ( !v28 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v28,
             (int32_t)this,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v22,
    (const MethodInfo_3610C7C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v39 = v38;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v39,
            (const MethodInfo_33BAB1C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v39,
        (const MethodInfo_33BAB18 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v39.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, v32);
    if ( !Entity )
      sub_1C13F80(DispLimitCount, v36);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0LL) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v39,
    (const MethodInfo_33BAB18 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1C13F80(this, *(_QWORD *)&num);
  if ( supportPositionList->max_length <= num )
    sub_1C13F88(this, *(_QWORD *)&num);
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
bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_41628040(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v12; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4BB58D8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__, *(_QWORD *)&pos);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass179_0__IsMyServantOrNpcRestriction_b__0__, v6);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo, v7);
    byte_4BB58D8 = 1;
  }
  v8 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_DWORD *)(v8 + 16) = pos;
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( pos - 1 >= slotInfos->max_length )
        sub_1C13F88(v9, v10);
      v12 = slotInfos->m_Items[pos - 1];
      if ( v12 )
        return (unsigned int)(v12->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1C13F80(v9, v10);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v15 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_QuestRestrictionInfo___c__DisplayClass179_0__IsMyServantOrNpcRestriction_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_362D7F8 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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
  __int64 v9; // x21
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

  if ( (byte_4BB58DA & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass181_0__IsNotIndividuality_b__0__, v7);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo, v8);
    byte_4BB58DA = 1;
  }
  v9 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_23;
  *(_DWORD *)(v9 + 16) = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41628040(this, pos, v12) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                          *(_DWORD *)(v9 + 16),
                                          (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v13 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v13 >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v13 == v14 )
            sub_1C13F88(restrictionSlotDetailDictionary, v11);
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
        sub_1C13F80(restrictionSlotDetailDictionary, v11);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v18 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v18,
        (Il2CppObject *)v9,
        Method_QuestRestrictionInfo___c__DisplayClass181_0__IsNotIndividuality_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                          myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v18,
                                          (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
      sub_1C13F88(this, *(_QWORD *)&initPos);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1C13F80(this, initPos);
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
  System_Func_object__bool__o *_9__98_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB58B2 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___, method);
    sub_1C13D24(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo, v3);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__98_0__, v4);
    sub_1C13D24(&QuestRestrictionInfo___c_TypeInfo, v5);
    byte_4BB58B2 = 1;
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
  _9__98_0 = (System_Func_object__bool__o *)v7->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = QuestRestrictionInfo___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__98_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__98_0,
      v9,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__98_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__98_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__98_0,
      (int64_t)_9__98_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return BasicHelper__Any_object__49783940(
           slotInfos,
           (System_Func_T__bool__o *)_9__98_0,
           (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
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
  System_Func_object__bool__o *_9__97_1; // x20
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo_2F7A484 *v20; // x2
  QuestRestrictionInfo___c_c *v21; // x0
  Il2CppObject *v22; // x21
  struct QuestRestrictionInfo___c_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BB58B1 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_RestrictionEntity___, method);
    sub_1C13D24(&Method_BasicHelper_Any_RestrictionWholeEntity___, v3);
    sub_1C13D24(&System_Func_RestrictionEntity__bool__TypeInfo, v4);
    sub_1C13D24(&System_Func_RestrictionWholeEntity__bool__TypeInfo, v5);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_0__, v6);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_1__, v7);
    sub_1C13D24(&QuestRestrictionInfo___c_TypeInfo, v8);
    byte_4BB58B1 = 1;
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
    _9__97_1 = (System_Func_object__bool__o *)v9->static_fields->__9__97_1;
    if ( !_9__97_1 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = QuestRestrictionInfo___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__97_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__97_1,
        v12,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_1__,
        0LL);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__97_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__97_1;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__97_1,
        (int64_t)_9__97_1,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_RestrictionWholeEntity___;
  }
  else
  {
    v21 = QuestRestrictionInfo___c_TypeInfo;
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionEntityList;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v21 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__97_1 = (System_Func_object__bool__o *)v21->static_fields->__9__97_0;
    if ( !_9__97_1 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = QuestRestrictionInfo___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v21->static_fields->__9;
      _9__97_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__97_1,
        v22,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_0__,
        0LL);
      v23 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v23->__9__97_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__97_1;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v23->__9__97_0, (int64_t)_9__97_1, v24, v25, v26, v27, v28, v29);
    }
    v20 = (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_object__49783940(restrictionWholeEntities, (System_Func_T__bool__o *)_9__97_1, v20);
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
  __int64 v22; // x24
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

  if ( (byte_4BB58DB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v17);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v18);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass182_0__IsRestrictionServantIndividuality_b__0__, v20);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass182_0_TypeInfo, v21);
    byte_4BB58DB = 1;
  }
  v22 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass182_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_51;
  *(_DWORD *)(v22 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41628040(this, pos, v25) )
    goto LABEL_49;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_51;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    *(_DWORD *)(v22 + 16),
                                    (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                                        *(_DWORD *)(v22 + 16),
                                        (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
                  sub_1C13F88(Instance, v24);
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
    sub_1C13F80(Instance, v24);
  }
  if ( isChkSupport )
    goto LABEL_49;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v33 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v33,
    (Il2CppObject *)v22,
    Method_QuestRestrictionInfo___c__DisplayClass182_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_51;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v33,
                                (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    if ( RestrictionEntity__IsRestriction_40741452(v35, v37, 0LL) )
    {
      LOBYTE(v36) = 1;
      return v36;
    }
LABEL_49:
    LOBYTE(v36) = 0;
  }
  return v36;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_41631072(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
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

  if ( (byte_4BB58DC & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      individuality);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v8);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass183_0__IsRestrictionServantIndividuality_b__0__, v9);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass183_0_TypeInfo, v10);
    byte_4BB58DC = 1;
  }
  v11 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass183_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_DWORD *)(v11 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41628040(this, pos, v14) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v11 + 16),
                                        (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1C13F88(restrictionSlotDetailDictionary, v13);
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
      sub_1C13F80(restrictionSlotDetailDictionary, v13);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v21 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_QuestRestrictionInfo___c__DisplayClass183_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v21,
                                      (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    return RestrictionEntity__IsRestriction_40741452(
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
  return QuestRestrictionInfo__IsRestrictionSlot_41608604(this, ServantIndividuality, initPos, v14);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionSlot_41608604(
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
  if ( (byte_4BB58B7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_int___, svtIndividuality);
    sub_1C13D24(&Method_System_Linq_Enumerable_Intersect_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____get_Count__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____get_Item__, v10);
    this = (QuestRestrictionInfo_o *)sub_1C13D24(
                                       &Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__,
                                       v11);
    byte_4BB58B7 = 1;
  }
  v12 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1C13F80(this, svtIndividuality);
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
                                         (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v17 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_2FB37C8 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v17,
                                           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                           (const MethodInfo_36126E4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                             (const MethodInfo_2F9A3DC *)Method_System_Linq_Enumerable_Any_int___);
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
                                             (const MethodInfo_36126E4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                               (const MethodInfo_2F9A3DC *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1C13F88(this, svtIndividuality);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_41607864(
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
  long double inited; // q0
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v20; // x23
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  bool isWhole; // [xsp+Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_4BB58B5 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&Method_System_Array_Empty_int___, *(_QWORD *)&svtId);
    byte_4BB58B5 = 1;
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
    v20 = Method_System_Array_Empty_int___;
    v21 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v21 )
    {
      sub_1C65C5C(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C65C00(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C65C00(inited);
    ServantIndividuality = **(System_Int32_array ***)(v23 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_41608136(
           v12,
           &isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           targetType,
           v17);
}


bool __fastcall QuestRestrictionInfo__IsRestriction_41608136(
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
      sub_1C13F80(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1C13F88(this, isWhole);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_40741452(v18, svtIndividuality, 0LL);
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
bool __fastcall QuestRestrictionInfo__IsRestriction_41609108(
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
  QuestRestrictionInfo_o *v16; // x23
  int32_t ServantRarity; // w24
  const MethodInfo *v18; // x1
  _BOOL8 IsRestrictionIndividualityWhole; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x7
  long double inited; // q0
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v25; // x25
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0

  v16 = this;
  if ( (byte_4BB58B6 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&Method_System_Array_Empty_int___, isWhole);
    byte_4BB58B6 = 1;
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
    v25 = Method_System_Array_Empty_int___;
    v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v26 )
    {
      sub_1C65C5C(Method_System_Array_Empty_int___);
      v26 = v25[7];
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C65C00(inited);
    if ( !*(_DWORD *)(v27 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v27);
    v28 = *(_QWORD *)(v25[7] + 16LL);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C65C00(inited);
    ServantIndividuality = **(System_Int32_array ***)(v28 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_41609392(
           v16,
           isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           initPos,
           targetType,
           v22);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_41609392(
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

  if ( QuestRestrictionInfo__IsRestriction_41608136(
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
    return QuestRestrictionInfo__IsRestrictionSlot_41608604(this, svtIndividuality, initPos, v11);
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
  __int64 v8; // x21
  _BOOL8 IsMyServantOrNpcRestriction_41628040; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v13; // w9
  QuestRestrictionInfo_SlotInfo_o *v14; // x8
  bool v15; // zf
  Il2CppObject *v16; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4BB58D9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&pos);
    sub_1C13D24(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__DisplayClass180_0__IsSelectableNormalSupport_b__0__, v6);
    sub_1C13D24(&QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo, v7);
    byte_4BB58D9 = 1;
  }
  v8 = sub_1C13F70(QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  *(_DWORD *)(v8 + 16) = pos;
  IsMyServantOrNpcRestriction_41628040 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41628040(this, pos, v11);
  if ( !IsMyServantOrNpcRestriction_41628040 )
  {
    LOBYTE(v16) = 0;
    return (char)v16;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v18 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v18,
      (Il2CppObject *)v8,
      Method_QuestRestrictionInfo___c__DisplayClass180_0__IsSelectableNormalSupport_b__0__,
      0LL);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v16 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v18,
              (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v16 )
        return (char)v16;
      v15 = LODWORD(v16[2].klass) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1C13F80(IsMyServantOrNpcRestriction_41628040, v10);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v13 = *(_DWORD *)(v8 + 16) - 1;
  if ( v13 >= slotInfos->max_length )
    sub_1C13F88(IsMyServantOrNpcRestriction_41628040, v10);
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
  void *IsMyServantOrNpcRestriction_41628040; // x0
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

  if ( (byte_4BB58D4 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, v7);
    byte_4BB58D4 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_41628040 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_41628040 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_41628040 + 23) + 156LL);
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
  IsMyServantOrNpcRestriction_41628040 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41628040(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_41628040 & 1) != 0 )
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
            sub_1C13F88(IsMyServantOrNpcRestriction_41628040, *(_QWORD *)&svtId);
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
    sub_1C13F80(IsMyServantOrNpcRestriction_41628040, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_41628040 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_41628040 )
    goto LABEL_44;
  v14 = *((_DWORD *)IsMyServantOrNpcRestriction_41628040 + 6);
  if ( v14 < 1 )
    return 1;
  v15 = 0;
  v16 = -v14;
  do
  {
    if ( !(v16 + v15) )
      goto LABEL_43;
    v17 = *((_DWORD *)IsMyServantOrNpcRestriction_41628040 + v15 + 8);
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
  if ( (byte_4BB58E8 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    byte_4BB58E8 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
      sub_1C13F88(this, *(_QWORD *)&pos);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1C13F80(this, *(_QWORD *)&pos);
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

  if ( (byte_4BB58F1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_int___, v10);
    sub_1C13D24(&Method_System_Linq_Enumerable_Intersect_int___, v11);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____get_Item__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BB58F1 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          sub_1C13F88(Instance, v18);
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
                                               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_int____get_Item__);
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
                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_int____get_Item__);
              v27 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v21,
                      (const MethodInfo_2FB37C8 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v27,
                           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v24->fields.rangeTypeList )
                goto LABEL_33;
              v28 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v24->fields.rangeTypeList,
                     v25,
                     (const MethodInfo_36126E4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v28,
                       (const MethodInfo_2F9A3DC *)Method_System_Linq_Enumerable_Any_int___) )
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
                       (const MethodInfo_36126E4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v28,
                        (const MethodInfo_2F9A3DC *)Method_System_Linq_Enumerable_Any_int___) )
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
      sub_1C13F80(Instance, v18);
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

  if ( (byte_4BB58F0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    byte_4BB58F0 = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1C13F80(Master_object, v6);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
LABEL_24:
      sub_1C13F88(Master_object, v6);
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
                                      (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v13) = targetVals->max_length;
    if ( (__int64)++v14 >= (int)v13 )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_41612184(
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
  const MethodInfo_323ABCC **v32; // x26
  const MethodInfo_2FA7350 **v33; // x24
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
  const MethodInfo_2FA7350 **v44; // x27
  Il2CppObject *v45; // x24
  BalanceConfig_c **v46; // x23
  Il2CppObject *v47; // x20
  const MethodInfo_323ABCC **v48; // x22
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

  if ( (byte_4BB58BE & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_1C13D24(&DataManager_TypeInfo, v15);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1C13D24(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v17);
    sub_1C13D24(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v18);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v19);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v20);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BB58BE = 1;
  }
  v69 = 0LL;
  entity = 0LL;
  v68 = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_71;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo
    || (Instance = (DataManager_o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0LL), ((unsigned __int8)Instance & 1) == 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !Master_object )
      goto LABEL_82;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v69,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_82:
    sub_1C13F80(Instance, v26);
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
  v32 = (const MethodInfo_323ABCC **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v33 = (const MethodInfo_2FA7350 **)&Method_System_Linq_Enumerable_Contains_int___;
  v34 = 0LL;
  v64 = this->fields.uniqueIndividualitys;
  v67 = this;
  while ( 1 )
  {
    if ( v34 >= (unsigned int)v30 )
LABEL_83:
      sub_1C13F88(Instance, v26);
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
                                      (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
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
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v71, 0LL);
          v53 = DataMasterBase_object__object__int___GetEntity(
                  v28,
                  v52,
                  (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                    (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_41613668(
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

  if ( (byte_4BB58BF & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v17);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___, v18);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v19);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1C13D24(&DataManager_TypeInfo, v21);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v23);
    sub_1C13D24(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v24);
    sub_1C13D24(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v25);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v26);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v27);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_4BB58BF = 1;
  }
  v63 = 0LL;
  entity = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo || !FollowerInfo__get_IsNpc(npcFollowerInfo, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
          (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = Master_object;
    if ( !Master_object )
      goto LABEL_75;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           Master_object,
           &v63,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_75:
    sub_1C13F80(Instance, v30);
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
        sub_1C13F88(Instance, v30);
      v37 = uniqueIndividualitys->m_Items[v36 + 1];
      if ( source )
      {
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             source,
                             v37,
                             (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
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
                       (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
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
                          (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
                    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v65, 0LL);
                    v50 = DataMasterBase_object__object__int___GetEntity(
                            v33,
                            v49,
                            (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                       (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  return 1;
                }
              }
              else
              {
                v42 = PartyOrganizationListViewItem__get_SvtId(v40, 0LL);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v42, 0LL);
                if ( DataMasterBase_object__object__int___TryGetEntity(
                       v33,
                       &v61,
                       v43,
                       (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
bool __fastcall QuestRestrictionInfo__IsUniqueServant_41611656(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  signed int v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4BB58BC & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4BB58BC = 1;
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
            sub_1C13F80(v7, *(_QWORD *)&svtId);
          if ( v6 >= deckSvtIdList->max_length )
            sub_1C13F88(v7, *(_QWORD *)&svtId);
          v9 = deckSvtIdList->m_Items[++v6];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_41611856(
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

  if ( (byte_4BB58BD & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4BB58BD = 1;
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
          sub_1C13F80(Member, *(_QWORD *)&svtId);
        v16 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v16, 0LL) == svtId )
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct FollowerInfo_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1

  if ( (byte_4BB58AB & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&FollowerInfo___TypeInfo, v3);
    sub_1C13D24(&int___TypeInfo, v4);
    byte_4BB58AB = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v6;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.deckSvtIdList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (struct FollowerInfo_array *)sub_1C13DCC(
                                       FollowerInfo___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, v20);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x28
  __int64 NpcFollowerServantId; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length; // x9
  struct FollowerInfo_array *v23; // x8
  struct FollowerInfo_array *v24; // x24
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x23
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v33; // x23
  struct System_Int32_array *v34; // x29
  __int64 v35; // x24
  __int64 v36; // x25
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v38; // x24
  __int64 v39; // x25
  struct System_Int32_array *deckDispLimitCountList; // x24
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4BB58A8 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, userDeckEntity);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcFollowerMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BB58A8 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v9 = 0LL;
    v10 = 32LL;
    v18 = (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL) - 1LL;
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
          sub_1C13CC8((PartyOrganizationUtility_o *)((char *)deckNpcInfoList + v10), 0LL, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( v18 != v9 )
      {
        v23 = this->fields.deckNpcInfoList;
        if ( v23 )
        {
          if ( (__int64)v9 < (int)v23->max_length )
          {
            NpcFollowerServantId = UserDeckEntity__GetNpcFollowerServantId(userDeckEntity, v9, 0LL);
            if ( NpcFollowerServantId >= 1 )
            {
              if ( !Master_object )
                goto LABEL_44;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_40593204(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                NpcFollowerServantId,
                                                0LL);
              if ( !NpcFollowerServantId )
                goto LABEL_44;
              v24 = this->fields.deckNpcInfoList;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetFollower(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                *(_QWORD *)(NpcFollowerServantId + 16),
                                                0LL);
              if ( !v24 )
                goto LABEL_44;
              v31 = NpcFollowerServantId;
              if ( NpcFollowerServantId )
              {
                NpcFollowerServantId = sub_1C13E60(NpcFollowerServantId, v24->obj.klass->_1.element_class);
                if ( !NpcFollowerServantId )
                {
                  v41 = sub_1C13FA4(0LL);
                  sub_1C13E4C(v41, 0LL);
                }
              }
              if ( v9 >= v24->max_length )
LABEL_43:
                sub_1C13F88(NpcFollowerServantId, v11);
              v24->m_Items[v9] = (FollowerInfo_o *)v31;
              sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v24 + v10), v31, v25, v26, v27, v28, v29, v30);
            }
          }
        }
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, v9, 0LL);
        if ( UserServant )
        {
          v33 = UserServant;
          v34 = this->fields.deckSvtIdList;
          v36 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v35 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v42.fields.currentCryptoKey = v36;
          *(_QWORD *)&v42.fields.fakeValue = v35;
          NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v42, 0LL);
          if ( !v34 )
LABEL_44:
            sub_1C13F80(NpcFollowerServantId, v11);
          if ( v9 >= v34->max_length )
            goto LABEL_43;
          v34->m_Items[v9 + 1] = NpcFollowerServantId;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v39 = *(_QWORD *)&v33->fields.limitCount.fields.currentCryptoKey;
            v38 = *(_QWORD *)&v33->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v43.fields.currentCryptoKey = v39;
            *(_QWORD *)&v43.fields.fakeValue = v38;
            NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v43, 0LL);
            if ( v9 >= deckLimitCountList->max_length )
              goto LABEL_43;
            deckLimitCountList->m_Items[v9 + 1] = NpcFollowerServantId;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            NpcFollowerServantId = UserServantEntity__getDispLimitCount(v33, 0, 0LL);
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


void __fastcall QuestRestrictionInfo__SetDeckInfo_41601428(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct FollowerInfo_array *v24; // x8
  struct FollowerInfo_array *v25; // x8
  int64_t NpcFollowerServantId; // x0
  int64_t v27; // x3
  NpcFollowerEntity_o *Entity_40593204; // x0
  struct FollowerInfo_array *v29; // x25
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x24
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v38; // x24
  struct System_Int32_array *v39; // x29
  __int64 v40; // x25
  __int64 v41; // x26
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v43; // x25
  __int64 v44; // x26
  struct System_Int32_array *deckDispLimitCountList; // x25
  __int64 v46; // x0
  NpcFollowerMaster_o *Master_object; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4BB58A9 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, eventDeckEntity);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcFollowerMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4BB58A9 = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v10 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
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
                     (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v24 = this->fields.deckNpcInfoList;
          if ( !v24 )
            goto LABEL_48;
          if ( v11 >= v24->max_length )
            goto LABEL_49;
          v24->m_Items[v11] = 0LL;
          sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v24 + v12), 0LL, v18, v19, v20, v21, v22, v23);
        }
      }
      if ( v14 != v11 )
      {
        v25 = this->fields.deckNpcInfoList;
        if ( v25 && (__int64)v11 < (int)v25->max_length )
        {
          if ( !v10 )
            goto LABEL_48;
          if ( !System_Collections_Generic_List_int___Contains(
                  v10,
                  v11,
                  (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v11, 0LL);
            if ( NpcFollowerServantId >= 1 )
            {
              v27 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_48;
              Entity_40593204 = NpcFollowerMaster__GetEntity_40593204(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v27,
                                  0LL);
              if ( Entity_40593204 )
              {
                v29 = this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_40593204->fields.id,
                                      0LL);
                if ( !v29 )
                  goto LABEL_48;
                v36 = Follower;
                if ( Follower )
                {
                  Follower = sub_1C13E60(Follower, v29->obj.klass->_1.element_class);
                  if ( !Follower )
                  {
                    v46 = sub_1C13FA4(0LL);
                    sub_1C13E4C(v46, 0LL);
                  }
                }
                if ( v11 >= v29->max_length )
                  goto LABEL_49;
                v29->m_Items[v11] = (FollowerInfo_o *)v36;
                sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v29 + v12), v36, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, v11, 0LL);
        if ( UserServant )
        {
          v38 = UserServant;
          v39 = this->fields.deckSvtIdList;
          v41 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v40 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = v41;
          *(_QWORD *)&v48.fields.fakeValue = v40;
          Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v48, 0LL);
          if ( !v39 )
LABEL_48:
            sub_1C13F80(Follower, v13);
          if ( v11 >= v39->max_length )
LABEL_49:
            sub_1C13F88(Follower, v13);
          v39->m_Items[v11 + 1] = Follower;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v44 = *(_QWORD *)&v38->fields.limitCount.fields.currentCryptoKey;
            v43 = *(_QWORD *)&v38->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v49.fields.currentCryptoKey = v44;
            *(_QWORD *)&v49.fields.fakeValue = v43;
            Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v49, 0LL);
            if ( v11 >= deckLimitCountList->max_length )
              goto LABEL_49;
            deckLimitCountList->m_Items[v11 + 1] = Follower;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            Follower = UserServantEntity__getDispLimitCount(v38, 0, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo__SetDeckInfo_41602780(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  unsigned __int64 v12; // x21
  unsigned __int64 v13; // x27
  __int64 i; // x28
  __int64 Member; // x0
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *v19; // x29
  PartyOrganizationListViewItem_o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  struct FollowerInfo_array *v24; // x8
  FollowerInfo_o *followerInfo; // x0
  struct FollowerInfo_array *v26; // x23
  int64_t v27; // x22
  __int64 v28; // x0

  if ( (byte_4BB58AA & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, partyItem);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4BB58AA = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v12 = 0LL;
    v13 = (unsigned int)num;
    for ( i = 32LL; ; i += 8LL )
    {
      Member = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v12 >= *(int *)(*(_QWORD *)(Member + 184) + 156LL) )
        break;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length = deckNpcInfoList->max_length;
        if ( (__int64)v12 < (int)max_length )
        {
          if ( v12 >= max_length )
            goto LABEL_40;
          deckNpcInfoList->m_Items[v12] = 0LL;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)((char *)deckNpcInfoList + i),
            0LL,
            *(int64_t *)&num,
            (int32_t)method,
            v4,
            v5,
            v6,
            v7);
        }
      }
      if ( v13 == v12 )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_39;
        if ( deckSvtIdList->max_length <= v13 )
          goto LABEL_40;
        deckSvtIdList->m_Items[v13 + 1] = 0;
      }
      else
      {
        if ( !partyItem )
          goto LABEL_39;
        Member = (__int64)PartyListViewItem__GetMember(partyItem, v12, 0LL);
        if ( !Member )
          goto LABEL_39;
        v19 = this->fields.deckSvtIdList;
        v20 = (PartyOrganizationListViewItem_o *)Member;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(SvtId, 0LL);
        if ( !v19 )
LABEL_39:
          sub_1C13F80(Member, partyItem);
        if ( v12 >= v19->max_length )
          goto LABEL_40;
        v19->m_Items[v12 + 1] = Member;
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( deckLimitCountList )
        {
          if ( v12 >= deckLimitCountList->max_length )
            goto LABEL_40;
          deckLimitCountList->m_Items[v12 + 1] = v20->fields.svtLimitCount;
        }
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( deckDispLimitCountList )
        {
          Member = PartyOrganizationListViewItem__GetDispImageLimitCount(v20, 0LL);
          if ( v12 >= deckDispLimitCountList->max_length )
            goto LABEL_40;
          deckDispLimitCountList->m_Items[v12 + 1] = Member;
        }
        v24 = this->fields.deckNpcInfoList;
        if ( v24 )
        {
          if ( (__int64)v12 < (int)v24->max_length )
          {
            followerInfo = v20->fields.followerInfo;
            if ( followerInfo )
            {
              Member = FollowerInfo__get_IsNpc(followerInfo, 0LL);
              if ( (Member & 1) != 0 )
              {
                v26 = this->fields.deckNpcInfoList;
                if ( !v26 )
                  goto LABEL_39;
                v27 = (int64_t)v20->fields.followerInfo;
                if ( v27 )
                {
                  Member = sub_1C13E60(v27, v26->obj.klass->_1.element_class);
                  if ( !Member )
                  {
                    v28 = sub_1C13FA4(0LL);
                    sub_1C13E4C(v28, 0LL);
                  }
                }
                if ( v12 >= v26->max_length )
LABEL_40:
                  sub_1C13F88(Member, partyItem);
                v26->m_Items[v12] = (FollowerInfo_o *)v27;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)((char *)v26 + i),
                  v27,
                  *(int64_t *)&num,
                  (int32_t)method,
                  v4,
                  v5,
                  v6,
                  v7);
              }
            }
          }
        }
      }
      ++v12;
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
  int64_t v13; // x22
  struct FollowerInfo_array *deckNpcInfoList; // x25
  int v15; // w26
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  char *v22; // x0
  int v23; // w9
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x10
  __int64 size; // x11
  __int64 v28; // x0

  if ( (byte_4BB58AC & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_NpcFollowerMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4BB58AC = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0LL)) == 0LL )
    {
LABEL_25:
      sub_1C13F80(Master_object, v9);
    }
    max_length = Master_object->max_length;
    v11 = Master_object;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( v12 < max_length )
      {
        v13 = (int64_t)v11->m_Items[v12];
        if ( !v13 )
          goto LABEL_25;
        if ( *(_BYTE *)(v13 + 105) )
        {
          deckNpcInfoList = this->fields.deckNpcInfoList;
          if ( !deckNpcInfoList )
            goto LABEL_25;
          v15 = *(_DWORD *)(v13 + 88);
          Master_object = (FollowerInfo_array *)sub_1C13E60(v13, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v28 = sub_1C13FA4(0LL);
            sub_1C13E4C(v28, 0LL);
          }
          if ( v15 - 1 >= deckNpcInfoList->max_length )
            break;
          v22 = (char *)deckNpcInfoList + 8 * v15 - 8;
          *((_QWORD *)v22 + 4) = v13;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 32), v13, v16, v17, v18, v19, v20, v21);
          if ( !v7 )
            goto LABEL_25;
          v23 = *(_DWORD *)(v13 + 88);
          items = v7->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v7->fields._size;
          v9 = (unsigned int)(v23 - 1);
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              v9,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
      sub_1C13F88(Master_object, v9);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  struct System_String_o *v78; // x20
  void *v79; // x1
  QuestRestrictionInfo_o *v80; // x29
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  PartyOrganizationUtility_o *p_supportPositionList; // x24
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v149; // x20
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  System_Collections_Generic_List_int__o *v156; // x20
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  System_Collections_Generic_List_object__o *v187; // x20
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  System_Collections_Generic_List_object__o *v194; // x20
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  System_Collections_Generic_List_object__o *v201; // x20
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  System_Collections_Generic_List_object__o *v208; // x20
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  System_Collections_Generic_List_object__o *v215; // x20
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  System_Collections_Generic_List_object__o *v222; // x20
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7
  System_Collections_Generic_List_object__o *v235; // x20
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  System_Collections_Generic_Dictionary_K__V__o **p_dialogMessageInfoDictionary; // x26
  int64_t v249; // x2
  int32_t v250; // w3
  System_String_o *v251; // x4
  BattleSetupInfo_o *v252; // x5
  FollowerInfo_o *v253; // x6
  PartyListViewItem_o *v254; // x7
  int64_t Master_object; // x0
  int64_t monitor_low; // x1
  const MethodInfo *v257; // x1
  System_Collections_Generic_Dictionary_int__object__o *v258; // x20
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  System_Collections_Generic_Dictionary_int__object__o *v265; // x20
  int64_t v266; // x2
  int32_t v267; // w3
  System_String_o *v268; // x4
  BattleSetupInfo_o *v269; // x5
  FollowerInfo_o *v270; // x6
  PartyListViewItem_o *v271; // x7
  System_Collections_Generic_Dictionary_int__object__o *v272; // x20
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  System_Collections_Generic_List_object__o *v279; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v282; // x0
  int64_t v283; // x0
  int64_t v284; // x2
  int32_t v285; // w3
  System_String_o *v286; // x4
  BattleSetupInfo_o *v287; // x5
  FollowerInfo_o *v288; // x6
  PartyListViewItem_o *v289; // x7
  RestrictionBaseEntity_o *v290; // x8
  Il2CppObject *v291; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v301; // w25
  RestrictionWholeEntity_o *v302; // x21
  System_Boolean_array *SetPossiblePosition; // x0
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  Il2CppObject *v310; // x23
  int64_t v311; // x0
  int64_t v312; // x2
  int32_t v313; // w3
  System_String_o *v314; // x4
  BattleSetupInfo_o *v315; // x5
  FollowerInfo_o *v316; // x6
  PartyListViewItem_o *v317; // x7
  System_Collections_Generic_List_object__o *v318; // x23
  int64_t v319; // x2
  int32_t v320; // w3
  System_String_o *v321; // x4
  BattleSetupInfo_o *v322; // x5
  FollowerInfo_o *v323; // x6
  PartyListViewItem_o *v324; // x7
  struct System_Object_array *v325; // x8
  _QWORD *v326; // x9
  __int64 v327; // x10
  int64_t v328; // x1
  Il2CppClass **v329; // x0
  System_Collections_Generic_List_object__o *v330; // x23
  int64_t v331; // x2
  int32_t v332; // w3
  System_String_o *v333; // x4
  BattleSetupInfo_o *v334; // x5
  FollowerInfo_o *v335; // x6
  PartyListViewItem_o *v336; // x7
  struct System_Object_array *items; // x8
  _QWORD *v338; // x9
  __int64 size; // x10
  int64_t v340; // x1
  Il2CppClass **v341; // x0
  System_Collections_Generic_List_object__o *v342; // x23
  int64_t v343; // x2
  int32_t v344; // w3
  System_String_o *v345; // x4
  BattleSetupInfo_o *v346; // x5
  FollowerInfo_o *v347; // x6
  PartyListViewItem_o *v348; // x7
  struct System_Object_array *v349; // x8
  _QWORD *v350; // x9
  __int64 v351; // x10
  int64_t v352; // x1
  Il2CppClass **v353; // x0
  Il2CppObject *v354; // x23
  int64_t v355; // x0
  int64_t v356; // x2
  int32_t v357; // w3
  System_String_o *v358; // x4
  BattleSetupInfo_o *v359; // x5
  FollowerInfo_o *v360; // x6
  PartyListViewItem_o *v361; // x7
  BalanceConfig_c *v362; // x0
  int64_t v363; // x0
  int64_t v364; // x2
  int32_t v365; // w3
  System_String_o *v366; // x4
  BattleSetupInfo_o *v367; // x5
  FollowerInfo_o *v368; // x6
  PartyListViewItem_o *v369; // x7
  int64_t v370; // x0
  int64_t v371; // x2
  int32_t v372; // w3
  System_String_o *v373; // x4
  BattleSetupInfo_o *v374; // x5
  FollowerInfo_o *v375; // x6
  PartyListViewItem_o *v376; // x7
  int64_t v377; // x0
  int64_t v378; // x2
  int32_t v379; // w3
  System_String_o *v380; // x4
  BattleSetupInfo_o *v381; // x5
  FollowerInfo_o *v382; // x6
  PartyListViewItem_o *v383; // x7
  int64_t v384; // x0
  int64_t v385; // x2
  int32_t v386; // w3
  System_String_o *v387; // x4
  BattleSetupInfo_o *v388; // x5
  FollowerInfo_o *v389; // x6
  PartyListViewItem_o *v390; // x7
  System_Boolean_array *v391; // x0
  int64_t v392; // x2
  int32_t v393; // w3
  System_String_o *v394; // x4
  BattleSetupInfo_o *v395; // x5
  FollowerInfo_o *v396; // x6
  PartyListViewItem_o *v397; // x7
  Il2CppObject *v398; // x23
  int64_t v399; // x0
  int64_t v400; // x2
  int32_t v401; // w3
  System_String_o *v402; // x4
  BattleSetupInfo_o *v403; // x5
  FollowerInfo_o *v404; // x6
  PartyListViewItem_o *v405; // x7
  System_Collections_Generic_List_object__o *v406; // x23
  int64_t v407; // x2
  int32_t v408; // w3
  System_String_o *v409; // x4
  BattleSetupInfo_o *v410; // x5
  FollowerInfo_o *v411; // x6
  PartyListViewItem_o *v412; // x7
  struct System_Object_array *v413; // x8
  _QWORD *v414; // x9
  __int64 v415; // x10
  int64_t v416; // x1
  Il2CppClass **v417; // x0
  Il2CppObject *v418; // x23
  int64_t v419; // x0
  int64_t v420; // x2
  int32_t v421; // w3
  System_String_o *v422; // x4
  BattleSetupInfo_o *v423; // x5
  FollowerInfo_o *v424; // x6
  PartyListViewItem_o *v425; // x7
  System_Collections_Generic_List_object__o *v426; // x23
  int64_t v427; // x2
  int32_t v428; // w3
  System_String_o *v429; // x4
  BattleSetupInfo_o *v430; // x5
  FollowerInfo_o *v431; // x6
  PartyListViewItem_o *v432; // x7
  struct System_Object_array *v433; // x8
  _QWORD *v434; // x9
  __int64 v435; // x10
  int64_t v436; // x1
  Il2CppClass **v437; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v439; // x23
  int64_t v440; // x2
  int32_t v441; // w3
  System_String_o *v442; // x4
  BattleSetupInfo_o *v443; // x5
  FollowerInfo_o *v444; // x6
  PartyListViewItem_o *v445; // x7
  struct System_Object_array *v446; // x8
  _QWORD *v447; // x9
  __int64 v448; // x10
  int64_t v449; // x1
  Il2CppClass **v450; // x0
  System_Collections_Generic_List_object__o *v451; // x23
  int64_t v452; // x2
  int32_t v453; // w3
  System_String_o *v454; // x4
  BattleSetupInfo_o *v455; // x5
  FollowerInfo_o *v456; // x6
  PartyListViewItem_o *v457; // x7
  struct System_Object_array *v458; // x8
  _QWORD *v459; // x9
  __int64 v460; // x10
  int64_t v461; // x1
  Il2CppClass **v462; // x0
  int32_t restrictionMessageId; // w2
  int64_t v464; // x2
  int32_t v465; // w3
  System_String_o *v466; // x4
  BattleSetupInfo_o *v467; // x5
  FollowerInfo_o *v468; // x6
  PartyListViewItem_o *v469; // x7
  struct System_Object_array *v470; // x8
  _QWORD *v471; // x9
  __int64 v472; // x10
  Il2CppClass **v473; // x0
  __int64 v474; // x23
  QuestRestrictionInfo_o *v475; // x28
  char isAllOutBattle; // w8
  int64_t v477; // x21
  int64_t v478; // x2
  int32_t v479; // w3
  System_String_o *v480; // x4
  BattleSetupInfo_o *v481; // x5
  FollowerInfo_o *v482; // x6
  PartyListViewItem_o *v483; // x7
  BalanceConfig_c *v484; // x0
  int64_t v485; // x0
  int64_t v486; // x2
  int32_t v487; // w3
  System_String_o *v488; // x4
  BattleSetupInfo_o *v489; // x5
  FollowerInfo_o *v490; // x6
  PartyListViewItem_o *v491; // x7
  int32_t v492; // w21
  int v493; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v494; // x8
  System_Object_array *v495; // x22
  System_Collections_Generic_List_int__o *v496; // x24
  int v497; // w8
  __int64 v498; // x19
  Il2CppObject *v499; // x23
  struct System_Int32_array *v500; // x8
  _QWORD *v501; // x9
  __int64 v502; // x10
  int32_t monitor_high; // w2
  int64_t v504; // x2
  int32_t v505; // w3
  System_String_o *v506; // x4
  BattleSetupInfo_o *v507; // x5
  FollowerInfo_o *v508; // x6
  PartyListViewItem_o *v509; // x7
  struct System_Object_array *v510; // x8
  _QWORD *v511; // x9
  __int64 v512; // x10
  Il2CppClass **v513; // x0
  __int64 v514; // x23
  System_Object_array *v515; // x24
  PartyOrganizationUtility_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v517; // x23
  const MethodInfo *v518; // x1
  int64_t v519; // x2
  int32_t v520; // w3
  System_String_o *v521; // x4
  BattleSetupInfo_o *v522; // x5
  FollowerInfo_o *v523; // x6
  PartyListViewItem_o *v524; // x7
  int v525; // w19
  void **v526; // x0
  int servantNumMax; // w8
  PartyOrganizationUtility_c *v528; // x8
  int32_t v529; // w24
  __int64 v530; // x8
  QuestRestrictionInfo___c_c *v531; // x0
  System_Func_object__bool__o *_9__83_0; // x23
  Il2CppObject *v533; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v535; // x2
  int32_t v536; // w3
  System_String_o *v537; // x4
  BattleSetupInfo_o *v538; // x5
  FollowerInfo_o *v539; // x6
  PartyListViewItem_o *v540; // x7
  _BOOL4 v541; // w0
  QuestRestrictionInfo___c_c *v542; // x8
  _BOOL4 v543; // w23
  System_Func_object__bool__o *_9__83_1; // x25
  Il2CppObject *v545; // x28
  struct QuestRestrictionInfo___c_StaticFields *v546; // x0
  int64_t v547; // x2
  int32_t v548; // w3
  System_String_o *v549; // x4
  BattleSetupInfo_o *v550; // x5
  FollowerInfo_o *v551; // x6
  PartyListViewItem_o *v552; // x7
  _BOOL4 v553; // w0
  QuestRestrictionInfo___c_c *v554; // x8
  _BOOL4 v555; // w25
  System_Func_object__bool__o *_9__83_2; // x28
  Il2CppObject *v557; // x27
  struct QuestRestrictionInfo___c_StaticFields *v558; // x0
  int64_t v559; // x2
  int32_t v560; // w3
  System_String_o *v561; // x4
  BattleSetupInfo_o *v562; // x5
  FollowerInfo_o *v563; // x6
  PartyListViewItem_o *v564; // x7
  PartyOrganizationUtility_c *v565; // x8
  __int64 v566; // x8
  PartyOrganizationUtility_c *v567; // x8
  __int64 v568; // x8
  PartyOrganizationUtility_c *v569; // x8
  __int64 v570; // x8
  int v571; // w8
  unsigned int v572; // w27
  Il2CppObject *v573; // x25
  Il2CppObject *v574; // x8
  PartyOrganizationUtility_c *v575; // x8
  __int64 v576; // x8
  System_Collections_Generic_List_object__o *v577; // x23
  int64_t v578; // x2
  int32_t v579; // w3
  System_String_o *v580; // x4
  BattleSetupInfo_o *v581; // x5
  FollowerInfo_o *v582; // x6
  PartyListViewItem_o *v583; // x7
  struct System_Object_array *v584; // x8
  _QWORD *v585; // x9
  __int64 v586; // x10
  int64_t v587; // x1
  Il2CppClass **v588; // x0
  PartyOrganizationUtility_c *v589; // x8
  __int64 v590; // x8
  struct System_Int32_array *v591; // x8
  _QWORD *v592; // x9
  __int64 v593; // x10
  System_String_o *monitor; // x23
  PartyOrganizationUtility_c *v595; // x8
  __int64 v596; // x8
  int64_t v597; // x2
  int32_t v598; // w3
  System_String_o *v599; // x4
  BattleSetupInfo_o *v600; // x5
  FollowerInfo_o *v601; // x6
  PartyListViewItem_o *v602; // x7
  PartyOrganizationUtility_c *v603; // x8
  __int64 v604; // x8
  System_String_o **v605; // x25
  PartyOrganizationUtility_c *v606; // x8
  QuestRestrictionInfo___c_c *v607; // x0
  __int64 v608; // x27
  System_Func_object__bool__o *_9__83_3; // x23
  Il2CppObject *v610; // x25
  struct QuestRestrictionInfo___c_StaticFields *v611; // x0
  int64_t v612; // x2
  int32_t v613; // w3
  System_String_o *v614; // x4
  BattleSetupInfo_o *v615; // x5
  FollowerInfo_o *v616; // x6
  PartyListViewItem_o *v617; // x7
  PartyOrganizationUtility_c *v618; // x8
  __int64 v619; // x8
  PartyOrganizationUtility_c *v620; // x8
  __int64 v621; // x8
  PartyOrganizationUtility_c *v622; // x8
  __int64 v623; // x8
  System_Object_array *v624; // x0
  int64_t v625; // x2
  int32_t v626; // w3
  System_String_o *v627; // x4
  BattleSetupInfo_o *v628; // x5
  FollowerInfo_o *v629; // x6
  PartyListViewItem_o *v630; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v632; // w10
  int v633; // w11
  int v634; // w9
  int v635; // w20
  int32_t v636; // w19
  QuestRestrictionInfo_SlotInfo_o *v637; // x13
  int v638; // w21
  int v639; // w22
  __int64 v640; // x8
  bool HasFlag_40637728; // w0
  bool v642; // w0
  Il2CppObject *Value_int__object; // x0
  int v644; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v646; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v647; // x8
  __int64 v648; // x8
  Il2CppObject *v649; // x20
  int64_t v650; // x0
  int64_t v651; // x2
  int32_t v652; // w3
  System_String_o *v653; // x4
  BattleSetupInfo_o *v654; // x5
  FollowerInfo_o *v655; // x6
  PartyListViewItem_o *v656; // x7
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v658; // x0
  __int64 v659; // x1
  int v660; // w9
  int v661; // w10
  __int64 v662; // x11
  System_Text_StringBuilder_o *v663; // x20
  System_Text_StringBuilder_o *v664; // x21
  struct RestrictionWholeEntity_array *v665; // x19
  int v666; // w8
  unsigned int v667; // w22
  RestrictionWholeEntity_o *v668; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v671; // w25
  _BOOL4 v672; // w8
  int64_t v673; // x0
  int64_t v674; // x2
  int32_t v675; // w3
  System_String_o *v676; // x4
  BattleSetupInfo_o *v677; // x5
  FollowerInfo_o *v678; // x6
  PartyListViewItem_o *v679; // x7
  System_String_o *v680; // x19
  System_String_o *v681; // x0
  System_String_o *v682; // x0
  int64_t v683; // x2
  int32_t v684; // w3
  System_String_o *v685; // x4
  BattleSetupInfo_o *v686; // x5
  FollowerInfo_o *v687; // x6
  PartyListViewItem_o *v688; // x7
  __int64 v689; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+8h] [xbp-198h]
  PartyOrganizationUtility_o *p_svtIdForceBattleList; // [xsp+10h] [xbp-190h]
  PartyOrganizationUtility_o *p_restrictionMessage; // [xsp+18h] [xbp-188h]
  PartyOrganizationUtility_o *p_confirmRestrictionMessage; // [xsp+20h] [xbp-180h]
  struct RestrictionWholeEntity_array *v694; // [xsp+28h] [xbp-178h]
  PartyOrganizationUtility_o *p_fixedSupportIndividualities; // [xsp+30h] [xbp-170h]
  PartyOrganizationUtility_o *p_fixedNpcIndividualities; // [xsp+38h] [xbp-168h]
  PartyOrganizationUtility_o *p_needStartingIndividualities; // [xsp+40h] [xbp-160h]
  PartyOrganizationUtility_o *p_uniqueIndividualitys; // [xsp+48h] [xbp-158h]
  System_Collections_Generic_List_object__o **p_fixedMyServantIndividualitiesList; // [xsp+50h] [xbp-150h]
  System_Collections_Generic_List_object__o **p_fixedIndividualitiesList; // [xsp+58h] [xbp-148h]
  System_Collections_Generic_List_object__o **p_needStartingIndividualitiesList; // [xsp+60h] [xbp-140h]
  System_Collections_Generic_List_object__o **p_fixedNpcIndividualitiesList; // [xsp+68h] [xbp-138h]
  System_Collections_Generic_List_object__o **p_fixedSupportIndividualitiesList; // [xsp+70h] [xbp-130h]
  PartyOrganizationUtility_o *p_deckDispLimitCountList; // [xsp+78h] [xbp-128h]
  PartyOrganizationUtility_o *p_deckLimitCountList; // [xsp+80h] [xbp-120h]
  struct FollowerInfo_array **p_deckNpcInfoList; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_object__o **p_myServantPositionsList; // [xsp+90h] [xbp-110h]
  System_Collections_Generic_List_object__o **p_positionsList; // [xsp+A0h] [xbp-100h]
  System_Collections_Generic_Dictionary_K__V__o **v710; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v714; // [xsp+C8h] [xbp-D8h]
  PartyOrganizationUtility_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v716; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  PartyOrganizationUtility_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v720; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v721; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v724; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v725; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4BB58A6 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___, v9);
    sub_1C13D24(&Method_BasicHelper_Any_RestrictionSlotEntity___, v10);
    sub_1C13D24(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____, v11);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcFollowerMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestGroupMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestMaster___, v14);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v15);
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v16);
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionMessageMaster___, v17);
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___, v18);
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionSlotMaster___, v19);
    sub_1C13D24(&Method_DataManager_GetMaster_RestrictionWholeMaster___, v20);
    sub_1C13D24(&DataManager_TypeInfo, v21);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v22);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v23);
    sub_1C13D24(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v24);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__, v26);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__, v27);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__, v28);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__, v29);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__, v30);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__, v31);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__, v32);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__, v33);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v34);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__, v35);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v36);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v37);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v38);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__,
      v39);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__,
      v40);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__,
      v41);
    sub_1C13D24(&FollowerInfo___TypeInfo, v42);
    sub_1C13D24(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo, v43);
    sub_1C13D24(&System_Func_RestrictionSlotEntity__bool__TypeInfo, v44);
    sub_1C13D24(&int___TypeInfo, v45);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v46);
    sub_1C13D24(&Method_System_Collections_Generic_List_bool____Add__, v47);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__, v48);
    sub_1C13D24(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__, v49);
    sub_1C13D24(&Method_System_Collections_Generic_List_int____Add__, v50);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v51);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__, v52);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__, v53);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v54);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v55);
    sub_1C13D24(&Method_System_Collections_Generic_List_bool_____ctor__, v56);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__, v57);
    sub_1C13D24(&Method_System_Collections_Generic_List_int_____ctor__, v58);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v59);
    sub_1C13D24(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo, v60);
    sub_1C13D24(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v61);
    sub_1C13D24(&System_Collections_Generic_List_bool____TypeInfo, v62);
    sub_1C13D24(&System_Collections_Generic_List_int____TypeInfo, v63);
    sub_1C13D24(&LocalizationManager_TypeInfo, v64);
    sub_1C13D24(&QuestRestrictionInfo_SlotInfo___TypeInfo, v65);
    sub_1C13D24(&QuestRestrictionInfo_SlotInfo_TypeInfo, v66);
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, v67);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__Setup_b__83_0__, v68);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__Setup_b__83_1__, v69);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__Setup_b__83_2__, v70);
    sub_1C13D24(&Method_QuestRestrictionInfo___c__Setup_b__83_3__, v71);
    sub_1C13D24(&QuestRestrictionInfo___c_TypeInfo, v72);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__,
      v73);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v74);
    sub_1C13D24(&StringLiteral_10500/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/, v75);
    sub_1C13D24(&StringLiteral_10467/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, v76);
    sub_1C13D24(&StringLiteral_1/*""*/, v77);
    byte_4BB58A6 = 1;
  }
  v724 = 0LL;
  v725 = 0LL;
  item = 0LL;
  entity = 0LL;
  memset(&v721, 0, sizeof(v721));
  this->fields.isRestriction = 0;
  v78 = (struct System_String_o *)StringLiteral_1/*""*/;
  v79 = StringLiteral_1/*""*/;
  v80 = this;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (PartyOrganizationUtility_o *)&this->fields.restrictionMessage;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.restrictionMessage,
    (int64_t)v79,
    *(int64_t *)&questId,
    questPhase,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v78;
  p_confirmRestrictionMessage = (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage,
    (int64_t)v78,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.supportOnlyRestrictionEntity,
    0LL,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.uniqueSvtRestrictionEntity, 0LL, v93, v94, v95, v96, v97, v98);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.deckSvtIdList, 0LL, v99, v100, v101, v102, v103, v104);
  this->fields.deckNpcInfoList = 0LL;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList, 0LL, v105, v106, v107, v108, v109, v110);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0LL,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (PartyOrganizationUtility_o *)&this->fields.supportPositionList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.supportPositionList, 0LL, v118, v119, v120, v121, v122, v123);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0LL,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.servantNumRestrictionEntity,
    0LL,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.myServantNumRestrictionEntity,
    0LL,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  p_svtIdForceBattleList = (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList, 0LL, v142, v143, v144, v145, v146, v147);
  this->fields.isFatigure = 0;
  p_eventDeckNum = &this->fields.eventDeckNum;
  v80->fields.eventDeckNum = 0;
  *(int32_t *)((char *)p_eventDeckNum + 3) = 0;
  v149 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v149,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v80->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v149;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.myServantOrNpcRestrictionEntityList,
    (int64_t)v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v156 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v156,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  v80->fields.specifiedPositionList = v156;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.specifiedPositionList,
    (int64_t)v156,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  v80->fields.isNotTransitionSupportList = 0;
  v80->fields.supportInitIndex = 0;
  v80->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.fixedServantPositionRestrictionEntity,
    0LL,
    v163,
    v164,
    v165,
    v166,
    v167,
    v168);
  v80->fields.uniqueIndividualityEntity = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.uniqueIndividualityEntity,
    0LL,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174);
  v80->fields.isAllOutBattle = 0;
  v80->fields.isDataLostBattle = 0;
  v80->fields.allOutBattleGroupNo = -1;
  v80->fields.dataLostBattleId = -1;
  v80->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = (PartyOrganizationUtility_o *)&v80->fields.deckLimitCountList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v80->fields.deckLimitCountList, 0LL, v175, v176, v177, v178, v179, v180);
  v80->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = (PartyOrganizationUtility_o *)&v80->fields.deckDispLimitCountList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.deckDispLimitCountList,
    0LL,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  v80->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&v80->fields.isUniqueServant = 0;
  v187 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v187,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v80->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v187;
  p_positionsList = (System_Collections_Generic_List_object__o **)&v80->fields.positionsList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.positionsList,
    (int64_t)v187,
    v188,
    v189,
    v190,
    v191,
    v192,
    v193);
  v194 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v194,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_int_____ctor__);
  v80->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v194;
  p_fixedIndividualitiesList = (System_Collections_Generic_List_object__o **)&v80->fields.fixedIndividualitiesList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.fixedIndividualitiesList,
    (int64_t)v194,
    v195,
    v196,
    v197,
    v198,
    v199,
    v200);
  v80->fields.isFixedMyServantPosition = 0;
  v201 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v201,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v80->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v201;
  p_myServantPositionsList = (System_Collections_Generic_List_object__o **)&v80->fields.myServantPositionsList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.myServantPositionsList,
    (int64_t)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  v208 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v208,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_int_____ctor__);
  v80->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v208;
  p_fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o **)&v80->fields.fixedMyServantIndividualitiesList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.fixedMyServantIndividualitiesList,
    (int64_t)v208,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214);
  v80->fields.isFixedSupportPosition = 0;
  v215 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v215,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_int_____ctor__);
  v80->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v215;
  p_fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o **)&v80->fields.fixedSupportIndividualitiesList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.fixedSupportIndividualitiesList,
    (int64_t)v215,
    v216,
    v217,
    v218,
    v219,
    v220,
    v221);
  v80->fields.isFixedNpcPosition = 0;
  v222 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v222,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_int_____ctor__);
  v80->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v222;
  p_fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o **)&v80->fields.fixedNpcIndividualitiesList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.fixedNpcIndividualitiesList,
    (int64_t)v222,
    v223,
    v224,
    v225,
    v226,
    v227,
    v228);
  v80->fields.npcPositionList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v80->fields.npcPositionList, 0LL, v229, v230, v231, v232, v233, v234);
  v235 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v235,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_int_____ctor__);
  v80->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v235;
  p_needStartingIndividualitiesList = (System_Collections_Generic_List_object__o **)&v80->fields.needStartingIndividualitiesList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.needStartingIndividualitiesList,
    (int64_t)v235,
    v236,
    v237,
    v238,
    v239,
    v240,
    v241);
  v80->fields.isNeedStarting = 0;
  v80->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&v80->fields.isMyServantOrNpc = 0;
  v80->fields.slotInfos = 0LL;
  p_fields = (PartyOrganizationUtility_o *)&v80->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v80->fields, 0LL, v242, v243, v244, v245, v246, v247);
  v80->fields.dialogMessageInfoDictionary = 0LL;
  p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v80->fields.dialogMessageInfoDictionary;
  v714 = v80;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v80->fields.dialogMessageInfoDictionary,
    0LL,
    v249,
    v250,
    v251,
    v252,
    v253,
    v254);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_385;
  p_restrictionBaseEntity = &v80->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &v80->fields.restrictionBaseEntity,
         v80->fields.questId,
         v80->fields.questPhase,
         0LL) )
  {
    v80->fields.isRestriction = 1;
    v258 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v258,
      (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    v80->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v258;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v80->fields.restrictionSlotDictionary;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v80->fields.restrictionSlotDictionary,
      (int64_t)v258,
      v259,
      v260,
      v261,
      v262,
      v263,
      v264);
    v265 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v265,
      (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    v80->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v265;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v80->fields.restrictionSlotDetailDictionary,
      (int64_t)v265,
      v266,
      v267,
      v268,
      v269,
      v270,
      v271);
    v272 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v272,
      (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    v80->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v272;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v80->fields.dialogMessageInfoDictionary,
      (int64_t)v272,
      v273,
      v274,
      v275,
      v276,
      v277,
      v278);
    v279 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v279,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (int64_t)v714->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v714->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_385;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2LL, 0LL);
    restrictionBaseEntity = v714->fields.restrictionBaseEntity;
    v714->fields.isNotTransitionSupportList = Master_object & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_385;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4LL, 0LL) )
    {
      Master_object = (int64_t)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_385;
      *p_eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0LL);
    }
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16LL, 0LL);
    v714->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v282 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v282 = BalanceConfig_TypeInfo;
      }
      v283 = sub_1C13DCC(int___TypeInfo, (unsigned int)v282->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (PartyOrganizationUtility_c *)v283;
      sub_1C13CC8(p_deckSvtIdList, v283, v284, v285, v286, v287, v288, v289);
    }
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32LL, 0LL);
    v290 = v714->fields.restrictionBaseEntity;
    v714->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v290 )
      goto LABEL_385;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v290,
      &v714->fields.overwriteLimitCountSvtIds,
      &v714->fields.overwriteLimitCounts,
      &v714->fields.overwriteLimitCountIconIds,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v291 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    if ( !Master_object )
      goto LABEL_385;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0LL);
    v714->fields.restrictionWholeEntities = Entities;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v714->fields.restrictionWholeEntities,
      (int64_t)Entities,
      v293,
      v294,
      v295,
      v296,
      v297,
      v298);
    restrictionWholeEntities = v714->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v714->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_385;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v301 = 0;
      p_needStartingIndividualities = (PartyOrganizationUtility_o *)&v714->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (PartyOrganizationUtility_o *)&v714->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (PartyOrganizationUtility_o *)&v714->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (PartyOrganizationUtility_o *)&v714->fields.fixedNpcIndividualities;
      v694 = v714->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v301 >= max_length )
          goto LABEL_386;
        v302 = restrictionWholeEntities->m_Items[v301];
        if ( v302 )
        {
          switch ( v302->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_385;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0LL);
              v714->fields.allOutBattleGroupNo = Master_object;
              v714->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v302->fields.targetVals,
                                0LL);
              v714->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v330 = *p_positionsList;
              Master_object = (int64_t)RestrictionWholeEntity__GetSetPossiblePosition(v302, 0LL);
              if ( !v330 )
                goto LABEL_385;
              items = v330->fields._items;
              v338 = Method_System_Collections_Generic_List_bool____Add__;
              ++v330->fields._version;
              if ( !items )
                goto LABEL_385;
              size = v330->fields._size;
              v340 = Master_object;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v330,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v338[4] + 192LL) + 112LL));
              }
              else
              {
                v341 = &items->obj.klass + size;
                v330->fields._size = size + 1;
                v341[4] = (Il2CppClass *)v340;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v341 + 4), v340, v331, v332, v333, v334, v335, v336);
              }
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v439 = *p_fixedIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v439 )
                goto LABEL_385;
              Master_object = sub_1C13E60(Master_object, int___TypeInfo);
              v446 = v439->fields._items;
              v447 = Method_System_Collections_Generic_List_int____Add__;
              ++v439->fields._version;
              if ( !v446 )
                goto LABEL_385;
              v448 = v439->fields._size;
              v449 = Master_object;
              if ( (unsigned int)v448 >= v446->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v439,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v447[4] + 192LL) + 112LL));
              }
              else
              {
                v450 = &v446->obj.klass + v448;
                v439->fields._size = v448 + 1;
                v450[4] = (Il2CppClass *)v449;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v450 + 4), v449, v440, v441, v442, v443, v444, v445);
              }
              v714->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v342 = *p_myServantPositionsList;
              Master_object = (int64_t)RestrictionWholeEntity__GetSetPossiblePosition(v302, 0LL);
              if ( !v342 )
                goto LABEL_385;
              v349 = v342->fields._items;
              v350 = Method_System_Collections_Generic_List_bool____Add__;
              ++v342->fields._version;
              if ( !v349 )
                goto LABEL_385;
              v351 = v342->fields._size;
              v352 = Master_object;
              if ( (unsigned int)v351 >= v349->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v342,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v350[4] + 192LL) + 112LL));
              }
              else
              {
                v353 = &v349->obj.klass + v351;
                v342->fields._size = v351 + 1;
                v353[4] = (Il2CppClass *)v352;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v353 + 4), v352, v343, v344, v345, v346, v347, v348);
              }
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v451 = *p_fixedMyServantIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v451 )
                goto LABEL_385;
              Master_object = sub_1C13E60(Master_object, int___TypeInfo);
              v458 = v451->fields._items;
              v459 = Method_System_Collections_Generic_List_int____Add__;
              ++v451->fields._version;
              if ( !v458 )
                goto LABEL_385;
              v460 = v451->fields._size;
              v461 = Master_object;
              if ( (unsigned int)v460 >= v458->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v451,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v459[4] + 192LL) + 112LL));
              }
              else
              {
                v462 = &v458->obj.klass + v460;
                v451->fields._size = v460 + 1;
                v462[4] = (Il2CppClass *)v461;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v462 + 4), v461, v452, v453, v454, v455, v456, v457);
              }
              v714->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v302, 0LL);
              p_supportPositionList->klass = (PartyOrganizationUtility_c *)SetPossiblePosition;
              sub_1C13CC8(p_supportPositionList, (int64_t)SetPossiblePosition, v304, v305, v306, v307, v308, v309);
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v310 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedSupportIndividualities->klass = (PartyOrganizationUtility_c *)sub_1C13E60(v310, int___TypeInfo);
              v311 = sub_1C13E60(v310, int___TypeInfo);
              sub_1C13CC8(p_fixedSupportIndividualities, v311, v312, v313, v314, v315, v316, v317);
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v318 = *p_fixedSupportIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v318 )
                goto LABEL_385;
              Master_object = sub_1C13E60(Master_object, int___TypeInfo);
              v325 = v318->fields._items;
              v326 = Method_System_Collections_Generic_List_int____Add__;
              ++v318->fields._version;
              if ( !v325 )
                goto LABEL_385;
              v327 = v318->fields._size;
              v328 = Master_object;
              if ( (unsigned int)v327 >= v325->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v318,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v326[4] + 192LL) + 112LL));
              }
              else
              {
                v329 = &v325->obj.klass + v327;
                v318->fields._size = v327 + 1;
                v329[4] = (Il2CppClass *)v328;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v329 + 4), v328, v319, v320, v321, v322, v323, v324);
              }
              v714->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v391 = RestrictionWholeEntity__GetSetPossiblePosition(v302, 0LL);
              p_supportPositionList->klass = (PartyOrganizationUtility_c *)v391;
              sub_1C13CC8(p_supportPositionList, (int64_t)v391, v392, v393, v394, v395, v396, v397);
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v398 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedNpcIndividualities->klass = (PartyOrganizationUtility_c *)sub_1C13E60(v398, int___TypeInfo);
              v399 = sub_1C13E60(v398, int___TypeInfo);
              sub_1C13CC8(p_fixedNpcIndividualities, v399, v400, v401, v402, v403, v404, v405);
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v406 = *p_fixedNpcIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v406 )
                goto LABEL_385;
              Master_object = sub_1C13E60(Master_object, int___TypeInfo);
              v413 = v406->fields._items;
              v414 = Method_System_Collections_Generic_List_int____Add__;
              ++v406->fields._version;
              if ( !v413 )
                goto LABEL_385;
              v415 = v406->fields._size;
              v416 = Master_object;
              if ( (unsigned int)v415 >= v413->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v406,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v414[4] + 192LL) + 112LL));
              }
              else
              {
                v417 = &v413->obj.klass + v415;
                v406->fields._size = v415 + 1;
                v417[4] = (Il2CppClass *)v416;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v417 + 4), v416, v407, v408, v409, v410, v411, v412);
              }
              v714->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v418 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_needStartingIndividualities->klass = (PartyOrganizationUtility_c *)sub_1C13E60(v418, int___TypeInfo);
              v419 = sub_1C13E60(v418, int___TypeInfo);
              sub_1C13CC8(p_needStartingIndividualities, v419, v420, v421, v422, v423, v424, v425);
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v426 = *p_needStartingIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v426 )
                goto LABEL_385;
              Master_object = sub_1C13E60(Master_object, int___TypeInfo);
              v433 = v426->fields._items;
              v434 = Method_System_Collections_Generic_List_int____Add__;
              ++v426->fields._version;
              if ( !v433 )
                goto LABEL_385;
              v435 = v426->fields._size;
              v436 = Master_object;
              if ( (unsigned int)v435 >= v433->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v426,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v434[4] + 192LL) + 112LL));
              }
              else
              {
                v437 = &v433->obj.klass + v435;
                v426->fields._size = v435 + 1;
                v437[4] = (Il2CppClass *)v436;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v437 + 4), v436, v427, v428, v429, v430, v431, v432);
              }
              v714->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (int64_t)v302->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v354 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_uniqueIndividualitys->klass = (PartyOrganizationUtility_c *)sub_1C13E60(v354, int___TypeInfo);
              v355 = sub_1C13E60(v354, int___TypeInfo);
              sub_1C13CC8(p_uniqueIndividualitys, v355, v356, v357, v358, v359, v360, v361);
              v362 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v362 = BalanceConfig_TypeInfo;
              }
              v363 = sub_1C13DCC(int___TypeInfo, (unsigned int)v362->static_fields->DeckMemberMax);
              v714->fields.deckSvtIdList = (struct System_Int32_array *)v363;
              sub_1C13CC8(p_deckSvtIdList, v363, v364, v365, v366, v367, v368, v369);
              v370 = sub_1C13DCC(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v714->fields.deckLimitCountList = (struct System_Int32_array *)v370;
              sub_1C13CC8(p_deckLimitCountList, v370, v371, v372, v373, v374, v375, v376);
              v377 = sub_1C13DCC(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v714->fields.deckDispLimitCountList = (struct System_Int32_array *)v377;
              sub_1C13CC8(p_deckDispLimitCountList, v377, v378, v379, v380, v381, v382, v383);
              v384 = sub_1C13DCC(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v714->fields.deckNpcInfoList = (struct FollowerInfo_array *)v384;
              sub_1C13CC8((PartyOrganizationUtility_o *)p_deckNpcInfoList, v384, v385, v386, v387, v388, v389, v390);
              restrictionWholeEntities = v694;
              v714->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v714->fields.isDataLostBattle = 1;
              targetVals = v302->fields.targetVals;
              if ( !targetVals )
                goto LABEL_385;
              if ( !targetVals->max_length )
                goto LABEL_386;
              v714->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_89:
              restrictionMessageId = v302->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_101;
              if ( !v291 )
                goto LABEL_385;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v291,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_101;
              if ( !v279 )
                goto LABEL_385;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v279,
                                entity,
                                (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_101;
              monitor_low = (int64_t)entity;
              v470 = v279->fields._items;
              v471 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v279->fields._version;
              if ( !v470 )
                goto LABEL_385;
              v472 = v279->fields._size;
              if ( (unsigned int)v472 >= v470->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v279,
                  (Il2CppObject *)monitor_low,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v471[4] + 192LL) + 112LL));
              }
              else
              {
                v473 = &v470->obj.klass + v472;
                v279->fields._size = v472 + 1;
                v473[4] = (Il2CppClass *)monitor_low;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v473 + 4), monitor_low, v464, v465, v466, v467, v468, v469);
              }
              v474 = sub_1C13F70(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v474, 0LL);
              *(_DWORD *)(v474 + 16) = 0;
              *(_DWORD *)(v474 + 20) = v302->fields.type;
              if ( !entity )
                goto LABEL_385;
              Master_object = (int64_t)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_385;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v474,
                (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_101:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v301 >= max_length )
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
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestMaster___);
    v475 = v714;
    if ( !Master_object )
      goto LABEL_385;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v725,
      questId,
      (const MethodInfo_3238670 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (int64_t)v725;
    if ( !v725 )
      goto LABEL_385;
    Master_object = QuestEntity__HasFlag_40637728((QuestEntity_o *)v725, 0x100000LL, questPhase, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v714 )
        goto LABEL_385;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v714->fields.isAllOutBattle;
    }
    v714->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (int64_t)v725;
    if ( !v725 )
      goto LABEL_385;
    v714->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_40637728(
                                              (QuestEntity_o *)v725,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_object = (int64_t)v725;
    if ( !v725 )
      goto LABEL_385;
    v714->fields.isFatigure = QuestEntity__HasFlag_40637728((QuestEntity_o *)v725, 0x200000LL, questPhase, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_385;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v724, questId, questPhase, 0LL) )
    {
      Master_object = sub_1C13DCC(int___TypeInfo, 1LL);
      if ( !v724 )
        goto LABEL_385;
      v477 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v724, 0LL);
      if ( !v477 )
        goto LABEL_385;
      if ( !*(_DWORD *)(v477 + 24) )
        goto LABEL_386;
      *(_DWORD *)(v477 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (PartyOrganizationUtility_c *)v477;
      sub_1C13CC8(p_svtIdForceBattleList, v477, v478, v479, v480, v481, v482, v483);
      Master_object = (int64_t)v724;
      if ( !v724 )
        goto LABEL_385;
      v714->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v724, 0LL);
      Master_object = (int64_t)v724;
      if ( !v724 )
        goto LABEL_385;
      v714->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v724, 0LL);
    }
    else
    {
      v714->fields.correctionIconId = -1;
    }
    v484 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v484 = BalanceConfig_TypeInfo;
    }
    v485 = sub_1C13DCC(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v484->static_fields->DeckMemberMax);
    p_fields->klass = (PartyOrganizationUtility_c *)v485;
    sub_1C13CC8(p_fields, v485, v486, v487, v488, v489, v490, v491);
    Master_object = (int64_t)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_3292430 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (int64_t)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_3292430 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v492 = 1;
    v493 = 1;
    v710 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v492 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 156LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_385;
      if ( !Master_object )
        goto LABEL_385;
      Master_object = (int64_t)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v492,
                                 0LL);
      if ( !Master_object )
        goto LABEL_385;
      v494 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v495 = (System_Object_array *)Master_object;
      questIdb = v493;
      Master_object = (int64_t)*p_restrictionSlotDictionary;
      v716 = v494 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_385;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v492,
        &v495->obj,
        (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v496 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v496,
        (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
      v497 = v495->max_length;
      if ( v497 >= 1 )
      {
        v498 = 0LL;
        while ( (unsigned int)v498 < v497 )
        {
          v499 = v495->m_Items[v498];
          if ( !v499 || !v496 )
            goto LABEL_385;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v496,
                            (int32_t)v499[2].monitor,
                            (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            monitor_low = LODWORD(v499[2].monitor);
            v500 = v496->fields._items;
            v501 = Method_System_Collections_Generic_List_int__Add__;
            ++v496->fields._version;
            if ( !v500 )
              goto LABEL_385;
            v502 = v496->fields._size;
            if ( (unsigned int)v502 >= v500->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v496,
                monitor_low,
                *(const MethodInfo_36101A8 **)(*(_QWORD *)(v501[4] + 192LL) + 112LL));
            }
            else
            {
              v496->fields._size = v502 + 1;
              v500->m_Items[v502 + 1] = monitor_low;
            }
          }
          monitor_high = HIDWORD(v499[2].monitor);
          if ( monitor_high >= 1 )
          {
            if ( !v291 )
              goto LABEL_385;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v291,
                              &item,
                              monitor_high,
                              (const MethodInfo_3238670 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v279 )
                goto LABEL_385;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v279,
                                item,
                                (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                monitor_low = (int64_t)item;
                v510 = v279->fields._items;
                v511 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v279->fields._version;
                if ( !v510 )
                  goto LABEL_385;
                v512 = v279->fields._size;
                if ( (unsigned int)v512 >= v510->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v279,
                    (Il2CppObject *)monitor_low,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v511[4] + 192LL) + 112LL));
                }
                else
                {
                  v513 = &v510->obj.klass + v512;
                  v279->fields._size = v512 + 1;
                  v513[4] = (Il2CppClass *)monitor_low;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v513 + 4), monitor_low, v504, v505, v506, v507, v508, v509);
                }
                v514 = sub_1C13F70(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v514, 0LL);
                *(_DWORD *)(v514 + 16) = v492;
                *(_DWORD *)(v514 + 20) = 0;
                if ( !item )
                  goto LABEL_385;
                Master_object = (int64_t)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_385;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v514,
                  (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v497 = v495->max_length;
          if ( (int)++v498 >= v497 )
            goto LABEL_161;
        }
        goto LABEL_386;
      }
LABEL_161:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_385;
      Master_object = (int64_t)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v496,
                                 0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_385;
      v515 = (System_Object_array *)Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v492,
        (Il2CppObject *)Master_object,
        (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v517 = (QuestRestrictionInfo_SlotInfo_o *)sub_1C13F70(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v517, v518);
      if ( !klass )
        goto LABEL_385;
      if ( v517 )
      {
        Master_object = sub_1C13E60(v517, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v689 = sub_1C13FA4(0LL);
          sub_1C13E4C(v689, 0LL);
        }
      }
      v525 = v492 - 1;
      if ( (unsigned int)(v492 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_386;
      v526 = &klass->_1.image + v525;
      v526[4] = v517;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v526 + 4), (int64_t)v517, v519, v520, v521, v522, v523, v524);
      servantNumMax = v475->fields.servantNumMax;
      if ( servantNumMax < 1 || v525 < servantNumMax )
      {
        v531 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v531 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_0 = (System_Func_object__bool__o *)v531->static_fields->__9__83_0;
        if ( !_9__83_0 )
        {
          if ( !v531->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v531);
            v531 = QuestRestrictionInfo___c_TypeInfo;
          }
          v533 = (Il2CppObject *)v531->static_fields->__9;
          _9__83_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__83_0, v533, Method_QuestRestrictionInfo___c__Setup_b__83_0__, 0LL);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__83_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_0;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&static_fields->__9__83_0,
            (int64_t)_9__83_0,
            v535,
            v536,
            v537,
            v538,
            v539,
            v540);
        }
        v541 = BasicHelper__Any_object__49783940(
                 v495,
                 (System_Func_T__bool__o *)_9__83_0,
                 (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v542 = QuestRestrictionInfo___c_TypeInfo;
        v543 = v541;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v542 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_1 = (System_Func_object__bool__o *)v542->static_fields->__9__83_1;
        if ( !_9__83_1 )
        {
          if ( !v542->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v542);
            v542 = QuestRestrictionInfo___c_TypeInfo;
          }
          v545 = (Il2CppObject *)v542->static_fields->__9;
          _9__83_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__83_1, v545, Method_QuestRestrictionInfo___c__Setup_b__83_1__, 0LL);
          v546 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v546->__9__83_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_1;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v546->__9__83_1,
            (int64_t)_9__83_1,
            v547,
            v548,
            v549,
            v550,
            v551,
            v552);
        }
        v553 = BasicHelper__Any_object__49783940(
                 v495,
                 (System_Func_T__bool__o *)_9__83_1,
                 (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v554 = QuestRestrictionInfo___c_TypeInfo;
        v555 = v553;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v554 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_2 = (System_Func_object__bool__o *)v554->static_fields->__9__83_2;
        if ( !_9__83_2 )
        {
          if ( !v554->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v554);
            v554 = QuestRestrictionInfo___c_TypeInfo;
          }
          v557 = (Il2CppObject *)v554->static_fields->__9;
          _9__83_2 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__83_2, v557, Method_QuestRestrictionInfo___c__Setup_b__83_2__, 0LL);
          v558 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v558->__9__83_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_2;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v558->__9__83_2,
            (int64_t)_9__83_2,
            v559,
            v560,
            v561,
            v562,
            v563,
            v564);
        }
        Master_object = BasicHelper__Any_object__49783940(
                          v495,
                          (System_Func_T__bool__o *)_9__83_2,
                          (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v555 || !v543 || (Master_object & 1) != 0 )
        {
          v475 = v714;
          if ( (v543 || !v555) | Master_object & 1 )
          {
            if ( v543 || v555 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v543 || !v555) )
              {
                if ( ((v543 || v555) & (unsigned int)Master_object & 1) != 0 )
                {
                  v620 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_385;
                  if ( (unsigned int)v525 >= LODWORD(v620->_1.namespaze) )
                    goto LABEL_386;
                  v621 = *((_QWORD *)&v620->_1.byval_arg.data + v525);
                  if ( !v621 )
                    goto LABEL_385;
                  *(_DWORD *)(v621 + 16) = 4;
                  v714->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v622 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_385;
                if ( (unsigned int)v525 >= LODWORD(v622->_1.namespaze) )
                  goto LABEL_386;
                v623 = *((_QWORD *)&v622->_1.byval_arg.data + v525);
                if ( !v623 )
                  goto LABEL_385;
                *(_DWORD *)(v623 + 16) = 3;
                v714->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v567 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v525 >= LODWORD(v567->_1.namespaze) )
                goto LABEL_386;
              v568 = *((_QWORD *)&v567->_1.byval_arg.data + v525);
              if ( !v568 )
                goto LABEL_385;
              *(_DWORD *)(v568 + 16) = 2;
              v714->fields.supportInitIndex = v492;
            }
          }
          else
          {
            v569 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_385;
            if ( (unsigned int)v525 >= LODWORD(v569->_1.namespaze) )
              goto LABEL_386;
            v570 = *((_QWORD *)&v569->_1.byval_arg.data + v525);
            if ( !v570 )
              goto LABEL_385;
            *(_DWORD *)(v570 + 16) = 1;
          }
        }
        else
        {
          v475 = v714;
          v565 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_385;
          if ( (unsigned int)v525 >= LODWORD(v565->_1.namespaze) )
            goto LABEL_386;
          v566 = *((_QWORD *)&v565->_1.byval_arg.data + v525);
          if ( !v566 )
            goto LABEL_385;
          *(_DWORD *)(v566 + 16) = 0;
        }
        if ( !v515 )
          goto LABEL_385;
        v571 = v515->max_length;
        if ( v571 >= 1 )
        {
          v572 = 0;
          while ( v572 < v571 )
          {
            v573 = v515->m_Items[v572];
            if ( !v573 )
              goto LABEL_385;
            if ( !v495->max_length )
              break;
            v574 = v495->m_Items[0];
            if ( !v574 )
              goto LABEL_385;
            if ( LODWORD(v573[1].klass) == LODWORD(v574[2].monitor) )
            {
              v575 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v525 >= LODWORD(v575->_1.namespaze) )
                goto LABEL_386;
              v576 = *((_QWORD *)&v575->_1.byval_arg.data + v525);
              if ( !v576 )
                goto LABEL_385;
              if ( *(_DWORD *)(v576 + 16) <= 2u )
              {
                Master_object = (int64_t)v573[2].monitor;
                if ( !Master_object )
                  goto LABEL_385;
                v577 = *(System_Collections_Generic_List_object__o **)(v576 + 24);
                Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
                if ( !v577 )
                  goto LABEL_385;
                Master_object = sub_1C13E60(Master_object, int___TypeInfo);
                v584 = v577->fields._items;
                v585 = Method_System_Collections_Generic_List_int____Add__;
                ++v577->fields._version;
                if ( !v584 )
                  goto LABEL_385;
                v586 = v577->fields._size;
                v587 = Master_object;
                if ( (unsigned int)v586 >= v584->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v577,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v585[4] + 192LL) + 112LL));
                }
                else
                {
                  v588 = &v584->obj.klass + v586;
                  v577->fields._size = v586 + 1;
                  v588[4] = (Il2CppClass *)v587;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v588 + 4), v587, v578, v579, v580, v581, v582, v583);
                }
                v589 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_385;
                if ( (unsigned int)v525 >= LODWORD(v589->_1.namespaze) )
                  goto LABEL_386;
                v590 = *((_QWORD *)&v589->_1.byval_arg.data + v525);
                if ( !v590 )
                  goto LABEL_385;
                Master_object = *(_QWORD *)(v590 + 32);
                if ( !Master_object )
                  goto LABEL_385;
                monitor_low = LODWORD(v573[3].klass);
                v591 = *(struct System_Int32_array **)(Master_object + 16);
                v592 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v591 )
                  goto LABEL_385;
                v593 = *(int *)(Master_object + 24);
                if ( (unsigned int)v593 >= v591->max_length )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    monitor_low,
                    *(const MethodInfo_36129D4 **)(*(_QWORD *)(v592[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v593 + 1;
                  v591->m_Items[v593 + 1] = monitor_low;
                }
              }
              if ( LODWORD(v573[2].klass) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/, 0LL);
                monitor = (System_String_o *)Master_object;
              }
              else
              {
                monitor = (System_String_o *)v573[1].monitor;
              }
              v595 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v525 >= LODWORD(v595->_1.namespaze) )
                goto LABEL_386;
              v596 = *((_QWORD *)&v595->_1.byval_arg.data + v525);
              if ( !v596 )
                goto LABEL_385;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v596 + 40), 0LL);
              v603 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v525 >= LODWORD(v603->_1.namespaze) )
                goto LABEL_386;
              v604 = *((_QWORD *)&v603->_1.byval_arg.data + v525);
              if ( !v604 )
                goto LABEL_385;
              v605 = (System_String_o **)(v604 + 40);
              if ( (Master_object & 1) == 0 )
                monitor = System_String__Concat_62979204(*v605, (System_String_o *)StringLiteral_43/*"\n"*/, monitor, 0LL);
              *v605 = monitor;
              sub_1C13CC8((PartyOrganizationUtility_o *)v605, (int64_t)monitor, v597, v598, v599, v600, v601, v602);
            }
            v571 = v515->max_length;
            if ( (int)++v572 >= v571 )
              goto LABEL_251;
          }
          goto LABEL_386;
        }
LABEL_251:
        v606 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_385;
        if ( (unsigned int)v525 >= LODWORD(v606->_1.namespaze) )
          goto LABEL_386;
        v607 = QuestRestrictionInfo___c_TypeInfo;
        v608 = *((_QWORD *)&v606->_1.byval_arg.data + v525);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v607 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_3 = (System_Func_object__bool__o *)v607->static_fields->__9__83_3;
        if ( !_9__83_3 )
        {
          if ( !v607->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v607);
            v607 = QuestRestrictionInfo___c_TypeInfo;
          }
          v610 = (Il2CppObject *)v607->static_fields->__9;
          _9__83_3 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__83_3, v610, Method_QuestRestrictionInfo___c__Setup_b__83_3__, 0LL);
          v611 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v611->__9__83_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__83_3;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v611->__9__83_3,
            (int64_t)_9__83_3,
            v612,
            v613,
            v614,
            v615,
            v616,
            v617);
          v475 = v714;
        }
        Master_object = BasicHelper__Any_object__49783940(
                          v515,
                          (System_Func_T__bool__o *)_9__83_3,
                          (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v608 )
          goto LABEL_385;
        *(_BYTE *)(v608 + 48) = (Master_object & 1) == 0;
        v618 = p_fields->klass;
        v529 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_385;
        if ( (unsigned int)v525 >= LODWORD(v618->_1.namespaze) )
          goto LABEL_386;
        v619 = *((_QWORD *)&v618->_1.byval_arg.data + v525);
        if ( !v619 )
          goto LABEL_385;
        p_dialogMessageInfoDictionary = v710;
        if ( *(_DWORD *)(v619 + 16) == 1 )
        {
          if ( *(_BYTE *)(v619 + 48) )
            v475->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v619 + 49) = v495->max_length != 0;
      }
      else
      {
        v528 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_385;
        v529 = questIdb;
        if ( (unsigned int)v525 >= LODWORD(v528->_1.namespaze) )
          goto LABEL_386;
        v530 = *((_QWORD *)&v528->_1.byval_arg.data + v525);
        if ( !v530 )
          goto LABEL_385;
        p_dialogMessageInfoDictionary = v710;
        *(_DWORD *)(v530 + 16) = 5;
        *(_BYTE *)(v530 + 48) = 0;
      }
      ++v492;
      v493 = v529 & v716;
    }
    if ( !v279
      || (v624 = System_Collections_Generic_List_object___ToArray(
                   v279,
                   (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v475->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v624,
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v475->fields.restrictionMessageEntities,
            (int64_t)v624,
            v625,
            v626,
            v627,
            v628,
            v629,
            v630),
          (slotInfos = v475->fields.slotInfos) == 0LL) )
    {
LABEL_385:
      sub_1C13F80(Master_object, monitor_low);
    }
    v632 = slotInfos->max_length;
    if ( v632 >= 1 )
    {
      v633 = 0;
      v634 = 0;
      v635 = 0;
      v636 = 0;
      while ( v632 != v633 )
      {
        v637 = slotInfos->m_Items[v633];
        if ( !v637 )
          goto LABEL_385;
        switch ( v637->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v636;
            break;
          case 1:
            ++v635;
            break;
          case 2:
            ++v634;
            break;
          default:
            break;
        }
        if ( v632 == ++v633 )
          goto LABEL_291;
      }
LABEL_386:
      sub_1C13F88(Master_object, monitor_low);
    }
    v636 = 0;
    v635 = 0;
    v634 = 0;
LABEL_291:
    if ( v634 == 0 && (v493 & 1) != 0 )
      v475->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_385;
    Master_object = (int64_t)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v475->fields.questId,
                               v475->fields.questPhase,
                               0LL);
    if ( !Master_object )
      goto LABEL_385;
    v638 = *(_DWORD *)(Master_object + 24);
    if ( v638 >= 1 )
    {
      v639 = 0;
      while ( v638 != v639 )
      {
        v640 = *(_QWORD *)(Master_object + 8LL * v639 + 32);
        if ( !v640 )
          goto LABEL_385;
        if ( !*(_BYTE *)(v640 + 105) && v638 != ++v639 )
          continue;
        goto LABEL_305;
      }
      goto LABEL_386;
    }
    v639 = 0;
LABEL_305:
    Master_object = (int64_t)v725;
    if ( !v725 )
      goto LABEL_385;
    HasFlag_40637728 = QuestEntity__HasFlag_40637728((QuestEntity_o *)v725, 0x10000000LL, questPhase, 0LL);
    v475->fields.isNpcMultipleBattle = HasFlag_40637728;
    if ( !HasFlag_40637728 )
      v475->fields.isNpcMultipleBattle = v639 < v638 && v636 > 0 && v635 > 0;
    Master_object = (int64_t)v725;
    if ( !v725 )
      goto LABEL_385;
    v642 = QuestEntity__HasFlag_40637728((QuestEntity_o *)v725, 0x20000000LL, questPhase, 0LL);
    v475->fields.isNpcOnlyBattle = v642;
    if ( !v642 )
      v475->fields.isNpcOnlyBattle = v639 < v638 && v636 == 0 && v635 > 0;
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_2F7D7E0 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v644 = 2;
      else
        v644 = 1;
      DeckMemberMax = v475->fields.servantNumMax;
      v475->fields.servantNumMin = v644;
      if ( !DeckMemberMax )
      {
        v646 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v646 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v646->static_fields->DeckMemberMax;
        v475->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v475->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v475->fields.isNpcMultipleBattle )
        v475->fields.myServantNumMax = v636;
    }
    else
    {
      v475->fields.myServantNumMax = v636;
      if ( v636 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (int64_t)v475->fields.restrictionSlotDetailDictionary;
        v475->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_385;
        Master_object = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v647 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v647 )
          {
            if ( !(_DWORD)v647 )
              goto LABEL_386;
            v648 = *(_QWORD *)(Master_object + 32);
            if ( !v648 )
              goto LABEL_385;
            Master_object = *(_QWORD *)(v648 + 40);
            if ( !Master_object )
              goto LABEL_385;
            v649 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
            v475->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1C13E60(
                                                                                              v649,
                                                                                              int___TypeInfo);
            v650 = sub_1C13E60(v649, int___TypeInfo);
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v475->fields.fixedMyServantSingleIndividualities,
              v650,
              v651,
              v652,
              v653,
              v654,
              v655,
              v656);
          }
        }
      }
    }
    Master_object = (int64_t)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_385;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_3291F58 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v475->fields.restrictionSlotDictionary;
    v475->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_385;
    Master_object = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_32920B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v720,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_3959894 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v721 = v720;
    do
    {
      v658 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v721,
               (const MethodInfo_33E2E00 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v658 )
        break;
      if ( !v721.fields._currentValue )
        sub_1C13F80(v658, v659);
      v660 = (int)v721.fields._currentValue[1].monitor;
      if ( v660 >= 1 )
      {
        v661 = 0;
        while ( 1 )
        {
          if ( v660 == v661 )
            sub_1C13F88(v658, v659);
          v662 = *((_QWORD *)&v721.fields._currentValue[2].klass + v661);
          if ( !v662 )
            sub_1C13F80(v658, v659);
          if ( *(_DWORD *)(v662 + 28) == 1 )
            break;
          if ( v660 == ++v661 )
            goto LABEL_346;
        }
        v475->fields.isSupportOnly = 0;
        break;
      }
LABEL_346:
      ;
    }
    while ( v475->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v721,
      (const MethodInfo_33E2DFC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v663 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v663, 0LL);
    v664 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v664, 0LL);
    v665 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_385;
    v666 = v665->max_length;
    if ( v666 >= 1 )
    {
      v667 = 0;
      while ( 1 )
      {
        if ( v667 >= v666 )
          goto LABEL_386;
        v668 = v665->m_Items[v667];
        if ( !v668 )
          goto LABEL_385;
        Master_object = System_String__IsNullOrEmpty(v668->fields.summary, 0LL);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_375:
        v666 = v665->max_length;
        if ( (int)++v667 >= v666 )
          goto LABEL_376;
      }
      type = v668->fields.type;
      if ( type == 10 || type == 2 )
      {
        v671 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v668->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_385;
          v671 = 1;
          v672 = targetVals2->max_length == 1;
LABEL_363:
          if ( (v672 & v671) != 0 )
          {
            if ( v475->fields.isRestriction )
            {
              if ( !v664 )
                goto LABEL_385;
              System_Text_StringBuilder__Append_62129096(v664, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v664 )
            {
              goto LABEL_385;
            }
            Master_object = (int64_t)System_Text_StringBuilder__Append_62129096(v664, v668->fields.summary, 0LL);
            v475->fields.isRestriction = 1;
          }
          if ( v671 )
          {
            if ( v475->fields.isRestriction )
            {
              if ( !v663 )
                goto LABEL_385;
              System_Text_StringBuilder__Append_62129096(v663, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v663 )
            {
              goto LABEL_385;
            }
            Master_object = (int64_t)System_Text_StringBuilder__Append_62129096(v663, v668->fields.summary, 0LL);
            v475->fields.isRestriction = 1;
          }
          goto LABEL_375;
        }
        v671 = 0;
      }
      v672 = 1;
      goto LABEL_363;
    }
LABEL_376:
    if ( !v664 )
      goto LABEL_385;
    Master_object = System_Text_StringBuilder__get_Length(v664, 0LL);
    if ( (int)Master_object >= 1 )
    {
      v673 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v664->klass->vtable._3_ToString.method)(
               v664,
               v664->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (PartyOrganizationUtility_c *)v673;
      sub_1C13CC8(p_confirmRestrictionMessage, v673, v674, v675, v676, v677, v678, v679);
    }
    if ( !v663 )
      goto LABEL_385;
    if ( System_Text_StringBuilder__get_Length(v663, 0LL) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v680 = LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, 0LL);
      v681 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v663->klass->vtable._3_ToString.method)(
                                  v663,
                                  v663->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v682 = System_String__Concat_62979204(v680, (System_String_o *)StringLiteral_43/*"\n"*/, v681, 0LL);
      p_restrictionMessage->klass = (PartyOrganizationUtility_c *)v682;
      sub_1C13CC8(p_restrictionMessage, (int64_t)v682, v683, v684, v685, v686, v687, v688);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(v80, v257);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x21
  int max_length; // w8
  unsigned int v30; // w22
  struct RestrictionEntity_o *v31; // x27
  BalanceConfig_c *v32; // x0
  struct System_Int32_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int *targetVals; // x8
  int32_t v48; // w8
  struct System_Int32_array *v49; // x8
  __int64 v50; // x9
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  Il2CppObject *v55; // x25
  int64_t v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  BalanceConfig_c *v63; // x0
  struct System_Int32_array *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Int32_array *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Int32_array *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct FollowerInfo_array *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x8
  struct System_Int32_array *v96; // x8
  _BOOL4 isRestriction; // w9
  __int64 v98; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x25
  struct System_Int32_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  struct System_Collections_Generic_List_int__o *v103; // x25
  struct System_Int32_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  struct System_String_o *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_String_o *v114; // x0
  struct System_String_o *v115; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  long double v122; // q0
  __int64 v123; // x0
  __int64 v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  bool HasFlag; // w0
  bool v132; // w0
  struct System_Int32_array *v133; // x20
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  bool v140; // w0
  bool HasFlag_40637728; // w0
  bool v142; // w0
  struct System_Int32_array *v143; // x20
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  bool v150; // w0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  PartyOrganizationUtility_o *p_totalCostRestrictionEntity; // [xsp+20h] [xbp-D0h]
  PartyOrganizationUtility_o *p_uniqueSvtRestrictionEntity; // [xsp+30h] [xbp-C0h]
  PartyOrganizationUtility_o *p_servantNumRestrictionEntity; // [xsp+58h] [xbp-98h]
  PartyOrganizationUtility_o *p_myServantNumRestrictionEntity; // [xsp+60h] [xbp-90h]
  PartyOrganizationUtility_o *p_uniqueIndividualityEntity; // [xsp+70h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v168; // [xsp+78h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v169; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4BB58A7 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v6);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1C13D24(&FollowerInfo___TypeInfo, v8);
    sub_1C13D24(&int___TypeInfo, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v11);
    sub_1C13D24(&LocalizationManager_TypeInfo, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v16);
    sub_1C13D24(&StringLiteral_10467/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, v17);
    byte_4BB58A7 = 1;
  }
  v169 = 0LL;
  entity = 0LL;
  v168 = 0LL;
  v18 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0LL);
  v19 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v19, 0LL);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_149;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualityEntity = (PartyOrganizationUtility_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.myServantNumRestrictionEntity;
    v30 = 0;
    p_uniqueSvtRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.uniqueSvtRestrictionEntity;
    p_totalCostRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.totalCostRestrictionEntity;
    while ( 1 )
    {
      if ( v30 >= max_length )
        goto LABEL_150;
      v31 = restrictionEntityList->m_Items[v30];
      if ( !v31 )
        goto LABEL_149;
      switch ( v31->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (PartyOrganizationUtility_c *)v31;
          sub_1C13CC8(p_totalCostRestrictionEntity, (int64_t)v31, v22, v23, v24, v25, v26, v27);
          goto LABEL_66;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v31;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.supportOnlyRestrictionEntity,
            (int64_t)v31,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          this->fields.isSupportOnly = 1;
          goto LABEL_66;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (PartyOrganizationUtility_c *)v31;
          sub_1C13CC8(p_uniqueSvtRestrictionEntity, (int64_t)v31, v22, v23, v24, v25, v26, v27);
          v32 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v32 = BalanceConfig_TypeInfo;
          }
          v33 = (struct System_Int32_array *)sub_1C13DCC(
                                               int___TypeInfo,
                                               (unsigned int)v32->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v33;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList,
            (int64_t)v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          this->fields.isUniqueServant = 1;
          goto LABEL_66;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v31;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int64_t)v31,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v31, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.supportPositionList,
            (int64_t)DeckPositionList,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_66;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v31;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int64_t)v31,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_66;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v31;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int64_t)v31,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_66;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (PartyOrganizationUtility_c *)v31;
          sub_1C13CC8(p_servantNumRestrictionEntity, (int64_t)v31, v22, v23, v24, v25, v26, v27);
          targetVals = (int *)v31->fields.targetVals;
          if ( v31->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v48 = targetVals[9];
LABEL_51:
              this->fields.servantNumMax = v48;
            }
          }
          else if ( targetVals )
          {
            v98 = *((_QWORD *)targetVals + 3);
            if ( v98 )
            {
              if ( !(_DWORD)v98 )
                goto LABEL_150;
              v48 = targetVals[8];
              goto LABEL_51;
            }
          }
LABEL_66:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v30 >= max_length )
            goto LABEL_67;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (PartyOrganizationUtility_c *)v31;
          sub_1C13CC8(p_myServantNumRestrictionEntity, (int64_t)v31, v22, v23, v24, v25, v26, v27);
          v49 = v31->fields.targetVals;
          if ( !v49 )
            goto LABEL_66;
          v50 = *(_QWORD *)&v49->max_length;
          if ( !v50 )
            goto LABEL_66;
          if ( !(_DWORD)v50 )
            goto LABEL_150;
          this->fields.myServantNumMax = v49->m_Items[1];
          goto LABEL_66;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v52 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_149;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v31,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v54[4] = (Il2CppClass *)v31;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v31, v22, v23, v24, v25, v26, v27);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v31,
                                                                                               0LL);
          if ( !specifiedPositionList )
            goto LABEL_149;
          v100 = specifiedPositionList->fields._items;
          v101 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v100 )
            goto LABEL_149;
          v102 = specifiedPositionList->fields._size;
          v21 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v102 >= v100->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v102 + 1;
            v100->m_Items[v102 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_66;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v31;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int64_t)v31,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          this->fields.isNeedStarting = 1;
          goto LABEL_66;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (PartyOrganizationUtility_c *)v31;
          sub_1C13CC8(p_uniqueIndividualityEntity, (int64_t)v31, v22, v23, v24, v25, v26, v27);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v31->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v55 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          this->fields.uniqueIndividualitys = (struct System_Int32_array *)sub_1C13E60(v55, int___TypeInfo);
          v56 = sub_1C13E60(v55, int___TypeInfo);
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.uniqueIndividualitys,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
          v63 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v63 = BalanceConfig_TypeInfo;
          }
          v64 = (struct System_Int32_array *)sub_1C13DCC(
                                               int___TypeInfo,
                                               (unsigned int)v63->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v64;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList,
            (int64_t)v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
          v71 = (struct System_Int32_array *)sub_1C13DCC(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v71;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.deckLimitCountList,
            (int64_t)v71,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77);
          v78 = (struct System_Int32_array *)sub_1C13DCC(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v78;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.deckDispLimitCountList,
            (int64_t)v78,
            v79,
            v80,
            v81,
            v82,
            v83,
            v84);
          v85 = (struct FollowerInfo_array *)sub_1C13DCC(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v85;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList,
            (int64_t)v85,
            v86,
            v87,
            v88,
            v89,
            v90,
            v91);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_66;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v92 = myServantOrNpcRestrictionEntityList->fields._items;
          v93 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v92 )
            goto LABEL_149;
          v94 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v94 >= v92->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v31,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = &v92->obj.klass + v94;
            myServantOrNpcRestrictionEntityList->fields._size = v94 + 1;
            v95[4] = (Il2CppClass *)v31;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v95 + 4), (int64_t)v31, v22, v23, v24, v25, v26, v27);
          }
          v103 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v31,
                                                                                               0LL);
          if ( !v103 )
            goto LABEL_149;
          v104 = v103->fields._items;
          v105 = Method_System_Collections_Generic_List_int__Add__;
          ++v103->fields._version;
          if ( !v104 )
            goto LABEL_149;
          v106 = v103->fields._size;
          v21 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v106 >= v104->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v103,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
          }
          else
          {
            v103->fields._size = v106 + 1;
            v104->m_Items[v106 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_66;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v96 = v31->fields.targetVals;
          if ( !v96 )
            goto LABEL_149;
          if ( !v96->max_length )
            goto LABEL_150;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v96->m_Items[1];
          if ( isRestriction )
          {
LABEL_44:
            if ( !v18 )
              goto LABEL_149;
            System_Text_StringBuilder__Append_62129096(v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
          }
          else
          {
LABEL_11:
            if ( !v18 )
              goto LABEL_149;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_62129096(
                                                                                               v18,
                                                                                               v31->fields.name,
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
    v107 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                       v18,
                                       v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v107;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage,
      (int64_t)v107,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v114 = LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, 0LL);
    v115 = System_String__Concat_62979204(
             v114,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             this->fields.confirmRestrictionMessage,
             0LL);
    this->fields.restrictionMessage = v115;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.restrictionMessage,
      (int64_t)v115,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_3238670 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v169,
    this->fields.questId,
    this->fields.questPhase,
    0LL);
  v123 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v123 + 309) & 1) == 0 )
    v123 = sub_1C65C00(v122);
  v124 = *(_QWORD *)(*(_QWORD *)(v123 + 192) + 16LL);
  if ( (*(_BYTE *)(v124 + 309) & 1) == 0 )
    v124 = sub_1C65C00(v122);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v124 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v168,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
    if ( !v168 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v168, 0x100000LL, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_101;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
    if ( !v168 )
      goto LABEL_149;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v168, 0x400000000000000LL, 0LL);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_101;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
    if ( !v168 )
      goto LABEL_149;
    v132 = QuestRestrictionInfoEntity__HasFlag(v168, 0x80000LL, 0LL);
    this->fields.isSupportOnlyForceBattle = v132;
    if ( v132 )
    {
LABEL_101:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
      if ( v168 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v168, 0x10000000LL, 0LL);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
        if ( v168 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v168, 0x20000000LL, 0LL);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
          if ( v168 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v168, 0x800000000LL, 0LL);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
            if ( v168 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(
                                                          v168,
                                                          0x80000000000000LL,
                                                          0LL);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
              if ( v168 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v168,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0LL);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
                if ( v168 )
                {
                  v140 = QuestRestrictionInfoEntity__HasFlag(v168, 0x400000000000000LL, 0LL);
                  this->fields.isAllOutBattle = v140;
                  if ( v140 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0LL);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_40637728(
                                                (QuestEntity_o *)entity,
                                                0x200000LL,
                                                this->fields.questPhase,
                                                0LL);
                  if ( v169 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v169, 0LL);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
                    if ( !v169 )
                      goto LABEL_149;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v169, 0LL);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
                  if ( v168 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v168,
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
      sub_1C13F80(myServantOrNpcRestrictionEntityList, v21);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
    if ( !v168 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v168, 0x1000000LL, 0LL) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
      if ( !v168 )
        goto LABEL_149;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v168, 0LL);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C13DCC(int___TypeInfo, 1LL);
    if ( !v168 )
      goto LABEL_149;
    v133 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v168,
                                                                                         0LL);
    if ( !v133 )
      goto LABEL_149;
    if ( v133->max_length )
    {
      v133->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v133;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList,
        (int64_t)v133,
        v134,
        v135,
        v136,
        v137,
        v138,
        v139);
      goto LABEL_101;
    }
LABEL_150:
    sub_1C13F88(myServantOrNpcRestrictionEntityList, v21);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_40637728((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_149;
      HasFlag_40637728 = QuestEntity__HasFlag_40637728(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_40637728;
      if ( !HasFlag_40637728 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_149;
        v142 = QuestEntity__HasFlag_40637728((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v142;
        if ( !v142 )
        {
          if ( v169 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_149;
            if ( QuestEntity__HasFlag_40637728((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
              if ( !v169 )
                goto LABEL_149;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v169, 0LL);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C13DCC(
                                                                                                 int___TypeInfo,
                                                                                                 1LL);
            if ( !v169 )
              goto LABEL_149;
            v143 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v169,
                                                                                                 0LL);
            if ( !v143 )
              goto LABEL_149;
            if ( !v143->max_length )
              goto LABEL_150;
            v143->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v143;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList,
              (int64_t)v143,
              v144,
              v145,
              v146,
              v147,
              v148,
              v149);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isFatigure = QuestEntity__HasFlag_40637728(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    v150 = QuestEntity__HasFlag_40637728((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v150;
    if ( v150 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_149;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_40637728(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_40637728(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_40637728(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_40637728(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_40637728(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v169 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v169, 0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_149;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v169,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_149;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v169, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCountSvtIds,
      0LL,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
    this->fields.overwriteLimitCounts = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCounts,
      0LL,
      v151,
      v152,
      v153,
      v154,
      v155,
      v156);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCountIconIds,
      0LL,
      v157,
      v158,
      v159,
      v160,
      v161,
      v162);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_T__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  void *v21; // x1
  struct System_String_o **p_summary; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BB58F3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int_____ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_int____TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo, v5);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB58F3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.individualityList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_T__o *)sub_1C13F70(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v14,
    (const MethodInfo_3612180 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.rangeTypeList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_summary, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  *((_WORD *)p_summary + 4) = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB58F4 & 1) == 0 )
  {
    sub_1C13D24(&QuestRestrictionInfo___c_TypeInfo, v1);
    byte_4BB58F4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)QuestRestrictionInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C13F80(this, 0LL);
  return e->fields.name;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__98_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4BB58F5 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1C13D24(&Method_System_Collections_Generic_List_int____get_Count__, s);
    byte_4BB58F5 = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0LL )
    sub_1C13F80(this, s);
  return individualityList->fields._size > 0;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__97_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C13F80(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__97_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C13F80(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.type == 2;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass179_0___ctor(
        QuestRestrictionInfo___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass179_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass179_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass180_0___ctor(
        QuestRestrictionInfo___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass180_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass180_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass181_0___ctor(
        QuestRestrictionInfo___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass181_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass181_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass182_0___ctor(
        QuestRestrictionInfo___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass182_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass182_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass183_0___ctor(
        QuestRestrictionInfo___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass183_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass183_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass184_0___ctor(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass184_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass187_0___ctor(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass187_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
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
    sub_1C13F88(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C13F80(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass188_0___ctor(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass188_0___GetMyServantOrSupportTargetPos_b__0(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
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
    sub_1C13F88(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C13F80(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass201_0___ctor(
        QuestRestrictionInfo___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass201_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass201_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}