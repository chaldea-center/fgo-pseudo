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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v22; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  bool v29; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41882BB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_B2C35C(&int___TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_41882BB = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
  this->fields.isQuestStart = 1;
  Instance = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
  {
    v32 = sub_B2C460(Instance);
    sub_B2C400(v32, 0LL);
  }
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)Instance,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v22,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v15);
  }
  v29 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v29 )
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
    Instance = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)questPhaseIndivLists,
    0,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance,
    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v31);
}


void __fastcall EventUpValSetupInfo___ctor_26087716(
        EventUpValSetupInfo_o *this,
        System_Int32_array *eventIdList,
        bool ignoreFlg,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2

  v5 = eventIdList;
  if ( (byte_41882BC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, eventIdList);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    byte_41882BC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = 0;
  if ( !v5 )
    v5 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.eventIdList = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v15,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v22);
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
  struct System_Int32_array *eventIdList; // x8
  __int64 v15; // x26
  EventUpValSetupInfo_o *v16; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x21
  System_Collections_Generic_List_int__o *v18; // x24
  System_Collections_Generic_List_int__o *v19; // x23
  System_Collections_Generic_List_int__o *v20; // x22
  unsigned __int64 v21; // x28
  _BOOL4 v22; // w27
  struct System_Int32_array *v23; // x8
  int32_t v24; // w25
  _BOOL4 v25; // w8
  _BOOL4 v26; // w8
  _BOOL4 v27; // w8
  _BOOL4 v28; // w8
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
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
  System_Int32_array **EnableIdList; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x1
  __int64 v65; // x0
  System_Collections_Generic_List_int__o *v66; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41882BD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFilterMaster___, ignoreFlg);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311392, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_41882BD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFilterMaster___);
  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_40;
  v15 = *(_QWORD *)&eventIdList->max_length;
  v16 = this;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v18 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49701740(
    v18,
    v15,
    (const MethodInfo_2F6636C *)Method_System_Collections_Generic_List_int___ctor___67311392);
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49701740(
    v19,
    v15,
    (const MethodInfo_2F6636C *)Method_System_Collections_Generic_List_int___ctor___67311392);
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49701740(
    v20,
    v15,
    (const MethodInfo_2F6636C *)Method_System_Collections_Generic_List_int___ctor___67311392);
  v66 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49701740(
    v66,
    v15,
    (const MethodInfo_2F6636C *)Method_System_Collections_Generic_List_int___ctor___67311392);
  if ( (int)v15 >= 1 )
  {
    v21 = 0LL;
    v22 = ignoreFlg;
    while ( 1 )
    {
      v23 = v16->fields.eventIdList;
      if ( !v23 )
        break;
      if ( v21 >= v23->max_length )
      {
        v65 = sub_B2C460(Instance);
        sub_B2C400(v65, 0LL);
      }
      if ( !v17 )
        break;
      v24 = v23->m_Items[v21 + 1];
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        v17,
        &entity,
        v24,
        (const MethodInfo_24E412C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventFilterEntity__IsServantFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        v25 = ((unsigned __int8)Instance & 1) == 0;
      }
      else
      {
        v25 = 1;
      }
      if ( v25 || v22 )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_int___Add(
          v18,
          v24,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          Instance = (DataManager_o *)EventFilterEntity__IsSupportServantFilterNoDisp(
                                        (EventFilterEntity_o *)entity,
                                        0LL);
          v26 = ((unsigned __int8)Instance & 1) == 0;
        }
        else
        {
          v26 = 1;
        }
        if ( v26 || v22 )
        {
          if ( !v20 )
            break;
          System_Collections_Generic_List_int___Add(
            v20,
            v24,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventFilterEntity__IsServantEquipFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        v27 = ((unsigned __int8)Instance & 1) == 0;
      }
      else
      {
        v27 = 1;
      }
      if ( v27 || v22 )
      {
        if ( !v19 )
          break;
        System_Collections_Generic_List_int___Add(
          v19,
          v24,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          Instance = (DataManager_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                        (EventFilterEntity_o *)entity,
                                        0LL);
          v28 = ((unsigned __int8)Instance & 1) == 0;
        }
        else
        {
          v28 = 1;
        }
        if ( v28 || v22 )
        {
          Instance = (DataManager_o *)v66;
          if ( !v66 )
            break;
          System_Collections_Generic_List_int___Add(
            v66,
            v24,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v21 >= (int)v15 )
        goto LABEL_33;
    }
LABEL_40:
    sub_B2C434(Instance, v13);
  }
LABEL_33:
  if ( !v18 )
    goto LABEL_40;
  v29 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v18,
                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v16->fields.servantFilterEventIdList = (struct System_Int32_array *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->fields.servantFilterEventIdList, v29, v30, v31, v32, v33, v34, v35);
  if ( !v19 )
    goto LABEL_40;
  v36 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v19,
                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v16->fields.servantEquipFilterEventIdList = (struct System_Int32_array *)v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16->fields.servantEquipFilterEventIdList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !v20 )
    goto LABEL_40;
  v43 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v20,
                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v16->fields.supportFilterEventIdList = (struct System_Int32_array *)v43;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->fields.supportFilterEventIdList, v43, v44, v45, v46, v47, v48, v49);
  Instance = (DataManager_o *)v66;
  if ( !v66 )
    goto LABEL_40;
  v50 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v66,
                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v16->fields.supportEquipFilterEventIdList = (struct System_Int32_array *)v50;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16->fields.supportEquipFilterEventIdList,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  if ( !Instance )
    goto LABEL_40;
  EnableIdList = (System_Int32_array **)ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)Instance, 0LL);
  v16->fields.servantFilterIdList = (struct System_Int32_array *)EnableIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16->fields.servantFilterIdList,
    EnableIdList,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  EventUpValSetupInfo__AnalyzeInfoCampaign(v16, v64);
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
  __int64 v34; // x1
  EventCampaignMaster_o *v35; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *v43; // x22
  __int64 v44; // x23
  System_Collections_Generic_List_List_EventCampaignEntity___o *CombineEventCampaigns_29699708; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x20
  int v53; // w26
  BattleServantConfConponent_o *v54; // x22
  _BOOL8 v55; // x0
  __int64 v56; // x1
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *klass; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *current; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_List_int__o *v65; // x24
  _BOOL8 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x0
  __int64 v69; // x1
  int v70; // w8
  TitleInfoControl_EventEndTimeInfo_o *v71; // x25
  System_Int32_array **v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x0
  __int64 v80; // x1
  int v81; // w28
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__44_0; // x21
  Il2CppObject *v84; // x22
  struct EventUpValSetupInfo___c_StaticFields *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Collections_Generic_List_int__o *v92; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x21
  int size; // w8
  __int64 v95; // x19
  __int64 v96; // x8
  __int64 v97; // x8
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct System_Collections_Generic_List_int____o **p_eventCampaignServantIdList; // x0
  System_Int32_array **v105; // x1
  System_Int32_array **v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  EventUpValSetupInfo_o *v113; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  _BYTE v115[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v116; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v118; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_41882BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventCampaignEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_EventCampaignEntity__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v24);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v25);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B2C35C(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__44_0__, v29);
    sub_B2C35C(&Method_EventUpValSetupInfo___c__DisplayClass44_0__AnalyzeInfoCampaign_b__1__, v30);
    sub_B2C35C(&EventUpValSetupInfo___c__DisplayClass44_0_TypeInfo, v31);
    sub_B2C35C(&EventUpValSetupInfo___c_TypeInfo, v32);
    byte_41882BE = 1;
  }
  memset(&v118, 0, sizeof(v118));
  memset(&i, 0, sizeof(i));
  v116 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_60;
  v35 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( CombineEventCampaigns )
  {
    v43 = CombineEventCampaigns;
    v44 = sub_B2C42C(EventUpValSetupInfo___c__DisplayClass44_0_TypeInfo);
    EventUpValSetupInfo___c__DisplayClass44_0___ctor((EventUpValSetupInfo___c__DisplayClass44_0_o *)v44, 0LL);
    CombineEventCampaigns_29699708 = EventCampaignMaster__GetCombineEventCampaigns_29699708(v35, v43, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !v44 )
      goto LABEL_60;
    *(_QWORD *)(v44 + 16) = Instance;
    v113 = this;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v44 + 16),
      (System_Int32_array **)Instance,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v52,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !CombineEventCampaigns_29699708 )
      goto LABEL_60;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v115,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns_29699708,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    object = (Il2CppObject *)v44;
    v53 = 0;
    v54 = (BattleServantConfConponent_o *)(v44 + 24);
    v118 = *(System_Collections_Generic_List_Enumerator_T__o *)v115;
    while ( 1 )
    {
      v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v118,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v55 )
        break;
      klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v54->klass;
      current = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v118.fields.current;
      if ( !v54->klass )
      {
        klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventCampaignEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          klass,
          object,
          Method_EventUpValSetupInfo___c__DisplayClass44_0__AnalyzeInfoCampaign_b__1__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventCampaignEntity___ctor__);
        v54->klass = (BattleServantConfConponent_c *)klass;
        sub_B2C2F8(v54, (System_Int32_array **)klass, v59, v60, v61, v62, v63, v64);
      }
      if ( !current )
        sub_B2C434(v55, v56);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        current,
        (System_Comparison_T__o *)klass,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
      v65 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v65,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v115,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v115;
            ;
            System_Collections_Generic_List_int___AddRange(
              v65,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current[2].monitor,
              (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v66 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v66 )
          break;
        if ( !i.fields.current )
          sub_B2C434(v66, v67);
        if ( !v65 )
          sub_B2C434(v66, v67);
      }
      *(_DWORD *)&v115[4 * v53 + 24] = 186;
      v53 = ++v116;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      if ( v53 )
      {
        v70 = v53 - 1;
        if ( *(_DWORD *)&v115[4 * v53 + 20] == 186 )
        {
          --v53;
          v116 = v70;
        }
      }
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v65 )
        sub_B2C434(v68, v69);
      v71 = current->fields._items->m_Items[0];
      v72 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                     v65,
                                     (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v71 )
        sub_B2C434(v72, v72);
      v71[1].klass = (TitleInfoControl_EventEndTimeInfo_c *)v72;
      sub_B2C2F8((BattleServantConfConponent_o *)&v71[1], v72, v73, v74, v75, v76, v77, v78);
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v52 )
        sub_B2C434(v79, v80);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current->fields._items->m_Items[0],
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    }
    *(_DWORD *)&v115[4 * v53 + 24] = 248;
    v81 = ++v116;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v118,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    if ( v81 && *(_DWORD *)&v115[4 * v81 + 20] == 248 )
      v116 = v81 - 1;
    Instance = EventUpValSetupInfo___c_TypeInfo;
    if ( (BYTE3(EventUpValSetupInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      Instance = EventUpValSetupInfo___c_TypeInfo;
    }
    static_fields = (struct EventUpValSetupInfo___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__44_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      }
      v84 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__44_0,
        v84,
        Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__44_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventCampaignEntity___ctor__);
      v85 = EventUpValSetupInfo___c_TypeInfo->static_fields;
      v85->__9__44_0 = (struct System_Comparison_EventCampaignEntity__o *)_9__44_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v85->__9__44_0,
        (System_Int32_array **)_9__44_0,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
    }
    if ( !v52 )
      goto LABEL_60;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v52,
      (System_Comparison_T__o *)_9__44_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v92 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v92,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v93,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
    size = v52->fields._size;
    if ( size >= 1 )
    {
      v95 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v95 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v96 = *((_QWORD *)&v52->fields._items->obj.klass + v95);
        if ( !v96 || !v92 )
          break;
        System_Collections_Generic_List_int___Add(
          v92,
          *(_DWORD *)(v96 + 16),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v52->fields._size <= (unsigned int)(v95 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v97 = *((_QWORD *)&v52->fields._items->obj.klass + v95);
        if ( !v97 || !v93 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v93,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v97 + 40),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
        size = v52->fields._size;
        if ( (int)++v95 - 4 >= size )
          goto LABEL_58;
      }
LABEL_60:
      sub_B2C434(Instance, v34);
    }
    if ( !v92 )
      goto LABEL_60;
LABEL_58:
    v106 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                    v92,
                                    (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    v113->fields.eventCampaignIdList = (struct System_Int32_array *)v106;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v113->fields.eventCampaignIdList,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111,
      v112);
    v113->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v93;
    p_eventCampaignServantIdList = &v113->fields.eventCampaignServantIdList;
    v105 = (System_Int32_array **)v93;
  }
  else
  {
    this->fields.eventCampaignIdList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventCampaignIdList, 0LL, v37, v38, v39, v40, v41, v42);
    this->fields.eventCampaignServantIdList = 0LL;
    p_eventCampaignServantIdList = &this->fields.eventCampaignServantIdList;
    v105 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_eventCampaignServantIdList, v105, v98, v99, v100, v101, v102, v103);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *questPhaseIndivLists; // x0
  System_Int32_array *QuestIdListByGroupId; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41882BF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41882BF = 1;
  }
  value = 0LL;
  questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
  if ( !questPhaseIndivLists )
    goto LABEL_14;
  if ( this->fields.isQuestStart )
    return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   questPhaseIndivLists,
                                   0,
                                   (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)questPhaseIndivLists,
          eventId,
          &value,
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( questPhaseIndivLists )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)questPhaseIndivLists, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( questPhaseIndivLists )
      {
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)questPhaseIndivLists,
                                 eventId,
                                 1,
                                 0LL);
        questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( questPhaseIndivLists )
        {
          questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)questPhaseIndivLists, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
          if ( questPhaseIndivLists )
          {
            value = (WarBoardEvalValueSquare_CalcEval_o *)QuestPhaseMaster__GetIndividualityList(
                                                            (QuestPhaseMaster_o *)questPhaseIndivLists,
                                                            QuestIdListByGroupId,
                                                            0LL);
            questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
            if ( questPhaseIndivLists )
            {
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                questPhaseIndivLists,
                eventId,
                (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
                (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
              return (System_Int32_array *)value;
            }
          }
        }
      }
    }
LABEL_14:
    sub_B2C434(questPhaseIndivLists, *(_QWORD *)&eventId);
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
    sub_B2C434(this, method);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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


int32_t __fastcall EventUpValSetupInfo__get_ServantEquipFilterEventId(
        EventUpValSetupInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  servantEquipFilterEventIdList = this->fields.servantEquipFilterEventIdList;
  if ( !servantEquipFilterEventIdList )
    sub_B2C434(this, method);
  v3 = *(_QWORD *)&servantEquipFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
    sub_B2C434(this, method);
  v3 = *(_QWORD *)&servantFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
    sub_B2C434(this, method);
  v3 = *(_QWORD *)&supportEquipFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
    sub_B2C434(this, method);
  v3 = *(_QWORD *)&supportFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  Il2CppObject *v2; // x19
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0

  if ( (byte_41841B0 & 1) == 0 )
  {
    sub_B2C35C(&EventUpValSetupInfo___c_TypeInfo, v1);
    byte_41841B0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventUpValSetupInfo___c___ctor(EventUpValSetupInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c___AnalyzeInfoCampaign_b__44_0(
        EventUpValSetupInfo___c_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  int32_t target; // w9
  int32_t v5; // w8
  int32_t result; // w0

  if ( !a || !b )
    sub_B2C434(this, a);
  target = a->fields.target;
  v5 = b->fields.target;
  result = target - v5;
  if ( target == v5 || target == 4 && v5 == 32 || target == 32 && v5 == 4 )
    return b->fields.value - a->fields.value;
  return result;
}


void __fastcall EventUpValSetupInfo___c__DisplayClass44_0___ctor(
        EventUpValSetupInfo___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventUpValSetupInfo___c__DisplayClass44_0___AnalyzeInfoCampaign_b__1(
        EventUpValSetupInfo___c__DisplayClass44_0_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  EventUpValSetupInfo___c__DisplayClass44_0_o *v6; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *eventMaster; // x8
  EventUpValSetupInfo___c__DisplayClass44_0_c *klass; // x20

  v6 = this;
  if ( (byte_41841B1 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass44_0_o *)sub_B2C35C(
                                                            &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
                                                            a);
    byte_41841B1 = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass44_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass44_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass44_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_B2C434(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}