// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewItem___ctor(
        WarBoardPartyListViewItem_o *this,
        WarBoardPieceData_array *pieces,
        WarBoardPieceData_o *focusPiece,
        int32_t maxCost,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  __int64 MasterData_WarQuestSelectionMaster; // x0
  int64_t npcId_k__BackingField; // x1
  __int64 v81; // x19
  __int64 v82; // x19
  __int64 v83; // x8
  __int64 v84; // x8
  _DWORD *v85; // x21
  int32_t v86; // w19
  __int64 v87; // x20
  __int64 v88; // x20
  WarEntity_o *v89; // x0
  int32_t v90; // w19
  __int64 v91; // x20
  __int64 v92; // x20
  WarEntity_o *v93; // x0
  int32_t age_high; // w27
  __int64 v95; // x19
  int32_t v96; // w22
  __int64 v97; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v98; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x24
  const MethodInfo *v100; // x2
  signed int max_length; // w8
  int32_t v102; // w20
  WarBoardPieceData_o *v103; // x25
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v105; // x21
  EventUpValSetupInfo_o *v106; // x0
  int32_t v107; // w1
  EventUpValSetupInfo_o *v108; // x22
  UserServantEntity_o *v109; // x27
  System_Int64_array *v110; // x23
  PartyOrganizationListViewItem_o *v111; // x19
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  UserServantEntity_o *v118; // x19
  NpcFollowerEntity_o *v119; // x23
  int32_t DispLimitCnt; // w22
  int32_t v121; // w7
  QuestGroupMaster_o *v122; // x23
  FollowerInfo_o *FollowerInfo; // x28
  UserServantEntity_o *v124; // x0
  int32_t hiddenValue_high; // w22
  int32_t fakeValue; // w23
  int32_t hiddenValue; // w27
  EquipTargetInfo_o *v128; // x19
  int32_t EventId; // w19
  EventUpValSetupInfo_o *v130; // x23
  int32_t cost; // w21
  struct PartyOrganizationListViewItem_array *v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  __int64 v139; // x0
  int32_t v140; // [xsp+24h] [xbp-ACh]
  BattleServantConfConponent_o *p_focusMemberItem; // [xsp+28h] [xbp-A8h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-A0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v143; // [xsp+38h] [xbp-98h]
  int32_t v144; // [xsp+44h] [xbp-8Ch]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v145; // [xsp+48h] [xbp-88h]
  QuestGroupMaster_o *v146; // [xsp+50h] [xbp-80h]
  int32_t questId; // [xsp+5Ch] [xbp-74h]
  int32_t v150; // [xsp+74h] [xbp-5Ch]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42E75E6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_NpcServantEquipMaster___,
      (_DWORD)pieces,
      (_DWORD)focusPiece,
      *(_QWORD *)&maxCost);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v31, v32, v33);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__,
      v34,
      v35,
      v36);
    sub_B5D5C4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v37, v38, v39);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v40, v41, v42);
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&long___TypeInfo, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v58, v59, v60);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v61, v62, v63);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&QuestRestrictionInfo_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v70, v71, v72);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v73, v74, v75);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v76, v77, v78);
    byte_42E75E6 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v81 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v81 + 306) & 1) == 0 )
    MasterData_WarQuestSelectionMaster = sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                    + 3));
  v82 = **(_QWORD **)(v81 + 192);
  if ( (*(_BYTE *)(v82 + 306) & 1) == 0 )
    MasterData_WarQuestSelectionMaster = sub_AF52C4(v82);
  v83 = **(_QWORD **)(v82 + 184);
  if ( !v83 )
    goto LABEL_81;
  v84 = *(_QWORD *)(v83 + 432);
  if ( !v84 )
    goto LABEL_81;
  v85 = *(_DWORD **)(v84 + 104);
  if ( v85 )
    v86 = v85[33];
  else
    v86 = 0;
  v87 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v87 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v88 = **(_QWORD **)(v87 + 192);
  if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
    sub_AF52C4(v88);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v88 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v89 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          v86,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v89 )
    v90 = *(&v89->fields.id + 1);
  else
    v90 = 0;
  v91 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v91 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v92 = **(_QWORD **)(v91 + 192);
  if ( (*(_BYTE *)(v92 + 306) & 1) == 0 )
    sub_AF52C4(v92);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v92 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v93 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          v90,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( v93 )
    age_high = HIDWORD(v93->fields.age);
  else
    age_high = 0;
  v140 = maxCost;
  if ( v85 )
  {
    questId = v85[31];
    v150 = v85[32];
  }
  else
  {
    questId = 0;
    v150 = 0;
  }
  v95 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v95 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v96 = questId;
  v97 = **(_QWORD **)(v95 + 192);
  if ( (*(_BYTE *)(v97 + 306) & 1) == 0 )
    sub_AF52C4(v97);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v97 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v98 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v143 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v99 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v99,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v146 = (QuestGroupMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !pieces )
    goto LABEL_81;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v102 = 0;
    p_focusMemberItem = (BattleServantConfConponent_o *)&this->fields.focusMemberItem;
    v144 = age_high;
    v145 = v98;
    do
    {
      if ( v102 >= (unsigned int)max_length )
      {
LABEL_82:
        v139 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
        sub_B5D668(v139, 0LL);
      }
      v103 = pieces->m_Items[v102];
      if ( !v103 )
        goto LABEL_81;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_WarQuestSelectionMaster,
                            v103->fields._restrictionId_k__BackingField,
                            v100);
      v105 = (QuestRestrictionInfo_o *)sub_B5D694(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_34253836(v105, age_high, v96, v150, RestrictionEntity, 0LL);
      if ( !v98 )
        goto LABEL_81;
      if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
             v98,
             &entity,
             v103->fields._UserServantId_k__BackingField,
             (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        if ( v146 )
          age_high = QuestGroupMaster__GetEventId(v146, v96, 0LL);
        v106 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
        v107 = v96;
        v108 = v106;
        EventUpValSetupInfo___ctor(v106, v107, v150, age_high, 0LL);
        v109 = entity;
        MasterData_WarQuestSelectionMaster = sub_B5D5DC(long___TypeInfo, 1LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_81;
        v110 = (System_Int64_array *)MasterData_WarQuestSelectionMaster;
        if ( !*(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) )
          goto LABEL_82;
        *(_QWORD *)(MasterData_WarQuestSelectionMaster + 32) = v103->fields._UserServantEquipId_k__BackingField;
        v111 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29755084(v111, v102, v109, v110, v108, v105, 0LL, 0, 0LL, 0, 0LL);
        age_high = v144;
        v96 = questId;
      }
      else
      {
        npcId_k__BackingField = v103->fields._npcId_k__BackingField;
        if ( npcId_k__BackingField < 1 )
        {
          v111 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_29764096(v111, v102, 0, 0LL, v105, 1, 0, 0LL);
          if ( !v111 )
            goto LABEL_81;
          goto LABEL_74;
        }
        MasterData_WarQuestSelectionMaster = (__int64)v143;
        if ( !v143 )
          goto LABEL_81;
        v118 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 v143,
                 npcId_k__BackingField,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_WarQuestSelectionMaster = (__int64)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_81;
        MasterData_WarQuestSelectionMaster = (__int64)NpcFollowerMaster__GetEntity_20688452(
                                                        Master_WarQuestSelectionMaster,
                                                        v96,
                                                        v150,
                                                        v103->fields._npcId_k__BackingField,
                                                        0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v119 = (NpcFollowerEntity_o *)MasterData_WarQuestSelectionMaster;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(
                           (NpcFollowerEntity_o *)MasterData_WarQuestSelectionMaster,
                           0LL);
          MasterData_WarQuestSelectionMaster = NpcFollowerEntity__GetImageSvtId(v119, 0LL);
          v121 = MasterData_WarQuestSelectionMaster;
        }
        else
        {
          v121 = 0;
          DispLimitCnt = -1;
        }
        v122 = v146;
        if ( !v118 )
          goto LABEL_81;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v118,
                         v103->fields._npcId_k__BackingField,
                         questId,
                         v150,
                         DispLimitCnt,
                         0,
                         0,
                         v121,
                         0LL);
        if ( v103->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_81;
          MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_81;
          v124 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster,
                   v103->fields._npcEquipId_k__BackingField,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v124 )
          {
            hiddenValue_high = HIDWORD(v124->fields.id.fields.hiddenValue);
            fakeValue = v124->fields.id.fields.fakeValue;
            hiddenValue = v124->fields.id.fields.hiddenValue;
            v128 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_30730304(v128, hiddenValue, fakeValue, hiddenValue_high, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_81;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v128, 0LL);
            age_high = v144;
            v122 = v146;
          }
        }
        v96 = questId;
        EventId = age_high;
        if ( v122 )
          EventId = QuestGroupMaster__GetEventId(v122, questId, 0LL);
        v130 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v130, questId, v150, EventId, 0LL);
        v111 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29728604(v111, v102, FollowerInfo, 1, v130, v105, 0LL, 0, 0, 0, 0LL);
      }
      v98 = v145;
      if ( !v111 )
        goto LABEL_81;
LABEL_74:
      v111->fields.warBoardPieceIndex = v103->fields._index_k__BackingField;
      if ( focusPiece && v103->fields._index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (BattleServantConfConponent_c *)v111;
        sub_B5D560(p_focusMemberItem, (System_Int32_array **)v111, v112, v113, v114, v115, v116, v117);
      }
      cost = this->fields.cost;
      MasterData_WarQuestSelectionMaster = PartyOrganizationListViewItem__get_MargeCost(v111, 0LL);
      this->fields.cost = MasterData_WarQuestSelectionMaster + cost;
      if ( !v99 )
        goto LABEL_81;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v99,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v111,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
      ++v102;
      max_length = pieces->max_length;
    }
    while ( v102 < max_length );
  }
  this->fields.maxCost = v140;
  if ( !v99 )
LABEL_81:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, npcId_k__BackingField);
  v132 = (struct PartyOrganizationListViewItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v99,
                                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = v132;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberItemList,
    (System_Int32_array **)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewItem__ChangeFocusMember(
        WarBoardPartyListViewItem_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x21
  int max_length; // w8
  int32_t v10; // w19
  unsigned int v11; // w22
  BattleServantConfConponent_o *p_focusMemberItem; // x20
  __int64 v13; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_11;
  max_length = memberItemList->max_length;
  if ( max_length >= 1 )
  {
    v10 = pieceIndex;
    v11 = 0;
    p_focusMemberItem = (BattleServantConfConponent_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
      }
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v11];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 360LL) == v10 )
      {
        p_focusMemberItem->klass = *(BattleServantConfConponent_c **)&pieceIndex;
        sub_B5D560(
          p_focusMemberItem,
          *(System_Int32_array ***)&pieceIndex,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&pieceIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewItem__ClearMember(
        WarBoardPartyListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  WarBoardPartyListViewItem_o *v5; // x20
  int32_t cost; // w22
  struct PartyOrganizationListViewItem_array *v7; // x8
  __int64 v8; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_8;
  if ( memberItemList->max_length <= index )
    goto LABEL_9;
  v5 = this;
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index];
  if ( !this
    || (cost = v5->fields.cost,
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                                (PartyOrganizationListViewItem_o *)this,
                                                0LL),
        v7 = v5->fields.memberItemList,
        v5->fields.cost = cost - (_DWORD)this,
        !v7) )
  {
LABEL_8:
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  if ( v7->max_length <= index )
  {
LABEL_9:
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  this = (WarBoardPartyListViewItem_o *)v7->m_Items[index];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
}


int32_t __fastcall WarBoardPartyListViewItem__GetCost(WarBoardPartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cost;
}


PartyOrganizationListViewItem_o *__fastcall WarBoardPartyListViewItem__GetFocusMemberItem(
        WarBoardPartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.focusMemberItem;
}


int32_t __fastcall WarBoardPartyListViewItem__GetMaxCost(WarBoardPartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxCost;
}


PartyOrganizationListViewItem_o *__fastcall WarBoardPartyListViewItem__GetMemberItem(
        WarBoardPartyListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    return 0LL;
  max_length = memberItemList->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return memberItemList->m_Items[index];
}


PartyOrganizationListViewItem_array *__fastcall WarBoardPartyListViewItem__GetMemberItems(
        WarBoardPartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.memberItemList;
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_o *__fastcall WarBoardPartyListViewItem__GetRestrictionEntity(
        WarBoardPartyListViewItem_o *this,
        int32_t restrictionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_42E75E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_RestrictionMaster___, restrictionId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9, v10);
    byte_42E75E7 = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v12 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                  restrictionId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
}


int32_t __fastcall WarBoardPartyListViewItem__GetWeareMember(
        WarBoardPartyListViewItem_o *this,
        int64_t userSvtEquipId,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  WarBoardPartyListViewItem_o *v4; // x21
  __int64 v6; // x19
  int max_length; // w9
  __int64 v9; // x0

  if ( userSvtEquipId >= 1 )
  {
    memberItemList = this->fields.memberItemList;
    v4 = this;
    if ( !memberItemList )
LABEL_9:
      sub_B5D69C(this, userSvtEquipId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
      }
      this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[v6];
      if ( this )
      {
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(
                                                (PartyOrganizationListViewItem_o *)this,
                                                0LL);
        if ( this == (WarBoardPartyListViewItem_o *)userSvtEquipId )
          return v6;
        memberItemList = v4->fields.memberItemList;
        ++v6;
        if ( memberItemList )
          continue;
      }
      goto LABEL_9;
    }
  }
  LODWORD(v6) = -1;
  return v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewItem__SetEquip(
        WarBoardPartyListViewItem_o *this,
        int32_t index,
        int64_t userSvtEquipId,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  WarBoardPartyListViewItem_o *v6; // x20
  __int64 v7; // x22
  int max_length; // w9
  Il2CppClass **v10; // x8
  PartyOrganizationListViewItem_o *v11; // x21
  int32_t cost; // w24
  int32_t v13; // w24
  int32_t v14; // w9
  __int64 v15; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    v10 = &memberItemList->obj.klass + v7;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( v11 )
    {
      cost = v6->fields.cost;
      if ( index == (_DWORD)v7 )
      {
        v6->fields.cost = cost
                        - PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v10[4], 0LL);
        PartyOrganizationListViewItem__SetEquipUserServantId(v11, userSvtEquipId, 0LL);
        v13 = v6->fields.cost;
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v11, 0LL);
        v14 = (_DWORD)this + v13;
      }
      else
      {
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__RemoveEquipUserServantId(
                                                (PartyOrganizationListViewItem_o *)v10[4],
                                                userSvtEquipId,
                                                0LL);
        v14 = cost - (_DWORD)this;
      }
      memberItemList = v6->fields.memberItemList;
      ++v7;
      v6->fields.cost = v14;
      if ( memberItemList )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewItem__SetMember(
        WarBoardPartyListViewItem_o *this,
        int32_t index,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  WarBoardPartyListViewItem_o *v6; // x19
  int32_t cost; // w23
  struct PartyOrganizationListViewItem_array *v9; // x8
  struct PartyOrganizationListViewItem_array *v10; // x8
  int32_t v11; // w20
  __int64 v12; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_11;
  if ( memberItemList->max_length <= index )
    goto LABEL_12;
  v6 = this;
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index];
  if ( !this )
    goto LABEL_11;
  cost = v6->fields.cost;
  this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                          (PartyOrganizationListViewItem_o *)this,
                                          0LL);
  v9 = v6->fields.memberItemList;
  v6->fields.cost = cost - (_DWORD)this;
  if ( !v9 )
    goto LABEL_11;
  if ( v9->max_length <= index )
    goto LABEL_12;
  this = (WarBoardPartyListViewItem_o *)v9->m_Items[index];
  if ( !this
    || (PartyOrganizationListViewItem__ModifyFromWarBoard((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberItemList) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  if ( v10->max_length <= index )
  {
LABEL_12:
    v12 = sub_B5D6C8(this);
    sub_B5D668(v12, 0LL);
  }
  this = (WarBoardPartyListViewItem_o *)v10->m_Items[index];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
}


void __fastcall WarBoardPartyListViewItem__SwapMember(
        WarBoardPartyListViewItem_o *this,
        int32_t index1,
        int32_t index2,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  unsigned int max_length; // w9
  __int64 v6; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_7;
  max_length = memberItemList->max_length;
  if ( max_length <= index1 || max_length <= index2 )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_B5D69C(this, index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0LL);
}