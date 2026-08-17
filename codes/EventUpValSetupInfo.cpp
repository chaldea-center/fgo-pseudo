void EventUpValSetupInfo___ctor(
        EventUpValSetupInfo_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppClass *v16; // x0
  struct System_Int32_array *Instance; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_Dictionary_int__object__o *v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  bool v32; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v34; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5970384 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970384 = 1;
  }
  entity = 0;
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  v16 = int___TypeInfo;
  this->fields.isQuestStart = 1;
  this->fields.questId = questId;
  Instance = (struct System_Int32_array *)sub_2213B20(v16, 1);
  if ( !Instance )
    goto LABEL_10;
  if ( !LODWORD(Instance->max_length) )
    sub_2213CE4(Instance);
  Instance->m_Items[0] = eventId;
  this->fields.eventIdList = Instance;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventIdList,
    (int32_t)Instance,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questPhaseIndivLists,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_10:
    sub_2213CDC(Instance, v18);
  }
  v32 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v32 )
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
    Instance = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)questPhaseIndivLists,
    0,
    &Instance->obj,
    (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v34);
}


void EventUpValSetupInfo___ctor_48741124(
        EventUpValSetupInfo_o *this,
        System_Int32_array *eventIdList,
        bool ignoreFlg,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x2

  if ( (byte_5970385 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_5970385 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
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
    eventIdList = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  this->fields.eventIdList = eventIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventIdList,
    (int32_t)eventIdList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questPhaseIndivLists,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  DataManager_c *v15; // x0
  Il2CppObject *Master_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  const MethodInfo *v32; // x6
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  System_Func_object__bool__o *v34; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  EventUpValSetupInfo___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__50_1; // x22
  Il2CppObject *v41; // x23
  struct EventUpValSetupInfo___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Collections_Generic_IEnumerable_int__o *v50; // x1
  const MethodInfo *v51; // x6
  __int64 v52; // x1
  struct System_Int32_array *EnableIdList; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  const MethodInfo *v60; // x1

  if ( (byte_5970386 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_2213A60(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_2213A60(&Method_EventUpValSetupInfo___c__AnalyzeInfo_b__50_1__);
    sub_2213A60(&Method_EventUpValSetupInfo___c__DisplayClass50_0__AnalyzeInfo_b__0__);
    sub_2213A60(&EventUpValSetupInfo___c__DisplayClass50_0_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo___c_TypeInfo);
    byte_5970386 = 1;
  }
  v5 = sub_2213CCC(EventUpValSetupInfo___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v15 = DataManager_TypeInfo;
  *(_BYTE *)(v5 + 40) = ignoreFlg;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v5 + 32) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)Master_object, v17, v18, v19, v20, v21, v22);
  v23 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___);
  *(_QWORD *)(v5 + 16) = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v24, v25, v26, v27, v28, v29, v30);
  if ( !v23 )
    goto LABEL_20;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)v23, 0, 0);
  if ( FriendshipUpCampaigns )
  {
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)FriendshipUpCampaigns;
    v34 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v5,
      Method_EventUpValSetupInfo___c__DisplayClass50_0__AnalyzeInfo_b__0__,
      0);
    v35 = System_Linq_Enumerable__Where_object_(
            v33,
            (System_Func_TSource__bool__o *)v34,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v37 = EventUpValSetupInfo___c_TypeInfo;
    v38 = v35;
    if ( !*(&EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo, v36);
      v37 = EventUpValSetupInfo___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__50_1 = (System_Func_object__int__o *)static_fields->__9__50_1;
    if ( !_9__50_1 )
    {
      if ( !*(&v37->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v37, v36);
        static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)static_fields->__9;
      _9__50_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventCampaignEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__50_1, v41, Method_EventUpValSetupInfo___c__AnalyzeInfo_b__50_1__, 0);
      v42 = EventUpValSetupInfo___c_TypeInfo->static_fields;
      v42->__9__50_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__50_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->__9__50_1, (int32_t)_9__50_1, v43, v44, v45, v46, v47, v48);
    }
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v38,
                                                                 (System_Func_TSource__TResult__o *)_9__50_1,
                                                                 (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    v50 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__ToArray_int_(
                                                             v49,
                                                             (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    v50 = 0;
  }
  EventUpValSetupInfo___c__DisplayClass50_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass50_0_o *)v5,
    v50,
    &this->fields.servantFilterEventCampaignIds,
    &this->fields.servantEquipFilterEventCampaignIds,
    &this->fields.supportFilterEventCampaignIds,
    &this->fields.supportEquipFilterEventCampaignIds,
    v32);
  EventUpValSetupInfo___c__DisplayClass50_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass50_0_o *)v5,
    (System_Collections_Generic_IEnumerable_int__o *)this->fields.eventIdList,
    &this->fields.servantFilterEventIds,
    &this->fields.servantEquipFilterEventIds,
    &this->fields.supportFilterEventIds,
    &this->fields.supportEquipFilterEventIds,
    v51);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
  v6 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !v6 )
LABEL_20:
    sub_2213CDC(v6, v7);
  EnableIdList = ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)v6, 0);
  this->fields.servantFilterIds = EnableIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantFilterIds,
    (int32_t)EnableIdList,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(this, v60);
}


void EventUpValSetupInfo__AnalyzeInfoCombineCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  EventCampaignMaster_o *v5; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x22
  __int64 v8; // x21
  System_Collections_Generic_List_object__o *CombineEventCampaigns_48946036; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Comparison_T__o *v19; // x23
  Il2CppObject *current; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_int__o *v27; // x25
  __int128 v28; // q0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *Item; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x23
  System_Int32_array *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  Il2CppObject *v48; // x1
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__51_0; // x21
  Il2CppObject *v55; // x22
  struct EventUpValSetupInfo___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 v63; // x1
  EventUpValSetupInfo___c_c *v64; // x0
  struct EventUpValSetupInfo___c_StaticFields *v65; // x8
  System_Func_object__bool__o *_9__51_1; // x21
  Il2CppObject *v67; // x22
  struct EventUpValSetupInfo___c_StaticFields *v68; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  __int64 v76; // x1
  EventUpValSetupInfo___c_c *v77; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x20
  struct EventUpValSetupInfo___c_StaticFields *v79; // x9
  System_Func_object__int__o *_9__51_2; // x21
  Il2CppObject *v81; // x22
  struct EventUpValSetupInfo___c_StaticFields *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct EventUpValSetupInfo___c_StaticFields *v89; // x9
  System_Func_object__object__o *_9__51_3; // x22
  Il2CppObject *v91; // x23
  struct EventUpValSetupInfo___c_StaticFields *v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  EventUpValSetupInfo_o *v105; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5970387 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventCampaignEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__int____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__51_0__);
    sub_2213A60(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__51_1__);
    sub_2213A60(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__51_2__);
    sub_2213A60(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__51_3__);
    sub_2213A60(&Method_EventUpValSetupInfo___c__DisplayClass51_0__AnalyzeInfoCombineCampaign_b__4__);
    sub_2213A60(&EventUpValSetupInfo___c__DisplayClass51_0_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo___c_TypeInfo);
    byte_5970387 = 1;
  }
  memset(&v108, 0, sizeof(v108));
  memset(&v107, 0, sizeof(v107));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_60;
  v5 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return;
  v7 = CombineEventCampaigns;
  v8 = sub_2213CCC(EventUpValSetupInfo___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  CombineEventCampaigns_48946036 = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns_48946036(
                                                                                  v5,
                                                                                  v7,
                                                                                  0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v8 )
    goto LABEL_60;
  v105 = this;
  *(_QWORD *)(v8 + 16) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)Instance, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !CombineEventCampaigns_48946036 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v106,
    CombineEventCampaigns_48946036,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v108 = v106;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v108,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v17 )
      break;
    v19 = *(System_Comparison_T__o **)(v8 + 24);
    current = v108.fields._current;
    if ( !v19 )
    {
      v19 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_object____ctor(
        v19,
        (Il2CppObject *)v8,
        Method_EventUpValSetupInfo___c__DisplayClass51_0__AnalyzeInfoCombineCampaign_b__4__,
        0);
      *(_QWORD *)(v8 + 24) = v19;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)v19, v21, v22, v23, v24, v25, v26);
    }
    if ( !current )
      sub_2213CDC(v17, v18);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)current,
      v19,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v27 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v27,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v106,
      (System_Collections_Generic_List_object__o *)current,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v28 = *(_OWORD *)&v106.fields._list;
    v106.fields._list = 0;
    *(_QWORD *)&v106.fields._index = &v107;
    *(_OWORD *)&v107.fields._list = v28;
    for ( v107.fields._current = v106.fields._current;
          ;
          System_Collections_Generic_List_int___AddRange(
            v27,
            (System_Collections_Generic_IEnumerable_T__o *)v107.fields._current[2].monitor,
            (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v107,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v29 )
        break;
      if ( !v107.fields._current )
        sub_2213CDC(v29, v30);
      if ( !v27 )
        sub_2213CDC(v29, v30);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v107,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !v27 )
      sub_2213CDC(Item, v32);
    v33 = Item;
    v34 = System_Collections_Generic_List_int___ToArray(
            v27,
            (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v33 )
      sub_2213CDC(v34, v34);
    v33[2].monitor = v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33[2].monitor, (int32_t)v34, v35, v36, v37, v38, v39, v40);
    v41 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)current,
            0,
            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    v48 = v41;
    if ( !v16
      || (items = v16->fields._items,
          v50 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
          ++v16->fields._version,
          !items) )
    {
      sub_2213CDC(v41, v41);
    }
    size = v16->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v41,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v52[4] = (Il2CppClass *)v48;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v48, v42, v43, v44, v45, v46, v47);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v108,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  Instance = EventUpValSetupInfo___c_TypeInfo;
  if ( !*(&EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo, v4);
    Instance = EventUpValSetupInfo___c_TypeInfo;
  }
  static_fields = (struct EventUpValSetupInfo___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__51_0 = (System_Comparison_T__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v4);
      static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__51_0,
      v55,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__51_0__,
      0);
    v56 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v56->__9__51_0 = (struct System_Comparison_EventCampaignEntity__o *)_9__51_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->__9__51_0, (int32_t)_9__51_0, v57, v58, v59, v60, v61, v62);
  }
  if ( !v16 )
    goto LABEL_60;
  System_Collections_Generic_List_object___Sort_71849708(
    v16,
    _9__51_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  v64 = EventUpValSetupInfo___c_TypeInfo;
  if ( !*(&EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo, v63);
    v64 = EventUpValSetupInfo___c_TypeInfo;
  }
  v65 = v64->static_fields;
  _9__51_1 = (System_Func_object__bool__o *)v65->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( !*(&v64->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v64, v63);
      v65 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)v65->__9;
    _9__51_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__51_1,
      v67,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__51_1__,
      0);
    v68 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v68->__9__51_1 = (struct System_Func_EventCampaignEntity__bool__o *)_9__51_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v68->__9__51_1, (int32_t)_9__51_1, v69, v70, v71, v72, v73, v74);
  }
  v75 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (System_Func_TSource__bool__o *)_9__51_1,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  v77 = EventUpValSetupInfo___c_TypeInfo;
  v78 = v75;
  if ( !*(&EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo, v76);
    v77 = EventUpValSetupInfo___c_TypeInfo;
  }
  v79 = v77->static_fields;
  _9__51_2 = (System_Func_object__int__o *)v79->__9__51_2;
  if ( !_9__51_2 )
  {
    if ( !*(&v77->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v77, v76);
      v79 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    }
    v81 = (Il2CppObject *)v79->__9;
    _9__51_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__51_2,
      v81,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__51_2__,
      0);
    v82 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v82->__9__51_2 = (struct System_Func_EventCampaignEntity__int__o *)_9__51_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v82->__9__51_2, (int32_t)_9__51_2, v83, v84, v85, v86, v87, v88);
    v77 = EventUpValSetupInfo___c_TypeInfo;
  }
  if ( !*(&v77->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v77, v76);
    v77 = EventUpValSetupInfo___c_TypeInfo;
  }
  v89 = v77->static_fields;
  _9__51_3 = (System_Func_object__object__o *)v89->__9__51_3;
  if ( !_9__51_3 )
  {
    if ( !*(&v77->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v77, v76);
      v89 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    }
    v91 = (Il2CppObject *)v89->__9;
    _9__51_3 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventCampaignEntity__int____TypeInfo);
    System_Func_object__object____ctor(
      _9__51_3,
      v91,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__51_3__,
      0);
    v92 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v92->__9__51_3 = (struct System_Func_EventCampaignEntity__int____o *)_9__51_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v92->__9__51_3, (int32_t)_9__51_3, v93, v94, v95, v96, v97, v98);
  }
  Instance = System_Linq_Enumerable__ToDictionary_object__int__object_(
               v78,
               (System_Func_TSource__TKey__o *)_9__51_2,
               (System_Func_TSource__TElement__o *)_9__51_3,
               (const MethodInfo_389C520 *)Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
  if ( !v105 )
LABEL_60:
    sub_2213CDC(Instance, v4);
  v105->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)Instance;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v105->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)Instance,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *EventUpValSetupInfo__GetQuestPhaseIndividualList(
        EventUpValSetupInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  _BOOL4 isQuestStart; // w8
  System_Collections_Generic_Dictionary_int__object__o *questPhaseIndivLists; // x0
  Il2CppObject *MasterData_object; // x20
  struct System_Collections_Generic_Dictionary_int__int____o *v9; // x8
  Il2CppObject *v10; // x2
  System_Collections_Generic_Dictionary_int__object__o *v11; // x0
  int32_t questId; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *v14; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = eventId;
  if ( (byte_5970388 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970388 = 1;
  }
  isQuestStart = this->fields.isQuestStart;
  value = 0;
  if ( isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_25:
    sub_2213CDC(questPhaseIndivLists, *(_QWORD *)&eventId);
  }
  *(_QWORD *)&eventId = (unsigned int)this->fields.questId;
  questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
  if ( eventId < 1 )
  {
    if ( !questPhaseIndivLists )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            questPhaseIndivLists,
            v3,
            &value,
            (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               v3,
                               1,
                               0);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)QuestPhaseMaster__GetIndividualityList(
                                                                                       (QuestPhaseMaster_o *)questPhaseIndivLists,
                                                                                       QuestIdListByGroupId,
                                                                                       0);
      v14 = this->fields.questPhaseIndivLists;
      value = (Il2CppObject *)questPhaseIndivLists;
      if ( !v14 )
        goto LABEL_25;
      v10 = (Il2CppObject *)questPhaseIndivLists;
      v11 = (System_Collections_Generic_Dictionary_int__object__o *)v14;
      questId = v3;
LABEL_23:
      System_Collections_Generic_Dictionary_int__object___Add(
        v11,
        questId,
        v10,
        (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    }
  }
  else
  {
    if ( !questPhaseIndivLists )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            questPhaseIndivLists,
            eventId,
            &value,
            (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)questPhaseIndivLists,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213B20(int___TypeInfo, 1);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      *(_QWORD *)&eventId = questPhaseIndivLists;
      if ( !LODWORD(questPhaseIndivLists->fields._entries) )
        sub_2213CE4(questPhaseIndivLists);
      questPhaseIndivLists->fields._count = this->fields.questId;
      if ( !MasterData_object )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)QuestPhaseMaster__GetIndividualityList(
                                                                                       (QuestPhaseMaster_o *)MasterData_object,
                                                                                       (System_Int32_array *)questPhaseIndivLists,
                                                                                       0);
      v9 = this->fields.questPhaseIndivLists;
      value = (Il2CppObject *)questPhaseIndivLists;
      if ( !v9 )
        goto LABEL_25;
      v10 = (Il2CppObject *)questPhaseIndivLists;
      v11 = (System_Collections_Generic_Dictionary_int__object__o *)v9;
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
  if ( (byte_5970389 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5970389 = 1;
  }
  if ( !questIndividualities || !questIndividualities->max_length )
    return 1;
  if ( !questPhaseIndividualityList || !questPhaseIndividualityList->max_length )
    return 0;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, questPhaseIndividualityList);
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
    sub_2213CDC(this, method);
  max_length = eventIdList->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_2213CE4(this);
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
    sub_2213CDC(this, method);
  max_length = servantFilterEventIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_2213CE4(this);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventCombineCampaignDictionary_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventUpValSetupInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597038A & 1) == 0 )
  {
    sub_2213A60(&EventUpValSetupInfo___c_TypeInfo);
    byte_597038A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventUpValSetupInfo___c_TypeInfo->static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventUpValSetupInfo___c_TypeInfo->static_fields,
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


int32_t EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__51_0(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  int32_t target; // w9
  int32_t v5; // w8
  int32_t result; // w0

  if ( !a || !b )
    sub_2213CDC(this, a);
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


bool EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__51_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetIds, 0);
}


int32_t EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__51_2(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_2213CDC(this, 0);
  return item->fields.eventId;
}


System_Int32_array *EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__51_3(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_2213CDC(this, 0);
  return item->fields.targetIds;
}


int32_t EventUpValSetupInfo___c___AnalyzeInfo_b__50_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.eventId;
}


void EventUpValSetupInfo___c__DisplayClass50_0___ctor(
        EventUpValSetupInfo___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventUpValSetupInfo___c__DisplayClass50_0___AnalyzeInfo_b__0(
        EventUpValSetupInfo___c__DisplayClass50_0_o *this,
        EventCampaignEntity_o *filter,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass50_0_o *v4; // x20
  struct EventUpValSetupInfo_o *_4__this; // x8
  EventQuestMaster_o *eventQuestMaster; // x20
  int32_t eventId; // w19
  int32_t questId; // w21
  int32_t questPhase; // w22

  v4 = this;
  if ( (byte_597038B & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass50_0_o *)sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_597038B = 1;
  }
  if ( !filter
    || (_4__this = v4->fields.__4__this) == 0
    || (eventQuestMaster = v4->fields.eventQuestMaster,
        eventId = filter->fields.eventId,
        questId = _4__this->fields.questId,
        questPhase = _4__this->fields.questPhase,
        (this = (EventUpValSetupInfo___c__DisplayClass50_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || !eventQuestMaster )
  {
    sub_2213CDC(this, filter);
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


void EventUpValSetupInfo___c__DisplayClass50_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
        EventUpValSetupInfo___c__DisplayClass50_0_o *this,
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_HashSet_int__o *v20; // x26
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_HashSet_int__o *v27; // x27
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_HashSet_int__o *v34; // x28
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_HashSet_int__o *v41; // x29
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Action_int__o *v48; // x29
  System_Int32_array *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Int32_array *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Int32_array *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_Int32_array *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7

  if ( (byte_597038C & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_EventUpValSetupInfo___c__DisplayClass50_1__AnalyzeInfo_b__3__);
    sub_2213A60(&EventUpValSetupInfo___c__DisplayClass50_1_TypeInfo);
    byte_597038C = 1;
  }
  v11 = sub_2213CCC(EventUpValSetupInfo___c__DisplayClass50_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  *(_QWORD *)(v11 + 48) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 16) = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 32) = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v34,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 24) = v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v41,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v11 + 40) = v41;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v48,
    (Il2CppObject *)v11,
    Method_EventUpValSetupInfo___c__DisplayClass50_1__AnalyzeInfo_b__3__,
    0);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (System_Action_T__o *)v48,
    (const MethodInfo_3811CEC *)Method_BasicHelper_ForEach_int___);
  v49 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 16),
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantCollectionArray = v49;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)servantCollectionArray, (int32_t)v49, v50, v51, v52, v53, v54, v55);
  v56 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 32),
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantEquipCollectionArray = v56;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)servantEquipCollectionArray,
    (int32_t)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 24),
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportCollectionArray = v63;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)supportCollectionArray, (int32_t)v63, v64, v65, v66, v67, v68, v69);
  v70 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v11 + 40),
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportEquipCollectionArray = v70;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)supportEquipCollectionArray,
    (int32_t)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
}


void EventUpValSetupInfo___c__DisplayClass50_1___ctor(
        EventUpValSetupInfo___c__DisplayClass50_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventUpValSetupInfo___c__DisplayClass50_1___AnalyzeInfo_b__3(
        EventUpValSetupInfo___c__DisplayClass50_1_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass50_1_o *v4; // x20
  struct EventUpValSetupInfo___c__DisplayClass50_0_o *CS___8__locals1; // x8
  struct EventUpValSetupInfo___c__DisplayClass50_0_o *v6; // x8
  struct EventUpValSetupInfo___c__DisplayClass50_0_o *v7; // x8
  struct EventUpValSetupInfo___c__DisplayClass50_0_o *v8; // x8
  struct EventUpValSetupInfo___c__DisplayClass50_0_o *v9; // x8
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_597038D & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_597038D = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  entity = 0;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)CS___8__locals1->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_30;
  if ( !EventFilterMaster__TryGetEntity_48991628((EventFilterMaster_o *)this, &entity, eventId, 0, 0) )
  {
    this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)v4->fields.servantCollectionList;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
      this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)v4->fields.servantEquipCollectionList;
      if ( this )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
        this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)v4->fields.supportCollectionList;
        if ( this )
        {
          System_Collections_Generic_HashSet_int___Add(
            (System_Collections_Generic_HashSet_int__o *)this,
            eventId,
            (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_30;
  }
  this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)entity;
  if ( !entity )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)EventFilterEntity__IsServantFilterNoDisp(entity, 0);
  v6 = v4->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_30;
  if ( v6->fields.ignoreFlg || ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)v4->fields.servantCollectionList;
    if ( !this )
      goto LABEL_30;
    System_Collections_Generic_HashSet_int___Add(
      (System_Collections_Generic_HashSet_int__o *)this,
      eventId,
      (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)entity;
    if ( !entity )
      goto LABEL_30;
    this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)EventFilterEntity__IsSupportServantFilterNoDisp(entity, 0);
    v7 = v4->fields.CS___8__locals1;
    if ( !v7 )
      goto LABEL_30;
    if ( v7->fields.ignoreFlg || ((unsigned __int8)this & 1) == 0 )
    {
      this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)v4->fields.supportCollectionList;
      if ( !this )
        goto LABEL_30;
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)entity;
  if ( !entity )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)EventFilterEntity__IsServantEquipFilterNoDisp(entity, 0);
  v8 = v4->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_30;
  if ( !v8->fields.ignoreFlg && ((unsigned __int8)this & 1) != 0 )
    return;
  this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)v4->fields.servantEquipCollectionList;
  if ( !this
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)entity) == 0)
    || (this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                entity,
                                                                0),
        (v9 = v4->fields.CS___8__locals1) == 0) )
  {
LABEL_30:
    sub_2213CDC(this, *(_QWORD *)&eventId);
  }
  if ( !v9->fields.ignoreFlg && ((unsigned __int8)this & 1) != 0 )
    return;
LABEL_27:
  this = (EventUpValSetupInfo___c__DisplayClass50_1_o *)v4->fields.supportEquipCollectionList;
  if ( !this )
    goto LABEL_30;
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    eventId,
    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void EventUpValSetupInfo___c__DisplayClass51_0___ctor(
        EventUpValSetupInfo___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventUpValSetupInfo___c__DisplayClass51_0___AnalyzeInfoCombineCampaign_b__4(
        EventUpValSetupInfo___c__DisplayClass51_0_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass51_0_o *v6; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster; // x8
  EventUpValSetupInfo___c__DisplayClass51_0_c *klass; // x20

  v6 = this;
  if ( (byte_597038E & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass51_0_o *)sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_597038E = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass51_0_o *)v6->fields.eventMaster) == 0
    || (this = (EventUpValSetupInfo___c__DisplayClass51_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0
    || !a
    || (eventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.eventMaster) == 0
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass51_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0) )
  {
    sub_2213CDC(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}