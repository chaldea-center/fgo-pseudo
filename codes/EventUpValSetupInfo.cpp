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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Int32_array *Instance; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_Dictionary_int__object__o *v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  bool v36; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v38; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BC7675 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_1C1ABD4(&int___TypeInfo, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BC7675 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v14;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 1;
  this->fields.questId = questId;
  Instance = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
    sub_1C1AE38(Instance, Instance);
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.eventIdList, (int64_t)Instance, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v29,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v29;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseIndivLists,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_1C1AE30(Instance, v22);
  }
  v36 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v36 )
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
    Instance = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)questPhaseIndivLists,
    0,
    &Instance->obj,
    (const MethodInfo_32A22FC *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v38);
}


void __fastcall EventUpValSetupInfo___ctor_40122736(
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_Dictionary_int__object__o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x2

  v9 = eventIdList;
  if ( (byte_4BC7676 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, eventIdList);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_1C1ABD4(&int___TypeInfo, v12);
    byte_4BC7676 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !v9 )
    v9 = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  this->fields.eventIdList = v9;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.eventIdList, (int64_t)v9, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v26,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v26;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseIndivLists,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v33);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Master_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  const MethodInfo *v43; // x6
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x21
  System_Func_object__bool__o *v45; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  EventUpValSetupInfo___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  System_Func_object__int__o *_9__56_1; // x22
  Il2CppObject *v50; // x23
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_int__o *v59; // x1
  const MethodInfo *v60; // x6
  struct System_Int32_array *EnableIdList; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x1

  if ( (byte_4BC7677 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventCampaignMaster___, ignoreFlg);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventFilterMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventQuestMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantFilterMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v11);
    sub_1C1ABD4(&System_Func_EventCampaignEntity__int__TypeInfo, v12);
    sub_1C1ABD4(&System_Func_EventCampaignEntity__bool__TypeInfo, v13);
    sub_1C1ABD4(&Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, v14);
    sub_1C1ABD4(&Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__, v15);
    sub_1C1ABD4(&EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo, v16);
    sub_1C1ABD4(&EventUpValSetupInfo___c_TypeInfo, v17);
    byte_4BC7677 = 1;
  }
  v18 = sub_1C1AE20(EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_20;
  *(_QWORD *)(v18 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_BYTE *)(v18 + 40) = ignoreFlg;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v18 + 32) = Master_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)Master_object, v28, v29, v30, v31, v32, v33);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v35 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventQuestMaster___);
  *(_QWORD *)(v18 + 16) = v35;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)v35, v36, v37, v38, v39, v40, v41);
  if ( !v34 )
    goto LABEL_20;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)v34, 0LL, 0LL);
  if ( FriendshipUpCampaigns )
  {
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)FriendshipUpCampaigns;
    v45 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v45,
      (Il2CppObject *)v18,
      Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__,
      0LL);
    v46 = System_Linq_Enumerable__Where_object_(
            v44,
            (System_Func_TSource__bool__o *)v45,
            (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v47 = EventUpValSetupInfo___c_TypeInfo;
    v48 = v46;
    if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      v47 = EventUpValSetupInfo___c_TypeInfo;
    }
    _9__56_1 = (System_Func_object__int__o *)v47->static_fields->__9__56_1;
    if ( !_9__56_1 )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v47 = EventUpValSetupInfo___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v47->static_fields->__9;
      _9__56_1 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_EventCampaignEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__56_1, v50, Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, 0LL);
      static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      static_fields->__9__56_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__56_1;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__56_1,
        (int64_t)_9__56_1,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v48,
                                                                 (System_Func_TSource__TResult__o *)_9__56_1,
                                                                 (const MethodInfo_2FD0368 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    v59 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__ToArray_int_(
                                                             v58,
                                                             (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    v59 = 0LL;
  }
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v18,
    v59,
    &this->fields.servantFilterEventCampaignIds,
    &this->fields.servantEquipFilterEventCampaignIds,
    &this->fields.supportFilterEventCampaignIds,
    &this->fields.supportEquipFilterEventCampaignIds,
    v43);
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v18,
    (System_Collections_Generic_IEnumerable_int__o *)this->fields.eventIdList,
    &this->fields.servantFilterEventIds,
    &this->fields.servantEquipFilterEventIds,
    &this->fields.supportFilterEventIds,
    &this->fields.supportEquipFilterEventIds,
    v60);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !v19 )
LABEL_20:
    sub_1C1AE30(v19, v20);
  EnableIdList = ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)v19, 0LL);
  this->fields.servantFilterIds = EnableIdList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.servantFilterIds,
    (int64_t)EnableIdList,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(this, v68);
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  void *Instance; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v36; // x1
  EventCampaignMaster_o *v37; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v39; // x22
  __int64 v40; // x23
  System_Collections_Generic_List_object__o *CombineEventCampaigns_40302212; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_List_object__o *v48; // x20
  PartyOrganizationUtility_o *v49; // x22
  _BOOL8 v50; // x0
  __int64 v51; // x1
  System_Comparison_T__o *klass; // x24
  Il2CppObject *current; // x23
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_int__o *v60; // x24
  _BOOL8 v61; // x0
  __int64 v62; // x1
  Il2CppObject *Item; // x0
  __int64 v64; // x1
  Il2CppObject *v65; // x25
  System_Int32_array *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  System_Comparison_T__o *v85; // x21
  Il2CppObject *v86; // x22
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  EventUpValSetupInfo___c_c *v94; // x0
  System_Func_object__bool__o *_9__57_1; // x21
  Il2CppObject *v96; // x22
  struct EventUpValSetupInfo___c_StaticFields *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x0
  EventUpValSetupInfo___c_c *v105; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x20
  System_Func_object__int__o *_9__57_2; // x21
  Il2CppObject *v108; // x22
  struct EventUpValSetupInfo___c_StaticFields *v109; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_Func_object__object__o *_9__57_3; // x22
  Il2CppObject *v117; // x23
  struct EventUpValSetupInfo___c_StaticFields *v118; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  EventUpValSetupInfo_o *v131; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v133; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BC7678 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Comparison_EventCampaignEntity__TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v12);
    sub_1C1ABD4(&System_Func_EventCampaignEntity__int__TypeInfo, v13);
    sub_1C1ABD4(&System_Func_EventCampaignEntity__bool__TypeInfo, v14);
    sub_1C1ABD4(&System_Func_EventCampaignEntity__int____TypeInfo, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__AddRange__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v21);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v24);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1C1ABD4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v26);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1C1ABD4(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__, v28);
    sub_1C1ABD4(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__, v29);
    sub_1C1ABD4(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__, v30);
    sub_1C1ABD4(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__, v31);
    sub_1C1ABD4(&Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__, v32);
    sub_1C1ABD4(&EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo, v33);
    sub_1C1ABD4(&EventUpValSetupInfo___c_TypeInfo, v34);
    byte_4BC7678 = 1;
  }
  memset(&v135, 0, sizeof(v135));
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_61;
  v37 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return;
  v39 = CombineEventCampaigns;
  v40 = sub_1C1AE20(EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  CombineEventCampaigns_40302212 = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns_40302212(
                                                                                  v37,
                                                                                  v39,
                                                                                  0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v40 )
    goto LABEL_61;
  v131 = this;
  *(_QWORD *)(v40 + 16) = Instance;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)Instance, v42, v43, v44, v45, v46, v47);
  v48 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !CombineEventCampaigns_40302212 )
    goto LABEL_61;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v133,
    CombineEventCampaigns_40302212,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  object = (Il2CppObject *)v40;
  v49 = (PartyOrganizationUtility_o *)(v40 + 24);
  v135 = v133;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v135,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v50 )
      break;
    klass = (System_Comparison_T__o *)v49->klass;
    current = v135.fields._current;
    if ( !v49->klass )
    {
      klass = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_object____ctor(
        klass,
        object,
        Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__,
        0LL);
      v49->klass = (PartyOrganizationUtility_c *)klass;
      sub_1C1AB78(v49, (int64_t)klass, v54, v55, v56, v57, v58, v59);
    }
    if ( !current )
      sub_1C1AE30(v50, v51);
    System_Collections_Generic_List_object___Sort_56877908(
      (System_Collections_Generic_List_object__o *)current,
      klass,
      (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v60 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v60,
      (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v133,
      (System_Collections_Generic_List_object__o *)current,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v133;
          ;
          System_Collections_Generic_List_int___AddRange(
            v60,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current[2].monitor,
            (const MethodInfo_361FA78 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v61 )
        break;
      if ( !i.fields._current )
        sub_1C1AE30(v61, v62);
      if ( !v60 )
        sub_1C1AE30(v61, v62);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !v60 )
      sub_1C1AE30(Item, v64);
    v65 = Item;
    v66 = System_Collections_Generic_List_int___ToArray(
            v60,
            (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v65 )
      sub_1C1AE30(v66, v66);
    v65[2].monitor = v66;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v65[2].monitor, (int64_t)v66, v67, v68, v69, v70, v71, v72);
    v73 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)current,
            0,
            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    v80 = (int64_t)v73;
    if ( !v48 )
      sub_1C1AE30(v73, v73);
    items = v48->fields._items;
    v82 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v48->fields._version;
    if ( !items )
      sub_1C1AE30(v73, v73);
    size = v48->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v48,
        v73,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = &items->obj.klass + size;
      v48->fields._size = size + 1;
      v84[4] = (Il2CppClass *)v80;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v84 + 4), v80, v74, v75, v76, v77, v78, v79);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v135,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  Instance = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    Instance = EventUpValSetupInfo___c_TypeInfo;
  }
  v85 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v85 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    v86 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v85 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_object____ctor(
      v85,
      v86,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__,
      0LL);
    static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_EventCampaignEntity__o *)v85;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__57_0, (int64_t)v85, v88, v89, v90, v91, v92, v93);
  }
  if ( !v48 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_56877908(
    v48,
    v85,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  v94 = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v94 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v94->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v94->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v94);
      v94 = EventUpValSetupInfo___c_TypeInfo;
    }
    v96 = (Il2CppObject *)v94->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__57_1,
      v96,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__,
      0LL);
    v97 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v97->__9__57_1 = (struct System_Func_EventCampaignEntity__bool__o *)_9__57_1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v97->__9__57_1, (int64_t)_9__57_1, v98, v99, v100, v101, v102, v103);
  }
  v104 = System_Linq_Enumerable__Where_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v48,
           (System_Func_TSource__bool__o *)_9__57_1,
           (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  v105 = EventUpValSetupInfo___c_TypeInfo;
  v106 = v104;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v105 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_2 = (System_Func_object__int__o *)v105->static_fields->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = EventUpValSetupInfo___c_TypeInfo;
    }
    v108 = (Il2CppObject *)v105->static_fields->__9;
    _9__57_2 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__57_2,
      v108,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__,
      0LL);
    v109 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v109->__9__57_2 = (struct System_Func_EventCampaignEntity__int__o *)_9__57_2;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v109->__9__57_2, (int64_t)_9__57_2, v110, v111, v112, v113, v114, v115);
    v105 = EventUpValSetupInfo___c_TypeInfo;
  }
  if ( !v105->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v105);
    v105 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_3 = (System_Func_object__object__o *)v105->static_fields->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = EventUpValSetupInfo___c_TypeInfo;
    }
    v117 = (Il2CppObject *)v105->static_fields->__9;
    _9__57_3 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_EventCampaignEntity__int____TypeInfo);
    System_Func_object__object____ctor(
      _9__57_3,
      v117,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__,
      0LL);
    v118 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v118->__9__57_3 = (struct System_Func_EventCampaignEntity__int____o *)_9__57_3;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v118->__9__57_3, (int64_t)_9__57_3, v119, v120, v121, v122, v123, v124);
  }
  v36 = System_Linq_Enumerable__ToDictionary_object__int__object_(
          v106,
          (System_Func_TSource__TKey__o *)_9__57_2,
          (System_Func_TSource__TElement__o *)_9__57_3,
          (const MethodInfo_2FD95D0 *)Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
  Instance = v131;
  if ( !v131 )
LABEL_61:
    sub_1C1AE30(Instance, v36);
  v131->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v36;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v131->fields._EventCombineCampaignDictionary_k__BackingField,
    (int64_t)v36,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
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
  if ( (byte_4BC7679 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v8);
    sub_1C1ABD4(&int___TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BC7679 = 1;
  }
  value = 0LL;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_32A225C *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_26:
    sub_1C1AE30(questPhaseIndivLists, *(_QWORD *)&eventId);
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
            (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               v3,
                               1,
                               0LL);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        (const MethodInfo_32A22FC *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
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
            (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)questPhaseIndivLists,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AC7C(int___TypeInfo, 1LL);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      *(_QWORD *)&eventId = questPhaseIndivLists;
      if ( !LODWORD(questPhaseIndivLists->fields._entries) )
        sub_1C1AE38(questPhaseIndivLists, questPhaseIndivLists);
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
  if ( (byte_4BC767A & 1) == 0 )
  {
    sub_1C1ABD4(&Individuality_TypeInfo, questPhaseIndividualityList);
    byte_4BC767A = 1;
  }
  if ( !questIndividualities || !*(_QWORD *)&questIndividualities->max_length )
    return 1;
  if ( !questPhaseIndividualityList || !*(_QWORD *)&questPhaseIndividualityList->max_length )
    return 0;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckIndividualities(questIndividualities, questPhaseIndividualityList, 0LL);
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
    sub_1C1AE30(this, method);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1C1AE38(this, method);
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
    sub_1C1AE30(this, method);
  v3 = *(_QWORD *)&servantEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1C1AE38(this, method);
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
    sub_1C1AE30(this, method);
  v3 = *(_QWORD *)&servantFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1C1AE38(this, method);
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
    sub_1C1AE30(this, method);
  v3 = *(_QWORD *)&supportEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1C1AE38(this, method);
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
    sub_1C1AE30(this, method);
  v3 = *(_QWORD *)&supportFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1C1AE38(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventCombineCampaignDictionary_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventUpValSetupInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC767B & 1) == 0 )
  {
    sub_1C1ABD4(&EventUpValSetupInfo___c_TypeInfo, v1);
    byte_4BC767B = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventUpValSetupInfo___c_TypeInfo->static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)EventUpValSetupInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
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
    sub_1C1AE30(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetIds, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_2(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C1AE30(this, 0LL);
  return item->fields.eventId;
}


System_Int32_array *__fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_3(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C1AE30(this, 0LL);
  return item->fields.targetIds;
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfo_b__56_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C1AE30(this, 0LL);
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
  if ( (byte_4BC767C & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)sub_1C1ABD4(
                                                            &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                                            filter);
    byte_4BC767C = 1;
  }
  if ( !filter
    || (_4__this = v4->fields.__4__this) == 0LL
    || (eventQuestMaster = v4->fields.eventQuestMaster,
        eventId = filter->fields.eventId,
        questId = _4__this->fields.questId,
        questPhase = _4__this->fields.questPhase,
        (this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || !eventQuestMaster )
  {
    sub_1C1AE30(this, filter);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_HashSet_int__o *v26; // x26
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_HashSet_int__o *v33; // x27
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_HashSet_int__o *v40; // x28
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_HashSet_int__o *v47; // x29
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Action_int__o *v54; // x29
  System_Int32_array *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Int32_array *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Int32_array *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Int32_array *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7

  if ( (byte_4BC767D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_int__TypeInfo, eventIds);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_int___, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1C1ABD4(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_1C1ABD4(&Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__, v15);
    sub_1C1ABD4(&EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo, v16);
    byte_4BC767D = 1;
  }
  v17 = sub_1C1AE20(EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1C1AE30(v18, v19);
  *(_QWORD *)(v17 + 48) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)this, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_1C1AE20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_34EFAF4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 16) = v26;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Collections_Generic_HashSet_int__o *)sub_1C1AE20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v33,
    (const MethodInfo_34EFAF4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 32) = v33;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Collections_Generic_HashSet_int__o *)sub_1C1AE20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v40,
    (const MethodInfo_34EFAF4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 24) = v40;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Collections_Generic_HashSet_int__o *)sub_1C1AE20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v47,
    (const MethodInfo_34EFAF4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 40) = v47;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)v47, v48, v49, v50, v51, v52, v53);
  v54 = (System_Action_int__o *)sub_1C1AE20(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v54,
    (Il2CppObject *)v17,
    Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (System_Action_T__o *)v54,
    (const MethodInfo_2F8BAD4 *)Method_BasicHelper_ForEach_int___);
  v55 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 16),
          (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantCollectionArray = v55;
  sub_1C1AB78((PartyOrganizationUtility_o *)servantCollectionArray, (int64_t)v55, v56, v57, v58, v59, v60, v61);
  v62 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 32),
          (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantEquipCollectionArray = v62;
  sub_1C1AB78((PartyOrganizationUtility_o *)servantEquipCollectionArray, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  v69 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 24),
          (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportCollectionArray = v69;
  sub_1C1AB78((PartyOrganizationUtility_o *)supportCollectionArray, (int64_t)v69, v70, v71, v72, v73, v74, v75);
  v76 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 40),
          (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportEquipCollectionArray = v76;
  sub_1C1AB78((PartyOrganizationUtility_o *)supportEquipCollectionArray, (int64_t)v76, v77, v78, v79, v80, v81, v82);
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
  if ( (byte_4BC767E & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)sub_1C1ABD4(
                                                            &Method_System_Collections_Generic_HashSet_int__Add__,
                                                            *(_QWORD *)&eventId);
    byte_4BC767E = 1;
  }
  entity = 0LL;
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)CS___8__locals1->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_30;
  if ( !EventFilterMaster__TryGetEntity_40339768((EventFilterMaster_o *)this, &entity, eventId, 0, 0LL) )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantCollectionList;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_34F0CF8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantEquipCollectionList;
      if ( this )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_34F0CF8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportCollectionList;
        if ( this )
        {
          System_Collections_Generic_HashSet_int___Add(
            (System_Collections_Generic_HashSet_int__o *)this,
            eventId,
            (const MethodInfo_34F0CF8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      (const MethodInfo_34F0CF8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
        (const MethodInfo_34F0CF8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
          (const MethodInfo_34F0CF8 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity) == 0LL)
    || (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                entity,
                                                                0LL),
        (v9 = v4->fields.CS___8__locals1) == 0LL) )
  {
LABEL_30:
    sub_1C1AE30(this, *(_QWORD *)&eventId);
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
    (const MethodInfo_34F0CF8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_4BC767F & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)sub_1C1ABD4(
                                                            &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
                                                            a);
    byte_4BC767F = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_1C1AE30(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}