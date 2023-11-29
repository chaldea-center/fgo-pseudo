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
  __int64 v14; // x2
  struct System_Int32_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  bool v35; // w0
  __int64 v36; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x20
  WarBoardEvalValueSquare_EvalValueSquare_o *PrioredIndividuality; // x0
  const MethodInfo *v39; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9C40 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11);
    sub_B16FFC(&int___TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F9C40 = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
  this->fields.isQuestStart = 1;
  v15 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v14);
  if ( !v15 )
    goto LABEL_10;
  if ( !v15->max_length )
  {
    sub_B17100(v15, v15, v16);
    sub_B170A0();
  }
  v15->m_Items[1] = eventId;
  this->fields.eventIdList = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v26 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v22,
                                                                                                   v23,
                                                                                                   v24,
                                                                                                   v25);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v26,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  v35 = QuestPhaseMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, questId, questPhase, 0LL);
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( v35 )
  {
    if ( !entity )
      goto LABEL_10;
    PrioredIndividuality = (WarBoardEvalValueSquare_EvalValueSquare_o *)QuestPhaseEntity__getPrioredIndividuality(
                                                                          entity,
                                                                          0LL);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  else
  {
    PrioredIndividuality = (WarBoardEvalValueSquare_EvalValueSquare_o *)sub_B17014(int___TypeInfo, 0LL, v36);
    if ( !questPhaseIndivLists )
      goto LABEL_10;
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)questPhaseIndivLists,
    0,
    PrioredIndividuality,
    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  EventUpValSetupInfo__AnalyzeInfo(this, 0, v39);
}


void __fastcall EventUpValSetupInfo___ctor_24610352(
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2

  v5 = eventIdList;
  if ( (byte_40F9C41 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, eventIdList);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    byte_40F9C41 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isQuestStart = 0;
  this->fields.questId = 0;
  if ( !v5 )
    v5 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v9);
  this->fields.eventIdList = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v15,
                                                                                                   v16,
                                                                                                   v17,
                                                                                                   v18);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v19,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.questPhaseIndivLists = (struct System_Collections_Generic_Dictionary_int__int____o *)v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questPhaseIndivLists,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  EventUpValSetupInfo__AnalyzeInfo(this, ignoreFlg, v26);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Int32_array *eventIdList; // x8
  __int64 v19; // x26
  EventUpValSetupInfo_o *v20; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  System_Collections_Generic_List_int__o *v22; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_int__o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_int__o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  WarEntity_o *IsServantEquipFilterNoDisp; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x28
  _BOOL4 v41; // w27
  struct System_Int32_array *v42; // x8
  int32_t v43; // w25
  _BOOL4 v44; // w8
  _BOOL4 v45; // w8
  _BOOL4 v46; // w8
  _BOOL4 v47; // w8
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  WebViewManager_o *v76; // x0
  ServantFilterMaster_o *v77; // x0
  System_Int32_array **EnableIdList; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  const MethodInfo *v85; // x1
  System_Collections_Generic_List_int__o *v86; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F9C42 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFilterMaster___, ignoreFlg);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737208, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F9C42 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_40;
  v19 = *(_QWORD *)&eventIdList->max_length;
  v20 = this;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v22 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16,
                                                    v17);
  System_Collections_Generic_List_int____ctor_49346660(
    v22,
    v19,
    (const MethodInfo_2F0F864 *)Method_System_Collections_Generic_List_int___ctor___66737208);
  v27 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25,
                                                    v26);
  System_Collections_Generic_List_int____ctor_49346660(
    v27,
    v19,
    (const MethodInfo_2F0F864 *)Method_System_Collections_Generic_List_int___ctor___66737208);
  v32 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor_49346660(
    v32,
    v19,
    (const MethodInfo_2F0F864 *)Method_System_Collections_Generic_List_int___ctor___66737208);
  v86 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v33,
                                                    v34,
                                                    v35,
                                                    v36);
  System_Collections_Generic_List_int____ctor_49346660(
    v86,
    v19,
    (const MethodInfo_2F0F864 *)Method_System_Collections_Generic_List_int___ctor___66737208);
  if ( (int)v19 >= 1 )
  {
    v40 = 0LL;
    v41 = ignoreFlg;
    while ( 1 )
    {
      v42 = v20->fields.eventIdList;
      if ( !v42 )
        break;
      if ( v40 >= v42->max_length )
      {
        sub_B17100(IsServantEquipFilterNoDisp, v38, v39);
        sub_B170A0();
      }
      if ( !v21 )
        break;
      v43 = v42->m_Items[v40 + 1];
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        v21,
        &entity,
        v43,
        (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
      if ( entity )
        v44 = !EventFilterEntity__IsServantFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
      else
        v44 = 1;
      if ( v44 || v41 )
      {
        if ( !v22 )
          break;
        System_Collections_Generic_List_int___Add(
          v22,
          v43,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        v45 = !entity || !EventFilterEntity__IsSupportServantFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        if ( v45 || v41 )
        {
          if ( !v32 )
            break;
          System_Collections_Generic_List_int___Add(
            v32,
            v43,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      IsServantEquipFilterNoDisp = entity;
      if ( entity )
      {
        IsServantEquipFilterNoDisp = (WarEntity_o *)EventFilterEntity__IsServantEquipFilterNoDisp(
                                                      (EventFilterEntity_o *)entity,
                                                      0LL);
        v46 = ((unsigned __int8)IsServantEquipFilterNoDisp & 1) == 0;
      }
      else
      {
        v46 = 1;
      }
      if ( v46 || v41 )
      {
        if ( !v27 )
          break;
        System_Collections_Generic_List_int___Add(
          v27,
          v43,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        IsServantEquipFilterNoDisp = entity;
        if ( entity )
        {
          IsServantEquipFilterNoDisp = (WarEntity_o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                        (EventFilterEntity_o *)entity,
                                                        0LL);
          v47 = ((unsigned __int8)IsServantEquipFilterNoDisp & 1) == 0;
        }
        else
        {
          v47 = 1;
        }
        if ( v47 || v41 )
        {
          if ( !v86 )
            break;
          System_Collections_Generic_List_int___Add(
            v86,
            v43,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v40 >= (int)v19 )
        goto LABEL_33;
    }
LABEL_40:
    sub_B170D4();
  }
LABEL_33:
  if ( !v22 )
    goto LABEL_40;
  v48 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v22,
                                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v20->fields.servantFilterEventIdList = (struct System_Int32_array *)v48;
  sub_B16F98((BattleServantConfConponent_o *)&v20->fields.servantFilterEventIdList, v48, v49, v50, v51, v52, v53, v54);
  if ( !v27 )
    goto LABEL_40;
  v55 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v27,
                                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v20->fields.servantEquipFilterEventIdList = (struct System_Int32_array *)v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->fields.servantEquipFilterEventIdList,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  if ( !v32 )
    goto LABEL_40;
  v62 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v32,
                                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v20->fields.supportFilterEventIdList = (struct System_Int32_array *)v62;
  sub_B16F98((BattleServantConfConponent_o *)&v20->fields.supportFilterEventIdList, v62, v63, v64, v65, v66, v67, v68);
  if ( !v86 )
    goto LABEL_40;
  v69 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v86,
                                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v20->fields.supportEquipFilterEventIdList = (struct System_Int32_array *)v69;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->fields.supportEquipFilterEventIdList,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v76 )
    goto LABEL_40;
  v77 = (ServantFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v76,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  if ( !v77 )
    goto LABEL_40;
  EnableIdList = (System_Int32_array **)ServantFilterMaster__getEnableIdList(v77, 0LL);
  v20->fields.servantFilterIdList = (struct System_Int32_array *)EnableIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->fields.servantFilterIdList,
    EnableIdList,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  EventUpValSetupInfo__AnalyzeInfoCampaign(v20, v85);
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventCampaignMaster_o *v35; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *v44; // x22
  __int64 v45; // x23
  System_Collections_Generic_List_List_EventCampaignEntity___o *CombineEventCampaigns_29388768; // x22
  WebViewManager_o *v47; // x0
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x20
  int v60; // w26
  BattleServantConfConponent_o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *klass; // x24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *current; // x23
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_Collections_Generic_List_int__o *v78; // x24
  int v79; // w8
  TitleInfoControl_EventEndTimeInfo_o *v80; // x25
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  int v88; // w28
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  EventUpValSetupInfo___c_c *v93; // x0
  struct EventUpValSetupInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__44_0; // x21
  Il2CppObject *v96; // x22
  struct EventUpValSetupInfo___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  System_Collections_Generic_List_int__o *v108; // x22
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v113; // x21
  int size; // w8
  __int64 v115; // x19
  __int64 v116; // x8
  __int64 v117; // x8
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  struct System_Collections_Generic_List_int____o **p_eventCampaignServantIdList; // x0
  System_Int32_array **v125; // x1
  System_Int32_array **v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  EventUpValSetupInfo_o *v133; // [xsp+8h] [xbp-C8h]
  Il2CppObject *object; // [xsp+10h] [xbp-C0h]
  _BYTE v135[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v136; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v138; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40F9C43 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventCampaignEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_EventCampaignEntity__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int_____ctor__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v24);
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, v25);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__44_0__, v29);
    sub_B16FFC(&Method_EventUpValSetupInfo___c__DisplayClass44_0__AnalyzeInfoCampaign_b__1__, v30);
    sub_B16FFC(&EventUpValSetupInfo___c__DisplayClass44_0_TypeInfo, v31);
    sub_B16FFC(&EventUpValSetupInfo___c_TypeInfo, v32);
    byte_40F9C43 = 1;
  }
  memset(&v138, 0, sizeof(v138));
  memset(&i, 0, sizeof(i));
  v136 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_60;
  v35 = MasterData_WarQuestSelectionMaster;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns(MasterData_WarQuestSelectionMaster, 0LL);
  if ( CombineEventCampaigns )
  {
    v44 = CombineEventCampaigns;
    v45 = sub_B170CC(EventUpValSetupInfo___c__DisplayClass44_0_TypeInfo, v37, v38, v39, v40);
    EventUpValSetupInfo___c__DisplayClass44_0___ctor((EventUpValSetupInfo___c__DisplayClass44_0_o *)v45, 0LL);
    CombineEventCampaigns_29388768 = EventCampaignMaster__GetCombineEventCampaigns_29388768(v35, v44, 0LL);
    v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v47 )
      goto LABEL_60;
    v48 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v47,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !v45 )
      goto LABEL_60;
    *(_QWORD *)(v45 + 16) = v48;
    v133 = this;
    sub_B16F98((BattleServantConfConponent_o *)(v45 + 16), v48, v49, v50, v51, v52, v53, v54);
    v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                    v55,
                                                                                                    v56,
                                                                                                    v57,
                                                                                                    v58);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v59,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !CombineEventCampaigns_29388768 )
      goto LABEL_60;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v135,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns_29388768,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    object = (Il2CppObject *)v45;
    v60 = 0;
    v61 = (BattleServantConfConponent_o *)(v45 + 24);
    v138 = *(System_Collections_Generic_List_Enumerator_T__o *)v135;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v138,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
    {
      klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v61->klass;
      current = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v138.fields.current;
      if ( !v61->klass )
      {
        klass = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_EventCampaignEntity__TypeInfo,
                                                                            v62,
                                                                            v63,
                                                                            v64,
                                                                            v65);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          klass,
          object,
          Method_EventUpValSetupInfo___c__DisplayClass44_0__AnalyzeInfoCampaign_b__1__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_EventCampaignEntity___ctor__);
        v61->klass = (BattleServantConfConponent_c *)klass;
        sub_B16F98(v61, (System_Int32_array **)klass, v68, v69, v70, v71, v72, v73);
      }
      if ( !current )
        sub_B170D4();
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        current,
        (System_Comparison_T__o *)klass,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
      v78 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v74,
                                                        v75,
                                                        v76,
                                                        v77);
      System_Collections_Generic_List_int____ctor(
        v78,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v135,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v135;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
            System_Collections_Generic_List_int___AddRange(
              v78,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current[2].monitor,
              (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        if ( !i.fields.current )
          sub_B170D4();
        if ( !v78 )
          sub_B170D4();
      }
      *(_DWORD *)&v135[4 * v60 + 24] = 186;
      v60 = ++v136;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      if ( v60 )
      {
        v79 = v60 - 1;
        if ( *(_DWORD *)&v135[4 * v60 + 20] == 186 )
        {
          --v60;
          v136 = v79;
        }
      }
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v78 )
        sub_B170D4();
      v80 = current->fields._items->m_Items[0];
      v81 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                     v78,
                                     (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v80 )
        sub_B170D4();
      v80[1].klass = (TitleInfoControl_EventEndTimeInfo_c *)v81;
      sub_B16F98((BattleServantConfConponent_o *)&v80[1], v81, v82, v83, v84, v85, v86, v87);
      if ( !current->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v59 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v59,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current->fields._items->m_Items[0],
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    }
    *(_DWORD *)&v135[4 * v60 + 24] = 248;
    v88 = ++v136;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v138,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    if ( v88 && *(_DWORD *)&v135[4 * v88 + 20] == 248 )
      v136 = v88 - 1;
    v93 = EventUpValSetupInfo___c_TypeInfo;
    if ( (BYTE3(EventUpValSetupInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValSetupInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValSetupInfo___c_TypeInfo);
      v93 = EventUpValSetupInfo___c_TypeInfo;
    }
    static_fields = v93->static_fields;
    _9__44_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v93);
        static_fields = EventUpValSetupInfo___c_TypeInfo->static_fields;
      }
      v96 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_EventCampaignEntity__TypeInfo,
                                                                             v89,
                                                                             v90,
                                                                             v91,
                                                                             v92);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__44_0,
        v96,
        Method_EventUpValSetupInfo___c__AnalyzeInfoCampaign_b__44_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_EventCampaignEntity___ctor__);
      v97 = EventUpValSetupInfo___c_TypeInfo->static_fields;
      v97->__9__44_0 = (struct System_Comparison_EventCampaignEntity__o *)_9__44_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v97->__9__44_0,
        (System_Int32_array **)_9__44_0,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
    if ( !v59 )
      goto LABEL_60;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v59,
      (System_Comparison_T__o *)_9__44_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    v108 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v104,
                                                       v105,
                                                       v106,
                                                       v107);
    System_Collections_Generic_List_int____ctor(
      v108,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v113 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_int____TypeInfo,
                                                                                                     v109,
                                                                                                     v110,
                                                                                                     v111,
                                                                                                     v112);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v113,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
    size = v59->fields._size;
    if ( size >= 1 )
    {
      v115 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v115 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v116 = *((_QWORD *)&v59->fields._items->obj.klass + v115);
        if ( !v116 || !v108 )
          break;
        System_Collections_Generic_List_int___Add(
          v108,
          *(_DWORD *)(v116 + 16),
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v59->fields._size <= (unsigned int)(v115 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v117 = *((_QWORD *)&v59->fields._items->obj.klass + v115);
        if ( !v117 || !v113 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v113,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v117 + 40),
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
        size = v59->fields._size;
        if ( (int)++v115 - 4 >= size )
          goto LABEL_58;
      }
LABEL_60:
      sub_B170D4();
    }
    if ( !v108 )
      goto LABEL_60;
LABEL_58:
    v126 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                    v108,
                                    (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    v133->fields.eventCampaignIdList = (struct System_Int32_array *)v126;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v133->fields.eventCampaignIdList,
      v126,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
    v133->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)v113;
    p_eventCampaignServantIdList = &v133->fields.eventCampaignServantIdList;
    v125 = (System_Int32_array **)v113;
  }
  else
  {
    this->fields.eventCampaignIdList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventCampaignIdList, 0LL, v38, v39, v40, v41, v42, v43);
    this->fields.eventCampaignServantIdList = 0LL;
    p_eventCampaignServantIdList = &this->fields.eventCampaignServantIdList;
    v125 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_eventCampaignServantIdList, v125, v118, v119, v120, v121, v122, v123);
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
  struct System_Collections_Generic_Dictionary_int__int____o *questPhaseIndivLists; // x0
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByGroupId; // x21
  WebViewManager_o *v15; // x0
  QuestPhaseMaster_o *v16; // x0
  struct System_Collections_Generic_Dictionary_int__int____o *v17; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9C44 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F9C44 = 1;
  }
  value = 0LL;
  questPhaseIndivLists = this->fields.questPhaseIndivLists;
  if ( !questPhaseIndivLists )
    goto LABEL_14;
  if ( this->fields.isQuestStart )
    return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)questPhaseIndivLists,
                                   0,
                                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)questPhaseIndivLists,
          eventId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 MasterData_WarQuestSelectionMaster,
                                 eventId,
                                 1,
                                 0LL);
        v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v15 )
        {
          v16 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v15,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
          if ( v16 )
          {
            value = (WarBoardEvalValueSquare_CalcEval_o *)QuestPhaseMaster__GetIndividualityList(
                                                            v16,
                                                            QuestIdListByGroupId,
                                                            0LL);
            v17 = this->fields.questPhaseIndivLists;
            if ( v17 )
            {
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v17,
                eventId,
                (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
                (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
              return (System_Int32_array *)value;
            }
          }
        }
      }
    }
LABEL_14:
    sub_B170D4();
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
  __int64 v2; // x2
  struct System_Int32_array *eventIdList; // x8
  __int64 v4; // x9

  eventIdList = this->fields.eventIdList;
  if ( !eventIdList )
    sub_B170D4();
  v4 = *(_QWORD *)&eventIdList->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  __int64 v2; // x2
  struct System_Int32_array *servantEquipFilterEventIdList; // x8
  __int64 v4; // x9

  servantEquipFilterEventIdList = this->fields.servantEquipFilterEventIdList;
  if ( !servantEquipFilterEventIdList )
    sub_B170D4();
  v4 = *(_QWORD *)&servantEquipFilterEventIdList->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  __int64 v2; // x2
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v4; // x9

  servantFilterEventIdList = this->fields.servantFilterEventIdList;
  if ( !servantFilterEventIdList )
    sub_B170D4();
  v4 = *(_QWORD *)&servantFilterEventIdList->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  __int64 v2; // x2
  struct System_Int32_array *supportEquipFilterEventIdList; // x8
  __int64 v4; // x9

  supportEquipFilterEventIdList = this->fields.supportEquipFilterEventIdList;
  if ( !supportEquipFilterEventIdList )
    sub_B170D4();
  v4 = *(_QWORD *)&supportEquipFilterEventIdList->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  __int64 v2; // x2
  struct System_Int32_array *supportFilterEventIdList; // x8
  __int64 v4; // x9

  supportFilterEventIdList = this->fields.supportFilterEventIdList;
  if ( !supportFilterEventIdList )
    sub_B170D4();
  v4 = *(_QWORD *)&supportFilterEventIdList->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F707D & 1) == 0 )
  {
    sub_B16FFC(&EventUpValSetupInfo___c_TypeInfo, v1);
    byte_40F707D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventUpValSetupInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventUpValSetupInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  struct EventMaster_o *eventMaster; // x0
  WarEntity_o *Entity; // x0
  struct EventMaster_o *v9; // x8
  __int64 v10; // x20
  WarEntity_o *v11; // x0

  if ( (byte_40F707E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, a);
    byte_40F707E = 1;
  }
  if ( !b
    || (eventMaster = this->fields.eventMaster) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)eventMaster,
                   b->fields.eventId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || !a
    || (v9 = this->fields.eventMaster) == 0LL
    || (v10 = *(_QWORD *)&Entity->fields.eventId,
        (v11 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)v9,
                 a->fields.eventId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL) )
  {
    sub_B170D4();
  }
  return v10 - v11->fields.eventId;
}