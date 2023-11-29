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
  __int64 v31; // x19
  __int64 v32; // x19
  __int64 v33; // x8
  __int64 v34; // x8
  _DWORD *v35; // x21
  int32_t v36; // w19
  __int64 v37; // x20
  __int64 v38; // x20
  DataManager_o *v39; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v41; // x0
  int32_t v42; // w19
  __int64 v43; // x20
  __int64 v44; // x20
  DataManager_o *v45; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x0
  WarEntity_o *v47; // x0
  int32_t age_high; // w27
  __int64 v49; // x19
  int32_t v50; // w22
  __int64 v51; // x19
  DataManager_o *v52; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v53; // x23
  WebViewManager_o *Instance; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x24
  WebViewManager_o *v60; // x0
  WarBoardPartyListViewItem_o *v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  signed int max_length; // w8
  int32_t v65; // w20
  WarBoardPieceData_o *v66; // x25
  RestrictionEntity_o *RestrictionEntity; // x19
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  QuestRestrictionInfo_o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  EventUpValSetupInfo_o *v77; // x0
  int32_t v78; // w1
  EventUpValSetupInfo_o *v79; // x22
  UserServantEntity_o *v80; // x27
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  System_Int64_array *v84; // x23
  PartyOrganizationListViewItem_o *v85; // x19
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int64_t npcId_k__BackingField; // x1
  UserServantEntity_o *v93; // x19
  NpcFollowerEntity_o *Entity_21217012; // x0
  NpcFollowerEntity_o *v95; // x23
  int32_t DispLimitCnt; // w22
  int32_t ImageSvtId; // w7
  QuestGroupMaster_o *v98; // x23
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  FollowerInfo_o *FollowerInfo; // x28
  WebViewManager_o *v104; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v105; // x0
  UserServantEntity_o *v106; // x0
  int32_t hiddenValue_high; // w22
  int32_t fakeValue; // w23
  int32_t hiddenValue; // w27
  EquipTargetInfo_o *v110; // x19
  int32_t EventId; // w19
  EventUpValSetupInfo_o *v112; // x23
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  int32_t cost; // w21
  struct PartyOrganizationListViewItem_array *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  int32_t v125; // [xsp+24h] [xbp-ACh]
  BattleServantConfConponent_o *p_focusMemberItem; // [xsp+28h] [xbp-A8h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-A0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v128; // [xsp+38h] [xbp-98h]
  int32_t v129; // [xsp+44h] [xbp-8Ch]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v130; // [xsp+48h] [xbp-88h]
  QuestGroupMaster_o *v131; // [xsp+50h] [xbp-80h]
  int32_t questId; // [xsp+5Ch] [xbp-74h]
  int32_t v135; // [xsp+74h] [xbp-5Ch]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_40F85A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, pieces);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v18);
    sub_B16FFC(&EquipTargetInfo_TypeInfo, v19);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v20);
    sub_B16FFC(&long___TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v24);
    sub_B16FFC(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v25);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v26);
    sub_B16FFC(&QuestRestrictionInfo_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v29);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    byte_40F85A9 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v32 = **(_QWORD **)(v31 + 192);
  if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
    sub_AAFCFC(v32);
  v33 = **(_QWORD **)(v32 + 184);
  if ( !v33 )
    goto LABEL_81;
  v34 = *(_QWORD *)(v33 + 424);
  if ( !v34 )
    goto LABEL_81;
  v35 = *(_DWORD **)(v34 + 104);
  if ( v35 )
    v36 = v35[33];
  else
    v36 = 0;
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v38 = **(_QWORD **)(v37 + 192);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AAFCFC(v38);
  v39 = **(DataManager_o ***)(v38 + 184);
  if ( !v39 )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        v39,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v41 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          MasterData_WarQuestSelectionMaster,
          v36,
          (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v41 )
    v42 = *(&v41->fields.id + 1);
  else
    v42 = 0;
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v44 = **(_QWORD **)(v43 + 192);
  if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
    sub_AAFCFC(v44);
  v45 = **(DataManager_o ***)(v44 + 184);
  if ( !v45 )
    goto LABEL_81;
  v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v45,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !v46 )
    goto LABEL_81;
  v47 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v46,
          v42,
          (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( v47 )
    age_high = HIDWORD(v47->fields.age);
  else
    age_high = 0;
  v125 = maxCost;
  if ( v35 )
  {
    questId = v35[31];
    v135 = v35[32];
  }
  else
  {
    questId = 0;
    v135 = 0;
  }
  v49 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v50 = questId;
  v51 = **(_QWORD **)(v49 + 192);
  if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
    sub_AAFCFC(v51);
  v52 = **(DataManager_o ***)(v51 + 184);
  if ( !v52 )
    goto LABEL_81;
  v53 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 v52,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v128 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                                                  v55,
                                                                                                  v56,
                                                                                                  v57,
                                                                                                  v58);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v60 )
    goto LABEL_81;
  v61 = (WarBoardPartyListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v60,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v131 = (QuestGroupMaster_o *)v61;
  if ( !pieces )
    goto LABEL_81;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v65 = 0;
    p_focusMemberItem = (BattleServantConfConponent_o *)&this->fields.focusMemberItem;
    v129 = age_high;
    v130 = v53;
    do
    {
      if ( v65 >= (unsigned int)max_length )
      {
LABEL_82:
        sub_B17100(v61, v62, v63);
        sub_B170A0();
      }
      v66 = pieces->m_Items[v65];
      if ( !v66 )
        goto LABEL_81;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            v61,
                            v66->fields._restrictionId_k__BackingField,
                            v63);
      v72 = (QuestRestrictionInfo_o *)sub_B170CC(QuestRestrictionInfo_TypeInfo, v68, v69, v70, v71);
      QuestRestrictionInfo___ctor_31233524(v72, age_high, v50, v135, RestrictionEntity, 0LL);
      if ( !v53 )
        goto LABEL_81;
      if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
             v53,
             &entity,
             v66->fields._UserServantId_k__BackingField,
             (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        if ( v131 )
          age_high = QuestGroupMaster__GetEventId(v131, v50, 0LL);
        v77 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v73, v74, v75, v76);
        v78 = v50;
        v79 = v77;
        EventUpValSetupInfo___ctor(v77, v78, v135, age_high, 0LL);
        v80 = entity;
        v61 = (WarBoardPartyListViewItem_o *)sub_B17014(long___TypeInfo, 1LL, v81);
        if ( !v61 )
          goto LABEL_81;
        v84 = (System_Int64_array *)v61;
        if ( !v61->fields.sortIndex )
          goto LABEL_82;
        v61->fields.sortValue0 = v66->fields._UserServantEquipId_k__BackingField;
        v85 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v62, v63, v82, v83);
        PartyOrganizationListViewItem___ctor_32304716(v85, v65, v80, v84, v79, v72, 0LL, 0, 0LL);
        age_high = v129;
        v50 = questId;
      }
      else
      {
        npcId_k__BackingField = v66->fields._npcId_k__BackingField;
        if ( npcId_k__BackingField < 1 )
        {
          v85 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                     PartyOrganizationListViewItem_TypeInfo,
                                                     npcId_k__BackingField,
                                                     v74,
                                                     v75,
                                                     v76);
          PartyOrganizationListViewItem___ctor_32311272(v85, v65, 0, 0LL, v72, 1, 0, 0LL);
          if ( !v85 )
            goto LABEL_81;
          goto LABEL_74;
        }
        if ( !v128 )
          goto LABEL_81;
        v93 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v128,
                npcId_k__BackingField,
                (const MethodInfo_266F5B0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_81;
        Entity_21217012 = NpcFollowerMaster__GetEntity_21217012(
                            Master_WarQuestSelectionMaster,
                            v50,
                            v135,
                            v66->fields._npcId_k__BackingField,
                            0LL);
        if ( Entity_21217012 )
        {
          v95 = Entity_21217012;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(Entity_21217012, 0LL);
          ImageSvtId = NpcFollowerEntity__GetImageSvtId(v95, 0LL);
        }
        else
        {
          ImageSvtId = 0;
          DispLimitCnt = -1;
        }
        v98 = v131;
        if ( !v93 )
          goto LABEL_81;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v93,
                         v66->fields._npcId_k__BackingField,
                         questId,
                         v135,
                         DispLimitCnt,
                         0,
                         0,
                         ImageSvtId,
                         0LL);
        if ( v66->fields._npcEquipId_k__BackingField >= 1 )
        {
          v104 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v104 )
            goto LABEL_81;
          v105 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)v104,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !v105 )
            goto LABEL_81;
          v106 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v105,
                   v66->fields._npcEquipId_k__BackingField,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v106 )
          {
            hiddenValue_high = HIDWORD(v106->fields.id.fields.hiddenValue);
            fakeValue = v106->fields.id.fields.fakeValue;
            hiddenValue = v106->fields.id.fields.hiddenValue;
            v110 = (EquipTargetInfo_o *)sub_B170CC(EquipTargetInfo_TypeInfo, v99, v100, v101, v102);
            EquipTargetInfo___ctor_29330048(v110, hiddenValue, fakeValue, hiddenValue_high, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_81;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v110, 0LL);
            age_high = v129;
            v98 = v131;
          }
        }
        v50 = questId;
        EventId = age_high;
        if ( v98 )
          EventId = QuestGroupMaster__GetEventId(v98, questId, 0LL);
        v112 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v99, v100, v101, v102);
        EventUpValSetupInfo___ctor(v112, questId, v135, EventId, 0LL);
        v85 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                   PartyOrganizationListViewItem_TypeInfo,
                                                   v113,
                                                   v114,
                                                   v115,
                                                   v116);
        PartyOrganizationListViewItem___ctor_32282080(v85, v65, FollowerInfo, 1, v112, v72, 0LL, 0, 0, 0, 0LL);
      }
      v53 = v130;
      if ( !v85 )
        goto LABEL_81;
LABEL_74:
      v85->fields.warBoardPieceIndex = v66->fields._index_k__BackingField;
      if ( focusPiece && v66->fields._index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (BattleServantConfConponent_c *)v85;
        sub_B16F98(p_focusMemberItem, (System_Int32_array **)v85, v86, v87, v88, v89, v90, v91);
      }
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v85, 0LL) + cost;
      if ( !v59 )
        goto LABEL_81;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v59,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
      ++v65;
      max_length = pieces->max_length;
    }
    while ( v65 < max_length );
  }
  this->fields.maxCost = v125;
  if ( !v59 )
LABEL_81:
    sub_B170D4();
  v118 = (struct PartyOrganizationListViewItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v59,
                                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = v118;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberItemList,
    (System_Int32_array **)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
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
        sub_B17100(this, *(_QWORD *)&pieceIndex, method);
        sub_B170A0();
      }
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v11];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 344LL) == v10 )
      {
        p_focusMemberItem->klass = *(BattleServantConfConponent_c **)&pieceIndex;
        sub_B16F98(
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
    sub_B170D4();
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
  PartyOrganizationListViewItem_o *v6; // x0
  int32_t cost; // w22
  struct PartyOrganizationListViewItem_array *v8; // x8
  PartyOrganizationListViewItem_o *v9; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_8;
  if ( memberItemList->max_length <= index )
    goto LABEL_9;
  v5 = this;
  v6 = memberItemList->m_Items[index];
  if ( !v6
    || (cost = v5->fields.cost,
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v6, 0LL),
        v8 = v5->fields.memberItemList,
        v5->fields.cost = cost - (_DWORD)this,
        !v8) )
  {
LABEL_8:
    sub_B170D4();
  }
  if ( v8->max_length <= index )
  {
LABEL_9:
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  v9 = v8->m_Items[index];
  if ( !v9 )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty(v9, 0LL);
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


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall WarBoardPartyListViewItem__GetMemberItem(
        WarBoardPartyListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t max_length; // w9

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    return 0LL;
  max_length = memberItemList->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
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
  DataManager_o *v8; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F85AA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_RestrictionMaster___, *(_QWORD *)&restrictionId);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_40F85AA = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(v7);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              v8,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return (RestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  restrictionId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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
  PartyOrganizationListViewItem_o *v8; // x0

  if ( userSvtEquipId >= 1 )
  {
    memberItemList = this->fields.memberItemList;
    v4 = this;
    if ( !memberItemList )
LABEL_9:
      sub_B170D4();
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        sub_B17100(this, userSvtEquipId, method);
        sub_B170A0();
      }
      v8 = memberItemList->m_Items[v6];
      if ( v8 )
      {
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v8, 0LL);
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

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
LABEL_10:
    sub_B170D4();
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&index, userSvtEquipId);
      sub_B170A0();
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
  PartyOrganizationListViewItem_o *v7; // x0
  int32_t cost; // w23
  struct PartyOrganizationListViewItem_array *v10; // x8
  PartyOrganizationListViewItem_o *v11; // x0
  struct PartyOrganizationListViewItem_array *v12; // x8
  PartyOrganizationListViewItem_o *v13; // x0
  int32_t v14; // w20

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_11;
  if ( memberItemList->max_length <= index )
    goto LABEL_12;
  v6 = this;
  v7 = memberItemList->m_Items[index];
  if ( !v7 )
    goto LABEL_11;
  cost = v6->fields.cost;
  this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v7, 0LL);
  v10 = v6->fields.memberItemList;
  v6->fields.cost = cost - (_DWORD)this;
  if ( !v10 )
    goto LABEL_11;
  if ( v10->max_length <= index )
    goto LABEL_12;
  v11 = v10->m_Items[index];
  if ( !v11
    || (PartyOrganizationListViewItem__ModifyFromWarBoard(v11, item, 0LL), (v12 = v6->fields.memberItemList) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  if ( v12->max_length <= index )
  {
LABEL_12:
    sub_B17100(this, *(_QWORD *)&index, item);
    sub_B170A0();
  }
  v13 = v12->m_Items[index];
  if ( !v13 )
    goto LABEL_11;
  v14 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v13, 0LL) + v14;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewItem__SwapMember(
        WarBoardPartyListViewItem_o *this,
        int32_t index1,
        int32_t index2,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  unsigned int max_length; // w9
  PartyOrganizationListViewItem_o *v6; // x0

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_7;
  max_length = memberItemList->max_length;
  if ( max_length <= index1 || max_length <= index2 )
  {
    sub_B17100(this, *(_QWORD *)&index1, *(_QWORD *)&index2);
    sub_B170A0();
  }
  v6 = memberItemList->m_Items[index1];
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  PartyOrganizationListViewItem__Swap(v6, memberItemList->m_Items[index2], 0, 0LL);
}