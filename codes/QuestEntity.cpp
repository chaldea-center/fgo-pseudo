void __fastcall QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8A9C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E8A9C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void __fastcall QuestEntity___ctor_25401724(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *name; // x1
  struct System_String_o *nameRuby; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_array *beforeActionVals; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_String_array *afterActionVals; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_String_o *chapterSubStr; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_String_o *recommendLv; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42E8A9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42E8A9D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
  this->fields.id = cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)name,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nameRuby,
    (System_Int32_array **)nameRuby,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.beforeActionVals,
    (System_Int32_array **)beforeActionVals,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  afterActionVals = cSrc->fields.afterActionVals;
  this->fields.afterActionVals = afterActionVals;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.afterActionVals,
    (System_Int32_array **)afterActionVals,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.displayHours = cSrc->fields.displayHours;
  this->fields.intervalHours = cSrc->fields.intervalHours;
  this->fields.chapterId = cSrc->fields.chapterId;
  this->fields.chapterSubId = cSrc->fields.chapterSubId;
  chapterSubStr = cSrc->fields.chapterSubStr;
  this->fields.chapterSubStr = chapterSubStr;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.chapterSubStr,
    (System_Int32_array **)chapterSubStr,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  recommendLv = cSrc->fields.recommendLv;
  this->fields.recommendLv = recommendLv;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.recommendLv,
    (System_Int32_array **)recommendLv,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v22; // x1
  MapMaster_o *SpotId; // x0
  __int64 v24; // x1
  WarEntity_o *v25; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x21
  const MethodInfo *v27; // x1
  int32_t age; // w20
  bool v29; // w8
  System_String_o *result; // x0
  WarEntity_o *v31; // [xsp+8h] [xbp-38h] BYREF
  MapEntity_o *v32; // [xsp+10h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E8AB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_MapMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_SpotMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v18, v19, v20);
    byte_42E8AB0 = 1;
  }
  v32 = 0LL;
  entity = 0LL;
  v31 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v22);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  SpotId = (MapMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            Master_WarQuestSelectionMaster,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_23FAE6C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v25 = entity;
    if ( !entity )
      goto LABEL_26;
    goto LABEL_16;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v27);
  if ( !v26 )
LABEL_26:
    sub_B5D69C(SpotId, v24);
  SpotId = (MapMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                            v26,
                            &v31,
                            (int32_t)SpotId,
                            (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v25 = v31;
    if ( !v31 )
      goto LABEL_26;
LABEL_16:
    age = (int32_t)v25->fields.age;
    goto LABEL_18;
  }
  age = 0;
LABEL_18:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SpotId = (MapMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_26;
  v29 = MapMaster__TryGetEntity(SpotId, &v32, age, warId, 0LL);
  result = 0LL;
  if ( v29 )
  {
    SpotId = (MapMaster_o *)v32;
    if ( !v32 )
      goto LABEL_26;
    return MapEntity__GetPrioredBgmName(v32, 0LL);
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
  int64_t Instance; // x0
  __int64 v49; // x1
  DataManager_o *v50; // x25
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  EventCampaignMaster_o *v52; // x22
  WarEntity_o *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x24
  EventCampaignReleaseMaster_o *v55; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x23
  int max_length; // w8
  unsigned int v58; // w28
  bool v59; // w19
  EventEntity_o *v60; // x8
  int32_t id; // w27
  int32_t v62; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x21
  int klass; // w8
  int32_t v65; // w21
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *current; // x8
  int klass_high; // w9
  int name_high; // w10
  __int64 v72; // x0
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42E8AB2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, questId, phase, isQuestNoneCleared);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&NetworkManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    byte_42E8AB2 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v50 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v52 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v50,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v50,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
  v55 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          v50,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_39;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v58 = 0;
    v59 = !isQuestNoneCleared;
    while ( 1 )
    {
      if ( v58 >= max_length )
      {
        v72 = sub_B5D6C8(Instance);
        sub_B5D668(v72, 0LL);
      }
      v60 = EnabledEventCampaignForQuest->m_Items[v58];
      if ( !v60 || !v52 )
        break;
      id = v60->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData(v52, id, 0LL);
      if ( Instance )
      {
        v62 = *(_DWORD *)(Instance + 20);
        v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v62, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v55 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(v55, id, v63->fields.missionConditionDetailId, 0LL);
          if ( (v62 != 25 || !v59) && (Instance & 1) != 0 && (v62 == 25 || v62 == 12) )
          {
            if ( !v56 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v56,
              v63,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v58 >= max_length )
        goto LABEL_25;
    }
LABEL_39:
    sub_B5D69C(Instance, v49);
  }
LABEL_25:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v56,
                        0LL);
  if ( !v56 )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v74,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v56,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  klass = 0;
LABEL_27:
  v65 = klass;
  while ( 1 )
  {
    v66 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v74,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v66 )
      break;
    current = v74.fields.current;
    if ( !v74.fields.current )
      sub_B5D69C(v66, v67);
    klass_high = HIDWORD(v74.fields.current[3].klass);
    if ( (klass_high & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_B5D69C(v66, v67);
      name_high = HIDWORD(Entity[1].fields.name);
      if ( name_high == 1 || name_high == 4 )
      {
        if ( klass_high == 3 )
          *fixedVal = (int32_t)v74.fields.current[3].klass;
        klass = (int)current[3].klass;
        if ( v65 )
          klass = klass * v65 / 1000;
        goto LABEL_27;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v74,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v65;
}


System_String_o *__fastcall QuestEntity__GetChapterSubTitle(
        QuestEntity_o *this,
        int32_t warId,
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
  System_String_o *ChapterSubStr; // x21
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  ConstantMaster_o *v22; // x22
  int32_t id; // w23
  int32_t v24; // w23

  if ( (byte_42E8AA9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3024/*"CHAPTER_F_END_ID"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3025/*"CHAPTER_F_START_ID"*/, v15, v16, v17);
    byte_42E8AA9 = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
  v22 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_B5D69C(Instance, v20);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3025/*"CHAPTER_F_START_ID"*/, 0LL) )
  {
    v24 = this->fields.id;
    if ( v24 <= ConstantMaster__GetValue(v22, (System_String_o *)StringLiteral_3024/*"CHAPTER_F_END_ID"*/, 0LL) )
LABEL_10:
      ChapterSubStr = QuestEntity__getChapterSubStr(this, warId, v21);
  }
  if ( System_String__IsNullOrWhiteSpace(ChapterSubStr, 0LL) )
    return this->fields.name;
  return ChapterSubStr;
}


int32_t __fastcall QuestEntity__GetChapterUnitId(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
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
  WarEntity_o *v14; // x20
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8AA8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&WarEntity_TypeInfo, v11, v12, v13);
    byte_42E8AA8 = 1;
  }
  v14 = (WarEntity_o *)sub_B5D694(WarEntity_TypeInfo);
  WarEntity___ctor(v14, 0LL);
  entity = v14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         warId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return WarEntity__GetQuestBoardSectionId(entity, 0LL);
LABEL_10:
    sub_B5D69C(Instance, v16);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *result; // x0

  if ( (byte_42E8AB3 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, isOverCost, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_9963/*"OVER_COST_COLOR"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2974/*"CAMPAIGN_COST_COLOR"*/, v12, v13, v14);
    byte_42E8AB3 = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_23850/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_8;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"CAMPAIGN_COST_COLOR"*/, 0LL);
  if ( isOverCost )
  {
LABEL_8:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_9963/*"OVER_COST_COLOR"*/, 0LL);
  }
  return result;
}


int64_t __fastcall QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t RestTime; // x19

  if ( (byte_42E8AAC & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, is_itvl, (_DWORD)method, v3);
    byte_42E8AAC = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8A9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8A9F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    v15 = 1;
    return QuestEntity__GetPhaseDetail_25402548(this, v15, v14);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B5D69C(Instance, v12);
  v15 = UserQuestEntity__getQuestPhase(entity, 0LL) + 1;
  return QuestEntity__GetPhaseDetail_25402548(this, v15, v14);
}


QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail_25402548(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8AA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, phaseCnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E8AA0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  QuestPhaseDetailMaster__TryGetEntity((QuestPhaseDetailMaster_o *)Instance, &entity, this->fields.id, phaseCnt, 0LL);
  return entity;
}


QuestEntity_o *__fastcall QuestEntity__GetPhaseDetailedEntity(QuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  QuestPhaseDetailEntity_o *v6; // x20
  QuestEntity_o *v7; // x21
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t flag; // x8

  if ( (byte_42E8A9E & 1) == 0 )
  {
    sub_B5D5C4(&QuestEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A9E = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v6 = PhaseDetail;
    v7 = (QuestEntity_o *)sub_B5D694(QuestEntity_TypeInfo);
    QuestEntity___ctor_25401724(v7, this, v8);
    if ( !v7 )
      sub_B5D69C(v9, v10);
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


int64_t __fastcall QuestEntity__GetRestTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20
  const MethodInfo *v7; // x1
  bool v8; // cc
  const MethodInfo *v9; // x1
  int64_t result; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  int v14; // w22
  const MethodInfo *v15; // x1
  __int64 v16; // x21
  const MethodInfo *v17; // x1
  int64_t v18; // x8

  if ( (byte_42E8AAD & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, is_itvl, (_DWORD)method, v3);
    byte_42E8AAD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v8 = Time < QuestEntity__getOpenedAt(this, v7);
  result = 0LL;
  if ( !v8 )
  {
    if ( Time > QuestEntity__getClosedAt(this, v9) )
      return 0LL;
    if ( is_itvl )
    {
      if ( !QuestEntity__getDisplayHours(this, v11) || !QuestEntity__getIntervalHours(this, v12) )
        return 0LL;
      v14 = 3600 * QuestEntity__getDisplayHours(this, v13);
      v16 = 3600 * QuestEntity__getIntervalHours(this, v15) + (__int64)v14;
      v18 = (Time - QuestEntity__getOpenedAt(this, v17)) % v16;
      if ( v18 <= v14 )
        return v14 - v18;
      else
        return 0LL;
    }
    else
    {
      return QuestEntity__getClosedAt(this, v11) - Time;
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *v19; // x19
  int age; // [xsp+Ch] [xbp-24h] BYREF
  WarQuestSelectionEntity_o *v22; // [xsp+10h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E8AAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E8AAF = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  age = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.spotId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !entity )
      goto LABEL_14;
    v19 = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Instance;
    age = (int)entity->fields.age;
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&age, 0LL);
    if ( !v19 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                  v19,
                                  &v22,
                                  (System_String_o *)Instance,
                                  (const MethodInfo_23FB2B8 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v22 )
        return v22->fields.questId;
LABEL_14:
      sub_B5D69C(Instance, v18);
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
bool __fastcall QuestEntity__HasFlag_25406292(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_25402548; // x0

  if ( this->fields.mIsPhaseDetailed )
    return (this->fields.flag & flag) != 0;
  PhaseDetail_25402548 = QuestEntity__GetPhaseDetail_25402548(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( !PhaseDetail_25402548 )
    return (this->fields.flag & flag) != 0;
  else
    return QuestPhaseDetailEntity__HasFlag(PhaseDetail_25402548, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestEntity__HasQuestPhaseDetailFlag(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_25402548; // x0

  PhaseDetail_25402548 = QuestEntity__GetPhaseDetail_25402548(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( PhaseDetail_25402548 )
    LOBYTE(PhaseDetail_25402548) = QuestPhaseDetailEntity__HasFlag(PhaseDetail_25402548, flag, 0LL);
  return (char)PhaseDetail_25402548;
}


bool __fastcall QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42E8AB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarQuestSelectionMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E8AB4 = 1;
  }
  if ( !QuestEntity__HasFlag(this, 0x800000000000000LL, v2) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  return WarQuestSelectionMaster__IsActiveRegisteredQuest(Master_WarQuestSelectionMaster, this->fields.id, 0LL);
}


bool __fastcall QuestEntity__IsNeedUseEventQuestSupport(QuestEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  int32_t GroupId; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8AB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8AB1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v16);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_14:
    sub_B5D69C(Instance, v15);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8AB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E8AB5 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, this->fields.id, 1, 0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
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
  const MethodInfo *v24; // x3
  _BOOL8 HasQuestPhaseDetailFlag; // x0
  const MethodInfo *v26; // x2
  int32_t ChapterUnitId; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v30; // x1
  WarEntity_o *Entity; // x20
  const MethodInfo *v32; // x2
  Il2CppObject *v33; // x0
  System_String_o *v34; // x20
  System_String_o *v35; // x0
  int32_t chapterSubId; // w8
  System_String_o *v37; // x19
  Il2CppObject *v38; // x1
  System_String_o *v39; // x0
  Il2CppObject *v40; // x0
  System_String_o *v41; // x20
  System_String_o *v42; // x20
  System_String_o *v43; // x0
  int32_t v44; // w8
  System_String_o *v45; // x19
  Il2CppObject *v46; // x1
  System_String_o *v47; // x0
  System_String_o *v48; // x20
  int32_t v49; // [xsp+8h] [xbp-18h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8AA7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, warId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8753/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_8752/*"MATERIAL_MAP_CHAPTER_SUB"*/, v21, v22, v23);
    byte_42E8AA7 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.chapterSubStr, 0LL) )
    return this->fields.chapterSubStr;
  HasQuestPhaseDetailFlag = QuestEntity__HasQuestPhaseDetailFlag(this, 0x2000000000000000LL, 1, v24);
  if ( HasQuestPhaseDetailFlag )
    return this->fields.chapterSubStr;
  ChapterUnitId = QuestEntity__GetChapterUnitId((QuestEntity_o *)HasQuestPhaseDetailFlag, warId, v26);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v30);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             warId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( QuestEntity__HasFlag(this, 0x40000LL, v32)
    || Entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal(Entity, 0LL) )
  {
    if ( ChapterUnitId )
    {
      v50 = ChapterUnitId;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
      v34 = System_String__Format((System_String_o *)StringLiteral_8753/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v33, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = LocalizationManager__Get(v34, 0LL);
      chapterSubId = this->fields.chapterSubId;
      v37 = v35;
      v38 = (Il2CppObject *)LocalizationManager__ChineseNumber(chapterSubId, 0LL);
      v39 = v37;
      return System_String__Format(v39, v38, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8752/*"MATERIAL_MAP_CHAPTER_SUB"*/, 0LL);
    v44 = this->fields.chapterSubId;
    v45 = v43;
    v46 = (Il2CppObject *)LocalizationManager__ChineseNumber(v44, 0LL);
    v47 = v45;
  }
  else
  {
    if ( ChapterUnitId )
    {
      v49 = ChapterUnitId;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
      v41 = System_String__Format((System_String_o *)StringLiteral_8753/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v40, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v42 = LocalizationManager__Get(v41, 0LL);
      v38 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
      v39 = v42;
      return System_String__Format(v39, v38, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_8752/*"MATERIAL_MAP_CHAPTER_SUB"*/, 0LL);
    v46 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
    v47 = v48;
  }
  return System_String__Format(v47, v46, 0LL);
}


int32_t __fastcall QuestEntity__getCharaIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId;
}


int64_t __fastcall QuestEntity__getClosedAt(QuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_42E8AAB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8AAB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  return *p_closedAt;
}


int32_t __fastcall QuestEntity__getDisplayHours(QuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_displayHours; // x8

  if ( (byte_42E8AA5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8AA5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_42E8AA6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8AA6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_intervalHours = &this->fields.intervalHours;
  if ( ReplaceDataByQuestId )
    p_intervalHours = &ReplaceDataByQuestId->fields.intervalHours;
  return *p_intervalHours;
}


QuestConsumeItemEntity_o *__fastcall QuestEntity__getItemConsumeEntity(QuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  int32_t *v13; // x8
  QuestPhaseDetailEntity_o *v14; // x0
  DataManager_o *Instance; // x0
  __int64 v16; // x1

  if ( (byte_42E8AAE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8AAE = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_consumeType = &this->fields.consumeType;
  else
    p_consumeType = &PhaseDetail->fields.consumeType;
  if ( *p_consumeType != 3 )
  {
    if ( this->fields.mIsPhaseDetailed || (v14 = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
      v13 = &this->fields.consumeType;
    else
      v13 = &v14->fields.consumeType;
    if ( *v13 != 4 )
      return 0LL;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v16);
  }
  return (QuestConsumeItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.id,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_42E8AAA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8AAA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0LL);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  return *p_openedAt;
}


int32_t __fastcall QuestEntity__getPriority(QuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  clsQuestCheck_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E8AA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v5, v6, v7);
    byte_42E8AA4 = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  if ( clsQuestCheck__IsQuestClear(v8, this->fields.id, 0, 0LL) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  System_String_o **p_name; // x8

  if ( (byte_42E8AA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8AA1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
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


System_String_o *__fastcall QuestEntity__getRecommendLv_25405472(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_25402548; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_25402548 = QuestEntity__GetPhaseDetail_25402548(this, phaseCnt, method);
  if ( !PhaseDetail_25402548
    || (p_recommendLv = &PhaseDetail_25402548->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_25402548->fields.recommendLv, 0LL)) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t result; // w0
  const MethodInfo *v11; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_42E8AA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8AA2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( !result )
  {
    if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v11)) == 0LL )
      p_spotId = &this->fields.spotId;
    else
      p_spotId = &PhaseDetail->fields.spotId;
    return *p_spotId;
  }
  return result;
}


int32_t __fastcall QuestEntity__getSpotId_25403224(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int32_t result; // w0
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8AA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, phase, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8AA3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
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
    sub_B5D69C(Instance, v13);
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