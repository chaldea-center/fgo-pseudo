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
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_int__object__o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  bool v25; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v27; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FBFF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_1B640C8(&int___TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FBFF9 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  *(_QWORD *)&questId,
                                                                  *(_QWORD *)&questPhase);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v14;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 1;
  this->fields.questId = questId;
  Instance = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
    sub_1B6432C(Instance, Instance);
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)Instance, v18, v19);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v20,
                                                                  v21);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseIndivLists, (int32_t)v22, v23, v24);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_1B64324(Instance);
  }
  v25 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v25 )
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
    Instance = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)questPhaseIndivLists,
    0,
    &Instance->obj,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo___ctor_38592760(
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Dictionary_int__object__o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x2

  v9 = eventIdList;
  if ( (byte_49FBFFA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, eventIdList);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_1B640C8(&int___TypeInfo, v12);
    byte_49FBFFA = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  eventIdList,
                                                                  ignoreFlg);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !v9 )
    v9 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.eventIdList = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)v9, v16, v17);
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v18,
                                                                  v19);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseIndivLists, (int32_t)v20, v21, v22);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v23);
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
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *Master_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x6
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  System_Func_object__bool__o *v34; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  EventUpValSetupInfo___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  System_Func_object__int__o *_9__56_1; // x22
  Il2CppObject *v41; // x23
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_int__o *v46; // x1
  const MethodInfo *v47; // x6
  struct System_Int32_array *EnableIdList; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  const MethodInfo *v51; // x1

  if ( (byte_49FBFFB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, ignoreFlg);
    sub_1B640C8(&Method_DataManager_GetMaster_EventFilterMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventQuestMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantFilterMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v11);
    sub_1B640C8(&System_Func_EventCampaignEntity__int__TypeInfo, v12);
    sub_1B640C8(&System_Func_EventCampaignEntity__bool__TypeInfo, v13);
    sub_1B640C8(&Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, v14);
    sub_1B640C8(&Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__, v15);
    sub_1B640C8(&EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo, v16);
    sub_1B640C8(&EventUpValSetupInfo___c_TypeInfo, v17);
    byte_49FBFFB = 1;
  }
  v18 = sub_1B64314(EventUpValSetupInfo___c__DisplayClass56_0_TypeInfo, ignoreFlg, method);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_20;
  *(_QWORD *)(v18 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)this, v20, v21);
  *(_BYTE *)(v18 + 40) = ignoreFlg;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v18 + 32) = Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)Master_object, v23, v24);
  v25 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v26 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventQuestMaster___);
  *(_QWORD *)(v18 + 16) = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v26, v27, v28);
  if ( !v25 )
    goto LABEL_20;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)v25, 0LL, 0LL);
  if ( FriendshipUpCampaigns )
  {
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)FriendshipUpCampaigns;
    v34 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventCampaignEntity__bool__TypeInfo, v30, v31);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v18,
      Method_EventUpValSetupInfo___c__DisplayClass56_0__AnalyzeInfo_b__0__,
      0LL);
    v35 = System_Linq_Enumerable__Where_object_(
            v33,
            (System_Func_TSource__bool__o *)v34,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v38 = EventUpValSetupInfo___c_TypeInfo;
    v39 = v35;
    if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      v38 = EventUpValSetupInfo___c_TypeInfo;
    }
    _9__56_1 = (System_Func_object__int__o *)v38->static_fields->__9__56_1;
    if ( !_9__56_1 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = EventUpValSetupInfo___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__56_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventCampaignEntity__int__TypeInfo, v36, v37);
      System_Func_object__int____ctor(_9__56_1, v41, Method_EventUpValSetupInfo___c__AnalyzeInfo_b__56_1__, 0LL);
      static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      static_fields->__9__56_1 = (struct System_Func_EventCampaignEntity__int__o *)_9__56_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_1, (int32_t)_9__56_1, v43, v44);
    }
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v39,
                                                                 (System_Func_TSource__TResult__o *)_9__56_1,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__int___);
    v46 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__ToArray_int_(
                                                             v45,
                                                             (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    v46 = 0LL;
  }
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v18,
    v46,
    &this->fields.servantFilterEventCampaignIds,
    &this->fields.servantEquipFilterEventCampaignIds,
    &this->fields.supportFilterEventCampaignIds,
    &this->fields.supportEquipFilterEventCampaignIds,
    v32);
  EventUpValSetupInfo___c__DisplayClass56_0___AnalyzeInfo_g__GetDisplayTargetFilterToEventIds_2(
    (EventUpValSetupInfo___c__DisplayClass56_0_o *)v18,
    (System_Collections_Generic_IEnumerable_int__o *)this->fields.eventIdList,
    &this->fields.servantFilterEventIds,
    &this->fields.servantEquipFilterEventIds,
    &this->fields.supportFilterEventIds,
    &this->fields.supportEquipFilterEventIds,
    v47);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !v19 )
LABEL_20:
    sub_1B64324(v19);
  EnableIdList = ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)v19, 0LL);
  this->fields.servantFilterIds = EnableIdList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantFilterIds, (int32_t)EnableIdList, v49, v50);
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(this, v51);
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
  EventCampaignMaster_o *v36; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_EventCampaignEntity__o *v40; // x22
  __int64 v41; // x23
  System_Collections_Generic_List_object__o *CombineEventCampaigns_38775104; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_object__o *v47; // x20
  ServantStatusBattleListViewItem_o *v48; // x22
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  System_Comparison_T__o *klass; // x24
  Il2CppObject *current; // x23
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_int__o *v58; // x24
  _BOOL8 v59; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v61; // x25
  System_Int32_array *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x1
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  System_Comparison_T__o *v75; // x21
  Il2CppObject *v76; // x22
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  __int64 v80; // x1
  __int64 v81; // x2
  EventUpValSetupInfo___c_c *v82; // x0
  System_Func_object__bool__o *_9__57_1; // x21
  Il2CppObject *v84; // x22
  struct EventUpValSetupInfo___c_StaticFields *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  EventUpValSetupInfo___c_c *v91; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x20
  System_Func_object__int__o *_9__57_2; // x21
  Il2CppObject *v94; // x22
  struct EventUpValSetupInfo___c_StaticFields *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_Func_object__object__o *_9__57_3; // x22
  Il2CppObject *v99; // x23
  struct EventUpValSetupInfo___c_StaticFields *v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v103; // x1
  int32_t v104; // w2
  int32_t v105; // w3
  EventUpValSetupInfo_o *v106; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_49FBFFC & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventCampaignEntity__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v12);
    sub_1B640C8(&System_Func_EventCampaignEntity__int__TypeInfo, v13);
    sub_1B640C8(&System_Func_EventCampaignEntity__bool__TypeInfo, v14);
    sub_1B640C8(&System_Func_EventCampaignEntity__int____TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v24);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B640C8(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__, v28);
    sub_1B640C8(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__, v29);
    sub_1B640C8(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__, v30);
    sub_1B640C8(&Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__, v31);
    sub_1B640C8(&Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__, v32);
    sub_1B640C8(&EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo, v33);
    sub_1B640C8(&EventUpValSetupInfo___c_TypeInfo, v34);
    byte_49FBFFC = 1;
  }
  memset(&v110, 0, sizeof(v110));
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_61;
  v36 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return;
  v40 = CombineEventCampaigns;
  v41 = sub_1B64314(EventUpValSetupInfo___c__DisplayClass57_0_TypeInfo, v38, v39);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  CombineEventCampaigns_38775104 = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns_38775104(
                                                                                  v36,
                                                                                  v40,
                                                                                  0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v41 )
    goto LABEL_61;
  v106 = this;
  *(_QWORD *)(v41 + 16) = Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 16), (int32_t)Instance, v43, v44);
  v47 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v45,
                                                       v46);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( !CombineEventCampaigns_38775104 )
    goto LABEL_61;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v108,
    CombineEventCampaigns_38775104,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  object = (Il2CppObject *)v41;
  v48 = (ServantStatusBattleListViewItem_o *)(v41 + 24);
  v110 = v108;
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v110,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v49 )
      break;
    klass = (System_Comparison_T__o *)v48->klass;
    current = v110.fields._current;
    if ( !v48->klass )
    {
      klass = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventCampaignEntity__TypeInfo, v50, v51);
      System_Comparison_object____ctor(
        klass,
        object,
        Method_EventUpValSetupInfo___c__DisplayClass57_0__AnalyzeInfoCombineCampaign_b__4__,
        0LL);
      v48->klass = (ServantStatusBattleListViewItem_c *)klass;
      sub_1B6406C(v48, (int32_t)klass, v54, v55);
    }
    if ( !current )
      sub_1B64324(v49);
    System_Collections_Generic_List_object___Sort_55243320(
      (System_Collections_Generic_List_object__o *)current,
      klass,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v58 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v56, v57);
    System_Collections_Generic_List_int____ctor(
      v58,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v108,
      (System_Collections_Generic_List_object__o *)current,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v108;
          ;
          System_Collections_Generic_List_int___AddRange(
            v58,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current[2].monitor,
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v59 )
        break;
      if ( !i.fields._current )
        sub_1B64324(v59);
      if ( !v58 )
        sub_1B64324(v59);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)current,
             0,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( !v58 )
      sub_1B64324(Item);
    v61 = Item;
    v62 = System_Collections_Generic_List_int___ToArray(
            v58,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v61 )
      sub_1B64324(v62);
    v61[2].monitor = v62;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61[2].monitor, (int32_t)v62, v63, v64);
    v65 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)current,
            0,
            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    v68 = v65;
    if ( !v47 )
      sub_1B64324(v65);
    items = v47->fields._items;
    v70 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v47->fields._version;
    if ( !items )
      sub_1B64324(v65);
    size = v47->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v47,
        v65,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &items->obj.klass + size;
      v47->fields._size = size + 1;
      v72[4] = (Il2CppClass *)v68;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v68, v66, v67);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v110,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  Instance = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    Instance = EventUpValSetupInfo___c_TypeInfo;
  }
  v75 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v75 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    v76 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v75 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventCampaignEntity__TypeInfo, v73, v74);
    System_Comparison_object____ctor(
      v75,
      v76,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_0__,
      0LL);
    static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_EventCampaignEntity__o *)v75;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)v75, v78, v79);
  }
  if ( !v47 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_55243320(
    v47,
    v75,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  v82 = EventUpValSetupInfo___c_TypeInfo;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v82 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v82->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v82->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v82);
      v82 = EventUpValSetupInfo___c_TypeInfo;
    }
    v84 = (Il2CppObject *)v82->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventCampaignEntity__bool__TypeInfo, v80, v81);
    System_Func_object__bool____ctor(
      _9__57_1,
      v84,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_1__,
      0LL);
    v85 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v85->__9__57_1 = (struct System_Func_EventCampaignEntity__bool__o *)_9__57_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v85->__9__57_1, (int32_t)_9__57_1, v86, v87);
  }
  v88 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v47,
          (System_Func_TSource__bool__o *)_9__57_1,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  v91 = EventUpValSetupInfo___c_TypeInfo;
  v92 = v88;
  if ( !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
    v91 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_2 = (System_Func_object__int__o *)v91->static_fields->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( !v91->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v91);
      v91 = EventUpValSetupInfo___c_TypeInfo;
    }
    v94 = (Il2CppObject *)v91->static_fields->__9;
    _9__57_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventCampaignEntity__int__TypeInfo, v89, v90);
    System_Func_object__int____ctor(
      _9__57_2,
      v94,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_2__,
      0LL);
    v95 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v95->__9__57_2 = (struct System_Func_EventCampaignEntity__int__o *)_9__57_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v95->__9__57_2, (int32_t)_9__57_2, v96, v97);
    v91 = EventUpValSetupInfo___c_TypeInfo;
  }
  if ( !v91->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v91);
    v91 = EventUpValSetupInfo___c_TypeInfo;
  }
  _9__57_3 = (System_Func_object__object__o *)v91->static_fields->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( !v91->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v91);
      v91 = EventUpValSetupInfo___c_TypeInfo;
    }
    v99 = (Il2CppObject *)v91->static_fields->__9;
    _9__57_3 = (System_Func_object__object__o *)sub_1B64314(System_Func_EventCampaignEntity__int____TypeInfo, v89, v90);
    System_Func_object__object____ctor(
      _9__57_3,
      v99,
      Method_EventUpValSetupInfo___c__AnalyzeInfoCombineCampaign_b__57_3__,
      0LL);
    v100 = EventUpValSetupInfo___c_TypeInfo->static_fields;
    v100->__9__57_3 = (struct System_Func_EventCampaignEntity__int____o *)_9__57_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v100->__9__57_3, (int32_t)_9__57_3, v101, v102);
  }
  v103 = System_Linq_Enumerable__ToDictionary_object__int__object_(
           v92,
           (System_Func_TSource__TKey__o *)_9__57_2,
           (System_Func_TSource__TElement__o *)_9__57_3,
           (const MethodInfo_2E71A48 *)Method_System_Linq_Enumerable_ToDictionary_EventCampaignEntity__int__int_____);
  Instance = v106;
  if ( !v106 )
LABEL_61:
    sub_1B64324(Instance);
  v106->fields._EventCombineCampaignDictionary_k__BackingField = (struct System_Collections_Generic_Dictionary_int__int____o *)v103;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v106->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)v103,
    v104,
    v105);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventUpValSetupInfo__GetQuestPhaseIndividualList(
        EventUpValSetupInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *questPhaseIndivLists; // x0
  int questId; // w1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v15; // x2
  int32_t v16; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FBFFD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v8);
    sub_1B640C8(&int___TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FBFFD = 1;
  }
  value = 0LL;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_26:
    sub_1B64324(questPhaseIndivLists);
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
            (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               eventId,
                               1,
                               0LL);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)questPhaseIndivLists,
                                                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)questPhaseIndivLists,
                                QuestIdListByGroupId,
                                0LL);
      v15 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      v16 = eventId;
LABEL_23:
      System_Collections_Generic_Dictionary_int__object___Add(
        questPhaseIndivLists,
        v16,
        v15,
        (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
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
            (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)questPhaseIndivLists,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64170(int___TypeInfo, 1LL);
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      if ( !LODWORD(questPhaseIndivLists->fields._entries) )
        sub_1B6432C(questPhaseIndivLists, questPhaseIndivLists);
      questPhaseIndivLists->fields._count = this->fields.questId;
      if ( !MasterData_object )
        goto LABEL_26;
      value = (Il2CppObject *)QuestPhaseMaster__GetIndividualityList(
                                (QuestPhaseMaster_o *)MasterData_object,
                                (System_Int32_array *)questPhaseIndivLists,
                                0LL);
      v15 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_26;
      v16 = this->fields.questId;
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
    sub_1B64324(this);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B6432C(this, method);
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
    sub_1B64324(this);
  v3 = *(_QWORD *)&servantEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B6432C(this, method);
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
    sub_1B64324(this);
  v3 = *(_QWORD *)&servantFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B6432C(this, method);
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
    sub_1B64324(this);
  v3 = *(_QWORD *)&supportEquipFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B6432C(this, method);
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
    sub_1B64324(this);
  v3 = *(_QWORD *)&supportFilterEventIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B6432C(this, method);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventCombineCampaignDictionary_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventUpValSetupInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBFFE & 1) == 0 )
  {
    sub_1B640C8(&EventUpValSetupInfo___c_TypeInfo, v1);
    byte_49FBFFE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventUpValSetupInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventUpValSetupInfo___c_TypeInfo->static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventUpValSetupInfo___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetIds, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_2(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B64324(this);
  return item->fields.eventId;
}


System_Int32_array *__fastcall EventUpValSetupInfo___c___AnalyzeInfoCombineCampaign_b__57_3(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B64324(this);
  return item->fields.targetIds;
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfo_b__56_1(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
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
  if ( (byte_49FBFFF & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)sub_1B640C8(
                                                            &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                                            filter);
    byte_49FBFFF = 1;
  }
  if ( !filter
    || (_4__this = v4->fields.__4__this) == 0LL
    || (eventQuestMaster = v4->fields.eventQuestMaster,
        eventId = filter->fields.eventId,
        questId = _4__this->fields.questId,
        questPhase = _4__this->fields.questPhase,
        (this = (EventUpValSetupInfo___c__DisplayClass56_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || !eventQuestMaster )
  {
    sub_1B64324(this);
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
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_HashSet_int__o *v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_HashSet_int__o *v28; // x27
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_HashSet_int__o *v33; // x28
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_HashSet_int__o *v38; // x29
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_int__o *v43; // x29
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Int32_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Int32_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Int32_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3

  if ( (byte_49FC000 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, eventIds);
    sub_1B640C8(&Method_BasicHelper_ForEach_int___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_1B640C8(&Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__, v15);
    sub_1B640C8(&EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo, v16);
    byte_49FC000 = 1;
  }
  v17 = sub_1B64314(EventUpValSetupInfo___c__DisplayClass56_1_TypeInfo, eventIds, servantCollectionArray);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1B64324(v18);
  *(_QWORD *)(v17 + 48) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)this, v19, v20);
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 16) = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v23, v24, v25);
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v26,
                                                       v27);
  System_Collections_Generic_HashSet_int____ctor(
    v28,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 32) = v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v28, v29, v30);
  v33 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v31,
                                                       v32);
  System_Collections_Generic_HashSet_int____ctor(
    v33,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 24) = v33;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v33, v34, v35);
  v38 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v36,
                                                       v37);
  System_Collections_Generic_HashSet_int____ctor(
    v38,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v17 + 40) = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)v38, v39, v40);
  v43 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v41, v42);
  System_Action_int____ctor(
    v43,
    (Il2CppObject *)v17,
    Method_EventUpValSetupInfo___c__DisplayClass56_1__AnalyzeInfo_b__3__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (System_Action_T__o *)v43,
    (const MethodInfo_2E25F48 *)Method_BasicHelper_ForEach_int___);
  v44 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 16),
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantCollectionArray = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)servantCollectionArray, (int32_t)v44, v45, v46);
  v47 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 32),
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  *servantEquipCollectionArray = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)servantEquipCollectionArray, (int32_t)v47, v48, v49);
  v50 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 24),
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportCollectionArray = v50;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)supportCollectionArray, (int32_t)v50, v51, v52);
  v53 = System_Linq_Enumerable__ToArray_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 40),
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  *supportEquipCollectionArray = v53;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)supportEquipCollectionArray, (int32_t)v53, v54, v55);
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
  if ( (byte_49FC001 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)sub_1B640C8(
                                                            &Method_System_Collections_Generic_HashSet_int__Add__,
                                                            *(_QWORD *)&eventId);
    byte_49FC001 = 1;
  }
  entity = 0LL;
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)CS___8__locals1->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_30;
  if ( !EventFilterMaster__TryGetEntity_38812140((EventFilterMaster_o *)this, &entity, eventId, 0, 0LL) )
  {
    this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantCollectionList;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        eventId,
        (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.servantEquipCollectionList;
      if ( this )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          eventId,
          (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)v4->fields.supportCollectionList;
        if ( this )
        {
          System_Collections_Generic_HashSet_int___Add(
            (System_Collections_Generic_HashSet_int__o *)this,
            eventId,
            (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
        (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
          (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)entity) == 0LL)
    || (this = (EventUpValSetupInfo___c__DisplayClass56_1_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                entity,
                                                                0LL),
        (v9 = v4->fields.CS___8__locals1) == 0LL) )
  {
LABEL_30:
    sub_1B64324(this);
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
    (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_49FC002 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)sub_1B640C8(
                                                            &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
                                                            a);
    byte_49FC002 = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass57_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_1B64324(this);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}