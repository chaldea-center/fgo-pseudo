void __fastcall QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B5AA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B5AA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void __fastcall QuestEntity___ctor_39468536(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *name; // x1
  struct System_String_o *nameRuby; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_array *beforeActionVals; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_String_array *afterActionVals; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_String_o *chapterSubStr; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_String_o *recommendLv; // x1
  struct System_String_o **p_recommendLv; // x20
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A5B5AB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B5AB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1B8880C(v5, v6);
  this->fields.id = cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nameRuby, (int32_t)nameRuby, v11, v12);
  *(_OWORD *)&this->fields.type = *(_OWORD *)&cSrc->fields.type;
  *(_OWORD *)&this->fields.priority = *(_OWORD *)&cSrc->fields.priority;
  *(_OWORD *)&this->fields.charaIconId = *(_OWORD *)&cSrc->fields.charaIconId;
  beforeActionVals = cSrc->fields.beforeActionVals;
  this->fields.beforeActionVals = beforeActionVals;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.beforeActionVals, (int32_t)beforeActionVals, v14, v15);
  afterActionVals = cSrc->fields.afterActionVals;
  this->fields.afterActionVals = afterActionVals;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterActionVals, (int32_t)afterActionVals, v17, v18);
  *(_OWORD *)&this->fields.displayHours = *(_OWORD *)&cSrc->fields.displayHours;
  chapterSubStr = cSrc->fields.chapterSubStr;
  this->fields.chapterSubStr = chapterSubStr;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.chapterSubStr, (int32_t)chapterSubStr, v20, v21);
  recommendLv = cSrc->fields.recommendLv;
  this->fields.recommendLv = recommendLv;
  p_recommendLv = &this->fields.recommendLv;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_recommendLv, (int32_t)recommendLv, v24, v25);
  *((_DWORD *)p_recommendLv + 2) = cSrc->fields.hasStartAction;
  p_recommendLv[2] = (struct System_String_o *)cSrc->fields.flag;
  *(_OWORD *)(p_recommendLv + 3) = *(_OWORD *)&cSrc->fields.noticeAt;
  *((_DWORD *)p_recommendLv + 10) = cSrc->fields.scriptQuestId;
  *((_BYTE *)p_recommendLv + 44) = cSrc->fields.mIsPhaseDetailed;
  *((_BYTE *)p_recommendLv + 45) = cSrc->fields.mIsQuestSpotRelease;
}


int32_t __fastcall QuestEntity__CreatePrimaryKey(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall QuestEntity__GetBgmName(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
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

  if ( (byte_4A5B5BD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_MapMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_4A5B5BD = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v6);
  if ( !Master_object )
    goto LABEL_23;
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_311D988 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v9 = entity;
    if ( !entity )
      goto LABEL_23;
    goto LABEL_14;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v11);
  if ( !v10 )
LABEL_23:
    sub_1B8880C(SpotId, v8);
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
                            &v15,
                            (int32_t)SpotId,
                            (const MethodInfo_311D988 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
  SpotId = (MapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_23;
  v13 = MapMaster__TryGetEntity(SpotId, &v16, monitor, warId, 0LL);
  result = 0LL;
  if ( v13 )
  {
    SpotId = (MapMaster_o *)v16;
    if ( !v16 )
      goto LABEL_23;
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
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v13; // x21
  Il2CppObject *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x24
  Il2CppObject *v16; // x25
  System_Collections_Generic_List_object__o *v17; // x23
  int max_length; // w8
  unsigned int v19; // w28
  bool v20; // w19
  EventEntity_o *v21; // x8
  int32_t id; // w27
  int32_t v23; // w26
  int64_t v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int klass; // w8
  int32_t v32; // w21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x8
  int klass_high; // w9
  int v37; // w10
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B5BF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5BF = 1;
  }
  memset(&v41, 0, sizeof(v41));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v11 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v13 = DataManager__GetMasterData_object_(
          v11,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_object )
    goto LABEL_41;
  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                   (EventQuestMaster_o *)MasterData_object,
                                   questId,
                                   phase,
                                   Instance,
                                   7,
                                   0LL);
  v16 = DataManager__GetMasterData_object_(
          v11,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
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
        sub_1B88814(Instance, v10);
      v21 = EnabledEventCampaignForQuest->m_Items[v19];
      if ( !v21 || !v13 )
        break;
      id = v21->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData((EventCampaignMaster_o *)v13, id, 0LL);
      if ( Instance )
      {
        v23 = *(_DWORD *)(Instance + 20);
        v24 = Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v23, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v16 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(
                       (EventCampaignReleaseMaster_o *)v16,
                       id,
                       *(_DWORD *)(v24 + 20),
                       0LL);
          if ( (v23 != 25 || !v20) && (Instance & 1) != 0 && (v23 == 25 || v23 == 12) )
          {
            if ( !v17 )
              break;
            items = v17->fields._items;
            v28 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)v24,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), v24, v25, v26);
            }
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_27;
    }
LABEL_41:
    sub_1B8880C(Instance, v10);
  }
LABEL_27:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v17,
                        0LL);
  if ( !v17 )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v17,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  klass = 0;
  v41 = v40;
LABEL_29:
  v32 = klass;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v33 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1B8880C(v33, v34);
    klass_high = HIDWORD(v41.fields._current[3].klass);
    if ( (klass_high & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_1B8880C(v33, v34);
      v37 = HIDWORD(Entity[10].klass);
      if ( v37 == 1 || v37 == 4 )
      {
        if ( klass_high == 3 )
          *fixedVal = (int32_t)v41.fields._current[3].klass;
        klass = (int)current[3].klass;
        if ( v32 )
          klass = klass * v32 / 1000;
        goto LABEL_29;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v32;
}


System_String_o *__fastcall QuestEntity__GetChapterSubTitle(
        QuestEntity_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *ChapterSubStr; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ConstantMaster_o *v9; // x22
  int32_t id; // w23
  int32_t v11; // w23

  if ( (byte_4A5B5B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3448/*"CHAPTER_F_END_ID"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_3449/*"CHAPTER_F_START_ID"*/);
    byte_4A5B5B6 = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantMaster___);
  v9 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_1B8880C(Instance, v7);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3449/*"CHAPTER_F_START_ID"*/, 0LL) )
  {
    v11 = this->fields.id;
    if ( v11 <= ConstantMaster__GetValue(v9, (System_String_o *)StringLiteral_3448/*"CHAPTER_F_END_ID"*/, 0LL) )
LABEL_10:
      ChapterSubStr = QuestEntity__getChapterSubStr(this, warId, v8);
  }
  if ( System_String__IsNullOrWhiteSpace(ChapterSubStr, 0LL) )
    return this->fields.name;
  return ChapterSubStr;
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

  if ( (byte_4A5B5C0 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_9749/*"OVER_COST_COLOR"*/);
    sub_1B885B0(&StringLiteral_3395/*"CAMPAIGN_COST_COLOR"*/);
    byte_4A5B5C0 = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_24983/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_7;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_3395/*"CAMPAIGN_COST_COLOR"*/, 0LL);
  if ( isOverCost )
  {
LABEL_7:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_9749/*"OVER_COST_COLOR"*/, 0LL);
  }
  return result;
}


int64_t __fastcall QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t RestTime; // x19

  if ( (byte_4A5B5B9 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B5B9 = 1;
  }
  RestTime = QuestEntity__GetRestTime(this, is_itvl, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) + RestTime;
}


QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail(QuestEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B5AD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5AD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( !UserQuestMaster__TryGetEntity(
          (UserQuestMaster_o *)MasterData_object,
          &entity,
          (int64_t)Instance,
          this->fields.id,
          0LL) )
  {
    v7 = 1;
    return QuestEntity__GetPhaseDetail_39469212(this, v7, v6);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1B8880C(Instance, v4);
  v7 = UserQuestEntity__getQuestPhase(entity, 0LL) + 1;
  return QuestEntity__GetPhaseDetail_39469212(this, v7, v6);
}


QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail_39469212(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B5AE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5AE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  QuestPhaseDetailMaster__TryGetEntity((QuestPhaseDetailMaster_o *)Instance, &entity, this->fields.id, phaseCnt, v7);
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

  if ( (byte_4A5B5AC & 1) == 0 )
  {
    sub_1B885B0(&QuestEntity_TypeInfo);
    byte_4A5B5AC = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v4 = PhaseDetail;
    v5 = (QuestEntity_o *)sub_1B887FC(QuestEntity_TypeInfo);
    QuestEntity___ctor_39468536(v5, this, v6);
    if ( !v5 )
      sub_1B8880C(v7, v8);
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
  bool v18; // vf
  int64_t v19; // x8

  if ( (byte_4A5B5BA & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B5BA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      v18 = __OFSUB__(v13, v17);
      v19 = v13 - v17;
      if ( v19 < 0 != v18 )
        return 0LL;
      else
        return v19;
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
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  int monitor; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *v8; // [xsp+10h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5B5BC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5BC = 1;
  }
  v8 = 0LL;
  entity = 0LL;
  monitor = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.spotId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !entity )
      goto LABEL_14;
    v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    monitor = (int)entity[1].monitor;
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( !v5 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                  v5,
                                  &v8,
                                  (Il2CppObject *)Instance,
                                  (const MethodInfo_311DCDC *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v8 )
        return HIDWORD(v8[1].klass);
LABEL_14:
      sub_1B8880C(Instance, v4);
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
bool __fastcall QuestEntity__HasFlag_39473080(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail_39469212; // x0

  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail_39469212 = QuestEntity__GetPhaseDetail_39469212(this, phaseCnt, *(const MethodInfo **)&phaseCnt)) == 0LL )
  {
    p_flag = &this->fields.flag;
  }
  else
  {
    p_flag = &PhaseDetail_39469212->fields.flag;
  }
  return (*p_flag & flag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestEntity__HasQuestPhaseDetailFlag(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_39469212; // x0

  PhaseDetail_39469212 = QuestEntity__GetPhaseDetail_39469212(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( PhaseDetail_39469212 )
    LOBYTE(PhaseDetail_39469212) = (PhaseDetail_39469212->fields.flag & flag) != 0;
  return (char)PhaseDetail_39469212;
}


bool __fastcall QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4A5B5C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarQuestSelectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B5C1 = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 7) & 8) == 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v7);
  return WarQuestSelectionMaster__IsActiveRegisteredQuest(
           (WarQuestSelectionMaster_o *)Master_object,
           this->fields.id,
           0LL);
}


bool __fastcall QuestEntity__IsDefaultActConsumeAp(QuestEntity_o *this, int32_t cost, const MethodInfo *method)
{
  return this->fields.actConsume == cost;
}


bool __fastcall QuestEntity__IsNeedUseEventQuestSupport(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t GroupId; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B5BE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v5);
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_14:
    sub_1B8880C(Instance, v4);
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
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x4
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B5C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B5C2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.id, 1, v5) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1B8880C(Master_object, v4);
  return QuestPhaseEntity__IsRepeatReward(entity, v4);
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
  const MethodInfo *v5; // x2
  QuestPhaseDetailEntity_o *PhaseDetail_39469212; // x0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  int32_t QuestBoardSectionId; // w20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  int32_t chapterSubId; // w8
  System_String_o *v25; // x19
  Il2CppObject *v26; // x1
  System_String_o *v27; // x0
  System_String_o *v28; // x20
  int32_t v29; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B5B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8556/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/);
    sub_1B885B0(&StringLiteral_8555/*"MATERIAL_MAP_CHAPTER_SUB"*/);
    byte_4A5B5B5 = 1;
  }
  entity = 0LL;
  if ( !System_String__IsNullOrEmpty(this->fields.chapterSubStr, 0LL) )
    return this->fields.chapterSubStr;
  PhaseDetail_39469212 = QuestEntity__GetPhaseDetail_39469212(this, 1, v5);
  if ( PhaseDetail_39469212 )
  {
    if ( (PhaseDetail_39469212->fields.flag & 0x2000000000000000LL) != 0 )
      return this->fields.chapterSubStr;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v8);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    warId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( entity )
    QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)entity, 0LL);
  else
    QuestBoardSectionId = 0;
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v9)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 2) & 4) != 0
    || entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal((WarEntity_o *)entity, 0LL) )
  {
    if ( QuestBoardSectionId )
    {
      v29 = QuestBoardSectionId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v10, v11, v12);
      v18 = System_String__Format((System_String_o *)StringLiteral_8556/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v17, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = v18;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = (System_String_o *)StringLiteral_8555/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v23 = LocalizationManager__Get(v19, 0LL);
    chapterSubId = this->fields.chapterSubId;
    v25 = v23;
    v26 = (Il2CppObject *)LocalizationManager__ChineseNumber(chapterSubId, 0LL);
    v27 = v25;
  }
  else
  {
    if ( QuestBoardSectionId )
    {
      v29 = QuestBoardSectionId;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v10, v11, v12);
      v21 = System_String__Format((System_String_o *)StringLiteral_8556/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v20, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = v21;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = (System_String_o *)StringLiteral_8555/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v28 = LocalizationManager__Get(v22, 0LL);
    v26 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
    v27 = v28;
  }
  return System_String__Format(v27, v26, 0LL);
}


int32_t __fastcall QuestEntity__getCharaIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId;
}


int64_t __fastcall QuestEntity__getClosedAt(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_4A5B5B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  return *p_closedAt;
}


int32_t __fastcall QuestEntity__getDisplayHours(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_displayHours; // x8

  if ( (byte_4A5B5B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_4A5B5B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
  p_intervalHours = &this->fields.intervalHours;
  if ( ReplaceDataByQuestId )
    p_intervalHours = &ReplaceDataByQuestId->fields.intervalHours;
  return *p_intervalHours;
}


// local variable allocation has failed, the output may be wrong!
QuestConsumeItemEntity_o *__fastcall QuestEntity__getItemConsumeEntity(
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

  if ( (byte_4A5B5BB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5BB = 1;
  }
  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)isNotItemConsume)) == 0LL )
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
      || (v8 = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)isNotItemConsume)) == 0LL )
    {
      v7 = &this->fields.consumeType;
    }
    else
    {
      v7 = &v8->fields.consumeType;
    }
    if ( *v7 != 4 )
      return 0LL;
  }
  result = (QuestConsumeItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)result,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                         this->fields.id,
                                         (const MethodInfo_311D934 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
  if ( isNotItemConsume )
  {
    if ( result )
      return QuestConsumeItemEntity__GetNotConsumeItemEntity(result, v10);
LABEL_20:
    sub_1B8880C(result, v10);
  }
  return result;
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_4A5B5B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  return *p_openedAt;
}


int32_t __fastcall QuestEntity__getPriority(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5B5B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A5B5B2 = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, this->fields.id, 0, 0LL) )
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  System_String_o **p_name; // x8

  if ( (byte_4A5B5AF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v5);
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


System_String_o *__fastcall QuestEntity__getRecommendLv_39472304(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_39469212; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_39469212 = QuestEntity__GetPhaseDetail_39469212(this, phaseCnt, method);
  if ( !PhaseDetail_39469212
    || (p_recommendLv = &PhaseDetail_39469212->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_39469212->fields.recommendLv, 0LL)) )
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int32_t result; // w0
  const MethodInfo *v7; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4A5B5B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, v5);
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


int32_t __fastcall QuestEntity__getSpotId_39470408(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t result; // w0
  const MethodInfo *v9; // x4
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B5B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5B1 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, v7);
  if ( result )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
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
    sub_1B8880C(Instance, v6);
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