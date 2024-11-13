void __fastcall QuestEntity___ctor(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16656 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16656 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  *(_WORD *)&this->fields.mIsPhaseDetailed = 0;
}


void __fastcall QuestEntity___ctor_40195384(QuestEntity_o *this, QuestEntity_o *cSrc, const MethodInfo *method)
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

  if ( (byte_4B16657 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, cSrc, method);
    byte_4B16657 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v5, v6);
  this->fields.id = cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)name, v7, v8, v9, v10, v11, v12);
  nameRuby = cSrc->fields.nameRuby;
  this->fields.nameRuby = nameRuby;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nameRuby, (int64_t)nameRuby, v15, v16, v17, v18, v19, v20);
  *(_OWORD *)&this->fields.type = *(_OWORD *)&cSrc->fields.type;
  *(_OWORD *)&this->fields.priority = *(_OWORD *)&cSrc->fields.priority;
  *(_OWORD *)&this->fields.charaIconId = *(_OWORD *)&cSrc->fields.charaIconId;
  beforeActionVals = cSrc->fields.beforeActionVals;
  this->fields.beforeActionVals = beforeActionVals;
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)p_recommendLv, (int64_t)recommendLv, v44, v45, v46, v47, v48, v49);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Master_object; // x21
  const MethodInfo *v16; // x1
  MapMaster_o *SpotId; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x8
  Il2CppObject *v20; // x21
  const MethodInfo *v21; // x1
  int32_t monitor; // w20
  bool v23; // w8
  System_String_o *result; // x0
  Il2CppObject *v25; // [xsp+0h] [xbp-40h] BYREF
  MapEntity_o *v26; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B16669 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v13, v14);
    byte_4B16669 = 1;
  }
  entity = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&warId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v16);
  if ( !Master_object )
    goto LABEL_23;
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &entity,
                            (int32_t)SpotId,
                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v19 = entity;
    if ( !entity )
      goto LABEL_23;
    goto LABEL_14;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotMaster___);
  SpotId = (MapMaster_o *)QuestEntity__getSpotId(this, v21);
  if ( !v20 )
LABEL_23:
    sub_1BCAA3C(SpotId, v18);
  SpotId = (MapMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                            &v25,
                            (int32_t)SpotId,
                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)SpotId & 1) != 0 )
  {
    v19 = v25;
    if ( !v25 )
      goto LABEL_23;
LABEL_14:
    monitor = (int32_t)v19[1].monitor;
    goto LABEL_16;
  }
  monitor = 0;
LABEL_16:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  SpotId = (MapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapMaster___);
  if ( !SpotId )
    goto LABEL_23;
  v23 = MapMaster__TryGetEntity(SpotId, &v26, monitor, warId, 0LL);
  result = 0LL;
  if ( v23 )
  {
    SpotId = (MapMaster_o *)v26;
    if ( !v26 )
      goto LABEL_23;
    return MapEntity__GetPrioredBgmName(v26, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t Instance; // x0
  __int64 v36; // x1
  DataManager_o *v37; // x25
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Entity; // x20
  EventEntity_array *EnabledEventCampaignForQuest; // x24
  Il2CppObject *v43; // x25
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_List_object__o *v47; // x23
  int max_length; // w8
  unsigned int v49; // w28
  bool v50; // w19
  EventEntity_o *v51; // x8
  int32_t id; // w27
  int32_t v53; // w26
  int64_t v54; // x22
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  int klass; // w8
  int32_t v66; // w21
  _BOOL8 v67; // x0
  __int64 v68; // x1
  Il2CppObject *current; // x8
  int klass_high; // w9
  int v71; // w10
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1666B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId, *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventQuestMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    byte_4B1666B = 1;
  }
  memset(&v75, 0, sizeof(v75));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v37 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v39 = DataManager__GetMasterData_object_(
          v37,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v37,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
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
  v43 = DataManager__GetMasterData_object_(
          v37,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v47 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v44,
                                                       v45,
                                                       v46);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_41;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v49 = 0;
    v50 = !isQuestNoneCleared;
    while ( 1 )
    {
      if ( v49 >= max_length )
        sub_1BCAA44(Instance, v36);
      v51 = EnabledEventCampaignForQuest->m_Items[v49];
      if ( !v51 || !v39 )
        break;
      id = v51->fields.id;
      Instance = (int64_t)EventCampaignMaster__getData((EventCampaignMaster_o *)v39, id, 0LL);
      if ( Instance )
      {
        v53 = *(_DWORD *)(Instance + 20);
        v54 = Instance;
        Instance = CombineAdjustTarget__isTerminalExposable(v53, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v43 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(
                       (EventCampaignReleaseMaster_o *)v43,
                       id,
                       *(_DWORD *)(v54 + 20),
                       0LL);
          if ( (v53 != 25 || !v50) && (Instance & 1) != 0 && (v53 == 25 || v53 == 12) )
          {
            if ( !v47 )
              break;
            items = v47->fields._items;
            v62 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v47->fields._version;
            if ( !items )
              break;
            size = v47->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v47,
                (Il2CppObject *)v54,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v64 = &items->obj.klass + size;
              v47->fields._size = size + 1;
              v64[4] = (Il2CppClass *)v54;
              sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), v54, v55, v56, v57, v58, v59, v60);
            }
          }
        }
      }
      max_length = EnabledEventCampaignForQuest->max_length;
      if ( (int)++v49 >= max_length )
        goto LABEL_27;
    }
LABEL_41:
    sub_1BCAA3C(Instance, v36);
  }
LABEL_27:
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v47,
                        0LL);
  if ( !v47 )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    v47,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  klass = 0;
  v75 = v74;
LABEL_29:
  v66 = klass;
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v67 )
      break;
    current = v75.fields._current;
    if ( !v75.fields._current )
      sub_1BCAA3C(v67, v68);
    klass_high = HIDWORD(v75.fields._current[3].klass);
    if ( (klass_high & 0xFFFFFFFE) == 2 )
    {
      if ( !Entity )
        sub_1BCAA3C(v67, v68);
      v71 = HIDWORD(Entity[10].klass);
      if ( v71 == 1 || v71 == 4 )
      {
        if ( klass_high == 3 )
          *fixedVal = (int32_t)v75.fields._current[3].klass;
        klass = (int)current[3].klass;
        if ( v66 )
          klass = klass * v66 / 1000;
        goto LABEL_29;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v66;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestEntity__GetChapterSubTitle(
        QuestEntity_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *ChapterSubStr; // x21
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  ConstantMaster_o *v17; // x22
  int32_t id; // w23
  int32_t v19; // w23

  if ( (byte_4B16662 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_3474/*"CHAPTER_F_END_ID"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3475/*"CHAPTER_F_START_ID"*/, v11, v12);
    byte_4B16662 = 1;
  }
  ChapterSubStr = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___);
  v17 = (ConstantMaster_o *)Instance;
  if ( (this->fields.type & 0x1F) == 1 && this->fields.chapterSubId >= 1 && this->fields.chapterId )
    goto LABEL_10;
  if ( !Instance )
LABEL_14:
    sub_1BCAA3C(Instance, v15);
  id = this->fields.id;
  if ( id >= ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3475/*"CHAPTER_F_START_ID"*/, 0LL) )
  {
    v19 = this->fields.id;
    if ( v19 <= ConstantMaster__GetValue(v17, (System_String_o *)StringLiteral_3474/*"CHAPTER_F_END_ID"*/, 0LL) )
LABEL_10:
      ChapterSubStr = QuestEntity__getChapterSubStr(this, warId, v16);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *result; // x0

  if ( (byte_4B1666C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isOverCost, method);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_9882/*"OVER_COST_COLOR"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3421/*"CAMPAIGN_COST_COLOR"*/, v9, v10);
    byte_4B1666C = 1;
  }
  if ( costCalcVal < 1 )
  {
    result = (System_String_o *)StringLiteral_25238/*"{0}"*/;
    if ( !isOverCost )
      return result;
    goto LABEL_7;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isOverCost);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_3421/*"CAMPAIGN_COST_COLOR"*/, 0LL);
  if ( isOverCost )
  {
LABEL_7:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isOverCost);
    return LocalizationManager__Get((System_String_o *)StringLiteral_9882/*"OVER_COST_COLOR"*/, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall QuestEntity__GetEndTime(QuestEntity_o *this, bool is_itvl, const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t RestTime; // x19

  if ( (byte_4B16665 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, is_itvl, method);
    byte_4B16665 = 1;
  }
  RestTime = QuestEntity__GetRestTime(this, is_itvl, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  return NetworkManager__getTime(0LL) + RestTime;
}


QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16659 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16659 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
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
    v13 = 1;
    return QuestEntity__GetPhaseDetail_40196060(this, v13, v12);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v9);
  v13 = UserQuestEntity__getQuestPhase(entity, 0LL) + 1;
  return QuestEntity__GetPhaseDetail_40196060(this, v13, v12);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailEntity_o *__fastcall QuestEntity__GetPhaseDetail_40196060(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1665A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, *(_QWORD *)&phaseCnt, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B1665A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  QuestPhaseDetailMaster__TryGetEntity((QuestPhaseDetailMaster_o *)Instance, &entity, this->fields.id, phaseCnt, v9);
  return entity;
}


QuestEntity_o *__fastcall QuestEntity__GetPhaseDetailedEntity(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  QuestPhaseDetailEntity_o *v8; // x20
  QuestEntity_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t flag; // x8

  if ( (byte_4B16658 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestEntity_TypeInfo, method, v2);
    byte_4B16658 = 1;
  }
  PhaseDetail = QuestEntity__GetPhaseDetail(this, method);
  if ( PhaseDetail )
  {
    v8 = PhaseDetail;
    v9 = (QuestEntity_o *)sub_1BCAA2C(QuestEntity_TypeInfo, v5, v6, v7);
    QuestEntity___ctor_40195384(v9, this, v10);
    if ( !v9 )
      sub_1BCAA3C(v11, v12);
    this = v9;
    v9->fields.spotId = v8->fields.spotId;
    v9->fields.consumeType = v8->fields.consumeType;
    v9->fields.actConsume = v8->fields.actConsume;
    flag = v8->fields.flag;
    v9->fields.mIsPhaseDetailed = 1;
    v9->fields.flag = flag;
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
  bool v18; // vf
  int64_t v19; // x8

  if ( (byte_4B16666 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, is_itvl, method);
    byte_4B16666 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, is_itvl);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  int monitor; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *v17; // [xsp+10h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B16668 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B16668 = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  monitor = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.spotId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !entity )
      goto LABEL_14;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    monitor = (int)entity[1].monitor;
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( !v14 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                  v14,
                                  &v17,
                                  (Il2CppObject *)Instance,
                                  (const MethodInfo_31B31E8 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v17 )
        return HIDWORD(v17[1].klass);
LABEL_14:
      sub_1BCAA3C(Instance, v13);
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
bool __fastcall QuestEntity__HasFlag_40199512(
        QuestEntity_o *this,
        int64_t flag,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail_40196060; // x0

  if ( this->fields.mIsPhaseDetailed
    || (PhaseDetail_40196060 = QuestEntity__GetPhaseDetail_40196060(this, phaseCnt, *(const MethodInfo **)&phaseCnt)) == 0LL )
  {
    p_flag = &this->fields.flag;
  }
  else
  {
    p_flag = &PhaseDetail_40196060->fields.flag;
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
  QuestPhaseDetailEntity_o *PhaseDetail_40196060; // x0

  PhaseDetail_40196060 = QuestEntity__GetPhaseDetail_40196060(this, phaseCnt, *(const MethodInfo **)&phaseCnt);
  if ( PhaseDetail_40196060 )
    LOBYTE(PhaseDetail_40196060) = (PhaseDetail_40196060->fields.flag & flag) != 0;
  return (char)PhaseDetail_40196060;
}


bool __fastcall QuestEntity__IsActiveRecollectionQuest(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_4B1666D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarQuestSelectionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1666D = 1;
  }
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, method)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 7) & 8) == 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarQuestSelectionMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int32_t GroupId; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1666A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1666A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, this->fields.id, 1, v12);
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    GroupId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          GroupId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_14:
    sub_1BCAA3C(Instance, v11);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x4
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1666E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1666E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.id, 1, v8) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1BCAA3C(Master_object, v7);
  return QuestPhaseEntity__IsRepeatReward(entity, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x2
  QuestPhaseDetailEntity_o *PhaseDetail_40196060; // x0
  __int64 v19; // x1
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  int32_t QuestBoardSectionId; // w20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  System_String_o *v30; // x0
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x20
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  int32_t chapterSubId; // w8
  System_String_o *v37; // x19
  Il2CppObject *v38; // x1
  System_String_o *v39; // x0
  System_String_o *v40; // x20
  int32_t v41; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16661 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_8682/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8681/*"MATERIAL_MAP_CHAPTER_SUB"*/, v15, v16);
    byte_4B16661 = 1;
  }
  entity = 0LL;
  if ( !System_String__IsNullOrEmpty(this->fields.chapterSubStr, 0LL) )
    return this->fields.chapterSubStr;
  PhaseDetail_40196060 = QuestEntity__GetPhaseDetail_40196060(this, 1, v17);
  if ( PhaseDetail_40196060 )
  {
    if ( (PhaseDetail_40196060->fields.flag & 0x2000000000000000LL) != 0 )
      return this->fields.chapterSubStr;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v21);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    warId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( entity )
    QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)entity, 0LL);
  else
    QuestBoardSectionId = 0;
  if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v22)) == 0LL )
    p_flag = &this->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  if ( (*((_BYTE *)p_flag + 2) & 4) != 0
    || entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal((WarEntity_o *)entity, 0LL) )
  {
    if ( QuestBoardSectionId )
    {
      v41 = QuestBoardSectionId;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v29 = System_String__Format((System_String_o *)StringLiteral_8682/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v27, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
      v30 = v29;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      v30 = (System_String_o *)StringLiteral_8681/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v35 = LocalizationManager__Get(v30, 0LL);
    chapterSubId = this->fields.chapterSubId;
    v37 = v35;
    v38 = (Il2CppObject *)LocalizationManager__ChineseNumber(chapterSubId, 0LL);
    v39 = v37;
  }
  else
  {
    if ( QuestBoardSectionId )
    {
      v41 = QuestBoardSectionId;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v33 = System_String__Format((System_String_o *)StringLiteral_8682/*"MATERIAL_MAP_CHAPTER_SUB_{0:D2}"*/, v31, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
      v34 = v33;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      v34 = (System_String_o *)StringLiteral_8681/*"MATERIAL_MAP_CHAPTER_SUB"*/;
    }
    v40 = LocalizationManager__Get(v34, 0LL);
    v38 = (Il2CppObject *)System_Int32__ToString((int)this + 116, 0LL);
    v39 = v40;
  }
  return System_String__Format(v39, v38, 0LL);
}


int32_t __fastcall QuestEntity__getCharaIconId(QuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.charaIconId;
}


int64_t __fastcall QuestEntity__getClosedAt(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_closedAt; // x8

  if ( (byte_4B16664 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16664 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v8);
  p_closedAt = &this->fields.closedAt;
  if ( ReplaceDataByQuestId )
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  return *p_closedAt;
}


int32_t __fastcall QuestEntity__getDisplayHours(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_displayHours; // x8

  if ( (byte_4B1665F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1665F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_intervalHours; // x8

  if ( (byte_4B16660 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16660 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v8);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  int32_t *v11; // x8
  QuestPhaseDetailEntity_o *v12; // x0
  QuestConsumeItemEntity_o *result; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4B16667 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestConsumeItemMaster___, isNotItemConsume, method);
    sub_1BCA7E0(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16667 = 1;
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
      || (v12 = QuestEntity__GetPhaseDetail(this, (const MethodInfo *)isNotItemConsume)) == 0LL )
    {
      v11 = &this->fields.consumeType;
    }
    else
    {
      v11 = &v12->fields.consumeType;
    }
    if ( *v11 != 4 )
      return 0LL;
  }
  result = (QuestConsumeItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)result,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestConsumeItemMaster___);
  if ( !result )
    goto LABEL_20;
  result = (QuestConsumeItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                         this->fields.id,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int__GetEntity__);
  if ( isNotItemConsume )
  {
    if ( result )
      return QuestConsumeItemEntity__GetNotConsumeItemEntity(result, v14);
LABEL_20:
    sub_1BCAA3C(result, v14);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8

  if ( (byte_4B16663 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16663 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v8);
  p_openedAt = &this->fields.openedAt;
  if ( ReplaceDataByQuestId )
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
  return *p_openedAt;
}


int32_t __fastcall QuestEntity__getPriority(QuestEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1665E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method, v2);
    byte_4B1665E = 1;
  }
  if ( this->fields.afterClear != 5 )
    return this->fields.priority;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  System_String_o **p_name; // x8

  if ( (byte_4B1665B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1665B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, this->fields.id, v8);
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


System_String_o *__fastcall QuestEntity__getRecommendLv_40198736(
        QuestEntity_o *this,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  QuestPhaseDetailEntity_o *PhaseDetail_40196060; // x0
  System_String_o **p_recommendLv; // x19

  PhaseDetail_40196060 = QuestEntity__GetPhaseDetail_40196060(this, phaseCnt, method);
  if ( !PhaseDetail_40196060
    || (p_recommendLv = &PhaseDetail_40196060->fields.recommendLv,
        System_String__IsNullOrEmpty(PhaseDetail_40196060->fields.recommendLv, 0LL)) )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t result; // w0
  const MethodInfo *v9; // x1
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4B1665C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1665C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( !result )
  {
    if ( this->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(this, v9)) == 0LL )
      p_spotId = &this->fields.spotId;
    else
      p_spotId = &PhaseDetail->fields.spotId;
    return *p_spotId;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestEntity__getSpotId_40196836(QuestEntity_o *this, int32_t phase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t result; // w0
  const MethodInfo *v12; // x4
  int32_t *p_spotId; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1665D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, *(_QWORD *)&phase, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestSpotReleaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1665D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestSpotReleaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  result = QuestSpotReleaseMaster__GetSpotId((QuestSpotReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( result )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)QuestPhaseDetailMaster__TryGetEntity(
                               (QuestPhaseDetailMaster_o *)Instance,
                               &entity,
                               this->fields.id,
                               phase,
                               v12);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    p_spotId = &this->fields.spotId;
    return *p_spotId;
  }
  if ( !entity )
LABEL_14:
    sub_1BCAA3C(Instance, v10);
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