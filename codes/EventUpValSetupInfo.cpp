// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo___ctor(
        EventUpValSetupInfo_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t eventId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Int32_array *Instance; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v32; // x24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  bool v39; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  const MethodInfo *v41; // x2
  __int64 v42; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8501 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, questId, questPhase, *(_QWORD *)&eventId);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v15, v16, v17);
    sub_B5D5C4(&int___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E8501 = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
  this->fields.isQuestStart = 1;
  Instance = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_10;
  if ( !Instance->max_length )
  {
    v42 = sub_B5D6C8(Instance);
    sub_B5D668(v42, 0LL);
  }
  Instance->m_Items[1] = eventId;
  this->fields.eventIdList = Instance;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)Instance,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v32,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (struct System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v25);
  }
  v39 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v39 )
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
    Instance = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)questPhaseIndivLists,
    0,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance,
    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValSetupInfo___ctor_24751852(
        EventUpValSetupInfo_o *this,
        System_Int32_array *eventIdList,
        bool ignoreFlg,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  struct System_Int32_array *v9; // x21
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2

  v9 = eventIdList;
  if ( (byte_42E8502 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__int_____ctor__,
      (_DWORD)eventIdList,
      ignoreFlg,
      *(_QWORD *)&questId);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    byte_42E8502 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  if ( !v9 )
    v9 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.eventIdList = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v9,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v23,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v30);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfo(EventUpValSetupInfo_o *this, bool ignoreFlg, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  struct System_Int32_array *eventIdList; // x8
  __int64 v30; // x26
  EventUpValSetupInfo_o *v31; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x21
  System_Collections_Generic_List_int__o *v33; // x24
  System_Collections_Generic_List_int__o *v34; // x23
  System_Collections_Generic_List_int__o *v35; // x22
  unsigned __int64 v36; // x28
  _BOOL4 v37; // w27
  struct System_Int32_array *v38; // x8
  int32_t v39; // w25
  _BOOL4 v40; // w8
  _BOOL4 v41; // w8
  _BOOL4 v42; // w8
  _BOOL4 v43; // w8
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **EnableIdList; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x1
  __int64 v80; // x0
  System_Collections_Generic_List_int__o *v81; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8503 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFilterMaster___, ignoreFlg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFilterMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740232, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E8503 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFilterMaster___);
  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_40;
  v30 = *(_QWORD *)&eventIdList->max_length;
  v31 = this;
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v33 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870144(
    v33,
    v30,
    (const MethodInfo_3083780 *)Method_System_Collections_Generic_List_int___ctor___68740232);
  v34 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870144(
    v34,
    v30,
    (const MethodInfo_3083780 *)Method_System_Collections_Generic_List_int___ctor___68740232);
  v35 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870144(
    v35,
    v30,
    (const MethodInfo_3083780 *)Method_System_Collections_Generic_List_int___ctor___68740232);
  v81 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870144(
    v81,
    v30,
    (const MethodInfo_3083780 *)Method_System_Collections_Generic_List_int___ctor___68740232);
  if ( (int)v30 >= 1 )
  {
    v36 = 0LL;
    v37 = ignoreFlg;
    while ( 1 )
    {
      v38 = v31->fields.eventIdList;
      if ( !v38 )
        break;
      if ( v36 >= v38->max_length )
      {
        v80 = sub_B5D6C8(Instance);
        sub_B5D668(v80, 0LL);
      }
      if ( !v32 )
        break;
      v39 = v38->m_Items[v36 + 1];
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        v32,
        &entity,
        v39,
        (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventFilterEntity__IsServantFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        v40 = ((unsigned __int8)Instance & 1) == 0;
      }
      else
      {
        v40 = 1;
      }
      if ( v40 || v37 )
      {
        if ( !v33 )
          break;
        System_Collections_Generic_List_int___Add(
          v33,
          v39,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          Instance = (DataManager_o *)EventFilterEntity__IsSupportServantFilterNoDisp(
                                        (EventFilterEntity_o *)entity,
                                        0LL);
          v41 = ((unsigned __int8)Instance & 1) == 0;
        }
        else
        {
          v41 = 1;
        }
        if ( v41 || v37 )
        {
          if ( !v35 )
            break;
          System_Collections_Generic_List_int___Add(
            v35,
            v39,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventFilterEntity__IsServantEquipFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        v42 = ((unsigned __int8)Instance & 1) == 0;
      }
      else
      {
        v42 = 1;
      }
      if ( v42 || v37 )
      {
        if ( !v34 )
          break;
        System_Collections_Generic_List_int___Add(
          v34,
          v39,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          Instance = (DataManager_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                        (EventFilterEntity_o *)entity,
                                        0LL);
          v43 = ((unsigned __int8)Instance & 1) == 0;
        }
        else
        {
          v43 = 1;
        }
        if ( v43 || v37 )
        {
          Instance = (DataManager_o *)v81;
          if ( !v81 )
            break;
          System_Collections_Generic_List_int___Add(
            v81,
            v39,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v36 >= (int)v30 )
        goto LABEL_33;
    }
LABEL_40:
    sub_B5D69C(Instance, v28);
  }
LABEL_33:
  if ( !v33 )
    goto LABEL_40;
  v44 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v33,
                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v31->fields.servantFilterEventIdList = (struct System_Int32_array *)v44;
  sub_B5D560((BattleServantConfConponent_o *)&v31->fields.servantFilterEventIdList, v44, v45, v46, v47, v48, v49, v50);
  if ( !v34 )
    goto LABEL_40;
  v51 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v34,
                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v31->fields.servantEquipFilterEventIdList = (struct System_Int32_array *)v51;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v31->fields.servantEquipFilterEventIdList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( !v35 )
    goto LABEL_40;
  v58 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v35,
                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v31->fields.supportFilterEventIdList = (struct System_Int32_array *)v58;
  sub_B5D560((BattleServantConfConponent_o *)&v31->fields.supportFilterEventIdList, v58, v59, v60, v61, v62, v63, v64);
  Instance = (DataManager_o *)v81;
  if ( !v81 )
    goto LABEL_40;
  v65 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v81,
                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v31->fields.supportEquipFilterEventIdList = (struct System_Int32_array *)v65;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v31->fields.supportEquipFilterEventIdList,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  if ( !Instance )
    goto LABEL_40;
  EnableIdList = (System_Int32_array **)ServantFilterMaster__getEnableIdList((ServantFilterMaster_o *)Instance, 0LL);
  v31->fields.servantFilterIdList = (struct System_Int32_array *)EnableIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v31->fields.servantFilterIdList,
    EnableIdList,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  EventUpValSetupInfo__AnalyzeInfoCampaign(v31, v79);
}


void __fastcall EventUpValSetupInfo__AnalyzeInfoCampaign(EventUpValSetupInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  void *Instance; // x0
  __int64 v96; // x1
  EventCampaignMaster_o *v97; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *v105; // x22
  __int64 v106; // x23
  System_Collections_Generic_List_List_EventCampaignEntity___o *CombineEventCampaigns_29798540; // x22
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v114; // x20
  int v115; // w26
  BattleServantConfConponent_o *v116; // x22
  _BOOL8 v117; // x0
  __int64 v118; // x1
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *klass; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *current; // x23
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Collections_Generic_List_int__o *v127; // x24
  _BOOL8 v128; // x0
  __int64 v129; // x1
  __int64 v130; // x0
  __int64 v131; // x1
  int v132; // w8
  TitleInfoControl_EventEndTimeInfo_o *v133; // x25
  System_Int32_array **v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  __int64 v141; // x0
  __int64 v142; // x1
  int v143; // w28
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__47_0; // x21
  Il2CppObject *v146; // x22
  struct EventUpValSetupInfo___c_StaticFields *v147; // x0
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Collections_Generic_List_int__o *v154; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v155; // x21
  int size; // w8
  __int64 v157; // x19
  __int64 v158; // x8
  __int64 v159; // x8
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  struct System_Collections_Generic_List_int____o **p_eventCampaignServantIdList; // x0
  System_Int32_array **v167; // x1
  System_Int32_array **v168; // x0
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  EventUpValSetupInfo_o *v175; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  _BYTE v177[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v178; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v180; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42E8504 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventCampaignEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventCampaignEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v26, v27, v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__,
      v29,
      v30,
      v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v68, v69, v70);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v80, v81, v82);
    sub_B5D5C4(&Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__47_0__, v83, v84, v85);
    sub_B5D5C4(&Method_EventUpValSetupInfo___c__DisplayClass47_0__AnalyzeInfoCampaign_b__1__, v86, v87, v88);
    sub_B5D5C4(&EventUpValSetupInfo___c__DisplayClass47_0_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&EventUpValSetupInfo___c_TypeInfo, v92, v93, v94);
    byte_42E8504 = 1;
  }
  memset(&v180, 0, sizeof(v180));
  memset(&i, 0, sizeof(i));
  v178 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_60;
  v97 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( CombineEventCampaigns )
  {
    v105 = CombineEventCampaigns;
    v106 = sub_B5D694(EventUpValSetupInfo___c__DisplayClass47_0_TypeInfo);
    EventUpValSetupInfo___c__DisplayClass47_0___ctor((EventUpValSetupInfo___c__DisplayClass47_0_o *)v106, 0LL);
    CombineEventCampaigns_29798540 = EventCampaignMaster__GetCombineEventCampaigns_29798540(v97, v105, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !v106 )
      goto LABEL_60;
    *(_QWORD *)(v106 + 16) = Instance;
    v175 = this;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v106 + 16),
      (System_Int32_array **)Instance,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    v114 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v114,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !CombineEventCampaigns_29798540 )
      goto LABEL_60;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v177,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns_29798540,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    object = (Il2CppObject *)v106;
    v115 = 0;
    v116 = (BattleServantConfConponent_o *)(v106 + 24);
    v180 = *(System_Collections_Generic_List_Enumerator_T__o *)v177;
    while ( 1 )
    {
      v117 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v180,
               (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v117 )
        break;
      klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v116->klass;
      current = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v180.fields.current;
      if ( !v116->klass )
      {
        klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventCampaignEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          klass,
          object,
          Method_EventUpValSetupInfo___c__DisplayClass47_0__AnalyzeInfoCampaign_b__1__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_EventCampaignEntity___ctor__);
        v116->klass = (BattleServantConfConponent_c *)klass;
        sub_B5D560(v116, (System_Int32_array **)klass, v121, v122, v123, v124, v125, v126);
      }
      if ( !current )
        sub_B5D69C(v117, v118);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        current,
        (System_Comparison_T__o *)klass,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
      v127 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v127,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v177,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v177;
            ;
            System_Collections_Generic_List_int___AddRange(
              v127,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current[2].monitor,
              (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v128 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &i,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v128 )
          break;
        if ( !i.fields.current )
          sub_B5D69C(v128, v129);
        if ( !v127 )
          sub_B5D69C(v128, v129);
      }
      *(_DWORD *)&v177[4 * v115 + 24] = 186;
      v115 = ++v178;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      if ( v115 )
      {
        v132 = v115 - 1;
        if ( *(_DWORD *)&v177[4 * v115 + 20] == 186 )
        {
          --v115;
          v178 = v132;
        }
      }
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v127 )
        sub_B5D69C(v130, v131);
      v133 = current->fields._items->m_Items[0];
      v134 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                      v127,
                                      (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v133 )
        sub_B5D69C(v134, v134);
      v133[1].klass = (TitleInfoControl_EventEndTimeInfo_c *)v134;
      sub_B5D560((BattleServantConfConponent_o *)&v133[1], v134, v135, v136, v137, v138, v139, v140);
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v114 )
        sub_B5D69C(v141, v142);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v114,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current->fields._items->m_Items[0],
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    }
    *(_DWORD *)&v177[4 * v115 + 24] = 248;
    v143 = ++v178;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v180,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    if ( v143 && *(_DWORD *)&v177[4 * v143 + 20] == 248 )
      v178 = v143 - 1;
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
      v146 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventCampaignEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__47_0,
        v146,
        Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__47_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_EventCampaignEntity___ctor__);
      v147 = EventUpValSetupInfo___c_TypeInfo->static_fields;
      v147->__9__47_0 = (struct System_Comparison_EventCampaignEntity__o *)_9__47_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v147->__9__47_0,
        (System_Int32_array **)_9__47_0,
        v148,
        v149,
        v150,
        v151,
        v152,
        v153);
    }
    if ( !v114 )
      goto LABEL_60;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v114,
      (System_Comparison_T__o *)_9__47_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v154 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v154,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    v155 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v155,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
    size = v114->fields._size;
    if ( size >= 1 )
    {
      v157 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v157 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v158 = *((_QWORD *)&v114->fields._items->obj.klass + v157);
        if ( !v158 || !v154 )
          break;
        System_Collections_Generic_List_int___Add(
          v154,
          *(_DWORD *)(v158 + 16),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( v114->fields._size <= (unsigned int)(v157 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v159 = *((_QWORD *)&v114->fields._items->obj.klass + v157);
        if ( !v159 || !v155 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v155,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v159 + 40),
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
        size = v114->fields._size;
        if ( (int)++v157 - 4 >= size )
          goto LABEL_58;
      }
LABEL_60:
      sub_B5D69C(Instance, v96);
    }
    if ( !v154 )
      goto LABEL_60;
LABEL_58:
    v168 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                    v154,
                                    (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    v175->fields.eventCampaignIdList = (struct System_Int32_array *)v168;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v175->fields.eventCampaignIdList,
      v168,
      v169,
      v170,
      v171,
      v172,
      v173,
      v174);
    v175->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v155;
    p_eventCampaignServantIdList = &v175->fields.eventCampaignServantIdList;
    v167 = (System_Int32_array **)v155;
  }
  else
  {
    this->fields.eventCampaignIdList = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventCampaignIdList,
      0LL,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
    this->fields.eventCampaignServantIdList = 0LL;
    p_eventCampaignServantIdList = &this->fields.eventCampaignServantIdList;
    v167 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_eventCampaignServantIdList, v167, v160, v161, v162, v163, v164, v165);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventUpValSetupInfo__GetQuestPhaseIndividualList(
        EventUpValSetupInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *questPhaseIndivLists; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarBoardEvalValueSquare_CalcEval_o *v27; // x2
  int32_t questId; // w1
  System_Int32_array *QuestIdListByGroupId; // x21
  __int64 v30; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = eventId;
  if ( (byte_42E8505 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v15, v16, v17);
    sub_B5D5C4(&int___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E8505 = 1;
  }
  value = 0LL;
  if ( this->fields.isQuestStart )
  {
    questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
    if ( questPhaseIndivLists )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     questPhaseIndivLists,
                                     0,
                                     (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_25:
    sub_B5D69C(questPhaseIndivLists, *(_QWORD *)&eventId);
  }
  *(_QWORD *)&eventId = (unsigned int)this->fields.questId;
  questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
  if ( eventId < 1 )
  {
    if ( !questPhaseIndivLists )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)questPhaseIndivLists,
            v4,
            &value,
            (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)questPhaseIndivLists, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                               (QuestGroupMaster_o *)questPhaseIndivLists,
                               v4,
                               1,
                               0LL);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)questPhaseIndivLists, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      value = (WarBoardEvalValueSquare_CalcEval_o *)QuestPhaseMaster__GetIndividualityList(
                                                      (QuestPhaseMaster_o *)questPhaseIndivLists,
                                                      QuestIdListByGroupId,
                                                      0LL);
      v27 = value;
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.questPhaseIndivLists;
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      questId = v4;
LABEL_23:
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        questPhaseIndivLists,
        questId,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v27,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
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
            (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    {
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)questPhaseIndivLists,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      questPhaseIndivLists = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !questPhaseIndivLists )
        goto LABEL_25;
      *(_QWORD *)&eventId = questPhaseIndivLists;
      if ( !LODWORD(questPhaseIndivLists->fields.entries) )
      {
        v30 = sub_B5D6C8(questPhaseIndivLists);
        sub_B5D668(v30, 0LL);
      }
      questPhaseIndivLists->fields.count = this->fields.questId;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_25;
      value = (WarBoardEvalValueSquare_CalcEval_o *)QuestPhaseMaster__GetIndividualityList(
                                                      MasterData_WarQuestSelectionMaster,
                                                      (System_Int32_array *)questPhaseIndivLists,
                                                      0LL);
      v27 = value;
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
    sub_B5D69C(this, method);
  v3 = *(_QWORD *)&eventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, method);
  v3 = *(_QWORD *)&servantEquipFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, method);
  v3 = *(_QWORD *)&servantFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, method);
  v3 = *(_QWORD *)&supportEquipFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, method);
  v3 = *(_QWORD *)&supportFilterEventIdList->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x0

  if ( (byte_42E56AD & 1) == 0 )
  {
    sub_B5D5C4(&EventUpValSetupInfo___c_TypeInfo, v1, v2, v3);
    byte_42E56AD = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventUpValSetupInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventUpValSetupInfo___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
  if ( (byte_42E56AE & 1) == 0 )
  {
    this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)sub_B5D5C4(
                                                            &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
                                                            (_DWORD)a,
                                                            (_DWORD)b,
                                                            method);
    byte_42E56AE = 1;
  }
  if ( !b
    || (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)v6->fields.eventMaster) == 0LL
    || (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                b->fields.eventId,
                                                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (eventMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v6->fields.eventMaster) == 0LL
    || (klass = this[3].klass,
        (this = (EventUpValSetupInfo___c__DisplayClass47_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                 eventMaster,
                                                                 a->fields.eventId,
                                                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_B5D69C(this, a);
  }
  return (_DWORD)klass - LODWORD(this[3].klass);
}