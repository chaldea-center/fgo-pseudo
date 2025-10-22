void WarBoardPartyListViewItem___ctor(
        WarBoardPartyListViewItem_o *this,
        WarBoardPieceData_array *pieces,
        WarBoardPieceData_o *focusPiece,
        int32_t maxCost,
        const MethodInfo *method)
{
  __int64 v9; // x1
  long double v10; // q0
  __int64 v11; // x0
  __int64 MasterData_object; // x0
  __int64 v13; // x8
  __int64 v14; // x8
  _DWORD *v15; // x21
  int32_t v16; // w19
  __int64 v17; // x0
  __int64 v18; // x0
  Il2CppObject *v19; // x0
  long double v20; // q0
  int32_t klass_high; // w19
  __int64 v22; // x0
  __int64 v23; // x0
  Il2CppObject *v24; // x0
  long double v25; // q0
  int32_t v26; // w19
  __int64 v27; // x0
  __int64 v28; // x0
  System_Collections_Generic_List_object__o *v29; // x28
  int32_t v30; // w22
  const MethodInfo *v31; // x2
  int32_t v32; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x20
  int max_length; // w8
  unsigned int v35; // w27
  WarBoardPieceData_o *v36; // x29
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v38; // x21
  EventUpValSetupInfo_o *v39; // x19
  Il2CppObject *v40; // x20
  System_Int64_array *v41; // x23
  PartyOrganizationListViewItem_o *v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x19
  NpcFollowerEntity_o *v46; // x22
  int32_t DispLimitCnt; // w20
  int32_t v48; // w7
  int32_t v49; // w22
  FollowerInfo_o *FollowerInfo; // x19
  Il2CppObject *v51; // x0
  int32_t klass; // w22
  int32_t monitor; // w23
  EquipTargetInfo_o *v54; // x20
  int32_t EventId; // w20
  EventUpValSetupInfo_o *v56; // x23
  int32_t index_k__BackingField; // w8
  int32_t cost; // w19
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_Object_array *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // [xsp+28h] [xbp-A8h]
  int32_t level; // [xsp+2Ch] [xbp-A4h]
  NpcFollowerMaster_o *Master_object; // [xsp+30h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // [xsp+38h] [xbp-98h]
  CGThumbnailListItem_o *p_focusMemberItem; // [xsp+40h] [xbp-90h]
  QuestGroupMaster_o *v73; // [xsp+48h] [xbp-88h]
  Il2CppObject *v74; // [xsp+50h] [xbp-80h]
  int32_t monitor_high; // [xsp+5Ch] [xbp-74h]
  int32_t questId; // [xsp+60h] [xbp-70h]
  int32_t questPhase; // [xsp+64h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C5498C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&EquipTargetInfo_TypeInfo);
    sub_1C3E564(&EventUpValSetupInfo_TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&QuestRestrictionInfo_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5498C = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8EC78(v10);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1C8EC78(v10);
  v13 = **(_QWORD **)(MasterData_object + 184);
  if ( !v13 )
    goto LABEL_83;
  v14 = *(_QWORD *)(v13 + 440);
  if ( !v14 )
    goto LABEL_83;
  v15 = *(_DWORD **)(v14 + 104);
  if ( v15 )
    v16 = v15[33];
  else
    v16 = 0;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8EC78(v10);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8EC78(v10);
  MasterData_object = **(_QWORD **)(v18 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v19 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          v16,
          (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v19 )
    klass_high = HIDWORD(v19[1].klass);
  else
    klass_high = 0;
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C8EC78(v20);
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C8EC78(v20);
  MasterData_object = **(_QWORD **)(v23 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v24 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          klass_high,
          (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( !v24 )
  {
    monitor_high = 0;
    if ( v15 )
      goto LABEL_29;
LABEL_31:
    v26 = 0;
    questPhase = 0;
    goto LABEL_32;
  }
  monitor_high = HIDWORD(v24[1].monitor);
  if ( !v15 )
    goto LABEL_31;
LABEL_29:
  v26 = v15[31];
  questPhase = v15[32];
LABEL_32:
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C8EC78(v25);
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C8EC78(v25);
  MasterData_object = **(_QWORD **)(v28 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  questId = v26;
  v74 = DataManager__GetMasterData_object_(
          (DataManager_o *)MasterData_object,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_83;
  v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)MasterData_object,
                                                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v68 = maxCost;
  Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v30 = v26;
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v32 = monitor_high;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)v74;
  v73 = (QuestGroupMaster_o *)MasterData_object;
  if ( !pieces )
    goto LABEL_83;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    p_focusMemberItem = (CGThumbnailListItem_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v35 >= max_length )
LABEL_84:
        sub_1C3E7C8(MasterData_object, v9);
      v36 = pieces->m_Items[v35];
      if ( !v36 )
        goto LABEL_83;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_object,
                            v36->fields._restrictionId_k__BackingField,
                            v31);
      v38 = (QuestRestrictionInfo_o *)sub_1C3E7B0(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_43465288(v38, v32, v30, questPhase, RestrictionEntity, 0);
      if ( !v33 )
        goto LABEL_83;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             v33,
             &entity,
             v36->fields._UserServantId_k__BackingField,
             (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        break;
      }
      if ( WarBoardPieceData__get_IsNpc(v36, 0) )
      {
        MasterData_object = (__int64)v71;
        if ( !v71 )
          goto LABEL_83;
        v45 = DataMasterBase_object__object__long___GetEntity(
                v71,
                v36->fields._npcId_k__BackingField,
                (const MethodInfo_33B54B4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_object = (__int64)Master_object;
        if ( !Master_object )
          goto LABEL_83;
        MasterData_object = (__int64)NpcFollowerMaster__GetEntity_42472724(
                                       Master_object,
                                       v30,
                                       questPhase,
                                       v36->fields._npcId_k__BackingField,
                                       0);
        if ( MasterData_object )
        {
          v46 = (NpcFollowerEntity_o *)MasterData_object;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt((NpcFollowerEntity_o *)MasterData_object, -1, 0);
          MasterData_object = NpcFollowerEntity__GetImageSvtId(v46, 0);
          v48 = MasterData_object;
        }
        else
        {
          v48 = 0;
          DispLimitCnt = -1;
        }
        v49 = questId;
        if ( !v45 )
          goto LABEL_83;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v45,
                         v36->fields._npcId_k__BackingField,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         0,
                         0,
                         v48,
                         0);
        if ( v36->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_object )
            goto LABEL_83;
          MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)MasterData_object,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_object )
            goto LABEL_83;
          v51 = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  v36->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_33B54B4 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v51 )
          {
            klass = (int32_t)v51[2].klass;
            monitor = (int32_t)v51[1].monitor;
            level = HIDWORD(v51[1].monitor);
            v54 = (EquipTargetInfo_o *)sub_1C3E7B0(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_41759588(v54, monitor, klass, level, 0, 0);
            if ( !FollowerInfo )
              goto LABEL_83;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v54, 0);
            v32 = monitor_high;
            v49 = questId;
          }
        }
        EventId = v32;
        if ( v73 )
          EventId = QuestGroupMaster__GetEventId(v73, v49, 0);
        v56 = (EventUpValSetupInfo_o *)sub_1C3E7B0(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v56, v49, questPhase, EventId, 0);
        v42 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34235788(v42, v35, FollowerInfo, 1, 0, v56, v38, 0, 0, 0, 0, 0);
LABEL_70:
        v32 = monitor_high;
        v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)v74;
        goto LABEL_71;
      }
      v42 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34273464(v42, v35, 0, 0, v38, 1, 0, 0);
LABEL_71:
      if ( !v42 )
        goto LABEL_83;
      index_k__BackingField = v36->fields._index_k__BackingField;
      v42->fields.warBoardPieceIndex = index_k__BackingField;
      if ( focusPiece && index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (CGThumbnailListItem_c *)v42;
        sub_1C3E508(p_focusMemberItem, (int32_t)v42, v43, v44);
      }
      cost = this->fields.cost;
      MasterData_object = PartyOrganizationListViewItem__get_MargeCost(v42, 0);
      this->fields.cost = MasterData_object + cost;
      if ( !v29 )
        goto LABEL_83;
      items = v29->fields._items;
      v62 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_83;
      size = v29->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)v42,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v42;
        sub_1C3E508((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v42, v59, v60);
      }
      max_length = pieces->max_length;
      v30 = questId;
      if ( (int)++v35 >= max_length )
        goto LABEL_81;
    }
    if ( v73 )
      v32 = QuestGroupMaster__GetEventId(v73, v30, 0);
    v39 = (EventUpValSetupInfo_o *)sub_1C3E7B0(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor(v39, v30, questPhase, v32, 0);
    v40 = entity;
    MasterData_object = sub_1C3E60C(long___TypeInfo, 1);
    if ( !MasterData_object )
      goto LABEL_83;
    v41 = (System_Int64_array *)MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_84;
    *(_QWORD *)(MasterData_object + 32) = v36->fields._UserServantEquipId_k__BackingField;
    v42 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34262368(v42, v35, (UserServantEntity_o *)v40, v41, v39, v38, 0, 0, 0, 0, 0, 0);
    goto LABEL_70;
  }
LABEL_81:
  this->fields.maxCost = v68;
  if ( !v29 )
LABEL_83:
    sub_1C3E7C0(MasterData_object, v9);
  v65 = System_Collections_Generic_List_object___ToArray(
          v29,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = (struct PartyOrganizationListViewItem_array *)v65;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberItemList, (int32_t)v65, v66, v67);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyListViewItem__ChangeFocusMember(
        WarBoardPartyListViewItem_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PartyOrganizationListViewItem_array *memberItemList; // x21
  int max_length; // w8
  int32_t v6; // w19
  unsigned int v7; // w22
  CGThumbnailListItem_o *p_focusMemberItem; // x20

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_11;
  max_length = memberItemList->max_length;
  if ( max_length >= 1 )
  {
    v6 = pieceIndex;
    v7 = 0;
    p_focusMemberItem = (CGThumbnailListItem_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C3E7C8(this, *(_QWORD *)&pieceIndex);
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v7];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 384LL) == v6 )
      {
        p_focusMemberItem->klass = *(CGThumbnailListItem_c **)&pieceIndex;
        sub_1C3E508(p_focusMemberItem, pieceIndex, (int32_t)method, v3);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1C3E7C0(this, *(_QWORD *)&pieceIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C0(this, *(_QWORD *)&index);
  }
  if ( LODWORD(v7->max_length) <= index )
LABEL_9:
    sub_1C3E7C8(this, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  return memberItemList->m_Items[index];
}


PartyOrganizationListViewItem_array *WarBoardPartyListViewItem__GetMemberItems(
        WarBoardPartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.memberItemList;
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_o *WarBoardPartyListViewItem__GetRestrictionEntity(
        WarBoardPartyListViewItem_o *this,
        int32_t restrictionId,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4C5498D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C3E564(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C5498D = 1;
  }
  if ( restrictionId < 1 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8EC78(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8EC78(v3);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0 )
  {
    sub_1C3E7C0(MasterData_object, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  restrictionId,
                                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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
      sub_1C3E7C0(this, userSvtEquipId);
    v6 = 0;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C3E7C8(this, userSvtEquipId);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C0(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C3E7C8(this, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C0(this, *(_QWORD *)&index);
  }
  if ( LODWORD(v10->max_length) <= index )
LABEL_12:
    sub_1C3E7C8(this, *(_QWORD *)&index);
  this = (WarBoardPartyListViewItem_o *)v10->m_Items[index];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v11;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C8(this, *(_QWORD *)&index1);
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_1C3E7C0(this, *(_QWORD *)&index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0);
}