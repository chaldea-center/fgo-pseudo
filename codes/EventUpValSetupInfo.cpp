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
  struct System_Int32_array *Instance; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool v30; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421512D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_B0D8A4(&int___TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_421512D = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
  this->fields.isQuestStart = 1;
  Instance = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
  {
    v33 = sub_B0D9A8(Instance);
    sub_B0D948(v33, 0LL);
  }
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)Instance,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v21,
                                                                                                   v22);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v23,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_B0D97C(Instance);
  }
  v30 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v30 )
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
    Instance = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)questPhaseIndivLists,
    0,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance,
    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v32);
}


void __fastcall EventUpValSetupInfo___ctor_25655088(
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2

  v9 = eventIdList;
  if ( (byte_421512E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, eventIdList);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_B0D8A4(&int___TypeInfo, v12);
    byte_421512E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !v9 )
    v9 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.eventIdList = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v9,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v19,
                                                                                                   v20);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v21,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v28);
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *eventIdList; // x8
  __int64 v16; // x26
  EventUpValSetupInfo_o *v17; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x21
  System_Collections_Generic_List_int__o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x28
  _BOOL4 v29; // w27
  struct System_Int32_array *v30; // x8
  int32_t v31; // w25
  _BOOL4 v32; // w8
  _BOOL4 v33; // w8
  _BOOL4 v34; // w8
  _BOOL4 v35; // w8
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **EnableIdList; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  const MethodInfo *v71; // x1
  __int64 v72; // x0
  System_Collections_Generic_List_int__o *v73; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_421512F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFilterMaster___, ignoreFlg);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884952, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_421512F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_40;
  v16 = *(_QWORD *)&eventIdList->max_length;
  v17 = this;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor_50000500(
    v19,
    v16,
    (const MethodInfo_2FAF274 *)Method_System_Collections_Generic_List_int___ctor___67884952);
  v22 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor_50000500(
    v22,
    v16,
    (const MethodInfo_2FAF274 *)Method_System_Collections_Generic_List_int___ctor___67884952);
  v25 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor_50000500(
    v25,
    v16,
    (const MethodInfo_2FAF274 *)Method_System_Collections_Generic_List_int___ctor___67884952);
  v73 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v26, v27);
  System_Collections_Generic_List_int____ctor_50000500(
    v73,
    v16,
    (const MethodInfo_2FAF274 *)Method_System_Collections_Generic_List_int___ctor___67884952);
  if ( (int)v16 >= 1 )
  {
    v28 = 0LL;
    v29 = ignoreFlg;
    while ( 1 )
    {
      v30 = v17->fields.eventIdList;
      if ( !v30 )
        break;
      if ( v28 >= v30->max_length )
      {
        v72 = sub_B0D9A8(Instance);
        sub_B0D948(v72, 0LL);
      }
      if ( !v18 )
        break;
      v31 = v30->m_Items[v28 + 1];
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        v18,
        &entity,
        v31,
        (const MethodInfo_2669C30 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventFilterEntity__IsServantFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        v32 = ((unsigned __int8)Instance & 1) == 0;
      }
      else
      {
        v32 = 1;
      }
      if ( v32 || v29 )
      {
        if ( !v19 )
          break;
        System_Collections_Generic_List_int___Add(
          v19,
          v31,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          Instance = (DataManager_o *)EventFilterEntity__IsSupportServantFilterNoDisp(
                                        (EventFilterEntity_o *)entity,
                                        0LL);
          v33 = ((unsigned __int8)Instance & 1) == 0;
        }
        else
        {
          v33 = 1;
        }
        if ( v33 || v29 )
        {
          if ( !v25 )
            break;
          System_Collections_Generic_List_int___Add(
            v25,
            v31,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventFilterEntity__IsServantEquipFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        v34 = ((unsigned __int8)Instance & 1) == 0;
      }
      else
      {
        v34 = 1;
      }
      if ( v34 || v29 )
      {
        if ( !v22 )
          break;
        System_Collections_Generic_List_int___Add(
          v22,
          v31,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          Instance = (DataManager_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                        (EventFilterEntity_o *)entity,
                                        0LL);
          v35 = ((unsigned __int8)Instance & 1) == 0;
        }
        else
        {
          v35 = 1;
        }
        if ( v35 || v29 )
        {
          Instance = (DataManager_o *)v73;
          if ( !v73 )
            break;
          System_Collections_Generic_List_int___Add(
            v73,
            v31,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v28 >= (int)v16 )
        goto LABEL_33;
    }
LABEL_40:
    sub_B0D97C(Instance);
  }
LABEL_33:
  if ( !v19 )
    goto LABEL_40;
  v36 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v19,
                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v17->fields.servantFilterEventIdList = (struct System_Int32_array *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v17->fields.servantFilterEventIdList, v36, v37, v38, v39, v40, v41, v42);
  if ( !v22 )
    goto LABEL_40;
  v43 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v22,
                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v17->fields.servantEquipFilterEventIdList = (struct System_Int32_array *)v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->fields.servantEquipFilterEventIdList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !v25 )
    goto LABEL_40;
  v50 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v25,
                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v17->fields.supportFilterEventIdList = (struct System_Int32_array *)v50;
  sub_B0D840((BattleServantConfConponent_o *)&v17->fields.supportFilterEventIdList, v50, v51, v52, v53, v54, v55, v56);
  Instance = (DataManager_o *)v73;
  if ( !v73 )
    goto LABEL_40;
  v57 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v73,
                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v17->fields.supportEquipFilterEventIdList = (struct System_Int32_array *)v57;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->fields.supportEquipFilterEventIdList,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  if ( !Instance )
    goto LABEL_40;
  EnableIdList = (System_Int32_array **)ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)Instance, 0LL);
  v17->fields.servantFilterIdList = (struct System_Int32_array *)EnableIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->fields.servantFilterIdList,
    EnableIdList,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  EventUpValSetupInfo__AnalyzeInfoCampaign(v17, v71);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfoCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  EventCampaignMaster_o *v34; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *v43; // x22
  __int64 v44; // x23
  System_Collections_Generic_List_List_EventCampaignEntity___o *CombineEventCampaigns_28865532; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x20
  int v55; // w26
  BattleServantConfConponent_o *v56; // x22
  _BOOL8 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *klass; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *current; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_int__o *v70; // x24
  _BOOL8 v71; // x0
  __int64 v72; // x0
  int v73; // w8
  TitleInfoControl_EventEndTimeInfo_o *v74; // x25
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x0
  int v83; // w28
  __int64 v84; // x1
  __int64 v85; // x2
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__47_0; // x21
  Il2CppObject *v88; // x22
  struct EventUpValSetupInfo___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v96; // x1
  __int64 v97; // x2
  System_Collections_Generic_List_int__o *v98; // x22
  __int64 v99; // x1
  __int64 v100; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v101; // x21
  int size; // w8
  __int64 v103; // x19
  __int64 v104; // x8
  __int64 v105; // x8
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  struct System_Collections_Generic_List_int____o **p_eventCampaignServantIdList; // x0
  System_Int32_array **v113; // x1
  System_Int32_array **v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  EventUpValSetupInfo_o *v121; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  _BYTE v123[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v124; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v126; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4215130 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventCampaignEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_EventCampaignEntity__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v25);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__47_0__, v29);
    sub_B0D8A4(&Method_EventUpValSetupInfo___c__DisplayClass47_0__AnalyzeInfoCampaign_b__1__, v30);
    sub_B0D8A4(&EventUpValSetupInfo___c__DisplayClass47_0_TypeInfo, v31);
    sub_B0D8A4(&EventUpValSetupInfo___c_TypeInfo, v32);
    byte_4215130 = 1;
  }
  memset(&v126, 0, sizeof(v126));
  memset(&i, 0, sizeof(i));
  v124 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_60;
  v34 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( CombineEventCampaigns )
  {
    v43 = CombineEventCampaigns;
    v44 = sub_B0D974(EventUpValSetupInfo___c__DisplayClass47_0_TypeInfo, v36, v37);
    EventUpValSetupInfo___c__DisplayClass47_0___ctor((EventUpValSetupInfo___c__DisplayClass47_0_o *)v44, 0LL);
    CombineEventCampaigns_28865532 = EventCampaignMaster__GetCombineEventCampaigns_28865532(v34, v43, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !v44 )
      goto LABEL_60;
    *(_QWORD *)(v44 + 16) = Instance;
    v121 = this;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v44 + 16),
      (System_Int32_array **)Instance,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                    v52,
                                                                                                    v53);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v54,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !CombineEventCampaigns_28865532 )
      goto LABEL_60;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v123,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns_28865532,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    object = (Il2CppObject *)v44;
    v55 = 0;
    v56 = (BattleServantConfConponent_o *)(v44 + 24);
    v126 = *(System_Collections_Generic_List_Enumerator_T__o *)v123;
    while ( 1 )
    {
      v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v126,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v57 )
        break;
      klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v56->klass;
      current = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v126.fields.current;
      if ( !v56->klass )
      {
        klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_EventCampaignEntity__TypeInfo,
                                                                            v58,
                                                                            v59);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          klass,
          object,
          Method_EventUpValSetupInfo___c__DisplayClass47_0__AnalyzeInfoCampaign_b__1__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_EventCampaignEntity___ctor__);
        v56->klass = (BattleServantConfConponent_c *)klass;
        sub_B0D840(v56, (System_Int32_array **)klass, v62, v63, v64, v65, v66, v67);
      }
      if ( !current )
        sub_B0D97C(v57);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        current,
        (System_Comparison_T__o *)klass,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
      v70 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v68,
                                                        v69);
      System_Collections_Generic_List_int____ctor(
        v70,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v123,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v123;
            ;
            System_Collections_Generic_List_int___AddRange(
              v70,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current[2].monitor,
              (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v71 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v71 )
          break;
        if ( !i.fields.current )
          sub_B0D97C(v71);
        if ( !v70 )
          sub_B0D97C(v71);
      }
      *(_DWORD *)&v123[4 * v55 + 24] = 186;
      v55 = ++v124;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      if ( v55 )
      {
        v73 = v55 - 1;
        if ( *(_DWORD *)&v123[4 * v55 + 20] == 186 )
        {
          --v55;
          v124 = v73;
        }
      }
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v70 )
        sub_B0D97C(v72);
      v74 = current->fields._items->m_Items[0];
      v75 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                     v70,
                                     (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v74 )
        sub_B0D97C(v75);
      v74[1].klass = (TitleInfoControl_EventEndTimeInfo_c *)v75;
      sub_B0D840((BattleServantConfConponent_o *)&v74[1], v75, v76, v77, v78, v79, v80, v81);
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v54 )
        sub_B0D97C(v82);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v54,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current->fields._items->m_Items[0],
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    }
    *(_DWORD *)&v123[4 * v55 + 24] = 248;
    v83 = ++v124;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v126,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    if ( v83 && *(_DWORD *)&v123[4 * v83 + 20] == 248 )
      v124 = v83 - 1;
    Instance = EventUpValSetupInfo___c_TypeInfo;
    if ( (BYTE3(EventUpValSetupInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    static_fields = (struct EventUpValSetupInfo___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__47_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__47_0;
    if ( !_9__47_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      }
      v88 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                             System_Comparison_EventCampaignEntity__TypeInfo,
                                                                             v84,
                                                                             v85);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__47_0,
        v88,
        Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__47_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_EventCampaignEntity___ctor__);
      v89 = EventUpValSetupInfo___c_TypeInfo->static_fields;
      v89->__9__47_0 = (struct System_Comparison_EventCampaignEntity__o *)_9__47_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v89->__9__47_0,
        (System_Int32_array **)_9__47_0,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
    }
    if ( !v54 )
      goto LABEL_60;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v54,
      (System_Comparison_T__o *)_9__47_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v98 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v96, v97);
    System_Collections_Generic_List_int____ctor(
      v98,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    v101 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_int____TypeInfo,
                                                                                                     v99,
                                                                                                     v100);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v101,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
    size = v54->fields._size;
    if ( size >= 1 )
    {
      v103 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v103 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v104 = *((_QWORD *)&v54->fields._items->obj.klass + v103);
        if ( !v104 || !v98 )
          break;
        System_Collections_Generic_List_int___Add(
          v98,
          *(_DWORD *)(v104 + 16),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v54->fields._size <= (unsigned int)(v103 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v105 = *((_QWORD *)&v54->fields._items->obj.klass + v103);
        if ( !v105 || !v101 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v101,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v105 + 40),
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
        size = v54->fields._size;
        if ( (int)++v103 - 4 >= size )
          goto LABEL_58;
      }
LABEL_60:
      sub_B0D97C(Instance);
    }
    if ( !v98 )
      goto LABEL_60;
LABEL_58:
    v114 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                    v98,
                                    (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    v121->fields.eventCampaignIdList = (struct System_Int32_array *)v114;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v121->fields.eventCampaignIdList,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
    v121->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v101;
    p_eventCampaignServantIdList = &v121->fields.eventCampaignServantIdList;
    v113 = (System_Int32_array **)v101;
  }
  else
  {
    this->fields.eventCampaignIdList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventCampaignIdList, 0LL, v37, v38, v39, v40, v41, v42);
    this->fields.eventCampaignServantIdList = 0LL;
    p_eventCampaignServantIdList = &this->fields.eventCampaignServantIdList;
    v113 = 0LL;
  }
  sub_B0D840((BattleServantConfConponent_o *)p_eventCampaignServantIdList, v113, v106, v107, v108, v109, v110, v111);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *questPhaseIndivLists; // x0
  int questId; // w1
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarBoardEvalValueSquare_CalcEval_o *v15; // x2
  int32_t v16; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  __int64 v18; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215131 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4215131 = 1;
  }
  value = 0LL;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_25:
    sub_B0D97C(questPhaseIndivLists);
  }
  questId = this->fields.questId;
  questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
  if ( questId < 1 )
  {
    if ( !questPhaseIndivLists )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)questPhaseIndivLists,
            eventId,
            &value,
            (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)questPhaseIndivLists, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               eventId,
                               1,
                               0LL);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)questPhaseIndivLists, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      value = (WarBoardEvalValueSquare_CalcEval_o *)QuestPhaseMaster__GetIndividualityList(
                                                      (QuestPhaseMaster_o *)questPhaseIndivLists,
                                                      QuestIdListByGroupId,
                                                      0LL);
      v15 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      v16 = eventId;
LABEL_23:
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        questPhaseIndivLists,
        v16,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v15,
        (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    }
  }
  else
  {
    if ( !questPhaseIndivLists )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)questPhaseIndivLists,
            questId,
            &value,
            (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)questPhaseIndivLists,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      if ( !LODWORD(questPhaseIndivLists->fields.entries) )
      {
        v18 = sub_B0D9A8(questPhaseIndivLists);
        sub_B0D948(v18, 0LL);
      }
      questPhaseIndivLists->fields.count = this->fields.questId;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_25;
      value = (WarBoardEvalValueSquare_CalcEval_o *)QuestPhaseMaster__GetIndividualityList(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_Int32_array *)questPhaseIndivLists,
                                                      0LL);
      v15 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_25;
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


System_Int32_array *__fastcall EventUpValSetupInfo__get_EventCampaignIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.eventCampaignIdList;
}


System_Collections_Generic_List_int____o *__fastcall EventUpValSetupInfo__get_EventCampaignServantIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.eventCampaignServantIdList;
}


int32_t __fastcall EventUpValSetupInfo__get_EventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *eventIdList; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    sub_B0D97C(this);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
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


int32_t __fastcall EventUpValSetupInfo__get_ServantEquipFilterEventId(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  servantEquipFilterEventIdList = this->fields.servantEquipFilterEventIdList;
  if ( !servantEquipFilterEventIdList )
    sub_B0D97C(this);
  v3 = *(_QWORD *)&servantEquipFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return servantEquipFilterEventIdList->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_ServantEquipFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEquipFilterEventIdList;
}


int32_t __fastcall EventUpValSetupInfo__get_ServantFilterEventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  servantFilterEventIdList = this->fields.servantFilterEventIdList;
  if ( !servantFilterEventIdList )
    sub_B0D97C(this);
  v3 = *(_QWORD *)&servantFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return servantFilterEventIdList->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_ServantFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFilterEventIdList;
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_ServantFilterIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantFilterIdList;
}


int32_t __fastcall EventUpValSetupInfo__get_SupportEquipFilterEventId(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *supportEquipFilterEventIdList; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  supportEquipFilterEventIdList = this->fields.supportEquipFilterEventIdList;
  if ( !supportEquipFilterEventIdList )
    sub_B0D97C(this);
  v3 = *(_QWORD *)&supportEquipFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return supportEquipFilterEventIdList->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_SupportEquipFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportEquipFilterEventIdList;
}


int32_t __fastcall EventUpValSetupInfo__get_SupportFilterEventId(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *supportFilterEventIdList; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  supportFilterEventIdList = this->fields.supportFilterEventIdList;
  if ( !supportFilterEventIdList )
    sub_B0D97C(this);
  v3 = *(_QWORD *)&supportFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return supportFilterEventIdList->m_Items[1];
}


System_Int32_array *__fastcall EventUpValSetupInfo__get_SupportFilterEventIdList(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.supportFilterEventIdList;
}


void __fastcall EventUpValSetupInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4210F2C & 1) == 0 )
  {
    sub_B0D8A4(&EventUpValSetupInfo___c_TypeInfo, v1);
    byte_4210F2C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventUpValSetupInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventUpValSetupInfo___c___ctor(EventUpValSetupInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfoCampaign_b__47_0(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  int32_t target; // w9
  int32_t v5; // w8
  int32_t result; // w0

  if ( !a || !b )
    sub_B0D97C(this);
  target = a->fields.target;
  v5 = b->fields.target;
  result = target - v5;
  if ( target == v5 || target == 4 && v5 == 32 || target == 32 && v5 == 4 )
    return b->fields.value - a->fields.value;
  return result;
}


void __fastcall EventUpValSetupInfo___c__DisplayClass47_0___ctor(
        EventUpValSetupInfo___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c__DisplayClass47_0___AnalyzeInfoCampaign_b__1(
        EventUpValSetupInfo___c__DisplayClass47_0_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass47_0_o *v6; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *eventMaster; // x8
  EventUpValSetupInfo___c__DisplayClass47_0_c *klass; // x20

  v6 = this;
  if ( (byte_4210F2D & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)sub_B0D8A4(
                                                            &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
                                                            a);
    byte_4210F2D = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}