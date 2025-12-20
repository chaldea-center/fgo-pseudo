void EventUpValSetupInfo___ctor(
        EventUpValSetupInfo_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Int32_array *Instance; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  bool v31; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v33; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2C3B7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C3B7 = 1;
  }
  entity = 0;
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v9;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isQuestStart = 1;
  this->fields.questId = questId;
  Instance = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_10;
  if ( !LODWORD(Instance->max_length) )
    sub_1C942F8(Instance);
  Instance->m_Items[0] = eventId;
  this->fields.eventIdList = Instance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.eventIdList, (int32_t)Instance, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v24;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questPhaseIndivLists,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_10:
    sub_1C942F0(Instance, v17);
  }
  v31 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v31 )
  {
    Instance = (struct System_Int32_array *)entity;
    if ( !entity )
      goto LABEL_10;
    Instance = QuestPhaseEntity__GetPrioredIndividuality(entity, 0);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  else
  {
    Instance = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)questPhaseIndivLists,
    0,
    &Instance->obj,
    (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v33);
}


void EventUpValSetupInfo___ctor_42501600(
        EventUpValSetupInfo_o *this,
        System_Int32_array *eventIdList,
        bool ignoreFlg,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v11; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2

  if ( (byte_4D2C3B8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C94098(&int___TypeInfo);
    byte_4D2C3B8 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v11;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !eventIdList )
    eventIdList = (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  this->fields.eventIdList = eventIdList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventIdList,
    (int32_t)eventIdList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v24;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questPhaseIndivLists,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v31);
}


void EventUpValSetupInfo__AnalyzeInfo(EventUpValSetupInfo_o *this, bool ignoreFlg, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Master_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  const MethodInfo *v30; // x6
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  System_Func_object__bool__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  EventUpValSetupInfo___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  System_Func_object__int__o *_9__56_1; // x22
  Il2CppObject *v37; // x23
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_int__o *v46; // x1
  const MethodInfo *v47; // x6
  struct System_Int32_array *EnableIdList; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  const MethodInfo *v55; // x1

  if ( (byte_4D2C3B9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C94098(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C94098(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C94098(&Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__);
    sub_1C94098(&Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__);
    sub_1C94098(&EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo);
    sub_1C94098(&EventUpValSetupInfo___c_TypeInfo);
    byte_4D2C3B9 = 1;
  }
  v5 = sub_1C942E4(EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 40) = ignoreFlg;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v5 + 32) = Master_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)Master_object, v15, v16, v17, v18, v19, v20);
  v21 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventQuestMaster___);
  *(_QWORD *)(v5 + 16) = v22;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  if ( !v21 )
    goto LABEL_20;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)v21, 0, 0);
  if ( FriendshipUpCampaigns )
  {
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)FriendshipUpCampaigns;
    v32 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v32,
      (Il2CppObject *)v5,
      Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__,
      0);
    v33 = System_Linq_Enumerable__Where_object_(
            v31,
            (System_Func_TSource__bool__o *)v32,
            (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v34 = EventUpValSetupInfo___c_TypeInfo;
    v35 = v33;
    if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      v34 = EventUpValSetupInfo___c_TypeInfo;
    }
    _9__56_1 = (System_Func_object__int__o *)v34->static_fields->__9__56_1;
    if ( !_9__56_1 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = EventUpValSetupInfo___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v34->static_fields->__9;
      _9__56_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EventCampaignEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__56_1, v37, Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, 0);
      static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      static_fields->__9__56_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__56_1;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__56_1,
        (int32_t)_9__56_1,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v35,
                                                                 (System_Func_TSource__TResult__o *)_9__56_1,
                                                                 (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    v46 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__ToArray_int_(
                                                             v45,
                                                             (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    v46 = 0;
  }
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v5,
    v46,
    &this->fields.servantFilterEventCampaignIds,
    &this->fields.servantEquipFilterEventCampaignIds,
    &this->fields.supportFilterEventCampaignIds,
    &this->fields.supportEquipFilterEventCampaignIds,
    v30);
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v5,
    (System_Collections_Generic_IEnumerable_int__o *)this->fields.eventIdList,
    &this->fields.servantFilterEventIds,
    &this->fields.servantEquipFilterEventIds,
    &this->fields.supportFilterEventIds,
    &this->fields.supportEquipFilterEventIds,
    v47);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !v6 )
LABEL_20:
    sub_1C942F0(v6, v7);
  EnableIdList = ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)v6, 0);
  this->fields.servantFilterIds = EnableIdList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantFilterIds,
    (int32_t)EnableIdList,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(this, v55);
}


void EventUpValSetupInfo__AnalyzeInfoCombineCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v4; // x1
  EventCampaignMaster_o *v5; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x22
  __int64 v8; // x23
  System_Collections_Generic_List_object__o *CombineEventCampaigns_42712568; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x20
  GrandQuestFolderBoardItem_o *v17; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Comparison_T__o *klass; // x24
  Il2CppObject *current; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_int__o *v28; // x24
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *Item; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x25
  System_Int32_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x1
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Comparison_T__o *v53; // x21
  Il2CppObject *v54; // x22
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  EventUpValSetupInfo___c_c *v62; // x0
  System_Func_object__bool__o *_9__57_1; // x21
  Il2CppObject *v64; // x22
  struct EventUpValSetupInfo___c_StaticFields *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  EventUpValSetupInfo___c_c *v73; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x20
  System_Func_object__int__o *_9__57_2; // x21
  Il2CppObject *v76; // x22
  struct EventUpValSetupInfo___c_StaticFields *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  System_Func_object__object__o *_9__57_3; // x22
  Il2CppObject *v85; // x23
  struct EventUpValSetupInfo___c_StaticFields *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  EventUpValSetupInfo_o *v99; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4D2C3BA & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_EventCampaignEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C94098(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C94098(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C94098(&System_Func_EventCampaignEntity__int____TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__);
    sub_1C94098(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__);
    sub_1C94098(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__);
    sub_1C94098(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__);
    sub_1C94098(&Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__);
    sub_1C94098(&EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo);
    sub_1C94098(&EventUpValSetupInfo___c_TypeInfo);
    byte_4D2C3BA = 1;
  }
  memset(&v103, 0, sizeof(v103));
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_61;
  v5 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return;
  v7 = CombineEventCampaigns;
  v8 = sub_1C942E4(EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  CombineEventCampaigns_42712568 = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns_42712568(
                                                                                  v5,
                                                                                  v7,
                                                                                  0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v8 )
    goto LABEL_61;
  v99 = this;
  *(_QWORD *)(v8 + 16) = Instance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)Instance, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !CombineEventCampaigns_42712568 )
    goto LABEL_61;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v101,
    CombineEventCampaigns_42712568,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  object = (Il2CppObject *)v8;
  v17 = (GrandQuestFolderBoardItem_o *)(v8 + 24);
  v103 = v101;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v103,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v18 )
      break;
    klass = (System_Comparison_T__o *)v17->klass;
    current = v103.fields._current;
    if ( !v17->klass )
    {
      klass = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_object____ctor(
        klass,
        object,
        Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__,
        0);
      v17->klass = (GrandQuestFolderBoardItem_c *)klass;
      sub_1C9403C(v17, (int32_t)klass, v22, v23, v24, v25, v26, v27);
    }
    if ( !current )
      sub_1C942F0(v18, v19);
    System_Collections_Generic_List_object___Sort_59164920(
      (System_Collections_Generic_List_object__o *)current,
      klass,
      (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v28 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v101,
      (System_Collections_Generic_List_object__o *)current,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v101;
          ;
          System_Collections_Generic_List_int___AddRange(
            v28,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current[2].monitor,
            (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v29 )
        break;
      if ( !i.fields._current )
        sub_1C942F0(v29, v30);
      if ( !v28 )
        sub_1C942F0(v29, v30);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !v28 )
      sub_1C942F0(Item, v32);
    v33 = Item;
    v34 = System_Collections_Generic_List_int___ToArray(
            v28,
            (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v33 )
      sub_1C942F0(v34, v34);
    v33[2].monitor = v34;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v33[2].monitor, (int32_t)v34, v35, v36, v37, v38, v39, v40);
    v41 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)current,
            0,
            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    v48 = v41;
    if ( !v16 )
      sub_1C942F0(v41, v41);
    items = v16->fields._items;
    v50 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v16->fields._version;
    if ( !items )
      sub_1C942F0(v41, v41);
    size = v16->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v41,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v52[4] = (Il2CppClass *)v48;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)v48, v42, v43, v44, v45, v46, v47);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v103,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  Instance = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    Instance = EventUpValSetupInfo___c_TypeInfo;
  }
  v53 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v53 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    v54 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v53 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_object____ctor(v53, v54, Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__, 0);
    static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_EventCampaignEntity__o *)v53;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__57_0, (int32_t)v53, v56, v57, v58, v59, v60, v61);
  }
  if ( !v16 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_59164920(
    v16,
    v53,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  v62 = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v62 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v62->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = EventUpValSetupInfo___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__57_1,
      v64,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__,
      0);
    v65 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v65->__9__57_1 = (struct System_Func_EventCampaignEntity__bool__o *)_9__57_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v65->__9__57_1, (int32_t)_9__57_1, v66, v67, v68, v69, v70, v71);
  }
  v72 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (System_Func_TSource__bool__o *)_9__57_1,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  v73 = EventUpValSetupInfo___c_TypeInfo;
  v74 = v72;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v73 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_2 = (System_Func_object__int__o *)v73->static_fields->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = EventUpValSetupInfo___c_TypeInfo;
    }
    v76 = (Il2CppObject *)v73->static_fields->__9;
    _9__57_2 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__57_2,
      v76,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__,
      0);
    v77 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v77->__9__57_2 = (struct System_Func_EventCampaignEntity__int__o *)_9__57_2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v77->__9__57_2, (int32_t)_9__57_2, v78, v79, v80, v81, v82, v83);
    v73 = EventUpValSetupInfo___c_TypeInfo;
  }
  if ( !v73->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v73);
    v73 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_3 = (System_Func_object__object__o *)v73->static_fields->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = EventUpValSetupInfo___c_TypeInfo;
    }
    v85 = (Il2CppObject *)v73->static_fields->__9;
    _9__57_3 = (System_Func_object__object__o *)sub_1C942E4(System_Func_EventCampaignEntity__int____TypeInfo);
    System_Func_object__object____ctor(
      _9__57_3,
      v85,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__,
      0);
    v86 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v86->__9__57_3 = (struct System_Func_EventCampaignEntity__int____o *)_9__57_3;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v86->__9__57_3, (int32_t)_9__57_3, v87, v88, v89, v90, v91, v92);
  }
  v4 = System_Linq_Enumerable__ToDictionary_object__int__object_(
         v74,
         (System_Func_TSource__TKey__o *)_9__57_2,
         (System_Func_TSource__TElement__o *)_9__57_3,
         (const MethodInfo_31DD1C4 *)Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
  Instance = v99;
  if ( !v99 )
LABEL_61:
    sub_1C942F0(Instance, v4);
  v99->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v4;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v99->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v4,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *EventUpValSetupInfo__GetQuestPhaseIndividualList(
        EventUpValSetupInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  System_Collections_Generic_Dictionary_int__object__o *questPhaseIndivLists; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v8; // x2
  int32_t questId; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = eventId;
  if ( (byte_4D2C3BB & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C3BB = 1;
  }
  value = 0;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_26:
    sub_1C942F0(questPhaseIndivLists, *(_QWORD *)&eventId);
  }
  *(_QWORD *)&eventId = (unsigned int)this->fields.questId;
  questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
  if ( eventId < 1 )
  {
    if ( !questPhaseIndivLists )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            questPhaseIndivLists,
            v3,
            &value,
            (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               v3,
                               1,
                               0);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)questPhaseIndivLists,
                                QuestIdListByGroupId,
                                0);
      v8 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questId = v3;
LABEL_23:
      System_Collections_Generic_Dictionary_int__object___Add(
        questPhaseIndivLists,
        questId,
        v8,
        (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    }
  }
  else
  {
    if ( !questPhaseIndivLists )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            questPhaseIndivLists,
            eventId,
            &value,
            (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)questPhaseIndivLists,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C94140(int___TypeInfo, 1);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      *(_QWORD *)&eventId = questPhaseIndivLists;
      if ( !LODWORD(questPhaseIndivLists->fields._entries) )
        sub_1C942F8(questPhaseIndivLists);
      questPhaseIndivLists->fields._count = this->fields.questId;
      if ( !MasterData_object )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)MasterData_object,
                                (System_Int32_array *)questPhaseIndivLists,
                                0);
      v8 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questId = this->fields.questId;
      goto LABEL_23;
    }
  }
  return (System_Int32_array *)value;
}


bool EventUpValSetupInfo__IsUpVal(
        EventUpValSetupInfo_o *this,
        System_Int32_array *questPhaseIndividualityList,
        System_Int32_array *questIndividualities,
        const MethodInfo *method)
{
  if ( (byte_4D2C3BC & 1) == 0 )
  {
    sub_1C94098(&Individuality_TypeInfo);
    byte_4D2C3BC = 1;
  }
  if ( !questIndividualities || !questIndividualities->max_length )
    return 1;
  if ( !questPhaseIndividualityList || !questPhaseIndividualityList->max_length )
    return 0;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckIndividualities(questIndividualities, questPhaseIndividualityList, 0);
}


System_Collections_Generic_Dictionary_int__int____o *EventUpValSetupInfo__get_EventCombineCampaignDictionary(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventCombineCampaignDictionary_k__BackingField;
}


int32_t EventUpValSetupInfo__get_EventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x9

  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    sub_1C942F0(this, method);
  max_length = eventIdList->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C942F8(this);
  return eventIdList->m_Items[0];
}


System_Int32_array *EventUpValSetupInfo__get_EventIdList(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventIdList;
}


bool EventUpValSetupInfo__get_IsQuestStart(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  return this->fields.isQuestStart;
}


int32_t EventUpValSetupInfo__get_QuestId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t EventUpValSetupInfo__get_QuestPhase(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


System_Int32_array *EventUpValSetupInfo__get_ServantEquipFilterEventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEquipFilterEventCampaignIds;
}


int32_t EventUpValSetupInfo__get_ServantEquipFilterEventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  il2cpp_array_size_t max_length; // x9

  servantEquipFilterEventIds = this->fields.servantEquipFilterEventIds;
  if ( !servantEquipFilterEventIds )
    sub_1C942F0(this, method);
  max_length = servantEquipFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C942F8(this);
  return servantEquipFilterEventIds->m_Items[0];
}


System_Int32_array *EventUpValSetupInfo__get_ServantEquipFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEquipFilterEventIds;
}


System_Int32_array *EventUpValSetupInfo__get_ServantFilterEventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFilterEventCampaignIds;
}


int32_t EventUpValSetupInfo__get_ServantFilterEventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *servantFilterEventIds; // x8
  il2cpp_array_size_t max_length; // x9

  servantFilterEventIds = this->fields.servantFilterEventIds;
  if ( !servantFilterEventIds )
    sub_1C942F0(this, method);
  max_length = servantFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C942F8(this);
  return servantFilterEventIds->m_Items[0];
}


System_Int32_array *EventUpValSetupInfo__get_ServantFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFilterEventIds;
}


System_Int32_array *EventUpValSetupInfo__get_ServantFilterIdList(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  return this->fields.servantFilterIds;
}


System_Int32_array *EventUpValSetupInfo__get_SupportEquipFilterEventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportEquipFilterEventCampaignIds;
}


int32_t EventUpValSetupInfo__get_SupportEquipFilterEventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *supportEquipFilterEventIds; // x8
  il2cpp_array_size_t max_length; // x9

  supportEquipFilterEventIds = this->fields.supportEquipFilterEventIds;
  if ( !supportEquipFilterEventIds )
    sub_1C942F0(this, method);
  max_length = supportEquipFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C942F8(this);
  return supportEquipFilterEventIds->m_Items[0];
}


System_Int32_array *EventUpValSetupInfo__get_SupportEquipFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportEquipFilterEventIds;
}


System_Int32_array *EventUpValSetupInfo__get_SupportFilterEventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportFilterEventCampaignIds;
}


int32_t EventUpValSetupInfo__get_SupportFilterEventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *supportFilterEventIds; // x8
  il2cpp_array_size_t max_length; // x9

  supportFilterEventIds = this->fields.supportFilterEventIds;
  if ( !supportFilterEventIds )
    sub_1C942F0(this, method);
  max_length = supportFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C942F8(this);
  return supportFilterEventIds->m_Items[0];
}


System_Int32_array *EventUpValSetupInfo__get_SupportFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportFilterEventIds;
}


void EventUpValSetupInfo__set_EventCombineCampaignDictionary(
        EventUpValSetupInfo_o *this,
        System_Collections_Generic_Dictionary_int__int____o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventCombineCampaignDictionary_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventUpValSetupInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C3BD & 1) == 0 )
  {
    sub_1C94098(&EventUpValSetupInfo___c_TypeInfo);
    byte_4D2C3BD = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventUpValSetupInfo___c_TypeInfo->static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventUpValSetupInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventUpValSetupInfo___c___ctor(EventUpValSetupInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_0(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  int32_t target; // w9
  int32_t v5; // w8
  int32_t result; // w0

  if ( !a || !b )
    sub_1C942F0(this, a);
  target = a->fields.target;
  v5 = b->fields.target;
  result = target - v5;
  if ( target == v5 )
    return b->fields.value - a->fields.value;
  if ( target == 32 )
  {
    if ( v5 != 4 )
      return result;
    return b->fields.value - a->fields.value;
  }
  if ( target == 4 && v5 == 32 )
    return b->fields.value - a->fields.value;
  return result;
}


bool EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C942F0(this, 0);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetIds, 0);
}


int32_t EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_2(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C942F0(this, 0);
  return item->fields.eventId;
}


System_Int32_array *EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_3(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C942F0(this, 0);
  return item->fields.targetIds;
}


int32_t EventUpValSetupInfo___c___AnalyzeInfo_b__56_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C942F0(this, 0);
  return entity->fields.eventId;
}


void EventUpValSetupInfo___c__DisplayClass56_0___ctor(
        EventUpValSetupInfo___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_b__0(
        EventUpValSetupInfo___c__DisplayClass56_0_o *this,
        EventCampaignEntity_o *filter,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass56_0_o *v4; // x19
  struct EventUpValSetupInfo_o *_4__this; // x8
  EventQuestMaster_o *eventQuestMaster; // x19
  int32_t eventId; // w20
  int32_t questId; // w21
  int32_t questPhase; // w22

  v4 = this;
  if ( (byte_4D2C3BE & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2C3BE = 1;
  }
  if ( !filter
    || (_4__this = v4->fields.__4__this) == 0
    || (eventQuestMaster = v4->fields.eventQuestMaster,
        eventId = filter->fields.eventId,
        questId = _4__this->fields.questId,
        questPhase = _4__this->fields.questPhase,
        (this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || !eventQuestMaster )
  {
    sub_1C942F0(this, filter);
  }
  return !EventQuestMaster__IsEventNotIncluded(
            eventQuestMaster,
            eventId,
            questId,
            questPhase,
            7,
            *(_QWORD *)&this[2].fields.ignoreFlg,
            0);
}


void EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
        EventUpValSetupInfo___c__DisplayClass56_0_o *this,
        System_Collections_Generic_IEnumerable_int__o *eventIds,
        System_Int32_array **servantCollectionArray,
        System_Int32_array **servantEquipCollectionArray,
        System_Int32_array **supportCollectionArray,
        System_Int32_array **supportEquipCollectionArray,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_HashSet_int__o *v20; // x26
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_HashSet_int__o *v27; // x27
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_HashSet_int__o *v34; // x28
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_HashSet_int__o *v41; // x29
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Action_int__o *v48; // x29
  System_Int32_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Int32_array *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Int32_array *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  System_Int32_array *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7

  if ( (byte_4D2C3BF & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__);
    sub_1C94098(&EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo);
    byte_4D2C3BF = 1;
  }
  v11 = sub_1C942E4(EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C942F0(v12, v13);
  *(_QWORD *)(v11 + 48) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 16) = v20;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 32) = v27;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v34,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 24) = v34;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v41,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 40) = v41;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Action_int__o *)sub_1C942E4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v48,
    (Il2CppObject *)v11,
    Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__,
    0);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (System_Action_T__o *)v48,
    (const MethodInfo_3187458 *)Method_BasicHelper_ForEach_int___);
  v49 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 16),
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantCollectionArray = v49;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)servantCollectionArray, (int32_t)v49, v50, v51, v52, v53, v54, v55);
  v56 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 32),
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantEquipCollectionArray = v56;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)servantEquipCollectionArray, (int32_t)v56, v57, v58, v59, v60, v61, v62);
  v63 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 24),
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportCollectionArray = v63;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)supportCollectionArray, (int32_t)v63, v64, v65, v66, v67, v68, v69);
  v70 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 40),
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportEquipCollectionArray = v70;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)supportEquipCollectionArray, (int32_t)v70, v71, v72, v73, v74, v75, v76);
}


void EventUpValSetupInfo___c__DisplayClass56_1___ctor(
        EventUpValSetupInfo___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventUpValSetupInfo___c__DisplayClass56_1___AnalyzeInfo_b__3(
        EventUpValSetupInfo___c__DisplayClass56_1_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass56_1_o *v4; // x20
  struct EventUpValSetupInfo___c__DisplayClass56_0_o *CS___8__locals1; // x8
  struct EventUpValSetupInfo___c__DisplayClass56_0_o *v6; // x8
  struct EventUpValSetupInfo___c__DisplayClass56_0_o *v7; // x8
  struct EventUpValSetupInfo___c__DisplayClass56_0_o *v8; // x8
  struct EventUpValSetupInfo___c__DisplayClass56_0_o *v9; // x8
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D2C3C0 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4D2C3C0 = 1;
  }
  entity = 0;
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)CS___8__locals1->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_30;
  if ( !EventFilterMaster__TryGetEntity_42759240((EventFilterMaster_o *)this, &entity, eventId, 0, 0) )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantCollectionList;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
      this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantEquipCollectionList;
      if ( this )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
        this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportCollectionList;
        if ( this )
        {
          System_Collections_Generic_HashSet_int___Add(
            (System_Collections_Generic_HashSet_int__o *)this,
            eventId,
            (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_30;
  }
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity;
  if ( !entity )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsServantFilterNoDisp(entity, 0);
  v6 = v4->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_30;
  if ( v6->fields.ignoreFlg || ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantCollectionList;
    if ( !this )
      goto LABEL_30;
    System_Collections_Generic_HashSet_int___Add(
      (System_Collections_Generic_HashSet_int__o *)this,
      eventId,
      (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity;
    if ( !entity )
      goto LABEL_30;
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantFilterNoDisp(entity, 0);
    v7 = v4->fields.CS___8__locals1;
    if ( !v7 )
      goto LABEL_30;
    if ( v7->fields.ignoreFlg || ((unsigned __int8)this & 1) == 0 )
    {
      this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportCollectionList;
      if ( !this )
        goto LABEL_30;
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity;
  if ( !entity )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsServantEquipFilterNoDisp(entity, 0);
  v8 = v4->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_30;
  if ( !v8->fields.ignoreFlg && ((unsigned __int8)this & 1) != 0 )
    return;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantEquipCollectionList;
  if ( !this
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity) == 0)
    || (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                entity,
                                                                0),
        (v9 = v4->fields.CS___8__locals1) == 0) )
  {
LABEL_30:
    sub_1C942F0(this, *(_QWORD *)&eventId);
  }
  if ( !v9->fields.ignoreFlg && ((unsigned __int8)this & 1) != 0 )
    return;
LABEL_27:
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportEquipCollectionList;
  if ( !this )
    goto LABEL_30;
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    eventId,
    (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void EventUpValSetupInfo___c__DisplayClass57_0___ctor(
        EventUpValSetupInfo___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventUpValSetupInfo___c__DisplayClass57_0___AnalyzeInfoCombineCampaign_b__4(
        EventUpValSetupInfo___c__DisplayClass57_0_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass57_0_o *v6; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster; // x8
  EventUpValSetupInfo___c__DisplayClass57_0_c *klass; // x20

  v6 = this;
  if ( (byte_4D2C3C1 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4D2C3C1 = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)v6->fields.eventMaster) == 0
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0
    || !a
    || (eventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.eventMaster) == 0
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0) )
  {
    sub_1C942F0(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}