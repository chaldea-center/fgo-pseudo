void __fastcall WarBoardPartyListViewItem___ctor(
        WarBoardPartyListViewItem_o *this,
        WarBoardPieceData_array *pieces,
        WarBoardPieceData_o *focusPiece,
        int32_t maxCost,
        const MethodInfo *method)
{
  __int64 MasterData_WarQuestSelectionMaster; // x0
  int64_t npcId_k__BackingField; // x1
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 v11; // x8
  __int64 v12; // x8
  _DWORD *v13; // x21
  int32_t v14; // w19
  __int64 v15; // x20
  __int64 v16; // x20
  WarEntity_o *v17; // x0
  int32_t v18; // w19
  __int64 v19; // x20
  __int64 v20; // x20
  WarEntity_o *v21; // x0
  int32_t age_high; // w27
  __int64 v23; // x19
  int32_t v24; // w22
  __int64 v25; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v26; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x24
  const MethodInfo *v28; // x2
  signed int max_length; // w8
  int32_t v30; // w20
  WarBoardPieceData_o *v31; // x25
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v33; // x21
  EventUpValSetupInfo_o *v34; // x0
  int32_t v35; // w1
  EventUpValSetupInfo_o *v36; // x22
  UserServantEntity_o *v37; // x27
  System_Int64_array *v38; // x23
  PartyOrganizationListViewItem_o *v39; // x19
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UserServantEntity_o *v46; // x19
  NpcFollowerEntity_o *v47; // x23
  int32_t DispLimitCnt; // w22
  int32_t v49; // w7
  QuestGroupMaster_o *v50; // x23
  FollowerInfo_o *FollowerInfo; // x28
  UserServantEntity_o *v52; // x0
  int32_t hiddenValue_high; // w22
  int32_t fakeValue; // w23
  int32_t hiddenValue; // w27
  EquipTargetInfo_o *v56; // x19
  int32_t EventId; // w19
  EventUpValSetupInfo_o *v58; // x23
  int32_t cost; // w21
  struct PartyOrganizationListViewItem_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x0
  int32_t v68; // [xsp+24h] [xbp-ACh]
  BattleServantConfConponent_o *p_focusMemberItem; // [xsp+28h] [xbp-A8h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-A0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v71; // [xsp+38h] [xbp-98h]
  int32_t v72; // [xsp+44h] [xbp-8Ch]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v73; // [xsp+48h] [xbp-88h]
  QuestGroupMaster_o *v74; // [xsp+50h] [xbp-80h]
  int32_t questId; // [xsp+5Ch] [xbp-74h]
  int32_t v78; // [xsp+74h] [xbp-5Ch]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_438AED1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&EquipTargetInfo_TypeInfo);
    sub_B775C4(&EventUpValSetupInfo_TypeInfo);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_B775C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    sub_B775C4(&QuestRestrictionInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438AED1 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    MasterData_WarQuestSelectionMaster = sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                    + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    MasterData_WarQuestSelectionMaster = sub_B0F2C4(v10);
  v11 = **(_QWORD **)(v10 + 184);
  if ( !v11 )
    goto LABEL_81;
  v12 = *(_QWORD *)(v11 + 432);
  if ( !v12 )
    goto LABEL_81;
  v13 = *(_DWORD **)(v12 + 104);
  if ( v13 )
    v14 = v13[33];
  else
    v14 = 0;
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_B0F2C4(v16);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v16 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v17 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          v14,
          (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v17 )
    v18 = *(&v17->fields.id + 1);
  else
    v18 = 0;
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_B0F2C4(v20);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v20 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v21 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          v18,
          (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( v21 )
    age_high = HIDWORD(v21->fields.age);
  else
    age_high = 0;
  v68 = maxCost;
  if ( v13 )
  {
    questId = v13[31];
    v78 = v13[32];
  }
  else
  {
    questId = 0;
    v78 = 0;
  }
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v24 = questId;
  v25 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_B0F2C4(v25);
  MasterData_WarQuestSelectionMaster = **(_QWORD **)(v25 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v26 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  v71 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v74 = (QuestGroupMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !pieces )
    goto LABEL_81;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    p_focusMemberItem = (BattleServantConfConponent_o *)&this->fields.focusMemberItem;
    v72 = age_high;
    v73 = v26;
    do
    {
      if ( v30 >= (unsigned int)max_length )
      {
LABEL_82:
        v67 = sub_B776C8(MasterData_WarQuestSelectionMaster);
        sub_B77668(v67, 0LL);
      }
      v31 = pieces->m_Items[v30];
      if ( !v31 )
        goto LABEL_81;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_WarQuestSelectionMaster,
                            v31->fields._restrictionId_k__BackingField,
                            v28);
      v33 = (QuestRestrictionInfo_o *)sub_B77694(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_34449424(v33, age_high, v24, v78, RestrictionEntity, 0LL);
      if ( !v26 )
        goto LABEL_81;
      if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
             v26,
             &entity,
             v31->fields._UserServantId_k__BackingField,
             (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        if ( v74 )
          age_high = QuestGroupMaster__GetEventId(v74, v24, 0LL);
        v34 = (EventUpValSetupInfo_o *)sub_B77694(EventUpValSetupInfo_TypeInfo);
        v35 = v24;
        v36 = v34;
        EventUpValSetupInfo___ctor(v34, v35, v78, age_high, 0LL);
        v37 = entity;
        MasterData_WarQuestSelectionMaster = sub_B775DC(long___TypeInfo, 1LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_81;
        v38 = (System_Int64_array *)MasterData_WarQuestSelectionMaster;
        if ( !*(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) )
          goto LABEL_82;
        *(_QWORD *)(MasterData_WarQuestSelectionMaster + 32) = v31->fields._UserServantEquipId_k__BackingField;
        v39 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38639576(v39, v30, v37, v38, v36, v33, 0LL, 0, 0LL, 0, 0LL);
        age_high = v72;
        v24 = questId;
      }
      else
      {
        npcId_k__BackingField = v31->fields._npcId_k__BackingField;
        if ( npcId_k__BackingField < 1 )
        {
          v39 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_38651660(v39, v30, 0, 0LL, v33, 1, 0, 0LL);
          if ( !v39 )
            goto LABEL_81;
          goto LABEL_74;
        }
        MasterData_WarQuestSelectionMaster = (__int64)v71;
        if ( !v71 )
          goto LABEL_81;
        v46 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v71,
                npcId_k__BackingField,
                (const MethodInfo_21FBABC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_WarQuestSelectionMaster = (__int64)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_81;
        MasterData_WarQuestSelectionMaster = (__int64)NpcFollowerMaster__GetEntity_23609256(
                                                        Master_WarQuestSelectionMaster,
                                                        v24,
                                                        v78,
                                                        v31->fields._npcId_k__BackingField,
                                                        0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v47 = (NpcFollowerEntity_o *)MasterData_WarQuestSelectionMaster;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(
                           (NpcFollowerEntity_o *)MasterData_WarQuestSelectionMaster,
                           0LL);
          MasterData_WarQuestSelectionMaster = NpcFollowerEntity__GetImageSvtId(v47, 0LL);
          v49 = MasterData_WarQuestSelectionMaster;
        }
        else
        {
          v49 = 0;
          DispLimitCnt = -1;
        }
        v50 = v74;
        if ( !v46 )
          goto LABEL_81;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v46,
                         v31->fields._npcId_k__BackingField,
                         questId,
                         v78,
                         DispLimitCnt,
                         0,
                         0,
                         v49,
                         0LL);
        if ( v31->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_81;
          MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_81;
          v52 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster,
                  v31->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_21FBABC *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v52 )
          {
            hiddenValue_high = HIDWORD(v52->fields.id.fields.hiddenValue);
            fakeValue = v52->fields.id.fields.fakeValue;
            hiddenValue = v52->fields.id.fields.hiddenValue;
            v56 = (EquipTargetInfo_o *)sub_B77694(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_31639132(v56, hiddenValue, fakeValue, hiddenValue_high, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_81;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v56, 0LL);
            age_high = v72;
            v50 = v74;
          }
        }
        v24 = questId;
        EventId = age_high;
        if ( v50 )
          EventId = QuestGroupMaster__GetEventId(v50, questId, 0LL);
        v58 = (EventUpValSetupInfo_o *)sub_B77694(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v58, questId, v78, EventId, 0LL);
        v39 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38648852(v39, v30, FollowerInfo, 1, v58, v33, 0LL, 0, 0, 0, 0LL);
      }
      v26 = v73;
      if ( !v39 )
        goto LABEL_81;
LABEL_74:
      v39->fields.warBoardPieceIndex = v31->fields._index_k__BackingField;
      if ( focusPiece && v31->fields._index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (BattleServantConfConponent_c *)v39;
        sub_B77560(p_focusMemberItem, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
      }
      cost = this->fields.cost;
      MasterData_WarQuestSelectionMaster = PartyOrganizationListViewItem__get_MargeCost(v39, 0LL);
      this->fields.cost = MasterData_WarQuestSelectionMaster + cost;
      if ( !v27 )
        goto LABEL_81;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
      ++v30;
      max_length = pieces->max_length;
    }
    while ( v30 < max_length );
  }
  this->fields.maxCost = v68;
  if ( !v27 )
LABEL_81:
    sub_B7769C(MasterData_WarQuestSelectionMaster, npcId_k__BackingField);
  v60 = (struct PartyOrganizationListViewItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = v60;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.memberItemList,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
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
        v13 = sub_B776C8(this);
        sub_B77668(v13, 0LL);
      }
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v11];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 360LL) == v10 )
      {
        p_focusMemberItem->klass = *(BattleServantConfConponent_c **)&pieceIndex;
        sub_B77560(
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
    sub_B7769C(this, *(_QWORD *)&pieceIndex);
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
    sub_B7769C(this, *(_QWORD *)&index);
  }
  if ( v7->max_length <= index )
  {
LABEL_9:
    v8 = sub_B776C8(this);
    sub_B77668(v8, 0LL);
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
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
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
  __int64 v4; // x20
  __int64 v5; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_438AED2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_B775C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_438AED2 = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(v5);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v5 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_B7769C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                  restrictionId,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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
      sub_B7769C(this, userSvtEquipId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B776C8(this);
        sub_B77668(v9, 0LL);
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
    sub_B7769C(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v15 = sub_B776C8(this);
      sub_B77668(v15, 0LL);
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
    sub_B7769C(this, *(_QWORD *)&index);
  }
  if ( v10->max_length <= index )
  {
LABEL_12:
    v12 = sub_B776C8(this);
    sub_B77668(v12, 0LL);
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
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_B7769C(this, index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0LL);
}