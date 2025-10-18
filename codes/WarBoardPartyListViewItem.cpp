void WarBoardPartyListViewItem___ctor(
        WarBoardPartyListViewItem_o *this,
        WarBoardPieceData_array *pieces,
        WarBoardPieceData_o *focusPiece,
        int32_t maxCost,
        const MethodInfo *method)
{
  long double v9; // q0
  __int64 v10; // x0
  __int64 MasterData_object; // x0
  __int64 v12; // x8
  __int64 v13; // x8
  _DWORD *v14; // x21
  int32_t v15; // w19
  __int64 v16; // x0
  __int64 v17; // x0
  Il2CppObject *v18; // x0
  long double v19; // q0
  int32_t klass_high; // w19
  __int64 v21; // x0
  __int64 v22; // x0
  Il2CppObject *v23; // x0
  long double v24; // q0
  int32_t v25; // w19
  __int64 v26; // x0
  __int64 v27; // x0
  System_Collections_Generic_List_object__o *v28; // x28
  int32_t v29; // w22
  const MethodInfo *v30; // x2
  int32_t v31; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x20
  int max_length; // w8
  unsigned int v34; // w27
  WarBoardPieceData_o *v35; // x29
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v37; // x21
  EventUpValSetupInfo_o *v38; // x19
  Il2CppObject *v39; // x20
  System_Int64_array *v40; // x23
  PartyOrganizationListViewItem_o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x19
  NpcFollowerEntity_o *v45; // x22
  int32_t DispLimitCnt; // w20
  int32_t v47; // w7
  int32_t v48; // w22
  FollowerInfo_o *FollowerInfo; // x19
  Il2CppObject *v50; // x0
  int32_t klass; // w22
  int32_t monitor; // w23
  EquipTargetInfo_o *v53; // x20
  int32_t EventId; // w20
  EventUpValSetupInfo_o *v55; // x23
  int32_t index_k__BackingField; // w8
  int32_t cost; // w19
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Object_array *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // [xsp+28h] [xbp-A8h]
  int32_t level; // [xsp+2Ch] [xbp-A4h]
  NpcFollowerMaster_o *Master_object; // [xsp+30h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // [xsp+38h] [xbp-98h]
  CGThumbnailListItem_o *p_focusMemberItem; // [xsp+40h] [xbp-90h]
  QuestGroupMaster_o *v72; // [xsp+48h] [xbp-88h]
  Il2CppObject *v73; // [xsp+50h] [xbp-80h]
  int32_t monitor_high; // [xsp+5Ch] [xbp-74h]
  int32_t questId; // [xsp+60h] [xbp-70h]
  int32_t questPhase; // [xsp+64h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C40BEF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&EquipTargetInfo_TypeInfo);
    sub_1C37058(&EventUpValSetupInfo_TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C37058(&QuestRestrictionInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C40BEF = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C(v9);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1C8776C(v9);
  v12 = **(_QWORD **)(MasterData_object + 184);
  if ( !v12 )
    goto LABEL_83;
  v13 = *(_QWORD *)(v12 + 440);
  if ( !v13 )
    goto LABEL_83;
  v14 = *(_DWORD **)(v13 + 104);
  if ( v14 )
    v15 = v14[33];
  else
    v15 = 0;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C8776C(v9);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8776C(v9);
  MasterData_object = **(_QWORD **)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v18 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          v15,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v18 )
    klass_high = HIDWORD(v18[1].klass);
  else
    klass_high = 0;
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C8776C(v19);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C8776C(v19);
  MasterData_object = **(_QWORD **)(v22 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v23 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          klass_high,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( !v23 )
  {
    monitor_high = 0;
    if ( v14 )
      goto LABEL_29;
LABEL_31:
    v25 = 0;
    questPhase = 0;
    goto LABEL_32;
  }
  monitor_high = HIDWORD(v23[1].monitor);
  if ( !v14 )
    goto LABEL_31;
LABEL_29:
  v25 = v14[31];
  questPhase = v14[32];
LABEL_32:
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C8776C(v24);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C8776C(v24);
  MasterData_object = **(_QWORD **)(v27 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  questId = v25;
  v73 = DataManager__GetMasterData_object_(
          (DataManager_o *)MasterData_object,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_83;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)MasterData_object,
                                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v67 = maxCost;
  Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v29 = v25;
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v31 = monitor_high;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)v73;
  v72 = (QuestGroupMaster_o *)MasterData_object;
  if ( !pieces )
    goto LABEL_83;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    p_focusMemberItem = (CGThumbnailListItem_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v34 >= max_length )
LABEL_84:
        sub_1C372BC(MasterData_object);
      v35 = pieces->m_Items[v34];
      if ( !v35 )
        goto LABEL_83;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_object,
                            v35->fields._restrictionId_k__BackingField,
                            v30);
      v37 = (QuestRestrictionInfo_o *)sub_1C372A4(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_43410244(v37, v31, v29, questPhase, RestrictionEntity, 0);
      if ( !v32 )
        goto LABEL_83;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             v32,
             &entity,
             v35->fields._UserServantId_k__BackingField,
             (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        break;
      }
      if ( WarBoardPieceData__get_IsNpc(v35, 0) )
      {
        MasterData_object = (__int64)v70;
        if ( !v70 )
          goto LABEL_83;
        v44 = DataMasterBase_object__object__long___GetEntity(
                v70,
                v35->fields._npcId_k__BackingField,
                (const MethodInfo_33A35FC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_object = (__int64)Master_object;
        if ( !Master_object )
          goto LABEL_83;
        MasterData_object = (__int64)NpcFollowerMaster__GetEntity_42420940(
                                       Master_object,
                                       v29,
                                       questPhase,
                                       v35->fields._npcId_k__BackingField,
                                       0);
        if ( MasterData_object )
        {
          v45 = (NpcFollowerEntity_o *)MasterData_object;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt((NpcFollowerEntity_o *)MasterData_object, -1, 0);
          MasterData_object = NpcFollowerEntity__GetImageSvtId(v45, 0);
          v47 = MasterData_object;
        }
        else
        {
          v47 = 0;
          DispLimitCnt = -1;
        }
        v48 = questId;
        if ( !v44 )
          goto LABEL_83;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v44,
                         v35->fields._npcId_k__BackingField,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         0,
                         0,
                         v47,
                         0);
        if ( v35->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_object )
            goto LABEL_83;
          MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)MasterData_object,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_object )
            goto LABEL_83;
          v50 = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  v35->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_33A35FC *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v50 )
          {
            klass = (int32_t)v50[2].klass;
            monitor = (int32_t)v50[1].monitor;
            level = HIDWORD(v50[1].monitor);
            v53 = (EquipTargetInfo_o *)sub_1C372A4(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_41711028(v53, monitor, klass, level, 0, 0);
            if ( !FollowerInfo )
              goto LABEL_83;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v53, 0);
            v31 = monitor_high;
            v48 = questId;
          }
        }
        EventId = v31;
        if ( v72 )
          EventId = QuestGroupMaster__GetEventId(v72, v48, 0);
        v55 = (EventUpValSetupInfo_o *)sub_1C372A4(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v55, v48, questPhase, EventId, 0);
        v41 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34202652(v41, v34, FollowerInfo, 1, 0, v55, v37, 0, 0, 0, 0, 0);
LABEL_70:
        v31 = monitor_high;
        v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)v73;
        goto LABEL_71;
      }
      v41 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34239932(v41, v34, 0, 0, v37, 1, 0, 0);
LABEL_71:
      if ( !v41 )
        goto LABEL_83;
      index_k__BackingField = v35->fields._index_k__BackingField;
      v41->fields.warBoardPieceIndex = index_k__BackingField;
      if ( focusPiece && index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (CGThumbnailListItem_c *)v41;
        sub_1C36FFC(p_focusMemberItem, (int32_t)v41, v42, v43);
      }
      cost = this->fields.cost;
      MasterData_object = PartyOrganizationListViewItem__get_MargeCost(v41, 0);
      this->fields.cost = MasterData_object + cost;
      if ( !v28 )
        goto LABEL_83;
      items = v28->fields._items;
      v61 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_83;
      size = v28->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)v41,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v41;
        sub_1C36FFC((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v41, v58, v59);
      }
      max_length = pieces->max_length;
      v29 = questId;
      if ( (int)++v34 >= max_length )
        goto LABEL_81;
    }
    if ( v72 )
      v31 = QuestGroupMaster__GetEventId(v72, v29, 0);
    v38 = (EventUpValSetupInfo_o *)sub_1C372A4(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor(v38, v29, questPhase, v31, 0);
    v39 = entity;
    MasterData_object = sub_1C37100(long___TypeInfo, 1);
    if ( !MasterData_object )
      goto LABEL_83;
    v40 = (System_Int64_array *)MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_84;
    *(_QWORD *)(MasterData_object + 32) = v35->fields._UserServantEquipId_k__BackingField;
    v41 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34229228(v41, v34, (UserServantEntity_o *)v39, v40, v38, v37, 0, 0, 0, 0, 0, 0);
    goto LABEL_70;
  }
LABEL_81:
  this->fields.maxCost = v67;
  if ( !v28 )
LABEL_83:
    sub_1C372B4(MasterData_object);
  v64 = System_Collections_Generic_List_object___ToArray(
          v28,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = (struct PartyOrganizationListViewItem_array *)v64;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.memberItemList, (int32_t)v64, v65, v66);
}


void WarBoardPartyListViewItem__ChangeFocusMember(
        WarBoardPartyListViewItem_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PartyOrganizationListViewItem_array *memberItemList; // x21
  int max_length; // w8
  unsigned int v7; // w22
  CGThumbnailListItem_o *p_focusMemberItem; // x20
  PartyOrganizationListViewItem_o *v9; // x1

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_11;
  max_length = memberItemList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    p_focusMemberItem = (CGThumbnailListItem_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C372BC(this);
      v9 = memberItemList->m_Items[v7];
      if ( !v9 )
        break;
      if ( v9->fields.warBoardPieceIndex == pieceIndex )
      {
        p_focusMemberItem->klass = (CGThumbnailListItem_c *)v9;
        sub_1C36FFC(p_focusMemberItem, (int32_t)v9, (int32_t)method, v3);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1C372B4(this);
  }
}


void WarBoardPartyListViewItem__ClearMember(WarBoardPartyListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  WarBoardPartyListViewItem_o *v5; // x20
  int32_t cost; // w22
  struct PartyOrganizationListViewItem_array *v7; // x8

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_8;
  if ( LODWORD(memberItemList->max_length) <= index )
    goto LABEL_9;
  v5 = this;
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index];
  if ( !this
    || (cost = v5->fields.cost,
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                                (PartyOrganizationListViewItem_o *)this,
                                                0),
        v7 = v5->fields.memberItemList,
        v5->fields.cost = cost - (_DWORD)this,
        !v7) )
  {
LABEL_8:
    sub_1C372B4(this);
  }
  if ( LODWORD(v7->max_length) <= index )
LABEL_9:
    sub_1C372BC(this);
  this = (WarBoardPartyListViewItem_o *)v7->m_Items[index];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0);
}


int32_t WarBoardPartyListViewItem__GetCost(WarBoardPartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cost;
}


PartyOrganizationListViewItem_o *WarBoardPartyListViewItem__GetFocusMemberItem(
        WarBoardPartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.focusMemberItem;
}


int32_t WarBoardPartyListViewItem__GetMaxCost(WarBoardPartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxCost;
}


PartyOrganizationListViewItem_o *WarBoardPartyListViewItem__GetMemberItem(
        WarBoardPartyListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t max_length; // w9

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    return 0;
  max_length = memberItemList->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C372BC(this);
  return memberItemList->m_Items[index];
}


PartyOrganizationListViewItem_array *WarBoardPartyListViewItem__GetMemberItems(
        WarBoardPartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.memberItemList;
}


RestrictionEntity_o *WarBoardPartyListViewItem__GetRestrictionEntity(
        WarBoardPartyListViewItem_o *this,
        int32_t restrictionId,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4C40BF0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C37058(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C40BF0 = 1;
  }
  if ( restrictionId < 1 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(v3);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0 )
  {
    sub_1C372B4(MasterData_object);
  }
  return (RestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  restrictionId,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
}


int32_t WarBoardPartyListViewItem__GetWeareMember(
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
      sub_1C372B4(this);
    v6 = 0;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C372BC(this);
      this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[v6];
      if ( this )
      {
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(
                                                (PartyOrganizationListViewItem_o *)this,
                                                0);
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


void WarBoardPartyListViewItem__SetEquip(
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
    sub_1C372B4(this);
  v6 = this;
  v7 = 0;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C372BC(this);
    v10 = &memberItemList->obj.klass + v7;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( v11 )
    {
      cost = v6->fields.cost;
      if ( index == (_DWORD)v7 )
      {
        v6->fields.cost = cost
                        - PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v10[4], 0);
        PartyOrganizationListViewItem__SetEquipUserServantId(v11, userSvtEquipId, 0, 0);
        v13 = v6->fields.cost;
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v11, 0);
        v14 = (_DWORD)this + v13;
      }
      else
      {
        this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__RemoveEquipUserServantId(
                                                (PartyOrganizationListViewItem_o *)v10[4],
                                                userSvtEquipId,
                                                0);
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


void WarBoardPartyListViewItem__SetMember(
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
  if ( LODWORD(memberItemList->max_length) <= index )
    goto LABEL_12;
  v6 = this;
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index];
  if ( !this )
    goto LABEL_11;
  cost = v6->fields.cost;
  this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                          (PartyOrganizationListViewItem_o *)this,
                                          0);
  v9 = v6->fields.memberItemList;
  v6->fields.cost = cost - (_DWORD)this;
  if ( !v9 )
    goto LABEL_11;
  if ( LODWORD(v9->max_length) <= index )
    goto LABEL_12;
  this = (WarBoardPartyListViewItem_o *)v9->m_Items[index];
  if ( !this
    || (PartyOrganizationListViewItem__ModifyFromWarBoard((PartyOrganizationListViewItem_o *)this, item, 0),
        (v10 = v6->fields.memberItemList) == 0) )
  {
LABEL_11:
    sub_1C372B4(this);
  }
  if ( LODWORD(v10->max_length) <= index )
LABEL_12:
    sub_1C372BC(this);
  this = (WarBoardPartyListViewItem_o *)v10->m_Items[index];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v11;
}


void WarBoardPartyListViewItem__SwapMember(
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
    sub_1C372BC(this);
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_1C372B4(this);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0);
}