void __fastcall QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BC2D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438BC2D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void __fastcall QuestEntity___ctor_26426192(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *name; // x1
  struct System_String_o *nameRuby; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_String_array *beforeActionVals; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_String_array *afterActionVals; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_String_o *chapterSubStr; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_String_o *recommendLv; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_438BC2E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438BC2E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B7769C(v5, v6);
  this->fields.id = cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.nameRuby,
    (System_Int32_array **)nameRuby,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.type = cSrc->fields.type;
  this->fields.actConsume = cSrc->fields.actConsume;
  this->fields.spotId = cSrc->fields.spotId;
  this->fields.giftId = cSrc->fields.giftId;
  this->fields.priority = cSrc->fields.priority;
  this->fields.bannerType = cSrc->fields.bannerType;
  this->fields.bannerId = cSrc->fields.bannerId;
  this->fields.iconId = cSrc->fields.iconId;
  this->fields.charaIconId = cSrc->fields.charaIconId;
  this->fields.giftIconId = cSrc->fields.giftIconId;
  this->fields.forceOperation = cSrc->fields.forceOperation;
  this->fields.afterClear = cSrc->fields.afterClear;
  beforeActionVals = cSrc->fields.beforeActionVals;
  this->fields.beforeActionVals = beforeActionVals;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.beforeActionVals,
    (System_Int32_array **)beforeActionVals,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  afterActionVals = cSrc->fields.afterActionVals;
  this->fields.afterActionVals = afterActionVals;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.afterActionVals,
    (System_Int32_array **)afterActionVals,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.displayHours = cSrc->fields.displayHours;
  this->fields.intervalHours = cSrc->fields.intervalHours;
  this->fields.chapterId = cSrc->fields.chapterId;
  this->fields.chapterSubId = cSrc->fields.chapterSubId;
  chapterSubStr = cSrc->fields.chapterSubStr;
  this->fields.chapterSubStr = chapterSubStr;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.chapterSubStr,
    (System_Int32_array **)chapterSubStr,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  recommendLv = cSrc->fields.recommendLv;
  this->fields.recommendLv = recommendLv;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.recommendLv,
    (System_Int32_array **)recommendLv,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.hasStartAction = cSrc->fields.hasStartAction;
  this->fields.flag = cSrc->fields.flag;
  this->fields.noticeAt = cSrc->fields.noticeAt;
  this->fields.openedAt = cSrc->fields.openedAt;
  this->fields.closedAt = cSrc->fields.closedAt;
  this->fields.consumeType = cSrc->fields.consumeType;
  this->fields.scriptQuestId = cSrc->fields.scriptQuestId;
  this->fields.mIsPhaseDetailed = cSrc->fields.mIsPhaseDetailed;
  this->fields.mIsQuestSpotRelease = cSrc->fields.mIsQuestSpotRelease;
}


int32_t __fastcall QuestEntity__CreatePrimaryKey(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall QuestEntity__GetBgmName(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v6; // x1
  MapMaster_o *SpotId; // x0
  __int64 v8; // x1
  WarEntity_o *v9; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  const MethodInfo *v11; // x1
  int32_t age; // w20
  bool v13; // w8
  System_String_o *result; // x0
  WarEntity_o *v15; // [xsp+8h] [xbp-38h] BYREF
  MapEntity_o *v16; // [xsp+10h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_438BC41 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_MapMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SpotMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    byte_438BC41 = 1;
  }
  v16 = 0LL;
  entity = 0LL;
  v15 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v6);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  SpotId = (MapMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            Master_WarQuestSelectionMaster,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v9 = entity;
    if ( !entity )
      goto LABEL_26;
    goto LABEL_16;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v11);
  if ( !v10 )
LABEL_26:
    sub_B7769C(SpotId, v8);
  SpotId = (MapMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            v10,
                            &v15,
                            (int32_t)SpotId,
                            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v9 = v15;
    if ( !v15 )
      goto LABEL_26;
LABEL_16:
    age = (int32_t)v9->fields.age;
    goto LABEL_18;
  }
  age = 0;
LABEL_18:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SpotId = (MapMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_26;
  v13 = MapMaster__TryGetEntity(SpotId, &v16, age, warId, 0LL);
  result = 0LL;
  if ( v13 )
  {
    SpotId = (MapMaster_o *)v16;
    if ( !v16 )
      goto LABEL_26;
    return MapEntity__GetPrioredBgmName(v16, 0LL);
  }
  return result;
}


int32_t __fastcall QuestEntity__GetCampaignCostCalcValue(
        QuestEntity_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *fixedVal,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x25
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  EventCampaignMaster_o *v13; // x22
  WarEntity_o *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x24
  EventCampaignReleaseMaster_o *v16; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  int max_length; // w8
  unsigned int v19; // w28
  bool v20; // w19
  EventEntity_o *v21; // x8
  int32_t id; // w27
  int32_t v23; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x21
  int klass; // w8
  int32_t v26; // w21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x8
  int klass_high; // w9
  int name_high; // w10
  __int64 v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_438BC43 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC43 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v11 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v13 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v11,
                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v11,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_39;
  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                   MasterData_WarQuestSelectionMaster,
                                   questId,
                                   phase,
                                   Instance,
                                   7,
                                   0LL);
  v16 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          v11,
                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_39;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    v20 = !isQuestNoneCleared;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        v33 = sub_B776C8(Instance);
        sub_B77668(v33, 0LL);
      }
      v21 = EnabledEventCampaignForQuest->m_Items[v19];
      if ( !v21 || !v13 )
        break;
      id = v21->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData(v13, id, 0LL);
      if ( Instance )
      {
        v23 = *(_DWORD *)(Instance + 20);
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v23, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v16 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(v16, id, v24->fields.missionConditionDetailId, 0LL);
          if ( (v23 != 25 || !v20) && (Instance & 1) != 0 && (v23 == 25 || v23 == 12) )
          {
            if ( !v17 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              v24,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_25;
    }
LABEL_39:
    sub_B7769C(Instance, v10);
  }
LABEL_25:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v17,
                        0LL);
  if ( !v17 )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  klass = 0;
LABEL_27:
  v26 = klass;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B7769C(v27, v28);
    klass_high = HIDWORD(v35.fields.current[3].klass);
    if ( (klass_high & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_B7769C(v27, v28);
      name_high = HIDWORD(Entity[1].fields.name);
      if ( name_high == 1 || name_high == 4 )
      {
        if ( klass_high == 3 )
          *fixedVal = (int32_t)v35.fields.current[3].klass;
        klass = (int)current[3].klass;
        if ( v26 )
          klass = klass * v26 / 1000;
        goto LABEL_27;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v26;
}


System_String_o *__fastcall QuestEntity__GetChapterSubTitle(
        QuestEntity_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *ChapterSubStr; // x21
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ConstantMaster_o *v9; // x22
  int32_t id; // w23
  int32_t v11; // w23

  if ( (byte_438BC3A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_3082/*"CHAPTER_F_END_ID"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_3083/*"CHAPTER_F_START_ID"*/);
    byte_438BC3A = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantMaster___);
  v9 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_B7769C(Instance, v7);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3083/*"CHAPTER_F_START_ID"*/, 0LL) )
  {
    v11 = this->fields.id;
    if ( v11 <= ConstantMaster__GetValue(v9, (System_String_o *)StringLiteral_3082/*"CHAPTER_F_END_ID"*/, 0LL) )
LABEL_10:
      ChapterSubStr = QuestEntity__getChapterSubStr(this, warId, v8);
  }
  if ( System_String__IsNullOrWhiteSpace(ChapterSubStr, 0LL) )
    return this->fields.name;
  return ChapterSubStr;
}


int32_t __fastcall QuestEntity__GetChapterUnitId(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  WarEntity_o *v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BC39 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&WarEntity_TypeInfo);
    byte_438BC39 = 1;
  }
  v4 = (WarEntity_o *)sub_B77694(WarEntity_TypeInfo);
  WarEntity___ctor(v4, 0LL);
  entity = v4;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         warId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return WarEntity__GetQuestBoardSectionId(entity, 0LL);
LABEL_10:
    sub_B7769C(Instance, v6);
  }
  return 0;
}


int32_t __fastcall QuestEntity__GetConsumeType(QuestEntity_o *this, const MethodInfo *method)
{
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_consumeType = &this->fields.consumeType;
  else
    p_consumeType = &PhaseDetail->fields.consumeType;
  return *p_consumeType;
}


System_String_o *__fastcall QuestEntity__GetCostValueColor(
        int32_t costCalcVal,
        bool isOverCost,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_438BC44 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_10039/*"OVER_COST_COLOR"*/);
    sub_B775C4(&StringLiteral_3029/*"CAMPAIGN_COST_COLOR"*/);
    byte_438BC44 = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_24025/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_8;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"CAMPAIGN_COST_COLOR"*/, 0LL);
  if ( isOverCost )
  {
LABEL_8:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_10039/*"OVER_COST_COLOR"*/, 0LL);
  }
  return result;
}


int64_t __fastcall QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t RestTime; // x19

  if ( (byte_438BC3D & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438BC3D = 1;
  }
  RestTime = QuestEntity__GetRestTime(this, is_itvl, method);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getTime(0LL) + RestTime;
}


QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BC30 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC30 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserQuestMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int64_t)Instance,
          this->fields.id,
          0LL) )
  {
    v7 = 1;
    return QuestEntity__GetPhaseDetail_26427016(this, v7, v6);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B7769C(Instance, v4);
  v7 = UserQuestEntity__getQuestPhase(entity, 0LL) + 1;
  return QuestEntity__GetPhaseDetail_26427016(this, v7, v6);
}


QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail_26427016(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BC31 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC31 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  QuestPhaseDetailMaster__TryGetEntity((QuestPhaseDetailMaster_o *)Instance, &entity, this->fields.id, phaseCnt, 0LL);
  return entity;
}


QuestEntity_o *__fastcall QuestEntity__GetPhaseDetailedEntity(QuestEntity_o *this, const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  QuestPhaseDetailEntity_o *v4; // x20
  QuestEntity_o *v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t flag; // x8

  if ( (byte_438BC2F & 1) == 0 )
  {
    sub_B775C4(&QuestEntity_TypeInfo);
    byte_438BC2F = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v4 = PhaseDetail;
    v5 = (QuestEntity_o *)sub_B77694(QuestEntity_TypeInfo);
    QuestEntity___ctor_26426192(v5, this, v6);
    if ( !v5 )
      sub_B7769C(v7, v8);
    this = v5;
    v5->fields.spotId = v4->fields.spotId;
    v5->fields.consumeType = v4->fields.consumeType;
    v5->fields.actConsume = v4->fields.actConsume;
    flag = v4->fields.flag;
    v5->fields.mIsPhaseDetailed = 1;
    v5->fields.flag = flag;
  }
  return this;
}


int64_t __fastcall QuestEntity__GetRestTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t Time; // x20
  const MethodInfo *v6; // x1
  bool v7; // cc
  const MethodInfo *v8; // x1
  int64_t result; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int v13; // w22
  const MethodInfo *v14; // x1
  __int64 v15; // x21
  const MethodInfo *v16; // x1
  int64_t v17; // x8

  if ( (byte_438BC3E & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438BC3E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v7 = Time < QuestEntity__getOpenedAt(this, v6);
  result = 0LL;
  if ( !v7 )
  {
    if ( Time > QuestEntity__getClosedAt(this, v8) )
      return 0LL;
    if ( is_itvl )
    {
      if ( !QuestEntity__getDisplayHours(this, v10) || !QuestEntity__getIntervalHours(this, v11) )
        return 0LL;
      v13 = 3600 * QuestEntity__getDisplayHours(this, v12);
      v15 = 3600 * QuestEntity__getIntervalHours(this, v14) + (__int64)v13;
      v17 = (Time - QuestEntity__getOpenedAt(this, v16)) % v15;
      if ( v17 <= v13 )
        return v13 - v17;
      else
        return 0LL;
    }
    else
    {
      return QuestEntity__getClosedAt(this, v10) - Time;
    }
  }
  return result;
}


int32_t __fastcall QuestEntity__GetTypeFlag(QuestEntity_o *this, const MethodInfo *method)
{
  return 1 << this->fields.type;
}


int32_t __fastcall QuestEntity__GetWarId(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *v5; // x19
  int age; // [xsp+Ch] [xbp-24h] BYREF
  WarQuestSelectionEntity_o *v8; // [xsp+10h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_438BC40 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B775C4(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC40 = 1;
  }
  v8 = 0LL;
  entity = 0LL;
  age = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.spotId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !entity )
      goto LABEL_14;
    v5 = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Instance;
    age = (int)entity->fields.age;
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&age, 0LL);
    if ( !v5 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                  v5,
                                  &v8,
                                  (System_String_o *)Instance,
                                  (const MethodInfo_21FBD3C *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v8 )
        return v8->fields.questId;
LABEL_14:
      sub_B7769C(Instance, v4);
    }
  }
  return 0;
}


bool __fastcall QuestEntity__HasFlag(QuestEntity_o *this, int64_t flag, const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( this->fields.mIsPhaseDetailed )
    return (this->fields.flag & flag) != 0;
  PhaseDetail = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)flag);
  if ( !PhaseDetail )
    return (this->fields.flag & flag) != 0;
  else
    return QuestPhaseDetailEntity__HasFlag(PhaseDetail, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestEntity__HasFlag_26430760(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_26427016; // x0

  if ( this->fields.mIsPhaseDetailed )
    return (this->fields.flag & flag) != 0;
  PhaseDetail_26427016 = QuestEntity__GetPhaseDetail_26427016(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( !PhaseDetail_26427016 )
    return (this->fields.flag & flag) != 0;
  else
    return QuestPhaseDetailEntity__HasFlag(PhaseDetail_26427016, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestEntity__HasQuestPhaseDetailFlag(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_26427016; // x0

  PhaseDetail_26427016 = QuestEntity__GetPhaseDetail_26427016(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( PhaseDetail_26427016 )
    LOBYTE(PhaseDetail_26427016) = QuestPhaseDetailEntity__HasFlag(PhaseDetail_26427016, flag, 0LL);
  return (char)PhaseDetail_26427016;
}


bool __fastcall QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_438BC45 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarQuestSelectionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438BC45 = 1;
  }
  if ( !QuestEntity__HasFlag(this, 0x800000000000000LL, v2) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v5);
  return WarQuestSelectionMaster__IsActiveRegisteredQuest(Master_WarQuestSelectionMaster, this->fields.id, 0LL);
}


bool __fastcall QuestEntity__IsNeedUseEventQuestSupport(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t GroupId; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438BC42 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC42 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v5);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_14:
    sub_B7769C(Instance, v4);
  return EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall QuestEntity__IsOpenByTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  return QuestEntity__GetRestTime(this, is_itvl, method) > 0;
}


bool __fastcall QuestEntity__IsPhaseDetailed(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.mIsPhaseDetailed;
}


bool __fastcall QuestEntity__IsRepeatReward(QuestEntity_o *this, const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BC46 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438BC46 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, this->fields.id, 1, 0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_12:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  return QuestPhaseEntity__IsRepeatReward(entity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestEntity__getActConsume(QuestEntity_o *this, int32_t cost_calc_val, const MethodInfo *method)
{
  int32_t actConsume; // w20
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  actConsume = this->fields.actConsume;
  if ( !this->fields.mIsPhaseDetailed )
  {
    PhaseDetail = QuestEntity__GetPhaseDetail(this, *(const MethodInfo **)&cost_calc_val);
    if ( PhaseDetail )
      actConsume = PhaseDetail->fields.actConsume;
  }
  if ( cost_calc_val < 1 || !actConsume )
    return actConsume;
  if ( actConsume * cost_calc_val < 1000 )
    return 1;
  return actConsume * cost_calc_val / 1000;
}


int32_t __fastcall QuestEntity__getAfterClear(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.afterClear;
}


int32_t __fastcall QuestEntity__getChapterId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.chapterId;
}


System_String_o *__fastcall QuestEntity__getChapterSubStr(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  _BOOL8 HasQuestPhaseDetailFlag; // x0
  const MethodInfo *v7; // x2
  int32_t ChapterUnitId; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  WarEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  int32_t chapterSubId; // w8
  System_String_o *v19; // x19
  Il2CppObject *v20; // x1
  System_String_o *v21; // x0
  Il2CppObject *v22; // x0
  System_String_o *v23; // x20
  System_String_o *v24; // x20
  System_String_o *v25; // x0
  int32_t v26; // w8
  System_String_o *v27; // x19
  Il2CppObject *v28; // x1
  System_String_o *v29; // x0
  System_String_o *v30; // x20
  int32_t v31; // [xsp+8h] [xbp-18h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438BC38 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8824/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/);
    sub_B775C4(&StringLiteral_8823/*"MATERIAL_MAP_CHAPTER_SUB"*/);
    byte_438BC38 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.chapterSubStr, 0LL) )
    return this->fields.chapterSubStr;
  HasQuestPhaseDetailFlag = QuestEntity__HasQuestPhaseDetailFlag(this, 0x2000000000000000LL, 1, v5);
  if ( HasQuestPhaseDetailFlag )
    return this->fields.chapterSubStr;
  ChapterUnitId = QuestEntity__GetChapterUnitId((QuestEntity_o *)HasQuestPhaseDetailFlag, warId, v7);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v11);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             warId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( QuestEntity__HasFlag(this, 0x40000LL, v13)
    || Entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal(Entity, 0LL) )
  {
    if ( ChapterUnitId )
    {
      v32 = ChapterUnitId;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v14);
      v16 = System_String__Format((System_String_o *)StringLiteral_8824/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v15, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get(v16, 0LL);
      chapterSubId = this->fields.chapterSubId;
      v19 = v17;
      v20 = (Il2CppObject *)LocalizationManager__ChineseNumber(chapterSubId, 0LL);
      v21 = v19;
      return System_String__Format(v21, v20, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8823/*"MATERIAL_MAP_CHAPTER_SUB"*/, 0LL);
    v26 = this->fields.chapterSubId;
    v27 = v25;
    v28 = (Il2CppObject *)LocalizationManager__ChineseNumber(v26, 0LL);
    v29 = v27;
  }
  else
  {
    if ( ChapterUnitId )
    {
      v31 = ChapterUnitId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v14);
      v23 = System_String__Format((System_String_o *)StringLiteral_8824/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v22, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = LocalizationManager__Get(v23, 0LL);
      v20 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
      v21 = v24;
      return System_String__Format(v21, v20, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8823/*"MATERIAL_MAP_CHAPTER_SUB"*/, 0LL);
    v28 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
    v29 = v30;
  }
  return System_String__Format(v29, v28, 0LL);
}


int32_t __fastcall QuestEntity__getCharaIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId;
}


int64_t __fastcall QuestEntity__getClosedAt(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_438BC3C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC3C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  return *p_closedAt;
}


int32_t __fastcall QuestEntity__getDisplayHours(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_displayHours; // x8

  if ( (byte_438BC36 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC36 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_displayHours = &this->fields.displayHours;
  if ( ReplaceDataByQuestId )
    p_displayHours = &ReplaceDataByQuestId->fields.displayHours;
  return *p_displayHours;
}


int32_t __fastcall QuestEntity__getForceOperation(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.forceOperation;
}


int32_t __fastcall QuestEntity__getGiftIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftIconId;
}


int32_t __fastcall QuestEntity__getIntervalHours(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_438BC37 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC37 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_intervalHours = &this->fields.intervalHours;
  if ( ReplaceDataByQuestId )
    p_intervalHours = &ReplaceDataByQuestId->fields.intervalHours;
  return *p_intervalHours;
}


QuestConsumeItemEntity_o *__fastcall QuestEntity__getItemConsumeEntity(QuestEntity_o *this, const MethodInfo *method)
{
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  int32_t *v5; // x8
  QuestPhaseDetailEntity_o *v6; // x0
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_438BC3F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC3F = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_consumeType = &this->fields.consumeType;
  else
    p_consumeType = &PhaseDetail->fields.consumeType;
  if ( *p_consumeType != 3 )
  {
    if ( this->fields.mIsPhaseDetailed || (v6 = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
      v5 = &this->fields.consumeType;
    else
      v5 = &v6->fields.consumeType;
    if ( *v5 != 4 )
      return 0LL;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v8);
  }
  return (QuestConsumeItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.id,
                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
}


int32_t __fastcall QuestEntity__getLimitCount(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId % 10;
}


int64_t __fastcall QuestEntity__getNoticeAt(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.noticeAt;
}


int64_t __fastcall QuestEntity__getOpenedAt(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_438BC3B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC3B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  return *p_openedAt;
}


int32_t __fastcall QuestEntity__getPriority(QuestEntity_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_438BC35 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_438BC35 = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  if ( clsQuestCheck__IsQuestClear(v3, this->fields.id, 0, 0LL) )
    return this->fields.priority - 100000000;
  else
    return this->fields.priority;
}


int32_t __fastcall QuestEntity__getQuestId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall QuestEntity__getQuestName(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  System_String_o **p_name; // x8

  if ( (byte_438BC32 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC32 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_name = &this->fields.name;
  if ( ReplaceDataByQuestId )
    p_name = &ReplaceDataByQuestId->fields.name;
  return *p_name;
}


System_String_o *__fastcall QuestEntity__getQuestNameRuby(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.nameRuby;
}


int32_t __fastcall QuestEntity__getQuestType(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *__fastcall QuestEntity__getRecommendLv(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.recommendLv;
}


System_String_o *__fastcall QuestEntity__getRecommendLv_26429940(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_26427016; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_26427016 = QuestEntity__GetPhaseDetail_26427016(this, phaseCnt, method);
  if ( !PhaseDetail_26427016
    || (p_recommendLv = &PhaseDetail_26427016->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_26427016->fields.recommendLv, 0LL)) )
  {
    p_recommendLv = &this->fields.recommendLv;
  }
  return *p_recommendLv;
}


int32_t __fastcall QuestEntity__getServantId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId / 10;
}


int32_t __fastcall QuestEntity__getSpotId(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t result; // w0
  const MethodInfo *v6; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_438BC33 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC33 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( !result )
  {
    if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v6)) == 0LL )
      p_spotId = &this->fields.spotId;
    else
      p_spotId = &PhaseDetail->fields.spotId;
    return *p_spotId;
  }
  return result;
}


int32_t __fastcall QuestEntity__getSpotId_26427692(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t result; // w0
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BC34 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BC34 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)QuestPhaseDetailMaster__TryGetEntity(
                                (QuestPhaseDetailMaster_o *)Instance,
                                &entity,
                                this->fields.id,
                                phase,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    p_spotId = &this->fields.spotId;
    return *p_spotId;
  }
  if ( !entity )
LABEL_14:
    sub_B7769C(Instance, v6);
  p_spotId = &entity->fields.spotId;
  return *p_spotId;
}


int32_t __fastcall QuestEntity__get_EventId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


void __fastcall QuestEntity__set_EventId(QuestEntity_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}