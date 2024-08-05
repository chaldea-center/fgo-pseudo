void __fastcall WarBoardPartyListViewItem___ctor(
        WarBoardPartyListViewItem_o *this,
        WarBoardPieceData_array *pieces,
        WarBoardPieceData_o *focusPiece,
        int32_t maxCost,
        const MethodInfo *method)
{
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
  __int64 v33; // x1
  __int64 v34; // x0
  __int64 MasterData_object; // x0
  __int64 v36; // x8
  __int64 v37; // x8
  _DWORD *v38; // x21
  int32_t v39; // w19
  __int64 v40; // x0
  __int64 v41; // x0
  Il2CppObject *v42; // x0
  int32_t klass_high; // w19
  __int64 v44; // x0
  __int64 v45; // x0
  Il2CppObject *v46; // x0
  int32_t v47; // w19
  __int64 v48; // x0
  __int64 v49; // x0
  System_Collections_Generic_List_object__o *v50; // x28
  int32_t v51; // w22
  const MethodInfo *v52; // x2
  int32_t v53; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x20
  signed int max_length; // w8
  unsigned int v56; // w27
  WarBoardPieceData_o *v57; // x29
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v59; // x21
  EventUpValSetupInfo_o *v60; // x19
  Il2CppObject *v61; // x20
  System_Int64_array *v62; // x23
  PartyOrganizationListViewItem_o *v63; // x22
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x19
  NpcFollowerEntity_o *v67; // x22
  int32_t DispLimitCnt; // w20
  int32_t v69; // w7
  int32_t v70; // w22
  FollowerInfo_o *FollowerInfo; // x19
  Il2CppObject *v72; // x0
  int32_t klass; // w22
  int32_t monitor; // w23
  EquipTargetInfo_o *v75; // x20
  int32_t EventId; // w20
  EventUpValSetupInfo_o *v77; // x23
  int32_t index_k__BackingField; // w8
  int32_t cost; // w19
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  System_Object_array *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // [xsp+18h] [xbp-A8h]
  int32_t level; // [xsp+1Ch] [xbp-A4h]
  NpcFollowerMaster_o *Master_object; // [xsp+20h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // [xsp+28h] [xbp-98h]
  ServantStatusBattleListViewItem_o *p_focusMemberItem; // [xsp+30h] [xbp-90h]
  QuestGroupMaster_o *v94; // [xsp+38h] [xbp-88h]
  Il2CppObject *v95; // [xsp+40h] [xbp-80h]
  int32_t monitor_high; // [xsp+4Ch] [xbp-74h]
  int32_t questId; // [xsp+50h] [xbp-70h]
  int32_t questPhase; // [xsp+54h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49FC3D5 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, pieces);
    sub_1B64870(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_WarBoardMaster___, v12);
    sub_1B64870(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMaster_NpcFollowerMaster___, v14);
    sub_1B64870(&DataManager_TypeInfo, v15);
    sub_1B64870(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v16);
    sub_1B64870(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v17);
    sub_1B64870(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v18);
    sub_1B64870(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v19);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v20);
    sub_1B64870(&EquipTargetInfo_TypeInfo, v21);
    sub_1B64870(&EventUpValSetupInfo_TypeInfo, v22);
    sub_1B64870(&long___TypeInfo, v23);
    sub_1B64870(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v24);
    sub_1B64870(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__, v25);
    sub_1B64870(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v26);
    sub_1B64870(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v27);
    sub_1B64870(&PartyOrganizationListViewItem_TypeInfo, v28);
    sub_1B64870(&QuestRestrictionInfo_TypeInfo, v29);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v30);
    sub_1B64870(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v31);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    byte_49FC3D5 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1BB674C(v34);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1BB674C(MasterData_object);
  v36 = **(_QWORD **)(MasterData_object + 184);
  if ( !v36 )
    goto LABEL_83;
  v37 = *(_QWORD *)(v36 + 440);
  if ( !v37 )
    goto LABEL_83;
  v38 = *(_DWORD **)(v37 + 104);
  if ( v38 )
    v39 = v38[33];
  else
    v39 = 0;
  v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1BB674C(v40);
  v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1BB674C(v41);
  MasterData_object = **(_QWORD **)(v41 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v42 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          v39,
          (const MethodInfo_30D6180 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v42 )
    klass_high = HIDWORD(v42[1].klass);
  else
    klass_high = 0;
  v44 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1BB674C(v44);
  v45 = *(_QWORD *)(*(_QWORD *)(v44 + 192) + 16LL);
  if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
    v45 = sub_1BB674C(v45);
  MasterData_object = **(_QWORD **)(v45 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v46 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          klass_high,
          (const MethodInfo_30D6180 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( !v46 )
  {
    monitor_high = 0;
    if ( v38 )
      goto LABEL_29;
LABEL_31:
    v47 = 0;
    questPhase = 0;
    goto LABEL_32;
  }
  monitor_high = HIDWORD(v46[1].monitor);
  if ( !v38 )
    goto LABEL_31;
LABEL_29:
  v47 = v38[31];
  questPhase = v38[32];
LABEL_32:
  v48 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
    v48 = sub_1BB674C(v48);
  v49 = *(_QWORD *)(*(_QWORD *)(v48 + 192) + 16LL);
  if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
    v49 = sub_1BB674C(v49);
  MasterData_object = **(_QWORD **)(v49 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  questId = v47;
  v95 = DataManager__GetMasterData_object_(
          (DataManager_o *)MasterData_object,
          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_83;
  v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)MasterData_object,
                                                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v89 = maxCost;
  Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v50 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v51 = v47;
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v53 = monitor_high;
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)v95;
  v94 = (QuestGroupMaster_o *)MasterData_object;
  if ( !pieces )
    goto LABEL_83;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v56 = 0;
    p_focusMemberItem = (ServantStatusBattleListViewItem_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v56 >= max_length )
LABEL_84:
        sub_1B64AD4(MasterData_object, v33);
      v57 = pieces->m_Items[v56];
      if ( !v57 )
        goto LABEL_83;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_object,
                            v57->fields._restrictionId_k__BackingField,
                            v52);
      v59 = (QuestRestrictionInfo_o *)sub_1B64ABC(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_40095760(v59, v53, v51, questPhase, RestrictionEntity, 0LL);
      if ( !v54 )
        goto LABEL_83;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             v54,
             &entity,
             v57->fields._UserServantId_k__BackingField,
             (const MethodInfo_30D6380 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        break;
      }
      if ( WarBoardPieceData__get_IsNpc(v57, 0LL) )
      {
        MasterData_object = (__int64)v92;
        if ( !v92 )
          goto LABEL_83;
        v66 = DataMasterBase_object__object__long___GetEntity(
                v92,
                v57->fields._npcId_k__BackingField,
                (const MethodInfo_30D632C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_object = (__int64)Master_object;
        if ( !Master_object )
          goto LABEL_83;
        MasterData_object = (__int64)NpcFollowerMaster__GetEntity_39113844(
                                       Master_object,
                                       v51,
                                       questPhase,
                                       v57->fields._npcId_k__BackingField,
                                       0LL);
        if ( MasterData_object )
        {
          v67 = (NpcFollowerEntity_o *)MasterData_object;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt((NpcFollowerEntity_o *)MasterData_object, 0LL);
          MasterData_object = NpcFollowerEntity__GetImageSvtId(v67, 0LL);
          v69 = MasterData_object;
        }
        else
        {
          v69 = 0;
          DispLimitCnt = -1;
        }
        v70 = questId;
        if ( !v66 )
          goto LABEL_83;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v66,
                         v57->fields._npcId_k__BackingField,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         0,
                         0,
                         v69,
                         0LL);
        if ( v57->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_object )
            goto LABEL_83;
          MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)MasterData_object,
                                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_object )
            goto LABEL_83;
          v72 = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  v57->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_30D632C *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v72 )
          {
            klass = (int32_t)v72[2].klass;
            monitor = (int32_t)v72[1].monitor;
            level = HIDWORD(v72[1].monitor);
            v75 = (EquipTargetInfo_o *)sub_1B64ABC(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_38569972(v75, monitor, klass, level, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_83;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v75, 0LL);
            v53 = monitor_high;
            v70 = questId;
          }
        }
        EventId = v53;
        if ( v94 )
          EventId = QuestGroupMaster__GetEventId(v94, v70, 0LL);
        v77 = (EventUpValSetupInfo_o *)sub_1B64ABC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v77, v70, questPhase, EventId, 0LL);
        v63 = (PartyOrganizationListViewItem_o *)sub_1B64ABC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31769996(v63, v56, FollowerInfo, 1, v77, v59, 0LL, 0, 0, 0, 0LL);
LABEL_70:
        v53 = monitor_high;
        v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)v95;
        goto LABEL_71;
      }
      v63 = (PartyOrganizationListViewItem_o *)sub_1B64ABC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31806844(v63, v56, 0, 0LL, v59, 1, 0, 0LL);
LABEL_71:
      if ( !v63 )
        goto LABEL_83;
      index_k__BackingField = v57->fields._index_k__BackingField;
      v63->fields.warBoardPieceIndex = index_k__BackingField;
      if ( focusPiece && index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (ServantStatusBattleListViewItem_c *)v63;
        sub_1B64814(p_focusMemberItem, (int32_t)v63, v64, v65);
      }
      cost = this->fields.cost;
      MasterData_object = PartyOrganizationListViewItem__get_MargeCost(v63, 0LL);
      this->fields.cost = MasterData_object + cost;
      if ( !v50 )
        goto LABEL_83;
      items = v50->fields._items;
      v83 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
      ++v50->fields._version;
      if ( !items )
        goto LABEL_83;
      size = v50->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          (Il2CppObject *)v63,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &items->obj.klass + size;
        v50->fields._size = size + 1;
        v85[4] = (Il2CppClass *)v63;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v63, v80, v81);
      }
      max_length = pieces->max_length;
      v51 = questId;
      if ( (int)++v56 >= max_length )
        goto LABEL_81;
    }
    if ( v94 )
      v53 = QuestGroupMaster__GetEventId(v94, v51, 0LL);
    v60 = (EventUpValSetupInfo_o *)sub_1B64ABC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor(v60, v51, questPhase, v53, 0LL);
    v61 = entity;
    MasterData_object = sub_1B64918(long___TypeInfo, 1LL);
    if ( !MasterData_object )
      goto LABEL_83;
    v62 = (System_Int64_array *)MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_84;
    *(_QWORD *)(MasterData_object + 32) = v57->fields._UserServantEquipId_k__BackingField;
    v63 = (PartyOrganizationListViewItem_o *)sub_1B64ABC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_31797636(
      v63,
      v56,
      (UserServantEntity_o *)v61,
      v62,
      v60,
      v59,
      0LL,
      0,
      0LL,
      0,
      0LL);
    goto LABEL_70;
  }
LABEL_81:
  this->fields.maxCost = v89;
  if ( !v50 )
LABEL_83:
    sub_1B64ACC(MasterData_object, v33);
  v86 = System_Collections_Generic_List_object___ToArray(
          v50,
          (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = (struct PartyOrganizationListViewItem_array *)v86;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.memberItemList, (int32_t)v86, v87, v88);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewItem__ChangeFocusMember(
        WarBoardPartyListViewItem_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyOrganizationListViewItem_array *memberItemList; // x21
  int max_length; // w8
  int32_t v6; // w19
  unsigned int v7; // w22
  ServantStatusBattleListViewItem_o *p_focusMemberItem; // x20

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_11;
  max_length = memberItemList->max_length;
  if ( max_length >= 1 )
  {
    v6 = pieceIndex;
    v7 = 0;
    p_focusMemberItem = (ServantStatusBattleListViewItem_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B64AD4(this, *(_QWORD *)&pieceIndex);
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v7];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 360LL) == v6 )
      {
        p_focusMemberItem->klass = *(ServantStatusBattleListViewItem_c **)&pieceIndex;
        sub_1B64814(p_focusMemberItem, pieceIndex, (int32_t)method, v3);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1B64ACC(this, *(_QWORD *)&pieceIndex);
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
    sub_1B64ACC(this, *(_QWORD *)&index);
  }
  if ( v7->max_length <= index )
LABEL_9:
    sub_1B64AD4(this, *(_QWORD *)&index);
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
    sub_1B64AD4(this, *(_QWORD *)&index);
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
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_49FC3D6 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_RestrictionMaster___, *(_QWORD *)&restrictionId);
    sub_1B64870(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_49FC3D6 = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB674C(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB674C(v7);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_1B64ACC(MasterData_object, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  restrictionId,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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

  if ( userSvtEquipId >= 1 )
  {
    memberItemList = this->fields.memberItemList;
    v4 = this;
    if ( !memberItemList )
LABEL_9:
      sub_1B64ACC(this, userSvtEquipId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1B64AD4(this, userSvtEquipId);
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

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
LABEL_10:
    sub_1B64ACC(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B64AD4(this, *(_QWORD *)&index);
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
    sub_1B64ACC(this, *(_QWORD *)&index);
  }
  if ( v10->max_length <= index )
LABEL_12:
    sub_1B64AD4(this, *(_QWORD *)&index);
  this = (WarBoardPartyListViewItem_o *)v10->m_Items[index];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
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

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_7;
  max_length = memberItemList->max_length;
  if ( max_length <= index1 || max_length <= index2 )
    sub_1B64AD4(this, *(_QWORD *)&index1);
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_1B64ACC(this, index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0LL);
}