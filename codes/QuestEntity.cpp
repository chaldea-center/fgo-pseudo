void __fastcall QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186E58 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4186E58 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void __fastcall QuestEntity___ctor_23874844(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
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

  if ( (byte_4186E59 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4186E59 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.id = cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  __int64 v13; // x1
  WarEntity_o *v14; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t age; // w20
  bool v18; // w8
  System_String_o *result; // x0
  WarEntity_o *v20; // [xsp+8h] [xbp-38h] BYREF
  MapEntity_o *v21; // [xsp+10h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4186E6C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&warId);
    sub_B2C35C(&Method_DataManager_GetMaster_MapMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_SpotMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v9);
    byte_4186E6C = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  v20 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v11);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  SpotId = (MapMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            Master_WarQuestSelectionMaster,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_24E412C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v14 = entity;
    if ( !entity )
      goto LABEL_26;
    goto LABEL_16;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v16);
  if ( !v15 )
LABEL_26:
    sub_B2C434(SpotId, v13);
  SpotId = (MapMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            v15,
                            &v20,
                            (int32_t)SpotId,
                            (const MethodInfo_24E412C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v14 = v20;
    if ( !v20 )
      goto LABEL_26;
LABEL_16:
    age = (int32_t)v14->fields.age;
    goto LABEL_18;
  }
  age = 0;
LABEL_18:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SpotId = (MapMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_26;
  v18 = MapMaster__TryGetEntity(SpotId, &v21, age, warId, 0LL);
  result = 0LL;
  if ( v18 )
  {
    SpotId = (MapMaster_o *)v21;
    if ( !v21 )
      goto LABEL_26;
    return MapEntity__GetPrioredBgmName(v21, 0LL);
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
  __int64 v23; // x1
  DataManager_o *v24; // x25
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  EventCampaignMaster_o *v26; // x22
  WarEntity_o *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x24
  EventCampaignReleaseMaster_o *v29; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  int max_length; // w8
  unsigned int v32; // w28
  bool v33; // w19
  EventEntity_o *v34; // x8
  int32_t id; // w27
  int32_t v36; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  int klass; // w8
  int32_t v39; // w21
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x8
  int klass_high; // w9
  int name_high; // w10
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4186E6E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4186E6E = 1;
  }
  memset(&v48, 0, sizeof(v48));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v24 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v26 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v24,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v24,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
                                   0LL);
  v29 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          v24,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_39;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    v33 = !isQuestNoneCleared;
    while ( 1 )
    {
      if ( v32 >= max_length )
      {
        v46 = sub_B2C460(Instance);
        sub_B2C400(v46, 0LL);
      }
      v34 = EnabledEventCampaignForQuest->m_Items[v32];
      if ( !v34 || !v26 )
        break;
      id = v34->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData(v26, id, 0LL);
      if ( Instance )
      {
        v36 = *(_DWORD *)(Instance + 20);
        v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v36, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v29 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(v29, id, v37->fields.missionConditionDetailId, 0LL);
          if ( (v36 != 25 || !v33) && (Instance & 1) != 0 && (v36 == 25 || v36 == 12) )
          {
            if ( !v30 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v30,
              v37,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_25;
    }
LABEL_39:
    sub_B2C434(Instance, v23);
  }
LABEL_25:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v30,
                        0LL);
  if ( !v30 )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  klass = 0;
LABEL_27:
  v39 = klass;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v40 )
      break;
    current = v48.fields.current;
    if ( !v48.fields.current )
      sub_B2C434(v40, v41);
    klass_high = HIDWORD(v48.fields.current[3].klass);
    if ( (klass_high & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_B2C434(v40, v41);
      name_high = HIDWORD(Entity[1].fields.name);
      if ( name_high == 1 || name_high == 4 )
      {
        if ( klass_high == 3 )
          *fixedVal = (int32_t)v48.fields.current[3].klass;
        klass = (int)current[3].klass;
        if ( v39 )
          klass = klass * v39 / 1000;
        goto LABEL_27;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v39;
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  ConstantMaster_o *v13; // x22
  int32_t id; // w23
  int32_t v15; // w23

  if ( (byte_4186E65 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&warId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_2965/*"CHAPTER_F_END_ID"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    sub_B2C35C(&StringLiteral_2966/*"CHAPTER_F_START_ID"*/, v8);
    byte_4186E65 = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantMaster___);
  v13 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_B2C434(Instance, v11);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_2966/*"CHAPTER_F_START_ID"*/, 0LL) )
  {
    v15 = this->fields.id;
    if ( v15 <= ConstantMaster__GetValue(v13, (System_String_o *)StringLiteral_2965/*"CHAPTER_F_END_ID"*/, 0LL) )
LABEL_10:
      ChapterSubStr = QuestEntity__getChapterSubStr(this, warId, v12);
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
  __int64 v9; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186E64 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&WarEntity_TypeInfo, v6);
    byte_4186E64 = 1;
  }
  v7 = (WarEntity_o *)sub_B2C42C(WarEntity_TypeInfo);
  WarEntity___ctor(v7, 0LL);
  entity = v7;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         warId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return WarEntity__GetQuestBoardSectionId(entity, 0LL);
LABEL_10:
    sub_B2C434(Instance, v9);
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

  if ( (byte_4186E6F & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, isOverCost);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v5);
    sub_B2C35C(&StringLiteral_9857/*"OVER_COST_COLOR"*/, v6);
    sub_B2C35C(&StringLiteral_2918/*"CAMPAIGN_COST_COLOR"*/, v7);
    byte_4186E6F = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_23539/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_8;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2918/*"CAMPAIGN_COST_COLOR"*/, 0LL);
  if ( isOverCost )
  {
LABEL_8:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_9857/*"OVER_COST_COLOR"*/, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t RestTime; // x19

  if ( (byte_4186E68 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, is_itvl);
    byte_4186E68 = 1;
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
  __int64 v6; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186E5B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186E5B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    v9 = 1;
    return QuestEntity__GetPhaseDetail_23875668(this, v9, v8);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B2C434(Instance, v6);
  v9 = UserQuestEntity__getQuestPhase(entity, 0LL) + 1;
  return QuestEntity__GetPhaseDetail_23875668(this, v9, v8);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail_23875668(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186E5C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, *(_QWORD *)&phaseCnt);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186E5C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  QuestPhaseDetailMaster__TryGetEntity((QuestPhaseDetailMaster_o *)Instance, &entity, this->fields.id, phaseCnt, v8);
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

  if ( (byte_4186E5A & 1) == 0 )
  {
    sub_B2C35C(&QuestEntity_TypeInfo, method);
    byte_4186E5A = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v4 = PhaseDetail;
    v5 = (QuestEntity_o *)sub_B2C42C(QuestEntity_TypeInfo);
    QuestEntity___ctor_23874844(v5, this, v6);
    if ( !v5 )
      sub_B2C434(v7, v8);
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

  if ( (byte_4186E69 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, is_itvl);
    byte_4186E69 = 1;
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
  __int64 v8; // x1
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *v9; // x19
  int age; // [xsp+Ch] [xbp-24h] BYREF
  WarQuestSelectionEntity_o *v12; // [xsp+10h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4186E6B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MapMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, v4);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4186E6B = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  age = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.spotId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !entity )
      goto LABEL_14;
    v9 = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Instance;
    age = (int)entity->fields.age;
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&age, 0LL);
    if ( !v9 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                  v9,
                                  &v12,
                                  (System_String_o *)Instance,
                                  (const MethodInfo_24E4578 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v12 )
        return v12->fields.questId;
LABEL_14:
      sub_B2C434(Instance, v8);
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
bool __fastcall QuestEntity__HasFlag_23879348(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail_23875668; // x0

  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail_23875668 = QuestEntity__GetPhaseDetail_23875668(this, phaseCnt, *(const MethodInfo **)&phaseCnt)) == 0LL )
  {
    p_flag = &this->fields.flag;
  }
  else
  {
    p_flag = &PhaseDetail_23875668->fields.flag;
  }
  return (*p_flag & flag) != 0;
}


bool __fastcall QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1

  if ( (byte_4186E70 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarQuestSelectionMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4186E70 = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 7) & 8) == 0 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v8);
  return WarQuestSelectionMaster__IsActiveRegisteredQuest(Master_WarQuestSelectionMaster, this->fields.id, 0LL);
}


bool __fastcall QuestEntity__IsNeedUseEventQuestSupport(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t GroupId; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186E6D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186E6D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v8);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_14:
    sub_B2C434(Instance, v7);
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

  if ( (byte_4186E71 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4186E71 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, this->fields.id, 1, 0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_12:
    sub_B2C434(Master_WarQuestSelectionMaster, v5);
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

  if ( (byte_4186E63 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&warId);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8663/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v6);
    sub_B2C35C(&StringLiteral_8662/*"MATERIAL_MAP_CHAPTER_SUB"*/, v7);
    byte_4186E63 = 1;
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
      v21 = System_String__Format((System_String_o *)StringLiteral_8663/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v20, 0LL);
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
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8662/*"MATERIAL_MAP_CHAPTER_SUB"*/, 0LL);
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
      v16 = System_String__Format((System_String_o *)StringLiteral_8663/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v15, 0LL);
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
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8662/*"MATERIAL_MAP_CHAPTER_SUB"*/, 0LL);
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
  __int64 v5; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_4186E67 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4186E67 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
  __int64 v5; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_displayHours; // x8

  if ( (byte_4186E61 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4186E61 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
  __int64 v5; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_4186E62 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4186E62 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
  __int64 v10; // x1

  if ( (byte_4186E6A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186E6A = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  return (QuestConsumeItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.id,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
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
  __int64 v5; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_4186E66 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4186E66 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
  __int64 v5; // x1

  if ( (byte_4186E60 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v3);
    byte_4186E60 = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
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
  __int64 v5; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  System_String_o **p_name; // x8

  if ( (byte_4186E5D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4186E5D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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


System_String_o *__fastcall QuestEntity__getRecommendLv_23878512(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_23875668; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_23875668 = QuestEntity__GetPhaseDetail_23875668(this, phaseCnt, method);
  if ( !PhaseDetail_23875668
    || (p_recommendLv = &PhaseDetail_23875668->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_23875668->fields.recommendLv, 0LL)) )
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
  __int64 v5; // x1
  int32_t result; // w0
  const MethodInfo *v7; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4186E5E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4186E5E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( !result )
  {
    if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v7)) == 0LL )
      p_spotId = &this->fields.spotId;
    else
      p_spotId = &PhaseDetail->fields.spotId;
    return *p_spotId;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestEntity__getSpotId_23876464(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t result; // w0
  const MethodInfo *v10; // x4
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186E5F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, *(_QWORD *)&phase);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4186E5F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)QuestPhaseDetailMaster__TryGetEntity(
                                (QuestPhaseDetailMaster_o *)Instance,
                                &entity,
                                this->fields.id,
                                phase,
                                v10);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    p_spotId = &this->fields.spotId;
    return *p_spotId;
  }
  if ( !entity )
LABEL_14:
    sub_B2C434(Instance, v8);
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