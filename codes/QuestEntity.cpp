void QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC79EE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC79EE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void QuestEntity___ctor_42745936(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_o *name; // x1
  struct System_String_o *nameRuby; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_array *beforeActionVals; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_String_array *afterActionVals; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_String_o *chapterSubStr; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_String_o *recommendLv; // x1
  struct System_String_o **p_recommendLv; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7

  if ( (byte_4CC79EF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC79EF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C71608(v5, v6);
  this->fields.id = cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.name, (int32_t)name, v7, v8, v9, v10, v11, v12);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.nameRuby, (int32_t)nameRuby, v15, v16, v17, v18, v19, v20);
  *(_OWORD *)&this->fields.type = *(_OWORD *)&cSrc->fields.type;
  *(_OWORD *)&this->fields.priority = *(_OWORD *)&cSrc->fields.priority;
  *(_OWORD *)&this->fields.charaIconId = *(_OWORD *)&cSrc->fields.charaIconId;
  beforeActionVals = cSrc->fields.beforeActionVals;
  this->fields.beforeActionVals = beforeActionVals;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.beforeActionVals,
    (int32_t)beforeActionVals,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  afterActionVals = cSrc->fields.afterActionVals;
  this->fields.afterActionVals = afterActionVals;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.afterActionVals,
    (int32_t)afterActionVals,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_OWORD *)&this->fields.displayHours = *(_OWORD *)&cSrc->fields.displayHours;
  chapterSubStr = cSrc->fields.chapterSubStr;
  this->fields.chapterSubStr = chapterSubStr;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.chapterSubStr,
    (int32_t)chapterSubStr,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  recommendLv = cSrc->fields.recommendLv;
  this->fields.recommendLv = recommendLv;
  p_recommendLv = &this->fields.recommendLv;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_recommendLv, (int32_t)recommendLv, v44, v45, v46, v47, v48, v49);
  *((_DWORD *)p_recommendLv + 2) = cSrc->fields.hasStartAction;
  p_recommendLv[2] = (struct System_String_o *)cSrc->fields.flag;
  *(_OWORD *)(p_recommendLv + 3) = *(_OWORD *)&cSrc->fields.noticeAt;
  *((_DWORD *)p_recommendLv + 10) = cSrc->fields.scriptQuestId;
  *((_BYTE *)p_recommendLv + 44) = cSrc->fields.mIsPhaseDetailed;
  *((_BYTE *)p_recommendLv + 45) = cSrc->fields.mIsQuestSpotRelease;
}


int32_t QuestEntity__CreatePrimaryKey(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *QuestEntity__GetBgmName(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  MapMaster_o *SpotId; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x8
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x1
  int32_t monitor; // w20
  bool v13; // w8
  System_String_o *result; // x0
  Il2CppObject *v15; // [xsp+0h] [xbp-40h] BYREF
  MapEntity_o *v16; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CC7A02 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_MapMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_4CC7A02 = 1;
  }
  entity = 0;
  v15 = 0;
  v16 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v6);
  if ( !Master_object )
    goto LABEL_23;
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_3408ECC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v9 = entity;
    if ( !entity )
      goto LABEL_23;
    goto LABEL_14;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v11);
  if ( !v10 )
LABEL_23:
    sub_1C71608(SpotId, v8);
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
                            &v15,
                            (int32_t)SpotId,
                            (const MethodInfo_3408ECC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v9 = v15;
    if ( !v15 )
      goto LABEL_23;
LABEL_14:
    monitor = (int32_t)v9[1].monitor;
    goto LABEL_16;
  }
  monitor = 0;
LABEL_16:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SpotId = (MapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_23;
  v13 = MapMaster__TryGetEntity(SpotId, &v16, monitor, warId, 0);
  result = 0;
  if ( v13 )
  {
    SpotId = (MapMaster_o *)v16;
    if ( !v16 )
      goto LABEL_23;
    return MapEntity__GetPrioredBgmName(v16, 0);
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
  Il2CppObject *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x23
  Il2CppObject *v16; // x24
  System_Collections_Generic_List_object__o *v17; // x25
  int max_length; // w8
  unsigned int v19; // w28
  bool v20; // w19
  EventEntity_o *v21; // x8
  int32_t id; // w27
  int32_t v23; // w26
  int64_t v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int klass; // w8
  int32_t v36; // w21
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x8
  int klass_high; // w9
  int v41; // w10
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC7A04 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7A04 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v11 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v13 = DataManager__GetMasterData_object_(
          v11,
          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  v16 = DataManager__GetMasterData_object_(
          v11,
          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_41;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    v20 = !isQuestNoneCleared;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1C71610(Instance);
      v21 = EnabledEventCampaignForQuest->m_Items[v19];
      if ( !v21 || !v13 )
        break;
      id = v21->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData((EventCampaignMaster_o *)v13, id, 0);
      if ( Instance )
      {
        v23 = *(_DWORD *)(Instance + 20);
        v24 = Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v23, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( !v16 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(
                       (EventCampaignReleaseMaster_o *)v16,
                       id,
                       *(_DWORD *)(v24 + 20),
                       0);
          if ( (v23 != 25 || !v20) && (Instance & 1) != 0 && (v23 == 25 || v23 == 12) )
          {
            if ( !v17 )
              break;
            items = v17->fields._items;
            v32 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)v24,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v24;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 4), v24, v25, v26, v27, v28, v29, v30);
            }
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_27;
    }
LABEL_41:
    sub_1C71608(Instance, v10);
  }
LABEL_27:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v17,
                        0);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  klass = 0;
  v45 = v44;
LABEL_29:
  v36 = klass;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_1C71608(v37, v38);
    klass_high = HIDWORD(v45.fields._current[3].klass);
    if ( (klass_high & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_1C71608(v37, v38);
      v41 = HIDWORD(Entity[10].klass);
      if ( v41 == 1 || v41 == 4 )
      {
        if ( klass_high == 3 )
          *fixedVal = (int32_t)v45.fields._current[3].klass;
        klass = (int)current[3].klass;
        if ( v36 )
          klass = klass * v36 / 1000;
        goto LABEL_29;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v36;
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

  if ( (byte_4CC79FB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3332/*"CHAPTER_F_END_ID"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_3333/*"CHAPTER_F_START_ID"*/);
    byte_4CC79FB = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ConstantMaster___);
  v9 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_1C71608(Instance, v7);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3333/*"CHAPTER_F_START_ID"*/, 0) )
  {
    v11 = this->fields.id;
    if ( v11 <= ConstantMaster__GetValue(v9, (System_String_o *)StringLiteral_3332/*"CHAPTER_F_END_ID"*/, 0) )
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


System_String_o *QuestEntity__GetCostValueColor(int32_t costCalcVal, bool isOverCost, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_4CC7A05 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_25231/*"{0}"*/);
    sub_1C713B0(&StringLiteral_9756/*"OVER_COST_COLOR"*/);
    sub_1C713B0(&StringLiteral_3272/*"CAMPAIGN_COST_COLOR"*/);
    byte_4CC7A05 = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_25231/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_7;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_3272/*"CAMPAIGN_COST_COLOR"*/, 0);
  if ( isOverCost )
  {
LABEL_7:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_9756/*"OVER_COST_COLOR"*/, 0);
  }
  return result;
}


int64_t QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t RestTime; // x19

  if ( (byte_4CC79FE & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC79FE = 1;
  }
  RestTime = QuestEntity__GetRestTime(this, is_itvl, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) + RestTime;
}


int32_t QuestEntity__GetMaxPhase(QuestEntity_o *this, const MethodInfo *method)
{
  QuestPhaseEntity_array *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CC79F2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC79F2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (Master_object = QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, this->fields.id, v5)) == 0 )
  {
    sub_1C71608(Master_object, v4);
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
  int32_t MaxPhase; // w21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC79F1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79F1 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    return QuestEntity__GetPhaseDetail_42746880(this, v7, v6);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_19:
    sub_1C71608(Instance, v4);
  v7 = UserQuestEntity__getQuestPhase(entity, 0) + 1;
  if ( ConstantMaster__IsEnableFixGetQuestPhaseDetail(0) )
  {
    MaxPhase = QuestEntity__GetMaxPhase(this, v8);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = System_Math__Min_65553872(v7, MaxPhase, 0);
  }
  return QuestEntity__GetPhaseDetail_42746880(this, v7, v6);
}


QuestPhaseDetailEntity_o *QuestEntity__GetPhaseDetail_42746880(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC79F3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79F3 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0 )
  {
    sub_1C71608(Instance, v6);
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
  int64_t flag; // x8

  if ( (byte_4CC79F0 & 1) == 0 )
  {
    sub_1C713B0(&QuestEntity_TypeInfo);
    byte_4CC79F0 = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v4 = PhaseDetail;
    v5 = (QuestEntity_o *)sub_1C715FC(QuestEntity_TypeInfo);
    QuestEntity___ctor_42745936(v5, this, v6);
    if ( !v5 )
      sub_1C71608(v7, v8);
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


int64_t QuestEntity__GetRestTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  __int64 v10; // x8
  int32_t *p_closedAt; // x10
  bool v12; // cc
  int64_t v13; // x9
  int64_t v14; // x8
  int64_t v15; // x10
  int32_t displayHours; // w8
  int32_t *p_intervalHours; // x10
  int32_t v18; // w10
  __int64 v19; // x11
  int64_t v20; // x8
  bool v21; // vf
  int64_t v22; // x8

  if ( (byte_4CC79FF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79FF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_1C71608(Instance, v7);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0);
  p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  if ( !ReplaceDataByQuestId )
    p_openedAt = &this->fields.openedAt;
  v10 = *p_openedAt;
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  v13 = Time - v10;
  v12 = Time < v10;
  v14 = 0;
  if ( v12 )
    return v14;
  v15 = *p_closedAt;
  if ( Time > v15 )
    return v14;
  if ( !is_itvl )
    return v15 - Time;
  if ( ReplaceDataByQuestId )
  {
    displayHours = ReplaceDataByQuestId->fields.displayHours;
    if ( displayHours )
    {
      p_intervalHours = &ReplaceDataByQuestId->fields.intervalHours;
      goto LABEL_20;
    }
    return 0;
  }
  displayHours = this->fields.displayHours;
  if ( !displayHours )
    return 0;
  p_intervalHours = &this->fields.intervalHours;
LABEL_20:
  v18 = *p_intervalHours;
  if ( !v18 )
    return 0;
  v19 = 3600 * displayHours;
  v20 = v13 % (3600 * v18 + v19);
  v21 = __OFSUB__(v19, v20);
  v22 = v19 - v20;
  if ( v22 < 0 != v21 )
    return 0;
  else
    return v22;
}


int32_t QuestEntity__GetTypeFlag(QuestEntity_o *this, const MethodInfo *method)
{
  return 1 << this->fields.type;
}


int32_t QuestEntity__GetWarId(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *SpotId; // x0
  __int64 v6; // x1
  int32_t v7; // w19
  Il2CppObject *v8; // x8
  Il2CppObject *v10; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7A01 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_4CC7A01 = 1;
  }
  v10 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (Il2CppObject *)QuestEntity__getSpotId(this, v4);
  if ( !Master_object )
    goto LABEL_16;
  v7 = (int)SpotId;
  SpotId = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             &entity,
                             (int32_t)SpotId,
                             (const MethodInfo_3408ECC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v8 = entity;
    if ( !entity )
      goto LABEL_16;
    return HIDWORD(v8[1].klass);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SpotId = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !SpotId )
LABEL_16:
    sub_1C71608(SpotId, v6);
  SpotId = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)SpotId,
                             &v10,
                             v7,
                             (const MethodInfo_3408ECC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v8 = v10;
    if ( !v10 )
      goto LABEL_16;
    return HIDWORD(v8[1].klass);
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
bool QuestEntity__HasFlag_42751420(QuestEntity_o *this, int64_t flag, int32_t phaseCnt, const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail_42746880; // x0

  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail_42746880 = QuestEntity__GetPhaseDetail_42746880(this, phaseCnt, *(const MethodInfo **)&phaseCnt)) == 0 )
  {
    p_flag = &this->fields.flag;
  }
  else
  {
    p_flag = &PhaseDetail_42746880->fields.flag;
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
  QuestPhaseDetailEntity_o *PhaseDetail_42746880; // x0

  PhaseDetail_42746880 = QuestEntity__GetPhaseDetail_42746880(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( PhaseDetail_42746880 )
    LOBYTE(PhaseDetail_42746880) = (PhaseDetail_42746880->fields.flag & flag) != 0;
  return (char)PhaseDetail_42746880;
}


bool QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4CC7A06 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_WarQuestSelectionMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7A06 = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0 )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 7) & 8) == 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_object )
    sub_1C71608(0, v7);
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

  if ( (byte_4CC7A03 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7A03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v5);
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_3408ECC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_14:
    sub_1C71608(Instance, v4);
  return EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0);
}


bool QuestEntity__IsOpenByTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  return QuestEntity__GetRestTime(this, is_itvl, method) > 0;
}


bool QuestEntity__IsPhaseDetailed(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.mIsPhaseDetailed;
}


bool QuestEntity__IsRepeatReward(QuestEntity_o *this, const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x4
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7A07 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7A07 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.id, 1, v5) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C71608(Master_object, v4);
  return QuestPhaseEntity__IsRepeatReward(entity, v4);
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestEntity__getActConsume(QuestEntity_o *this, int32_t cost_calc_val, const MethodInfo *method)
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
  const MethodInfo *v5; // x2
  QuestPhaseDetailEntity_o *PhaseDetail_42746880; // x0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  int32_t QuestBoardSectionId; // w20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  int32_t chapterSubId; // w8
  System_String_o *v22; // x19
  Il2CppObject *v23; // x1
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  int32_t v26; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC79FA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8585/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/);
    sub_1C713B0(&StringLiteral_8584/*"MATERIAL_MAP_CHAPTER_SUB"*/);
    byte_4CC79FA = 1;
  }
  entity = 0;
  if ( !System_String__IsNullOrEmpty(this->fields.chapterSubStr, 0) )
    return this->fields.chapterSubStr;
  PhaseDetail_42746880 = QuestEntity__GetPhaseDetail_42746880(this, 1, v5);
  if ( PhaseDetail_42746880 )
  {
    if ( (PhaseDetail_42746880->fields.flag & 0x2000000000000000LL) != 0 )
      return this->fields.chapterSubStr;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    sub_1C71608(0, v8);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    warId,
    (const MethodInfo_3408ECC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( entity )
    QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)entity, 0);
  else
    QuestBoardSectionId = 0;
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v9)) == 0 )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 2) & 4) != 0
    || entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal((WarEntity_o *)entity, 0) )
  {
    if ( QuestBoardSectionId )
    {
      v26 = QuestBoardSectionId;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v15 = System_String__Format((System_String_o *)StringLiteral_8585/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v14, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = v15;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = (System_String_o *)StringLiteral_8584/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v20 = LocalizationManager__Get(v16, 0);
    chapterSubId = this->fields.chapterSubId;
    v22 = v20;
    v23 = (Il2CppObject *)LocalizationManager__ChineseNumber(chapterSubId, 0);
    v24 = v22;
  }
  else
  {
    if ( QuestBoardSectionId )
    {
      v26 = QuestBoardSectionId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v18 = System_String__Format((System_String_o *)StringLiteral_8585/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v17, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = v18;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = (System_String_o *)StringLiteral_8584/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v25 = LocalizationManager__Get(v19, 0);
    v23 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0);
    v24 = v25;
  }
  return System_String__Format(v24, v23, 0);
}


int32_t QuestEntity__getCharaIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId;
}


int64_t QuestEntity__getClosedAt(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_4CC79FD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0);
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  return *p_closedAt;
}


int32_t QuestEntity__getDisplayHours(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_displayHours; // x8

  if ( (byte_4CC79F8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0);
  p_displayHours = &this->fields.displayHours;
  if ( ReplaceDataByQuestId )
    p_displayHours = &ReplaceDataByQuestId->fields.displayHours;
  return *p_displayHours;
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
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_4CC79F9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0);
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

  if ( (byte_4CC7A00 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7A00 = 1;
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
  result = (QuestConsumeItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)result,
                                         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                         this->fields.id,
                                         (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
  if ( isNotItemConsume )
  {
    if ( result )
      return QuestConsumeItemEntity__GetNotConsumeItemEntity(result, v10);
LABEL_20:
    sub_1C71608(result, v10);
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
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_4CC79FC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  return *p_openedAt;
}


int32_t QuestEntity__getPriority(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CC79F7 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4CC79F7 = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
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
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  System_String_o **p_name; // x8

  if ( (byte_4CC79F4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, 0);
  p_name = &this->fields.name;
  if ( ReplaceDataByQuestId )
    p_name = &ReplaceDataByQuestId->fields.name;
  return *p_name;
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


System_String_o *QuestEntity__getRecommendLv_42750548(QuestEntity_o *this, int32_t phaseCnt, const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_42746880; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_42746880 = QuestEntity__GetPhaseDetail_42746880(this, phaseCnt, method);
  if ( !PhaseDetail_42746880
    || (p_recommendLv = &PhaseDetail_42746880->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_42746880->fields.recommendLv, 0)) )
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
  const MethodInfo *v5; // x2
  int32_t result; // w0
  const MethodInfo *v7; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4CC79F5 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, v5);
  if ( !result )
  {
    if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v7)) == 0 )
      p_spotId = &this->fields.spotId;
    else
      p_spotId = &PhaseDetail->fields.spotId;
    return *p_spotId;
  }
  return result;
}


int32_t QuestEntity__getSpotId_42748644(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t result; // w0
  const MethodInfo *v9; // x4
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC79F6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC79F6 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, v7);
  if ( result )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)QuestPhaseDetailMaster__TryGetEntity(
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
    sub_1C71608(Instance, v6);
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