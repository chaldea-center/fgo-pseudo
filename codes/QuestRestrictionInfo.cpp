void QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.questId = questId;
}


void QuestRestrictionInfo___ctor_50415132(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct RestrictionEntity_array *RestrictionList_49574032; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  const MethodInfo *v20; // x4

  if ( (byte_5971C13 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971C13 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance(v9);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v11);
  }
  RestrictionList_49574032 = QuestRestrictionMaster__getRestrictionList_49574032(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0);
  this->fields.restrictionEntityList = RestrictionList_49574032;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.restrictionEntityList,
    (int32_t)RestrictionList_49574032,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  QuestRestrictionInfo__Setup(this, v19, questId, questPhase, v20);
}


void QuestRestrictionInfo___ctor_50424472(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  Il2CppClass *v11; // x0
  struct QuestRestrictionEntity_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t v36; // w1
  const MethodInfo *v37; // x4
  __int64 v38; // x0

  if ( (byte_5971C14 & 1) == 0 )
  {
    sub_2213A60(&QuestRestrictionEntity___TypeInfo);
    sub_2213A60(&RestrictionEntity___TypeInfo);
    byte_5971C14 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v11 = QuestRestrictionEntity___TypeInfo;
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v12 = (struct QuestRestrictionEntity_array *)sub_2213B20(v11, 0);
  this->fields.questRestrictionEntityList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( overwriteRestiction )
  {
    v19 = sub_2213B20(RestrictionEntity___TypeInfo, 1);
    if ( !v19 )
      sub_2213CDC(0, v20);
    v21 = v19;
    v22 = sub_2213BB4(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v22 )
    {
      v38 = sub_2213D00(0, v23);
      sub_2213BA0(v38, 0);
    }
    if ( !*(_DWORD *)(v21 + 24) )
      sub_2213CE4(v22);
    *(_QWORD *)(v21 + 32) = overwriteRestiction;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 32),
      (int32_t)overwriteRestiction,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  else
  {
    v21 = sub_2213B20(RestrictionEntity___TypeInfo, 0);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v21;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.restrictionEntityList,
    v21,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  QuestRestrictionInfo__Setup(this, v36, questId, questPhase, v37);
}


void QuestRestrictionInfo__CacheOverwriteSvtTreasureDeviceLv(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  int v3; // w8
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *OverwriteSvtTreasureDeviceLv; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971C67 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5971C67 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_10:
    sub_2213CDC(Master_object, v5);
  OverwriteSvtTreasureDeviceLv = QuestPhaseEntity__GetOverwriteSvtTreasureDeviceLv(entity, 0);
  this->fields.cachedOverwriteSvtTreasureDeviceLv = OverwriteSvtTreasureDeviceLv;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedOverwriteSvtTreasureDeviceLv,
    (int32_t)OverwriteSvtTreasureDeviceLv,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x24
  int32_t v24; // w26
  System_Collections_Generic_IEnumerable_TSource__o *FixedServantPositionSvtIdList; // x0
  __int64 v26; // x1
  BalanceConfig_c *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FixedMyServantPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  bool v30; // w8
  bool v31; // w8
  System_Collections_Generic_IEnumerable_TSource__o *NeedStartingSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  BalanceConfig_c *v34; // x0
  int32_t v35; // w23
  System_Collections_Generic_IEnumerable_TSource__o *FixedPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  bool v38; // w8

  if ( (byte_5971C34 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971C34 = 1;
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
             (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v27 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
          v27 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v27->static_fields->DeckMainMemberMax <= num;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                         (ServantEntity_o *)Instance,
                                                                         limitCount,
                                                                         dispLimit,
                                                                         0);
  if ( !this->fields.isFixedMyServantPosition )
    goto LABEL_42;
  Instance = (DataManager_o *)this->fields.myServantPositionsList;
  if ( !Instance )
    goto LABEL_15;
  v24 = 0;
  while ( v24 < SLODWORD(Instance->fields.m_CancellationTokenSource) )
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v24,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_74;
    if ( *(&Instance->fields._DispLog + num) )
      goto LABEL_22;
    Instance = (DataManager_o *)this->fields.myServantPositionsList;
    ++v24;
    if ( !Instance )
      goto LABEL_15;
  }
  v24 = 0;
LABEL_22:
  if ( isFollower )
  {
    Instance = (DataManager_o *)this->fields.myServantPositionsList;
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v24,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_74;
    if ( !*(&Instance->fields._DispLog + num) )
      goto LABEL_42;
    goto LABEL_40;
  }
  FixedMyServantPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
                                                                                           this,
                                                                                           (int32_t)v21,
                                                                                           v22);
  if ( !FixedMyServantPositionSvtIdList )
    goto LABEL_42;
  v29 = System_Linq_Enumerable__Intersect_int_(
          FixedMyServantPositionSvtIdList,
          Individuality,
          (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
  v30 = System_Linq_Enumerable__Any_int_(v29, (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
  Instance = (DataManager_o *)this->fields.myServantPositionsList;
  if ( v30 )
  {
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v24,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_74;
    if ( *(&Instance->fields._DispLog + num) )
    {
      v31 = 1;
LABEL_41:
      *isFixedServantPositionAgreement = v31;
      *isRestrictionMyServantPos = 1;
    }
  }
  else
  {
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v24,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_74;
    if ( *(&Instance->fields._DispLog + num) )
    {
LABEL_40:
      v31 = 0;
      *isFixedServantPositionRestriction = 1;
      goto LABEL_41;
    }
  }
LABEL_42:
  if ( *isFixedServantPositionRestriction )
    return;
  if ( this->fields.isNeedStarting )
  {
    NeedStartingSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetNeedStartingSvtIdList(
                                                                                   this,
                                                                                   v21);
    if ( NeedStartingSvtIdList )
    {
      v33 = System_Linq_Enumerable__Intersect_int_(
              NeedStartingSvtIdList,
              Individuality,
              (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v33, (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___) )
      {
        v34 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
          v34 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v34->static_fields->DeckMainMemberMax <= num;
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
  v35 = 0;
  while ( v35 < SLODWORD(Instance->fields.m_CancellationTokenSource) )
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v35,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_74;
    if ( *(&Instance->fields._DispLog + num) )
      goto LABEL_61;
    Instance = (DataManager_o *)this->fields.positionsList;
    ++v35;
    if ( !Instance )
      goto LABEL_15;
  }
  v35 = 0;
LABEL_61:
  FixedPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedPositionSvtIdList(
                                                                                  this,
                                                                                  (int32_t)v21,
                                                                                  v22);
  if ( !FixedPositionSvtIdList )
    return;
  v37 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          Individuality,
          (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
  v38 = System_Linq_Enumerable__Any_int_(v37, (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
  Instance = (DataManager_o *)this->fields.positionsList;
  if ( v38 )
  {
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v35,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_bool____get_Item__);
      if ( Instance )
      {
        if ( LODWORD(Instance->fields.m_CancellationTokenSource) > num )
        {
          if ( *(&Instance->fields._DispLog + num) )
          {
            *isFixedServantPositionAgreement = 1;
LABEL_73:
            *isRestrictionServantPos = 1;
            return;
          }
          return;
        }
LABEL_74:
        sub_2213CE4(Instance);
      }
    }
LABEL_15:
    sub_2213CDC(Instance, v21);
  }
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v35,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_bool____get_Item__);
  if ( !Instance )
    goto LABEL_15;
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
    goto LABEL_74;
  if ( *(&Instance->fields._DispLog + num) )
  {
    *isFixedServantPositionRestriction = 1;
    *isFixedServantPositionAgreement = 0;
    goto LABEL_73;
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
  struct System_Int32_array *overwriteLimitCountSvtIds; // x11
  struct System_Int32_array *overwriteLimitCounts; // x8
  il2cpp_array_size_t max_length; // x10
  __int64 v6; // x9
  int32_t *m_Items; // x11

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return -1;
  overwriteLimitCounts = this->fields.overwriteLimitCounts;
  if ( !overwriteLimitCounts )
    return -1;
  max_length = overwriteLimitCountSvtIds->max_length;
  if ( (int)max_length < 1 )
    return -1;
  v6 = 0;
  m_Items = overwriteLimitCountSvtIds->m_Items;
  while ( m_Items[v6] != svtId )
  {
    if ( (_DWORD)max_length == (_DWORD)++v6 )
      return -1;
  }
  if ( (unsigned int)v6 >= LODWORD(overwriteLimitCounts->max_length) )
    sub_2213CE4(this);
  return overwriteLimitCounts->m_Items[v6];
}


int32_t QuestRestrictionInfo__ConvertOverwriteImageLimitCount_50453148(
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
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_5971C3C & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971C3C = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
  *(_QWORD *)&v16.fields.currentCryptoKey = v5;
  *(_QWORD *)&v16.fields.fakeValue = v6;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_2213CDC(this, userServantEntity);
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  v10 = this;
  if ( !dialogMessageInfoDictionary )
    return -1;
  if ( (int)dialogMessageInfoDictionary >= 1 )
  {
    v11 = 0;
    while ( (unsigned int)v11 < (unsigned int)dialogMessageInfoDictionary )
    {
      v12 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.fakeValue;
      v14 = *(&v10->fields.eventId + v11);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
      *(_QWORD *)&v17.fields.currentCryptoKey = v12;
      *(_QWORD *)&v17.fields.fakeValue = v13;
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
      if ( (_DWORD)this == v14 )
        return v14;
      LODWORD(dialogMessageInfoDictionary) = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_2213CE4(this);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  __int64 v11; // x24
  struct System_Int32_array *v12; // x8
  struct System_Int32_array *overwriteLimitCounts; // x8
  char *v14; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_5971C3B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971C3B = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds )
  {
    if ( this->fields.overwriteLimitCounts )
    {
      max_length = overwriteLimitCountSvtIds->max_length;
      if ( (int)max_length >= 1 )
      {
        v10 = 0;
        v11 = (unsigned int)max_length;
        while ( 1 )
        {
          v12 = this->fields.overwriteLimitCountSvtIds;
          if ( !v12 )
            break;
          if ( v10 >= LODWORD(v12->max_length) )
            goto LABEL_21;
          if ( v12->m_Items[v10] == svtId )
          {
            overwriteLimitCounts = this->fields.overwriteLimitCounts;
            if ( !overwriteLimitCounts )
              break;
            if ( v10 >= LODWORD(overwriteLimitCounts->max_length) )
LABEL_21:
              sub_2213CE4(v6);
            if ( !v5 )
              break;
            v14 = (char *)overwriteLimitCounts + 4 * v10;
            items = v5->fields._items;
            v7 = *((unsigned int *)v14 + 8);
            v16 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                v7,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = size + 1;
              items->m_Items[size] = v7;
            }
          }
          if ( v11 == ++v10 )
            goto LABEL_18;
        }
LABEL_20:
        sub_2213CDC(v6, v7);
      }
    }
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_20;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  QuestRestrictionInfo_o *v8; // x19
  bool v9; // vf
  __int64 v10; // x22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v12; // x8
  __int64 v13; // x21
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  int i; // w24
  RestrictionWholeEntity_o *v17; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  __int64 max_length_low; // x8
  unsigned __int64 v21; // x27
  unsigned int v22; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v23; // x8
  QuestRestrictionInfo_SlotInfo_o *v24; // x8
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *RestrictionMessageEntityList; // x20
  QuestRestrictionInfo___c_c *v28; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__107_0; // x21
  Il2CppObject *v31; // x22
  struct QuestRestrictionInfo___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Func_object__object__o *v39; // x0
  intptr_t *v40; // x8
  struct QuestRestrictionInfo_SlotInfo_array *v41; // x8
  QuestRestrictionInfo_SlotInfo_o *v42; // x8
  System_Func_TSource__TResult__o *v43; // x21
  System_Collections_Generic_IEnumerable_string__o *v44; // x0

  v8 = this;
  if ( (byte_5971C26 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo_GetRestrictionErrorDialogConditionName__);
    sub_2213A60(&Method_QuestRestrictionInfo_GetRestrictionSlotConditionName__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__);
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C26 = 1;
  }
  if ( v8->fields.restrictionBaseEntity )
  {
    v9 = __OFSUB__(initPos, 1);
    v10 = (unsigned int)(initPos - 1);
    if ( (int)v10 < 0 != v9 )
      goto LABEL_9;
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_55;
    if ( (unsigned int)v10 >= LODWORD(slotInfos->max_length) )
      goto LABEL_54;
    v12 = slotInfos->m_Items[v10];
    if ( !v12 )
      goto LABEL_55;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v12->fields.summary, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_9:
      if ( !isCheckPosForWhole )
        return (System_String_o *)StringLiteral_1/*""*/;
      v13 = (unsigned int)(pos - 1);
      if ( pos < 1 )
        return v8->fields.confirmRestrictionMessage;
      restrictionWholeEntities = v8->fields.restrictionWholeEntities;
      if ( restrictionWholeEntities )
      {
        max_length = restrictionWholeEntities->max_length;
        if ( max_length >= 1 )
        {
          for ( i = 0; i < max_length; ++i )
          {
            if ( i >= (unsigned int)max_length )
              goto LABEL_54;
            v17 = restrictionWholeEntities->m_Items[i];
            if ( !v17 )
              goto LABEL_55;
            type = v17->fields.type;
            if ( (unsigned int)(type - 4) >= 4 )
            {
              if ( type != 8 )
                goto LABEL_36;
              this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
                this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
              }
              if ( SLODWORD(this->fields.uniqueSvtRestrictionEntity[2].fields.targetVals2) >= pos )
              {
                v23 = v8->fields.slotInfos;
                if ( !v23 )
                  goto LABEL_55;
                if ( (unsigned int)v13 >= LODWORD(v23->max_length) )
                  goto LABEL_54;
                v24 = v23->m_Items[v13];
                if ( !v24 )
                  goto LABEL_55;
                if ( v24->fields.slotType != 5 )
                {
                  this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v17->fields.summary, 0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    return v17->fields.summary;
                }
              }
            }
            targetVals2 = v17->fields.targetVals2;
            if ( !targetVals2 )
              goto LABEL_55;
            max_length_low = LODWORD(targetVals2->max_length);
            if ( max_length_low == 1 )
            {
              v21 = 0;
              v22 = 1;
              while ( v21 < v22 )
              {
                if ( targetVals2->m_Items[v21] == pos )
                {
                  this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v17->fields.summary, 0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    return v17->fields.summary;
                  LODWORD(max_length_low) = targetVals2->max_length;
                }
                ++v21;
                v22 = max_length_low;
                if ( (__int64)v21 >= (int)max_length_low )
                  goto LABEL_36;
              }
LABEL_54:
              sub_2213CE4(this);
            }
LABEL_36:
            max_length = restrictionWholeEntities->max_length;
          }
        }
        return v8->fields.confirmRestrictionMessage;
      }
    }
    else
    {
      v41 = v8->fields.slotInfos;
      if ( v41 )
      {
        if ( (unsigned int)v10 >= LODWORD(v41->max_length) )
          goto LABEL_54;
        v42 = v41->m_Items[v10];
        if ( v42 )
          return v42->fields.summary;
      }
    }
LABEL_55:
    sub_2213CDC(this, *(_QWORD *)&initPos);
  }
  RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                                                                        v8,
                                                                                        *(const MethodInfo **)&initPos);
  if ( initPos < 1 )
  {
    v39 = (System_Func_object__object__o *)sub_2213CCC(System_Func_RestrictionEntity__string__TypeInfo);
    v40 = &Method_QuestRestrictionInfo_GetRestrictionErrorDialogConditionName__;
  }
  else
  {
    v28 = QuestRestrictionInfo___c_TypeInfo;
    if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v26);
      v28 = QuestRestrictionInfo___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__107_0 = (System_Func_object__bool__o *)static_fields->__9__107_0;
    if ( !_9__107_0 )
    {
      if ( !*(&v28->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v28, v26);
        static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__107_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__107_0,
        v31,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__,
        0);
      v32 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v32->__9__107_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__107_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v32->__9__107_0,
        (int32_t)_9__107_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    RestrictionMessageEntityList = System_Linq_Enumerable__Where_object_(
                                     RestrictionMessageEntityList,
                                     (System_Func_TSource__bool__o *)_9__107_0,
                                     (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v39 = (System_Func_object__object__o *)sub_2213CCC(System_Func_RestrictionEntity__string__TypeInfo);
    v40 = &Method_QuestRestrictionInfo_GetRestrictionSlotConditionName__;
  }
  v43 = (System_Func_TSource__TResult__o *)v39;
  System_Func_object__object____ctor(v39, (Il2CppObject *)v8, *v40, 0);
  v44 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                              RestrictionMessageEntityList,
                                                              v43,
                                                              (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  return System_String__Join_75699092((System_String_o *)StringLiteral_43/*"\n"*/, v44, 0);
}


int32_t QuestRestrictionInfo__GetCorrectionIconId(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x12
  struct System_Int32_array *overwriteLimitCountIconIds; // x8
  il2cpp_array_size_t max_length; // x10
  __int64 v7; // x11
  int32_t *m_Items; // x9
  int32_t *v9; // x12

  if ( !isFollower
    && (overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds) != 0
    && (overwriteLimitCountIconIds = this->fields.overwriteLimitCountIconIds) != 0
    && (max_length = overwriteLimitCountSvtIds->max_length, (int)max_length >= 1) )
  {
    v7 = 0;
    m_Items = overwriteLimitCountIconIds->m_Items;
    v9 = overwriteLimitCountSvtIds->m_Items;
    while ( v9[v7] != svtId )
    {
      ++v7;
      ++m_Items;
      if ( (_DWORD)max_length == (_DWORD)v7 )
        goto LABEL_8;
    }
    if ( (unsigned int)v7 >= LODWORD(overwriteLimitCountIconIds->max_length) )
      sub_2213CE4(this);
  }
  else
  {
LABEL_8:
    m_Items = &this->fields.correctionIconId;
  }
  return *m_Items;
}


int32_t QuestRestrictionInfo__GetDataLostBattleId(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.dataLostBattleId;
}


System_Int32_array *QuestRestrictionInfo__GetDialogList(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  DataManager_o *Instance; // x0
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
  il2cpp_array_size_t max_length; // x24
  __int64 v18; // x21
  struct QuestRestrictionEntity_array *v19; // x8
  int32_t *v20; // x25
  int32_t v21; // w8
  Il2CppObject *MasterData_object; // x23
  UserQuestEntity_o *v23; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_5971C38 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5971C38 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_66;
    max_length = questRestrictionEntityList->max_length;
    if ( (int)max_length < 1 )
      goto LABEL_64;
    v18 = 0;
    while ( 1 )
    {
      v19 = this->fields.questRestrictionEntityList;
      if ( !v19 )
        goto LABEL_66;
      if ( (unsigned int)v18 >= LODWORD(v19->max_length) )
LABEL_67:
        sub_2213CE4(Instance);
      v20 = (int32_t *)v19->m_Items[v18];
      if ( !v20 )
        goto LABEL_66;
      v21 = v20[8];
      if ( v21 != 1 )
        break;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, id);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, id);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_66;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                    (UserQuestMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v20[4],
                                    0);
      if ( !Instance )
        goto LABEL_58;
      v23 = (UserQuestEntity_o *)Instance;
      Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
      if ( !(_DWORD)Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__HasStatus(v23, 16, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_58;
      }
LABEL_63:
      if ( (_DWORD)max_length == (_DWORD)++v18 )
        goto LABEL_64;
    }
    if ( v21 == 2 )
    {
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      Instance = (DataManager_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                    (PartyOrganizationUtility_o *)Instance,
                                    v20[4],
                                    v20[5],
                                    v20[6],
                                    1,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_63;
    }
    else if ( v21 != 3 )
    {
      goto LABEL_63;
    }
LABEL_58:
    if ( !v3 )
      goto LABEL_66;
    items = v3->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_66;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        v18,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size] = v18;
    }
    goto LABEL_63;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_66;
  v7 = restrictionMessageEntities->max_length;
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
        goto LABEL_67;
      v9 = restrictionMessageEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_66;
      frequencyType = v9->fields.frequencyType;
      if ( frequencyType != 1 )
        break;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      v11 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, id);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, id);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v11 )
        goto LABEL_66;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                    (UserQuestMaster_o *)v11,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    this->fields.questId,
                                    0);
      if ( !Instance )
        goto LABEL_27;
      v12 = (UserQuestEntity_o *)Instance;
      Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
      if ( !(_DWORD)Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__HasStatus(v12, 16, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_27;
      }
LABEL_32:
      v7 = restrictionMessageEntities->max_length;
      if ( (int)++v8 >= v7 )
        goto LABEL_64;
    }
    if ( frequencyType == 2 )
    {
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      Instance = (DataManager_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                    (PartyOrganizationUtility_o *)Instance,
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
      goto LABEL_66;
    v13 = v3->fields._items;
    id = (unsigned int)v9->fields.id;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !v13 )
      goto LABEL_66;
    v15 = v3->fields._size;
    if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        id,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = v15 + 1;
      v13->m_Items[v15] = id;
    }
    goto LABEL_32;
  }
LABEL_64:
  if ( !v3 )
LABEL_66:
    sub_2213CDC(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v9; // w12
  System_String_o **p_dialogMessage; // x8
  RestrictionMessageEntity_o *v11; // x13
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x9
  Il2CppClass **v13; // x8
  int v14; // w10
  Il2CppClass *v15; // x11
  QuestRestrictionEntity_o **m_Items; // x11
  QuestRestrictionEntity_o *v17; // x12
  Il2CppClass *v18; // x8

  v6 = this;
  if ( (byte_5971C39 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C39 = 1;
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
        v9 = 0;
        p_dialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
        while ( 1 )
        {
          if ( max_length == v9 )
            goto LABEL_32;
          v11 = restrictionMessageEntities->m_Items[v9];
          if ( !v11 )
            goto LABEL_31;
          if ( v11->fields.id == n )
            break;
          if ( (max_length & ~(max_length >> 31)) == ++v9 )
            return *p_dialogMessage;
        }
        p_dialogMessage = &v11->fields.dialogMessage;
      }
      return *p_dialogMessage;
    }
LABEL_31:
    sub_2213CDC(this, *(_QWORD *)&n);
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
    sub_2213CE4(this);
  }
  m_Items = questRestrictionEntityList->m_Items;
  while ( 1 )
  {
    v17 = *m_Items;
    if ( !*m_Items )
      goto LABEL_31;
    if ( v17->fields.restrictionId == restrictionId )
      break;
    --v14;
    ++m_Items;
    if ( !v14 )
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

  if ( (byte_5971C4F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_5971C4F = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0;
  }
  v7 = this->fields.dialogMessageInfoDictionary;
  if ( !v7 )
    sub_2213CDC(0, v6);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                                       messageId,
                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
}


System_String_o *QuestRestrictionInfo__GetDialogMessageMySvtPos(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v6; // w24
  RestrictionWholeEntity_o *v7; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_5971C52 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C52 = 1;
  }
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  entity = 0;
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
        sub_2213CE4(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 5 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_2213CDC(this, method);
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
  unsigned int v6; // w24
  RestrictionWholeEntity_o *v7; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_5971C54 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C54 = 1;
  }
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  entity = 0;
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
        sub_2213CE4(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 6 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_2213CDC(this, method);
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
  unsigned int v6; // w24
  RestrictionWholeEntity_o *v7; // x25
  int32_t type; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_5971C51 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C51 = 1;
  }
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  entity = 0;
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
        sub_2213CE4(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      type = v7->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_2213CDC(this, method);
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
  __int64 v9; // x21
  System_String_o **p_bits; // x20
  __int64 v11; // x23
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x9
  Il2CppClass **v13; // x8
  int max_length; // w10
  Il2CppClass *v15; // x11
  QuestRestrictionEntity_o **m_Items; // x11
  QuestRestrictionEntity_o *v17; // x12
  Il2CppClass *v18; // x8

  v6 = this;
  if ( (byte_5971C3A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C3A = 1;
  }
  if ( v6->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         n,
                                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
          v9 = 0;
          p_bits = (System_String_o **)&StringLiteral_1/*""*/;
          while ( 1 )
          {
            if ( (unsigned int)v9 >= dialogMessageInfoDictionary )
              goto LABEL_33;
            v11 = *((_QWORD *)&v8->fields.eventId + v9);
            if ( !v11 )
              goto LABEL_32;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 32), 0);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
            dialogMessageInfoDictionary = (int)v8->fields.dialogMessageInfoDictionary;
            if ( (int)++v9 >= dialogMessageInfoDictionary )
              return *p_bits;
          }
          p_bits = (System_String_o **)(v11 + 32);
        }
        return *p_bits;
      }
    }
LABEL_32:
    sub_2213CDC(this, *(_QWORD *)&n);
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
    sub_2213CE4(this);
  }
  m_Items = questRestrictionEntityList->m_Items;
  while ( 1 )
  {
    v17 = *m_Items;
    if ( !*m_Items )
      goto LABEL_32;
    if ( v17->fields.restrictionId == restrictionId )
      break;
    --max_length;
    ++m_Items;
    if ( !max_length )
      goto LABEL_27;
  }
  p_bits = &v17->fields.title;
  return *p_bits;
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
  RestrictionEntity_o **m_Items; // x11
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
      sub_2213CE4(this);
    v8 = v6[4];
    if ( !v8 )
      goto LABEL_18;
    if ( LODWORD(v8->_1.name) != restrictionId && max_length >= 1 )
    {
      m_Items = restrictionEntityList->m_Items;
      while ( 1 )
      {
        v10 = *m_Items;
        if ( !*m_Items )
          break;
        if ( v10->fields.id == restrictionId )
          return v10->fields.type;
        --max_length;
        ++m_Items;
        if ( !max_length )
          goto LABEL_15;
      }
LABEL_18:
      sub_2213CDC(this, *(_QWORD *)&n);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  QuestRestrictionInfo_o *v9; // x20
  struct RestrictionBaseEntity_o *v11; // x8
  System_String_o **p_subMessage; // x8
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  il2cpp_array_size_t max_length; // x21
  __int64 v15; // x22
  struct QuestRestrictionEntity_array *v16; // x8
  QuestRestrictionEntity_o *v17; // x23
  System_String_o *v18; // x1
  bool v19; // w20

  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  v9 = this;
  if ( restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(restrictionBaseEntity->fields.subMessage, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v11 = v9->fields.restrictionBaseEntity;
      if ( v11 )
      {
        p_subMessage = &v11->fields.subMessage;
LABEL_15:
        v18 = *p_subMessage;
        v19 = 1;
        goto LABEL_16;
      }
LABEL_17:
      sub_2213CDC(this, message);
    }
  }
  else
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_17;
    max_length = questRestrictionEntityList->max_length;
    if ( (int)max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = v9->fields.questRestrictionEntityList;
        if ( !v16 )
          goto LABEL_17;
        if ( (unsigned int)v15 >= LODWORD(v16->max_length) )
          sub_2213CE4(this);
        v17 = v16->m_Items[v15];
        if ( !v17 )
          goto LABEL_17;
        this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v17->fields.noticeMessage, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( (_DWORD)max_length == (_DWORD)++v15 )
          goto LABEL_13;
      }
      p_subMessage = &v17->fields.noticeMessage;
      goto LABEL_15;
    }
  }
LABEL_13:
  v18 = 0;
  v19 = 0;
LABEL_16:
  *message = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)message, (int32_t)v18, (System_String_o *)method, v3, v4, v5, v6, v7);
  return v19;
}


System_String_o *QuestRestrictionInfo__GetFixNpcMessage(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  if ( (byte_5971C44 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10710/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_5971C44 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10710/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
}


System_String_o *QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971C43 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10711/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_5971C43 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10711/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0);
}


int32_t QuestRestrictionInfo__GetFixedMyServantPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t v5; // w19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v9; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5971C5A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_5971C5A = 1;
  }
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  memset(&v11, 0, sizeof(v11));
  if ( !restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v5 = 0;
  v9 = 0;
  v10 = &v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields._current )
      sub_2213CDC(v6, v7);
    v5 += *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)off_18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v5;
}


System_Int32_array *QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971C57 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971C57 = 1;
  }
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  memset(&v13, 0, sizeof(v13));
  if ( !restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v5 )
      sub_2213CDC(v8, v9);
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)v13.fields._current,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v5 )
LABEL_15:
    sub_2213CDC(fixedMyServantIndividualitiesList, v6);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_5971C36 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971C36 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_2213CDC(this, *(_QWORD *)&svtId);
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
    sub_2213CE4(this);
  return targetVals->m_Items[num] != svtId;
}


System_String_o *QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971C37 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10709/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_5971C37 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10709/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0);
}


System_Int32_array *QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Int32_array **p_fixedMyServantSingleIndividualities; // x8
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8

  if ( this->fields.isFixedMyServantSingle )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      p_fixedMyServantSingleIndividualities = &this->fields.fixedMyServantSingleIndividualities;
      return *p_fixedMyServantSingleIndividualities;
    }
    fixedMyServantSingleRestrictionEntity = this->fields.fixedMyServantSingleRestrictionEntity;
    if ( fixedMyServantSingleRestrictionEntity )
    {
      p_fixedMyServantSingleIndividualities = &fixedMyServantSingleRestrictionEntity->fields.targetVals;
      return *p_fixedMyServantSingleIndividualities;
    }
  }
  return 0;
}


int32_t QuestRestrictionInfo__GetFixedPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int32_t v5; // w19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v9; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5971C5B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_5971C5B = 1;
  }
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  memset(&v11, 0, sizeof(v11));
  if ( !restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v5 = 0;
  v9 = 0;
  v10 = &v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields._current )
      sub_2213CDC(v6, v7);
    v5 += *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)off_18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v5;
}


System_Int32_array *QuestRestrictionInfo__GetFixedPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x1
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971C59 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971C59 = 1;
  }
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  memset(&v13, 0, sizeof(v13));
  if ( !restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v5 )
      sub_2213CDC(v8, v9);
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)v13.fields._current,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v5 )
LABEL_15:
    sub_2213CDC(fixedIndividualitiesList, v6);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t QuestRestrictionInfo__GetFixedServantPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x9
  _BOOL4 isFixedMyServantPosition; // w8
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int v6; // w22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v12; // w20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5971C33 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_5971C33 = 1;
  }
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  isFixedMyServantPosition = this->fields.isFixedMyServantPosition;
  memset(&v17, 0, sizeof(v17));
  if ( !restrictionBaseEntity )
  {
    if ( isFixedMyServantPosition )
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
  if ( isFixedMyServantPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v6 = 0;
    v17 = v16;
    v16.fields._list = 0;
    *(_QWORD *)&v16.fields._index = &v17;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v7 )
        break;
      if ( !v17.fields._current )
        sub_2213CDC(v7, v8);
      v6 += LODWORD(v17.fields._current[1].monitor);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v6 = 0;
  }
  v12 = v6 + this->fields.isNeedStarting;
  if ( !this->fields.isFixedPosition )
    return v12;
  fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
LABEL_30:
    sub_2213CDC(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v17 = v16;
  v16.fields._list = 0;
  *(_QWORD *)&v16.fields._index = &v17;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v17.fields._current )
      sub_2213CDC(v13, v14);
    v12 += LODWORD(v17.fields._current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v12;
}


System_String_o *QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971C35 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10708/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_5971C35 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10708/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0);
}


System_Int32_array *QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  System_Collections_Generic_List_int__o *v4; // x19
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5971C32 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971C32 = 1;
  }
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  memset(&v16, 0, sizeof(v16));
  if ( restrictionBaseEntity )
  {
    v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v4,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      v16 = v15;
      v15.fields._list = 0;
      *(_QWORD *)&v15.fields._index = &v16;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v7 )
          break;
        if ( !v4 )
          sub_2213CDC(v7, v8);
        System_Collections_Generic_List_int___AddRange(
          v4,
          (System_Collections_Generic_IEnumerable_T__o *)v16.fields._current,
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      v16 = v15;
      v15.fields._list = 0;
      *(_QWORD *)&v15.fields._index = &v16;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v9 )
          break;
        if ( !v4 )
          sub_2213CDC(v9, v10);
        System_Collections_Generic_List_int___AddRange(
          v4,
          (System_Collections_Generic_IEnumerable_T__o *)v16.fields._current,
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      v16 = v15;
      v15.fields._list = 0;
      *(_QWORD *)&v15.fields._index = &v16;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v11 )
          break;
        if ( !v4 )
          sub_2213CDC(v11, v12);
        System_Collections_Generic_List_int___AddRange(
          v4,
          (System_Collections_Generic_IEnumerable_T__o *)v16.fields._current,
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v4 )
    {
      if ( v4->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v4,
                 (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0;
    }
LABEL_38:
    sub_2213CDC(fixedMyServantIndividualitiesList, v6);
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
  if ( (byte_5971C31 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10713/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_5971C31 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10713/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0);
}


RestrictionEntity_o *QuestRestrictionInfo__GetGrandServantRestrictionEntity(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass213_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_RestrictionEntity__o *grandServantRestrictionEntityList; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5971C5D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass213_0_TypeInfo);
    byte_5971C5D = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass213_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass213_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass213_0___ctor(v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  v5->fields.initPos = initPos;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__0__,
    0);
  return (RestrictionEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
}


RestrictionEntity_array *QuestRestrictionInfo__GetList(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.restrictionEntityList;
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
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v58; // w24
  RestrictionWholeEntity_o *v59; // x28
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int type; // w8
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  int v71; // w8
  void *v72; // x21
  unsigned int v73; // w25
  __int64 v74; // x26
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_String_o *v81; // x0
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0

  if ( (byte_5971C1C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_2213A60(&StringLiteral_11585/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_2213A60(&StringLiteral_11586/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_2213A60(&StringLiteral_11582/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_2213A60(&StringLiteral_6739/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_5971C1C = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_105;
  if ( !isSlotOnly )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6739/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11586/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
    v25 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11585/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_75651716(summary, v25, 0);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_107;
        goto LABEL_16;
      }
    }
    if ( !v21 )
      goto LABEL_107;
LABEL_16:
    items = v21->fields._items;
    v33 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_107;
    size = v21->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v35[4] = (Il2CppClass *)summary;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)summary, v26, v27, v28, v29, v30, v31);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11582/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_75651716(summary, v25, 0);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_107;
        goto LABEL_29;
      }
    }
    if ( !v21 )
      goto LABEL_107;
LABEL_29:
    v42 = v21->fields._items;
    v43 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !v42 )
      goto LABEL_107;
    v44 = v21->fields._size;
    if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v21->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)summary;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)summary, v36, v37, v38, v39, v40, v41);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_75651716(summary, v25, 0);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_107;
        goto LABEL_42;
      }
    }
    if ( !v21 )
      goto LABEL_107;
LABEL_42:
    v52 = v21->fields._items;
    v53 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !v52 )
      goto LABEL_107;
    v54 = v21->fields._size;
    if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v21->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)summary;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)summary, v46, v47, v48, v49, v50, v51);
    }
LABEL_46:
    restrictionWholeEntities = this->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_107;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        if ( v58 >= max_length )
          goto LABEL_108;
        v59 = restrictionWholeEntities->m_Items[v58];
        if ( !v59 )
          goto LABEL_107;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v59->fields.summary, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          break;
LABEL_76:
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v58 >= max_length )
          goto LABEL_86;
      }
      summary = v59->fields.summary;
      if ( !isNoneTitle )
      {
        IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)summary, 0);
        summary = (System_String_o *)IsNullOrEmpty;
      }
      type = v59->fields.type;
      if ( type <= 5 )
      {
        if ( type > 3 )
        {
          if ( type == 4 )
          {
            if ( !servantPos )
              goto LABEL_71;
          }
          else if ( !myServantPos )
          {
            goto LABEL_71;
          }
        }
        else if ( type == 1 )
        {
          if ( !individuality )
            goto LABEL_71;
        }
        else if ( type != 2 || !allOutBattle )
        {
          goto LABEL_71;
        }
      }
      else
      {
        if ( type <= 7 )
        {
          if ( !supportPos )
            goto LABEL_71;
          goto LABEL_70;
        }
        if ( type == 8 )
        {
          if ( !needStarting )
            goto LABEL_71;
        }
        else
        {
          if ( type != 9 )
          {
            if ( type != 10 || !dataLostBattle )
              goto LABEL_71;
            goto LABEL_70;
          }
          if ( !uniqueIndividuality )
          {
LABEL_71:
            if ( !v21 )
              goto LABEL_107;
            v67 = v21->fields._items;
            v68 = Method_System_Collections_Generic_List_string__Add__;
            ++v21->fields._version;
            if ( !v67 )
              goto LABEL_107;
            v69 = v21->fields._size;
            if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)summary,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
            }
            else
            {
              v70 = &v67->obj.klass + v69;
              v21->fields._size = v69 + 1;
              v70[4] = (Il2CppClass *)summary;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 4), (int32_t)summary, v60, v61, v62, v63, v64, v65);
            }
            goto LABEL_76;
          }
        }
      }
LABEL_70:
      IsNullOrEmpty = System_String__Concat_75651716(summary, v25, 0);
      summary = (System_String_o *)IsNullOrEmpty;
      goto LABEL_71;
    }
  }
LABEL_86:
  if ( pos )
  {
    IsNullOrEmpty = this->fields.restrictionSlotDetailDictionary;
    if ( !IsNullOrEmpty
      || (IsNullOrEmpty = System_Collections_Generic_Dictionary_int__object___get_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
                            pos,
                            (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0 )
    {
LABEL_107:
      sub_2213CDC(IsNullOrEmpty, summary);
    }
    v71 = *((_DWORD *)IsNullOrEmpty + 6);
    v72 = IsNullOrEmpty;
    if ( v71 >= 1 )
    {
      v73 = 0;
      while ( v73 < v71 )
      {
        v74 = *((_QWORD *)v72 + (int)v73 + 4);
        if ( !v74 )
          goto LABEL_107;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v74 + 24), 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v74 + 24);
          }
          else
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
            v81 = LocalizationManager__Get((System_String_o *)StringLiteral_6739/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
            IsNullOrEmpty = System_String__Format(v81, *(Il2CppObject **)(v74 + 24), 0);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          if ( !v21 )
            goto LABEL_107;
          v82 = v21->fields._items;
          v83 = Method_System_Collections_Generic_List_string__Add__;
          ++v21->fields._version;
          if ( !v82 )
            goto LABEL_107;
          v84 = v21->fields._size;
          if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v85 = &v82->obj.klass + v84;
            v21->fields._size = v84 + 1;
            v85[4] = (Il2CppClass *)summary;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v85 + 4), (int32_t)summary, v75, v76, v77, v78, v79, v80);
          }
        }
        v71 = *((_DWORD *)v72 + 6);
        if ( (int)++v73 >= v71 )
          goto LABEL_105;
      }
LABEL_108:
      sub_2213CE4(IsNullOrEmpty);
    }
  }
LABEL_105:
  if ( !v21 )
    goto LABEL_107;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *QuestRestrictionInfo__GetMessages_50432964(
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
  System_String_o *v19; // x26
  System_Collections_Generic_List_object__o *v20; // x27
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int max_length; // w8
  unsigned int v44; // w19
  RestrictionEntity_o *v45; // x28
  const MethodInfo *v46; // x2
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int type; // w8
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0

  if ( (byte_5971C1D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_2213A60(&StringLiteral_11586/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_2213A60(&StringLiteral_11582/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_2213A60(&StringLiteral_6739/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_5971C1D = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, entities);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6739/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11586/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  v20 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11582/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
  v22 = IsNullOrEmpty;
  if ( isNoneTitle )
  {
    if ( !fatigue )
      goto LABEL_11;
  }
  else
  {
    IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0);
    v22 = IsNullOrEmpty;
    if ( !fatigue )
    {
LABEL_11:
      if ( !v20 )
        goto LABEL_74;
      goto LABEL_15;
    }
  }
  IsNullOrEmpty = System_String__Concat_75651716(v22, v19, 0);
  v22 = IsNullOrEmpty;
  if ( !v20 )
    goto LABEL_74;
LABEL_15:
  items = v20->fields._items;
  v30 = Method_System_Collections_Generic_List_string__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v20->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v22,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    v22 = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0);
      v22 = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_75651716(v22, v19, 0);
      v22 = IsNullOrEmpty;
    }
    if ( !v20
      || (v39 = v20->fields._items,
          v40 = Method_System_Collections_Generic_List_string__Add__,
          ++v20->fields._version,
          !v39) )
    {
LABEL_74:
      sub_2213CDC(IsNullOrEmpty, v22);
    }
    v41 = v20->fields._size;
    if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v22,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v20->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)v22;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v22, v33, v34, v35, v36, v37, v38);
    }
  }
  if ( !entities )
    goto LABEL_74;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= max_length )
        sub_2213CE4(IsNullOrEmpty);
      v45 = entities->m_Items[v44];
      if ( !v45 )
        goto LABEL_74;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v45->fields.name, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        break;
LABEL_64:
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_72;
    }
    IsNullOrEmpty = QuestRestrictionInfo__GetRestrictionInfoConditionName(this, v45, v46);
    v22 = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = RestrictionEntity__GetTitle(v45, IsNullOrEmpty, 0);
      v22 = IsNullOrEmpty;
    }
    type = v45->fields.type;
    if ( type <= 8 )
    {
      if ( type <= 6 )
      {
        if ( type == 1 )
        {
          if ( !individuality )
            goto LABEL_59;
        }
        else if ( type != 6 || !uniqueServant )
        {
          goto LABEL_59;
        }
        goto LABEL_58;
      }
      if ( type == 7 )
      {
        if ( !supportPos )
          goto LABEL_59;
        goto LABEL_58;
      }
    }
    else if ( type <= 13 )
    {
      if ( type != 9 )
      {
        if ( type != 13 || !allOutBattle )
          goto LABEL_59;
        goto LABEL_58;
      }
    }
    else if ( type != 14 )
    {
      if ( type != 15 )
      {
        if ( type != 17 || !dataLostBattle )
          goto LABEL_59;
        goto LABEL_58;
      }
      if ( !uniqueIndividuality )
      {
LABEL_59:
        if ( !v20 )
          goto LABEL_74;
        v54 = v20->fields._items;
        v55 = Method_System_Collections_Generic_List_string__Add__;
        ++v20->fields._version;
        if ( !v54 )
          goto LABEL_74;
        v56 = v20->fields._size;
        if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v22,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &v54->obj.klass + v56;
          v20->fields._size = v56 + 1;
          v57[4] = (Il2CppClass *)v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v57 + 4), (int32_t)v22, v47, v48, v49, v50, v51, v52);
        }
        goto LABEL_64;
      }
LABEL_58:
      IsNullOrEmpty = System_String__Concat_75651716(v22, v19, 0);
      v22 = IsNullOrEmpty;
      goto LABEL_59;
    }
    if ( !fixedPos )
      goto LABEL_59;
    goto LABEL_58;
  }
LABEL_72:
  if ( !v20 )
    goto LABEL_74;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_5971C63 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
    byte_5971C63 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
    return **(System_String_o ***)(qword_5984390 + 184);
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  if ( !grandServantRestrictionEntityList )
    goto LABEL_13;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( v7 < *((_DWORD *)grandServantRestrictionEntityList + 6) )
  {
    grandServantRestrictionEntityList = System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)grandServantRestrictionEntityList,
                                          v7,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
    if ( grandServantRestrictionEntityList )
    {
      if ( *((_DWORD *)grandServantRestrictionEntityList + 8) == 21 && !v6 )
      {
        v6 = *((_DWORD *)grandServantRestrictionEntityList + 15);
        v5 = v7;
      }
      grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
      ++v7;
      if ( grandServantRestrictionEntityList )
        continue;
    }
    goto LABEL_13;
  }
  grandServantRestrictionEntityList = System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)grandServantRestrictionEntityList,
                                        v5,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
  if ( !grandServantRestrictionEntityList )
LABEL_13:
    sub_2213CDC(grandServantRestrictionEntityList, method);
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
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int v6; // w8
  unsigned int v7; // w24
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
  int max_length; // w9
  unsigned int v19; // w10
  int32_t priority; // w12
  RestrictionEntity_o *v21; // x13
  Il2CppObject *v23; // x8
  RestrictionEntity_o *v24; // x8
  Il2CppObject *v25; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_5971C42 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C42 = 1;
  }
  restrictionBaseEntity = v3->fields.restrictionBaseEntity;
  entity = 0;
  v25 = 0;
  if ( !restrictionBaseEntity )
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_38;
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
    {
      method = 0;
LABEL_53:
      if ( (unsigned int)method < max_length )
      {
        v24 = restrictionEntityList->m_Items[(int)method];
        if ( !v24 )
          goto LABEL_38;
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v24->fields.id, v2);
      }
    }
    else
    {
      v19 = 0;
      priority = 0;
      method = 0;
      while ( max_length != v19 )
      {
        v21 = restrictionEntityList->m_Items[v19];
        if ( !v21 )
          goto LABEL_38;
        if ( v21->fields.type == 10 && !priority )
        {
          priority = v21->fields.priority;
          method = (const MethodInfo *)v19;
        }
        if ( (max_length & ~(max_length >> 31)) == ++v19 )
          goto LABEL_53;
      }
    }
LABEL_58:
    sub_2213CE4(this);
  }
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_38;
  v6 = restrictionWholeEntities->max_length;
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( v7 < v6 )
    {
      v8 = restrictionWholeEntities->m_Items[v7];
      if ( !v8 )
        goto LABEL_38;
      if ( v8->fields.type == 3 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_38;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v8->fields.restrictionMessageId,
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v23 = entity;
          if ( !entity )
            goto LABEL_38;
          return (System_String_o *)v23[1].monitor;
        }
      }
      v6 = restrictionWholeEntities->max_length;
      if ( (int)++v7 >= v6 )
        goto LABEL_15;
    }
    goto LABEL_58;
  }
LABEL_15:
  slotInfos = v3->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_38;
  v10 = 0;
  while ( 1 )
  {
    v11 = slotInfos->max_length;
    if ( v10 >= v11 )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( v10 >= (unsigned int)v11 )
      goto LABEL_58;
    v12 = slotInfos->m_Items[v10];
    if ( !v12 )
      goto LABEL_38;
    if ( v12->fields.slotType )
    {
      ++v10;
      goto LABEL_37;
    }
    this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
    if ( !this )
      goto LABEL_38;
    this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                       (System_Collections_Generic_Dictionary_int__object__o *)this,
                                       ++v10,
                                       (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_38;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v10,
                                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( !this )
        goto LABEL_38;
      dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
      v14 = this;
      if ( dialogMessageInfoDictionary >= 1 )
        break;
    }
LABEL_37:
    slotInfos = v3->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_38;
  }
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= dialogMessageInfoDictionary )
      goto LABEL_58;
    v16 = *((_QWORD *)&v14->fields.eventId + (int)v15);
    if ( !v16 )
      goto LABEL_38;
    if ( *(_DWORD *)(v16 + 44) && !*(_DWORD *)(v16 + 40) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_38;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &v25,
                                         *(_DWORD *)(v16 + 44),
                                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    dialogMessageInfoDictionary = (int)v14->fields.dialogMessageInfoDictionary;
    if ( (int)++v15 >= dialogMessageInfoDictionary )
      goto LABEL_37;
  }
  v23 = v25;
  if ( !v25 )
LABEL_38:
    sub_2213CDC(this, method);
  return (System_String_o *)v23[1].monitor;
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *RestrictedName; // x19
  LocalizationManager_c *v12; // x0
  __int64 *v13; // x20
  System_String_o *v14; // x0

  if ( (byte_5971C4B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10715/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_2213A60(&StringLiteral_10718/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_5971C4B = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( System_String__IsNullOrEmpty(SlotMessage, 0) )
  {
    RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(this, pos, v8);
    if ( haveIndividualityServant || QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, pos, v10) )
    {
      v12 = LocalizationManager_TypeInfo;
      v13 = &StringLiteral_10715/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
LABEL_8:
        v14 = LocalizationManager__Get((System_String_o *)*v13, 0);
        return System_String__Format(v14, RestrictedName, 0);
      }
    }
    else
    {
      v12 = LocalizationManager_TypeInfo;
      v13 = &StringLiteral_10718/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_8;
    }
    j_il2cpp_runtime_class_init_0(v12, v9);
    goto LABEL_8;
  }
  return SlotMessage;
}


System_Int32_array *QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  System_Collections_Generic_List_int__o *v15; // x20
  int v16; // w8
  void *v17; // x19
  unsigned int v18; // w22
  __int64 v19; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x1
  const MethodInfo_38834C4 *v23; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v26; // x20
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_5971C4D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass192_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
    byte_5971C4D = 1;
  }
  v5 = sub_2213CCC(QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass192_0___ctor((QuestRestrictionInfo___c__DisplayClass192_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  *(_DWORD *)(v5 + 24) = index;
  if ( restrictionBaseEntity )
  {
    v15 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v16 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v17 = restrictionSlotDetailDictionary;
    if ( v16 >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= v16 )
          sub_2213CE4(restrictionSlotDetailDictionary);
        v19 = *((_QWORD *)v17 + (int)v18 + 4);
        if ( !v19 )
          break;
        if ( *(_DWORD *)(v19 + 32) == 1 )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v15,
            *(System_Collections_Generic_IEnumerable_T__o **)(v19 + 40),
            (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v16 = *((_DWORD *)v17 + 6);
        if ( (int)++v18 >= v16 )
          goto LABEL_15;
      }
LABEL_29:
      sub_2213CDC(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v15 )
      goto LABEL_29;
    if ( v15->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                  (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v23 = (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v29 = System_Linq_Enumerable__Intersect_int_(monitor, v22, v23);
      return System_Linq_Enumerable__ToArray_int_(
               v29,
               (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v26 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v26,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass192_0__GetMyServantOrNpcSvtIdList_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v27 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v27 )
      {
        v28 = v27;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0);
        v23 = (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v28[2].monitor;
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
  QuestRestrictionInfo___c__DisplayClass206_0_o *v9; // x22
  void *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_int__object__o *v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  long double v21; // q0
  _QWORD *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Int32_array *MyServantOrNpcSvtIdList; // x27
  System_Predicate_object__o *v28; // x24
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  long double v35; // q0
  _QWORD *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  int32_t MyServantOrSupportTargetPos; // w22
  System_Collections_Generic_List_int__o *v41; // x23
  int v42; // w8
  void *v43; // x24
  unsigned int v44; // w21
  FollowerInfo_o *v45; // x25
  ServantLeaderInfo_o *v46; // x26
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividualityFull; // x27
  const MethodInfo *v49; // x7
  const MethodInfo *v50; // x3
  __int64 v51; // x1
  __int64 v52; // x27
  __int64 v53; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v57; // x27
  __int64 v58; // x1
  __int64 v59; // x26
  __int64 v60; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v61; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-70h]
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_5971C56 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Union_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass206_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass206_0_TypeInfo);
    byte_5971C56 = 1;
  }
  isWhole = 0;
  v9 = (QuestRestrictionInfo___c__DisplayClass206_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass206_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass206_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_57;
  v9->fields.index = index;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)npcInfoDictionary, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v22 = Method_System_Array_Empty_int___;
  v23 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v23 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v23 = v22[7];
  }
  v24 = *(_QWORD *)(v23 + 16);
  if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
    v24 = sub_224B908(v21);
  if ( !*(_DWORD *)(v24 + 228) )
    *(__n128 *)&v21 = j_il2cpp_runtime_class_init_0(v24, v19);
  v25 = *(_QWORD *)(v22[7] + 16LL);
  if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
    v25 = sub_224B908(v21);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v25 + 184);
    v28 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v28,
      (Il2CppObject *)v9,
      Method_QuestRestrictionInfo___c__DisplayClass206_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_57;
    v29 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v28,
            (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v29 )
    {
      v30 = v29;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_57;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0);
      v32 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v30[2].monitor,
              CollectionList,
              (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v32,
                                  (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v9->fields.index, v20);
    if ( !MyServantOrNpcSvtIdList )
    {
      v36 = Method_System_Array_Empty_int___;
      v37 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v37 )
      {
        sub_224B964(Method_System_Array_Empty_int___);
        v37 = v36[7];
      }
      v38 = *(_QWORD *)(v37 + 16);
      if ( (*(_WORD *)(v38 + 309) & 1) == 0 )
        v38 = sub_224B908(v35);
      if ( !*(_DWORD *)(v38 + 228) )
        *(__n128 *)&v35 = j_il2cpp_runtime_class_init_0(v38, v33);
      v39 = *(_QWORD *)(v36[7] + 16LL);
      if ( (*(_WORD *)(v39 + 309) & 1) == 0 )
        v39 = sub_224B908(v35);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v39 + 184);
    }
    if ( !this->fields.restrictionBaseEntity )
    {
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(this, v9->fields.index, v34);
      goto LABEL_30;
    }
  }
  MyServantOrSupportTargetPos = v9->fields.index;
LABEL_30:
  v41 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = NpcFollowerMaster__GetQuestFollowerList(
               (NpcFollowerMaster_o *)Instance,
               this->fields.questId,
               this->fields.questPhase,
               0);
  if ( !Instance )
    goto LABEL_57;
  v42 = *((_DWORD *)Instance + 6);
  v43 = Instance;
  if ( v42 >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= v42 )
        sub_2213CE4(Instance);
      v45 = (FollowerInfo_o *)*((_QWORD *)v43 + (int)v44 + 4);
      Instance = (void *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0);
      if ( !v45 )
        break;
      Instance = FollowerInfo__getServantLeaderInfo(v45, 0, (int32_t)Instance, 0);
      if ( Instance )
      {
        v46 = (ServantLeaderInfo_o *)Instance;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0);
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(v45, 0, ReturnTypeByQuestId, 0);
        Instance = ServantLeaderInfo__GetOverwriteStatus(v46, 0);
        if ( !Instance )
          break;
        Instance = (void *)QuestRestrictionInfo__IsRestriction_50437900(
                             this,
                             &isWhole,
                             NpcServantIndividualityFull,
                             *((_DWORD *)Instance + 6),
                             v46->fields.lv,
                             MyServantOrSupportTargetPos,
                             3,
                             v49);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_50459340(
                               this,
                               NpcServantIndividualityFull,
                               MyServantOrSupportTargetPos,
                               v50);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v52 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
            v53 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51);
            *(_QWORD *)&v66.fields.currentCryptoKey = v52;
            *(_QWORD *)&v66.fields.fakeValue = v53;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v66, 0);
            if ( !v41 )
              break;
            items = v41->fields._items;
            v55 = Method_System_Collections_Generic_List_int__Add__;
            ++v41->fields._version;
            if ( !items )
              break;
            size = v41->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v41,
                (int32_t)Instance,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
            }
            else
            {
              v41->fields._size = size + 1;
              items->m_Items[size] = (int)Instance;
            }
            v57 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v46->fields.svtId, 0);
            if ( !v57 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v57,
                                 (int32_t)Instance,
                                 (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v60 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
              v59 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
              v61 = *npcInfoDictionary;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
              *(_QWORD *)&v67.fields.currentCryptoKey = v60;
              *(_QWORD *)&v67.fields.fakeValue = v59;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
              if ( !v61 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v61,
                (int32_t)Instance,
                (Il2CppObject *)v45,
                (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v42 = *((_DWORD *)v43 + 6);
      if ( (int)++v44 >= v42 )
        goto LABEL_55;
    }
LABEL_57:
    sub_2213CDC(Instance, v11);
  }
LABEL_55:
  v62 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (const MethodInfo_38A1344 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v62,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  System_String_o *SlotMessage; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 *v10; // x8
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_String_o *RestrictedName; // x19
  bool IsNullOrEmpty; // w8
  LocalizationManager_c *v16; // x0
  int v17; // w9
  System_String_o *v18; // x0
  int *MyServantOrNpcSvtIdList; // x0
  __int64 v20; // x1
  int v21; // w8
  int *v22; // x19
  __int64 v23; // x20
  int v24; // w23

  if ( (byte_5971C4C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10715/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_2213A60(&StringLiteral_10720/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_2213A60(&StringLiteral_10719/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_2213A60(&StringLiteral_10717/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_2213A60(&StringLiteral_10716/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_5971C4C = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v10 = &StringLiteral_10717/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v10, 0);
  }
  if ( !QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, pos, v9) )
  {
    if ( !haveIndividualityServant )
    {
      MyServantOrNpcSvtIdList = (int *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, pos, v13);
      if ( MyServantOrNpcSvtIdList && (v21 = MyServantOrNpcSvtIdList[6], v22 = MyServantOrNpcSvtIdList, v21 >= 1) )
      {
        v23 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v23 >= v21 )
            sub_2213CE4(MyServantOrNpcSvtIdList);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
          v24 = v22[v23 + 8];
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
            MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
          }
          if ( v24 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 932LL) )
            break;
          v21 = v22[6];
          if ( (int)++v23 >= v21 )
            goto LABEL_29;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
        v10 = &StringLiteral_10719/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
      }
      else
      {
LABEL_29:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
        v10 = &StringLiteral_10720/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v10, 0);
    }
    v16 = LocalizationManager_TypeInfo;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_14;
    goto LABEL_13;
  }
  RestrictedName = QuestRestrictionInfo__GetRestrictedName(this, pos, v13);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RestrictedName, 0);
  v16 = LocalizationManager_TypeInfo;
  v17 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsNullOrEmpty )
  {
    if ( v17 )
    {
LABEL_14:
      v10 = &StringLiteral_10716/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
      return LocalizationManager__Get((System_String_o *)*v10, 0);
    }
LABEL_13:
    j_il2cpp_runtime_class_init_0(v16, v12);
    goto LABEL_14;
  }
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10715/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, 0);
  return System_String__Format(v18, (Il2CppObject *)RestrictedName, 0);
}


int32_t QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v17; // x20
  Il2CppClass *klass; // x8

  if ( (byte_5971C4E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass193_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
    byte_5971C4E = 1;
  }
  v5 = sub_2213CCC(QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass193_0___ctor((QuestRestrictionInfo___c__DisplayClass193_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  *(_DWORD *)(v5 + 24) = index;
  if ( restrictionBaseEntity )
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
  v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass193_0__GetMyServantOrSupportTargetPos_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v6 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v17,
         (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  klass = v6[3].klass;
  if ( !klass )
LABEL_14:
    sub_2213CDC(v6, v7);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_2213CE4(v6);
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
    sub_2213CE4(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&pos);
  return v4->fields.individualityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetNeedIndividualityMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *DialogMessage; // x19
  __int64 v12; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v13; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_5971C50 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C50 = 1;
  }
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  memset(&v14, 0, sizeof(v14));
  if ( restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_2213CDC(0, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v14,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    v12 = 0;
    v13 = &v14;
    while ( 1 )
    {
      v7 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
             &v14,
             (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v7 )
        break;
      if ( !v14.fields._current.fields.value )
        sub_2213CDC(v7, v8);
      if ( LODWORD(v14.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v14.fields._current.fields.key, 0, v9);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v14,
          (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v14,
      (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *QuestRestrictionInfo__GetNeedStartingSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  System_Collections_Generic_List_int__o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v10; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v11; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971C58 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971C58 = 1;
  }
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  memset(&v12, 0, sizeof(v12));
  if ( !restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v10 = 0;
  v11 = &v12;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_2213CDC(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v12.fields._current,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_2213CDC(needStartingIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void QuestRestrictionInfo__GetOrganizationSelectionDialogMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        System_String_o **title,
        System_String_o **message,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o **v11; // x8
  System_String_o *v12; // x1
  System_String_o **v13; // x8
  System_String_o *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 SpecifiedPosition; // x0
  __int64 v22; // x1
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x28
  unsigned __int64 v24; // x29
  __int64 v25; // x24
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  QuestRestrictionEntity_o *v32; // x1
  __int64 v33; // x23
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x25
  System_Predicate_object__o *v35; // x26
  Il2CppObject *v36; // x0
  Il2CppObject *Value_object; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7

  if ( (byte_5971C65 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass225_0__GetOrganizationSelectionDialogMessage_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass225_0_TypeInfo);
    sub_2213A60(&StringLiteral_23629/*"organizationSelectionDialogTitle"*/);
    sub_2213A60(&StringLiteral_23628/*"organizationSelectionDialogMessage"*/);
    byte_5971C65 = 1;
  }
  v11 = *(System_String_o ***)(qword_5984390 + 184);
  v12 = *v11;
  *title = *v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)title,
    (int32_t)v12,
    (System_String_o *)title,
    (System_String_o *)message,
    (int32_t)method,
    v5,
    v6,
    v7);
  v13 = *(System_String_o ***)(qword_5984390 + 184);
  v14 = *v13;
  *message = *v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)message, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_16;
  if ( SLODWORD(questRestrictionEntityList->max_length) >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = sub_2213CCC(QuestRestrictionInfo___c__DisplayClass225_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass225_0___ctor((QuestRestrictionInfo___c__DisplayClass225_0_o *)v25, 0);
      if ( v24 >= LODWORD(questRestrictionEntityList->max_length) )
        sub_2213CE4(SpecifiedPosition);
      if ( !v25 )
        goto LABEL_16;
      v32 = questRestrictionEntityList->m_Items[v24];
      *(_QWORD *)(v25 + 16) = v32;
      v33 = v25 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 16), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v35 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
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
              (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
                       (System_String_o *)StringLiteral_23629/*"organizationSelectionDialogTitle"*/,
                       **(Il2CppObject ***)(qword_5984390 + 184),
                       (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
      *title = (System_String_o *)Value_object;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)Value_object, v38, v39, v40, v41, v42, v43);
      if ( *(_QWORD *)v33 )
      {
        v44 = BasicHelper__GetValue_object_(
                *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v33 + 64LL),
                (System_String_o *)StringLiteral_23628/*"organizationSelectionDialogMessage"*/,
                **(Il2CppObject ***)(qword_5984390 + 184),
                (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
        *message = (System_String_o *)v44;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)message, (int32_t)v44, v45, v46, v47, v48, v49, v50);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(SpecifiedPosition, v22);
  }
}


int32_t QuestRestrictionInfo__GetOverwriteLimitCountRangeType(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x11
  struct System_Int32_array *overwriteLimitCountRangeTypes; // x8
  il2cpp_array_size_t max_length; // x10
  __int64 v6; // x9
  int32_t *m_Items; // x11

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return 0;
  overwriteLimitCountRangeTypes = this->fields.overwriteLimitCountRangeTypes;
  if ( !overwriteLimitCountRangeTypes )
    return 0;
  max_length = overwriteLimitCountSvtIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v6 = 0;
  m_Items = overwriteLimitCountSvtIds->m_Items;
  while ( m_Items[v6] != svtId )
  {
    if ( (_DWORD)max_length == (_DWORD)++v6 )
      return 0;
  }
  if ( (unsigned int)v6 >= LODWORD(overwriteLimitCountRangeTypes->max_length) )
    sub_2213CE4(this);
  return overwriteLimitCountRangeTypes->m_Items[v6];
}


System_Int32_array *QuestRestrictionInfo__GetOverwriteLimitCountSvtIds(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteLimitCountSvtIds;
}


int32_t QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
        QuestRestrictionInfo_o *this,
        int32_t targetServantId,
        const MethodInfo *method)
{
  if ( (byte_5971C68 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_int__int___);
    byte_5971C68 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.cachedOverwriteSvtTreasureDeviceLv,
         0) )
  {
    return 0;
  }
  else
  {
    return BasicHelper__GetValue_int__int_(
             (System_Collections_Generic_Dictionary_K__V__o *)this->fields.cachedOverwriteSvtTreasureDeviceLv,
             targetServantId,
             0,
             (const MethodInfo_38142F0 *)Method_BasicHelper_GetValue_int__int___);
  }
}


System_String_array *QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  _BOOL4 isFixedMyServantPosition; // w8
  int32_t FixedServantPositionCount; // w0
  const MethodInfo *v5; // x1
  int v6; // w23
  __int64 FixedServantPositionSvtIdList; // x0
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x28
  MissionNaviTransitionBoardItem_o *v13; // x22
  __int64 v14; // x25
  int32_t v15; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t maxLimitCount; // w23
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UserServantCollectionEntity_o *v26; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5971C3D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    byte_5971C3D = 1;
  }
  isFixedMyServantPosition = this->fields.isFixedMyServantPosition;
  v26 = 0;
  entity = 0;
  if ( !isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0;
  v6 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v5);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_41;
  v9 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_2213B20(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v11 = FixedServantPositionSvtIdList;
  if ( v6 >= 1 )
  {
    v12 = -(__int64)(unsigned int)v6;
    v13 = (MissionNaviTransitionBoardItem_o *)(FixedServantPositionSvtIdList + 32);
    v14 = 8;
    while ( 1 )
    {
      if ( v14 - 8 >= (unsigned __int64)*(unsigned int *)(v9 + 24) )
LABEL_42:
        sub_2213CE4(FixedServantPositionSvtIdList);
      v15 = *(_DWORD *)(v9 + 4 * v14);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v15,
              (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      FixedServantPositionSvtIdList = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
        FixedServantPositionSvtIdList = (__int64)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)MasterData_object,
              &v26,
              *(_QWORD *)(*(_QWORD *)(FixedServantPositionSvtIdList + 184) + 64LL),
              v15,
              0) )
        goto LABEL_28;
      FixedServantPositionSvtIdList = (__int64)v26;
      if ( !v26 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v26, 0);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v26 )
          break;
        maxLimitCount = v26->fields.maxLimitCount;
      }
      else
      {
LABEL_28:
        maxLimitCount = -1;
      }
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8);
      FixedServantPositionSvtIdList = OptionManager__GetSpoilerSetting(0);
      if ( !entity )
        break;
      v18 = FixedServantPositionSvtIdList & 1 | (maxLimitCount != -1) ? maxLimitCount : 0;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v18, -1, 0, 0, 0);
      if ( !v11 )
        break;
      if ( v14 - 8 >= (unsigned __int64)*(unsigned int *)(v11 + 24) )
        goto LABEL_42;
      v13->klass = (MissionNaviTransitionBoardItem_c *)FixedServantPositionSvtIdList;
      sub_2213A04(v13, FixedServantPositionSvtIdList, v19, v20, v21, v22, v23, v24);
      ++v14;
      v13 = (MissionNaviTransitionBoardItem_o *)((char *)v13 + 8);
      if ( v12 + v14 == 8 )
        return (System_String_array *)v11;
    }
LABEL_41:
    sub_2213CDC(FixedServantPositionSvtIdList, v8);
  }
  return (System_String_array *)v11;
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
    sub_2213CE4(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&pos);
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
  __int64 v7; // x19
  __int64 v8; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v10; // x27
  __int64 v11; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  QuestRestrictionEntity_o *v18; // x1
  __int64 v19; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_object__o *v21; // x25
  Il2CppObject *v22; // x0
  System_String_o *v24; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_5971C4A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass189_0__GetRestrictedName_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C4A = 1;
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
        v11 = sub_2213CCC(QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
        QuestRestrictionInfo___c__DisplayClass189_0___ctor((QuestRestrictionInfo___c__DisplayClass189_0_o *)v11, 0);
        if ( v10 >= LODWORD(questRestrictionEntityList->max_length) )
LABEL_28:
          sub_2213CE4(this);
        if ( !v11 )
          break;
        v18 = questRestrictionEntityList->m_Items[v10];
        *(_QWORD *)(v11 + 16) = v18;
        v19 = v11 + 16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
        v21 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
        System_Predicate_object____ctor(
          v21,
          (Il2CppObject *)v11,
          Method_QuestRestrictionInfo___c__DisplayClass189_0__GetRestrictedName_b__0__,
          0);
        if ( !myServantOrNpcRestrictionEntityList )
          break;
        v22 = System_Collections_Generic_List_object___Find(
                myServantOrNpcRestrictionEntityList,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    sub_2213CDC(this, *(_QWORD *)&pos);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_27;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     pos,
                                     (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
  if ( !this )
    goto LABEL_27;
  dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
  v6 = this;
  if ( dialogMessageInfoDictionary >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= dialogMessageInfoDictionary )
        goto LABEL_28;
      v8 = *((_QWORD *)&v6->fields.eventId + v7);
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


System_String_o *QuestRestrictionInfo__GetRestrictionErrorDialogConditionName(
        QuestRestrictionInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *questRestrictionEntityList; // x19
  System_Func_object__bool__o *v15; // x20
  __int64 v16; // x8

  if ( (byte_5971C69 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestRestrictionEntity___);
    sub_2213A60(&System_Func_QuestRestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass230_0__GetRestrictionErrorDialogConditionName_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass230_0_TypeInfo);
    byte_5971C69 = 1;
  }
  v5 = sub_2213CCC(QuestRestrictionInfo___c__DisplayClass230_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass230_0___ctor((QuestRestrictionInfo___c__DisplayClass230_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = restrictionEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)restrictionEntity, v8, v9, v10, v11, v12, v13);
  questRestrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.questRestrictionEntityList;
  v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestRestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass230_0__GetRestrictionErrorDialogConditionName_b__0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
         questRestrictionEntityList,
         (System_Func_TSource__bool__o *)v15,
         (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestRestrictionEntity___);
  v16 = *(_QWORD *)(v5 + 16);
  if ( v6 )
  {
    if ( v16 )
      return QuestRestrictionEntity__GetOverwriteDialogName(
               (QuestRestrictionEntity_o *)v6,
               *(System_String_o **)(v16 + 24),
               0);
LABEL_9:
    sub_2213CDC(v6, v7);
  }
  if ( !v16 )
    goto LABEL_9;
  return *(System_String_o **)(v16 + 24);
}


System_String_o *QuestRestrictionInfo__GetRestrictionInfoConditionName(
        QuestRestrictionInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *questRestrictionEntityList; // x19
  System_Func_object__bool__o *v15; // x20
  __int64 v16; // x8

  if ( (byte_5971C6B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestRestrictionEntity___);
    sub_2213A60(&System_Func_QuestRestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass232_0__GetRestrictionInfoConditionName_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass232_0_TypeInfo);
    byte_5971C6B = 1;
  }
  v5 = sub_2213CCC(QuestRestrictionInfo___c__DisplayClass232_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass232_0___ctor((QuestRestrictionInfo___c__DisplayClass232_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = restrictionEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)restrictionEntity, v8, v9, v10, v11, v12, v13);
  questRestrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.questRestrictionEntityList;
  v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestRestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass232_0__GetRestrictionInfoConditionName_b__0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
         questRestrictionEntityList,
         (System_Func_TSource__bool__o *)v15,
         (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestRestrictionEntity___);
  v16 = *(_QWORD *)(v5 + 16);
  if ( v6 )
  {
    if ( v16 )
      return QuestRestrictionEntity__GetOverwriteRestrictionInfo(
               (QuestRestrictionEntity_o *)v6,
               *(System_String_o **)(v16 + 24),
               0);
LABEL_9:
    sub_2213CDC(v6, v7);
  }
  if ( !v16 )
    goto LABEL_9;
  return *(System_String_o **)(v16 + 24);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x19
  bool v5; // vf
  __int64 v6; // x20
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v8; // x8
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_RestrictionEntity__o *RestrictionMessageEntityList; // x20
  System_Func_object__object__o *v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  Il2CppObject *v15; // x0
  System_Collections_Generic_IEnumerable_string__o *v16; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v17; // x8
  QuestRestrictionInfo_SlotInfo_o *v18; // x8

  v4 = this;
  if ( (byte_5971C27 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_2213A60(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo_GetRestrictionSlotConditionName__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_5971C27 = 1;
  }
  if ( v4->fields.restrictionBaseEntity )
  {
    v5 = __OFSUB__(initPos, 1);
    v6 = (unsigned int)(initPos - 1);
    if ( (int)v6 < 0 != v5 )
      return v4->fields.restrictionMessage;
    slotInfos = v4->fields.slotInfos;
    if ( slotInfos )
    {
      if ( (unsigned int)v6 >= LODWORD(slotInfos->max_length) )
        goto LABEL_20;
      v8 = slotInfos->m_Items[v6];
      if ( !v8 )
        goto LABEL_19;
      if ( System_String__IsNullOrEmpty(v8->fields.summary, 0) )
        return v4->fields.restrictionMessage;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v17 = v4->fields.slotInfos;
      if ( !v17 )
        goto LABEL_19;
      if ( (unsigned int)v6 >= LODWORD(v17->max_length) )
LABEL_20:
        sub_2213CE4(this);
      v18 = v17->m_Items[v6];
      if ( v18 )
        return System_String__Concat_75694928(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v18->fields.summary,
                 0);
    }
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&initPos);
  }
  RestrictionMessageEntityList = QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                   v4,
                                   *(const MethodInfo **)&initPos);
  v12 = (System_Func_object__object__o *)sub_2213CCC(System_Func_RestrictionEntity__string__TypeInfo);
  System_Func_object__object____ctor(
    v12,
    (Il2CppObject *)v4,
    Method_QuestRestrictionInfo_GetRestrictionSlotConditionName__,
    0);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v15 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
  v16 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v14,
                                                              v15,
                                                              (const MethodInfo_3889468 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_75699092((System_String_o *)StringLiteral_43/*"\n"*/, v16, 0);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971C28 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__);
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    byte_5971C28 = 1;
  }
  v3 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, method);
    v3 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__109_0 = (System_Func_object__bool__o *)static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v7,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__,
      0);
    v8 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v8->__9__109_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__109_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__109_0, (int32_t)_9__109_0, v9, v10, v11, v12, v13, v14);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__109_0,
                                                                          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
}


System_String_o *QuestRestrictionInfo__GetRestrictionSlotConditionName(
        QuestRestrictionInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *questRestrictionEntityList; // x19
  System_Func_object__bool__o *v15; // x20
  __int64 v16; // x8

  if ( (byte_5971C6A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestRestrictionEntity___);
    sub_2213A60(&System_Func_QuestRestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass231_0__GetRestrictionSlotConditionName_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass231_0_TypeInfo);
    byte_5971C6A = 1;
  }
  v5 = sub_2213CCC(QuestRestrictionInfo___c__DisplayClass231_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass231_0___ctor((QuestRestrictionInfo___c__DisplayClass231_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = restrictionEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)restrictionEntity, v8, v9, v10, v11, v12, v13);
  questRestrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.questRestrictionEntityList;
  v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestRestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass231_0__GetRestrictionSlotConditionName_b__0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
         questRestrictionEntityList,
         (System_Func_TSource__bool__o *)v15,
         (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestRestrictionEntity___);
  v16 = *(_QWORD *)(v5 + 16);
  if ( v6 )
  {
    if ( v16 )
      return QuestRestrictionEntity__GetOverwriteSlotName(
               (QuestRestrictionEntity_o *)v6,
               *(System_String_o **)(v16 + 24),
               0);
LABEL_9:
    sub_2213CDC(v6, v7);
  }
  if ( !v16 )
    goto LABEL_9;
  return *(System_String_o **)(v16 + 24);
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

  if ( (byte_5971C20 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971C20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v9);
  }
  return ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimitCount, 0);
}


int32_t QuestRestrictionInfo__GetServantNumMinRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.servantNumMin;
}


int32_t QuestRestrictionInfo__GetServantNumRangeType(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  RestrictionBaseEntity_o *restrictionBaseEntity; // x0
  __int64 v4; // x1
  struct RestrictionEntity_o *servantNumRestrictionEntity; // x8
  int32_t servantNumMax; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_5971C3E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971C3E = 1;
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
      v8 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
        v8 = BalanceConfig_TypeInfo;
      }
      if ( servantNumMax <= v8->static_fields->DeckMainMemberMax )
        return 1;
      else
        return 4;
    }
  }
  else
  {
    servantNumRestrictionEntity = this->fields.servantNumRestrictionEntity;
    if ( !servantNumRestrictionEntity )
      sub_2213CDC(0, method);
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
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int v6; // w8
  unsigned int v7; // w24
  RestrictionWholeEntity_o *v8; // x25
  int32_t v9; // w20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v11; // x21
  unsigned int v12; // w26
  __int64 v13; // x27
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  unsigned int v17; // w10
  int32_t priority; // w12
  RestrictionEntity_o *v19; // x13
  Il2CppObject *v20; // x8
  RestrictionEntity_o *v21; // x8
  Il2CppObject *v22; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_5971C40 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C40 = 1;
  }
  restrictionBaseEntity = v3->fields.restrictionBaseEntity;
  v22 = 0;
  entity = 0;
  if ( !restrictionBaseEntity )
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_51;
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
    {
      method = 0;
LABEL_46:
      if ( (unsigned int)method < max_length )
      {
        v21 = restrictionEntityList->m_Items[(int)method];
        if ( v21 )
          return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v21->fields.id, v2);
        goto LABEL_51;
      }
    }
    else
    {
      v17 = 0;
      priority = 0;
      method = 0;
      while ( max_length != v17 )
      {
        v19 = restrictionEntityList->m_Items[v17];
        if ( !v19 )
          goto LABEL_51;
        if ( v19->fields.type == 10 && !priority )
        {
          priority = v19->fields.priority;
          method = (const MethodInfo *)v17;
        }
        if ( (max_length & ~(max_length >> 31)) == ++v17 )
          goto LABEL_46;
      }
    }
LABEL_52:
    sub_2213CE4(this);
  }
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_51;
  v6 = restrictionWholeEntities->max_length;
  if ( v6 < 1 )
  {
LABEL_16:
    if ( v3->fields.servantNumMin < 1 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v9 = 1;
    while ( 1 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v9,
                                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( !this )
        goto LABEL_51;
      dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
      v11 = this;
      if ( dialogMessageInfoDictionary >= 1 )
        break;
LABEL_31:
      if ( ++v9 > v3->fields.servantNumMin )
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
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &v22,
                                           *(_DWORD *)(v13 + 44),
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_2213CDC(this, method);
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &entity,
                                         v8->fields.restrictionMessageId,
                                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
  __int64 v4; // x1
  int32_t servantNumMax; // w21
  BalanceConfig_c *v6; // x0
  System_String_o *v7; // x20
  int32_t *v8; // x1
  __int64 v9; // x0
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971C3F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10722/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_2213A60(&StringLiteral_10721/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_5971C3F = 1;
  }
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(this, method);
  if ( ServantNumRangeType == 5 )
    goto LABEL_17;
  if ( ServantNumRangeType != 4 )
    goto LABEL_18;
  servantNumMax = this->fields.servantNumMax;
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( servantNumMax > v6->static_fields->DeckMainMemberMax )
  {
LABEL_17:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10722/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0);
    v8 = &v13;
    v9 = qword_5984348;
    v13 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10721/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0);
    v8 = &v12;
    v9 = qword_5984348;
    v12 = this->fields.servantNumMax;
  }
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(v9, v8);
  return System_String__Format(v7, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetSlotMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v3; // x20
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x25
  unsigned __int64 v5; // x26
  __int64 v6; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  QuestRestrictionEntity_o *v13; // x1
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Predicate_object__o *v16; // x24
  Il2CppObject *v17; // x0

  v3 = this;
  if ( (byte_5971C66 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass226_0__GetSlotMessage_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass226_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_24281/*"restrictionSlotMessage"*/);
    byte_5971C66 = 1;
  }
  questRestrictionEntityList = v3->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_15;
  if ( SLODWORD(questRestrictionEntityList->max_length) < 1 )
    return **(System_String_o ***)(qword_5984390 + 184);
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_2213CCC(QuestRestrictionInfo___c__DisplayClass226_0_TypeInfo);
    QuestRestrictionInfo___c__DisplayClass226_0___ctor((QuestRestrictionInfo___c__DisplayClass226_0_o *)v6, 0);
    if ( v5 >= LODWORD(questRestrictionEntityList->max_length) )
      sub_2213CE4(this);
    if ( !v6 )
      goto LABEL_15;
    v13 = questRestrictionEntityList->m_Items[v5];
    *(_QWORD *)(v6 + 16) = v13;
    v14 = v6 + 16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v3->fields.myServantOrNpcRestrictionEntityList;
    v16 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
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
            (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v17 )
    {
      this = (QuestRestrictionInfo_o *)RestrictionEntity__GetSpecifiedPosition((RestrictionEntity_o *)v17, 0);
      if ( (_DWORD)this == initPos )
        break;
    }
    if ( (__int64)++v5 >= SLODWORD(questRestrictionEntityList->max_length) )
      return **(System_String_o ***)(qword_5984390 + 184);
  }
  if ( !*(_QWORD *)v14 )
LABEL_15:
    sub_2213CDC(this, *(_QWORD *)&initPos);
  return (System_String_o *)BasicHelper__GetValue_object_(
                              *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v14 + 64LL),
                              (System_String_o *)StringLiteral_24281/*"restrictionSlotMessage"*/,
                              **(Il2CppObject ***)(qword_5984390 + 184),
                              (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
}


int32_t QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971C29 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10723/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_5971C29 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10723/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0);
}


System_Int32_array *QuestRestrictionInfo__GetSvtIdBattleList(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.svtIdForceBattleList;
}


int32_t QuestRestrictionInfo__GetTotalCostRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  RestrictionEntity_o *totalCostRestrictionEntity; // x0

  totalCostRestrictionEntity = this->fields.totalCostRestrictionEntity;
  if ( totalCostRestrictionEntity && !this->fields.isInfinityCost )
    return RestrictionEntity__getTotalCost(totalCostRestrictionEntity, 0);
  else
    return 0;
}


System_String_o *QuestRestrictionInfo__GetTotalCostRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x19
  Il2CppObject *v4; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  result = (System_String_o *)this->fields.totalCostRestrictionEntity;
  if ( result )
  {
    klass = result[1].klass;
    TotalCost = RestrictionEntity__getTotalCost((RestrictionEntity_o *)result, 0);
    v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &TotalCost);
    return System_String__Format((System_String_o *)klass, v4, 0);
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
  int v7; // w11
  RestrictionWholeEntity_o *v8; // x12

  v4 = this;
  if ( (byte_5971C2F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10725/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C2F = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isFixMessage);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10725/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_17:
      sub_2213CDC(this, isFixMessage);
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
          sub_2213CE4(this);
        v8 = restrictionWholeEntities->m_Items[v7];
        if ( !v8 )
          goto LABEL_17;
        if ( v8->fields.type == 9 )
          return v8->fields.summary;
        if ( (max_length & ~(max_length >> 31)) == ++v7 )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
  }
}


System_String_o *QuestRestrictionInfo__GetUniqueServantRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971C2E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10724/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_5971C2E = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10724/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0);
}


int32_t QuestRestrictionInfo__GetUserEventDeckNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventDeckNum;
}


bool QuestRestrictionInfo__IsActiveGrandBoardRestriction(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass219_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *activeGrandBoardRestrictionEntityList; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5971C60 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass219_0__IsActiveGrandBoardRestriction_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass219_0_TypeInfo);
    byte_5971C60 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass219_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass219_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass219_0___ctor(v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  activeGrandBoardRestrictionEntityList = (System_Collections_Generic_List_T__o *)this->fields.activeGrandBoardRestrictionEntityList;
  v5->fields.initPos = initPos;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass219_0__IsActiveGrandBoardRestriction_b__0__,
    0);
  return BasicHelper__Any_object_(
           activeGrandBoardRestrictionEntityList,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_RestrictionEntity___);
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
  QuestRestrictionInfo___c__DisplayClass99_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  QuestRestrictionInfo___c_c *v9; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__99_0; // x20
  Il2CppObject *v12; // x22
  struct QuestRestrictionInfo___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  QuestRestrictionInfo___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  struct QuestRestrictionInfo___c_StaticFields *v24; // x9
  System_Func_object__bool__o *_9__99_1; // x21
  Il2CppObject *v26; // x22
  struct QuestRestrictionInfo___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  __int64 v35; // x1
  QuestRestrictionInfo___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  struct QuestRestrictionInfo___c_StaticFields *v38; // x9
  System_Func_object__bool__o *_9__99_2; // x21
  Il2CppObject *v40; // x22
  struct QuestRestrictionInfo___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  System_Func_object__bool__o *v49; // x21

  if ( (byte_5971C21 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_RestrictionEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_0__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_1__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_2__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass99_0__IsClassRestriction_b__3__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass99_0_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    byte_5971C21 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass99_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass99_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass99_0___ctor(v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  v5->fields.individuality = individuality;
  v9 = QuestRestrictionInfo___c_TypeInfo;
  if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v7);
    v9 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__99_0 = (System_Func_object__bool__o *)static_fields->__9__99_0;
  if ( !_9__99_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__99_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__99_0, v12, Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_0__, 0);
    v13 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v13->__9__99_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__99_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__99_0, (int32_t)_9__99_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          restrictionEntityList,
          (System_Func_TSource__bool__o *)_9__99_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v22 = QuestRestrictionInfo___c_TypeInfo;
  v23 = v20;
  if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v21);
    v22 = QuestRestrictionInfo___c_TypeInfo;
  }
  v24 = v22->static_fields;
  _9__99_1 = (System_Func_object__bool__o *)v24->__9__99_1;
  if ( !_9__99_1 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v21);
      v24 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__99_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__99_1, v26, Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_1__, 0);
    v27 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v27->__9__99_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__99_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__99_1, (int32_t)_9__99_1, v28, v29, v30, v31, v32, v33);
  }
  v34 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)_9__99_1,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v36 = QuestRestrictionInfo___c_TypeInfo;
  v37 = v34;
  if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v35);
    v36 = QuestRestrictionInfo___c_TypeInfo;
  }
  v38 = v36->static_fields;
  _9__99_2 = (System_Func_object__bool__o *)v38->__9__99_2;
  if ( !_9__99_2 )
  {
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v35);
      v38 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__99_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__99_2, v40, Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_2__, 0);
    v41 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v41->__9__99_2 = (struct System_Func_RestrictionEntity__bool__o *)_9__99_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->__9__99_2, (int32_t)_9__99_2, v42, v43, v44, v45, v46, v47);
  }
  v48 = System_Linq_Enumerable__Where_object_(
          v37,
          (System_Func_TSource__bool__o *)_9__99_2,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v49 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v49,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass99_0__IsClassRestriction_b__3__,
    0);
  return System_Linq_Enumerable__Any_object__59145568(
           v48,
           (System_Func_TSource__bool__o *)v49,
           (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_RestrictionEntity___);
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
  int32_t *m_Items; // x8
  int v8; // t1
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
  m_Items = overwriteLimitCountSvtIds->m_Items;
  do
  {
    v8 = *m_Items++;
    result = v8 == svtId;
    if ( v8 == svtId )
      break;
  }
  while ( v6-- );
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
    sub_2213CE4(this);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&initPos);
  return v4->fields.isMoved;
}


bool QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_2213CDC(this, method);
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
  int v4; // w10
  int32_t priority; // w12
  int32_t v6; // w11
  int v7; // w14
  int v8; // w15
  RestrictionEntity_o *v9; // x16
  int32_t type; // w17
  bool v11; // cc

  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_23;
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
      if ( max_length == v4 )
        sub_2213CE4(this);
      v9 = restrictionEntityList->m_Items[v4];
      if ( !v9 )
        break;
      type = v9->fields.type;
      if ( type != 10 || v6 )
      {
        if ( type == 8 && !priority || type == 14 && !priority )
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
      if ( (max_length & ~(max_length >> 31)) == ++v4 )
        goto LABEL_17;
    }
LABEL_23:
    sub_2213CDC(this, method);
  }
  v8 = 0;
  v7 = 0;
LABEL_17:
  if ( v7 )
    v11 = v7 <= v8;
  else
    v11 = 1;
  return !v11;
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
  _BOOL4 isFixedSupportPosition; // w8
  System_Collections_Generic_List_int__o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedSupportIndividualitiesList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5971C53 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971C53 = 1;
  }
  isFixedSupportPosition = this->fields.isFixedSupportPosition;
  memset(&v13, 0, sizeof(v13));
  if ( !isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v13 = v12;
    v12.fields._list = 0;
    *(_QWORD *)&v12.fields._index = &v13;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v7 )
        break;
      if ( !v4 )
        sub_2213CDC(v7, v8);
      System_Collections_Generic_List_int___AddRange(
        v4,
        (System_Collections_Generic_IEnumerable_T__o *)v13.fields._current,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  else
  {
    fixedSupportIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v13 = v12;
    v12.fields._list = 0;
    *(_QWORD *)&v12.fields._index = &v13;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v10 )
        break;
      if ( !v4 )
        sub_2213CDC(v10, v11);
      System_Collections_Generic_List_int___AddRange(
        v4,
        (System_Collections_Generic_IEnumerable_T__o *)v13.fields._current,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_23:
    sub_2213CDC(fixedSupportIndividualitiesList, v5);
  return v4->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsFixedSupportPosition_50443328(
        QuestRestrictionInfo_o *this,
        int32_t num,
        ServantLeaderInfo_o *servantInfo,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  _BOOL4 isFixedSupportPosition; // w9
  _BOOL4 isFixedNpcPosition; // w8
  System_Collections_Generic_List_int__o *v9; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  Il2CppObject *Entity; // x23
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v22; // x1
  struct System_Boolean_array *supportPositionList; // x8
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+30h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v6 = this;
  if ( (byte_5971C30 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971C30 = 1;
  }
  isFixedSupportPosition = v6->fields.isFixedSupportPosition;
  isFixedNpcPosition = v6->fields.isFixedNpcPosition;
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  if ( isFixedSupportPosition )
  {
    if ( !isFixedNpcPosition )
      goto LABEL_9;
  }
  else if ( !isFixedNpcPosition )
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
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v26 = v24;
    v24.fields._list = 0;
    *(_QWORD *)&v24.fields._index = &v26;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v10 )
        break;
      if ( !v9 )
        sub_2213CDC(v10, v11);
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)v26.fields._current,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  else
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v26 = v24;
    v24.fields._list = 0;
    *(_QWORD *)&v24.fields._index = &v26;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v13 )
        break;
      if ( !v9 )
        sub_2213CDC(v13, v14);
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)v26.fields._current,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v9 )
    goto LABEL_42;
  if ( v9->fields._size < 1 )
    goto LABEL_36;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&num);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v16 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&num);
  *(_QWORD *)&v27.fields.currentCryptoKey = v16;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
  if ( !v15 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v15,
             (int32_t)this,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    v9,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v25,
        (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = v25.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0);
    if ( !Entity )
      sub_2213CDC(DispLimitCount, v22);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_2213CDC(this, *(_QWORD *)&num);
  if ( LODWORD(supportPositionList->max_length) <= num )
    sub_2213CE4(this);
  return !supportPositionList->m_Items[num];
}


bool QuestRestrictionInfo__IsGrandSelectableSupport(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass233_0_o *v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 supportInitIndex; // x1
  DataManager_c *v8; // x0
  int v9; // w8
  int v10; // w9
  System_Object_array *QuestFollowerList; // x21
  System_Func_object__bool__o *v12; // x22
  System_Func_FollowerInfo__bool__c *v13; // x0

  if ( (byte_5971C6C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_FollowerInfo____91711160);
    sub_2213A60(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass233_0__IsGrandSelectableSupport_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass233_0_TypeInfo);
    byte_5971C6C = 1;
  }
  v3 = (QuestRestrictionInfo___c__DisplayClass233_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass233_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass233_0___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_16;
  supportInitIndex = (unsigned int)this->fields.supportInitIndex;
  v3->fields.initPos = supportInitIndex;
  if ( (int)supportInitIndex >= 1 )
    return QuestRestrictionInfo__IsActiveGrandBoardRestriction(this, supportInitIndex, v6);
  v8 = DataManager_TypeInfo;
  v9 = this->fields.servantNumMax == 2 ? 2 : 3;
  v10 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v3->fields.initPos = v9;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v8, supportInitIndex);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object )
LABEL_16:
    sub_2213CDC(Master_object, v5);
  QuestFollowerList = (System_Object_array *)NpcFollowerMaster__GetQuestFollowerList(
                                               (NpcFollowerMaster_o *)Master_object,
                                               this->fields.questId,
                                               this->fields.questPhase,
                                               0);
  v12 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_FollowerInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_QuestRestrictionInfo___c__DisplayClass233_0__IsGrandSelectableSupport_b__0__,
    0);
  while ( BasicHelper__Any_object__58785420(
            QuestFollowerList,
            (System_Func_T__bool__o *)v12,
            (const MethodInfo_380FE8C *)Method_BasicHelper_Any_FollowerInfo____91711160) )
  {
    v13 = System_Func_FollowerInfo__bool__TypeInfo;
    ++v3->fields.initPos;
    v12 = (System_Func_object__bool__o *)sub_2213CCC(v13);
    System_Func_object__bool____ctor(
      v12,
      (Il2CppObject *)v3,
      Method_QuestRestrictionInfo___c__DisplayClass233_0__IsGrandSelectableSupport_b__0__,
      0);
  }
  LODWORD(supportInitIndex) = v3->fields.initPos;
  return QuestRestrictionInfo__IsActiveGrandBoardRestriction(this, supportInitIndex, v6);
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
  int v3; // w8
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v5; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971C5F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5971C5F = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_2213CDC(Master_object, v5);
  return QuestPhaseEntity__IsIgnoreSyncEquipGrand(entity, 0);
}


bool QuestRestrictionInfo__IsInfinityCost(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isInfinityCost;
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


bool QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass184_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  _BOOL4 isMyServantOrNpc; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v10; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_5971C45 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass184_0__IsMyServantOrNpcRestriction_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
    byte_5971C45 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass184_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass184_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_14;
  isMyServantOrNpc = this->fields.isMyServantOrNpc;
  v5->fields.pos = pos;
  if ( !isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( (unsigned int)(pos - 1) >= LODWORD(slotInfos->max_length) )
        sub_2213CE4(v6);
      v10 = slotInfos->m_Items[pos - 1];
      if ( v10 )
        return (unsigned int)(v10->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_2213CDC(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v13 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass184_0__IsMyServantOrNpcRestriction_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_448429C *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
}


bool QuestRestrictionInfo__IsMyServantOrSupportRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isMyServantOrSupport;
}


bool QuestRestrictionInfo__IsMySvtOrSupportSlotClassRestriction(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass100_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  bool result; // w0

  if ( (byte_5971C22 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass100_0__IsMySvtOrSupportSlotClassRestriction_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass100_0_TypeInfo);
    byte_5971C22 = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass100_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass100_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass100_0___ctor(v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  v7->fields.initPos = initPos;
  result = initPos >= 1
        && (restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList,
            v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v11,
              (Il2CppObject *)v7,
              Method_QuestRestrictionInfo___c__DisplayClass100_0__IsMySvtOrSupportSlotClassRestriction_b__0__,
              0),
            (v12 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                     restrictionEntityList,
                     (System_Func_TSource__bool__o *)v11,
                     (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___)) != 0)
        && (v13 = v12, !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12[2].monitor, 0))
        && !System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v13[2].monitor,
              0,
              (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___)
        && RestrictionEntity__IsRestriction((RestrictionEntity_o *)v13, classIndividuality, 0);
  return result;
}


bool QuestRestrictionInfo__IsNoSupportBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNoSupportBattle;
}


bool QuestRestrictionInfo__IsNotIndividuality(QuestRestrictionInfo_o *this, int32_t pos, const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass186_0_o *v5; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w8
  int v10; // w10
  __int64 v11; // x11
  __int64 v12; // x11
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v14; // x20
  __int64 v15; // x8

  if ( (byte_5971C47 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass186_0__IsNotIndividuality_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
    byte_5971C47 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass186_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass186_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_26;
  v5->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(this, pos, v8) )
    goto LABEL_23;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v5->fields.pos,
                                        (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v9 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v9 == v10 )
          sub_2213CE4(restrictionSlotDetailDictionary);
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
        if ( (v9 & ~(v9 >> 31)) == ++v10 )
          goto LABEL_24;
      }
LABEL_26:
      sub_2213CDC(restrictionSlotDetailDictionary, v7);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v14 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass186_0__IsNotIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v14,
                                      (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
      sub_2213CE4(this);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_2213CDC(this, *(_QWORD *)&initPos);
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
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__97_0; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971C1F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_2213A60(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__97_0__);
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    byte_5971C1F = 1;
  }
  if ( !this->fields.restrictionBaseEntity )
    return 0;
  slotInfos = (System_Object_array *)this->fields.slotInfos;
  v4 = QuestRestrictionInfo___c_TypeInfo;
  if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, method);
    v4 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__97_0 = (System_Func_object__bool__o *)static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__97_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__97_0,
      v7,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__97_0__,
      0);
    v8 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v8->__9__97_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__97_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__97_0, (int32_t)_9__97_0, v9, v10, v11, v12, v13, v14);
  }
  return BasicHelper__Any_object__58785420(
           slotInfos,
           (System_Func_T__bool__o *)_9__97_0,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool QuestRestrictionInfo__IsRestrictionIndividualityWhole(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  int v4; // w8
  System_Object_array *restrictionWholeEntities; // x19
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__96_1; // x20
  Il2CppObject *v8; // x21
  struct QuestRestrictionInfo___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo_380FE8C *v16; // x2
  struct QuestRestrictionInfo___c_StaticFields *v17; // x8
  Il2CppObject *v18; // x21
  struct QuestRestrictionInfo___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5971C1E & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_RestrictionEntity____91711392);
    sub_2213A60(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__96_0__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__96_1__);
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    byte_5971C1E = 1;
  }
  v3 = QuestRestrictionInfo___c_TypeInfo;
  v4 = *(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionWholeEntities;
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, method);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    static_fields = v3->static_fields;
    _9__96_1 = (System_Func_object__bool__o *)static_fields->__9__96_1;
    if ( !_9__96_1 )
    {
      if ( !*(&v3->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v3, method);
        static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__96_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__96_1,
        v8,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__96_1__,
        0);
      v9 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v9->__9__96_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__96_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__96_1, (int32_t)_9__96_1, v10, v11, v12, v13, v14, v15);
    }
    v16 = (const MethodInfo_380FE8C *)Method_BasicHelper_Any_RestrictionWholeEntity___;
  }
  else
  {
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionEntityList;
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, method);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    v17 = v3->static_fields;
    _9__96_1 = (System_Func_object__bool__o *)v17->__9__96_0;
    if ( !_9__96_1 )
    {
      if ( !*(&v3->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v3, method);
        v17 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)v17->__9;
      _9__96_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__96_1,
        v18,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__96_0__,
        0);
      v19 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v19->__9__96_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__96_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__96_0, (int32_t)_9__96_1, v20, v21, v22, v23, v24, v25);
    }
    v16 = (const MethodInfo_380FE8C *)Method_BasicHelper_Any_RestrictionEntity____91711392;
  }
  return BasicHelper__Any_object__58785420(restrictionWholeEntities, (System_Func_T__bool__o *)_9__96_1, v16);
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
  QuestRestrictionInfo___c__DisplayClass187_0_o *v13; // x24
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  Il2CppObject *Entity; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  __int64 v20; // x8
  __int64 v21; // x9
  bool *p_DispLog; // x10
  __int64 v23; // x11
  int v24; // w25
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Predicate_object__o *v26; // x25
  struct DataMasterBase_array *datalist; // x8
  Il2CppObject *v28; // x23
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v30; // x0
  struct System_Threading_CancellationTokenSource_o *v31; // x9
  DataManager_o *v32; // x22
  unsigned __int64 v33; // x24
  RestrictionSlotDetailEntity_o *v34; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0

  if ( (byte_5971C48 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass187_0__IsRestrictionServantIndividuality_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
    byte_5971C48 = 1;
  }
  v13 = (QuestRestrictionInfo___c__DisplayClass187_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass187_0___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_54;
  v13->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(this, pos, v16) )
    goto LABEL_52;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v13->fields.pos,
                                    (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( Instance )
      {
        m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
        if ( (int)m_CancellationTokenSource >= 1 )
        {
          v20 = (unsigned int)m_CancellationTokenSource & ~((int)m_CancellationTokenSource >> 31);
          v21 = (unsigned int)Instance->fields.m_CancellationTokenSource;
          p_DispLog = &Instance->fields._DispLog;
          do
          {
            if ( !v21 )
LABEL_55:
              sub_2213CE4(Instance);
            v23 = *(_QWORD *)p_DispLog;
            if ( isChkSupport )
            {
              if ( !v23 )
                goto LABEL_54;
              if ( *(_DWORD *)(v23 + 28) == 2 )
                goto LABEL_33;
            }
            else
            {
              if ( !v23 )
                goto LABEL_54;
              if ( *(_DWORD *)(v23 + 28) == 1 )
              {
LABEL_33:
                v24 = *(_DWORD *)(v23 + 40);
                goto LABEL_34;
              }
            }
            --v20;
            p_DispLog += 8;
            --v21;
          }
          while ( v20 );
        }
        v24 = -1;
LABEL_34:
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                        v13->fields.pos,
                                        (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            v31 = Instance->fields.m_CancellationTokenSource;
            v32 = Instance;
            if ( (int)v31 >= 1 )
            {
              LOBYTE(max_length) = 0;
              v33 = 0;
              while ( 1 )
              {
                if ( v33 >= (unsigned int)v31 )
                  goto LABEL_55;
                v34 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v32->fields._DispLog + v33);
                if ( v24 < 0 )
                {
                  if ( !v34 )
                    goto LABEL_54;
                }
                else
                {
                  if ( !v34 )
                    goto LABEL_54;
                  if ( v24 != v34->fields.id )
                    goto LABEL_50;
                }
                if ( v34->fields.type == 1 )
                {
                  targetVals = v34->fields.targetVals;
                  if ( targetVals )
                  {
                    if ( targetVals->max_length )
                    {
                      if ( !Entity )
                        goto LABEL_54;
                      Individuality = ServantEntity__getIndividuality(
                                        (ServantEntity_o *)Entity,
                                        limitCount,
                                        dispLimitCount,
                                        0);
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v34, Individuality, 0);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_52;
                      LOBYTE(max_length) = 1;
                    }
                  }
                }
LABEL_50:
                LODWORD(v31) = v32->fields.m_CancellationTokenSource;
                if ( (__int64)++v33 >= (int)v31 )
                  return max_length;
              }
            }
            goto LABEL_52;
          }
        }
      }
    }
LABEL_54:
    sub_2213CDC(Instance, v15);
  }
  if ( isChkSupport && !QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, v13->fields.pos, v17) )
    goto LABEL_52;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v26 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass187_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_54;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v26,
                                (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_52;
  datalist = Instance->fields.datalist;
  v28 = (Il2CppObject *)Instance;
  if ( !datalist )
    goto LABEL_54;
  max_length = datalist->max_length;
  if ( max_length )
  {
    Instance = (DataManager_o *)this->fields.grandServantRestrictionEntityList;
    if ( !Instance )
      goto LABEL_54;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___Contains(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v28,
                                  (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    if ( ((unsigned __int8)Instance & 1) == 0
      || (Instance = (DataManager_o *)RestrictionEntity__IsSearchVals((RestrictionEntity_o *)v28, 0, 0),
          LOBYTE(max_length) = 0,
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !Entity )
        goto LABEL_54;
      v30 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, dispLimitCount, 0);
      if ( RestrictionEntity__IsRestriction_49612832((RestrictionEntity_o *)v28, v30, 0) )
      {
        LOBYTE(max_length) = 1;
        return max_length;
      }
LABEL_52:
      LOBYTE(max_length) = 0;
    }
  }
  return max_length;
}


bool QuestRestrictionInfo__IsRestrictionServantIndividuality_50459340(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass188_0_o *v7; // x22
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

  if ( (byte_5971C49 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass188_0__IsRestrictionServantIndividuality_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
    byte_5971C49 = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass188_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass188_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_29;
  v7->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(this, pos, v10) )
    goto LABEL_27;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v7->fields.pos,
                                        (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_2213CE4(restrictionSlotDetailDictionary);
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
      sub_2213CDC(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_27;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestRestrictionInfo___c__DisplayClass188_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_29;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
            (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__) )
      return RestrictionEntity__IsRestriction_49612832(v19, individuality, 0);
    IsSearchVals = RestrictionEntity__IsSearchVals(v19, 0, 0);
    LOBYTE(v14) = 0;
    if ( !IsSearchVals )
      return RestrictionEntity__IsRestriction_49612832(v19, individuality, 0);
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
  return QuestRestrictionInfo__IsRestrictionSlot_50437112(this, ServantIndividuality, initPos, v14);
}


bool QuestRestrictionInfo__IsRestrictionSlot_50437112(
        QuestRestrictionInfo_o *this,
        System_Int32_array *svtIndividuality,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  __int64 v7; // x23
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
  if ( (byte_5971C25 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_2213A60(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_5971C25 = 1;
  }
  v7 = (unsigned int)(initPos - 1);
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_2213CDC(this, svtIndividuality);
    v9 = 0;
    v10 = 0;
    while ( (unsigned int)v7 < LODWORD(slotInfos->max_length) )
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
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v12 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v12,
                                           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
        v13 = v6->fields.slotInfos;
        if ( !v13 )
          goto LABEL_27;
        if ( (unsigned int)v7 >= LODWORD(v13->max_length) )
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
                                           (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                             (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
        }
        else
        {
          v16 = v6->fields.slotInfos;
          if ( !v16 )
            goto LABEL_27;
          if ( (unsigned int)v7 >= LODWORD(v16->max_length) )
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
                                             (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                               (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_2213CE4(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestriction_50436376(
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
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x6
  long double v19; // q0
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v21; // x23
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  bool isWhole; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5971C23 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    byte_5971C23 = 1;
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
                             v17);
  }
  else
  {
    v21 = Method_System_Array_Empty_int___;
    v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v22 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
      v23 = sub_224B908(v19);
    if ( !*(_DWORD *)(v23 + 228) )
      *(__n128 *)&v19 = j_il2cpp_runtime_class_init_0(v23, v16);
    v24 = *(_QWORD *)(v21[7] + 16LL);
    if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
      v24 = sub_224B908(v19);
    ServantIndividuality = **(System_Int32_array ***)(v24 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_50436644(this, &isWhole, ServantIndividuality, rarity, lv, targetType, v18);
}


bool QuestRestrictionInfo__IsRestriction_50436644(
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
LABEL_29:
      sub_2213CDC(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_30:
        sub_2213CE4(this);
      v18 = restrictionEntityList->m_Items[v17];
      if ( !v18 )
        goto LABEL_29;
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
        this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestrictionTarget(v18, targetType, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_49612832(v18, svtIndividuality, 0);
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
    this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction(v20, v21, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    goto LABEL_25;
  }
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_29;
  v9 = restrictionWholeEntities->max_length;
  if ( v9 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v9 )
      goto LABEL_30;
    this = (QuestRestrictionInfo_o *)restrictionWholeEntities->m_Items[v11];
    if ( !this )
      goto LABEL_29;
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


bool QuestRestrictionInfo__IsRestriction_50437612(
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
  __int64 v21; // x1
  const MethodInfo *v22; // x7
  long double v23; // q0
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v25; // x25
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0

  if ( (byte_5971C24 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    byte_5971C24 = 1;
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
    v25 = Method_System_Array_Empty_int___;
    v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v26 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v26 = v25[7];
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
      v27 = sub_224B908(v23);
    if ( !*(_DWORD *)(v27 + 228) )
      *(__n128 *)&v23 = j_il2cpp_runtime_class_init_0(v27, v21);
    v28 = *(_QWORD *)(v25[7] + 16LL);
    if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
      v28 = sub_224B908(v23);
    ServantIndividuality = **(System_Int32_array ***)(v28 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_50437900(
           this,
           isWhole,
           ServantIndividuality,
           rarity,
           lv,
           initPos,
           targetType,
           v22);
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestriction_50437900(
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

  if ( QuestRestrictionInfo__IsRestriction_50436644(
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
    return QuestRestrictionInfo__IsRestrictionSlot_50437112(this, svtIndividuality, initPos, v11);
  return 0;
}


bool QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass185_0_o *v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_50456184; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  bool v12; // zf
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_5971C46 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_2213A60(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass185_0__IsSelectableNormalSupport_b__0__);
    sub_2213A60(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
    byte_5971C46 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass185_0_o *)sub_2213CCC(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass185_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_18;
  v5->fields.pos = pos;
  IsMyServantOrNpcRestriction_50456184 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_50456184 )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_QuestRestrictionInfo___c__DisplayClass185_0__IsSelectableNormalSupport_b__0__,
      0);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v13 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v13 )
        return (char)v13;
      v12 = ((__int64)v13[2].klass & 0xFFFFFFF7) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_2213CDC(IsMyServantOrNpcRestriction_50456184, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v10 = v5->fields.pos - 1;
  if ( (unsigned int)v10 >= LODWORD(slotInfos->max_length) )
    sub_2213CE4(IsMyServantOrNpcRestriction_50456184);
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
  unsigned __int64 IsMyServantOrNpcRestriction_50456184; // x0
  int32_t *p_myServantNumMax; // x8
  int32_t v10; // w8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  int v12; // w8
  int v13; // w11
  int *v14; // x9
  int v15; // w10
  int v16; // t1
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x9
  int max_length; // w8
  int32_t *m_Items; // x9
  int v21; // w11
  int v22; // w10
  int v23; // t1

  if ( (byte_5971C41 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_5971C41 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    goto LABEL_22;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    goto LABEL_22;
  IsMyServantOrNpcRestriction_50456184 = (unsigned __int64)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    IsMyServantOrNpcRestriction_50456184 = (unsigned __int64)BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*(_QWORD *)(IsMyServantOrNpcRestriction_50456184 + 184) + 172LL);
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
      goto LABEL_42;
    v10 -= myServantOrNpcRestrictionEntityList->fields._size;
  }
  if ( v10 != 1
    || (IsMyServantOrNpcRestriction_50456184 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
                                                 this,
                                                 pos,
                                                 *(const MethodInfo **)&pos),
        (IsMyServantOrNpcRestriction_50456184 & 1) != 0) )
  {
LABEL_22:
    LOBYTE(IsMyServantOrNpcRestriction_50456184) = 0;
    return IsMyServantOrNpcRestriction_50456184;
  }
  if ( this->fields.isFixedMyServantPosition )
  {
    IsMyServantOrNpcRestriction_50456184 = (unsigned __int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                               this,
                                                               *(const MethodInfo **)&svtId);
    if ( IsMyServantOrNpcRestriction_50456184 )
    {
      v12 = *(_DWORD *)(IsMyServantOrNpcRestriction_50456184 + 24);
      if ( v12 >= 1 )
      {
        v13 = (v12 & ~(v12 >> 31)) - 1;
        v14 = (int *)(IsMyServantOrNpcRestriction_50456184 + 32);
        while ( v12 )
        {
          v15 = v13;
          v16 = *v14++;
          IsMyServantOrNpcRestriction_50456184 = v16 != svtId;
          if ( v16 != svtId )
          {
            --v13;
            --v12;
            if ( v15 )
              continue;
          }
          return IsMyServantOrNpcRestriction_50456184;
        }
        goto LABEL_41;
      }
      goto LABEL_40;
    }
LABEL_42:
    sub_2213CDC(IsMyServantOrNpcRestriction_50456184, *(_QWORD *)&svtId);
  }
  fixedServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity;
  if ( !fixedServantPositionRestrictionEntity )
    goto LABEL_40;
  targetVals = fixedServantPositionRestrictionEntity->fields.targetVals;
  if ( !targetVals )
    goto LABEL_42;
  max_length = targetVals->max_length;
  if ( max_length >= 1 )
  {
    m_Items = targetVals->m_Items;
    v21 = (max_length & ~(max_length >> 31)) - 1;
    while ( max_length )
    {
      v22 = v21;
      v23 = *m_Items++;
      IsMyServantOrNpcRestriction_50456184 = v23 != svtId;
      if ( v23 != svtId )
      {
        --v21;
        --max_length;
        if ( v22 )
          continue;
      }
      return IsMyServantOrNpcRestriction_50456184;
    }
LABEL_41:
    sub_2213CE4(IsMyServantOrNpcRestriction_50456184);
  }
LABEL_40:
  LOBYTE(IsMyServantOrNpcRestriction_50456184) = 1;
  return IsMyServantOrNpcRestriction_50456184;
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
  BalanceConfig_c *v12; // x0
  int32_t DeckMainMemberMax; // w8

  v6 = this;
  if ( (byte_5971C55 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971C55 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_9;
  if ( (unsigned int)(initPos - 1) >= LODWORD(slotInfos->max_length) )
    sub_2213CE4(this);
  v8 = slotInfos->m_Items[initPos - 1];
  if ( !v8 )
    sub_2213CDC(this, *(_QWORD *)&pos);
  if ( v8->fields.isRequired )
  {
    return 1;
  }
  else
  {
LABEL_9:
    servantNumMax = v6->fields.servantNumMax;
    if ( servantNumMax >= 1 && v6->fields.servantNumMin <= 0 )
    {
      v12 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&pos);
        v12 = BalanceConfig_TypeInfo;
      }
      DeckMainMemberMax = v12->static_fields->DeckMainMemberMax;
      if ( servantNumMax <= DeckMainMemberMax )
      {
        DeckMainMemberMax = v6->fields.servantNumMax;
      }
      else if ( !*(&v12->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v12, *(_QWORD *)&pos);
        DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
      }
      return DeckMainMemberMax >= pos;
    }
    else
    {
      return 0;
    }
  }
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

  if ( (byte_5971C5C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971C5C = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          sub_2213CE4(Instance);
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
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_int____get_Item__);
              v19 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v13,
                      (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v19,
                           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v16->fields.rangeTypeList )
                goto LABEL_33;
              v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v16->fields.rangeTypeList,
                     v17,
                     (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v20,
                       (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___) )
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
                       (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v20,
                        (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___) )
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
      sub_2213CDC(Instance, v10);
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


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueIndividuality_50440424(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  __int64 v12; // x1
  Il2CppObject *v13; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *IsNpc; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x8
  System_Int32_array *NpcServantIndividuality; // x0
  bool IsOverwriteIndividuality; // w0
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x19
  struct System_Int32_array *uniqueIndividualitys; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v21; // x10
  BalanceConfig_c **v22; // x24
  const MethodInfo_3F131DC **v23; // x26
  const MethodInfo_3876640 **v24; // x20
  int32_t v25; // w27
  __int64 i; // x25
  unsigned __int64 v27; // x19
  struct FollowerInfo_array *deckNpcInfoList; // x8
  __int64 v29; // x8
  struct FollowerInfo_array *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteIndividuality; // x0
  __int64 v32; // x8
  struct FollowerInfo_array *v33; // x8
  int32_t v34; // w21
  const MethodInfo_3876640 **v35; // x27
  Il2CppObject *v36; // x20
  BalanceConfig_c **v37; // x23
  Il2CppObject *v38; // x24
  const MethodInfo_3F131DC **v39; // x22
  ServantLeaderInfo_o *v40; // x28
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x26
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x29
  int32_t v43; // w0
  Il2CppObject *v44; // x0
  int32_t v45; // w29
  ServantEntity_o *v46; // x26
  int32_t DispLimitCountStage; // w0
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  QuestRestrictionInfo_DeckSvtInfo_o *v49; // x0
  int32_t v51; // [xsp+0h] [xbp-B0h]
  int32_t v52; // [xsp+4h] [xbp-ACh]
  ServantEntity_o *v53; // [xsp+8h] [xbp-A8h]
  struct System_Int32_array *v54; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-98h]
  unsigned __int64 v56; // [xsp+20h] [xbp-90h]
  QuestRestrictionInfo_o *v57; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // [xsp+30h] [xbp-80h]
  Il2CppObject *v59; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v60; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_5971C2C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971C2C = 1;
  }
  v60 = 0;
  entity = 0;
  v59 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_71;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo )
    goto LABEL_20;
  IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0);
  v15 = 0;
  if ( ((unsigned __int8)IsNpc & 1) == 0 )
    goto LABEL_21;
  if ( !v13 )
    goto LABEL_74;
  IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                                          &entity,
                                                          npcFollowerInfo->fields.npcFollowerSvtId,
                                                          (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)IsNpc & 1) != 0 )
  {
    NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0);
LABEL_13:
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantIndividuality;
    goto LABEL_21;
  }
  if ( !Master_object )
    goto LABEL_74;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v60,
         npcFollowerInfo->fields.npcFollowerSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
  {
    IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v60;
    if ( !v60 )
      goto LABEL_74;
    IsOverwriteIndividuality = NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v60, 0);
    v15 = 0;
    if ( IsOverwriteIndividuality )
    {
      IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v60;
      if ( !v60 )
        goto LABEL_74;
      NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                  (NpcServantFollowerEntity_o *)v60,
                                  0);
      goto LABEL_13;
    }
  }
  else
  {
LABEL_20:
    v15 = 0;
  }
LABEL_21:
  source = v15;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !IsNpc
    || (v18 = IsNpc,
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                IsNpc,
                                                                svtId,
                                                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_74:
    sub_2213CDC(IsNpc, v12);
  }
  max_length = uniqueIndividualitys->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_71:
    LOBYTE(IsNpc) = 0;
    return (char)IsNpc;
  }
  v53 = (ServantEntity_o *)IsNpc;
  v21 = 0;
  v58 = v18;
  v51 = limitCount;
  v52 = dispLimitCount;
  v22 = &BalanceConfig_TypeInfo;
  v23 = (const MethodInfo_3F131DC **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v24 = (const MethodInfo_3876640 **)&Method_System_Linq_Enumerable_Contains_int___;
  v54 = this->fields.uniqueIndividualitys;
  v57 = this;
  while ( 1 )
  {
    if ( v21 >= (unsigned int)max_length )
LABEL_75:
      sub_2213CE4(IsNpc);
    v56 = v21;
    v25 = uniqueIndividualitys->m_Items[v21];
    if ( !source )
      break;
    if ( System_Linq_Enumerable__Contains_int_(source, v25, *v24) )
      goto LABEL_33;
LABEL_69:
    uniqueIndividualitys = v54;
    IsNpc = 0;
    LODWORD(max_length) = v54->max_length;
    v21 = v56 + 1;
    if ( (__int64)(v56 + 1) >= (int)max_length )
      return (char)IsNpc;
  }
  IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v53;
  if ( !v53 )
    goto LABEL_74;
  if ( !ServantEntity__IsIndividuality(v53, v51, v52, v25, 0) )
    goto LABEL_69;
LABEL_33:
  for ( i = 4; ; ++i )
  {
    IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)*v22;
    if ( !*(&(*v22)->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(IsNpc, v12);
      IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)*v22;
    }
    v27 = i - 4;
    if ( i - 4 >= SHIDWORD(IsNpc[2].fields.list[3].klass) )
      goto LABEL_69;
    deckNpcInfoList = this->fields.deckNpcInfoList;
    if ( !deckNpcInfoList )
      goto LABEL_74;
    if ( v27 >= LODWORD(deckNpcInfoList->max_length) )
      goto LABEL_75;
    v29 = *((_QWORD *)&deckNpcInfoList->obj.klass + i);
    if ( v29 )
    {
      if ( !v13 )
        goto LABEL_74;
      IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                                              &entity,
                                                              *(_QWORD *)(v29 + 88),
                                                              *v23);
      v30 = this->fields.deckNpcInfoList;
      if ( ((unsigned __int8)IsNpc & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_74;
        if ( v27 >= LODWORD(v30->max_length) )
          goto LABEL_75;
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)*((_QWORD *)&v30->obj.klass + i);
        if ( !IsNpc )
          goto LABEL_74;
        OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                        (FollowerInfo_o *)IsNpc,
                                                                                        0,
                                                                                        0,
                                                                                        0);
      }
      else
      {
        if ( !v30 )
          goto LABEL_74;
        if ( v27 >= LODWORD(v30->max_length) )
          goto LABEL_75;
        v32 = *((_QWORD *)&v30->obj.klass + i);
        if ( !v32 || !Master_object )
          goto LABEL_74;
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                &v59,
                                                                *(_QWORD *)(v32 + 88),
                                                                (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)IsNpc & 1) == 0 )
          goto LABEL_55;
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v59;
        if ( !v59 )
          goto LABEL_74;
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                                                (NpcServantFollowerEntity_o *)v59,
                                                                0);
        if ( ((unsigned __int8)IsNpc & 1) != 0 )
        {
          IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v59;
          if ( !v59 )
            goto LABEL_74;
          OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                          (NpcServantFollowerEntity_o *)v59,
                                                                                          0);
        }
        else
        {
LABEL_55:
          v33 = this->fields.deckNpcInfoList;
          if ( !v33 )
            goto LABEL_74;
          if ( v27 >= LODWORD(v33->max_length) )
            goto LABEL_75;
          IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)*((_QWORD *)&v33->obj.klass + i);
          if ( !IsNpc )
            goto LABEL_74;
          v34 = v25;
          v35 = v24;
          v36 = v13;
          v37 = v22;
          v38 = Master_object;
          v39 = v23;
          IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)FollowerInfo__getServantLeaderInfo(
                                                                  (FollowerInfo_o *)IsNpc,
                                                                  0,
                                                                  0,
                                                                  0);
          if ( !IsNpc )
            goto LABEL_74;
          v40 = (ServantLeaderInfo_o *)IsNpc;
          lookup = IsNpc->fields._lookup;
          seriazlier = IsNpc->fields.seriazlier;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
          *(_QWORD *)&v62.fields.currentCryptoKey = lookup;
          *(_QWORD *)&v62.fields.fakeValue = seriazlier;
          v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v62, 0);
          v44 = DataMasterBase_object__object__int___GetEntity(
                  v58,
                  v43,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v45 = v40->fields.limitCount;
          v46 = (ServantEntity_o *)v44;
          DispLimitCountStage = ServantLeaderInfo__get_DispLimitCountStage(v40, 0);
          IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                                                  DispLimitCountStage,
                                                                  0);
          if ( !v46 )
            goto LABEL_74;
          OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                          v46,
                                                                                          v45,
                                                                                          (int32_t)IsNpc,
                                                                                          0);
          v23 = v39;
          Master_object = v38;
          v22 = v37;
          v13 = v36;
          v24 = v35;
          v25 = v34;
          this = v57;
        }
      }
      IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Contains_int_(
                                                              OverwriteIndividuality,
                                                              v25,
                                                              *v24);
      if ( ((unsigned __int8)IsNpc & 1) != 0 )
        break;
    }
    deckSvtInfoList = this->fields.deckSvtInfoList;
    if ( !deckSvtInfoList )
      goto LABEL_74;
    if ( v27 >= LODWORD(deckSvtInfoList->max_length) )
      goto LABEL_75;
    v49 = (QuestRestrictionInfo_DeckSvtInfo_o *)*((_QWORD *)&deckSvtInfoList->obj.klass + i);
    if ( v49 )
    {
      if ( QuestRestrictionInfo_DeckSvtInfo__IsIndividuality(v49, v25, 0) )
        break;
    }
  }
  LOBYTE(IsNpc) = 1;
  return (char)IsNpc;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueIndividuality_50441720(
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
  Il2CppObject *v18; // x25
  void *IsNpc; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x8
  System_Int32_array *NpcServantIndividuality; // x0
  bool IsOverwriteIndividuality; // w0
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  struct System_Int32_array *uniqueIndividualitys; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v26; // x26
  int32_t v27; // w29
  int32_t i; // w22
  FollowerInfo_o *v29; // x23
  PartyOrganizationListViewItem_o *v30; // x28
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteIndividuality; // x0
  ServantEntity_o *ServantEntity_k__BackingField; // x23
  int32_t svtLimitCount; // w27
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  ServantLeaderInfo_o *v35; // x23
  __int64 v36; // x27
  __int64 v37; // x28
  int32_t v38; // w0
  Il2CppObject *v39; // x0
  int32_t v40; // w28
  ServantEntity_o *v41; // x27
  int32_t DispLimitCountStage; // w0
  int32_t v44; // [xsp+8h] [xbp-A8h]
  ServantEntity_o *v45; // [xsp+10h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // [xsp+18h] [xbp-98h]
  struct System_Int32_array *v47; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-80h]
  Il2CppObject *v50; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v51; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_5971C2D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971C2D = 1;
  }
  v51 = 0;
  entity = 0;
  v50 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_64;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo )
    goto LABEL_20;
  IsNpc = (void *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0);
  v20 = 0;
  if ( ((unsigned __int8)IsNpc & 1) == 0 )
    goto LABEL_21;
  if ( !v18 )
    goto LABEL_67;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
         &entity,
         npcFollowerInfo->fields.npcFollowerSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0);
LABEL_13:
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantIndividuality;
    goto LABEL_21;
  }
  IsNpc = Master_object;
  if ( !Master_object )
    goto LABEL_67;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         Master_object,
         &v51,
         npcFollowerInfo->fields.npcFollowerSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
  {
    IsNpc = v51;
    if ( !v51 )
      goto LABEL_67;
    IsOverwriteIndividuality = NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v51, 0);
    v20 = 0;
    if ( IsOverwriteIndividuality )
    {
      IsNpc = v51;
      if ( !v51 )
        goto LABEL_67;
      NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                  (NpcServantFollowerEntity_o *)v51,
                                  0);
      goto LABEL_13;
    }
  }
  else
  {
LABEL_20:
    v20 = 0;
  }
LABEL_21:
  source = v20;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  IsNpc = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !IsNpc
    || (v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNpc,
        IsNpc = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)IsNpc,
                  svtId,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_67:
    sub_2213CDC(IsNpc, v17);
  }
  max_length = uniqueIndividualitys->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_64:
    LOBYTE(IsNpc) = 0;
    return (char)IsNpc;
  }
  v45 = (ServantEntity_o *)IsNpc;
  v46 = v23;
  v44 = limitCount;
  v26 = 0;
  v47 = this->fields.uniqueIndividualitys;
  while ( 1 )
  {
    if ( v26 >= (unsigned int)max_length )
      sub_2213CE4(IsNpc);
    v27 = uniqueIndividualitys->m_Items[v26];
    if ( source )
    {
      if ( System_Linq_Enumerable__Contains_int_(
             source,
             v27,
             (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        break;
      }
      goto LABEL_62;
    }
    IsNpc = v45;
    if ( !v45 )
      goto LABEL_67;
    if ( ServantEntity__IsIndividuality(v45, v44, dispLimitCount, v27, 0) )
      break;
LABEL_62:
    uniqueIndividualitys = v47;
    ++v26;
    IsNpc = 0;
    LODWORD(max_length) = v47->max_length;
    if ( (__int64)v26 >= (int)max_length )
      return (char)IsNpc;
  }
  for ( i = 0; ; ++i )
  {
    IsNpc = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
      IsNpc = BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*((_QWORD *)IsNpc + 23) + 172LL) )
      goto LABEL_62;
    if ( num != i && partyIndex != i )
      break;
LABEL_61:
    ;
  }
  if ( !partyItem )
    goto LABEL_67;
  IsNpc = PartyListViewItem__GetMember(partyItem, i, 0);
  if ( !IsNpc )
    goto LABEL_67;
  v29 = (FollowerInfo_o *)*((_QWORD *)IsNpc + 16);
  v30 = (PartyOrganizationListViewItem_o *)IsNpc;
  if ( v29 )
  {
    IsNpc = (void *)FollowerInfo__get_IsNpc(*((FollowerInfo_o **)IsNpc + 16), 0);
    if ( ((unsigned __int8)IsNpc & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_67;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
             &entity,
             v29->fields.npcFollowerSvtId,
             (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
      {
        OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                        v29,
                                                                                        0,
                                                                                        0,
                                                                                        0);
      }
      else
      {
        IsNpc = Master_object;
        if ( !Master_object )
          goto LABEL_67;
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                Master_object,
                &v50,
                v29->fields.npcFollowerSvtId,
                (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
          goto LABEL_55;
        IsNpc = v50;
        if ( !v50 )
          goto LABEL_67;
        if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v50, 0) )
        {
          IsNpc = v50;
          if ( !v50 )
            goto LABEL_67;
          OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                          (NpcServantFollowerEntity_o *)v50,
                                                                                          0);
        }
        else
        {
LABEL_55:
          IsNpc = FollowerInfo__getServantLeaderInfo(v29, 0, 0, 0);
          if ( !IsNpc )
            goto LABEL_67;
          v35 = (ServantLeaderInfo_o *)IsNpc;
          v36 = *((_QWORD *)IsNpc + 6);
          v37 = *((_QWORD *)IsNpc + 7);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
          *(_QWORD *)&v53.fields.currentCryptoKey = v36;
          *(_QWORD *)&v53.fields.fakeValue = v37;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v53, 0);
          v39 = DataMasterBase_object__object__int___GetEntity(
                  v46,
                  v38,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v40 = v35->fields.limitCount;
          v41 = (ServantEntity_o *)v39;
          DispLimitCountStage = ServantLeaderInfo__get_DispLimitCountStage(v35, 0);
          IsNpc = (void *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
          if ( !v41 )
            goto LABEL_67;
          OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                          v41,
                                                                                          v40,
                                                                                          (int32_t)IsNpc,
                                                                                          0);
        }
      }
      if ( System_Linq_Enumerable__Contains_int_(
             OverwriteIndividuality,
             v27,
             (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        goto LABEL_66;
      }
      goto LABEL_61;
    }
  }
  ServantEntity_k__BackingField = v30->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_61;
  svtLimitCount = v30->fields.svtLimitCount;
  DispLimitCountStageSealAfterIndexZero = PartyOrganizationListViewItem__GetDispLimitCountStageSealAfterIndexZero(
                                            v30,
                                            0);
  if ( !ServantEntity__IsIndividuality(
          ServantEntity_k__BackingField,
          svtLimitCount,
          DispLimitCountStageSealAfterIndexZero,
          v27,
          0) )
    goto LABEL_61;
LABEL_66:
  LOBYTE(IsNpc) = 1;
  return (char)IsNpc;
}


bool QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_50439864(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool v5; // w21
  signed __int64 v6; // x24
  BalanceConfig_c *v7; // x0
  signed __int64 DeckMemberMax; // x8
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  QuestRestrictionInfo_DeckSvtInfo_o *v10; // x8
  int32_t baseSvtId; // w1
  System_Nullable_int__o v12; // x0
  QuestRestrictionInfo_DeckSvtInfo_o *v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971C2A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_5971C2A = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  v5 = 0;
  if ( svtId >= 1 && this->fields.deckSvtInfoList )
  {
    v6 = 0;
    v7 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&svtId);
        v7 = BalanceConfig_TypeInfo;
      }
      DeckMemberMax = v7->static_fields->DeckMemberMax;
      v5 = v6 < DeckMemberMax;
      if ( v6 >= DeckMemberMax )
        break;
      deckSvtInfoList = this->fields.deckSvtInfoList;
      if ( !deckSvtInfoList )
        sub_2213CDC(v7, *(_QWORD *)&svtId);
      if ( v6 >= (unsigned __int64)LODWORD(deckSvtInfoList->max_length) )
        sub_2213CE4(v7);
      v10 = deckSvtInfoList->m_Items[v6];
      if ( v10 )
      {
        baseSvtId = v10->fields.baseSvtId;
        v12 = (System_Nullable_int__o)&v14;
        v14 = 0;
        System_Nullable_int____ctor(v12, baseSvtId, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
        v10 = v14;
        v7 = BalanceConfig_TypeInfo;
      }
      ++v6;
      if ( (_BYTE)v10 )
      {
        if ( HIDWORD(v10) == svtId )
          break;
      }
    }
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_50440168(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  bool v11; // w24
  int32_t v12; // w23
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t totalCostRestrictionEntity_high; // w8

  if ( (byte_5971C2B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971C2B = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  v11 = 0;
  if ( svtId >= 1 && this->fields.deckSvtInfoList )
  {
    v12 = 0;
    Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( !HIDWORD(Member->fields.commandCodeIdList) )
      {
        j_il2cpp_runtime_class_init_0(Member, *(_QWORD *)&svtId);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      totalCostRestrictionEntity_high = HIDWORD(Member->fields.questRestrictionInfo->fields.totalCostRestrictionEntity);
      v11 = v12 < totalCostRestrictionEntity_high;
      if ( v12 >= totalCostRestrictionEntity_high )
        break;
      if ( num != v12 && partyIndex != v12 )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, v12, 0)) == 0 )
          sub_2213CDC(Member, *(_QWORD *)&svtId);
        if ( PartyOrganizationListViewItem__get_BaseServantId(Member, 0) == svtId )
          return v11;
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      ++v12;
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
  int v3; // w8
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v5; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971C62 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5971C62 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_2213CDC(Master_object, v5);
  return QuestPhaseEntity__IsWaveSetupSwitchParty(entity, 0);
}


void QuestRestrictionInfo__ResetDeckInfo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct FollowerInfo_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1

  if ( (byte_5971C1A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_DeckSvtInfo___TypeInfo);
    sub_2213A60(&FollowerInfo___TypeInfo);
    byte_5971C1A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct QuestRestrictionInfo_DeckSvtInfo_array *)sub_2213B20(
                                                          QuestRestrictionInfo_DeckSvtInfo___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtInfoList = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.deckSvtInfoList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct FollowerInfo_array *)sub_2213B20(
                                       FollowerInfo___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.deckNpcInfoList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, v18);
}


void QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  unsigned __int64 v6; // x25
  unsigned __int64 v7; // x22
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x28
  __int64 NpcFollowerServantId; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length_low; // x9
  struct FollowerInfo_array *v20; // x8
  unsigned int *v21; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x23
  __int64 v29; // x1
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v31; // x24
  unsigned int *v32; // x29
  QuestRestrictionInfo_DeckSvtInfo_o *v33; // x23
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x0

  if ( (byte_5971C17 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
    byte_5971C17 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtInfoList )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userDeckEntity);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v6 = 0;
    v7 = 0;
    v15 = 8LL * (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0) - 8;
    while ( 1 )
    {
      NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
        NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v7 >= *(int *)(*(_QWORD *)(NpcFollowerServantId + 184) + 172LL) )
        break;
      deckSvtInfoList = this->fields.deckSvtInfoList;
      if ( !deckSvtInfoList )
        goto LABEL_37;
      if ( v7 >= LODWORD(deckSvtInfoList->max_length) )
LABEL_36:
        sub_2213CE4(NpcFollowerServantId);
      deckSvtInfoList->m_Items[v6 / 8] = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&deckSvtInfoList->m_Items[v6 / 8], 0, v9, v10, v11, v12, v13, v14);
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length_low = LODWORD(deckNpcInfoList->max_length);
        if ( (__int64)v7 < (int)max_length_low )
        {
          if ( v7 >= max_length_low )
            goto LABEL_36;
          deckNpcInfoList->m_Items[v6 / 8] = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&deckNpcInfoList->m_Items[v6 / 8],
            0,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14);
        }
      }
      if ( v15 != v6 )
      {
        v20 = this->fields.deckNpcInfoList;
        if ( v20 )
        {
          if ( (__int64)v7 < SLODWORD(v20->max_length) )
          {
            NpcFollowerServantId = UserDeckEntity__GetNpcFollowerServantId(userDeckEntity, v7, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              if ( !Master_object
                || (NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_49447928(
                                                      (NpcFollowerMaster_o *)Master_object,
                                                      this->fields.questId,
                                                      this->fields.questPhase,
                                                      NpcFollowerServantId,
                                                      0)) == 0
                || (v21 = (unsigned int *)this->fields.deckNpcInfoList,
                    NpcFollowerServantId = (__int64)NpcFollowerMaster__GetFollower(
                                                      (NpcFollowerMaster_o *)Master_object,
                                                      this->fields.questId,
                                                      this->fields.questPhase,
                                                      *(_QWORD *)(NpcFollowerServantId + 16),
                                                      0),
                    !v21) )
              {
LABEL_37:
                sub_2213CDC(NpcFollowerServantId, v8);
              }
              v28 = NpcFollowerServantId;
              if ( NpcFollowerServantId )
              {
                NpcFollowerServantId = sub_2213BB4(NpcFollowerServantId, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
                if ( !NpcFollowerServantId )
                {
LABEL_38:
                  v40 = sub_2213D00(NpcFollowerServantId, v29);
                  sub_2213BA0(v40, 0);
                }
              }
              if ( v7 >= v21[6] )
                goto LABEL_36;
              *(_QWORD *)&v21[v6 / 4 + 8] = v28;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21[v6 / 4 + 8], v28, v22, v23, v24, v25, v26, v27);
            }
          }
        }
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, v7, 0);
        if ( UserServant )
        {
          v31 = UserServant;
          v32 = (unsigned int *)this->fields.deckSvtInfoList;
          v33 = (QuestRestrictionInfo_DeckSvtInfo_o *)sub_2213CCC(QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
          QuestRestrictionInfo_DeckSvtInfo___ctor(v33, v31, this, 0);
          if ( !v32 )
            goto LABEL_37;
          if ( v33 )
          {
            NpcFollowerServantId = sub_2213BB4(v33, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
            if ( !NpcFollowerServantId )
              goto LABEL_38;
          }
          if ( v7 >= v32[6] )
            goto LABEL_36;
          *(_QWORD *)&v32[v6 / 4 + 8] = v33;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32[v6 / 4 + 8], (int32_t)v33, v34, v35, v36, v37, v38, v39);
        }
      }
      v6 += 8LL;
      ++v7;
    }
  }
}


void QuestRestrictionInfo__SetDeckInfo_50429080(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *fixed; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x21
  unsigned __int64 v8; // x26
  unsigned __int64 v9; // x23
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x22
  __int64 Follower; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  struct FollowerInfo_array *v21; // x8
  struct FollowerInfo_array *v22; // x8
  int64_t NpcFollowerServantId; // x0
  int64_t v24; // x3
  NpcFollowerEntity_o *Entity_49447928; // x0
  unsigned int *v26; // x25
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x24
  __int64 v34; // x1
  UserServantEntity_o *UserServant; // x0
  unsigned int *v36; // x28
  UserServantEntity_o *v37; // x25
  QuestRestrictionInfo_DeckSvtInfo_o *v38; // x24
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x0
  NpcFollowerMaster_o *Master_object; // [xsp+8h] [xbp-68h]

  if ( (byte_5971C18 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_5971C18 = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtInfoList )
  {
    v7 = fixed;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v8 = 0;
    v9 = 0;
    v17 = 8LL * (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0) - 8;
    while ( 1 )
    {
      Follower = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
        Follower = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v9 >= *(int *)(*(_QWORD *)(Follower + 184) + 172LL) )
        break;
      deckSvtInfoList = this->fields.deckSvtInfoList;
      if ( !deckSvtInfoList )
        goto LABEL_41;
      if ( v9 >= LODWORD(deckSvtInfoList->max_length) )
        goto LABEL_42;
      deckSvtInfoList->m_Items[v8 / 8] = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&deckSvtInfoList->m_Items[v8 / 8],
        0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList && (__int64)v9 < SLODWORD(deckNpcInfoList->max_length) )
      {
        if ( !v7 )
          goto LABEL_41;
        Follower = System_Collections_Generic_List_int___Contains(
                     v7,
                     v9,
                     (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v21 = this->fields.deckNpcInfoList;
          if ( !v21 )
            goto LABEL_41;
          if ( v9 >= LODWORD(v21->max_length) )
LABEL_42:
            sub_2213CE4(Follower);
          v21->m_Items[v8 / 8] = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->m_Items[v8 / 8], 0, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v17 != v8 )
      {
        v22 = this->fields.deckNpcInfoList;
        if ( v22 && (__int64)v9 < SLODWORD(v22->max_length) )
        {
          if ( !v7 )
            goto LABEL_41;
          if ( !System_Collections_Generic_List_int___Contains(
                  v7,
                  v9,
                  (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v9, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              v24 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_41;
              Entity_49447928 = NpcFollowerMaster__GetEntity_49447928(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v24,
                                  0);
              if ( Entity_49447928 )
              {
                v26 = (unsigned int *)this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_49447928->fields.id,
                                      0);
                if ( !v26 )
                  goto LABEL_41;
                v33 = Follower;
                if ( Follower )
                {
                  Follower = sub_2213BB4(Follower, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
                  if ( !Follower )
                    goto LABEL_43;
                }
                if ( v9 >= v26[6] )
                  goto LABEL_42;
                *(_QWORD *)&v26[v8 / 4 + 8] = v33;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26[v8 / 4 + 8], v33, v27, v28, v29, v30, v31, v32);
              }
            }
          }
        }
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, v9, 0);
        if ( UserServant )
        {
          v36 = (unsigned int *)this->fields.deckSvtInfoList;
          v37 = UserServant;
          v38 = (QuestRestrictionInfo_DeckSvtInfo_o *)sub_2213CCC(QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
          QuestRestrictionInfo_DeckSvtInfo___ctor(v38, v37, this, 0);
          if ( !v36 )
LABEL_41:
            sub_2213CDC(Follower, v10);
          if ( v38 )
          {
            Follower = sub_2213BB4(v38, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
            if ( !Follower )
            {
LABEL_43:
              v45 = sub_2213D00(Follower, v34);
              sub_2213BA0(v45, 0);
            }
          }
          if ( v9 >= v36[6] )
            goto LABEL_42;
          *(_QWORD *)&v36[v8 / 4 + 8] = v38;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36[v8 / 4 + 8], (int32_t)v38, v39, v40, v41, v42, v43, v44);
        }
      }
      v8 += 8LL;
      ++v9;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestRestrictionInfo__SetDeckInfo_50430332(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  unsigned __int64 v11; // x25
  unsigned __int64 v12; // x21
  __int64 v13; // x26
  unsigned __int64 v14; // x29
  __int64 Member; // x0
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length_low; // x9
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  Il2CppClass **v19; // x0
  int32_t v20; // w1
  MissionNaviTransitionBoardItem_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct QuestRestrictionInfo_DeckSvtInfo_array *v28; // x8
  PartyOrganizationListViewItem_o *v29; // x22
  UserServantEntity_o *userServantEntity; // x24
  unsigned int *v31; // x28
  QuestRestrictionInfo_DeckSvtInfo_o *v32; // x23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  ServantLeaderInfo_o *ServantLeader; // x24
  __int64 v40; // x1
  struct FollowerInfo_array *v41; // x8
  FollowerInfo_o *followerInfo; // x0
  unsigned int *v43; // x23
  struct FollowerInfo_o *v44; // x22
  __int64 v45; // x0

  if ( (byte_5971C19 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
    byte_5971C19 = 1;
  }
  if ( this->fields.deckSvtInfoList )
  {
    v11 = 0;
    v12 = 0;
    v13 = 8LL * (unsigned int)num;
    v14 = (unsigned int)num;
    while ( 1 )
    {
      Member = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem);
        Member = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v12 >= *(int *)(*(_QWORD *)(Member + 184) + 172LL) )
        return;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length_low = LODWORD(deckNpcInfoList->max_length);
        if ( (__int64)v12 < (int)max_length_low )
        {
          if ( v12 >= max_length_low )
            goto LABEL_42;
          deckNpcInfoList->m_Items[v11 / 8] = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&deckNpcInfoList->m_Items[v11 / 8],
            0,
            *(System_String_o **)&num,
            (System_String_o *)method,
            v4,
            v5,
            v6,
            v7);
        }
      }
      if ( v13 == v11 )
      {
        deckSvtInfoList = this->fields.deckSvtInfoList;
        if ( !deckSvtInfoList )
          goto LABEL_41;
        if ( LODWORD(deckSvtInfoList->max_length) <= v14 )
LABEL_42:
          sub_2213CE4(Member);
        v19 = &deckSvtInfoList->obj.klass + v14;
        v20 = 0;
        v19[4] = 0;
        v21 = (MissionNaviTransitionBoardItem_o *)(v19 + 4);
LABEL_16:
        sub_2213A04(v21, v20, *(System_String_o **)&num, (System_String_o *)method, v4, v5, v6, v7);
        goto LABEL_39;
      }
      if ( !partyItem )
        goto LABEL_41;
      Member = (__int64)PartyListViewItem__GetMember(partyItem, v12, 0);
      v28 = this->fields.deckSvtInfoList;
      if ( !v28 )
        goto LABEL_41;
      if ( v12 >= LODWORD(v28->max_length) )
        goto LABEL_42;
      v29 = (PartyOrganizationListViewItem_o *)Member;
      v28->m_Items[v11 / 8] = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[v11 / 8], 0, v22, v23, v24, v25, v26, v27);
      if ( !v29 )
LABEL_41:
        sub_2213CDC(Member, partyItem);
      userServantEntity = v29->fields.userServantEntity;
      if ( userServantEntity )
      {
        v31 = (unsigned int *)this->fields.deckSvtInfoList;
        v32 = (QuestRestrictionInfo_DeckSvtInfo_o *)sub_2213CCC(QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
        QuestRestrictionInfo_DeckSvtInfo___ctor(v32, userServantEntity, this, 0);
        if ( !v31 )
          goto LABEL_41;
      }
      else
      {
        if ( !v29->fields.followerInfo )
          goto LABEL_30;
        v31 = (unsigned int *)this->fields.deckSvtInfoList;
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v29, 0);
        v32 = (QuestRestrictionInfo_DeckSvtInfo_o *)sub_2213CCC(QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
        QuestRestrictionInfo_DeckSvtInfo___ctor_50561768(v32, ServantLeader, 0);
        if ( !v31 )
          goto LABEL_41;
      }
      if ( v32 )
      {
        Member = sub_2213BB4(v32, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
        if ( !Member )
          goto LABEL_43;
      }
      if ( v12 >= v31[6] )
        goto LABEL_42;
      *(_QWORD *)&v31[v11 / 4 + 8] = v32;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[v11 / 4 + 8], (int32_t)v32, v33, v34, v35, v36, v37, v38);
LABEL_30:
      v41 = this->fields.deckNpcInfoList;
      if ( v41 )
      {
        if ( (__int64)v12 < SLODWORD(v41->max_length) )
        {
          followerInfo = v29->fields.followerInfo;
          if ( followerInfo )
          {
            Member = FollowerInfo__get_IsNpc(followerInfo, 0);
            if ( (Member & 1) != 0 )
            {
              v43 = (unsigned int *)this->fields.deckNpcInfoList;
              if ( !v43 )
                goto LABEL_41;
              v44 = v29->fields.followerInfo;
              if ( v44 )
              {
                Member = sub_2213BB4(v44, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
                if ( !Member )
                {
LABEL_43:
                  v45 = sub_2213D00(Member, v40);
                  sub_2213BA0(v45, 0);
                }
              }
              if ( v12 >= v43[6] )
                goto LABEL_42;
              v20 = (int)v44;
              *(_QWORD *)&v43[v11 / 4 + 8] = v44;
              v21 = (MissionNaviTransitionBoardItem_o *)&v43[v11 / 4 + 8];
              goto LABEL_16;
            }
          }
        }
      }
LABEL_39:
      ++v12;
      v11 += 8LL;
    }
  }
}


System_Collections_Generic_List_int__o *QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  FollowerInfo_array *Master_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  FollowerInfo_array *v8; // x21
  unsigned int v9; // w24
  FollowerInfo_o *v10; // x22
  struct FollowerInfo_array *deckNpcInfoList; // x25
  int32_t npcInitIdx; // w26
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  char *v20; // x0
  struct System_Int32_array *items; // x8
  int32_t v22; // w10
  _QWORD *v23; // x9
  __int64 size; // x11
  __int64 v26; // x0

  if ( (byte_5971C1B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971C1B = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0)) == 0 )
    {
LABEL_25:
      sub_2213CDC(Master_object, v6);
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
          Master_object = (FollowerInfo_array *)sub_2213BB4(v10, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v26 = sub_2213D00(0, v13);
            sub_2213BA0(v26, 0);
          }
          if ( (unsigned int)(npcInitIdx - 1) >= LODWORD(deckNpcInfoList->max_length) )
            break;
          v20 = (char *)deckNpcInfoList + 8 * npcInitIdx - 8;
          *((_QWORD *)v20 + 4) = v10;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), (int32_t)v10, v14, v15, v16, v17, v18, v19);
          if ( !v3 )
            goto LABEL_25;
          items = v3->fields._items;
          v22 = v10->fields.npcInitIdx;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v3->fields._size;
          v6 = (unsigned int)(v22 - 1);
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v6,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v6;
          }
        }
        max_length = v8->max_length;
        if ( (int)++v9 >= max_length )
          return v3;
      }
      sub_2213CE4(Master_object);
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
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v8; // x20
  int32_t v9; // w1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  MissionNaviTransitionBoardItem_o *p_supportPositionList; // x22
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_Collections_Generic_List_RestrictionEntity__c *v71; // x0
  System_Collections_Generic_List_object__o *v72; // x20
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_Collections_Generic_List_int__o *v79; // x20
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  System_Collections_Generic_List_bool____c *v98; // x0
  System_Collections_Generic_List_object__o *v99; // x20
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  System_Collections_Generic_List_object__o *v106; // x20
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  System_Collections_Generic_List_bool____c *v113; // x0
  System_Collections_Generic_List_object__o *v114; // x20
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  System_Collections_Generic_List_object__o *v121; // x20
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  System_Collections_Generic_List_int____c *v128; // x0
  System_Collections_Generic_List_object__o *v129; // x20
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  System_Collections_Generic_List_int____c *v136; // x0
  System_Collections_Generic_List_object__o *v137; // x20
  System_String_o *v138; // x2
  System_String_o *v139; // x3
  int32_t v140; // w4
  int32_t v141; // w5
  bool v142; // w6
  bool v143; // w7
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  QuestRestrictionInfo_o *v150; // x23
  System_Collections_Generic_List_object__o *v151; // x20
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  MissionNaviTransitionBoardItem_o *p_deckSvtInfoList; // x29
  System_String_o *v159; // x2
  System_String_o *v160; // x3
  int32_t v161; // w4
  int32_t v162; // w5
  bool v163; // w6
  bool v164; // w7
  System_String_o *v165; // x2
  System_String_o *v166; // x3
  int32_t v167; // w4
  int32_t v168; // w5
  bool v169; // w6
  bool v170; // w7
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  System_Collections_Generic_List_object__o *v177; // x20
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  System_Collections_Generic_List_object__o *v184; // x20
  System_String_o *v185; // x2
  System_String_o *v186; // x3
  int32_t v187; // w4
  int32_t v188; // w5
  bool v189; // w6
  bool v190; // w7
  const MethodInfo *v191; // x1
  __int64 v192; // x1
  __int64 Master_object; // x0
  Il2CppObject *v194; // x1
  const MethodInfo *v195; // x4
  const MethodInfo *v196; // x1
  System_Collections_Generic_Dictionary_int__object__o *v197; // x20
  System_String_o *v198; // x2
  System_String_o *v199; // x3
  int32_t v200; // w4
  int32_t v201; // w5
  bool v202; // w6
  bool v203; // w7
  System_Collections_Generic_Dictionary_int__object__o *v204; // x20
  System_String_o *v205; // x2
  System_String_o *v206; // x3
  int32_t v207; // w4
  int32_t v208; // w5
  bool v209; // w6
  bool v210; // w7
  System_Collections_Generic_Dictionary_int__object__o *v211; // x20
  System_String_o *v212; // x2
  System_String_o *v213; // x3
  int32_t v214; // w4
  int32_t v215; // w5
  bool v216; // w6
  bool v217; // w7
  System_Collections_Generic_List_object__o *v218; // x26
  bool HasFlag; // w8
  bool v220; // w0
  BalanceConfig_c *v221; // x0
  __int64 v222; // x0
  System_String_o *v223; // x2
  System_String_o *v224; // x3
  int32_t v225; // w4
  int32_t v226; // w5
  bool v227; // w6
  bool v228; // w7
  bool v229; // w8
  __int64 v230; // x1
  Il2CppObject *v231; // x27
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  struct RestrictionWholeEntity_array *Entities; // x0
  System_String_o *v234; // x2
  System_String_o *v235; // x3
  int32_t v236; // w4
  int32_t v237; // w5
  bool v238; // w6
  bool v239; // w7
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v242; // w24
  RestrictionWholeEntity_o *v243; // x20
  int type; // w8
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *myServantPositionsList; // x21
  System_String_o *v247; // x2
  System_String_o *v248; // x3
  int32_t v249; // w4
  int32_t v250; // w5
  bool v251; // w6
  bool v252; // w7
  struct System_Object_array *v253; // x8
  _QWORD *v254; // x9
  __int64 v255; // x10
  __int64 v256; // x1
  Il2CppClass **v257; // x0
  System_Boolean_array *v258; // x0
  System_String_o *v259; // x2
  System_String_o *v260; // x3
  int32_t v261; // w4
  int32_t v262; // w5
  bool v263; // w6
  bool v264; // w7
  System_Collections_Generic_List_object__o *fixedNpcIndividualitiesList; // x21
  System_String_o *v266; // x2
  System_String_o *v267; // x3
  int32_t v268; // w4
  int32_t v269; // w5
  bool v270; // w6
  bool v271; // w7
  struct System_Object_array *v272; // x8
  _QWORD *v273; // x9
  __int64 v274; // x10
  __int64 v275; // x1
  Il2CppClass **v276; // x0
  System_Collections_Generic_List_object__o *positionsList; // x21
  System_String_o *v278; // x2
  System_String_o *v279; // x3
  int32_t v280; // w4
  int32_t v281; // w5
  bool v282; // w6
  bool v283; // w7
  struct System_Object_array *items; // x8
  _QWORD *v285; // x9
  __int64 size; // x10
  __int64 v287; // x1
  Il2CppClass **v288; // x0
  System_Collections_Generic_List_object__o *needStartingIndividualitiesList; // x21
  System_String_o *v290; // x2
  System_String_o *v291; // x3
  int32_t v292; // w4
  int32_t v293; // w5
  bool v294; // w6
  bool v295; // w7
  struct System_Object_array *v296; // x8
  _QWORD *v297; // x9
  __int64 v298; // x10
  __int64 v299; // x1
  Il2CppClass **v300; // x0
  System_Boolean_array *SetPossiblePosition; // x0
  System_String_o *v302; // x2
  System_String_o *v303; // x3
  int32_t v304; // w4
  int32_t v305; // w5
  bool v306; // w6
  bool v307; // w7
  System_Collections_Generic_List_object__o *fixedSupportIndividualitiesList; // x21
  System_String_o *v309; // x2
  System_String_o *v310; // x3
  int32_t v311; // w4
  int32_t v312; // w5
  bool v313; // w6
  bool v314; // w7
  struct System_Object_array *v315; // x8
  _QWORD *v316; // x9
  __int64 v317; // x10
  __int64 v318; // x1
  Il2CppClass **v319; // x0
  Il2CppObject *v320; // x21
  struct System_Int32_array *v321; // x0
  Il2CppClass *v322; // x1
  int32_t v323; // w0
  System_String_o *v324; // x2
  System_String_o *v325; // x3
  int32_t v326; // w4
  int32_t v327; // w5
  bool v328; // w6
  bool v329; // w7
  __int64 v330; // x1
  BalanceConfig_c *v331; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *v332; // x0
  System_String_o *v333; // x2
  System_String_o *v334; // x3
  int32_t v335; // w4
  int32_t v336; // w5
  bool v337; // w6
  bool v338; // w7
  struct FollowerInfo_array *v339; // x0
  System_String_o *v340; // x2
  System_String_o *v341; // x3
  int32_t v342; // w4
  int32_t v343; // w5
  bool v344; // w6
  bool v345; // w7
  System_Collections_Generic_List_object__o *fixedMyServantIndividualitiesList; // x21
  System_String_o *v347; // x2
  System_String_o *v348; // x3
  int32_t v349; // w4
  int32_t v350; // w5
  bool v351; // w6
  bool v352; // w7
  struct System_Object_array *v353; // x8
  _QWORD *v354; // x9
  __int64 v355; // x10
  __int64 v356; // x1
  Il2CppClass **v357; // x0
  System_Collections_Generic_List_object__o *fixedIndividualitiesList; // x21
  System_String_o *v359; // x2
  System_String_o *v360; // x3
  int32_t v361; // w4
  int32_t v362; // w5
  bool v363; // w6
  bool v364; // w7
  struct System_Object_array *v365; // x8
  _QWORD *v366; // x9
  __int64 v367; // x10
  __int64 v368; // x1
  Il2CppClass **v369; // x0
  int32_t restrictionMessageId; // w2
  System_String_o *v371; // x2
  System_String_o *v372; // x3
  int32_t v373; // w4
  int32_t v374; // w5
  bool v375; // w6
  bool v376; // w7
  struct System_Object_array *v377; // x8
  _QWORD *v378; // x9
  __int64 v379; // x10
  Il2CppClass **v380; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v381; // x21
  Il2CppObject *v382; // x8
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **v383; // x29
  _BOOL4 isAllOutBattle; // w8
  bool HasFlag_49492572; // w8
  __int64 v386; // x1
  bool v387; // w8
  DataManager_c *v388; // x0
  __int64 v389; // x1
  __int64 v390; // x20
  System_String_o *v391; // x2
  System_String_o *v392; // x3
  int32_t v393; // w4
  int32_t v394; // w5
  bool v395; // w6
  bool v396; // w7
  QuestPhaseEntity_o *v397; // x8
  QuestPhaseEntity_o *v398; // x8
  BalanceConfig_c *v399; // x0
  __int64 v400; // x0
  System_String_o *v401; // x2
  System_String_o *v402; // x3
  int32_t v403; // w4
  int32_t v404; // w5
  bool v405; // w6
  bool v406; // w7
  int32_t v407; // w20
  int i; // w21
  struct RestrictionBaseEntity_o *v409; // x8
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v410; // x8
  __int64 v411; // x22
  System_Collections_Generic_List_int__o *v412; // x28
  int v413; // w8
  __int64 v414; // x23
  __int64 v415; // x21
  struct System_Int32_array *v416; // x8
  _QWORD *v417; // x9
  __int64 v418; // x10
  int32_t v419; // w2
  System_String_o *v420; // x2
  System_String_o *v421; // x3
  int32_t v422; // w4
  int32_t v423; // w5
  bool v424; // w6
  bool v425; // w7
  struct System_Object_array *v426; // x8
  _QWORD *v427; // x9
  __int64 v428; // x10
  Il2CppClass **v429; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v430; // x21
  Il2CppObject *v431; // x8
  __int64 v432; // x28
  MissionNaviTransitionBoardItem_c *klass; // x24
  QuestRestrictionInfo_SlotInfo_o *v434; // x21
  System_String_o *v435; // x2
  System_String_o *v436; // x3
  int32_t v437; // w4
  int32_t v438; // w5
  bool v439; // w6
  bool v440; // w7
  __int64 v441; // x1
  int32_t v442; // w29
  __int64 v443; // x23
  void **v444; // x0
  int32_t servantNumMax; // w8
  MissionNaviTransitionBoardItem_c *v446; // x8
  int32_t v447; // w21
  __int64 v448; // x8
  QuestRestrictionInfo___c_c *v449; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__84_0; // x21
  Il2CppObject *v452; // x25
  struct QuestRestrictionInfo___c_StaticFields *v453; // x0
  System_String_o *v454; // x2
  System_String_o *v455; // x3
  int32_t v456; // w4
  int32_t v457; // w5
  bool v458; // w6
  bool v459; // w7
  bool v460; // w0
  __int64 v461; // x1
  QuestRestrictionInfo___c_c *v462; // x8
  struct QuestRestrictionInfo___c_StaticFields *v463; // x9
  System_Func_object__bool__o *_9__84_1; // x21
  Il2CppObject *v465; // x25
  struct QuestRestrictionInfo___c_StaticFields *v466; // x0
  System_String_o *v467; // x2
  System_String_o *v468; // x3
  int32_t v469; // w4
  int32_t v470; // w5
  bool v471; // w6
  bool v472; // w7
  bool v473; // w0
  __int64 v474; // x1
  QuestRestrictionInfo___c_c *v475; // x8
  bool v476; // w21
  struct QuestRestrictionInfo___c_StaticFields *v477; // x9
  System_Func_object__bool__o *_9__84_2; // x25
  Il2CppObject *v479; // x24
  struct QuestRestrictionInfo___c_StaticFields *v480; // x0
  System_String_o *v481; // x2
  System_String_o *v482; // x3
  int32_t v483; // w4
  int32_t v484; // w5
  bool v485; // w6
  bool v486; // w7
  MissionNaviTransitionBoardItem_c *v487; // x8
  __int64 v488; // x8
  MissionNaviTransitionBoardItem_c *v489; // x8
  __int64 v490; // x8
  MissionNaviTransitionBoardItem_c *v491; // x8
  __int64 v492; // x8
  MissionNaviTransitionBoardItem_c *v493; // x8
  __int64 v494; // x8
  int v495; // w8
  unsigned int v496; // w24
  __int64 v497; // x25
  __int64 v498; // x8
  MissionNaviTransitionBoardItem_c *v499; // x8
  __int64 v500; // x8
  System_Collections_Generic_List_object__o *v501; // x21
  System_String_o *v502; // x2
  System_String_o *v503; // x3
  int32_t v504; // w4
  int32_t v505; // w5
  bool v506; // w6
  bool v507; // w7
  struct System_Object_array *v508; // x8
  _QWORD *v509; // x9
  __int64 v510; // x10
  __int64 v511; // x1
  Il2CppClass **v512; // x0
  MissionNaviTransitionBoardItem_c *v513; // x8
  __int64 v514; // x8
  struct System_Int32_array *v515; // x8
  _QWORD *v516; // x9
  __int64 v517; // x10
  System_String_o *v518; // x21
  MissionNaviTransitionBoardItem_c *v519; // x8
  __int64 v520; // x8
  System_String_o *v521; // x2
  System_String_o *v522; // x3
  int32_t v523; // w4
  int32_t v524; // w5
  bool v525; // w6
  bool v526; // w7
  MissionNaviTransitionBoardItem_c *v527; // x8
  MissionNaviTransitionBoardItem_o *v528; // x0
  int32_t v529; // w1
  __int64 v530; // x25
  System_String_o **v531; // x25
  System_String_o *v532; // t1
  System_String_o *v533; // x0
  MissionNaviTransitionBoardItem_c *v534; // x8
  QuestRestrictionInfo___c_c *v535; // x0
  __int64 v536; // x25
  struct QuestRestrictionInfo___c_StaticFields *v537; // x8
  System_Func_object__bool__o *_9__84_3; // x21
  Il2CppObject *v539; // x24
  struct QuestRestrictionInfo___c_StaticFields *v540; // x0
  System_String_o *v541; // x2
  System_String_o *v542; // x3
  int32_t v543; // w4
  int32_t v544; // w5
  bool v545; // w6
  bool v546; // w7
  MissionNaviTransitionBoardItem_c *v547; // x8
  __int64 v548; // x8
  MissionNaviTransitionBoardItem_c *v549; // x8
  __int64 v550; // x8
  System_Object_array *v551; // x0
  System_String_o *v552; // x2
  System_String_o *v553; // x3
  int32_t v554; // w4
  int32_t v555; // w5
  bool v556; // w6
  bool v557; // w7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v559; // w10
  int v560; // w11
  int v561; // w9
  int v562; // w20
  int v563; // w19
  QuestRestrictionInfo_SlotInfo_o *v564; // x13
  int slotType; // w13
  int v566; // w21
  int v567; // w22
  __int64 v568; // x9
  bool v569; // w0
  bool v571; // w8
  bool v572; // w0
  bool v573; // cc
  char v574; // w8
  Il2CppObject *Value_int__object; // x0
  int v576; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v578; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v579; // x8
  __int64 v580; // x8
  Il2CppObject *v581; // x20
  __int64 v582; // x0
  Il2CppClass *v583; // x1
  int32_t v584; // w0
  System_String_o *v585; // x2
  System_String_o *v586; // x3
  int32_t v587; // w4
  int32_t v588; // w5
  bool v589; // w6
  bool v590; // w7
  int32_t Count; // w8
  _BOOL8 v592; // x0
  __int64 v593; // x1
  int monitor; // w9
  int v595; // w11
  __int64 v596; // x12
  System_Text_StringBuilder_o *v597; // x20
  System_Text_StringBuilder_o *v598; // x21
  struct RestrictionWholeEntity_array *v599; // x19
  int v600; // w8
  unsigned int v601; // w22
  RestrictionWholeEntity_o *v602; // x24
  int32_t v603; // w8
  struct System_Int32_array *targetVals2; // x8
  struct System_String_o *v605; // x0
  System_String_o *v606; // x2
  System_String_o *v607; // x3
  int32_t v608; // w4
  int32_t v609; // w5
  bool v610; // w6
  bool v611; // w7
  __int64 v612; // x1
  System_String_o *v613; // x21
  System_String_o *v614; // x0
  struct System_String_o *v615; // x0
  System_String_o *v616; // x2
  System_String_o *v617; // x3
  int32_t v618; // w4
  int32_t v619; // w5
  bool v620; // w6
  bool v621; // w7
  __int64 v622; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+10h] [xbp-110h]
  bool v625; // [xsp+28h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+38h] [xbp-E8h]
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **p_dialogMessageInfoDictionary; // [xsp+40h] [xbp-E0h]
  _BOOL4 v629; // [xsp+48h] [xbp-D8h]
  int32_t questIdb; // [xsp+54h] [xbp-CCh]
  MissionNaviTransitionBoardItem_o *p_fields; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v634; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v635; // [xsp+80h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v638; // [xsp+B0h] [xbp-70h] BYREF
  Il2CppObject *v639; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_5971C15 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_2213A60(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_2213A60(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_2213A60(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_2213A60(&QuestRestrictionInfo_DeckSvtInfo___TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_2213A60(&FollowerInfo___TypeInfo);
    sub_2213A60(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_bool____TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_int____TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__Setup_b__84_0__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__Setup_b__84_1__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__Setup_b__84_2__);
    sub_2213A60(&Method_QuestRestrictionInfo___c__Setup_b__84_3__);
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_10712/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_2213A60(&StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C15 = 1;
  }
  v638 = 0;
  v639 = 0;
  v8 = (struct System_String_o *)StringLiteral_1/*""*/;
  item = 0;
  entity = 0;
  memset(&v635, 0, sizeof(v635));
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.isRestriction = 0;
  this->fields.restrictionMessage = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.restrictionMessage,
    v9,
    *(System_String_o **)&questId,
    *(System_String_o **)&questPhase,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.confirmRestrictionMessage,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.supportOnlyRestrictionEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
    0,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.uniqueSvtRestrictionEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.uniqueSvtRestrictionEntity,
    0,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.deckNpcInfoList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.deckNpcInfoList, 0, v28, v29, v30, v31, v32, v33);
  this->fields.fixedSupportPositionRestrictionEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.supportPositionList = 0;
  p_supportPositionList = (MissionNaviTransitionBoardItem_o *)&this->fields.supportPositionList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.supportPositionList, 0, v41, v42, v43, v44, v45, v46);
  this->fields.fixedMyServantPositionRestrictionEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.servantNumRestrictionEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantNumRestrictionEntity,
    0,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.myServantNumRestrictionEntity,
    0,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.svtIdForceBattleList, 0, v65, v66, v67, v68, v69, v70);
  v71 = System_Collections_Generic_List_RestrictionEntity__TypeInfo;
  this->fields.isFatigure = 0;
  this->fields.eventDeckNum = 0;
  *(int32_t *)((char *)&this->fields.eventDeckNum + 3) = 0;
  v72 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v71);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v72;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (int32_t)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v79,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.specifiedPositionList = v79;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.specifiedPositionList,
    (int32_t)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.isNotTransitionSupportList = 0;
  this->fields.supportInitIndex = 0;
  this->fields.fixedServantPositionRestrictionEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.uniqueIndividualityEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.uniqueIndividualityEntity,
    0,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  v98 = System_Collections_Generic_List_bool____TypeInfo;
  this->fields.isAllOutBattle = 0;
  this->fields.allOutBattleGroupNo = -1;
  this->fields.isDataLostBattle = 0;
  this->fields.dataLostBattleId = -1;
  *(_WORD *)&this->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&this->fields.isUniqueServant = 0;
  v99 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v98);
  System_Collections_Generic_List_object____ctor(
    v99,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v99;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.positionsList,
    (int32_t)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v106 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v106,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v106;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fixedIndividualitiesList,
    (int32_t)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  v113 = System_Collections_Generic_List_bool____TypeInfo;
  this->fields.isFixedMyServantPosition = 0;
  v114 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v113);
  System_Collections_Generic_List_object____ctor(
    v114,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v114;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.myServantPositionsList,
    (int32_t)v114,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v121 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v121,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v121;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fixedMyServantIndividualitiesList,
    (int32_t)v121,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v128 = System_Collections_Generic_List_int____TypeInfo;
  this->fields.isFixedSupportPosition = 0;
  v129 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v128);
  System_Collections_Generic_List_object____ctor(
    v129,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v129;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fixedSupportIndividualitiesList,
    (int32_t)v129,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v136 = System_Collections_Generic_List_int____TypeInfo;
  this->fields.isFixedNpcPosition = 0;
  v137 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v136);
  System_Collections_Generic_List_object____ctor(
    v137,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v137;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fixedNpcIndividualitiesList,
    (int32_t)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  this->fields.npcPositionList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.npcPositionList, 0, v144, v145, v146, v147, v148, v149);
  v150 = this;
  v151 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v151,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v151;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.needStartingIndividualitiesList,
    (int32_t)v151,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  this->fields.isNeedStarting = 0;
  this->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&this->fields.isMyServantOrNpc = 0;
  this->fields.deckSvtInfoList = 0;
  p_deckSvtInfoList = (MissionNaviTransitionBoardItem_o *)&this->fields.deckSvtInfoList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.deckSvtInfoList, 0, v159, v160, v161, v162, v163, v164);
  this->fields.slotInfos = 0;
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v165, v166, v167, v168, v169, v170);
  this->fields.dialogMessageInfoDictionary = 0;
  p_dialogMessageInfoDictionary = &this->fields.dialogMessageInfoDictionary;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dialogMessageInfoDictionary,
    0,
    v171,
    v172,
    v173,
    v174,
    v175,
    v176);
  v177 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v177,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.grandServantRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v177;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantRestrictionEntityList,
    (int32_t)v177,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  v184 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v184,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.activeGrandBoardRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v184;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.activeGrandBoardRestrictionEntityList,
    (int32_t)v184,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
  QuestRestrictionInfo__CacheOverwriteSvtTreasureDeviceLv(this, v191);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v192);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_418;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &this->fields.restrictionBaseEntity,
         this->fields.questId,
         this->fields.questPhase,
         v195) )
  {
    this->fields.isRestriction = 1;
    v197 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v197,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v197;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&this->fields.restrictionSlotDictionary;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.restrictionSlotDictionary,
      (int32_t)v197,
      v198,
      v199,
      v200,
      v201,
      v202,
      v203);
    v204 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v204,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v204;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.restrictionSlotDetailDictionary,
      (int32_t)v204,
      v205,
      v206,
      v207,
      v208,
      v209,
      v210);
    v211 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v211,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v211;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_dialogMessageInfoDictionary,
      (int32_t)v211,
      v212,
      v213,
      v214,
      v215,
      v216,
      v217);
    v218 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v218,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)this->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_418;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2, 0);
    Master_object = (__int64)this->fields.restrictionBaseEntity;
    this->fields.isNotTransitionSupportList = HasFlag;
    if ( !Master_object )
      goto LABEL_418;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 4, 0) )
    {
      Master_object = (__int64)this->fields.restrictionBaseEntity;
      if ( !Master_object )
        goto LABEL_418;
      this->fields.eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0);
    }
    Master_object = (__int64)this->fields.restrictionBaseEntity;
    if ( !Master_object )
      goto LABEL_418;
    v220 = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16, 0);
    this->fields.isUniqueServant = v220;
    if ( v220 )
    {
      v221 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v194);
        v221 = BalanceConfig_TypeInfo;
      }
      v222 = sub_2213B20(QuestRestrictionInfo_DeckSvtInfo___TypeInfo, (unsigned int)v221->static_fields->DeckMemberMax);
      p_deckSvtInfoList->klass = (MissionNaviTransitionBoardItem_c *)v222;
      sub_2213A04(p_deckSvtInfoList, v222, v223, v224, v225, v226, v227, v228);
    }
    Master_object = (__int64)this->fields.restrictionBaseEntity;
    if ( !Master_object )
      goto LABEL_418;
    v229 = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32, 0);
    Master_object = (__int64)this->fields.restrictionBaseEntity;
    this->fields.isNotSingleSupportOnly = v229;
    if ( !Master_object )
      goto LABEL_418;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      (RestrictionBaseEntity_o *)Master_object,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v230);
    v231 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    restrictionBaseEntity = this->fields.restrictionBaseEntity;
    if ( !restrictionBaseEntity )
      goto LABEL_418;
    if ( !Master_object )
      goto LABEL_418;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 restrictionBaseEntity->fields.restrictionWholeId,
                 0);
    this->fields.restrictionWholeEntities = Entities;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.restrictionWholeEntities,
      (int32_t)Entities,
      v234,
      v235,
      v236,
      v237,
      v238,
      v239);
    p_restrictionWholeEntities = &this->fields.restrictionWholeEntities;
    restrictionWholeEntities = this->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_418;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v242 = 0;
      do
      {
        if ( v242 >= max_length )
          goto LABEL_419;
        v243 = restrictionWholeEntities->m_Items[v242];
        if ( !v243 )
          goto LABEL_418;
        type = v243->fields.type;
        if ( type <= 5 )
        {
          if ( type > 3 )
          {
            if ( type == 4 )
            {
              positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v243, 0);
              if ( !positionsList )
                goto LABEL_418;
              items = positionsList->fields._items;
              v285 = Method_System_Collections_Generic_List_bool____Add__;
              ++positionsList->fields._version;
              if ( !items )
                goto LABEL_418;
              size = positionsList->fields._size;
              v287 = Master_object;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  positionsList,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v285[4] + 192LL) + 112LL));
              }
              else
              {
                v288 = &items->obj.klass + size;
                positionsList->fields._size = size + 1;
                v288[4] = (Il2CppClass *)v287;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v288 + 4), v287, v278, v279, v280, v281, v282, v283);
              }
              Master_object = (__int64)v243->fields.targetVals;
              if ( !Master_object )
                goto LABEL_418;
              fixedIndividualitiesList = (System_Collections_Generic_List_object__o *)this->fields.fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !fixedIndividualitiesList )
                goto LABEL_418;
              Master_object = sub_2213BB4(Master_object, int___TypeInfo);
              v365 = fixedIndividualitiesList->fields._items;
              v366 = Method_System_Collections_Generic_List_int____Add__;
              ++fixedIndividualitiesList->fields._version;
              if ( !v365 )
                goto LABEL_418;
              v367 = fixedIndividualitiesList->fields._size;
              v368 = Master_object;
              if ( (unsigned int)v367 >= LODWORD(v365->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  fixedIndividualitiesList,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v366[4] + 192LL) + 112LL));
              }
              else
              {
                v369 = &v365->obj.klass + v367;
                fixedIndividualitiesList->fields._size = v367 + 1;
                v369[4] = (Il2CppClass *)v368;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v369 + 4), v368, v359, v360, v361, v362, v363, v364);
              }
              this->fields.isFixedPosition = 1;
            }
            else
            {
              myServantPositionsList = (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v243, 0);
              if ( !myServantPositionsList )
                goto LABEL_418;
              v253 = myServantPositionsList->fields._items;
              v254 = Method_System_Collections_Generic_List_bool____Add__;
              ++myServantPositionsList->fields._version;
              if ( !v253 )
                goto LABEL_418;
              v255 = myServantPositionsList->fields._size;
              v256 = Master_object;
              if ( (unsigned int)v255 >= LODWORD(v253->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  myServantPositionsList,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
              }
              else
              {
                v257 = &v253->obj.klass + v255;
                myServantPositionsList->fields._size = v255 + 1;
                v257[4] = (Il2CppClass *)v256;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v257 + 4), v256, v247, v248, v249, v250, v251, v252);
              }
              Master_object = (__int64)v243->fields.targetVals;
              if ( !Master_object )
                goto LABEL_418;
              fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o *)this->fields.fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !fixedMyServantIndividualitiesList )
                goto LABEL_418;
              Master_object = sub_2213BB4(Master_object, int___TypeInfo);
              v353 = fixedMyServantIndividualitiesList->fields._items;
              v354 = Method_System_Collections_Generic_List_int____Add__;
              ++fixedMyServantIndividualitiesList->fields._version;
              if ( !v353 )
                goto LABEL_418;
              v355 = fixedMyServantIndividualitiesList->fields._size;
              v356 = Master_object;
              if ( (unsigned int)v355 >= LODWORD(v353->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  fixedMyServantIndividualitiesList,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v354[4] + 192LL) + 112LL));
              }
              else
              {
                v357 = &v353->obj.klass + v355;
                fixedMyServantIndividualitiesList->fields._size = v355 + 1;
                v357[4] = (Il2CppClass *)v356;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v357 + 4), v356, v347, v348, v349, v350, v351, v352);
              }
              this->fields.isFixedMyServantPosition = 1;
            }
          }
          else if ( type == 2 )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v194);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
            if ( !Master_object )
              goto LABEL_418;
            Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0);
            this->fields.isAllOutBattle = 1;
            this->fields.allOutBattleGroupNo = Master_object;
          }
          else if ( type == 3 )
          {
            Master_object = System_Linq_Enumerable__Min(
                              (System_Collections_Generic_IEnumerable_int__o *)v243->fields.targetVals,
                              0);
            this->fields.servantNumMax = Master_object - 1;
          }
        }
        else if ( type <= 7 )
        {
          if ( type == 6 )
          {
            SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v243, 0);
            p_supportPositionList->klass = (MissionNaviTransitionBoardItem_c *)SetPossiblePosition;
            sub_2213A04(p_supportPositionList, (int32_t)SetPossiblePosition, v302, v303, v304, v305, v306, v307);
            Master_object = (__int64)v243->fields.targetVals;
            if ( !Master_object )
              goto LABEL_418;
            fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o *)this->fields.fixedSupportIndividualitiesList;
            Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
            if ( !fixedSupportIndividualitiesList )
              goto LABEL_418;
            Master_object = sub_2213BB4(Master_object, int___TypeInfo);
            v315 = fixedSupportIndividualitiesList->fields._items;
            v316 = Method_System_Collections_Generic_List_int____Add__;
            ++fixedSupportIndividualitiesList->fields._version;
            if ( !v315 )
              goto LABEL_418;
            v317 = fixedSupportIndividualitiesList->fields._size;
            v318 = Master_object;
            if ( (unsigned int)v317 >= LODWORD(v315->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                fixedSupportIndividualitiesList,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v316[4] + 192LL) + 112LL));
            }
            else
            {
              v319 = &v315->obj.klass + v317;
              fixedSupportIndividualitiesList->fields._size = v317 + 1;
              v319[4] = (Il2CppClass *)v318;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v319 + 4), v318, v309, v310, v311, v312, v313, v314);
            }
            this->fields.isFixedSupportPosition = 1;
          }
          else
          {
            v258 = RestrictionWholeEntity__GetSetPossiblePosition(v243, 0);
            p_supportPositionList->klass = (MissionNaviTransitionBoardItem_c *)v258;
            sub_2213A04(p_supportPositionList, (int32_t)v258, v259, v260, v261, v262, v263, v264);
            Master_object = (__int64)v243->fields.targetVals;
            if ( !Master_object )
              goto LABEL_418;
            fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o *)this->fields.fixedNpcIndividualitiesList;
            Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
            if ( !fixedNpcIndividualitiesList )
              goto LABEL_418;
            Master_object = sub_2213BB4(Master_object, int___TypeInfo);
            v272 = fixedNpcIndividualitiesList->fields._items;
            v273 = Method_System_Collections_Generic_List_int____Add__;
            ++fixedNpcIndividualitiesList->fields._version;
            if ( !v272 )
              goto LABEL_418;
            v274 = fixedNpcIndividualitiesList->fields._size;
            v275 = Master_object;
            if ( (unsigned int)v274 >= LODWORD(v272->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                fixedNpcIndividualitiesList,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
            }
            else
            {
              v276 = &v272->obj.klass + v274;
              fixedNpcIndividualitiesList->fields._size = v274 + 1;
              v276[4] = (Il2CppClass *)v275;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v276 + 4), v275, v266, v267, v268, v269, v270, v271);
            }
            this->fields.isFixedNpcPosition = 1;
          }
        }
        else
        {
          switch ( type )
          {
            case 8:
              Master_object = (__int64)v243->fields.targetVals;
              if ( !Master_object )
                goto LABEL_418;
              needStartingIndividualitiesList = (System_Collections_Generic_List_object__o *)this->fields.needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !needStartingIndividualitiesList )
                goto LABEL_418;
              Master_object = sub_2213BB4(Master_object, int___TypeInfo);
              v296 = needStartingIndividualitiesList->fields._items;
              v297 = Method_System_Collections_Generic_List_int____Add__;
              ++needStartingIndividualitiesList->fields._version;
              if ( !v296 )
                goto LABEL_418;
              v298 = needStartingIndividualitiesList->fields._size;
              v299 = Master_object;
              if ( (unsigned int)v298 >= LODWORD(v296->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  needStartingIndividualitiesList,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
              }
              else
              {
                v300 = &v296->obj.klass + v298;
                needStartingIndividualitiesList->fields._size = v298 + 1;
                v300[4] = (Il2CppClass *)v299;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v300 + 4), v299, v290, v291, v292, v293, v294, v295);
              }
              this->fields.isNeedStarting = 1;
              break;
            case 9:
              Master_object = (__int64)v243->fields.targetVals;
              if ( !Master_object )
                goto LABEL_418;
              v320 = System_Array__Clone((System_Array_o *)Master_object, 0);
              v321 = (struct System_Int32_array *)sub_2213BB4(v320, int___TypeInfo);
              v322 = int___TypeInfo;
              this->fields.uniqueIndividualitys = v321;
              v323 = sub_2213BB4(v320, v322);
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.uniqueIndividualitys,
                v323,
                v324,
                v325,
                v326,
                v327,
                v328,
                v329);
              v331 = BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v330);
                v331 = BalanceConfig_TypeInfo;
              }
              v332 = (struct QuestRestrictionInfo_DeckSvtInfo_array *)sub_2213B20(
                                                                        QuestRestrictionInfo_DeckSvtInfo___TypeInfo,
                                                                        (unsigned int)v331->static_fields->DeckMemberMax);
              this->fields.deckSvtInfoList = v332;
              sub_2213A04(p_deckSvtInfoList, (int32_t)v332, v333, v334, v335, v336, v337, v338);
              v339 = (struct FollowerInfo_array *)sub_2213B20(
                                                    FollowerInfo___TypeInfo,
                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              this->fields.deckNpcInfoList = v339;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.deckNpcInfoList,
                (int32_t)v339,
                v340,
                v341,
                v342,
                v343,
                v344,
                v345);
              this->fields.isUniqueIndividuality = 1;
              break;
            case 10:
              this->fields.isDataLostBattle = 1;
              targetVals = v243->fields.targetVals;
              if ( !targetVals )
                goto LABEL_418;
              if ( !LODWORD(targetVals->max_length) )
                goto LABEL_419;
              this->fields.dataLostBattleId = targetVals->m_Items[0];
              break;
          }
        }
        restrictionMessageId = v243->fields.restrictionMessageId;
        if ( restrictionMessageId >= 1 )
        {
          if ( !v231 )
            goto LABEL_418;
          Master_object = DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v231,
                            &entity,
                            restrictionMessageId,
                            (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( (Master_object & 1) != 0 )
          {
            if ( !v218 )
              goto LABEL_418;
            Master_object = System_Collections_Generic_List_object___Contains(
                              v218,
                              entity,
                              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              v377 = v218->fields._items;
              v194 = entity;
              v378 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v218->fields._version;
              if ( !v377 )
                goto LABEL_418;
              v379 = v218->fields._size;
              if ( (unsigned int)v379 >= LODWORD(v377->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v218,
                  v194,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v378[4] + 192LL) + 112LL));
              }
              else
              {
                v380 = &v377->obj.klass + v379;
                v218->fields._size = v379 + 1;
                v380[4] = (Il2CppClass *)v194;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v380 + 4),
                  (int32_t)v194,
                  v371,
                  v372,
                  v373,
                  v374,
                  v375,
                  v376);
              }
              v381 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_2213CCC(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v381, 0);
              if ( !v381 )
                goto LABEL_418;
              v382 = entity;
              v381->fields.restrictionType = v243->fields.type;
              if ( !v382 )
                goto LABEL_418;
              Master_object = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_418;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)v382[1].klass,
                (Il2CppObject *)v381,
                (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
            }
          }
        }
        max_length = restrictionWholeEntities->max_length;
      }
      while ( (int)++v242 < max_length );
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v194);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
    v383 = &this->fields.dialogMessageInfoDictionary;
    if ( !Master_object )
      goto LABEL_418;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v639,
      questId,
      (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v639;
    if ( !v639 )
      goto LABEL_418;
    Master_object = QuestEntity__HasFlag_49492572((QuestEntity_o *)v639, 0x100000, questPhase, 0);
    if ( (Master_object & 1) != 0 )
    {
      if ( !this )
        goto LABEL_418;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = this->fields.isAllOutBattle;
    }
    Master_object = (__int64)v639;
    this->fields.isNoSupportBattle = isAllOutBattle;
    if ( !Master_object )
      goto LABEL_418;
    HasFlag_49492572 = QuestEntity__HasFlag_49492572((QuestEntity_o *)Master_object, 0x80000, questPhase, 0);
    Master_object = (__int64)v639;
    this->fields.isSupportOnlyForceBattle = HasFlag_49492572;
    if ( !Master_object )
      goto LABEL_418;
    v387 = QuestEntity__HasFlag_49492572((QuestEntity_o *)Master_object, 0x200000, questPhase, 0);
    v388 = DataManager_TypeInfo;
    this->fields.isFatigure = v387;
    if ( !*(&v388->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v388, v386);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
LABEL_418:
      sub_2213CDC(Master_object, v194);
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v638, questId, questPhase, 0) )
    {
      Master_object = sub_2213B20(int___TypeInfo, 1);
      if ( !v638 )
        goto LABEL_418;
      v390 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v638, 0);
      if ( !v390 )
        goto LABEL_418;
      if ( !*(_DWORD *)(v390 + 24) )
        goto LABEL_419;
      *(_DWORD *)(v390 + 32) = Master_object;
      this->fields.svtIdForceBattleList = (struct System_Int32_array *)v390;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.svtIdForceBattleList,
        v390,
        v391,
        v392,
        v393,
        v394,
        v395,
        v396);
      Master_object = (__int64)v638;
      if ( !v638 )
        goto LABEL_418;
      Master_object = QuestPhaseEntity__GetCorrectionIconId(v638, 0);
      v397 = v638;
      this->fields.correctionIconId = Master_object;
      if ( !v397 )
        goto LABEL_418;
      Master_object = QuestPhaseEntity__GetSupportInitDeckIndex(v397, 0);
      v398 = v638;
      this->fields.supportInitIndex = Master_object;
      if ( !v398 )
        goto LABEL_418;
      this->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v398, 0);
    }
    else
    {
      this->fields.correctionIconId = -1;
    }
    v399 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v389);
      v399 = BalanceConfig_TypeInfo;
    }
    v400 = sub_2213B20(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v399->static_fields->DeckMemberMax);
    p_fields->klass = (MissionNaviTransitionBoardItem_c *)v400;
    sub_2213A04(p_fields, v400, v401, v402, v403, v404, v405, v406);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_418;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_418;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v407 = 1;
    for ( i = 1; ; i = v629 & v447 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v194);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v407 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 172LL) )
        break;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v194);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      v409 = v150->fields.restrictionBaseEntity;
      if ( !v409 )
        goto LABEL_418;
      if ( !Master_object )
        goto LABEL_418;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 v409->fields.restrictionSlotId,
                                 v407,
                                 0);
      if ( !Master_object )
        goto LABEL_418;
      v410 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v411 = Master_object;
      questIdb = i;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v629 = v410 != 0;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_418;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v407,
        (Il2CppObject *)v411,
        (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v412 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v412,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      v413 = *(_DWORD *)(v411 + 24);
      if ( v413 >= 1 )
      {
        v414 = 0;
        while ( (unsigned int)v414 < v413 )
        {
          v415 = *(_QWORD *)(v411 + 32 + 8 * v414);
          if ( !v415 || !v412 )
            goto LABEL_418;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v412,
                            *(_DWORD *)(v415 + 40),
                            (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            v416 = v412->fields._items;
            v194 = (Il2CppObject *)*(unsigned int *)(v415 + 40);
            v417 = Method_System_Collections_Generic_List_int__Add__;
            ++v412->fields._version;
            if ( !v416 )
              goto LABEL_418;
            v418 = v412->fields._size;
            if ( (unsigned int)v418 >= LODWORD(v416->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v412,
                (int32_t)v194,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v417[4] + 192LL) + 112LL));
            }
            else
            {
              v412->fields._size = v418 + 1;
              v416->m_Items[v418] = (int)v194;
            }
          }
          v419 = *(_DWORD *)(v415 + 44);
          if ( v419 >= 1 )
          {
            if ( !v231 )
              goto LABEL_418;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v231,
                              &item,
                              v419,
                              (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v218 )
                goto LABEL_418;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v218,
                                item,
                                (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                v426 = v218->fields._items;
                v194 = item;
                v427 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v218->fields._version;
                if ( !v426 )
                  goto LABEL_418;
                v428 = v218->fields._size;
                if ( (unsigned int)v428 >= LODWORD(v426->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v218,
                    v194,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v427[4] + 192LL) + 112LL));
                }
                else
                {
                  v429 = &v426->obj.klass + v428;
                  v218->fields._size = v428 + 1;
                  v429[4] = (Il2CppClass *)v194;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v429 + 4),
                    (int32_t)v194,
                    v420,
                    v421,
                    v422,
                    v423,
                    v424,
                    v425);
                }
                v430 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_2213CCC(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v430, 0);
                if ( !v430 )
                  goto LABEL_418;
                v431 = item;
                v430->fields.slotNo = v407;
                if ( !v431 )
                  goto LABEL_418;
                Master_object = (__int64)*v383;
                if ( !*v383 )
                  goto LABEL_418;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)v431[1].klass,
                  (Il2CppObject *)v430,
                  (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v413 = *(_DWORD *)(v411 + 24);
          if ( (int)++v414 >= v413 )
            goto LABEL_170;
        }
        goto LABEL_419;
      }
LABEL_170:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v194);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_418;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v412,
                                 0);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_418;
      v432 = Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v407,
        (Il2CppObject *)Master_object,
        (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v434 = (QuestRestrictionInfo_SlotInfo_o *)sub_2213CCC(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v434, 0);
      if ( !klass )
        goto LABEL_418;
      if ( v434 )
      {
        Master_object = sub_2213BB4(v434, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v622 = sub_2213D00(0, v441);
          sub_2213BA0(v622, 0);
        }
      }
      v442 = v407 - 1;
      if ( (unsigned int)(v407 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_419;
      v443 = v442;
      v444 = &klass->_1.image + v442;
      v444[4] = v434;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v444 + 4), (int32_t)v434, v435, v436, v437, v438, v439, v440);
      servantNumMax = this->fields.servantNumMax;
      if ( servantNumMax >= 1 && v442 >= servantNumMax )
      {
        v446 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_418;
        v447 = questIdb;
        if ( (unsigned int)v442 >= LODWORD(v446->_1.namespaze) )
          goto LABEL_419;
        v383 = &this->fields.dialogMessageInfoDictionary;
        v448 = *((_QWORD *)&v446->_1.byval_arg.data + v443);
        if ( !v448 )
          goto LABEL_418;
        v150 = this;
        *(_BYTE *)(v448 + 48) = 0;
        *(_DWORD *)(v448 + 16) = 5;
        goto LABEL_288;
      }
      v449 = QuestRestrictionInfo___c_TypeInfo;
      if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v194);
        v449 = QuestRestrictionInfo___c_TypeInfo;
      }
      static_fields = v449->static_fields;
      _9__84_0 = (System_Func_object__bool__o *)static_fields->__9__84_0;
      if ( !_9__84_0 )
      {
        if ( !*(&v449->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v449, v194);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v452 = (Il2CppObject *)static_fields->__9;
        _9__84_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__84_0, v452, Method_QuestRestrictionInfo___c__Setup_b__84_0__, 0);
        v453 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v453->__9__84_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v453->__9__84_0,
          (int32_t)_9__84_0,
          v454,
          v455,
          v456,
          v457,
          v458,
          v459);
      }
      v460 = BasicHelper__Any_object__58785420(
               (System_Object_array *)v411,
               (System_Func_T__bool__o *)_9__84_0,
               (const MethodInfo_380FE8C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v462 = QuestRestrictionInfo___c_TypeInfo;
      v625 = v460;
      if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v461);
        v462 = QuestRestrictionInfo___c_TypeInfo;
      }
      v463 = v462->static_fields;
      _9__84_1 = (System_Func_object__bool__o *)v463->__9__84_1;
      if ( !_9__84_1 )
      {
        if ( !*(&v462->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v462, v461);
          v463 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v465 = (Il2CppObject *)v463->__9;
        _9__84_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__84_1, v465, Method_QuestRestrictionInfo___c__Setup_b__84_1__, 0);
        v466 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v466->__9__84_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v466->__9__84_1,
          (int32_t)_9__84_1,
          v467,
          v468,
          v469,
          v470,
          v471,
          v472);
      }
      v473 = BasicHelper__Any_object__58785420(
               (System_Object_array *)v411,
               (System_Func_T__bool__o *)_9__84_1,
               (const MethodInfo_380FE8C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v475 = QuestRestrictionInfo___c_TypeInfo;
      v476 = v473;
      if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v474);
        v475 = QuestRestrictionInfo___c_TypeInfo;
      }
      v477 = v475->static_fields;
      _9__84_2 = (System_Func_object__bool__o *)v477->__9__84_2;
      if ( !_9__84_2 )
      {
        if ( !*(&v475->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v475, v474);
          v477 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v479 = (Il2CppObject *)v477->__9;
        _9__84_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__84_2, v479, Method_QuestRestrictionInfo___c__Setup_b__84_2__, 0);
        v480 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v480->__9__84_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v480->__9__84_2,
          (int32_t)_9__84_2,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486);
      }
      Master_object = BasicHelper__Any_object__58785420(
                        (System_Object_array *)v411,
                        (System_Func_T__bool__o *)_9__84_2,
                        (const MethodInfo_380FE8C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      if ( v476 || !v625 || (Master_object & 1) != 0 )
      {
        if ( !((v625 || !v476) | Master_object & 1) )
        {
          v491 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_418;
          if ( (unsigned int)v442 >= LODWORD(v491->_1.namespaze) )
            goto LABEL_419;
          v492 = *((_QWORD *)&v491->_1.byval_arg.data + v442);
          if ( !v492 )
            goto LABEL_418;
          *(_DWORD *)(v492 + 16) = 1;
          if ( !v432 )
            goto LABEL_418;
          goto LABEL_228;
        }
        if ( v625 || v476 || (Master_object & 1) == 0 )
        {
          if ( !((!v476 || !v625) | Master_object & 1) )
          {
            v549 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_418;
            if ( (unsigned int)v442 >= LODWORD(v549->_1.namespaze) )
              goto LABEL_419;
            v550 = *((_QWORD *)&v549->_1.byval_arg.data + v442);
            if ( !v550 )
              goto LABEL_418;
            *(_DWORD *)(v550 + 16) = 3;
            this->fields.isMyServantOrNpc = 1;
            if ( !v432 )
              goto LABEL_418;
            goto LABEL_228;
          }
          if ( (v476 || v625) && (Master_object & 1) != 0 )
          {
            v489 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_418;
            if ( (unsigned int)v442 >= LODWORD(v489->_1.namespaze) )
              goto LABEL_419;
            v490 = *((_QWORD *)&v489->_1.byval_arg.data + v442);
            if ( !v490 )
              goto LABEL_418;
            *(_DWORD *)(v490 + 16) = 4;
            this->fields.isMyServantOrSupport = 1;
            if ( !v432 )
              goto LABEL_418;
            goto LABEL_228;
          }
        }
        else
        {
          v493 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_418;
          if ( (unsigned int)v442 >= LODWORD(v493->_1.namespaze) )
            goto LABEL_419;
          v494 = *((_QWORD *)&v493->_1.byval_arg.data + v442);
          if ( !v494 )
            goto LABEL_418;
          *(_DWORD *)(v494 + 16) = 2;
          this->fields.supportInitIndex = v407;
        }
        if ( !v432 )
          goto LABEL_418;
      }
      else
      {
        v487 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_418;
        if ( (unsigned int)v442 >= LODWORD(v487->_1.namespaze) )
          goto LABEL_419;
        v488 = *((_QWORD *)&v487->_1.byval_arg.data + v442);
        if ( !v488 )
          goto LABEL_418;
        *(_DWORD *)(v488 + 16) = 0;
        if ( !v432 )
          goto LABEL_418;
      }
LABEL_228:
      v495 = *(_DWORD *)(v432 + 24);
      if ( v495 >= 1 )
      {
        v496 = 0;
        while ( v496 < v495 )
        {
          v497 = *(_QWORD *)(v432 + 8LL * (int)v496 + 32);
          if ( !v497 )
            goto LABEL_418;
          if ( !*(_DWORD *)(v411 + 24) )
            break;
          v498 = *(_QWORD *)(v411 + 32);
          if ( !v498 )
            goto LABEL_418;
          if ( *(_DWORD *)(v497 + 16) == *(_DWORD *)(v498 + 40) )
          {
            v499 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_418;
            if ( (unsigned int)v442 >= LODWORD(v499->_1.namespaze) )
              goto LABEL_419;
            v500 = *((_QWORD *)&v499->_1.byval_arg.data + v442);
            if ( !v500 )
              goto LABEL_418;
            if ( *(_DWORD *)(v500 + 16) <= 2u )
            {
              Master_object = *(_QWORD *)(v497 + 40);
              if ( !Master_object )
                goto LABEL_418;
              v501 = *(System_Collections_Generic_List_object__o **)(v500 + 24);
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v501 )
                goto LABEL_418;
              Master_object = sub_2213BB4(Master_object, int___TypeInfo);
              v508 = v501->fields._items;
              v509 = Method_System_Collections_Generic_List_int____Add__;
              ++v501->fields._version;
              if ( !v508 )
                goto LABEL_418;
              v510 = v501->fields._size;
              v511 = Master_object;
              if ( (unsigned int)v510 >= LODWORD(v508->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v501,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v509[4] + 192LL) + 112LL));
              }
              else
              {
                v512 = &v508->obj.klass + v510;
                v501->fields._size = v510 + 1;
                v512[4] = (Il2CppClass *)v511;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v512 + 4), v511, v502, v503, v504, v505, v506, v507);
              }
              v513 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_418;
              if ( (unsigned int)v442 >= LODWORD(v513->_1.namespaze) )
                goto LABEL_419;
              v514 = *((_QWORD *)&v513->_1.byval_arg.data + v442);
              if ( !v514 )
                goto LABEL_418;
              Master_object = *(_QWORD *)(v514 + 32);
              if ( !Master_object )
                goto LABEL_418;
              v515 = *(struct System_Int32_array **)(Master_object + 16);
              v194 = (Il2CppObject *)*(unsigned int *)(v497 + 48);
              v516 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
              ++*(_DWORD *)(Master_object + 28);
              if ( !v515 )
                goto LABEL_418;
              v517 = *(int *)(Master_object + 24);
              if ( (unsigned int)v517 >= LODWORD(v515->max_length) )
              {
                System_Collections_Generic_List_Int32Enum___AddWithResize(
                  (System_Collections_Generic_List_T__o *)Master_object,
                  (int32_t)v194,
                  *(const MethodInfo_4469A88 **)(*(_QWORD *)(v516[4] + 192LL) + 112LL));
              }
              else
              {
                *(_DWORD *)(Master_object + 24) = v517 + 1;
                v515->m_Items[v517] = (int)v194;
              }
            }
            if ( *(_DWORD *)(v497 + 32) == 2 )
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v194);
              Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10712/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0);
              v518 = (System_String_o *)Master_object;
            }
            else
            {
              v518 = *(System_String_o **)(v497 + 24);
            }
            v519 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_418;
            if ( (unsigned int)v442 >= LODWORD(v519->_1.namespaze) )
              goto LABEL_419;
            v520 = *((_QWORD *)&v519->_1.byval_arg.data + v442);
            if ( !v520 )
              goto LABEL_418;
            Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v520 + 40), 0);
            v527 = p_fields->klass;
            if ( (Master_object & 1) != 0 )
            {
              if ( !v527 )
                goto LABEL_418;
              if ( (unsigned int)v442 >= LODWORD(v527->_1.namespaze) )
                goto LABEL_419;
              Master_object = *((_QWORD *)&v527->_1.byval_arg.data + v442);
              if ( !Master_object )
                goto LABEL_418;
              *(_QWORD *)(Master_object + 40) = v518;
              v528 = (MissionNaviTransitionBoardItem_o *)(Master_object + 40);
              v529 = (int)v518;
            }
            else
            {
              if ( !v527 )
                goto LABEL_418;
              if ( (unsigned int)v442 >= LODWORD(v527->_1.namespaze) )
                goto LABEL_419;
              v530 = *((_QWORD *)&v527->_1.byval_arg.data + v442);
              if ( !v530 )
                goto LABEL_418;
              v532 = *(System_String_o **)(v530 + 40);
              v531 = (System_String_o **)(v530 + 40);
              v533 = System_String__Concat_75694928(v532, (System_String_o *)StringLiteral_43/*"\n"*/, v518, 0);
              v529 = (int)v533;
              *v531 = v533;
              v528 = (MissionNaviTransitionBoardItem_o *)v531;
            }
            sub_2213A04(v528, v529, v521, v522, v523, v524, v525, v526);
          }
          v495 = *(_DWORD *)(v432 + 24);
          if ( (int)++v496 >= v495 )
            goto LABEL_272;
        }
        goto LABEL_419;
      }
LABEL_272:
      v534 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_418;
      if ( (unsigned int)v442 >= LODWORD(v534->_1.namespaze) )
        goto LABEL_419;
      v535 = QuestRestrictionInfo___c_TypeInfo;
      v536 = *((_QWORD *)&v534->_1.byval_arg.data + v442);
      if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v194);
        v535 = QuestRestrictionInfo___c_TypeInfo;
      }
      v537 = v535->static_fields;
      _9__84_3 = (System_Func_object__bool__o *)v537->__9__84_3;
      if ( !_9__84_3 )
      {
        if ( !*(&v535->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v535, v194);
          v537 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v539 = (Il2CppObject *)v537->__9;
        _9__84_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__84_3, v539, Method_QuestRestrictionInfo___c__Setup_b__84_3__, 0);
        v540 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v540->__9__84_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__84_3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v540->__9__84_3,
          (int32_t)_9__84_3,
          v541,
          v542,
          v543,
          v544,
          v545,
          v546);
      }
      Master_object = BasicHelper__Any_object__58785420(
                        (System_Object_array *)v432,
                        (System_Func_T__bool__o *)_9__84_3,
                        (const MethodInfo_380FE8C *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
      if ( !v536 )
        goto LABEL_418;
      *(_BYTE *)(v536 + 48) = (Master_object & 1) == 0;
      v547 = p_fields->klass;
      v447 = questIdb;
      if ( !p_fields->klass )
        goto LABEL_418;
      if ( (unsigned int)v442 >= LODWORD(v547->_1.namespaze) )
        goto LABEL_419;
      v383 = &this->fields.dialogMessageInfoDictionary;
      v548 = *((_QWORD *)&v547->_1.byval_arg.data + v443);
      if ( !v548 )
        goto LABEL_418;
      v150 = this;
      if ( *(_DWORD *)(v548 + 16) == 1 )
      {
        if ( *(_BYTE *)(v548 + 48) )
          this->fields.isNpcEditablePos = 1;
      }
      *(_BYTE *)(v548 + 49) = *(_DWORD *)(v411 + 24) != 0;
LABEL_288:
      ++v407;
    }
    if ( !v218 )
      goto LABEL_418;
    v551 = System_Collections_Generic_List_object___ToArray(
             v218,
             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    v150->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v551;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v150->fields.restrictionMessageEntities,
      (int32_t)v551,
      v552,
      v553,
      v554,
      v555,
      v556,
      v557);
    slotInfos = v150->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_418;
    v559 = slotInfos->max_length;
    if ( v559 >= 1 )
    {
      v560 = 0;
      v561 = 0;
      v562 = 0;
      v563 = 0;
      while ( 1 )
      {
        if ( v559 == v560 )
          goto LABEL_419;
        v564 = slotInfos->m_Items[v560];
        if ( !v564 )
          goto LABEL_418;
        slotType = v564->fields.slotType;
        if ( slotType <= 2 )
          break;
        if ( (unsigned int)(slotType - 3) <= 1 )
          goto LABEL_306;
LABEL_308:
        if ( (v559 & ~(v559 >> 31)) == ++v560 )
          goto LABEL_311;
      }
      if ( slotType )
      {
        if ( slotType == 1 )
        {
          ++v562;
        }
        else if ( slotType == 2 )
        {
          ++v561;
        }
        goto LABEL_308;
      }
LABEL_306:
      ++v563;
      goto LABEL_308;
    }
    v563 = 0;
    v562 = 0;
    v561 = 0;
LABEL_311:
    if ( ((unsigned __int8)i & (v561 == 0)) == 1 )
      v150->fields.isNoSupportBattle = 1;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v194);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_418;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v150->fields.questId,
                               v150->fields.questPhase,
                               0);
    if ( !Master_object )
      goto LABEL_418;
    v566 = *(_DWORD *)(Master_object + 24);
    if ( v566 >= 1 )
    {
      v567 = 0;
      while ( v566 != v567 )
      {
        v568 = *(_QWORD *)(Master_object + 8LL * v567 + 32);
        if ( !v568 )
          goto LABEL_418;
        if ( !*(_BYTE *)(v568 + 113) && (v566 & ~(v566 >> 31)) != ++v567 )
          continue;
        goto LABEL_325;
      }
LABEL_419:
      sub_2213CE4(Master_object);
    }
    v567 = 0;
LABEL_325:
    Master_object = (__int64)v639;
    if ( !v639 )
      goto LABEL_418;
    v569 = QuestEntity__HasFlag_49492572((QuestEntity_o *)v639, 0x10000000, questPhase, 0);
    v150->fields.isNpcMultipleBattle = v569;
    if ( !v569 )
    {
      v571 = v567 < v566 && v563 > 0 && v562 > 0;
      v150->fields.isNpcMultipleBattle = v571;
    }
    Master_object = (__int64)v639;
    if ( !v639 )
      goto LABEL_418;
    v572 = QuestEntity__HasFlag_49492572((QuestEntity_o *)v639, 0x20000000, questPhase, 0);
    v150->fields.isNpcOnlyBattle = v572;
    if ( !v572 )
    {
      if ( v567 >= v566 )
      {
        v574 = 0;
      }
      else
      {
        if ( v563 )
          v573 = 1;
        else
          v573 = v562 <= 0;
        v574 = !v573;
      }
      v150->fields.isNpcOnlyBattle = v574;
    }
    Master_object = (__int64)v150->fields.restrictionBaseEntity;
    if ( !Master_object )
      goto LABEL_418;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8, 0) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0,
                            (const MethodInfo_381447C *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v576 = 2;
      else
        v576 = 1;
      DeckMemberMax = v150->fields.servantNumMax;
      v150->fields.servantNumMin = v576;
      if ( !DeckMemberMax )
      {
        v578 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v194);
          v578 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v578->static_fields->DeckMemberMax;
        v150->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v150->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v150->fields.isNpcMultipleBattle )
        v150->fields.myServantNumMax = v563;
    }
    else
    {
      v150->fields.myServantNumMax = v563;
      if ( DeckMemberMax == 1 && v563 == 1 )
      {
        Master_object = (__int64)v150->fields.restrictionSlotDetailDictionary;
        v150->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_418;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v579 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v579 )
          {
            if ( !(_DWORD)v579 )
              goto LABEL_419;
            v580 = *(_QWORD *)(Master_object + 32);
            if ( !v580 )
              goto LABEL_418;
            Master_object = *(_QWORD *)(v580 + 40);
            if ( !Master_object )
              goto LABEL_418;
            v581 = System_Array__Clone((System_Array_o *)Master_object, 0);
            v582 = sub_2213BB4(v581, int___TypeInfo);
            v583 = int___TypeInfo;
            v150->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)v582;
            v584 = sub_2213BB4(v581, v583);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v150->fields.fixedMyServantSingleIndividualities,
              v584,
              v585,
              v586,
              v587,
              v588,
              v589,
              v590);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_418;
    Count = System_Collections_Generic_Dictionary_int__object___get_Count(
              (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
              (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    Master_object = (__int64)v150->fields.restrictionSlotDictionary;
    v150->fields.isSupportOnly = Count > 0;
    if ( !Master_object )
      goto LABEL_418;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                               (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_418;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v634,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v635 = v634;
    v634.fields._dictionary = 0;
    *(_QWORD *)&v634.fields._index = &v635;
    do
    {
      v592 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v635,
               (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v592 )
        break;
      if ( !v635.fields._currentValue )
        sub_2213CDC(v592, v593);
      monitor = (int)v635.fields._currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v595 = 0;
        while ( 1 )
        {
          if ( monitor == v595 )
            sub_2213CE4(v592);
          v596 = *((_QWORD *)&v635.fields._currentValue[2].klass + v595);
          if ( !v596 )
            sub_2213CDC(v592, v593);
          if ( *(_DWORD *)(v596 + 28) == 1 )
            break;
          if ( (monitor & ~(monitor >> 31)) == ++v595 )
            goto LABEL_382;
        }
        v150->fields.isSupportOnly = 0;
        break;
      }
LABEL_382:
      ;
    }
    while ( v150->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v635,
      (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v597 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v597, 0);
    v598 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v598, 0);
    v599 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_418;
    v600 = v599->max_length;
    if ( v600 >= 1 )
    {
      v601 = 0;
      while ( 1 )
      {
        if ( v601 >= v600 )
          goto LABEL_419;
        v602 = v599->m_Items[v601];
        if ( !v602 )
          goto LABEL_418;
        Master_object = System_String__IsNullOrEmpty(v602->fields.summary, 0);
        if ( (Master_object & 1) == 0 )
        {
          v603 = v602->fields.type;
          if ( v603 == 10 || v603 == 2 )
            goto LABEL_396;
          if ( v603 == 1 )
            break;
        }
LABEL_404:
        v600 = v599->max_length;
        if ( (int)++v601 >= v600 )
          goto LABEL_409;
      }
      targetVals2 = v602->fields.targetVals2;
      if ( !targetVals2 )
        goto LABEL_418;
      if ( LODWORD(targetVals2->max_length) == 1 )
      {
LABEL_396:
        if ( this->fields.isRestriction )
        {
          if ( !v598 )
            goto LABEL_418;
          System_Text_StringBuilder__Append_75735064(v598, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        }
        else if ( !v598 )
        {
          goto LABEL_418;
        }
        Master_object = (__int64)System_Text_StringBuilder__Append_75735064(v598, v602->fields.summary, 0);
        this->fields.isRestriction = 1;
      }
      else if ( !this->fields.isRestriction )
      {
        if ( !v597 )
          goto LABEL_418;
        goto LABEL_403;
      }
      if ( !v597 )
        goto LABEL_418;
      System_Text_StringBuilder__Append_75735064(v597, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
LABEL_403:
      Master_object = (__int64)System_Text_StringBuilder__Append_75735064(v597, v602->fields.summary, 0);
      this->fields.isRestriction = 1;
      goto LABEL_404;
    }
LABEL_409:
    if ( !v598 )
      goto LABEL_418;
    Master_object = System_Text_StringBuilder__get_Length(v598, 0);
    if ( (int)Master_object >= 1 )
    {
      v605 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v598->klass->vtable._3_ToString.methodPtr)(
                                         v598,
                                         v598->klass->vtable._3_ToString.method);
      this->fields.confirmRestrictionMessage = v605;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.confirmRestrictionMessage,
        (int32_t)v605,
        v606,
        v607,
        v608,
        v609,
        v610,
        v611);
    }
    if ( !v597 )
      goto LABEL_418;
    if ( System_Text_StringBuilder__get_Length(v597, 0) >= 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v612);
      v613 = LocalizationManager__Get((System_String_o *)StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v614 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v597->klass->vtable._3_ToString.methodPtr)(
                                  v597,
                                  v597->klass->vtable._3_ToString.method);
      v615 = System_String__Concat_75694928(v613, (System_String_o *)StringLiteral_43/*"\n"*/, v614, 0);
      this->fields.restrictionMessage = v615;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.restrictionMessage,
        (int32_t)v615,
        v616,
        v617,
        v618,
        v619,
        v620,
        v621);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v196);
  }
}


void QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *v4; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct RestrictionEntity_array *restrictionEntityList; // x25
  int max_length; // w8
  unsigned int v15; // w26
  struct RestrictionEntity_o *v16; // x21
  struct RestrictionEntity_o **p_totalCostRestrictionEntity; // x0
  Il2CppObject *v18; // x21
  struct System_Int32_array *v19; // x0
  Il2CppClass *v20; // x1
  int32_t v21; // w0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  BalanceConfig_c *v29; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct FollowerInfo_array *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Int32_array *v44; // x8
  _BOOL4 isRestriction; // w9
  __int64 v46; // x1
  BalanceConfig_c *v47; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int *targetVals; // x8
  int32_t v56; // w8
  struct System_Int32_array *v57; // x8
  il2cpp_array_size_t v58; // x9
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x8
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x8
  struct System_Boolean_array *DeckPositionList; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x8
  __int64 v78; // x9
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x8
  struct System_Collections_Generic_List_int__o *v83; // x22
  struct System_Int32_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x22
  struct System_Int32_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  struct System_String_o *v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  __int64 v98; // x1
  System_String_o *v99; // x0
  struct System_String_o *v100; // x0
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  long double v107; // q0
  __int64 v108; // x0
  __int64 v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  bool HasFlag; // w0
  bool v117; // w0
  System_Collections_Generic_List_object__o *v118; // x20
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  bool v125; // w8
  bool v126; // w8
  bool v127; // w8
  bool v128; // w8
  bool v129; // w0
  QuestPhaseEntity_o *v130; // x8
  QuestPhaseEntity_o *v131; // x8
  bool HasFlag_49492572; // w0
  bool v133; // w0
  System_Collections_Generic_List_object__o *v134; // x20
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7
  bool v141; // w8
  bool v142; // w0
  bool v143; // w8
  bool v144; // w8
  bool v145; // w8
  bool v146; // w8
  QuestPhaseEntity_o *v147; // x8
  QuestPhaseEntity_o *v148; // x8
  System_String_o *v149; // x2
  System_String_o *v150; // x3
  int32_t v151; // w4
  int32_t v152; // w5
  bool v153; // w6
  bool v154; // w7
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  QuestRestrictionInfoEntity_o *v167; // [xsp+8h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v168; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5971C16 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&QuestRestrictionInfo_DeckSvtInfo___TypeInfo);
    sub_2213A60(&FollowerInfo___TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_5971C16 = 1;
  }
  v168 = 0;
  entity = 0;
  v167 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_164;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_165;
      v16 = restrictionEntityList->m_Items[v15];
      if ( !v16 )
        goto LABEL_164;
      switch ( v16->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity = &this->fields.totalCostRestrictionEntity;
          this->fields.totalCostRestrictionEntity = v16;
          goto LABEL_42;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isSupportOnly = 1;
          goto LABEL_79;
        case 6:
          this->fields.uniqueSvtRestrictionEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.uniqueSvtRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          v47 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v46);
            v47 = BalanceConfig_TypeInfo;
          }
          v48 = (struct QuestRestrictionInfo_DeckSvtInfo_array *)sub_2213B20(
                                                                   QuestRestrictionInfo_DeckSvtInfo___TypeInfo,
                                                                   (unsigned int)v47->static_fields->DeckMemberMax);
          this->fields.deckSvtInfoList = v48;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.deckSvtInfoList,
            (int32_t)v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
          this->fields.isUniqueServant = 1;
          goto LABEL_79;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v16, 0);
          this->fields.supportPositionList = DeckPositionList;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.supportPositionList,
            (int32_t)DeckPositionList,
            v68,
            v69,
            v70,
            v71,
            v72,
            v73);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_79;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_79;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_79;
        case 0xA:
          this->fields.servantNumRestrictionEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.servantNumRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          targetVals = (int *)v16->fields.targetVals;
          if ( v16->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v56 = targetVals[9];
LABEL_59:
              this->fields.servantNumMax = v56;
            }
          }
          else if ( targetVals )
          {
            v78 = *((_QWORD *)targetVals + 3);
            if ( v78 )
            {
              if ( !(_DWORD)v78 )
                goto LABEL_165;
              v56 = targetVals[8];
              goto LABEL_59;
            }
          }
LABEL_79:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v15 >= max_length )
            goto LABEL_80;
          break;
        case 0xB:
          this->fields.myServantNumRestrictionEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.myServantNumRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          v57 = v16->fields.targetVals;
          if ( !v57 )
            goto LABEL_79;
          v58 = v57->max_length;
          if ( !v58 )
            goto LABEL_79;
          if ( !(_DWORD)v58 )
            goto LABEL_165;
          this->fields.myServantNumMax = v57->m_Items[0];
          goto LABEL_79;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_164;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v75 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_164;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v77[4] = (Il2CppClass *)v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v77 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v16,
                                                                                               0);
          if ( !specifiedPositionList )
            goto LABEL_164;
          v88 = specifiedPositionList->fields._items;
          v89 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v88 )
            goto LABEL_164;
          v90 = specifiedPositionList->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v90 + 1;
            v88->m_Items[v90] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_79;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isNeedStarting = 1;
          goto LABEL_79;
        case 0xF:
          this->fields.uniqueIndividualityEntity = v16;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.uniqueIndividualityEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v16->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_164;
          v18 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0);
          v19 = (struct System_Int32_array *)sub_2213BB4(v18, int___TypeInfo);
          v20 = int___TypeInfo;
          this->fields.uniqueIndividualitys = v19;
          v21 = sub_2213BB4(v18, v20);
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.uniqueIndividualitys,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          v29 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28);
            v29 = BalanceConfig_TypeInfo;
          }
          v30 = (struct QuestRestrictionInfo_DeckSvtInfo_array *)sub_2213B20(
                                                                   QuestRestrictionInfo_DeckSvtInfo___TypeInfo,
                                                                   (unsigned int)v29->static_fields->DeckMemberMax);
          this->fields.deckSvtInfoList = v30;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.deckSvtInfoList,
            (int32_t)v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          v37 = (struct FollowerInfo_array *)sub_2213B20(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v37;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.deckNpcInfoList,
            (int32_t)v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_79;
        case 0x10:
          goto LABEL_61;
        case 0x11:
          v44 = v16->fields.targetVals;
          this->fields.isDataLostBattle = 1;
          if ( !v44 )
            goto LABEL_164;
          if ( !LODWORD(v44->max_length) )
            goto LABEL_165;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v44->m_Items[0];
          if ( isRestriction )
          {
LABEL_51:
            if ( !v3 )
              goto LABEL_164;
            System_Text_StringBuilder__Append_75735064(v3, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
          }
          else
          {
LABEL_19:
            if ( !v3 )
              goto LABEL_164;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_75735064(
                                                                                               v3,
                                                                                               v16->fields.name,
                                                                                               0);
          this->fields.isRestriction = 1;
          goto LABEL_79;
        case 0x15:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.grandServantRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_164;
          goto LABEL_39;
        case 0x18:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.grandServantRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_164;
          v59 = myServantOrNpcRestrictionEntityList->fields._items;
          v60 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v59 )
            goto LABEL_164;
          v61 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &v59->obj.klass + v61;
            myServantOrNpcRestrictionEntityList->fields._size = v61 + 1;
            v62[4] = (Il2CppClass *)v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v62 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
          }
LABEL_61:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_164;
          v79 = myServantOrNpcRestrictionEntityList->fields._items;
          v80 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v79 )
            goto LABEL_164;
          v81 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            v82 = &v79->obj.klass + v81;
            myServantOrNpcRestrictionEntityList->fields._size = v81 + 1;
            v82[4] = (Il2CppClass *)v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v82 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
          }
          v83 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v16,
                                                                                               0);
          if ( !v83 )
            goto LABEL_164;
          v84 = v83->fields._items;
          v85 = Method_System_Collections_Generic_List_int__Add__;
          ++v83->fields._version;
          if ( !v84 )
            goto LABEL_164;
          v86 = v83->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v83,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v83->fields._size = v86 + 1;
            v84->m_Items[v86] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_79;
        case 0x19:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.activeGrandBoardRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_164;
LABEL_39:
          v63 = myServantOrNpcRestrictionEntityList->fields._items;
          v64 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v63 )
            goto LABEL_164;
          v65 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &v63->obj.klass + v65;
            myServantOrNpcRestrictionEntityList->fields._size = v65 + 1;
            v66[4] = (Il2CppClass *)v16;
            p_totalCostRestrictionEntity = (struct RestrictionEntity_o **)(v66 + 4);
LABEL_42:
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p_totalCostRestrictionEntity,
              (int32_t)v16,
              v7,
              v8,
              v9,
              v10,
              v11,
              v12);
          }
          goto LABEL_79;
        default:
          if ( this->fields.isRestriction )
            goto LABEL_51;
          goto LABEL_19;
      }
    }
  }
LABEL_80:
  if ( this->fields.isRestriction )
  {
    if ( !v3 )
      goto LABEL_164;
    v91 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                                      v3,
                                      v3->klass->vtable._3_ToString.method);
    this->fields.confirmRestrictionMessage = v91;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.confirmRestrictionMessage,
      (int32_t)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v98);
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v100 = System_String__Concat_75694928(
             v99,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             this->fields.confirmRestrictionMessage,
             0);
    this->fields.restrictionMessage = v100;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.restrictionMessage,
      (int32_t)v100,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_164;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_164;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_164;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_164;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v168,
    this->fields.questId,
    this->fields.questPhase,
    0);
  v108 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v108 + 309) & 1) == 0 )
    v108 = sub_224B908(v107);
  v109 = *(_QWORD *)(*(_QWORD *)(v108 + 192) + 16LL);
  if ( (*(_WORD *)(v109 + 309) & 1) == 0 )
    v109 = sub_224B908(v107);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v109 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_164;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_164;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v167,
         this->fields.questId,
         this->fields.questPhase,
         0) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
    if ( !v167 )
      goto LABEL_164;
    if ( QuestRestrictionInfoEntity__HasFlag(v167, 0x100000, 0) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_114;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
    if ( !v167 )
      goto LABEL_164;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v167, 0x400000000000000LL, 0);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_114;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
    if ( !v167 )
      goto LABEL_164;
    v117 = QuestRestrictionInfoEntity__HasFlag(v167, 0x80000, 0);
    this->fields.isSupportOnlyForceBattle = v117;
    if ( v117 )
    {
LABEL_114:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
      if ( v167 )
      {
        v125 = QuestRestrictionInfoEntity__HasFlag(v167, 0x10000000, 0);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
        this->fields.isNpcMultipleBattle = v125;
        if ( myServantOrNpcRestrictionEntityList )
        {
          v126 = QuestRestrictionInfoEntity__HasFlag(
                   (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                   0x20000000,
                   0);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
          this->fields.isNpcOnlyBattle = v126;
          if ( myServantOrNpcRestrictionEntityList )
          {
            v127 = QuestRestrictionInfoEntity__HasFlag(
                     (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                     0x800000000LL,
                     0);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
            this->fields.isNpcEditablePos = v127;
            if ( myServantOrNpcRestrictionEntityList )
            {
              v128 = QuestRestrictionInfoEntity__HasFlag(
                       (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                       0x80000000000000LL,
                       0);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
              this->fields.isNotTransitionSupportList = v128;
              if ( myServantOrNpcRestrictionEntityList )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  (QuestRestrictionInfoEntity_o *)myServantOrNpcRestrictionEntityList,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
                if ( v167 )
                {
                  v129 = QuestRestrictionInfoEntity__HasFlag(v167, 0x400000000000000LL, 0);
                  this->fields.isAllOutBattle = v129;
                  if ( v129 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_164;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_164;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_49492572(
                                                (QuestEntity_o *)entity,
                                                0x200000,
                                                this->fields.questPhase,
                                                0);
                  if ( v168 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetCorrectionIconId(v168, 0);
                    v130 = v168;
                    this->fields.correctionIconId = (int)myServantOrNpcRestrictionEntityList;
                    if ( !v130 )
                      goto LABEL_164;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSupportInitDeckIndex(v130, 0);
                    v131 = v168;
                    this->fields.supportInitIndex = (int)myServantOrNpcRestrictionEntityList;
                    if ( !v131 )
                      goto LABEL_164;
                    this->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v131, 0);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
                  if ( v167 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v167,
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
LABEL_164:
      sub_2213CDC(myServantOrNpcRestrictionEntityList, v6);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
    if ( !v167 )
      goto LABEL_164;
    if ( QuestRestrictionInfoEntity__HasFlag(v167, 0x1000000, 0) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v167;
      if ( !v167 )
        goto LABEL_164;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v167, 0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_2213B20(int___TypeInfo, 1);
    if ( !v167 )
      goto LABEL_164;
    v118 = myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v167,
                                                                                         0);
    if ( !v118 )
      goto LABEL_164;
    if ( v118->fields._size )
    {
      LODWORD(v118->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = (struct System_Int32_array *)v118;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.svtIdForceBattleList,
        (int32_t)v118,
        v119,
        v120,
        v121,
        v122,
        v123,
        v124);
      goto LABEL_114;
    }
LABEL_165:
    sub_2213CE4(myServantOrNpcRestrictionEntityList);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_49492572((QuestEntity_o *)entity, 0x100000, this->fields.questPhase, 0) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_164;
      HasFlag_49492572 = QuestEntity__HasFlag_49492572(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0);
      this->fields.isNoSupportBattle = HasFlag_49492572;
      if ( !HasFlag_49492572 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_164;
        v133 = QuestEntity__HasFlag_49492572((QuestEntity_o *)entity, 0x80000, this->fields.questPhase, 0);
        this->fields.isSupportOnlyForceBattle = v133;
        if ( !v133 )
        {
          if ( v168 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_164;
            if ( QuestEntity__HasFlag_49492572((QuestEntity_o *)entity, 0x1000000, this->fields.questPhase, 0) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
              if ( !v168 )
                goto LABEL_164;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v168, 0);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_2213B20(
                                                                                                 int___TypeInfo,
                                                                                                 1);
            if ( !v168 )
              goto LABEL_164;
            v134 = myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v168,
                                                                                                 0);
            if ( !v134 )
              goto LABEL_164;
            if ( !v134->fields._size )
              goto LABEL_165;
            LODWORD(v134->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = (struct System_Int32_array *)v134;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.svtIdForceBattleList,
              (int32_t)v134,
              v135,
              v136,
              v137,
              v138,
              v139,
              v140);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_164;
    v141 = QuestEntity__HasFlag_49492572((QuestEntity_o *)entity, 0x200000, this->fields.questPhase, 0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    this->fields.isFatigure = v141;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_164;
    v142 = QuestEntity__HasFlag_49492572(
             (QuestEntity_o *)myServantOrNpcRestrictionEntityList,
             0x400000000000000LL,
             this->fields.questPhase,
             0);
    this->fields.isAllOutBattle = v142;
    if ( v142 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_164;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_164;
      this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                           (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                           this->fields.questId,
                                           17,
                                           0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_164;
    v143 = QuestEntity__HasFlag_49492572((QuestEntity_o *)entity, 0x10000000, this->fields.questPhase, 0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    this->fields.isNpcMultipleBattle = v143;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_164;
    v144 = QuestEntity__HasFlag_49492572(
             (QuestEntity_o *)myServantOrNpcRestrictionEntityList,
             0x20000000,
             this->fields.questPhase,
             0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    this->fields.isNpcOnlyBattle = v144;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_164;
    v145 = QuestEntity__HasFlag_49492572(
             (QuestEntity_o *)myServantOrNpcRestrictionEntityList,
             0x800000000LL,
             this->fields.questPhase,
             0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    this->fields.isNpcEditablePos = v145;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_164;
    v146 = QuestEntity__HasFlag_49492572(
             (QuestEntity_o *)myServantOrNpcRestrictionEntityList,
             0x80000000000000LL,
             this->fields.questPhase,
             0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    this->fields.isNotTransitionSupportList = v146;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_164;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_49492572(
                                            (QuestEntity_o *)myServantOrNpcRestrictionEntityList,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0);
  }
  if ( v168 )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetCorrectionIconId(
                                                                                         v168,
                                                                                         0);
    v147 = v168;
    this->fields.correctionIconId = (int)myServantOrNpcRestrictionEntityList;
    if ( !v147 )
      goto LABEL_164;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v147,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      &this->fields.overwriteLimitCountRangeTypes,
      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v168;
    if ( !v168 )
      goto LABEL_164;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSupportInitDeckIndex(
                                                                                         v168,
                                                                                         0);
    v148 = v168;
    this->fields.supportInitIndex = (int)myServantOrNpcRestrictionEntityList;
    if ( !v148 )
      goto LABEL_164;
    this->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v148, 0);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteLimitCountSvtIds,
      0,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    this->fields.overwriteLimitCounts = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteLimitCounts,
      0,
      v149,
      v150,
      v151,
      v152,
      v153,
      v154);
    this->fields.overwriteLimitCountIconIds = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteLimitCountIconIds,
      0,
      v155,
      v156,
      v157,
      v158,
      v159,
      v160);
    this->fields.overwriteLimitCountRangeTypes = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteLimitCountRangeTypes,
      0,
      v161,
      v162,
      v163,
      v164,
      v165,
      v166);
  }
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__TryConvertOverwriteImageLimitCount(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCountStage,
        int32_t *afterLimitCountStage,
        const MethodInfo *method)
{
  int32_t v6; // w20
  System_Int32_array *v7; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  int32_t *m_Items; // x9
  int v11; // w10
  int v12; // t1

  v6 = limitCountStage;
  v7 = QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(this, svtId, *(const MethodInfo **)&limitCountStage);
  if ( !v7 )
    sub_2213CDC(0, v8);
  max_length = v7->max_length;
  if ( max_length )
  {
    if ( (int)max_length < 1 )
    {
LABEL_7:
      if ( !(_DWORD)max_length )
        sub_2213CE4(v7);
      v6 = v7->m_Items[0];
    }
    else
    {
      m_Items = v7->m_Items;
      v11 = v7->max_length;
      while ( 1 )
      {
        v12 = *m_Items++;
        if ( v12 == v6 )
          break;
        if ( !--v11 )
          goto LABEL_7;
      }
    }
  }
  *afterLimitCountStage = v6;
  return max_length != 0;
}


bool QuestRestrictionInfo__TryGetFixedMasterEquipInfo(
        QuestRestrictionInfo_o *this,
        int32_t *genderImageId,
        const MethodInfo *method)
{
  DataManager_c *v5; // x0
  int v6; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  int klass_high; // w8
  Il2CppClass *klass; // x20
  void *monitor; // x21
  int32_t v14; // w0
  __int64 v15; // x0
  System_ArgumentOutOfRangeException_o *v16; // x19
  __int64 v17; // x0
  int32_t outFixedEquipLv; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *v19; // [xsp+10h] [xbp-40h] BYREF
  int32_t outFixedEquipId; // [xsp+1Ch] [xbp-34h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_5971C64 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EquipMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971C64 = 1;
  }
  v5 = DataManager_TypeInfo;
  entity = 0;
  *genderImageId = 0;
  outFixedEquipId = 0;
  v6 = *(&v5->_2.cctor_finished + 1);
  v19 = 0;
  outFixedEquipLv = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, genderImageId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_28;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             Master_object,
             &v19,
             outFixedEquipId,
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0);
        if ( Master_object )
        {
          klass_high = HIDWORD(Master_object[1].klass);
          switch ( klass_high )
          {
            case 3:
              v14 = 0;
              outFixedEquipLv = 0;
LABEL_27:
              *genderImageId = v14;
              return 1;
            case 2:
              if ( v19 )
              {
                klass = v19[5].klass;
                monitor = v19[5].monitor;
                goto LABEL_23;
              }
              break;
            case 1:
              if ( v19 )
              {
                klass = v19[4].klass;
                monitor = v19[4].monitor;
LABEL_23:
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
                *(_QWORD *)&v22.fields.currentCryptoKey = klass;
                *(_QWORD *)&v22.fields.fakeValue = monitor;
                v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
                outFixedEquipLv = v14;
                goto LABEL_27;
              }
              break;
            default:
              v15 = sub_2213A74(&System_ArgumentOutOfRangeException_TypeInfo);
              v16 = (System_ArgumentOutOfRangeException_o *)sub_2213CCC(v15);
              System_ArgumentOutOfRangeException___ctor(v16, 0);
              v17 = sub_2213A74(&Method_QuestRestrictionInfo_TryGetFixedMasterEquipInfo__);
              sub_2213BA0(v16, v17);
          }
        }
LABEL_28:
        sub_2213CDC(Master_object, v8);
      }
    }
  }
  return 0;
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


int32_t QuestRestrictionInfo__get_ActiveGrandBoardCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_RestrictionEntity__o *activeGrandBoardRestrictionEntityList; // x19
  QuestRestrictionInfo___c_c *v6; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__221_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRestrictionInfo___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_5971C61 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
    sub_2213A60(&System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__get_ActiveGrandBoardCount_b__221_0__);
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    byte_5971C61 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.activeGrandBoardRestrictionEntityList,
         0) )
  {
    return 0;
  }
  activeGrandBoardRestrictionEntityList = this->fields.activeGrandBoardRestrictionEntityList;
  v6 = QuestRestrictionInfo___c_TypeInfo;
  if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v3);
    v6 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__221_0 = (System_Func_object__object__o *)static_fields->__9__221_0;
  if ( !_9__221_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v3);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__221_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__221_0,
      v9,
      Method_QuestRestrictionInfo___c__get_ActiveGrandBoardCount_b__221_0__,
      0);
    v10 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v10->__9__221_0 = (struct System_Func_RestrictionEntity__IEnumerable_int___o *)_9__221_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__221_0, (int32_t)_9__221_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)activeGrandBoardRestrictionEntityList,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__221_0,
                                                               (const MethodInfo_3893C3C *)Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
  v18 = System_Linq_Enumerable__Distinct_int_(
          v17,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__Count_int_(v18, (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t QuestRestrictionInfo__get_GrandServantRestrictionPosCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_RestrictionEntity__o *grandServantRestrictionEntityList; // x19
  QuestRestrictionInfo___c_c *v6; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__217_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRestrictionInfo___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_5971C5E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
    sub_2213A60(&System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__get_GrandServantRestrictionPosCount_b__217_0__);
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    byte_5971C5E = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandServantRestrictionEntityList, 0) )
    return 0;
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  v6 = QuestRestrictionInfo___c_TypeInfo;
  if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v3);
    v6 = QuestRestrictionInfo___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__217_0 = (System_Func_object__object__o *)static_fields->__9__217_0;
  if ( !_9__217_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v3);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__217_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__217_0,
      v9,
      Method_QuestRestrictionInfo___c__get_GrandServantRestrictionPosCount_b__217_0__,
      0);
    v10 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v10->__9__217_0 = (struct System_Func_RestrictionEntity__IEnumerable_int___o *)_9__217_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__217_0, (int32_t)_9__217_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__217_0,
                                                               (const MethodInfo_3893C3C *)Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
  v18 = System_Linq_Enumerable__Distinct_int_(
          v17,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__Count_int_(v18, (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
}


void QuestRestrictionInfo_DeckSvtInfo___ctor(
        QuestRestrictionInfo_DeckSvtInfo_o *this,
        UserServantEntity_o *userServantEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5971D50 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D50 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !userServantEntity )
    sub_2213CDC(v7, v8);
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_servantEntity, (int32_t)ServantEntity, v13, v14, v15, v16, v17, v18);
  *((_DWORD *)p_servantEntity + 2) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                       userServantEntity->fields.limitCount,
                                       0);
  *((_DWORD *)p_servantEntity + 3) = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                       userServantEntity,
                                       -1,
                                       questRestrictionInfo,
                                       0);
}


void QuestRestrictionInfo_DeckSvtInfo___ctor_50561768(
        QuestRestrictionInfo_DeckSvtInfo_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  const MethodInfo *v9; // x2
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  int32_t DispLimitCountStageSealAfter; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_5971D51 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D51 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !servantLeaderInfo )
    sub_2213CDC(v5, v6);
  v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v20.fields.currentCryptoKey = v7;
  *(_QWORD *)&v20.fields.fakeValue = v8;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  ServantEntity = ServantLeaderInfo__GetServantEntity(servantLeaderInfo, -1, v9);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_servantEntity, (int32_t)ServantEntity, v12, v13, v14, v15, v16, v17);
  *((_DWORD *)p_servantEntity + 2) = servantLeaderInfo->fields.limitCount;
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(servantLeaderInfo, -1, v18);
  *((_DWORD *)p_servantEntity + 3) = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                       DispLimitCountStageSealAfter,
                                       0);
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo_DeckSvtInfo__IsIndividuality(
        QuestRestrictionInfo_DeckSvtInfo_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_2213CDC(0, *(_QWORD *)&individuality);
  return ServantEntity__IsIndividuality(
           servantEntity,
           this->fields.limitCount,
           this->fields.dispLimitCount,
           individuality,
           0);
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
  System_Collections_Generic_List_int____c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_T__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  struct System_String_o **p_summary; // x19
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5971D4F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_int____TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971D4F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = System_Collections_Generic_List_int____TypeInfo;
  this->fields.slotType = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.individualityList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v11,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rangeTypeList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_summary, v18, v20, v21, v22, v23, v24, v25);
  *((_WORD *)p_summary + 4) = 1;
}


void QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971D52 & 1) == 0 )
  {
    sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    byte_5971D52 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestRestrictionInfo___c_TypeInfo->static_fields,
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


bool QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0);
}


bool QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__109_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int type; // w8
  bool v4; // cf
  unsigned int v5; // w8
  char v6; // w9

  if ( !e )
    sub_2213CDC(this, 0);
  type = e->fields.type;
  v4 = type >= 0x12;
  v5 = 0x22016u >> type;
  v6 = !v4;
  return v6 & v5;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__99_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.type == 1 && e->fields.targetVals != 0;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__99_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return RestrictionEntity__IsRestrictionTarget(e, 3, 0) && RestrictionEntity__IsRestrictionTarget(e, 2, 0);
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__99_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  System_Int32_array *targetVals; // x19
  QuestRestrictionInfo___c_c *v5; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__99_4; // x20
  Il2CppObject *v8; // x21
  struct QuestRestrictionInfo___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5971D54 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_4__);
    this = (QuestRestrictionInfo___c_o *)sub_2213A60(&QuestRestrictionInfo___c_TypeInfo);
    byte_5971D54 = 1;
  }
  if ( !e )
    sub_2213CDC(this, e);
  if ( e->fields.rangeType == 1 )
  {
    targetVals = e->fields.targetVals;
    v5 = QuestRestrictionInfo___c_TypeInfo;
    if ( !*(&QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, e);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__99_4 = static_fields->__9__99_4;
    if ( !_9__99_4 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, e);
        static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__99_4 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__99_4, v8, Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_4__, 0);
      v9 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v9->__9__99_4 = _9__99_4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__99_4, (int32_t)_9__99_4, v10, v11, v12, v13, v14, v15);
    }
    return !BasicHelper__Any_int__58784608(
              targetVals,
              (System_Func_T__bool__o *)_9__99_4,
              (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
  }
  else
  {
    return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo___c___IsClassRestriction_b__99_4(
        QuestRestrictionInfo___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_5971D55 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5971D55 = 1;
  }
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, *(_QWORD *)&i);
  return !Individuality__IsServantClassIndividuality(i, 0);
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__97_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_5971D53 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_2213A60(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_5971D53 = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0 )
    sub_2213CDC(this, s);
  return individualityList->fields._size > 0;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__96_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__96_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__84_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__84_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.type == 3;
}


bool QuestRestrictionInfo___c___Setup_b__84_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.type == 2;
}


bool QuestRestrictionInfo___c___Setup_b__84_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.type == 2;
}


System_Collections_Generic_IEnumerable_int__o *QuestRestrictionInfo___c___get_ActiveGrandBoardCount_b__221_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)entity->fields.targetVals;
}


System_Collections_Generic_IEnumerable_int__o *QuestRestrictionInfo___c___get_GrandServantRestrictionPosCount_b__217_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( (byte_5971D56 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_2213A60(&int___TypeInfo);
    byte_5971D56 = 1;
  }
  if ( !entity )
    goto LABEL_9;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0) )
    return (System_Collections_Generic_IEnumerable_int__o *)entity->fields.targetVals2;
  this = (QuestRestrictionInfo___c_o *)sub_2213B20(int___TypeInfo, 1);
  if ( !this )
LABEL_9:
    sub_2213CDC(this, entity);
  if ( !LODWORD(this[1].monitor) )
    sub_2213CE4(this);
  LODWORD(this[2].klass) = 1;
  return (System_Collections_Generic_IEnumerable_int__o *)this;
}


void QuestRestrictionInfo___c__DisplayClass100_0___ctor(
        QuestRestrictionInfo___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass100_0___IsMySvtOrSupportSlotClassRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass100_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.type == 24 && RestrictionEntity__GetSpecifiedPosition(entity, 0) == this->fields.initPos;
}


void QuestRestrictionInfo___c__DisplayClass184_0___ctor(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass184_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass185_0___ctor(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass185_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass186_0___ctor(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass186_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass187_0___ctor(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass187_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass189_0___ctor(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass189_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_2213CDC(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass192_0___ctor(
        QuestRestrictionInfo___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass192_0___GetMyServantOrNpcSvtIdList_b__0(
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
  if ( (unsigned int)index >= LODWORD(questRestrictionEntityList->max_length) )
    sub_2213CE4(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_2213CDC(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass193_0___ctor(
        QuestRestrictionInfo___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass193_0___GetMyServantOrSupportTargetPos_b__0(
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
    sub_2213CE4(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_2213CDC(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass206_0___ctor(
        QuestRestrictionInfo___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass206_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass206_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.index;
}


void QuestRestrictionInfo___c__DisplayClass213_0___ctor(
        QuestRestrictionInfo___c__DisplayClass213_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass213_0___GetGrandServantRestrictionEntity_b__0(
        QuestRestrictionInfo___c__DisplayClass213_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass213_0_o *v4; // x19
  System_Func_int__bool__o *_9__1; // x22
  System_Int32_array *targetVals2; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_5971D57 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    this = (QuestRestrictionInfo___c__DisplayClass213_0_o *)sub_2213A60(&Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__1__);
    byte_5971D57 = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0)
    && v4->fields.initPos == 1 )
  {
    return 1;
  }
  _9__1 = v4->fields.__9__1;
  targetVals2 = entity->fields.targetVals2;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_int__58784608(
           targetVals2,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


bool QuestRestrictionInfo___c__DisplayClass213_0___GetGrandServantRestrictionEntity_b__1(
        QuestRestrictionInfo___c__DisplayClass213_0_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  return this->fields.initPos == pos;
}


void QuestRestrictionInfo___c__DisplayClass219_0___ctor(
        QuestRestrictionInfo___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass219_0___IsActiveGrandBoardRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass219_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass219_0_o *v4; // x20

  v4 = this;
  if ( (byte_5971D58 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c__DisplayClass219_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5971D58 = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals,
           v4->fields.initPos,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass230_0___ctor(
        QuestRestrictionInfo___c__DisplayClass230_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass230_0___GetRestrictionErrorDialogConditionName_b__0(
        QuestRestrictionInfo___c__DisplayClass230_0_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct RestrictionEntity_o *restrictionEntity; // x8

  if ( !x || (restrictionEntity = this->fields.restrictionEntity) == 0 )
    sub_2213CDC(this, x);
  return x->fields.restrictionId == restrictionEntity->fields.id;
}


void QuestRestrictionInfo___c__DisplayClass231_0___ctor(
        QuestRestrictionInfo___c__DisplayClass231_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass231_0___GetRestrictionSlotConditionName_b__0(
        QuestRestrictionInfo___c__DisplayClass231_0_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct RestrictionEntity_o *restrictionEntity; // x8

  if ( !x || (restrictionEntity = this->fields.restrictionEntity) == 0 )
    sub_2213CDC(this, x);
  return x->fields.restrictionId == restrictionEntity->fields.id;
}


void QuestRestrictionInfo___c__DisplayClass232_0___ctor(
        QuestRestrictionInfo___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass232_0___GetRestrictionInfoConditionName_b__0(
        QuestRestrictionInfo___c__DisplayClass232_0_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct RestrictionEntity_o *restrictionEntity; // x8

  if ( !x || (restrictionEntity = this->fields.restrictionEntity) == 0 )
    sub_2213CDC(this, x);
  return x->fields.restrictionId == restrictionEntity->fields.id;
}


void QuestRestrictionInfo___c__DisplayClass233_0___ctor(
        QuestRestrictionInfo___c__DisplayClass233_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass233_0___IsGrandSelectableSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass233_0_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  if ( !followerInfo )
    sub_2213CDC(this, 0);
  return followerInfo->fields.npcInitIdx == this->fields.initPos;
}


void QuestRestrictionInfo___c__DisplayClass99_0___ctor(
        QuestRestrictionInfo___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass99_0___IsClassRestriction_b__3(
        QuestRestrictionInfo___c__DisplayClass99_0_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return RestrictionEntity__IsRestriction(e, this->fields.individuality, 0);
}