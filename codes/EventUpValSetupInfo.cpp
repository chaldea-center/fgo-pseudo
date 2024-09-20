void __fastcall EventUpValSetupInfo___ctor(
        EventUpValSetupInfo_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Dictionary_int__object__o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  bool v19; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v21; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5AD3C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD3C = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v9;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 1;
  this->fields.questId = questId;
  Instance = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
    sub_1B88814(Instance, Instance);
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)Instance, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseIndivLists, (int32_t)v16, v17, v18);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_1B8880C(Instance, v13);
  }
  v19 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v19 )
  {
    Instance = (struct System_Int32_array *)entity;
    if ( !entity )
      goto LABEL_10;
    Instance = QuestPhaseEntity__GetPrioredIndividuality(entity, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  else
  {
    Instance = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)questPhaseIndivLists,
    0,
    &Instance->obj,
    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v21);
}


void __fastcall EventUpValSetupInfo___ctor_38910068(
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Dictionary_int__object__o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2

  if ( (byte_4A5AD3D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5AD3D = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v11;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !eventIdList )
    eventIdList = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.eventIdList = eventIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)eventIdList, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseIndivLists, (int32_t)v16, v17, v18);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v19);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfo(EventUpValSetupInfo_o *this, bool ignoreFlg, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Master_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  const MethodInfo *v18; // x6
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_Func_object__bool__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  EventUpValSetupInfo___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Func_object__int__o *_9__56_1; // x22
  Il2CppObject *v25; // x23
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_int__o *v30; // x1
  const MethodInfo *v31; // x6
  struct System_Int32_array *EnableIdList; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x1

  if ( (byte_4A5AD3E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1B885B0(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1B885B0(&Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__);
    sub_1B885B0(&Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__);
    sub_1B885B0(&EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo___c_TypeInfo);
    byte_4A5AD3E = 1;
  }
  v5 = sub_1B887FC(EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 40) = ignoreFlg;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v5 + 32) = Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)Master_object, v11, v12);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventQuestMaster___);
  *(_QWORD *)(v5 + 16) = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v14, v15, v16);
  if ( !v13 )
    goto LABEL_20;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)v13, 0LL, 0LL);
  if ( FriendshipUpCampaigns )
  {
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)FriendshipUpCampaigns;
    v20 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v5,
      Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__,
      0LL);
    v21 = System_Linq_Enumerable__Where_object_(
            v19,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v22 = EventUpValSetupInfo___c_TypeInfo;
    v23 = v21;
    if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      v22 = EventUpValSetupInfo___c_TypeInfo;
    }
    _9__56_1 = (System_Func_object__int__o *)v22->static_fields->__9__56_1;
    if ( !_9__56_1 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = EventUpValSetupInfo___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v22->static_fields->__9;
      _9__56_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventCampaignEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__56_1, v25, Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, 0LL);
      static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      static_fields->__9__56_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__56_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_1, (int32_t)_9__56_1, v27, v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v23,
                                                                 (System_Func_TSource__TResult__o *)_9__56_1,
                                                                 (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    v30 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__ToArray_int_(
                                                             v29,
                                                             (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    v30 = 0LL;
  }
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v5,
    v30,
    &this->fields.servantFilterEventCampaignIds,
    &this->fields.servantEquipFilterEventCampaignIds,
    &this->fields.supportFilterEventCampaignIds,
    &this->fields.supportEquipFilterEventCampaignIds,
    v18);
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v5,
    (System_Collections_Generic_IEnumerable_int__o *)this->fields.eventIdList,
    &this->fields.servantFilterEventIds,
    &this->fields.servantEquipFilterEventIds,
    &this->fields.supportFilterEventIds,
    &this->fields.supportEquipFilterEventIds,
    v31);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !v6 )
LABEL_20:
    sub_1B8880C(v6, v7);
  EnableIdList = ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)v6, 0LL);
  this->fields.servantFilterIds = EnableIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantFilterIds, (int32_t)EnableIdList, v33, v34);
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(this, v35);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfoCombineCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v4; // x1
  EventCampaignMaster_o *v5; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x22
  __int64 v8; // x23
  System_Collections_Generic_List_object__o *CombineEventCampaigns_39095772; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  ServantStatusBattleListViewItem_o *v13; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Comparison_T__o *klass; // x24
  Il2CppObject *current; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_int__o *v20; // x24
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *Item; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x25
  System_Int32_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Comparison_T__o *v37; // x21
  Il2CppObject *v38; // x22
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  EventUpValSetupInfo___c_c *v42; // x0
  System_Func_object__bool__o *_9__57_1; // x21
  Il2CppObject *v44; // x22
  struct EventUpValSetupInfo___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  EventUpValSetupInfo___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x20
  System_Func_object__int__o *_9__57_2; // x21
  Il2CppObject *v52; // x22
  struct EventUpValSetupInfo___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_Func_object__object__o *_9__57_3; // x22
  Il2CppObject *v57; // x23
  struct EventUpValSetupInfo___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  EventUpValSetupInfo_o *v63; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A5AD3F & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_EventCampaignEntity__int____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__);
    sub_1B885B0(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__);
    sub_1B885B0(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__);
    sub_1B885B0(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__);
    sub_1B885B0(&Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__);
    sub_1B885B0(&EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo___c_TypeInfo);
    byte_4A5AD3F = 1;
  }
  memset(&v67, 0, sizeof(v67));
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_61;
  v5 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return;
  v7 = CombineEventCampaigns;
  v8 = sub_1B887FC(EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  CombineEventCampaigns_39095772 = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns_39095772(
                                                                                  v5,
                                                                                  v7,
                                                                                  0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v8 )
    goto LABEL_61;
  v63 = this;
  *(_QWORD *)(v8 + 16) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)Instance, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !CombineEventCampaigns_39095772 )
    goto LABEL_61;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    CombineEventCampaigns_39095772,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  object = (Il2CppObject *)v8;
  v13 = (ServantStatusBattleListViewItem_o *)(v8 + 24);
  v67 = v65;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v14 )
      break;
    klass = (System_Comparison_T__o *)v13->klass;
    current = v67.fields._current;
    if ( !v13->klass )
    {
      klass = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_object____ctor(
        klass,
        object,
        Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__,
        0LL);
      v13->klass = (ServantStatusBattleListViewItem_c *)klass;
      sub_1B88554(v13, (int32_t)klass, v18, v19);
    }
    if ( !current )
      sub_1B8880C(v14, v15);
    System_Collections_Generic_List_object___Sort_55571192(
      (System_Collections_Generic_List_object__o *)current,
      klass,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v20 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      (System_Collections_Generic_List_object__o *)current,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v65;
          ;
          System_Collections_Generic_List_int___AddRange(
            v20,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current[2].monitor,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v21 )
        break;
      if ( !i.fields._current )
        sub_1B8880C(v21, v22);
      if ( !v20 )
        sub_1B8880C(v21, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !v20 )
      sub_1B8880C(Item, v24);
    v25 = Item;
    v26 = System_Collections_Generic_List_int___ToArray(
            v20,
            (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v25 )
      sub_1B8880C(v26, v26);
    v25[2].monitor = v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v25[2].monitor, (int32_t)v26, v27, v28);
    v29 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)current,
            0,
            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    v32 = v29;
    if ( !v12 )
      sub_1B8880C(v29, v29);
    items = v12->fields._items;
    v34 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1B8880C(v29, v29);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        v29,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v32;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v32, v30, v31);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  Instance = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    Instance = EventUpValSetupInfo___c_TypeInfo;
  }
  v37 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v37 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    v38 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v37 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_object____ctor(
      v37,
      v38,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__,
      0LL);
    static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_EventCampaignEntity__o *)v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)v37, v40, v41);
  }
  if ( !v12 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_55571192(
    v12,
    v37,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  v42 = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v42 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v42->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = EventUpValSetupInfo___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__57_1,
      v44,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__,
      0LL);
    v45 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v45->__9__57_1 = (struct System_Func_EventCampaignEntity__bool__o *)_9__57_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->__9__57_1, (int32_t)_9__57_1, v46, v47);
  }
  v48 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)_9__57_1,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  v49 = EventUpValSetupInfo___c_TypeInfo;
  v50 = v48;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v49 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_2 = (System_Func_object__int__o *)v49->static_fields->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = EventUpValSetupInfo___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__57_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__57_2,
      v52,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__,
      0LL);
    v53 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v53->__9__57_2 = (struct System_Func_EventCampaignEntity__int__o *)_9__57_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v53->__9__57_2, (int32_t)_9__57_2, v54, v55);
    v49 = EventUpValSetupInfo___c_TypeInfo;
  }
  if ( !v49->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v49);
    v49 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_3 = (System_Func_object__object__o *)v49->static_fields->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = EventUpValSetupInfo___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v49->static_fields->__9;
    _9__57_3 = (System_Func_object__object__o *)sub_1B887FC(System_Func_EventCampaignEntity__int____TypeInfo);
    System_Func_object__object____ctor(
      _9__57_3,
      v57,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__,
      0LL);
    v58 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v58->__9__57_3 = (struct System_Func_EventCampaignEntity__int____o *)_9__57_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v58->__9__57_3, (int32_t)_9__57_3, v59, v60);
  }
  v4 = System_Linq_Enumerable__ToDictionary_object__int__object_(
         v50,
         (System_Func_TSource__TKey__o *)_9__57_2,
         (System_Func_TSource__TElement__o *)_9__57_3,
         (const MethodInfo_2EB8D68 *)Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
  Instance = v63;
  if ( !v63 )
LABEL_61:
    sub_1B8880C(Instance, v4);
  v63->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v4;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v63->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v4,
    v61,
    v62);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventUpValSetupInfo__GetQuestPhaseIndividualList(
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
  if ( (byte_4A5AD40 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD40 = 1;
  }
  value = 0LL;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_26:
    sub_1B8880C(questPhaseIndivLists, *(_QWORD *)&eventId);
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
            (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               v3,
                               1,
                               0LL);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)questPhaseIndivLists,
                                QuestIdListByGroupId,
                                0LL);
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
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
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
            (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)questPhaseIndivLists,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B88658(int___TypeInfo, 1LL);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      *(_QWORD *)&eventId = questPhaseIndivLists;
      if ( !LODWORD(questPhaseIndivLists->fields._entries) )
        sub_1B88814(questPhaseIndivLists, questPhaseIndivLists);
      questPhaseIndivLists->fields._count = this->fields.questId;
      if ( !MasterData_object )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)MasterData_object,
                                (System_Int32_array *)questPhaseIndivLists,
                                0LL);
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


bool __fastcall EventUpValSetupInfo__IsUpVal(
        EventUpValSetupInfo_o *this,
        System_Int32_array *questPhaseIndividualityList,
        System_Int32_array *questIndividualities,
        const MethodInfo *method)
{
  if ( !questIndividualities || !*(_QWORD *)&questIndividualities->max_length )
    return 1;
  if ( questPhaseIndividualityList && *(_QWORD *)&questPhaseIndividualityList->max_length )
    return Individuality__CheckIndividualities(questIndividualities, questPhaseIndividualityList, 0LL);
  return 0;
}


System_Collections_Generic_Dictionary_int__int____o *__fastcall EventUpValSetupInfo__get_EventCombineCampaignDictionary(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventCombineCampaignDictionary_k__BackingField;
}


int32_t __fastcall EventUpValSetupInfo__get_EventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *eventIdList; // x8
  __int64 v3; // x9

  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    sub_1B8880C(this, method);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B88814(this, method);
  return eventIdList->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_EventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}


bool __fastcall EventUpValSetupInfo__get_IsQuestStart(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  return this->fields.isQuestStart;
}


int32_t __fastcall EventUpValSetupInfo__get_QuestId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall EventUpValSetupInfo__get_QuestPhase(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_ServantEquipFilterEventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEquipFilterEventCampaignIds;
}


int32_t __fastcall EventUpValSetupInfo__get_ServantEquipFilterEventId(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  __int64 v3; // x9

  servantEquipFilterEventIds = this->fields.servantEquipFilterEventIds;
  if ( !servantEquipFilterEventIds )
    sub_1B8880C(this, method);
  v3 = *(_QWORD *)&servantEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B88814(this, method);
  return servantEquipFilterEventIds->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_ServantEquipFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEquipFilterEventIds;
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_ServantFilterEventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFilterEventCampaignIds;
}


int32_t __fastcall EventUpValSetupInfo__get_ServantFilterEventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *servantFilterEventIds; // x8
  __int64 v3; // x9

  servantFilterEventIds = this->fields.servantFilterEventIds;
  if ( !servantFilterEventIds )
    sub_1B8880C(this, method);
  v3 = *(_QWORD *)&servantFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B88814(this, method);
  return servantFilterEventIds->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_ServantFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFilterEventIds;
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_ServantFilterIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFilterIds;
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_SupportEquipFilterEventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportEquipFilterEventCampaignIds;
}


int32_t __fastcall EventUpValSetupInfo__get_SupportEquipFilterEventId(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *supportEquipFilterEventIds; // x8
  __int64 v3; // x9

  supportEquipFilterEventIds = this->fields.supportEquipFilterEventIds;
  if ( !supportEquipFilterEventIds )
    sub_1B8880C(this, method);
  v3 = *(_QWORD *)&supportEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B88814(this, method);
  return supportEquipFilterEventIds->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_SupportEquipFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportEquipFilterEventIds;
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_SupportFilterEventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportFilterEventCampaignIds;
}


int32_t __fastcall EventUpValSetupInfo__get_SupportFilterEventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *supportFilterEventIds; // x8
  __int64 v3; // x9

  supportFilterEventIds = this->fields.supportFilterEventIds;
  if ( !supportFilterEventIds )
    sub_1B8880C(this, method);
  v3 = *(_QWORD *)&supportFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B88814(this, method);
  return supportFilterEventIds->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_SupportFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportFilterEventIds;
}


void __fastcall EventUpValSetupInfo__set_EventCombineCampaignDictionary(
        EventUpValSetupInfo_o *this,
        System_Collections_Generic_Dictionary_int__int____o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EventCombineCampaignDictionary_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventUpValSetupInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AD41 & 1) == 0 )
  {
    sub_1B885B0(&EventUpValSetupInfo___c_TypeInfo);
    byte_4A5AD41 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventUpValSetupInfo___c_TypeInfo->static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventUpValSetupInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall EventUpValSetupInfo___c___ctor(EventUpValSetupInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_0(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  int32_t target; // w9
  int32_t v5; // w8
  int32_t result; // w0

  if ( !a || !b )
    sub_1B8880C(this, a);
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


bool __fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetIds, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_2(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B8880C(this, 0LL);
  return item->fields.eventId;
}


System_Int32_array *__fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_3(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B8880C(this, 0LL);
  return item->fields.targetIds;
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfo_b__56_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.eventId;
}


void __fastcall EventUpValSetupInfo___c__DisplayClass56_0___ctor(
        EventUpValSetupInfo___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_b__0(
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
  if ( (byte_4A5AD42 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5AD42 = 1;
  }
  if ( !filter
    || (_4__this = v4->fields.__4__this) == 0LL
    || (eventQuestMaster = v4->fields.eventQuestMaster,
        eventId = filter->fields.eventId,
        questId = _4__this->fields.questId,
        questPhase = _4__this->fields.questPhase,
        (this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || !eventQuestMaster )
  {
    sub_1B8880C(this, filter);
  }
  return !EventQuestMaster__IsEventNotIncluded(
            eventQuestMaster,
            eventId,
            questId,
            questPhase,
            7,
            (int64_t)this[2].monitor,
            0LL);
}


void __fastcall EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
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
  System_Collections_Generic_HashSet_int__o *v16; // x26
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_HashSet_int__o *v19; // x27
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_HashSet_int__o *v22; // x28
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_HashSet_int__o *v25; // x29
  int32_t v26; // w2
  int32_t v27; // w3
  System_Action_int__o *v28; // x29
  System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A5AD43 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__);
    sub_1B885B0(&EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo);
    byte_4A5AD43 = 1;
  }
  v11 = sub_1B887FC(EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B8880C(v12, v13);
  *(_QWORD *)(v11 + 48) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 48), (int32_t)this, v14, v15);
  v16 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v16,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 16) = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 32) = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 24) = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 40) = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)v25, v26, v27);
  v28 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v28,
    (Il2CppObject *)v11,
    Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (System_Action_T__o *)v28,
    (const MethodInfo_2E6C3A8 *)Method_BasicHelper_ForEach_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 16),
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantCollectionArray = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)servantCollectionArray, (int32_t)v29, v30, v31);
  v32 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 32),
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantEquipCollectionArray = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)servantEquipCollectionArray, (int32_t)v32, v33, v34);
  v35 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 24),
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportCollectionArray = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)supportCollectionArray, (int32_t)v35, v36, v37);
  v38 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 40),
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportEquipCollectionArray = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)supportEquipCollectionArray, (int32_t)v38, v39, v40);
}


void __fastcall EventUpValSetupInfo___c__DisplayClass56_1___ctor(
        EventUpValSetupInfo___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo___c__DisplayClass56_1___AnalyzeInfo_b__3(
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
  if ( (byte_4A5AD44 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4A5AD44 = 1;
  }
  entity = 0LL;
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)CS___8__locals1->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_30;
  if ( !EventFilterMaster__TryGetEntity_39132904((EventFilterMaster_o *)this, &entity, eventId, 0, 0LL) )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantCollectionList;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
      this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantEquipCollectionList;
      if ( this )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
        this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportCollectionList;
        if ( this )
        {
          System_Collections_Generic_HashSet_int___Add(
            (System_Collections_Generic_HashSet_int__o *)this,
            eventId,
            (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_30;
  }
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity;
  if ( !entity )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsServantFilterNoDisp(entity, 0LL);
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
      (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity;
    if ( !entity )
      goto LABEL_30;
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantFilterNoDisp(entity, 0LL);
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
        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity;
  if ( !entity )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsServantEquipFilterNoDisp(entity, 0LL);
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
          (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity) == 0LL)
    || (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                entity,
                                                                0LL),
        (v9 = v4->fields.CS___8__locals1) == 0LL) )
  {
LABEL_30:
    sub_1B8880C(this, *(_QWORD *)&eventId);
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
    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall EventUpValSetupInfo___c__DisplayClass57_0___ctor(
        EventUpValSetupInfo___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c__DisplayClass57_0___AnalyzeInfoCombineCampaign_b__4(
        EventUpValSetupInfo___c__DisplayClass57_0_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass57_0_o *v6; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster; // x8
  EventUpValSetupInfo___c__DisplayClass57_0_c *klass; // x20

  v6 = this;
  if ( (byte_4A5AD45 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4A5AD45 = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_1B8880C(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}