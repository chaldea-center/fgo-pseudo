void __fastcall QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7F33 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC7F33 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void __fastcall QuestEntity___ctor_40686940(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *name; // x1
  struct System_String_o *nameRuby; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_String_array *beforeActionVals; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_array *afterActionVals; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_o *chapterSubStr; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_String_o *recommendLv; // x1
  struct System_String_o **p_recommendLv; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4BC7F34 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4BC7F34 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C1AE30(v5, v6);
  this->fields.id = cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)name, v7, v8, v9, v10, v11, v12);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.nameRuby, (int64_t)nameRuby, v15, v16, v17, v18, v19, v20);
  *(_OWORD *)&this->fields.type = *(_OWORD *)&cSrc->fields.type;
  *(_OWORD *)&this->fields.priority = *(_OWORD *)&cSrc->fields.priority;
  *(_OWORD *)&this->fields.charaIconId = *(_OWORD *)&cSrc->fields.charaIconId;
  beforeActionVals = cSrc->fields.beforeActionVals;
  this->fields.beforeActionVals = beforeActionVals;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.beforeActionVals,
    (int64_t)beforeActionVals,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  afterActionVals = cSrc->fields.afterActionVals;
  this->fields.afterActionVals = afterActionVals;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.afterActionVals,
    (int64_t)afterActionVals,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_OWORD *)&this->fields.displayHours = *(_OWORD *)&cSrc->fields.displayHours;
  chapterSubStr = cSrc->fields.chapterSubStr;
  this->fields.chapterSubStr = chapterSubStr;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.chapterSubStr,
    (int64_t)chapterSubStr,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  recommendLv = cSrc->fields.recommendLv;
  this->fields.recommendLv = recommendLv;
  p_recommendLv = &this->fields.recommendLv;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_recommendLv, (int64_t)recommendLv, v44, v45, v46, v47, v48, v49);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestEntity__GetBgmName(QuestEntity_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v11; // x1
  MapMaster_o *SpotId; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x8
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x1
  int32_t monitor; // w20
  bool v18; // w8
  System_String_o *result; // x0
  Il2CppObject *v20; // [xsp+0h] [xbp-40h] BYREF
  MapEntity_o *v21; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BC7F47 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&warId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_MapMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMaster_SpotMaster___, v6);
    sub_1C1ABD4(&DataManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v8);
    sub_1C1ABD4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v9);
    byte_4BC7F47 = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v11);
  if ( !Master_object )
    goto LABEL_23;
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_32486C4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v14 = entity;
    if ( !entity )
      goto LABEL_23;
    goto LABEL_14;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v16);
  if ( !v15 )
LABEL_23:
    sub_1C1AE30(SpotId, v13);
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                            &v20,
                            (int32_t)SpotId,
                            (const MethodInfo_32486C4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v14 = v20;
    if ( !v20 )
      goto LABEL_23;
LABEL_14:
    monitor = (int32_t)v14[1].monitor;
    goto LABEL_16;
  }
  monitor = 0;
LABEL_16:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SpotId = (MapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_23;
  v18 = MapMaster__TryGetEntity(SpotId, &v21, monitor, warId, 0LL);
  result = 0LL;
  if ( v18 )
  {
    SpotId = (MapMaster_o *)v21;
    if ( !v21 )
      goto LABEL_23;
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
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v26; // x21
  Il2CppObject *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x24
  Il2CppObject *v29; // x25
  System_Collections_Generic_List_object__o *v30; // x23
  int max_length; // w8
  unsigned int v32; // w28
  bool v33; // w19
  EventEntity_o *v34; // x8
  int32_t id; // w27
  int32_t v36; // w26
  int64_t v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  int klass; // w8
  int32_t v49; // w21
  _BOOL8 v50; // x0
  __int64 v51; // x1
  Il2CppObject *current; // x8
  int klass_high; // w9
  int v54; // w10
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC7F49 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventQuestMaster___, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v20);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4BC7F49 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v24 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v26 = DataManager__GetMasterData_object_(
          v24,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v24,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
  v29 = DataManager__GetMasterData_object_(
          v24,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_41;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    v33 = !isQuestNoneCleared;
    while ( 1 )
    {
      if ( v32 >= max_length )
        sub_1C1AE38(Instance, v23);
      v34 = EnabledEventCampaignForQuest->m_Items[v32];
      if ( !v34 || !v26 )
        break;
      id = v34->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData((EventCampaignMaster_o *)v26, id, 0LL);
      if ( Instance )
      {
        v36 = *(_DWORD *)(Instance + 20);
        v37 = Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v36, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v29 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(
                       (EventCampaignReleaseMaster_o *)v29,
                       id,
                       *(_DWORD *)(v37 + 20),
                       0LL);
          if ( (v36 != 25 || !v33) && (Instance & 1) != 0 && (v36 == 25 || v36 == 12) )
          {
            if ( !v30 )
              break;
            items = v30->fields._items;
            v45 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v30->fields._version;
            if ( !items )
              break;
            size = v30->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                (Il2CppObject *)v37,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v37;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v47 + 4), v37, v38, v39, v40, v41, v42, v43);
            }
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_27;
    }
LABEL_41:
    sub_1C1AE30(Instance, v23);
  }
LABEL_27:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v30,
                        0LL);
  if ( !v30 )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v30,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  klass = 0;
  v58 = v57;
LABEL_29:
  v49 = klass;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v50 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_1C1AE30(v50, v51);
    klass_high = HIDWORD(v58.fields._current[3].klass);
    if ( (klass_high & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_1C1AE30(v50, v51);
      v54 = HIDWORD(Entity[10].klass);
      if ( v54 == 1 || v54 == 4 )
      {
        if ( klass_high == 3 )
          *fixedVal = (int32_t)v58.fields._current[3].klass;
        klass = (int)current[3].klass;
        if ( v49 )
          klass = klass * v49 / 1000;
        goto LABEL_29;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v49;
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  ConstantMaster_o *v13; // x22
  int32_t id; // w23
  int32_t v15; // w23

  if ( (byte_4BC7F40 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&warId);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C1ABD4(&StringLiteral_3488/*"CHAPTER_F_END_ID"*/, v6);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v7);
    sub_1C1ABD4(&StringLiteral_3489/*"CHAPTER_F_START_ID"*/, v8);
    byte_4BC7F40 = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ConstantMaster___);
  v13 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_1C1AE30(Instance, v11);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3489/*"CHAPTER_F_START_ID"*/, 0LL) )
  {
    v15 = this->fields.id;
    if ( v15 <= ConstantMaster__GetValue(v13, (System_String_o *)StringLiteral_3488/*"CHAPTER_F_END_ID"*/, 0LL) )
LABEL_10:
      ChapterSubStr = QuestEntity__getChapterSubStr(this, warId, v12);
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

  if ( (byte_4BC7F4A & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, isOverCost);
    sub_1C1ABD4(&StringLiteral_25405/*"{0}"*/, v5);
    sub_1C1ABD4(&StringLiteral_9936/*"OVER_COST_COLOR"*/, v6);
    sub_1C1ABD4(&StringLiteral_3435/*"CAMPAIGN_COST_COLOR"*/, v7);
    byte_4BC7F4A = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_25405/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_7;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_3435/*"CAMPAIGN_COST_COLOR"*/, 0LL);
  if ( isOverCost )
  {
LABEL_7:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_9936/*"OVER_COST_COLOR"*/, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  int64_t RestTime; // x19

  if ( (byte_4BC7F43 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, is_itvl);
    byte_4BC7F43 = 1;
  }
  RestTime = QuestEntity__GetRestTime(this, is_itvl, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) + RestTime;
}


int32_t __fastcall QuestEntity__GetMaxPhase(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  QuestPhaseEntity_array *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BC7F37 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestPhaseMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC7F37 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (Master_object = QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, this->fields.id, v6)) == 0LL )
  {
    sub_1C1AE30(Master_object, v5);
  }
  return Master_object->max_length;
}


QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v9; // x2
  int v10; // w20
  const MethodInfo *v11; // x1
  int32_t MaxPhase; // w21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7F36 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1C1ABD4(&System_Math_TypeInfo, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC7F36 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    byte_4BC2585 = 1;
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
          0LL) )
  {
    v10 = 1;
    return QuestEntity__GetPhaseDetail_40687884(this, v10, v9);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_19:
    sub_1C1AE30(Instance, v7);
  v10 = UserQuestEntity__getQuestPhase(entity, 0LL) + 1;
  if ( ConstantMaster__IsEnableFixGetQuestPhaseDetail(0LL) )
  {
    MaxPhase = QuestEntity__GetMaxPhase(this, v11);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v10 = System_Math__Min_63859840(v10, MaxPhase, 0LL);
  }
  return QuestEntity__GetPhaseDetail_40687884(this, v10, v9);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail_40687884(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7F38 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, *(_QWORD *)&phaseCnt);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC7F38 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v7);
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

  if ( (byte_4BC7F35 & 1) == 0 )
  {
    sub_1C1ABD4(&QuestEntity_TypeInfo, method);
    byte_4BC7F35 = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v4 = PhaseDetail;
    v5 = (QuestEntity_o *)sub_1C1AE20(QuestEntity_TypeInfo);
    QuestEntity___ctor_40686940(v5, this, v6);
    if ( !v5 )
      sub_1C1AE30(v7, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  __int64 v13; // x8
  int32_t *p_closedAt; // x10
  bool v15; // cc
  int64_t v16; // x9
  int64_t v17; // x8
  int64_t v18; // x10
  int32_t displayHours; // w8
  int32_t *p_intervalHours; // x10
  int32_t v21; // w10
  __int64 v22; // x11
  int64_t v23; // x8
  bool v24; // vf
  int64_t v25; // x8

  if ( (byte_4BC7F44 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestAddMaster___, is_itvl);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC7F44 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v9);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v10);
  p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  if ( !ReplaceDataByQuestId )
    p_openedAt = &this->fields.openedAt;
  v13 = *p_openedAt;
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  v16 = Time - v13;
  v15 = Time < v13;
  v17 = 0LL;
  if ( v15 )
    return v17;
  v18 = *p_closedAt;
  if ( Time > v18 )
    return v17;
  if ( !is_itvl )
    return v18 - Time;
  if ( ReplaceDataByQuestId )
  {
    displayHours = ReplaceDataByQuestId->fields.displayHours;
    if ( displayHours )
    {
      p_intervalHours = &ReplaceDataByQuestId->fields.intervalHours;
      goto LABEL_20;
    }
    return 0LL;
  }
  displayHours = this->fields.displayHours;
  if ( !displayHours )
    return 0LL;
  p_intervalHours = &this->fields.intervalHours;
LABEL_20:
  v21 = *p_intervalHours;
  if ( !v21 )
    return 0LL;
  v22 = 3600 * displayHours;
  v23 = v16 % (3600 * v21 + v22);
  v24 = __OFSUB__(v22, v23);
  v25 = v22 - v23;
  if ( v25 < 0 != v24 )
    return 0LL;
  else
    return v25;
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
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  int monitor; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *v12; // [xsp+10h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BC7F46 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_MapMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_1C1ABD4(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC7F46 = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  monitor = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.spotId,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !entity )
      goto LABEL_14;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    monitor = (int)entity[1].monitor;
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( !v9 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                  v9,
                                  &v12,
                                  (Il2CppObject *)Instance,
                                  (const MethodInfo_324D17C *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v12 )
        return HIDWORD(v12[1].klass);
LABEL_14:
      sub_1C1AE30(Instance, v8);
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
bool __fastcall QuestEntity__HasFlag_40692060(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail_40687884; // x0

  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail_40687884 = QuestEntity__GetPhaseDetail_40687884(this, phaseCnt, *(const MethodInfo **)&phaseCnt)) == 0LL )
  {
    p_flag = &this->fields.flag;
  }
  else
  {
    p_flag = &PhaseDetail_40687884->fields.flag;
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
  QuestPhaseDetailEntity_o *PhaseDetail_40687884; // x0

  PhaseDetail_40687884 = QuestEntity__GetPhaseDetail_40687884(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( PhaseDetail_40687884 )
    LOBYTE(PhaseDetail_40687884) = (PhaseDetail_40687884->fields.flag & flag) != 0;
  return (char)PhaseDetail_40687884;
}


bool __fastcall QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4BC7F4B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarQuestSelectionMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC7F4B = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 7) & 8) == 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t GroupId; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7F48 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC7F48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v8);
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_32486C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_14:
    sub_1C1AE30(Instance, v7);
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
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x4
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7F4C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestPhaseMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC7F4C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.id, 1, v6) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C1AE30(Master_object, v5);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  QuestPhaseDetailEntity_o *PhaseDetail_40687884; // x0
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int32_t QuestBoardSectionId; // w20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *v23; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x0
  Il2CppObject *v26; // x0
  System_String_o *v27; // x20
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  int32_t chapterSubId; // w8
  System_String_o *v31; // x19
  Il2CppObject *v32; // x1
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  int32_t v35; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7F3F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarMaster___, *(_QWORD *)&warId);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v6);
    sub_1C1ABD4(&int_TypeInfo, v7);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_8730/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v9);
    sub_1C1ABD4(&StringLiteral_8729/*"MATERIAL_MAP_CHAPTER_SUB"*/, v10);
    byte_4BC7F3F = 1;
  }
  entity = 0LL;
  if ( !System_String__IsNullOrEmpty(this->fields.chapterSubStr, 0LL) )
    return this->fields.chapterSubStr;
  PhaseDetail_40687884 = QuestEntity__GetPhaseDetail_40687884(this, 1, v11);
  if ( PhaseDetail_40687884 )
  {
    if ( (PhaseDetail_40687884->fields.flag & 0x2000000000000000LL) != 0 )
      return this->fields.chapterSubStr;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v14);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    warId,
    (const MethodInfo_32486C4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( entity )
    QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)entity, 0LL);
  else
    QuestBoardSectionId = 0;
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v15)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 2) & 4) != 0
    || entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal((WarEntity_o *)entity, 0LL) )
  {
    if ( QuestBoardSectionId )
    {
      v35 = QuestBoardSectionId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v16, v17, v18);
      v24 = System_String__Format((System_String_o *)StringLiteral_8730/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v23, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = v24;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = (System_String_o *)StringLiteral_8729/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v29 = LocalizationManager__Get(v25, 0LL);
    chapterSubId = this->fields.chapterSubId;
    v31 = v29;
    v32 = (Il2CppObject *)LocalizationManager__ChineseNumber(chapterSubId, 0LL);
    v33 = v31;
  }
  else
  {
    if ( QuestBoardSectionId )
    {
      v35 = QuestBoardSectionId;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v16, v17, v18);
      v27 = System_String__Format((System_String_o *)StringLiteral_8730/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v26, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = v27;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = (System_String_o *)StringLiteral_8729/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v34 = LocalizationManager__Get(v28, 0LL);
    v32 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
    v33 = v34;
  }
  return System_String__Format(v33, v32, 0LL);
}


int32_t __fastcall QuestEntity__getCharaIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId;
}


int64_t __fastcall QuestEntity__getClosedAt(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_4BC7F42 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC7F42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v6);
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  return *p_closedAt;
}


int32_t __fastcall QuestEntity__getDisplayHours(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_displayHours; // x8

  if ( (byte_4BC7F3D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC7F3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v6);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_4BC7F3E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC7F3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v6);
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
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  int32_t *v9; // x8
  QuestPhaseDetailEntity_o *v10; // x0
  QuestConsumeItemEntity_o *result; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BC7F45 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, isNotItemConsume);
    sub_1C1ABD4(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC7F45 = 1;
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
      || (v10 = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)isNotItemConsume)) == 0LL )
    {
      v9 = &this->fields.consumeType;
    }
    else
    {
      v9 = &v10->fields.consumeType;
    }
    if ( *v9 != 4 )
      return 0LL;
  }
  result = (QuestConsumeItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)result,
                                         (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                         this->fields.id,
                                         (const MethodInfo_3248678 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
  if ( isNotItemConsume )
  {
    if ( result )
      return QuestConsumeItemEntity__GetNotConsumeItemEntity(result, v12);
LABEL_20:
    sub_1C1AE30(result, v12);
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_4BC7F41 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC7F41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v6);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  return *p_openedAt;
}


int32_t __fastcall QuestEntity__getPriority(QuestEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC7F3C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    byte_4BC7F3C = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  System_String_o **p_name; // x8

  if ( (byte_4BC7F39 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC7F39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v6);
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


System_String_o *__fastcall QuestEntity__getRecommendLv_40691200(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_40687884; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_40687884 = QuestEntity__GetPhaseDetail_40687884(this, phaseCnt, method);
  if ( !PhaseDetail_40687884
    || (p_recommendLv = &PhaseDetail_40687884->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_40687884->fields.recommendLv, 0LL)) )
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t result; // w0
  const MethodInfo *v7; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4BC7F3A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC7F3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
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
int32_t __fastcall QuestEntity__getSpotId_40689300(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t result; // w0
  const MethodInfo *v10; // x4
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7F3B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, *(_QWORD *)&phase);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC7F3B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( result )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)QuestPhaseDetailMaster__TryGetEntity(
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
    sub_1C1AE30(Instance, v8);
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