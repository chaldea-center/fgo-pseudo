// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo___ctor(
        EventUpValSetupInfo_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t eventId,
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
  System_Collections_Generic_Dictionary_int__object__o *v19; // x23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Int32_array *Instance; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_Dictionary_int__object__o *v37; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  bool v44; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v46; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B15DC5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v13, v14);
    sub_1BCA7E0(&int___TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B15DC5 = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  *(_QWORD *)&questId,
                                                                  *(_QWORD *)&questPhase,
                                                                  *(_QWORD *)&eventId);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 1;
  this->fields.questId = questId;
  Instance = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
    sub_1BCAA44(Instance, Instance);
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventIdList, (int64_t)Instance, v28, v29, v30, v31, v32, v33);
  v37 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v34,
                                                                  v35,
                                                                  v36);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v37,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseIndivLists,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v27);
  }
  v44 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v44 )
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
    Instance = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)questPhaseIndivLists,
    0,
    &Instance->obj,
    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo___ctor_39629568(
        EventUpValSetupInfo_o *this,
        System_Int32_array *eventIdList,
        bool ignoreFlg,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  struct System_Int32_array *v9; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_int__object__o *v15; // x24
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_Dictionary_int__object__o *v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x2

  v9 = eventIdList;
  if ( (byte_4B15DC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, eventIdList, ignoreFlg);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11, v12);
    sub_1BCA7E0(&int___TypeInfo, v13, v14);
    byte_4B15DC6 = 1;
  }
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  eventIdList,
                                                                  ignoreFlg,
                                                                  *(_QWORD *)&questId);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v15;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !v9 )
    v9 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.eventIdList = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventIdList, (int64_t)v9, v22, v23, v24, v25, v26, v27);
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v28,
                                                                  v29,
                                                                  v30);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v31;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseIndivLists,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo__AnalyzeInfo(EventUpValSetupInfo_o *this, bool ignoreFlg, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x20
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  Il2CppObject *Master_object; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *v49; // x21
  Il2CppObject *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  const MethodInfo *v61; // x6
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x21
  System_Func_object__bool__o *v63; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  EventUpValSetupInfo___c_c *v68; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x21
  System_Func_object__int__o *_9__56_1; // x22
  Il2CppObject *v71; // x23
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Collections_Generic_IEnumerable_int__o *v80; // x1
  const MethodInfo *v81; // x6
  __int64 v82; // x1
  struct System_Int32_array *EnableIdList; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  const MethodInfo *v90; // x1

  if ( (byte_4B15DC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, ignoreFlg, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventFilterMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventQuestMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v18, v19);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__int__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__bool__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, v24, v25);
    sub_1BCA7E0(&Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__, v26, v27);
    sub_1BCA7E0(&EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&EventUpValSetupInfo___c_TypeInfo, v30, v31);
    byte_4B15DC7 = 1;
  }
  v32 = sub_1BCAA2C(EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo, ignoreFlg, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_20;
  *(_QWORD *)(v32 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 24), (int64_t)this, v35, v36, v37, v38, v39, v40);
  *(_BYTE *)(v32 + 40) = ignoreFlg;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v32 + 32) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)Master_object, v43, v44, v45, v46, v47, v48);
  v49 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v50 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventQuestMaster___);
  *(_QWORD *)(v32 + 16) = v50;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)v50, v51, v52, v53, v54, v55, v56);
  if ( !v49 )
    goto LABEL_20;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)v49, 0LL, 0LL);
  if ( FriendshipUpCampaigns )
  {
    v62 = (System_Collections_Generic_IEnumerable_TSource__o *)FriendshipUpCampaigns;
    v63 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventCampaignEntity__bool__TypeInfo, v58, v59, v60);
    System_Func_object__bool____ctor(
      v63,
      (Il2CppObject *)v32,
      Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__,
      0LL);
    v64 = System_Linq_Enumerable__Where_object_(
            v62,
            (System_Func_TSource__bool__o *)v63,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v68 = EventUpValSetupInfo___c_TypeInfo;
    v69 = v64;
    if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo, v65);
      v68 = EventUpValSetupInfo___c_TypeInfo;
    }
    _9__56_1 = (System_Func_object__int__o *)v68->static_fields->__9__56_1;
    if ( !_9__56_1 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68, v65);
        v68 = EventUpValSetupInfo___c_TypeInfo;
      }
      v71 = (Il2CppObject *)v68->static_fields->__9;
      _9__56_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_EventCampaignEntity__int__TypeInfo,
                                                 v65,
                                                 v66,
                                                 v67);
      System_Func_object__int____ctor(_9__56_1, v71, Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, 0LL);
      static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      static_fields->__9__56_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__56_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__56_1,
        (int64_t)_9__56_1,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v69,
                                                                 (System_Func_TSource__TResult__o *)_9__56_1,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    v80 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__ToArray_int_(
                                                             v79,
                                                             (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    v80 = 0LL;
  }
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v32,
    v80,
    &this->fields.servantFilterEventCampaignIds,
    &this->fields.servantEquipFilterEventCampaignIds,
    &this->fields.supportFilterEventCampaignIds,
    &this->fields.supportEquipFilterEventCampaignIds,
    v61);
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v32,
    (System_Collections_Generic_IEnumerable_int__o *)this->fields.eventIdList,
    &this->fields.servantFilterEventIds,
    &this->fields.servantEquipFilterEventIds,
    &this->fields.supportFilterEventIds,
    &this->fields.supportEquipFilterEventIds,
    v81);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v82);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !v33 )
LABEL_20:
    sub_1BCAA3C(v33, v34);
  EnableIdList = ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)v33, 0LL);
  this->fields.servantFilterIds = EnableIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantFilterIds,
    (int64_t)EnableIdList,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(this, v90);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfoCombineCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  void *Instance; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v69; // x1
  EventCampaignMaster_o *v70; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_EventCampaignEntity__o *v75; // x22
  __int64 v76; // x23
  System_Collections_Generic_List_object__o *CombineEventCampaigns_39815744; // x22
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Collections_Generic_List_object__o *v87; // x20
  PartyOrganizationUtility_o *v88; // x22
  _BOOL8 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Comparison_T__o *klass; // x24
  Il2CppObject *current; // x23
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  System_Collections_Generic_List_int__o *v104; // x24
  _BOOL8 v105; // x0
  __int64 v106; // x1
  Il2CppObject *Item; // x0
  __int64 v108; // x1
  Il2CppObject *v109; // x25
  System_Int32_array *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  Il2CppObject *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x1
  struct System_Object_array *items; // x8
  _QWORD *v126; // x9
  __int64 size; // x10
  Il2CppClass **v128; // x0
  __int64 v129; // x2
  __int64 v130; // x3
  System_Comparison_T__o *v131; // x21
  Il2CppObject *v132; // x22
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  EventUpValSetupInfo___c_c *v143; // x0
  System_Func_object__bool__o *_9__57_1; // x21
  Il2CppObject *v145; // x22
  struct EventUpValSetupInfo___c_StaticFields *v146; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x0
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  EventUpValSetupInfo___c_c *v157; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v158; // x20
  System_Func_object__int__o *_9__57_2; // x21
  Il2CppObject *v160; // x22
  struct EventUpValSetupInfo___c_StaticFields *v161; // x0
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  System_Func_object__object__o *_9__57_3; // x22
  Il2CppObject *v169; // x23
  struct EventUpValSetupInfo___c_StaticFields *v170; // x0
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  EventUpValSetupInfo_o *v183; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v185; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v187; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B15DC8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventCampaignEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v22, v23);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__int__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__bool__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__int____TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v48, v49);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52, v53);
    sub_1BCA7E0(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__, v54, v55);
    sub_1BCA7E0(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__, v56, v57);
    sub_1BCA7E0(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__, v58, v59);
    sub_1BCA7E0(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__, v60, v61);
    sub_1BCA7E0(&Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__, v62, v63);
    sub_1BCA7E0(&EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo, v64, v65);
    sub_1BCA7E0(&EventUpValSetupInfo___c_TypeInfo, v66, v67);
    byte_4B15DC8 = 1;
  }
  memset(&v187, 0, sizeof(v187));
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_61;
  v70 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return;
  v75 = CombineEventCampaigns;
  v76 = sub_1BCAA2C(EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo, v72, v73, v74);
  System_Object___ctor((Il2CppObject *)v76, 0LL);
  CombineEventCampaigns_39815744 = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns_39815744(
                                                                                  v70,
                                                                                  v75,
                                                                                  0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v76 )
    goto LABEL_61;
  v183 = this;
  *(_QWORD *)(v76 + 16) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 16), (int64_t)Instance, v78, v79, v80, v81, v82, v83);
  v87 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v84,
                                                       v85,
                                                       v86);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !CombineEventCampaigns_39815744 )
    goto LABEL_61;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v185,
    CombineEventCampaigns_39815744,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  object = (Il2CppObject *)v76;
  v88 = (PartyOrganizationUtility_o *)(v76 + 24);
  v187 = v185;
  while ( 1 )
  {
    v89 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v187,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v89 )
      break;
    klass = (System_Comparison_T__o *)v88->klass;
    current = v187.fields._current;
    if ( !v88->klass )
    {
      klass = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventCampaignEntity__TypeInfo, v90, v91, v92);
      System_Comparison_object____ctor(
        klass,
        object,
        Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__,
        0LL);
      v88->klass = (PartyOrganizationUtility_c *)klass;
      sub_1BCA784(v88, (int64_t)klass, v95, v96, v97, v98, v99, v100);
    }
    if ( !current )
      sub_1BCAA3C(v89, v90);
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)current,
      klass,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v104 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v101,
                                                       v102,
                                                       v103);
    System_Collections_Generic_List_int____ctor(
      v104,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v185,
      (System_Collections_Generic_List_object__o *)current,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v185;
          ;
          System_Collections_Generic_List_int___AddRange(
            v104,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current[2].monitor,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v105 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v105 )
        break;
      if ( !i.fields._current )
        sub_1BCAA3C(v105, v106);
      if ( !v104 )
        sub_1BCAA3C(v105, v106);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !v104 )
      sub_1BCAA3C(Item, v108);
    v109 = Item;
    v110 = System_Collections_Generic_List_int___ToArray(
             v104,
             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v109 )
      sub_1BCAA3C(v110, v110);
    v109[2].monitor = v110;
    sub_1BCA784((PartyOrganizationUtility_o *)&v109[2].monitor, (int64_t)v110, v111, v112, v113, v114, v115, v116);
    v117 = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    v124 = (int64_t)v117;
    if ( !v87 )
      sub_1BCAA3C(v117, v117);
    items = v87->fields._items;
    v126 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v87->fields._version;
    if ( !items )
      sub_1BCAA3C(v117, v117);
    size = v87->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v87,
        v117,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
    }
    else
    {
      v128 = &items->obj.klass + size;
      v87->fields._size = size + 1;
      v128[4] = (Il2CppClass *)v124;
      sub_1BCA784((PartyOrganizationUtility_o *)(v128 + 4), v124, v118, v119, v120, v121, v122, v123);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v187,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  Instance = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo, v69);
    Instance = EventUpValSetupInfo___c_TypeInfo;
  }
  v131 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v131 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v69);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    v132 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v131 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventCampaignEntity__TypeInfo, v69, v129, v130);
    System_Comparison_object____ctor(
      v131,
      v132,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__,
      0LL);
    static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_EventCampaignEntity__o *)v131;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)v131,
      v134,
      v135,
      v136,
      v137,
      v138,
      v139);
  }
  if ( !v87 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_56244000(
    v87,
    v131,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  v143 = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo, v140);
    v143 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v143->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v143->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v143, v140);
      v143 = EventUpValSetupInfo___c_TypeInfo;
    }
    v145 = (Il2CppObject *)v143->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_EventCampaignEntity__bool__TypeInfo,
                                                v140,
                                                v141,
                                                v142);
    System_Func_object__bool____ctor(
      _9__57_1,
      v145,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__,
      0LL);
    v146 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v146->__9__57_1 = (struct System_Func_EventCampaignEntity__bool__o *)_9__57_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v146->__9__57_1, (int64_t)_9__57_1, v147, v148, v149, v150, v151, v152);
  }
  v153 = System_Linq_Enumerable__Where_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v87,
           (System_Func_TSource__bool__o *)_9__57_1,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  v157 = EventUpValSetupInfo___c_TypeInfo;
  v158 = v153;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo, v154);
    v157 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_2 = (System_Func_object__int__o *)v157->static_fields->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( !v157->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v157, v154);
      v157 = EventUpValSetupInfo___c_TypeInfo;
    }
    v160 = (Il2CppObject *)v157->static_fields->__9;
    _9__57_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_EventCampaignEntity__int__TypeInfo,
                                               v154,
                                               v155,
                                               v156);
    System_Func_object__int____ctor(
      _9__57_2,
      v160,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__,
      0LL);
    v161 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v161->__9__57_2 = (struct System_Func_EventCampaignEntity__int__o *)_9__57_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v161->__9__57_2, (int64_t)_9__57_2, v162, v163, v164, v165, v166, v167);
    v157 = EventUpValSetupInfo___c_TypeInfo;
  }
  if ( !v157->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v157, v154);
    v157 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_3 = (System_Func_object__object__o *)v157->static_fields->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( !v157->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v157, v154);
      v157 = EventUpValSetupInfo___c_TypeInfo;
    }
    v169 = (Il2CppObject *)v157->static_fields->__9;
    _9__57_3 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_EventCampaignEntity__int____TypeInfo,
                                                  v154,
                                                  v155,
                                                  v156);
    System_Func_object__object____ctor(
      _9__57_3,
      v169,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__,
      0LL);
    v170 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v170->__9__57_3 = (struct System_Func_EventCampaignEntity__int____o *)_9__57_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v170->__9__57_3, (int64_t)_9__57_3, v171, v172, v173, v174, v175, v176);
  }
  v69 = System_Linq_Enumerable__ToDictionary_object__int__object_(
          v158,
          (System_Func_TSource__TKey__o *)_9__57_2,
          (System_Func_TSource__TElement__o *)_9__57_3,
          (const MethodInfo_2F4C0E0 *)Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
  Instance = v183;
  if ( !v183 )
LABEL_61:
    sub_1BCAA3C(Instance, v69);
  v183->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v69;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v183->fields._EventCombineCampaignDictionary_k__BackingField,
    (int64_t)v69,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventUpValSetupInfo__GetQuestPhaseIndividualList(
        EventUpValSetupInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
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
  System_Collections_Generic_Dictionary_int__object__o *questPhaseIndivLists; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v20; // x2
  int32_t questId; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = eventId;
  if ( (byte_4B15DC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v11, v12);
    sub_1BCA7E0(&int___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B15DC9 = 1;
  }
  value = 0LL;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_26:
    sub_1BCAA3C(questPhaseIndivLists, *(_QWORD *)&eventId);
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
            (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               v3,
                               1,
                               0LL);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)questPhaseIndivLists,
                                QuestIdListByGroupId,
                                0LL);
      v20 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questId = v3;
LABEL_23:
      System_Collections_Generic_Dictionary_int__object___Add(
        questPhaseIndivLists,
        questId,
        v20,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
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
            (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)questPhaseIndivLists,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCA888(int___TypeInfo, 1LL);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      *(_QWORD *)&eventId = questPhaseIndivLists;
      if ( !LODWORD(questPhaseIndivLists->fields._entries) )
        sub_1BCAA44(questPhaseIndivLists, questPhaseIndivLists);
      questPhaseIndivLists->fields._count = this->fields.questId;
      if ( !MasterData_object )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)MasterData_object,
                                (System_Int32_array *)questPhaseIndivLists,
                                0LL);
      v20 = value;
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
  if ( (byte_4B15DCA & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, questPhaseIndividualityList, questIndividualities);
    byte_4B15DCA = 1;
  }
  if ( !questIndividualities || !*(_QWORD *)&questIndividualities->max_length )
    return 1;
  if ( !questPhaseIndividualityList || !*(_QWORD *)&questPhaseIndividualityList->max_length )
    return 0;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, questPhaseIndividualityList);
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
    sub_1BCAA3C(this, method);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  v3 = *(_QWORD *)&servantEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  v3 = *(_QWORD *)&servantFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  v3 = *(_QWORD *)&supportEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  v3 = *(_QWORD *)&supportFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1BCAA44(this, method);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15DCB & 1) == 0 )
  {
    sub_1BCA7E0(&EventUpValSetupInfo___c_TypeInfo, v1, v2);
    byte_4B15DCB = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventUpValSetupInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventUpValSetupInfo___c_TypeInfo->static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventUpValSetupInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetIds, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_2(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCAA3C(this, 0LL);
  return item->fields.eventId;
}


System_Int32_array *__fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_3(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCAA3C(this, 0LL);
  return item->fields.targetIds;
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfo_b__56_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B15DCC & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)sub_1BCA7E0(
                                                            &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                                            filter,
                                                            method);
    byte_4B15DCC = 1;
  }
  if ( !filter
    || (_4__this = v4->fields.__4__this) == 0LL
    || (eventQuestMaster = v4->fields.eventQuestMaster,
        eventId = filter->fields.eventId,
        questId = _4__this->fields.questId,
        questPhase = _4__this->fields.questPhase,
        (this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || !eventQuestMaster )
  {
    sub_1BCAA3C(this, filter);
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
  __int64 v23; // x24
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_HashSet_int__o *v35; // x26
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_HashSet_int__o *v45; // x27
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_HashSet_int__o *v55; // x28
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_HashSet_int__o *v65; // x29
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Action_int__o *v75; // x29
  System_Int32_array *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Int32_array *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Int32_array *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_Int32_array *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7

  if ( (byte_4B15DCD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, eventIds, servantCollectionArray);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__, v19, v20);
    sub_1BCA7E0(&EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo, v21, v22);
    byte_4B15DCD = 1;
  }
  v23 = sub_1BCAA2C(
          EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo,
          eventIds,
          servantCollectionArray,
          servantEquipCollectionArray);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    sub_1BCAA3C(v24, v25);
  *(_QWORD *)(v23 + 48) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 48), (int64_t)this, v26, v27, v28, v29, v30, v31);
  v35 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_HashSet_int____ctor(
    v35,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v23 + 16) = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v23 + 32) = v45;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)v45, v46, v47, v48, v49, v50, v51);
  v55 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v52,
                                                       v53,
                                                       v54);
  System_Collections_Generic_HashSet_int____ctor(
    v55,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v23 + 24) = v55;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)v55, v56, v57, v58, v59, v60, v61);
  v65 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v62,
                                                       v63,
                                                       v64);
  System_Collections_Generic_HashSet_int____ctor(
    v65,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v23 + 40) = v65;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 40), (int64_t)v65, v66, v67, v68, v69, v70, v71);
  v75 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v72, v73, v74);
  System_Action_int____ctor(
    v75,
    (Il2CppObject *)v23,
    Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (System_Action_T__o *)v75,
    (const MethodInfo_2EFF36C *)Method_BasicHelper_ForEach_int___);
  v76 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v23 + 16),
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantCollectionArray = v76;
  sub_1BCA784((PartyOrganizationUtility_o *)servantCollectionArray, (int64_t)v76, v77, v78, v79, v80, v81, v82);
  v83 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v23 + 32),
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantEquipCollectionArray = v83;
  sub_1BCA784((PartyOrganizationUtility_o *)servantEquipCollectionArray, (int64_t)v83, v84, v85, v86, v87, v88, v89);
  v90 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v23 + 24),
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportCollectionArray = v90;
  sub_1BCA784((PartyOrganizationUtility_o *)supportCollectionArray, (int64_t)v90, v91, v92, v93, v94, v95, v96);
  v97 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v23 + 40),
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportEquipCollectionArray = v97;
  sub_1BCA784((PartyOrganizationUtility_o *)supportEquipCollectionArray, (int64_t)v97, v98, v99, v100, v101, v102, v103);
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
  if ( (byte_4B15DCE & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)sub_1BCA7E0(
                                                            &Method_System_Collections_Generic_HashSet_int__Add__,
                                                            *(_QWORD *)&eventId,
                                                            method);
    byte_4B15DCE = 1;
  }
  entity = 0LL;
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)CS___8__locals1->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_30;
  if ( !EventFilterMaster__TryGetEntity_39853044((EventFilterMaster_o *)this, &entity, eventId, 0, 0LL) )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantCollectionList;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantEquipCollectionList;
      if ( this )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportCollectionList;
        if ( this )
        {
          System_Collections_Generic_HashSet_int___Add(
            (System_Collections_Generic_HashSet_int__o *)this,
            eventId,
            (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
          (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity) == 0LL)
    || (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                entity,
                                                                0LL),
        (v9 = v4->fields.CS___8__locals1) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
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
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_4B15DCF & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)sub_1BCA7E0(
                                                            &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
                                                            a,
                                                            b);
    byte_4B15DCF = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_1BCAA3C(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}