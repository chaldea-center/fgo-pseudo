void QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E98 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970E98 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void QuestEntity___ctor_49487644(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_String_o *name; // x1
  struct System_String_o *nameRuby; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_array *beforeActionVals; // x1
  __int128 v22; // q0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_String_array *afterActionVals; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_String_o *chapterSubStr; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_String_o *recommendLv; // x1
  struct System_String_o **p_recommendLv; // x20
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int128 v51; // q0

  if ( (byte_5970E99 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970E99 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_2213CDC(v5, v6);
  name = cSrc->fields.name;
  this->fields.id = cSrc->fields.id;
  this->fields.name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)name, v7, v8, v9, v10, v11, v12);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nameRuby,
    (int32_t)nameRuby,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  beforeActionVals = cSrc->fields.beforeActionVals;
  *(_OWORD *)&this->fields.type = *(_OWORD *)&cSrc->fields.type;
  v22 = *(_OWORD *)&cSrc->fields.priority;
  this->fields.beforeActionVals = beforeActionVals;
  *(_OWORD *)&this->fields.priority = v22;
  *(_OWORD *)&this->fields.charaIconId = *(_OWORD *)&cSrc->fields.charaIconId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.beforeActionVals,
    (int32_t)beforeActionVals,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  afterActionVals = cSrc->fields.afterActionVals;
  this->fields.afterActionVals = afterActionVals;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.afterActionVals,
    (int32_t)afterActionVals,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  chapterSubStr = cSrc->fields.chapterSubStr;
  *(_OWORD *)&this->fields.displayHours = *(_OWORD *)&cSrc->fields.displayHours;
  this->fields.chapterSubStr = chapterSubStr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.chapterSubStr,
    (int32_t)chapterSubStr,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  recommendLv = cSrc->fields.recommendLv;
  this->fields.recommendLv = recommendLv;
  p_recommendLv = &this->fields.recommendLv;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_recommendLv, (int32_t)recommendLv, v45, v46, v47, v48, v49, v50);
  *((_DWORD *)p_recommendLv + 2) = cSrc->fields.hasStartAction;
  v51 = *(_OWORD *)&cSrc->fields.noticeAt;
  p_recommendLv[2] = (struct System_String_o *)cSrc->fields.flag;
  *(_OWORD *)(p_recommendLv + 3) = v51;
  *((_DWORD *)p_recommendLv + 10) = cSrc->fields.scriptQuestId;
  *((_WORD *)p_recommendLv + 22) = *(_WORD *)&cSrc->fields.mIsPhaseDetailed;
}


int32_t QuestEntity__CreatePrimaryKey(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestEntity__GetBgmName(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v7; // x1
  MapMaster_o *SpotId; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x8
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x1
  int32_t monitor; // w20
  bool v14; // w8
  System_String_o *result; // x0
  Il2CppObject *v16; // [xsp+0h] [xbp-40h] BYREF
  MapEntity_o *v17; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5970EAB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_MapMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_5970EAB = 1;
  }
  entity = 0;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v16 = 0;
  v17 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&warId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v7);
  if ( !Master_object )
    goto LABEL_23;
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_3F10B80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v10 = entity;
    if ( !entity )
      goto LABEL_23;
    goto LABEL_14;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v12);
  if ( !v11 )
LABEL_23:
    sub_2213CDC(SpotId, v9);
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                            &v16,
                            (int32_t)SpotId,
                            (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v10 = v16;
    if ( !v16 )
      goto LABEL_23;
LABEL_14:
    monitor = (int32_t)v10[1].monitor;
    goto LABEL_16;
  }
  monitor = 0;
LABEL_16:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  SpotId = (MapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_23;
  v14 = MapMaster__TryGetEntity(SpotId, &v17, monitor, warId, 0);
  result = 0;
  if ( v14 )
  {
    SpotId = (MapMaster_o *)v17;
    if ( !v17 )
      goto LABEL_23;
    return MapEntity__GetPrioredBgmName(v17, 0);
  }
  return result;
}


int32_t QuestEntity__GetCampaignCostCalcValue(
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
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v13; // x21
  __int64 v14; // x1
  Il2CppObject *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x23
  Il2CppObject *v17; // x24
  System_Collections_Generic_List_object__o *v18; // x25
  int max_length; // w8
  unsigned int v20; // w28
  bool v21; // w19
  EventEntity_o *v22; // x8
  int32_t id; // w27
  int32_t v24; // w26
  int64_t v25; // x22
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
  int v36; // w8
  int32_t v37; // w21
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x8
  int v41; // w9
  int klass_high; // w10
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5970EAD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970EAD = 1;
  }
  memset(&v45, 0, sizeof(v45));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v11 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v13 = DataManager__GetMasterData_object_(
          v11,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = NetworkManager__getTime(0);
  if ( !MasterData_object )
    goto LABEL_41;
  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                   (EventQuestMaster_o *)MasterData_object,
                                   questId,
                                   phase,
                                   Instance,
                                   7,
                                   0);
  v17 = DataManager__GetMasterData_object_(
          v11,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_41;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = !isQuestNoneCleared;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_2213CE4(Instance);
      v22 = EnabledEventCampaignForQuest->m_Items[v20];
      if ( !v22 || !v13 )
        break;
      id = v22->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData((EventCampaignMaster_o *)v13, id, 0);
      if ( Instance )
      {
        v24 = *(_DWORD *)(Instance + 20);
        v25 = Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v24, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( !v17 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(
                       (EventCampaignReleaseMaster_o *)v17,
                       id,
                       *(_DWORD *)(v25 + 20),
                       0);
          if ( (v24 != 25 || !v21) && (Instance & 1) != 0 && (v24 == 25 || v24 == 12) )
          {
            if ( !v18 )
              break;
            items = v18->fields._items;
            v33 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              break;
            size = v18->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)v25,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v18->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v25;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), v25, v26, v27, v28, v29, v30, v31);
            }
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_27;
    }
LABEL_41:
    sub_2213CDC(Instance, v10);
  }
LABEL_27:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v18,
                        0);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v36 = 0;
LABEL_29:
  v37 = v36;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v38 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_2213CDC(v38, v39);
    v41 = *(_DWORD *)((char *)&v45.fields._current->klass + (unsigned __int64)&word_34);
    if ( (v41 & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_2213CDC(v38, v39);
      klass_high = HIDWORD(Entity[10].klass);
      if ( klass_high == 1 || klass_high == 4 )
      {
        if ( v41 == 3 )
          *fixedVal = *(_DWORD *)((char *)&v45.fields._current->klass + (unsigned __int64)&dword_30);
        v36 = *(int *)((char *)&dword_30 + (_QWORD)current);
        if ( v37 )
          v36 = v36 * v37 / 1000;
        goto LABEL_29;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v37;
}


System_String_o *QuestEntity__GetChapterSubTitle(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  System_String_o *ChapterSubStr; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ConstantMaster_o *v9; // x22
  int32_t id; // w23
  int32_t v11; // w23

  if ( (byte_5970EA4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3476/*"CHAPTER_F_END_ID"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3477/*"CHAPTER_F_START_ID"*/);
    byte_5970EA4 = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantMaster___);
  v9 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_2213CDC(Instance, v7);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3477/*"CHAPTER_F_START_ID"*/, 0) )
  {
    v11 = this->fields.id;
    if ( v11 <= ConstantMaster__GetValue(v9, (System_String_o *)StringLiteral_3476/*"CHAPTER_F_END_ID"*/, 0) )
LABEL_10:
      ChapterSubStr = QuestEntity__getChapterSubStr(this, warId, v8);
  }
  if ( System_String__IsNullOrWhiteSpace(ChapterSubStr, 0) )
    return this->fields.name;
  return ChapterSubStr;
}


int32_t QuestEntity__GetConsumeType(QuestEntity_o *this, const MethodInfo *method)
{
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0 )
    p_consumeType = &this->fields.consumeType;
  else
    p_consumeType = &PhaseDetail->fields.consumeType;
  return *p_consumeType;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestEntity__GetCostValueColor(int32_t costCalcVal, bool isOverCost, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_5970EAE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    sub_2213A60(&StringLiteral_10153/*"OVER_COST_COLOR"*/);
    sub_2213A60(&StringLiteral_3408/*"CAMPAIGN_COST_COLOR"*/);
    byte_5970EAE = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_26484/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_7;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isOverCost);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_3408/*"CAMPAIGN_COST_COLOR"*/, 0);
  if ( isOverCost )
  {
LABEL_7:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isOverCost);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10153/*"OVER_COST_COLOR"*/, 0);
  }
  return result;
}


int64_t QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t RestTime; // x19

  if ( (byte_5970EA7 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970EA7 = 1;
  }
  RestTime = QuestEntity__GetRestTime(this, is_itvl, method);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  return NetworkManager__getTime(0) + RestTime;
}


int32_t QuestEntity__GetMaxPhase(QuestEntity_o *this, const MethodInfo *method)
{
  QuestPhaseEntity_array *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5970E9C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970E9C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (Master_object = QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, this->fields.id, v5)) == 0 )
  {
    sub_2213CDC(Master_object, v4);
  }
  return Master_object->max_length;
}


QuestPhaseDetailEntity_o *QuestEntity__GetPhaseDetail(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x2
  int v7; // w20
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  int32_t MaxPhase; // w21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970E9B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970E9B = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_19;
  if ( !UserQuestMaster__TryGetEntity(
          (UserQuestMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.id,
          0) )
  {
    v7 = 1;
    return QuestEntity__GetPhaseDetail_49488572(this, v7, v6);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_19:
    sub_2213CDC(Instance, v4);
  v7 = UserQuestEntity__getQuestPhase(entity, 0) + 1;
  if ( ConstantMaster__IsEnableFixGetQuestPhaseDetail(0) )
  {
    MaxPhase = QuestEntity__GetMaxPhase(this, v8);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    v7 = System_Math__Min_77153596(v7, MaxPhase, 0);
  }
  return QuestEntity__GetPhaseDetail_49488572(this, v7, v6);
}


QuestPhaseDetailEntity_o *QuestEntity__GetPhaseDetail_49488572(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970E9D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970E9D = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  QuestPhaseDetailMaster__TryGetEntity((QuestPhaseDetailMaster_o *)Instance, &entity, this->fields.id, phaseCnt, v7);
  return entity;
}


QuestEntity_o *QuestEntity__GetPhaseDetailedEntity(QuestEntity_o *this, const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  QuestPhaseDetailEntity_o *v4; // x20
  QuestEntity_o *v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t spotId; // w9
  int32_t actConsume; // w10
  int64_t flag; // x8

  if ( (byte_5970E9A & 1) == 0 )
  {
    sub_2213A60(&QuestEntity_TypeInfo);
    byte_5970E9A = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v4 = PhaseDetail;
    v5 = (QuestEntity_o *)sub_2213CCC(QuestEntity_TypeInfo);
    QuestEntity___ctor_49487644(v5, this, v6);
    if ( !v5 )
      sub_2213CDC(v7, v8);
    spotId = v4->fields.spotId;
    actConsume = v4->fields.actConsume;
    this = v5;
    v5->fields.consumeType = v4->fields.consumeType;
    flag = v4->fields.flag;
    v5->fields.actConsume = actConsume;
    v5->fields.spotId = spotId;
    v5->fields.flag = flag;
    v5->fields.mIsPhaseDetailed = 1;
  }
  return this;
}


// local variable allocation has failed, the output may be wrong!
int64_t QuestEntity__GetRestTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x10
  __int64 v12; // x8
  bool v13; // cc
  int64_t v14; // x9
  int64_t v15; // x8
  int64_t v16; // x10
  int64_t v17; // x10
  int32_t displayHours; // w8
  int32_t *p_intervalHours; // x10
  int32_t v20; // w10
  int v21; // w8
  __int64 v22; // x9

  if ( (byte_5970EA8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970EA8 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, is_itvl);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v8);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  p_closedAt = &this->fields.closedAt;
  v12 = *p_openedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  v14 = Time - v12;
  v13 = Time < v12;
  v15 = 0;
  if ( !v13 )
  {
    v16 = *p_closedAt;
    v13 = v16 < Time;
    v17 = v16 - Time;
    if ( !v13 )
    {
      if ( !is_itvl )
        return v17;
      if ( ReplaceDataByQuestId )
      {
        displayHours = ReplaceDataByQuestId->fields.displayHours;
        if ( !displayHours )
          return 0;
        p_intervalHours = &ReplaceDataByQuestId->fields.intervalHours;
      }
      else
      {
        displayHours = this->fields.displayHours;
        if ( !displayHours )
          return 0;
        p_intervalHours = &this->fields.intervalHours;
      }
      v20 = *p_intervalHours;
      if ( v20 )
      {
        v21 = 3600 * displayHours;
        v22 = v14 % (3600 * v20 + (__int64)v21);
        v13 = v21 < v22;
        v15 = v21 - v22;
        if ( v13 )
          return 0;
        return v15;
      }
      return 0;
    }
  }
  return v15;
}


int32_t QuestEntity__GetTypeFlag(QuestEntity_o *this, const MethodInfo *method)
{
  return 1 << this->fields.type;
}


int32_t QuestEntity__GetWarId(QuestEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  Il2CppObject *SpotId; // x0
  __int64 v7; // x1
  int32_t v8; // w19
  Il2CppObject *v9; // x8
  Il2CppObject *v11; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970EAA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_5970EAA = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v11 = 0;
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (Il2CppObject *)QuestEntity__getSpotId(this, v5);
  if ( !Master_object )
    goto LABEL_16;
  v8 = (int)SpotId;
  SpotId = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             &entity,
                             (int32_t)SpotId,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v9 = entity;
    if ( !entity )
      goto LABEL_16;
    return HIDWORD(v9[1].klass);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  SpotId = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !SpotId )
LABEL_16:
    sub_2213CDC(SpotId, v7);
  SpotId = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)SpotId,
                             &v11,
                             v8,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v9 = v11;
    if ( !v11 )
      goto LABEL_16;
    return HIDWORD(v9[1].klass);
  }
  return 0;
}


bool QuestEntity__HasFlag(QuestEntity_o *this, int64_t flag, const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)flag)) == 0 )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  return (*p_flag & flag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestEntity__HasFlag_49492572(QuestEntity_o *this, int64_t flag, int32_t phaseCnt, const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail_49488572; // x0

  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail_49488572 = QuestEntity__GetPhaseDetail_49488572(this, phaseCnt, *(const MethodInfo **)&phaseCnt)) == 0 )
  {
    p_flag = &this->fields.flag;
  }
  else
  {
    p_flag = &PhaseDetail_49488572->fields.flag;
  }
  return (*p_flag & flag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestEntity__HasQuestPhaseDetailFlag(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_49488572; // x0

  PhaseDetail_49488572 = QuestEntity__GetPhaseDetail_49488572(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( PhaseDetail_49488572 )
    LOBYTE(PhaseDetail_49488572) = (PhaseDetail_49488572->fields.flag & flag) != 0;
  return (char)PhaseDetail_49488572;
}


bool QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_5970EAF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarQuestSelectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970EAF = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0 )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 7) & 8) == 0 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  return WarQuestSelectionMaster__IsActiveRegisteredQuest(
           (WarQuestSelectionMaster_o *)Master_object,
           this->fields.id,
           0);
}


bool QuestEntity__IsDefaultActConsumeAp(QuestEntity_o *this, int32_t cost, const MethodInfo *method)
{
  return this->fields.actConsume == cost;
}


bool QuestEntity__IsNeedUseEventQuestSupport(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t GroupId; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970EAC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970EAC = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v5);
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_14:
    sub_2213CDC(Instance, v4);
  return EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0);
}


bool QuestEntity__IsOpenByTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  return QuestEntity__GetRestTime(this, is_itvl, method) > 0;
}


bool QuestEntity__IsRepeatReward(QuestEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x4
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970EB0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970EB0 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.id, 1, v6) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_2213CDC(Master_object, v5);
  return QuestPhaseEntity__IsRepeatReward(entity, v5);
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestEntity__getActConsume(QuestEntity_o *this, int32_t cost_calc_val, const MethodInfo *method)
{
  int32_t actConsume; // w19
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  actConsume = this->fields.actConsume;
  if ( !this->fields.mIsPhaseDetailed )
  {
    PhaseDetail = QuestEntity__GetPhaseDetail(this, *(const MethodInfo **)&cost_calc_val);
    if ( PhaseDetail )
      actConsume = PhaseDetail->fields.actConsume;
  }
  if ( cost_calc_val >= 1 && actConsume )
  {
    if ( actConsume * cost_calc_val < 1000 )
      return 1;
    else
      return actConsume * cost_calc_val / 1000;
  }
  return actConsume;
}


int32_t QuestEntity__getAfterClear(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.afterClear;
}


int32_t QuestEntity__getChapterId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.chapterId;
}


System_String_o *QuestEntity__getChapterSubStr(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  System_String_o *chapterSubStr; // x0
  const MethodInfo *v6; // x2
  QuestPhaseDetailEntity_o *PhaseDetail_49488572; // x0
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  int32_t QuestBoardSectionId; // w20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t chapterSubId; // w8
  System_String_o *v26; // x19
  Il2CppObject *v27; // x1
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  int32_t v30; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970EA3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8947/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/);
    sub_2213A60(&StringLiteral_8946/*"MATERIAL_MAP_CHAPTER_SUB"*/);
    byte_5970EA3 = 1;
  }
  chapterSubStr = this->fields.chapterSubStr;
  entity = 0;
  if ( !System_String__IsNullOrEmpty(chapterSubStr, 0) )
    return this->fields.chapterSubStr;
  PhaseDetail_49488572 = QuestEntity__GetPhaseDetail_49488572(this, 1, v6);
  if ( PhaseDetail_49488572 )
  {
    if ( (PhaseDetail_49488572->fields.flag & 0x2000000000000000LL) != 0 )
      return this->fields.chapterSubStr;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v10);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    warId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( entity )
    QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)entity, 0);
  else
    QuestBoardSectionId = 0;
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v11)) == 0 )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 2) & 4) != 0
    || entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal((WarEntity_o *)entity, 0) )
  {
    if ( QuestBoardSectionId )
    {
      v30 = QuestBoardSectionId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v30);
      v18 = System_String__Format((System_String_o *)StringLiteral_8947/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v16, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
      v19 = v18;
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
      v19 = (System_String_o *)StringLiteral_8946/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v24 = LocalizationManager__Get(v19, 0);
    chapterSubId = this->fields.chapterSubId;
    v26 = v24;
    v27 = (Il2CppObject *)LocalizationManager__ChineseNumber(chapterSubId, 0);
    v28 = v26;
  }
  else
  {
    if ( QuestBoardSectionId )
    {
      v30 = QuestBoardSectionId;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v30);
      v22 = System_String__Format((System_String_o *)StringLiteral_8947/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v20, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      v23 = v22;
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
      v23 = (System_String_o *)StringLiteral_8946/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v29 = LocalizationManager__Get(v23, 0);
    v27 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0);
    v28 = v29;
  }
  return System_String__Format(v28, v27, 0);
}


int32_t QuestEntity__getCharaIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId;
}


int64_t QuestEntity__getClosedAt(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_5970EA6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970EA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  return *p_closedAt;
}


int32_t QuestEntity__getForceOperation(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.forceOperation;
}


int32_t QuestEntity__getGiftIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftIconId;
}


int32_t QuestEntity__getIntervalHours(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_5970EA2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970EA2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
  p_intervalHours = &this->fields.intervalHours;
  if ( ReplaceDataByQuestId )
    p_intervalHours = &ReplaceDataByQuestId->fields.intervalHours;
  return *p_intervalHours;
}


// local variable allocation has failed, the output may be wrong!
QuestConsumeItemEntity_o *QuestEntity__getItemConsumeEntity(
        QuestEntity_o *this,
        bool isNotItemConsume,
        const MethodInfo *method)
{
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  int32_t *v7; // x8
  QuestPhaseDetailEntity_o *v8; // x0
  QuestConsumeItemEntity_o *result; // x0
  const MethodInfo *v10; // x1

  if ( (byte_5970EA9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970EA9 = 1;
  }
  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)isNotItemConsume)) == 0 )
  {
    p_consumeType = &this->fields.consumeType;
  }
  else
  {
    p_consumeType = &PhaseDetail->fields.consumeType;
  }
  if ( *p_consumeType != 3 )
  {
    if ( this->fields.mIsPhaseDetailed
      || (v8 = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)isNotItemConsume)) == 0 )
    {
      v7 = &this->fields.consumeType;
    }
    else
    {
      v7 = &v8->fields.consumeType;
    }
    if ( *v7 != 4 )
      return 0;
  }
  result = (QuestConsumeItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)result,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                         this->fields.id,
                                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
  if ( isNotItemConsume )
  {
    if ( result )
      return QuestConsumeItemEntity__GetNotConsumeItemEntity(result, v10);
LABEL_20:
    sub_2213CDC(result, v10);
  }
  return result;
}


int32_t QuestEntity__getLimitCount(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId % 10;
}


int64_t QuestEntity__getNoticeAt(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.noticeAt;
}


int64_t QuestEntity__getOpenedAt(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_5970EA5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970EA5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  return *p_openedAt;
}


int32_t QuestEntity__getPriority(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5970EA1 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5970EA1 = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, this->fields.id, 0, 0) )
    return this->fields.priority - 100000000;
  else
    return this->fields.priority;
}


int32_t QuestEntity__getQuestId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *QuestEntity__getQuestName(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  QuestEntity_o *v7; // x8

  if ( (byte_5970E9E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970E9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
  if ( ReplaceDataByQuestId )
    v7 = (QuestEntity_o *)ReplaceDataByQuestId;
  else
    v7 = this;
  return v7->fields.name;
}


System_String_o *QuestEntity__getQuestNameRuby(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.nameRuby;
}


int32_t QuestEntity__getQuestType(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *QuestEntity__getRecommendLv(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.recommendLv;
}


System_String_o *QuestEntity__getRecommendLv_49491716(QuestEntity_o *this, int32_t phaseCnt, const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_49488572; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_49488572 = QuestEntity__GetPhaseDetail_49488572(this, phaseCnt, method);
  if ( !PhaseDetail_49488572
    || (p_recommendLv = &PhaseDetail_49488572->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_49488572->fields.recommendLv, 0)) )
  {
    p_recommendLv = &this->fields.recommendLv;
  }
  return *p_recommendLv;
}


int32_t QuestEntity__getServantId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId / 10;
}


int32_t QuestEntity__getSpotId(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t result; // w0
  const MethodInfo *v6; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_5970E9F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970E9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0);
  if ( !result )
  {
    if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v6)) == 0 )
      p_spotId = &this->fields.spotId;
    else
      p_spotId = &PhaseDetail->fields.spotId;
    return *p_spotId;
  }
  return result;
}


int32_t QuestEntity__getSpotId_49489968(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t result; // w0
  const MethodInfo *v8; // x4
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970EA0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970EA0 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0);
  if ( result )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)QuestPhaseDetailMaster__TryGetEntity(
                               (QuestPhaseDetailMaster_o *)Instance,
                               &entity,
                               this->fields.id,
                               phase,
                               v8);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    p_spotId = &this->fields.spotId;
    return *p_spotId;
  }
  if ( !entity )
LABEL_14:
    sub_2213CDC(Instance, v6);
  p_spotId = &entity->fields.spotId;
  return *p_spotId;
}


int32_t QuestEntity__get_EventId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


void QuestEntity__set_EventId(QuestEntity_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}