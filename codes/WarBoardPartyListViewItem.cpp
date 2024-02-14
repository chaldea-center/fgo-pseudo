void __fastcall WarBoardPartyListViewItem___ctor(
        WarBoardPartyListViewItem_o *this,
        WarBoardPieceData_array *pieces,
        WarBoardPieceData_o *focusPiece,
        int32_t maxCost,
        const MethodInfo *method)
{
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
  __int64 MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x19
  __int64 v33; // x19
  __int64 v34; // x8
  __int64 v35; // x8
  _DWORD *v36; // x21
  int32_t v37; // w19
  __int64 v38; // x20
  __int64 v39; // x20
  WarEntity_o *v40; // x0
  int32_t v41; // w19
  __int64 v42; // x20
  __int64 v43; // x20
  WarEntity_o *v44; // x0
  int32_t age_high; // w27
  __int64 v46; // x19
  int32_t v47; // w22
  __int64 v48; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v49; // x23
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x24
  const MethodInfo *v53; // x2
  signed int max_length; // w8
  int32_t v55; // w20
  WarBoardPieceData_o *v56; // x25
  RestrictionEntity_o *RestrictionEntity; // x19
  __int64 v58; // x1
  __int64 v59; // x2
  QuestRestrictionInfo_o *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  EventUpValSetupInfo_o *v63; // x0
  int32_t v64; // w1
  EventUpValSetupInfo_o *v65; // x22
  UserServantEntity_o *v66; // x27
  __int64 v67; // x1
  __int64 v68; // x2
  System_Int64_array *v69; // x23
  PartyOrganizationListViewItem_o *v70; // x19
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int64_t npcId_k__BackingField; // x1
  UserServantEntity_o *v78; // x19
  NpcFollowerEntity_o *v79; // x23
  int32_t DispLimitCnt; // w22
  int32_t v81; // w7
  QuestGroupMaster_o *v82; // x23
  __int64 v83; // x1
  __int64 v84; // x2
  FollowerInfo_o *FollowerInfo; // x28
  UserServantEntity_o *v86; // x0
  int32_t hiddenValue_high; // w22
  int32_t fakeValue; // w23
  int32_t hiddenValue; // w27
  EquipTargetInfo_o *v90; // x19
  int32_t EventId; // w19
  EventUpValSetupInfo_o *v92; // x23
  __int64 v93; // x1
  __int64 v94; // x2
  int32_t cost; // w21
  struct PartyOrganizationListViewItem_array *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x0
  int32_t v104; // [xsp+24h] [xbp-ACh]
  BattleServantConfConponent_o *p_focusMemberItem; // [xsp+28h] [xbp-A8h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-A0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v107; // [xsp+38h] [xbp-98h]
  int32_t v108; // [xsp+44h] [xbp-8Ch]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v109; // [xsp+48h] [xbp-88h]
  QuestGroupMaster_o *v110; // [xsp+50h] [xbp-80h]
  int32_t questId; // [xsp+5Ch] [xbp-74h]
  int32_t v114; // [xsp+74h] [xbp-5Ch]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4213312 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, pieces);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v16);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v17);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v18);
    sub_B0D8A4(&EquipTargetInfo_TypeInfo, v19);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v20);
    sub_B0D8A4(&long___TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v25);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v26);
    sub_B0D8A4(&QuestRestrictionInfo_TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v29);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    byte_4213312 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
    MasterData_WarQuestSelectionMaster = sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                    + 3));
  v33 = **(_QWORD **)(v32 + 192);
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    MasterData_WarQuestSelectionMaster = sub_AA65A4(v33);
  v34 = **(_QWORD **)(v33 + 184);
  if ( !v34 )
    goto LABEL_81;
  v35 = *(_QWORD *)(v34 + 432);
  if ( !v35 )
    goto LABEL_81;
  v36 = *(_DWORD **)(v35 + 104);
  if ( v36 )
    v37 = v36[33];
  else
    v37 = 0;
  v38 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v39 = **(_QWORD **)(v38 + 192);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AA65A4(v39);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v39 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v40 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          v37,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v40 )
    v41 = *(&v40->fields.id + 1);
  else
    v41 = 0;
  v42 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v43 = **(_QWORD **)(v42 + 192);
  if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
    sub_AA65A4(v43);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v43 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v44 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          v41,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( v44 )
    age_high = HIDWORD(v44->fields.age);
  else
    age_high = 0;
  v104 = maxCost;
  if ( v36 )
  {
    questId = v36[31];
    v114 = v36[32];
  }
  else
  {
    questId = 0;
    v114 = 0;
  }
  v46 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v47 = questId;
  v48 = **(_QWORD **)(v46 + 192);
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    sub_AA65A4(v48);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v48 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v49 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v107 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                                                  v50,
                                                                                                  v51);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v110 = (QuestGroupMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !pieces )
    goto LABEL_81;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v55 = 0;
    p_focusMemberItem = (BattleServantConfConponent_o *)&this->fields.focusMemberItem;
    v108 = age_high;
    v109 = v49;
    do
    {
      if ( v55 >= (unsigned int)max_length )
      {
LABEL_82:
        v103 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
        sub_B0D948(v103, 0LL);
      }
      v56 = pieces->m_Items[v55];
      if ( !v56 )
        goto LABEL_81;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_WarQuestSelectionMaster,
                            v56->fields._restrictionId_k__BackingField,
                            v53);
      v60 = (QuestRestrictionInfo_o *)sub_B0D974(QuestRestrictionInfo_TypeInfo, v58, v59);
      QuestRestrictionInfo___ctor_30600632(v60, age_high, v47, v114, RestrictionEntity, 0LL);
      if ( !v49 )
        goto LABEL_81;
      if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
             v49,
             &entity,
             v56->fields._UserServantId_k__BackingField,
             (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        if ( v110 )
          age_high = QuestGroupMaster__GetEventId(v110, v47, 0LL);
        v63 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v61, v62);
        v64 = v47;
        v65 = v63;
        EventUpValSetupInfo___ctor(v63, v64, v114, age_high, 0LL);
        v66 = entity;
        MasterData_WarQuestSelectionMaster = sub_B0D8BC(long___TypeInfo, 1LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_81;
        v69 = (System_Int64_array *)MasterData_WarQuestSelectionMaster;
        if ( !*(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) )
          goto LABEL_82;
        *(_QWORD *)(MasterData_WarQuestSelectionMaster + 32) = v56->fields._UserServantEquipId_k__BackingField;
        v70 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v67, v68);
        PartyOrganizationListViewItem___ctor_30730744(v70, v55, v66, v69, v65, v60, 0LL, 0, 0LL);
        age_high = v108;
        v47 = questId;
      }
      else
      {
        npcId_k__BackingField = v56->fields._npcId_k__BackingField;
        if ( npcId_k__BackingField < 1 )
        {
          v70 = (PartyOrganizationListViewItem_o *)sub_B0D974(
                                                     PartyOrganizationListViewItem_TypeInfo,
                                                     npcId_k__BackingField,
                                                     v62);
          PartyOrganizationListViewItem___ctor_30738796(v70, v55, 0, 0LL, v60, 1, 0, 0LL);
          if ( !v70 )
            goto LABEL_81;
          goto LABEL_74;
        }
        MasterData_WarQuestSelectionMaster = (__int64)v107;
        if ( !v107 )
          goto LABEL_81;
        v78 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v107,
                npcId_k__BackingField,
                (const MethodInfo_2669DFC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_WarQuestSelectionMaster = (__int64)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_81;
        MasterData_WarQuestSelectionMaster = (__int64)NpcFollowerMaster__GetEntity_19793912(
                                                        Master_WarQuestSelectionMaster,
                                                        v47,
                                                        v114,
                                                        v56->fields._npcId_k__BackingField,
                                                        0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v79 = (NpcFollowerEntity_o *)MasterData_WarQuestSelectionMaster;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(
                           (NpcFollowerEntity_o *)MasterData_WarQuestSelectionMaster,
                           0LL);
          MasterData_WarQuestSelectionMaster = NpcFollowerEntity__GetImageSvtId(v79, 0LL);
          v81 = MasterData_WarQuestSelectionMaster;
        }
        else
        {
          v81 = 0;
          DispLimitCnt = -1;
        }
        v82 = v110;
        if ( !v78 )
          goto LABEL_81;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v78,
                         v56->fields._npcId_k__BackingField,
                         questId,
                         v114,
                         DispLimitCnt,
                         0,
                         0,
                         v81,
                         0LL);
        if ( v56->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_81;
          MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_81;
          v86 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster,
                  v56->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_2669DFC *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v86 )
          {
            hiddenValue_high = HIDWORD(v86->fields.id.fields.hiddenValue);
            fakeValue = v86->fields.id.fields.fakeValue;
            hiddenValue = v86->fields.id.fields.hiddenValue;
            v90 = (EquipTargetInfo_o *)sub_B0D974(EquipTargetInfo_TypeInfo, v83, v84);
            EquipTargetInfo___ctor_28810548(v90, hiddenValue, fakeValue, hiddenValue_high, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_81;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v90, 0LL);
            age_high = v108;
            v82 = v110;
          }
        }
        v47 = questId;
        EventId = age_high;
        if ( v82 )
          EventId = QuestGroupMaster__GetEventId(v82, questId, 0LL);
        v92 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v83, v84);
        EventUpValSetupInfo___ctor(v92, questId, v114, EventId, 0LL);
        v70 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v93, v94);
        PartyOrganizationListViewItem___ctor_30704360(v70, v55, FollowerInfo, 1, v92, v60, 0LL, 0, 0, 0, 0LL);
      }
      v49 = v109;
      if ( !v70 )
        goto LABEL_81;
LABEL_74:
      v70->fields.warBoardPieceIndex = v56->fields._index_k__BackingField;
      if ( focusPiece && v56->fields._index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (BattleServantConfConponent_c *)v70;
        sub_B0D840(p_focusMemberItem, (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
      }
      cost = this->fields.cost;
      MasterData_WarQuestSelectionMaster = PartyOrganizationListViewItem__get_MargeCost(v70, 0LL);
      this->fields.cost = MasterData_WarQuestSelectionMaster + cost;
      if ( !v52 )
        goto LABEL_81;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
      ++v55;
      max_length = pieces->max_length;
    }
    while ( v55 < max_length );
  }
  this->fields.maxCost = v104;
  if ( !v52 )
LABEL_81:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  v96 = (struct PartyOrganizationListViewItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v52,
                                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = v96;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.memberItemList,
    (System_Int32_array **)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
}


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
  unsigned int v11; // w22
  BattleServantConfConponent_o *p_focusMemberItem; // x20
  PartyOrganizationListViewItem_o *v13; // x1
  __int64 v14; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_11;
  max_length = memberItemList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    p_focusMemberItem = (BattleServantConfConponent_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
      }
      v13 = memberItemList->m_Items[v11];
      if ( !v13 )
        break;
      if ( v13->fields.warBoardPieceIndex == pieceIndex )
      {
        p_focusMemberItem->klass = (BattleServantConfConponent_c *)v13;
        sub_B0D840(p_focusMemberItem, (System_Int32_array **)v13, (System_String_array **)method, v3, v4, v5, v6, v7);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_11:
    sub_B0D97C(this);
  }
}


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
    sub_B0D97C(this);
  }
  if ( v7->max_length <= index )
  {
LABEL_9:
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4213313 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_RestrictionMaster___, *(_QWORD *)&restrictionId);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4213313 = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(v7);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v7 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  return (RestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                  restrictionId,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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
      sub_B0D97C(this);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B0D9A8(this);
        sub_B0D948(v9, 0LL);
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
    sub_B0D97C(this);
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v15 = sub_B0D9A8(this);
      sub_B0D948(v15, 0LL);
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
    sub_B0D97C(this);
  }
  if ( v10->max_length <= index )
  {
LABEL_12:
    v12 = sub_B0D9A8(this);
    sub_B0D948(v12, 0LL);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0LL);
}