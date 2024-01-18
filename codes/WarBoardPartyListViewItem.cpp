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
  int64_t npcId_k__BackingField; // x1
  __int64 v33; // x19
  __int64 v34; // x19
  __int64 v35; // x8
  __int64 v36; // x8
  _DWORD *v37; // x21
  int32_t v38; // w19
  __int64 v39; // x20
  __int64 v40; // x20
  WarEntity_o *v41; // x0
  int32_t v42; // w19
  __int64 v43; // x20
  __int64 v44; // x20
  WarEntity_o *v45; // x0
  int32_t age_high; // w27
  __int64 v47; // x19
  int32_t v48; // w22
  __int64 v49; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v50; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x24
  const MethodInfo *v52; // x2
  signed int max_length; // w8
  int32_t v54; // w20
  WarBoardPieceData_o *v55; // x25
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v57; // x21
  EventUpValSetupInfo_o *v58; // x0
  int32_t v59; // w1
  EventUpValSetupInfo_o *v60; // x22
  UserServantEntity_o *v61; // x27
  System_Int64_array *v62; // x23
  PartyOrganizationListViewItem_o *v63; // x19
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UserServantEntity_o *v70; // x19
  NpcFollowerEntity_o *v71; // x23
  int32_t DispLimitCnt; // w22
  int32_t v73; // w7
  QuestGroupMaster_o *v74; // x23
  FollowerInfo_o *FollowerInfo; // x28
  UserServantEntity_o *v76; // x0
  int32_t hiddenValue_high; // w22
  int32_t fakeValue; // w23
  int32_t hiddenValue; // w27
  EquipTargetInfo_o *v80; // x19
  int32_t EventId; // w19
  EventUpValSetupInfo_o *v82; // x23
  int32_t cost; // w21
  struct PartyOrganizationListViewItem_array *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x0
  int32_t v92; // [xsp+24h] [xbp-ACh]
  BattleServantConfConponent_o *p_focusMemberItem; // [xsp+28h] [xbp-A8h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-A0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v95; // [xsp+38h] [xbp-98h]
  int32_t v96; // [xsp+44h] [xbp-8Ch]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v97; // [xsp+48h] [xbp-88h]
  QuestGroupMaster_o *v98; // [xsp+50h] [xbp-80h]
  int32_t questId; // [xsp+5Ch] [xbp-74h]
  int32_t v102; // [xsp+74h] [xbp-5Ch]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4186560 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, pieces);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v18);
    sub_B2C35C(&EquipTargetInfo_TypeInfo, v19);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v20);
    sub_B2C35C(&long___TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v24);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v25);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v26);
    sub_B2C35C(&QuestRestrictionInfo_TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v29);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    byte_4186560 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    MasterData_WarQuestSelectionMaster = sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                    + 3));
  v34 = **(_QWORD **)(v33 + 192);
  if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
    MasterData_WarQuestSelectionMaster = sub_AC505C(v34);
  v35 = **(_QWORD **)(v34 + 184);
  if ( !v35 )
    goto LABEL_81;
  v36 = *(_QWORD *)(v35 + 432);
  if ( !v36 )
    goto LABEL_81;
  v37 = *(_DWORD **)(v36 + 104);
  if ( v37 )
    v38 = v37[33];
  else
    v38 = 0;
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v40 = **(_QWORD **)(v39 + 192);
  if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
    sub_AC505C(v40);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v40 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v41 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          v38,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v41 )
    v42 = *(&v41->fields.id + 1);
  else
    v42 = 0;
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v44 = **(_QWORD **)(v43 + 192);
  if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
    sub_AC505C(v44);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v44 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v45 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          v42,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( v45 )
    age_high = HIDWORD(v45->fields.age);
  else
    age_high = 0;
  v92 = maxCost;
  if ( v37 )
  {
    questId = v37[31];
    v102 = v37[32];
  }
  else
  {
    questId = 0;
    v102 = 0;
  }
  v47 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v48 = questId;
  v49 = **(_QWORD **)(v47 + 192);
  if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
    sub_AC505C(v49);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v49 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v50 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v95 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v98 = (QuestGroupMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !pieces )
    goto LABEL_81;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v54 = 0;
    p_focusMemberItem = (BattleServantConfConponent_o *)&this->fields.focusMemberItem;
    v96 = age_high;
    v97 = v50;
    do
    {
      if ( v54 >= (unsigned int)max_length )
      {
LABEL_82:
        v91 = sub_B2C460(MasterData_WarQuestSelectionMaster);
        sub_B2C400(v91, 0LL);
      }
      v55 = pieces->m_Items[v54];
      if ( !v55 )
        goto LABEL_81;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_WarQuestSelectionMaster,
                            v55->fields._restrictionId_k__BackingField,
                            v52);
      v57 = (QuestRestrictionInfo_o *)sub_B2C42C(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_31216236(v57, age_high, v48, v102, RestrictionEntity, 0LL);
      if ( !v50 )
        goto LABEL_81;
      if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
             v50,
             &entity,
             v55->fields._UserServantId_k__BackingField,
             (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        if ( v98 )
          age_high = QuestGroupMaster__GetEventId(v98, v48, 0LL);
        v58 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
        v59 = v48;
        v60 = v58;
        EventUpValSetupInfo___ctor(v58, v59, v102, age_high, 0LL);
        v61 = entity;
        MasterData_WarQuestSelectionMaster = sub_B2C374(long___TypeInfo, 1LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_81;
        v62 = (System_Int64_array *)MasterData_WarQuestSelectionMaster;
        if ( !*(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) )
          goto LABEL_82;
        *(_QWORD *)(MasterData_WarQuestSelectionMaster + 32) = v55->fields._UserServantEquipId_k__BackingField;
        v63 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32205676(v63, v54, v61, v62, v60, v57, 0LL, 0, 0LL);
        age_high = v96;
        v48 = questId;
      }
      else
      {
        npcId_k__BackingField = v55->fields._npcId_k__BackingField;
        if ( npcId_k__BackingField < 1 )
        {
          v63 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32212232(v63, v54, 0, 0LL, v57, 1, 0, 0LL);
          if ( !v63 )
            goto LABEL_81;
          goto LABEL_74;
        }
        MasterData_WarQuestSelectionMaster = (__int64)v95;
        if ( !v95 )
          goto LABEL_81;
        v70 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v95,
                npcId_k__BackingField,
                (const MethodInfo_24E42F8 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_WarQuestSelectionMaster = (__int64)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_81;
        MasterData_WarQuestSelectionMaster = (__int64)NpcFollowerMaster__GetEntity_20112236(
                                                        Master_WarQuestSelectionMaster,
                                                        v48,
                                                        v102,
                                                        v55->fields._npcId_k__BackingField,
                                                        0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v71 = (NpcFollowerEntity_o *)MasterData_WarQuestSelectionMaster;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(
                           (NpcFollowerEntity_o *)MasterData_WarQuestSelectionMaster,
                           0LL);
          MasterData_WarQuestSelectionMaster = NpcFollowerEntity__GetImageSvtId(v71, 0LL);
          v73 = MasterData_WarQuestSelectionMaster;
        }
        else
        {
          v73 = 0;
          DispLimitCnt = -1;
        }
        v74 = v98;
        if ( !v70 )
          goto LABEL_81;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v70,
                         v55->fields._npcId_k__BackingField,
                         questId,
                         v102,
                         DispLimitCnt,
                         0,
                         0,
                         v73,
                         0LL);
        if ( v55->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_81;
          MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_81;
          v76 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster,
                  v55->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_24E42F8 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v76 )
          {
            hiddenValue_high = HIDWORD(v76->fields.id.fields.hiddenValue);
            fakeValue = v76->fields.id.fields.fakeValue;
            hiddenValue = v76->fields.id.fields.hiddenValue;
            v80 = (EquipTargetInfo_o *)sub_B2C42C(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_29550540(v80, hiddenValue, fakeValue, hiddenValue_high, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_81;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v80, 0LL);
            age_high = v96;
            v74 = v98;
          }
        }
        v48 = questId;
        EventId = age_high;
        if ( v74 )
          EventId = QuestGroupMaster__GetEventId(v74, questId, 0LL);
        v82 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v82, questId, v102, EventId, 0LL);
        v63 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32183040(v63, v54, FollowerInfo, 1, v82, v57, 0LL, 0, 0, 0, 0LL);
      }
      v50 = v97;
      if ( !v63 )
        goto LABEL_81;
LABEL_74:
      v63->fields.warBoardPieceIndex = v55->fields._index_k__BackingField;
      if ( focusPiece && v55->fields._index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (BattleServantConfConponent_c *)v63;
        sub_B2C2F8(p_focusMemberItem, (System_Int32_array **)v63, v64, v65, v66, v67, v68, v69);
      }
      cost = this->fields.cost;
      MasterData_WarQuestSelectionMaster = PartyOrganizationListViewItem__get_MargeCost(v63, 0LL);
      this->fields.cost = MasterData_WarQuestSelectionMaster + cost;
      if ( !v51 )
        goto LABEL_81;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
      ++v54;
      max_length = pieces->max_length;
    }
    while ( v54 < max_length );
  }
  this->fields.maxCost = v92;
  if ( !v51 )
LABEL_81:
    sub_B2C434(MasterData_WarQuestSelectionMaster, npcId_k__BackingField);
  v84 = (struct PartyOrganizationListViewItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = v84;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberItemList,
    (System_Int32_array **)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
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
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v11];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 344LL) == v10 )
      {
        p_focusMemberItem->klass = *(BattleServantConfConponent_c **)&pieceIndex;
        sub_B2C2F8(
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
    sub_B2C434(this, *(_QWORD *)&pieceIndex);
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
    sub_B2C434(this, *(_QWORD *)&index);
  }
  if ( v7->max_length <= index )
  {
LABEL_9:
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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

  if ( (byte_4186561 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_RestrictionMaster___, *(_QWORD *)&restrictionId);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4186561 = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(v7);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v7 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_B2C434(MasterData_WarQuestSelectionMaster, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                  restrictionId,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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
      sub_B2C434(this, userSvtEquipId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v15 = sub_B2C460(this);
      sub_B2C400(v15, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&index);
  }
  if ( v10->max_length <= index )
  {
LABEL_12:
    v12 = sub_B2C460(this);
    sub_B2C400(v12, 0LL);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_B2C434(this, index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0LL);
}