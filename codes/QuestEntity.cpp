void __fastcall QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4213C82 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4213C82 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void __fastcall QuestEntity___ctor_23239732(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_o *name; // x1
  struct System_String_o *nameRuby; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_String_array *beforeActionVals; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_String_array *afterActionVals; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_String_o *chapterSubStr; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct System_String_o *recommendLv; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_4213C83 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4213C83 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B0D97C(v5);
  this->fields.id = cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v6, v7, v8, v9, v10, v11);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.nameRuby,
    (System_Int32_array **)nameRuby,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.beforeActionVals,
    (System_Int32_array **)beforeActionVals,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  afterActionVals = cSrc->fields.afterActionVals;
  this->fields.afterActionVals = afterActionVals;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.afterActionVals,
    (System_Int32_array **)afterActionVals,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.displayHours = cSrc->fields.displayHours;
  this->fields.intervalHours = cSrc->fields.intervalHours;
  this->fields.chapterId = cSrc->fields.chapterId;
  this->fields.chapterSubId = cSrc->fields.chapterSubId;
  chapterSubStr = cSrc->fields.chapterSubStr;
  this->fields.chapterSubStr = chapterSubStr;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.chapterSubStr,
    (System_Int32_array **)chapterSubStr,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  recommendLv = cSrc->fields.recommendLv;
  this->fields.recommendLv = recommendLv;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.recommendLv,
    (System_Int32_array **)recommendLv,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestEntity__GetBgmName(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v11; // x1
  MapMaster_o *SpotId; // x0
  WarEntity_o *v13; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  const MethodInfo *v15; // x1
  int32_t age; // w20
  bool v17; // w8
  System_String_o *result; // x0
  WarEntity_o *v19; // [xsp+8h] [xbp-38h] BYREF
  MapEntity_o *v20; // [xsp+10h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4213C96 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_DataManager_GetMaster_MapMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_SpotMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v9);
    byte_4213C96 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  v19 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v11);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  SpotId = (MapMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            Master_WarQuestSelectionMaster,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_2669C30 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v13 = entity;
    if ( !entity )
      goto LABEL_26;
    goto LABEL_16;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v15);
  if ( !v14 )
LABEL_26:
    sub_B0D97C(SpotId);
  SpotId = (MapMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            v14,
                            &v19,
                            (int32_t)SpotId,
                            (const MethodInfo_2669C30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v13 = v19;
    if ( !v19 )
      goto LABEL_26;
LABEL_16:
    age = (int32_t)v13->fields.age;
    goto LABEL_18;
  }
  age = 0;
LABEL_18:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SpotId = (MapMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_26;
  v17 = MapMaster__TryGetEntity(SpotId, &v20, age, warId, 0LL);
  result = 0LL;
  if ( v17 )
  {
    SpotId = (MapMaster_o *)v20;
    if ( !v20 )
      goto LABEL_26;
    return MapEntity__GetPrioredBgmName(v20, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestEntity__GetCampaignCostCalcValue(
        QuestEntity_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *fixedVal,
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
  int64_t Instance; // x0
  DataManager_o *v23; // x25
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  EventCampaignMaster_o *v25; // x22
  WarEntity_o *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x24
  EventCampaignReleaseMaster_o *v28; // x25
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  int max_length; // w8
  unsigned int v33; // w28
  bool v34; // w19
  EventEntity_o *v35; // x8
  int32_t id; // w27
  int32_t v37; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x21
  int klass; // w8
  int32_t v40; // w21
  _BOOL8 v41; // x0
  Il2CppObject *current; // x8
  int klass_high; // w9
  int name_high; // w10
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4213C98 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19);
    sub_B0D8A4(&NetworkManager_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4213C98 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v23 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v25 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v23,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v23,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
  v28 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          v23,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_39;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    v34 = !isQuestNoneCleared;
    while ( 1 )
    {
      if ( v33 >= max_length )
      {
        v46 = sub_B0D9A8(Instance);
        sub_B0D948(v46, 0LL);
      }
      v35 = EnabledEventCampaignForQuest->m_Items[v33];
      if ( !v35 || !v25 )
        break;
      id = v35->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData(v25, id, 0LL);
      if ( Instance )
      {
        v37 = *(_DWORD *)(Instance + 20);
        v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v37, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v28 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(v28, id, v38->fields.missionConditionDetailId, 0LL);
          if ( (v37 != 25 || !v34) && (Instance & 1) != 0 && (v37 == 25 || v37 == 12) )
          {
            if ( !v31 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              v38,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_25;
    }
LABEL_39:
    sub_B0D97C(Instance);
  }
LABEL_25:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v31,
                        0LL);
  if ( !v31 )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  klass = 0;
LABEL_27:
  v40 = klass;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v41 )
      break;
    current = v48.fields.current;
    if ( !v48.fields.current )
      sub_B0D97C(v41);
    klass_high = HIDWORD(v48.fields.current[3].klass);
    if ( (klass_high & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_B0D97C(v41);
      name_high = HIDWORD(Entity[1].fields.name);
      if ( name_high == 1 || name_high == 4 )
      {
        if ( klass_high == 3 )
          *fixedVal = (int32_t)v48.fields.current[3].klass;
        klass = (int)current[3].klass;
        if ( v40 )
          klass = klass * v40 / 1000;
        goto LABEL_27;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v40;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestEntity__GetChapterSubTitle(
        QuestEntity_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *ChapterSubStr; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x2
  ConstantMaster_o *v12; // x22
  int32_t id; // w23
  int32_t v14; // w23

  if ( (byte_4213C8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_2977/*"CHAPTER_F_END_ID"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    sub_B0D8A4(&StringLiteral_2978/*"CHAPTER_F_START_ID"*/, v8);
    byte_4213C8F = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantMaster___);
  v12 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_B0D97C(Instance);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_2978/*"CHAPTER_F_START_ID"*/, 0LL) )
  {
    v14 = this->fields.id;
    if ( v14 <= ConstantMaster__GetValue(v12, (System_String_o *)StringLiteral_2977/*"CHAPTER_F_END_ID"*/, 0LL) )
LABEL_10:
      ChapterSubStr = QuestEntity__getChapterSubStr(this, warId, v11);
  }
  if ( System_String__IsNullOrWhiteSpace(ChapterSubStr, 0LL) )
    return this->fields.name;
  return ChapterSubStr;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestEntity__GetChapterUnitId(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarEntity_o *v7; // x20
  DataManager_o *Instance; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213C8E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&WarEntity_TypeInfo, v6);
    byte_4213C8E = 1;
  }
  v7 = (WarEntity_o *)sub_B0D974(WarEntity_TypeInfo, *(_QWORD *)&warId, method);
  WarEntity___ctor(v7, 0LL);
  entity = v7;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         warId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return WarEntity__GetQuestBoardSectionId(entity, 0LL);
LABEL_10:
    sub_B0D97C(Instance);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestEntity__GetCostValueColor(
        int32_t costCalcVal,
        bool isOverCost,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *result; // x0

  if ( (byte_4213C99 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, isOverCost);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v5);
    sub_B0D8A4(&StringLiteral_9881/*"OVER_COST_COLOR"*/, v6);
    sub_B0D8A4(&StringLiteral_2930/*"CAMPAIGN_COST_COLOR"*/, v7);
    byte_4213C99 = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_23617/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_8;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"CAMPAIGN_COST_COLOR"*/, 0LL);
  if ( isOverCost )
  {
LABEL_8:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_9881/*"OVER_COST_COLOR"*/, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t RestTime; // x19

  if ( (byte_4213C92 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, is_itvl);
    byte_4213C92 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v7; // x2
  int32_t v8; // w1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213C85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4213C85 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    v8 = 1;
    return QuestEntity__GetPhaseDetail_23240556(this, v8, v7);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B0D97C(Instance);
  v8 = UserQuestEntity__getQuestPhase(entity, 0LL) + 1;
  return QuestEntity__GetPhaseDetail_23240556(this, v8, v7);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail_23240556(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x4
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213C86 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, *(_QWORD *)&phaseCnt);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4213C86 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  QuestPhaseDetailMaster__TryGetEntity((QuestPhaseDetailMaster_o *)Instance, &entity, this->fields.id, phaseCnt, v7);
  return entity;
}


QuestEntity_o *__fastcall QuestEntity__GetPhaseDetailedEntity(QuestEntity_o *this, const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  QuestPhaseDetailEntity_o *v6; // x20
  QuestEntity_o *v7; // x21
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  int64_t flag; // x8

  if ( (byte_4213C84 & 1) == 0 )
  {
    sub_B0D8A4(&QuestEntity_TypeInfo, method);
    byte_4213C84 = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v6 = PhaseDetail;
    v7 = (QuestEntity_o *)sub_B0D974(QuestEntity_TypeInfo, v4, v5);
    QuestEntity___ctor_23239732(v7, this, v8);
    if ( !v7 )
      sub_B0D97C(v9);
    this = v7;
    v7->fields.spotId = v6->fields.spotId;
    v7->fields.consumeType = v6->fields.consumeType;
    v7->fields.actConsume = v6->fields.actConsume;
    flag = v6->fields.flag;
    v7->fields.mIsPhaseDetailed = 1;
    v7->fields.flag = flag;
  }
  return this;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4213C93 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, is_itvl);
    byte_4213C93 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *v8; // x19
  int age; // [xsp+Ch] [xbp-24h] BYREF
  WarQuestSelectionEntity_o *v11; // [xsp+10h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4213C95 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, v4);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4213C95 = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  age = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.spotId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !entity )
      goto LABEL_14;
    v8 = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Instance;
    age = (int)entity->fields.age;
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&age, 0LL);
    if ( !v8 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                  v8,
                                  &v11,
                                  (System_String_o *)Instance,
                                  (const MethodInfo_266A07C *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v11 )
        return v11->fields.questId;
LABEL_14:
      sub_B0D97C(Instance);
    }
  }
  return 0;
}


bool __fastcall QuestEntity__HasFlag(QuestEntity_o *this, int64_t flag, const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)flag)) == 0LL )
  {
    p_flag = &this->fields.flag;
  }
  else
  {
    p_flag = &PhaseDetail->fields.flag;
  }
  return (*p_flag & flag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestEntity__HasFlag_23244236(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail_23240556; // x0

  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail_23240556 = QuestEntity__GetPhaseDetail_23240556(this, phaseCnt, *(const MethodInfo **)&phaseCnt)) == 0LL )
  {
    p_flag = &this->fields.flag;
  }
  else
  {
    p_flag = &PhaseDetail_23240556->fields.flag;
  }
  return (*p_flag & flag) != 0;
}


bool __fastcall QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_4213C9A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarQuestSelectionMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4213C9A = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 7) & 8) == 0 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return WarQuestSelectionMaster__IsActiveRegisteredQuest(Master_WarQuestSelectionMaster, this->fields.id, 0LL);
}


bool __fastcall QuestEntity__IsNeedUseEventQuestSupport(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x3
  int32_t GroupId; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4213C97 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4213C97 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v7);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_14:
    sub_B0D97C(Instance);
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
  __int64 v3; // x1
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v5; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213C9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4213C9B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, this->fields.id, 1, 0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_12:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return QuestPhaseEntity__IsRepeatReward(entity, v5);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestEntity__getChapterSubStr(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  int32_t ChapterUnitId; // w20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x20
  Il2CppObject *v18; // x1
  System_String_o *v19; // x0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  int32_t chapterSubId; // w8
  System_String_o *v24; // x19
  System_String_o *v25; // x20
  Il2CppObject *v26; // x1
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int32_t v29; // w8
  System_String_o *v30; // x19
  int32_t v31; // [xsp+8h] [xbp-18h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4213C8D & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&warId);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8685/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v6);
    sub_B0D8A4(&StringLiteral_8684/*"MATERIAL_MAP_CHAPTER_SUB"*/, v7);
    byte_4213C8D = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.chapterSubStr, 0LL);
  if ( !IsNullOrEmpty )
    return this->fields.chapterSubStr;
  ChapterUnitId = QuestEntity__GetChapterUnitId((QuestEntity_o *)IsNullOrEmpty, warId, v9);
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v10)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 2) & 4) != 0 )
  {
    if ( ChapterUnitId )
    {
      v32 = ChapterUnitId;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
      v21 = System_String__Format((System_String_o *)StringLiteral_8685/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v20, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get(v21, 0LL);
      chapterSubId = this->fields.chapterSubId;
      v24 = v22;
      v18 = (Il2CppObject *)LocalizationManager__ChineseNumber(chapterSubId, 0LL);
      v19 = v24;
      return System_String__Format(v19, v18, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8684/*"MATERIAL_MAP_CHAPTER_SUB"*/, 0LL);
    v29 = this->fields.chapterSubId;
    v30 = v28;
    v26 = (Il2CppObject *)LocalizationManager__ChineseNumber(v29, 0LL);
    v27 = v30;
  }
  else
  {
    if ( ChapterUnitId )
    {
      v31 = ChapterUnitId;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v16 = System_String__Format((System_String_o *)StringLiteral_8685/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v15, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get(v16, 0LL);
      v18 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
      v19 = v17;
      return System_String__Format(v19, v18, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8684/*"MATERIAL_MAP_CHAPTER_SUB"*/, 0LL);
    v26 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
    v27 = v25;
  }
  return System_String__Format(v27, v26, 0LL);
}


int32_t __fastcall QuestEntity__getCharaIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId;
}


int64_t __fastcall QuestEntity__getClosedAt(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_4213C91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4213C91 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  return *p_closedAt;
}


int32_t __fastcall QuestEntity__getDisplayHours(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_displayHours; // x8

  if ( (byte_4213C8B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4213C8B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_4213C8C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4213C8C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_intervalHours = &this->fields.intervalHours;
  if ( ReplaceDataByQuestId )
    p_intervalHours = &ReplaceDataByQuestId->fields.intervalHours;
  return *p_intervalHours;
}


QuestConsumeItemEntity_o *__fastcall QuestEntity__getItemConsumeEntity(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  int32_t *v7; // x8
  QuestPhaseDetailEntity_o *v8; // x0
  DataManager_o *Instance; // x0

  if ( (byte_4213C94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4213C94 = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_consumeType = &this->fields.consumeType;
  else
    p_consumeType = &PhaseDetail->fields.consumeType;
  if ( *p_consumeType != 3 )
  {
    if ( this->fields.mIsPhaseDetailed || (v8 = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
      v7 = &this->fields.consumeType;
    else
      v7 = &v8->fields.consumeType;
    if ( *v7 != 4 )
      return 0LL;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return (QuestConsumeItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.id,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
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
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_4213C90 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4213C90 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  return *p_openedAt;
}


int32_t __fastcall QuestEntity__getPriority(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  clsQuestCheck_o *v4; // x0

  if ( (byte_4213C8A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v3);
    byte_4213C8A = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v4 )
    sub_B0D97C(0LL);
  if ( clsQuestCheck__IsQuestClear(v4, this->fields.id, 0, 0LL) )
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
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  System_String_o **p_name; // x8

  if ( (byte_4213C87 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4213C87 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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


System_String_o *__fastcall QuestEntity__getRecommendLv_23243400(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_23240556; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_23240556 = QuestEntity__GetPhaseDetail_23240556(this, phaseCnt, method);
  if ( !PhaseDetail_23240556
    || (p_recommendLv = &PhaseDetail_23240556->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_23240556->fields.recommendLv, 0LL)) )
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
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  int32_t result; // w0
  const MethodInfo *v6; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4213C88 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4213C88 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestEntity__getSpotId_23241352(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  int32_t result; // w0
  const MethodInfo *v9; // x4
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213C89 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, *(_QWORD *)&phase);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4213C89 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)QuestPhaseDetailMaster__TryGetEntity(
                                (QuestPhaseDetailMaster_o *)Instance,
                                &entity,
                                this->fields.id,
                                phase,
                                v9);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    p_spotId = &this->fields.spotId;
    return *p_spotId;
  }
  if ( !entity )
LABEL_14:
    sub_B0D97C(Instance);
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