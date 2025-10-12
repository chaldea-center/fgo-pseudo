void EventUpValSetupInfo___ctor(
        EventUpValSetupInfo_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Int32_array *Instance; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool v18; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v20; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3752C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3752C = 1;
  }
  entity = 0;
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v9;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isQuestStart = 1;
  this->fields.questId = questId;
  Instance = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_10;
  if ( !LODWORD(Instance->max_length) )
    sub_1C32E84(Instance);
  Instance->m_Items[0] = eventId;
  this->fields.eventIdList = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventIdList, (int32_t)Instance, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questPhaseIndivLists, (int32_t)v15, v16, v17);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_10:
    sub_1C32E7C(Instance);
  }
  v18 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v18 )
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
    Instance = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)questPhaseIndivLists,
    0,
    &Instance->obj,
    (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v20);
}


void EventUpValSetupInfo___ctor_41638188(
        EventUpValSetupInfo_o *this,
        System_Int32_array *eventIdList,
        bool ignoreFlg,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v11; // x24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_int__object__o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4C3752D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    byte_4C3752D = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v11;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !eventIdList )
    eventIdList = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  this->fields.eventIdList = eventIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventIdList, (int32_t)eventIdList, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questPhaseIndivLists, (int32_t)v16, v17, v18);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v19);
}


void EventUpValSetupInfo__AnalyzeInfo(EventUpValSetupInfo_o *this, bool ignoreFlg, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Master_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  const MethodInfo *v17; // x6
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__bool__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  EventUpValSetupInfo___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  System_Func_object__int__o *_9__56_1; // x22
  Il2CppObject *v24; // x23
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_int__o *v29; // x1
  const MethodInfo *v30; // x6
  struct System_Int32_array *EnableIdList; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1

  if ( (byte_4C3752E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C32C20(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C32C20(&Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__);
    sub_1C32C20(&Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__);
    sub_1C32C20(&EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo);
    sub_1C32C20(&EventUpValSetupInfo___c_TypeInfo);
    byte_4C3752E = 1;
  }
  v5 = sub_1C32E6C(EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_BYTE *)(v5 + 40) = ignoreFlg;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v5 + 32) = Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)Master_object, v10, v11);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventQuestMaster___);
  *(_QWORD *)(v5 + 16) = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v13, v14, v15);
  if ( !v12 )
    goto LABEL_20;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)v12, 0, 0);
  if ( FriendshipUpCampaigns )
  {
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)FriendshipUpCampaigns;
    v19 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v5,
      Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__,
      0);
    v20 = System_Linq_Enumerable__Where_object_(
            v18,
            (System_Func_TSource__bool__o *)v19,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v21 = EventUpValSetupInfo___c_TypeInfo;
    v22 = v20;
    if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      v21 = EventUpValSetupInfo___c_TypeInfo;
    }
    _9__56_1 = (System_Func_object__int__o *)v21->static_fields->__9__56_1;
    if ( !_9__56_1 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = EventUpValSetupInfo___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v21->static_fields->__9;
      _9__56_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventCampaignEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__56_1, v24, Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, 0);
      static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      static_fields->__9__56_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__56_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__56_1, (int32_t)_9__56_1, v26, v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v22,
                                                                 (System_Func_TSource__TResult__o *)_9__56_1,
                                                                 (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    v29 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__ToArray_int_(
                                                             v28,
                                                             (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    v29 = 0;
  }
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v5,
    v29,
    &this->fields.servantFilterEventCampaignIds,
    &this->fields.servantEquipFilterEventCampaignIds,
    &this->fields.supportFilterEventCampaignIds,
    &this->fields.supportEquipFilterEventCampaignIds,
    v17);
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v5,
    (System_Collections_Generic_IEnumerable_int__o *)this->fields.eventIdList,
    &this->fields.servantFilterEventIds,
    &this->fields.servantEquipFilterEventIds,
    &this->fields.supportFilterEventIds,
    &this->fields.supportEquipFilterEventIds,
    v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !v6 )
LABEL_20:
    sub_1C32E7C(v6);
  EnableIdList = ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)v6, 0);
  this->fields.servantFilterIds = EnableIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantFilterIds, (int32_t)EnableIdList, v32, v33);
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(this, v34);
}


void EventUpValSetupInfo__AnalyzeInfoCombineCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  EventCampaignMaster_o *v4; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v6; // x22
  __int64 v7; // x23
  System_Collections_Generic_List_object__o *CombineEventCampaigns_41842560; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  CGThumbnailListItem_o *v12; // x22
  _BOOL8 v13; // x0
  System_Comparison_T__o *klass; // x24
  Il2CppObject *current; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_int__o *v18; // x24
  _BOOL8 v19; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x25
  System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Comparison_T__o *v33; // x21
  Il2CppObject *v34; // x22
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  EventUpValSetupInfo___c_c *v38; // x0
  System_Func_object__bool__o *_9__57_1; // x21
  Il2CppObject *v40; // x22
  struct EventUpValSetupInfo___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  EventUpValSetupInfo___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  System_Func_object__int__o *_9__57_2; // x21
  Il2CppObject *v48; // x22
  struct EventUpValSetupInfo___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Func_object__object__o *_9__57_3; // x22
  Il2CppObject *v53; // x23
  struct EventUpValSetupInfo___c_StaticFields *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v57; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  EventUpValSetupInfo_o *v60; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C3752F & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C32C20(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__int____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__);
    sub_1C32C20(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__);
    sub_1C32C20(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__);
    sub_1C32C20(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__);
    sub_1C32C20(&Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__);
    sub_1C32C20(&EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo);
    sub_1C32C20(&EventUpValSetupInfo___c_TypeInfo);
    byte_4C3752F = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_61;
  v4 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return;
  v6 = CombineEventCampaigns;
  v7 = sub_1C32E6C(EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  CombineEventCampaigns_41842560 = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns_41842560(
                                                                                  v4,
                                                                                  v6,
                                                                                  0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v7 )
    goto LABEL_61;
  v60 = this;
  *(_QWORD *)(v7 + 16) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Instance, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !CombineEventCampaigns_41842560 )
    goto LABEL_61;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    CombineEventCampaigns_41842560,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  object = (Il2CppObject *)v7;
  v12 = (CGThumbnailListItem_o *)(v7 + 24);
  v64 = v62;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v13 )
      break;
    klass = (System_Comparison_T__o *)v12->klass;
    current = v64.fields._current;
    if ( !v12->klass )
    {
      klass = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_object____ctor(
        klass,
        object,
        Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__,
        0);
      v12->klass = (CGThumbnailListItem_c *)klass;
      sub_1C32BC4(v12, (int32_t)klass, v16, v17);
    }
    if ( !current )
      sub_1C32E7C(v13);
    System_Collections_Generic_List_object___Sort_58303104(
      (System_Collections_Generic_List_object__o *)current,
      klass,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v18 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v62,
      (System_Collections_Generic_List_object__o *)current,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v62;
          ;
          System_Collections_Generic_List_int___AddRange(
            v18,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current[2].monitor,
            (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v19 )
        break;
      if ( !i.fields._current )
        sub_1C32E7C(v19);
      if ( !v18 )
        sub_1C32E7C(v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !v18 )
      sub_1C32E7C(Item);
    v21 = Item;
    v22 = System_Collections_Generic_List_int___ToArray(
            v18,
            (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v21 )
      sub_1C32E7C(v22);
    v21[2].monitor = v22;
    sub_1C32BC4((CGThumbnailListItem_o *)&v21[2].monitor, (int32_t)v22, v23, v24);
    v25 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)current,
            0,
            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    v28 = v25;
    if ( !v11 )
      sub_1C32E7C(v25);
    items = v11->fields._items;
    v30 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v11->fields._version;
    if ( !items )
      sub_1C32E7C(v25);
    size = v11->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        v25,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &items->obj.klass + size;
      v11->fields._size = size + 1;
      v32[4] = (Il2CppClass *)v28;
      sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v28, v26, v27);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  Instance = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    Instance = EventUpValSetupInfo___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v33 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__, 0);
    static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_EventCampaignEntity__o *)v33;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)v33, v36, v37);
  }
  if ( !v11 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_58303104(
    v11,
    v33,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  v38 = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v38 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v38->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = EventUpValSetupInfo___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__57_1,
      v40,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__,
      0);
    v41 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v41->__9__57_1 = (struct System_Func_EventCampaignEntity__bool__o *)_9__57_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v41->__9__57_1, (int32_t)_9__57_1, v42, v43);
  }
  v44 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__bool__o *)_9__57_1,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  v45 = EventUpValSetupInfo___c_TypeInfo;
  v46 = v44;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v45 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_2 = (System_Func_object__int__o *)v45->static_fields->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = EventUpValSetupInfo___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__57_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__57_2,
      v48,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__,
      0);
    v49 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v49->__9__57_2 = (struct System_Func_EventCampaignEntity__int__o *)_9__57_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v49->__9__57_2, (int32_t)_9__57_2, v50, v51);
    v45 = EventUpValSetupInfo___c_TypeInfo;
  }
  if ( !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_3 = (System_Func_object__object__o *)v45->static_fields->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = EventUpValSetupInfo___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v45->static_fields->__9;
    _9__57_3 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_EventCampaignEntity__int____TypeInfo);
    System_Func_object__object____ctor(
      _9__57_3,
      v53,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__,
      0);
    v54 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v54->__9__57_3 = (struct System_Func_EventCampaignEntity__int____o *)_9__57_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v54->__9__57_3, (int32_t)_9__57_3, v55, v56);
  }
  v57 = System_Linq_Enumerable__ToDictionary_object__int__object_(
          v46,
          (System_Func_TSource__TKey__o *)_9__57_2,
          (System_Func_TSource__TElement__o *)_9__57_3,
          (const MethodInfo_311D3A4 *)Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
  Instance = v60;
  if ( !v60 )
LABEL_61:
    sub_1C32E7C(Instance);
  v60->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v57;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&v60->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v57,
    v58,
    v59);
}


System_Int32_array *EventUpValSetupInfo__GetQuestPhaseIndividualList(
        EventUpValSetupInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *questPhaseIndivLists; // x0
  int questId; // w1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v9; // x2
  int32_t v10; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37530 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37530 = 1;
  }
  value = 0;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_26:
    sub_1C32E7C(questPhaseIndivLists);
  }
  questId = this->fields.questId;
  questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
  if ( questId < 1 )
  {
    if ( !questPhaseIndivLists )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            questPhaseIndivLists,
            eventId,
            &value,
            (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               eventId,
                               1,
                               0);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)questPhaseIndivLists,
                                QuestIdListByGroupId,
                                0);
      v9 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      v10 = eventId;
LABEL_23:
      System_Collections_Generic_Dictionary_int__object___Add(
        questPhaseIndivLists,
        v10,
        v9,
        (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    }
  }
  else
  {
    if ( !questPhaseIndivLists )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            questPhaseIndivLists,
            questId,
            &value,
            (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)questPhaseIndivLists,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32CC8(int___TypeInfo, 1);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      if ( !LODWORD(questPhaseIndivLists->fields._entries) )
        sub_1C32E84(questPhaseIndivLists);
      questPhaseIndivLists->fields._count = this->fields.questId;
      if ( !MasterData_object )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)MasterData_object,
                                (System_Int32_array *)questPhaseIndivLists,
                                0);
      v9 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      v10 = this->fields.questId;
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
  if ( (byte_4C37531 & 1) == 0 )
  {
    sub_1C32C20(&Individuality_TypeInfo);
    byte_4C37531 = 1;
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
    sub_1C32E7C(this);
  max_length = eventIdList->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C32E84(this);
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
    sub_1C32E7C(this);
  max_length = servantEquipFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C32E84(this);
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
    sub_1C32E7C(this);
  max_length = servantFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C32E84(this);
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
    sub_1C32E7C(this);
  max_length = supportEquipFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C32E84(this);
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
    sub_1C32E7C(this);
  max_length = supportFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C32E84(this);
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
  const MethodInfo *v3; // x3

  this->fields._EventCombineCampaignDictionary_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void EventUpValSetupInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37532 & 1) == 0 )
  {
    sub_1C32C20(&EventUpValSetupInfo___c_TypeInfo);
    byte_4C37532 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventUpValSetupInfo___c_TypeInfo->static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventUpValSetupInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetIds, 0);
}


int32_t EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_2(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C32E7C(this);
  return item->fields.eventId;
}


System_Int32_array *EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_3(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C32E7C(this);
  return item->fields.targetIds;
}


int32_t EventUpValSetupInfo___c___AnalyzeInfo_b__56_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
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
  if ( (byte_4C37533 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C37533 = 1;
  }
  if ( !filter
    || (_4__this = v4->fields.__4__this) == 0
    || (eventQuestMaster = v4->fields.eventQuestMaster,
        eventId = filter->fields.eventId,
        questId = _4__this->fields.questId,
        questPhase = _4__this->fields.questPhase,
        (this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || !eventQuestMaster )
  {
    sub_1C32E7C(this);
  }
  return !EventQuestMaster__IsEventNotIncluded(
            eventQuestMaster,
            eventId,
            questId,
            questPhase,
            7,
            (int64_t)this[2].fields.eventQuestMaster,
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_HashSet_int__o *v15; // x26
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_HashSet_int__o *v18; // x27
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_HashSet_int__o *v21; // x28
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_HashSet_int__o *v24; // x29
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_int__o *v27; // x29
  System_Int32_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Int32_array *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Int32_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Int32_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4C37534 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__);
    sub_1C32C20(&EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo);
    byte_4C37534 = 1;
  }
  v11 = sub_1C32E6C(EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C32E7C(v12);
  *(_QWORD *)(v11 + 48) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 48), (int32_t)this, v13, v14);
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 16) = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 16), (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 32) = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v21,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 24) = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 24), (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 40) = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 40), (int32_t)v24, v25, v26);
  v27 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v27,
    (Il2CppObject *)v11,
    Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__,
    0);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (System_Action_T__o *)v27,
    (const MethodInfo_30C8780 *)Method_BasicHelper_ForEach_int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 16),
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantCollectionArray = v28;
  sub_1C32BC4((CGThumbnailListItem_o *)servantCollectionArray, (int32_t)v28, v29, v30);
  v31 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 32),
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantEquipCollectionArray = v31;
  sub_1C32BC4((CGThumbnailListItem_o *)servantEquipCollectionArray, (int32_t)v31, v32, v33);
  v34 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 24),
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportCollectionArray = v34;
  sub_1C32BC4((CGThumbnailListItem_o *)supportCollectionArray, (int32_t)v34, v35, v36);
  v37 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 40),
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportEquipCollectionArray = v37;
  sub_1C32BC4((CGThumbnailListItem_o *)supportEquipCollectionArray, (int32_t)v37, v38, v39);
}


void EventUpValSetupInfo___c__DisplayClass56_1___ctor(
        EventUpValSetupInfo___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


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
  if ( (byte_4C37535 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C37535 = 1;
  }
  entity = 0;
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)CS___8__locals1->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_30;
  if ( !EventFilterMaster__TryGetEntity_41887420((EventFilterMaster_o *)this, &entity, eventId, 0, 0) )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantCollectionList;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
      this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantEquipCollectionList;
      if ( this )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
        this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportCollectionList;
        if ( this )
        {
          System_Collections_Generic_HashSet_int___Add(
            (System_Collections_Generic_HashSet_int__o *)this,
            eventId,
            (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
        (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
          (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity) == 0)
    || (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                entity,
                                                                0),
        (v9 = v4->fields.CS___8__locals1) == 0) )
  {
LABEL_30:
    sub_1C32E7C(this);
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
    (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_4C37536 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4C37536 = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)v6->fields.eventMaster) == 0
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0
    || !a
    || (eventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.eventMaster) == 0
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0) )
  {
    sub_1C32E7C(this);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}