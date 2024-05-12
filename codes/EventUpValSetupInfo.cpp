void __fastcall EventUpValSetupInfo___ctor(
        EventUpValSetupInfo_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t eventId,
        const MethodInfo *method)
{
  struct System_Int32_array *Instance; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool v24; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v26; // x2
  __int64 v27; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438A703 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A703 = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
  this->fields.isQuestStart = 1;
  Instance = (struct System_Int32_array *)sub_B775DC(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
  {
    v27 = sub_B776C8(Instance);
    sub_B77668(v27, 0LL);
  }
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)Instance,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_B7769C(Instance, v10);
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
    Instance = (struct System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)questPhaseIndivLists,
    0,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance,
    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v26);
}


void __fastcall EventUpValSetupInfo___ctor_24075556(
        EventUpValSetupInfo_o *this,
        System_Int32_array *eventIdList,
        bool ignoreFlg,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2

  if ( (byte_438A704 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B775C4(&int___TypeInfo);
    byte_438A704 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !eventIdList )
    eventIdList = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  this->fields.eventIdList = eventIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)eventIdList,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v24);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfo(EventUpValSetupInfo_o *this, bool ignoreFlg, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_Int32_array *eventIdList; // x8
  __int64 v8; // x26
  EventUpValSetupInfo_o *v9; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  System_Collections_Generic_List_int__o *v11; // x24
  System_Collections_Generic_List_int__o *v12; // x23
  System_Collections_Generic_List_int__o *v13; // x22
  unsigned __int64 v14; // x28
  _BOOL4 v15; // w27
  struct System_Int32_array *v16; // x8
  int32_t v17; // w25
  _BOOL4 v18; // w8
  _BOOL4 v19; // w8
  _BOOL4 v20; // w8
  _BOOL4 v21; // w8
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
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
  System_Int32_array **EnableIdList; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x1
  __int64 v58; // x0
  System_Collections_Generic_List_int__o *v59; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438A705 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_B775C4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397312);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A705 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_40;
  v8 = *(_QWORD *)&eventIdList->max_length;
  v9 = this;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51269980(
    v11,
    v8,
    (const MethodInfo_30E515C *)Method_System_Collections_Generic_List_int___ctor___69397312);
  v12 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51269980(
    v12,
    v8,
    (const MethodInfo_30E515C *)Method_System_Collections_Generic_List_int___ctor___69397312);
  v13 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51269980(
    v13,
    v8,
    (const MethodInfo_30E515C *)Method_System_Collections_Generic_List_int___ctor___69397312);
  v59 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51269980(
    v59,
    v8,
    (const MethodInfo_30E515C *)Method_System_Collections_Generic_List_int___ctor___69397312);
  if ( (int)v8 >= 1 )
  {
    v14 = 0LL;
    v15 = ignoreFlg;
    while ( 1 )
    {
      v16 = v9->fields.eventIdList;
      if ( !v16 )
        break;
      if ( v14 >= v16->max_length )
      {
        v58 = sub_B776C8(Instance);
        sub_B77668(v58, 0LL);
      }
      if ( !v10 )
        break;
      v17 = v16->m_Items[v14 + 1];
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        v10,
        &entity,
        v17,
        (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventFilterEntity__IsServantFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        v18 = ((unsigned __int8)Instance & 1) == 0;
      }
      else
      {
        v18 = 1;
      }
      if ( v18 || v15 )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_int___Add(
          v11,
          v17,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          Instance = (DataManager_o *)EventFilterEntity__IsSupportServantFilterNoDisp(
                                        (EventFilterEntity_o *)entity,
                                        0LL);
          v19 = ((unsigned __int8)Instance & 1) == 0;
        }
        else
        {
          v19 = 1;
        }
        if ( v19 || v15 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_int___Add(
            v13,
            v17,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventFilterEntity__IsServantEquipFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        v20 = ((unsigned __int8)Instance & 1) == 0;
      }
      else
      {
        v20 = 1;
      }
      if ( v20 || v15 )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_int___Add(
          v12,
          v17,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          Instance = (DataManager_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                        (EventFilterEntity_o *)entity,
                                        0LL);
          v21 = ((unsigned __int8)Instance & 1) == 0;
        }
        else
        {
          v21 = 1;
        }
        if ( v21 || v15 )
        {
          Instance = (DataManager_o *)v59;
          if ( !v59 )
            break;
          System_Collections_Generic_List_int___Add(
            v59,
            v17,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v14 >= (int)v8 )
        goto LABEL_33;
    }
LABEL_40:
    sub_B7769C(Instance, v6);
  }
LABEL_33:
  if ( !v11 )
    goto LABEL_40;
  v22 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v11,
                                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9->fields.servantFilterEventIdList = (struct System_Int32_array *)v22;
  sub_B77560((BattleServantConfConponent_o *)&v9->fields.servantFilterEventIdList, v22, v23, v24, v25, v26, v27, v28);
  if ( !v12 )
    goto LABEL_40;
  v29 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v12,
                                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9->fields.servantEquipFilterEventIdList = (struct System_Int32_array *)v29;
  sub_B77560(
    (BattleServantConfConponent_o *)&v9->fields.servantEquipFilterEventIdList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( !v13 )
    goto LABEL_40;
  v36 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v13,
                                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9->fields.supportFilterEventIdList = (struct System_Int32_array *)v36;
  sub_B77560((BattleServantConfConponent_o *)&v9->fields.supportFilterEventIdList, v36, v37, v38, v39, v40, v41, v42);
  Instance = (DataManager_o *)v59;
  if ( !v59 )
    goto LABEL_40;
  v43 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v59,
                                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9->fields.supportEquipFilterEventIdList = (struct System_Int32_array *)v43;
  sub_B77560(
    (BattleServantConfConponent_o *)&v9->fields.supportEquipFilterEventIdList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  if ( !Instance )
    goto LABEL_40;
  EnableIdList = (System_Int32_array **)ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)Instance, 0LL);
  v9->fields.servantFilterIdList = (struct System_Int32_array *)EnableIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&v9->fields.servantFilterIdList,
    EnableIdList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  EventUpValSetupInfo__AnalyzeInfoCampaign(v9, v57);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfoCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  EventCampaignMaster_o *v5; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *v13; // x22
  __int64 v14; // x23
  System_Collections_Generic_List_List_EventCampaignEntity___o *CombineEventCampaigns_30321720; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  int v23; // w26
  BattleServantConfConponent_o *v24; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *klass; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *current; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x24
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  int v40; // w8
  TitleInfoControl_EventEndTimeInfo_o *v41; // x25
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x1
  int v51; // w28
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__47_0; // x21
  Il2CppObject *v54; // x22
  struct EventUpValSetupInfo___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_int__o *v62; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x21
  int size; // w8
  __int64 v65; // x19
  __int64 v66; // x8
  __int64 v67; // x8
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct System_Collections_Generic_List_int____o **p_eventCampaignServantIdList; // x0
  System_Int32_array **v75; // x1
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  EventUpValSetupInfo_o *v83; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  _BYTE v85[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v86; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_438A706 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_EventCampaignEntity___ctor__);
    sub_B775C4(&System_Comparison_EventCampaignEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int____Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int____TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__47_0__);
    sub_B775C4(&Method_EventUpValSetupInfo___c__DisplayClass47_0__AnalyzeInfoCampaign_b__1__);
    sub_B775C4(&EventUpValSetupInfo___c__DisplayClass47_0_TypeInfo);
    sub_B775C4(&EventUpValSetupInfo___c_TypeInfo);
    byte_438A706 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  memset(&i, 0, sizeof(i));
  v86 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_60;
  v5 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( CombineEventCampaigns )
  {
    v13 = CombineEventCampaigns;
    v14 = sub_B77694(EventUpValSetupInfo___c__DisplayClass47_0_TypeInfo);
    EventUpValSetupInfo___c__DisplayClass47_0___ctor((EventUpValSetupInfo___c__DisplayClass47_0_o *)v14, 0LL);
    CombineEventCampaigns_30321720 = EventCampaignMaster__GetCombineEventCampaigns_30321720(v5, v13, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !v14 )
      goto LABEL_60;
    *(_QWORD *)(v14 + 16) = Instance;
    v83 = this;
    sub_B77560(
      (BattleServantConfConponent_o *)(v14 + 16),
      (System_Int32_array **)Instance,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v22,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !CombineEventCampaigns_30321720 )
      goto LABEL_60;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v85,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns_30321720,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    object = (Il2CppObject *)v14;
    v23 = 0;
    v24 = (BattleServantConfConponent_o *)(v14 + 24);
    v88 = *(System_Collections_Generic_List_Enumerator_T__o *)v85;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v88,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v25 )
        break;
      klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v24->klass;
      current = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v88.fields.current;
      if ( !v24->klass )
      {
        klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventCampaignEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          klass,
          object,
          Method_EventUpValSetupInfo___c__DisplayClass47_0__AnalyzeInfoCampaign_b__1__,
          (const MethodInfo_2B42C0C *)Method_System_Comparison_EventCampaignEntity___ctor__);
        v24->klass = (BattleServantConfConponent_c *)klass;
        sub_B77560(v24, (System_Int32_array **)klass, v29, v30, v31, v32, v33, v34);
      }
      if ( !current )
        sub_B7769C(v25, v26);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        current,
        (System_Comparison_T__o *)klass,
        (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
      v35 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v35,
        (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v85,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v85;
            ;
            System_Collections_Generic_List_int___AddRange(
              v35,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current[2].monitor,
              (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v36 )
          break;
        if ( !i.fields.current )
          sub_B7769C(v36, v37);
        if ( !v35 )
          sub_B7769C(v36, v37);
      }
      *(_DWORD *)&v85[4 * v23 + 24] = 186;
      v23 = ++v86;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      if ( v23 )
      {
        v40 = v23 - 1;
        if ( *(_DWORD *)&v85[4 * v23 + 20] == 186 )
        {
          --v23;
          v86 = v40;
        }
      }
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( !v35 )
        sub_B7769C(v38, v39);
      v41 = current->fields._items->m_Items[0];
      v42 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                     v35,
                                     (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v41 )
        sub_B7769C(v42, v42);
      v41[1].klass = (TitleInfoControl_EventEndTimeInfo_c *)v42;
      sub_B77560((BattleServantConfConponent_o *)&v41[1], v42, v43, v44, v45, v46, v47, v48);
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( !v22 )
        sub_B7769C(v49, v50);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current->fields._items->m_Items[0],
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    }
    *(_DWORD *)&v85[4 * v23 + 24] = 248;
    v51 = ++v86;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v88,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    if ( v51 && *(_DWORD *)&v85[4 * v51 + 20] == 248 )
      v86 = v51 - 1;
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
      v54 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__47_0,
        v54,
        Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__47_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_EventCampaignEntity___ctor__);
      v55 = EventUpValSetupInfo___c_TypeInfo->static_fields;
      v55->__9__47_0 = (struct System_Comparison_EventCampaignEntity__o *)_9__47_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v55->__9__47_0,
        (System_Int32_array **)_9__47_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    if ( !v22 )
      goto LABEL_60;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
      (System_Comparison_T__o *)_9__47_0,
      (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v62 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v62,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_int____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v63,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_int_____ctor__);
    size = v22->fields._size;
    if ( size >= 1 )
    {
      v65 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v65 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v66 = *((_QWORD *)&v22->fields._items->obj.klass + v65);
        if ( !v66 || !v62 )
          break;
        System_Collections_Generic_List_int___Add(
          v62,
          *(_DWORD *)(v66 + 16),
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v22->fields._size <= (unsigned int)(v65 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v67 = *((_QWORD *)&v22->fields._items->obj.klass + v65);
        if ( !v67 || !v63 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v63,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v67 + 40),
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_int____Add__);
        size = v22->fields._size;
        if ( (int)++v65 - 4 >= size )
          goto LABEL_58;
      }
LABEL_60:
      sub_B7769C(Instance, v4);
    }
    if ( !v62 )
      goto LABEL_60;
LABEL_58:
    v76 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v62,
                                   (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    v83->fields.eventCampaignIdList = (struct System_Int32_array *)v76;
    sub_B77560((BattleServantConfConponent_o *)&v83->fields.eventCampaignIdList, v76, v77, v78, v79, v80, v81, v82);
    v83->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v63;
    p_eventCampaignServantIdList = &v83->fields.eventCampaignServantIdList;
    v75 = (System_Int32_array **)v63;
  }
  else
  {
    this->fields.eventCampaignIdList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.eventCampaignIdList, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.eventCampaignServantIdList = 0LL;
    p_eventCampaignServantIdList = &this->fields.eventCampaignServantIdList;
    v75 = 0LL;
  }
  sub_B77560((BattleServantConfConponent_o *)p_eventCampaignServantIdList, v75, v68, v69, v70, v71, v72, v73);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventUpValSetupInfo__GetQuestPhaseIndividualList(
        EventUpValSetupInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *questPhaseIndivLists; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarBoardEvalValueSquare_CalcEval_o *v8; // x2
  int32_t questId; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  __int64 v11; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v3 = eventId;
  if ( (byte_438A707 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A707 = 1;
  }
  value = 0LL;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_25:
    sub_B7769C(questPhaseIndivLists, *(_QWORD *)&eventId);
  }
  *(_QWORD *)&eventId = (unsigned int)this->fields.questId;
  questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
  if ( eventId < 1 )
  {
    if ( !questPhaseIndivLists )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)questPhaseIndivLists,
            v3,
            &value,
            (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)questPhaseIndivLists, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               v3,
                               1,
                               0LL);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)questPhaseIndivLists, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      value = (WarBoardEvalValueSquare_CalcEval_o *)QuestPhaseMaster__GetIndividualityList(
                                                      (QuestPhaseMaster_o *)questPhaseIndivLists,
                                                      QuestIdListByGroupId,
                                                      0LL);
      v8 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questId = v3;
LABEL_23:
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        questPhaseIndivLists,
        questId,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v8,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    }
  }
  else
  {
    if ( !questPhaseIndivLists )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)questPhaseIndivLists,
            eventId,
            &value,
            (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)questPhaseIndivLists,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B775DC(int___TypeInfo, 1LL);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      *(_QWORD *)&eventId = questPhaseIndivLists;
      if ( !LODWORD(questPhaseIndivLists->fields.entries) )
      {
        v11 = sub_B776C8(questPhaseIndivLists);
        sub_B77668(v11, 0LL);
      }
      questPhaseIndivLists->fields.count = this->fields.questId;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_25;
      value = (WarBoardEvalValueSquare_CalcEval_o *)QuestPhaseMaster__GetIndividualityList(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_Int32_array *)questPhaseIndivLists,
                                                      0LL);
      v8 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_25;
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
    sub_B7769C(this, method);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
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
    sub_B7769C(this, method);
  v3 = *(_QWORD *)&servantEquipFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
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
    sub_B7769C(this, method);
  v3 = *(_QWORD *)&servantFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
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
    sub_B7769C(this, method);
  v3 = *(_QWORD *)&supportEquipFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
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
    sub_B7769C(this, method);
  v3 = *(_QWORD *)&supportFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
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
  Il2CppObject *v1; // x19
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4388063 & 1) == 0 )
  {
    sub_B775C4(&EventUpValSetupInfo___c_TypeInfo);
    byte_4388063 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
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
  if ( (byte_4388064 & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4388064 = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_B7769C(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}