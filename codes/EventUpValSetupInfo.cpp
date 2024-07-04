// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo___ctor(
        EventUpValSetupInfo_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_int__object__o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Int32_array *Instance; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_Dictionary_int__object__o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  bool v24; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v26; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48E240F & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_1B00CCC(&int___TypeInfo, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_48E240F = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v14;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 1;
  this->fields.questId = questId;
  Instance = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
    sub_1B00F30(Instance, Instance);
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)Instance, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v21;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseIndivLists, (int32_t)v21, v22, v23);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_1B00F28(Instance, v18);
  }
  v24 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v24 )
  {
    Instance = (struct System_Int32_array *)entity;
    if ( !entity )
      goto LABEL_10;
    Instance = QuestPhaseEntity__getPrioredIndividuality(entity, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  else
  {
    Instance = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)questPhaseIndivLists,
    0,
    &Instance->obj,
    (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v26);
}


void __fastcall EventUpValSetupInfo___ctor_37684336(
        EventUpValSetupInfo_o *this,
        System_Int32_array *eventIdList,
        bool ignoreFlg,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  struct System_Int32_array *v9; // x21
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__object__o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x2

  v9 = eventIdList;
  if ( (byte_48E2410 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, eventIdList);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_1B00CCC(&int___TypeInfo, v12);
    byte_48E2410 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !v9 )
    v9 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields.eventIdList = v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)v9, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v18;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseIndivLists, (int32_t)v18, v19, v20);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo__AnalyzeInfo(EventUpValSetupInfo_o *this, bool ignoreFlg, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Master_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  const MethodInfo *v31; // x6
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  System_Func_object__bool__o *v33; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  EventUpValSetupInfo___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  System_Func_object__int__o *_9__56_1; // x22
  Il2CppObject *v38; // x23
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_IEnumerable_int__o *v43; // x1
  const MethodInfo *v44; // x6
  struct System_Int32_array *EnableIdList; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  const MethodInfo *v48; // x1

  if ( (byte_48E2411 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCampaignMaster___, ignoreFlg);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventFilterMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventQuestMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantFilterMaster___, v7);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___, v9);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v11);
    sub_1B00CCC(&System_Func_EventCampaignEntity__int__TypeInfo, v12);
    sub_1B00CCC(&System_Func_EventCampaignEntity__bool__TypeInfo, v13);
    sub_1B00CCC(&Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, v14);
    sub_1B00CCC(&Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__, v15);
    sub_1B00CCC(&EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo, v16);
    sub_1B00CCC(&EventUpValSetupInfo___c_TypeInfo, v17);
    byte_48E2411 = 1;
  }
  v18 = sub_1B00F18(EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_20;
  *(_QWORD *)(v18 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)this, v21, v22);
  *(_BYTE *)(v18 + 40) = ignoreFlg;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v18 + 32) = Master_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)Master_object, v24, v25);
  v26 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v27 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventQuestMaster___);
  *(_QWORD *)(v18 + 16) = v27;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v27, v28, v29);
  if ( !v26 )
    goto LABEL_20;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)v26, 0LL, 0LL);
  if ( FriendshipUpCampaigns )
  {
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)FriendshipUpCampaigns;
    v33 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v33,
      (Il2CppObject *)v18,
      Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__,
      0LL);
    v34 = System_Linq_Enumerable__Where_object_(
            v32,
            (System_Func_TSource__bool__o *)v33,
            (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v35 = EventUpValSetupInfo___c_TypeInfo;
    v36 = v34;
    if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      v35 = EventUpValSetupInfo___c_TypeInfo;
    }
    _9__56_1 = (System_Func_object__int__o *)v35->static_fields->__9__56_1;
    if ( !_9__56_1 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = EventUpValSetupInfo___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__56_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_EventCampaignEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__56_1, v38, Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, 0LL);
      static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      static_fields->__9__56_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__56_1;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_1, (int32_t)_9__56_1, v40, v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v36,
                                                                 (System_Func_TSource__TResult__o *)_9__56_1,
                                                                 (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    v43 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__ToArray_int_(
                                                             v42,
                                                             (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    v43 = 0LL;
  }
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v18,
    v43,
    &this->fields.servantFilterEventCampaignIds,
    &this->fields.servantEquipFilterEventCampaignIds,
    &this->fields.supportFilterEventCampaignIds,
    &this->fields.supportEquipFilterEventCampaignIds,
    v31);
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v18,
    (System_Collections_Generic_IEnumerable_int__o *)this->fields.eventIdList,
    &this->fields.servantFilterEventIds,
    &this->fields.servantEquipFilterEventIds,
    &this->fields.supportFilterEventIds,
    &this->fields.supportEquipFilterEventIds,
    v44);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !v19 )
LABEL_20:
    sub_1B00F28(v19, v20);
  EnableIdList = ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)v19, 0LL);
  this->fields.servantFilterIds = EnableIdList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.servantFilterIds, (int32_t)EnableIdList, v46, v47);
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(this, v48);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfoCombineCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  void *Instance; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v33; // x1
  EventCampaignMaster_o *v34; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v36; // x22
  __int64 v37; // x23
  System_Collections_Generic_List_object__o *CombineEventCampaigns_37858492; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_List_object__o *v41; // x20
  ServantStatusBattleListViewItem_o *v42; // x22
  _BOOL8 v43; // x0
  __int64 v44; // x1
  System_Comparison_T__o *klass; // x24
  Il2CppObject *current; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  System_Collections_Generic_List_int__o *v49; // x24
  _BOOL8 v50; // x0
  __int64 v51; // x1
  Il2CppObject *Item; // x0
  __int64 v53; // x1
  Il2CppObject *v54; // x25
  System_Int32_array *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x1
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  System_Comparison_T__o *v66; // x21
  Il2CppObject *v67; // x22
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  EventUpValSetupInfo___c_c *v71; // x0
  System_Func_object__int__o *_9__57_1; // x21
  Il2CppObject *v73; // x22
  struct EventUpValSetupInfo___c_StaticFields *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_Func_object__object__o *_9__57_2; // x22
  Il2CppObject *v78; // x23
  struct EventUpValSetupInfo___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  EventUpValSetupInfo_o *v84; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_48E2412 & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_EventCampaignEntity__TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v11);
    sub_1B00CCC(&System_Func_EventCampaignEntity__int__TypeInfo, v12);
    sub_1B00CCC(&System_Func_EventCampaignEntity__int____TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v22);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1B00CCC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v24);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B00CCC(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__, v26);
    sub_1B00CCC(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__, v27);
    sub_1B00CCC(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__, v28);
    sub_1B00CCC(&Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__3__, v29);
    sub_1B00CCC(&EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo, v30);
    sub_1B00CCC(&EventUpValSetupInfo___c_TypeInfo, v31);
    byte_48E2412 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_55;
  v34 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return;
  v36 = CombineEventCampaigns;
  v37 = sub_1B00F18(EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  CombineEventCampaigns_37858492 = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns_37858492(
                                                                                  v34,
                                                                                  v36,
                                                                                  0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v37 )
    goto LABEL_55;
  v84 = this;
  *(_QWORD *)(v37 + 16) = Instance;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v37 + 16), (int32_t)Instance, v39, v40);
  v41 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !CombineEventCampaigns_37858492 )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    CombineEventCampaigns_37858492,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  object = (Il2CppObject *)v37;
  v42 = (ServantStatusBattleListViewItem_o *)(v37 + 24);
  v88 = v86;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v43 )
      break;
    klass = (System_Comparison_T__o *)v42->klass;
    current = v88.fields._current;
    if ( !v42->klass )
    {
      klass = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_object____ctor(
        klass,
        object,
        Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__3__,
        0LL);
      v42->klass = (ServantStatusBattleListViewItem_c *)klass;
      sub_1B00C70(v42, (int32_t)klass, v47, v48);
    }
    if ( !current )
      sub_1B00F28(v43, v44);
    System_Collections_Generic_List_object___Sort_54277268(
      (System_Collections_Generic_List_object__o *)current,
      klass,
      (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v49 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v49,
      (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v86,
      (System_Collections_Generic_List_object__o *)current,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v86;
          ;
          System_Collections_Generic_List_int___AddRange(
            v49,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current[2].monitor,
            (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v50 )
        break;
      if ( !i.fields._current )
        sub_1B00F28(v50, v51);
      if ( !v49 )
        sub_1B00F28(v50, v51);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !v49 )
      sub_1B00F28(Item, v53);
    v54 = Item;
    v55 = System_Collections_Generic_List_int___ToArray(
            v49,
            (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v54 )
      sub_1B00F28(v55, v55);
    v54[2].monitor = v55;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v54[2].monitor, (int32_t)v55, v56, v57);
    v58 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)current,
            0,
            (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    v61 = v58;
    if ( !v41 )
      sub_1B00F28(v58, v58);
    items = v41->fields._items;
    v63 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v41->fields._version;
    if ( !items )
      sub_1B00F28(v58, v58);
    size = v41->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v41,
        v58,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    }
    else
    {
      v65 = &items->obj.klass + size;
      v41->fields._size = size + 1;
      v65[4] = (Il2CppClass *)v61;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v61, v59, v60);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  Instance = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    Instance = EventUpValSetupInfo___c_TypeInfo;
  }
  v66 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v66 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    v67 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v66 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_object____ctor(
      v66,
      v67,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__,
      0LL);
    static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_EventCampaignEntity__o *)v66;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)v66, v69, v70);
  }
  if ( !v41 )
    goto LABEL_55;
  System_Collections_Generic_List_object___Sort_54277268(
    v41,
    v66,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  v71 = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v71 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__int__o *)v71->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = EventUpValSetupInfo___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v71->static_fields->__9;
    _9__57_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__57_1,
      v73,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__,
      0LL);
    v74 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v74->__9__57_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__57_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v74->__9__57_1, (int32_t)_9__57_1, v75, v76);
    v71 = EventUpValSetupInfo___c_TypeInfo;
  }
  if ( !v71->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v71);
    v71 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_2 = (System_Func_object__object__o *)v71->static_fields->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = EventUpValSetupInfo___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v71->static_fields->__9;
    _9__57_2 = (System_Func_object__object__o *)sub_1B00F18(System_Func_EventCampaignEntity__int____TypeInfo);
    System_Func_object__object____ctor(
      _9__57_2,
      v78,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__,
      0LL);
    v79 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v79->__9__57_2 = (struct System_Func_EventCampaignEntity__int____o *)_9__57_2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v79->__9__57_2, (int32_t)_9__57_2, v80, v81);
  }
  v33 = System_Linq_Enumerable__ToDictionary_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (System_Func_TSource__TKey__o *)_9__57_1,
          (System_Func_TSource__TElement__o *)_9__57_2,
          (const MethodInfo_2D97D40 *)Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
  Instance = v84;
  if ( !v84 )
LABEL_55:
    sub_1B00F28(Instance, v33);
  v84->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v33;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v84->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v33,
    v82,
    v83);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventUpValSetupInfo__GetQuestPhaseIndividualList(
        EventUpValSetupInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *questPhaseIndivLists; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v14; // x2
  int32_t questId; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = eventId;
  if ( (byte_48E2413 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v8);
    sub_1B00CCC(&int___TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_48E2413 = 1;
  }
  value = 0LL;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_303648C *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_26:
    sub_1B00F28(questPhaseIndivLists, *(_QWORD *)&eventId);
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
            (const MethodInfo_3037CB8 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               v3,
                               1,
                               0LL);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)questPhaseIndivLists,
                                QuestIdListByGroupId,
                                0LL);
      v14 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questId = v3;
LABEL_23:
      System_Collections_Generic_Dictionary_int__object___Add(
        questPhaseIndivLists,
        questId,
        v14,
        (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
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
            (const MethodInfo_3037CB8 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)questPhaseIndivLists,
                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00D74(int___TypeInfo, 1LL);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      *(_QWORD *)&eventId = questPhaseIndivLists;
      if ( !LODWORD(questPhaseIndivLists->fields._entries) )
        sub_1B00F30(questPhaseIndivLists, questPhaseIndivLists);
      questPhaseIndivLists->fields._count = this->fields.questId;
      if ( !MasterData_object )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)MasterData_object,
                                (System_Int32_array *)questPhaseIndivLists,
                                0LL);
      v14 = value;
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
    sub_1B00F28(this, method);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B00F30(this, method);
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
    sub_1B00F28(this, method);
  v3 = *(_QWORD *)&servantEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B00F30(this, method);
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
    sub_1B00F28(this, method);
  v3 = *(_QWORD *)&servantFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B00F30(this, method);
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
    sub_1B00F28(this, method);
  v3 = *(_QWORD *)&supportEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B00F30(this, method);
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
    sub_1B00F28(this, method);
  v3 = *(_QWORD *)&supportFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B00F30(this, method);
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
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventUpValSetupInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E2414 & 1) == 0 )
  {
    sub_1B00CCC(&EventUpValSetupInfo___c_TypeInfo, v1);
    byte_48E2414 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventUpValSetupInfo___c_TypeInfo->static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)EventUpValSetupInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B00F28(this, a);
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


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B00F28(this, 0LL);
  return item->fields.eventId;
}


System_Int32_array *__fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_2(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B00F28(this, 0LL);
  return item->fields.targetIds;
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfo_b__56_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B00F28(this, 0LL);
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
  if ( (byte_48E2415 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)sub_1B00CCC(
                                                            &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                                            filter);
    byte_48E2415 = 1;
  }
  if ( !filter
    || (_4__this = v4->fields.__4__this) == 0LL
    || (eventQuestMaster = v4->fields.eventQuestMaster,
        eventId = filter->fields.eventId,
        questId = _4__this->fields.questId,
        questPhase = _4__this->fields.questPhase,
        (this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || !eventQuestMaster )
  {
    sub_1B00F28(this, filter);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x24
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_HashSet_int__o *v22; // x26
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_HashSet_int__o *v25; // x27
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_HashSet_int__o *v28; // x28
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_HashSet_int__o *v31; // x29
  int32_t v32; // w2
  int32_t v33; // w3
  System_Action_int__o *v34; // x29
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Int32_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_48E2416 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_int__TypeInfo, eventIds);
    sub_1B00CCC(&Method_BasicHelper_ForEach_int___, v11);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_1B00CCC(&Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__, v15);
    sub_1B00CCC(&EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo, v16);
    byte_48E2416 = 1;
  }
  v17 = sub_1B00F18(EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1B00F28(v18, v19);
  *(_QWORD *)(v17 + 48) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)this, v20, v21);
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 16) = v22;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 32) = v25;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v28,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 24) = v28;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v28, v29, v30);
  v31 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v31,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 40) = v31;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)v31, v32, v33);
  v34 = (System_Action_int__o *)sub_1B00F18(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v34,
    (Il2CppObject *)v17,
    Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (System_Action_T__o *)v34,
    (const MethodInfo_2D4FB4C *)Method_BasicHelper_ForEach_int___);
  v35 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 16),
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantCollectionArray = v35;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)servantCollectionArray, (int32_t)v35, v36, v37);
  v38 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 32),
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantEquipCollectionArray = v38;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)servantEquipCollectionArray, (int32_t)v38, v39, v40);
  v41 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 24),
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportCollectionArray = v41;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)supportCollectionArray, (int32_t)v41, v42, v43);
  v44 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 40),
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportEquipCollectionArray = v44;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)supportEquipCollectionArray, (int32_t)v44, v45, v46);
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
  if ( (byte_48E2417 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)sub_1B00CCC(
                                                            &Method_System_Collections_Generic_HashSet_int__Add__,
                                                            *(_QWORD *)&eventId);
    byte_48E2417 = 1;
  }
  entity = 0LL;
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)CS___8__locals1->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_30;
  if ( !EventFilterMaster__TryGetEntity_37895528((EventFilterMaster_o *)this, &entity, eventId, 0, 0LL) )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantCollectionList;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
      this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantEquipCollectionList;
      if ( this )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
        this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportCollectionList;
        if ( this )
        {
          System_Collections_Generic_HashSet_int___Add(
            (System_Collections_Generic_HashSet_int__o *)this,
            eventId,
            (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
        (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
          (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity) == 0LL)
    || (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                entity,
                                                                0LL),
        (v9 = v4->fields.CS___8__locals1) == 0LL) )
  {
LABEL_30:
    sub_1B00F28(this, *(_QWORD *)&eventId);
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
    (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall EventUpValSetupInfo___c__DisplayClass57_0___ctor(
        EventUpValSetupInfo___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c__DisplayClass57_0___AnalyzeInfoCombineCampaign_b__3(
        EventUpValSetupInfo___c__DisplayClass57_0_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass57_0_o *v6; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster; // x8
  EventUpValSetupInfo___c__DisplayClass57_0_c *klass; // x20

  v6 = this;
  if ( (byte_48E2418 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)sub_1B00CCC(
                                                            &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
                                                            a);
    byte_48E2418 = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_1B00F28(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}