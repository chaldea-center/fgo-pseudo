void __fastcall WarBoardPartyListViewItem___ctor(
        WarBoardPartyListViewItem_o *this,
        WarBoardPieceData_array *pieces,
        WarBoardPieceData_o *focusPiece,
        int32_t maxCost,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 MasterData_object; // x0
  __int64 v12; // x8
  __int64 v13; // x8
  _DWORD *v14; // x21
  int32_t v15; // w19
  __int64 v16; // x0
  __int64 v17; // x0
  Il2CppObject *v18; // x0
  int32_t klass_high; // w19
  __int64 v20; // x0
  __int64 v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // w19
  __int64 v24; // x0
  __int64 v25; // x0
  System_Collections_Generic_List_object__o *v26; // x28
  int32_t v27; // w22
  const MethodInfo *v28; // x2
  int32_t v29; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x20
  signed int max_length; // w8
  unsigned int v32; // w27
  WarBoardPieceData_o *v33; // x29
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v35; // x21
  EventUpValSetupInfo_o *v36; // x19
  Il2CppObject *v37; // x20
  System_Int64_array *v38; // x23
  PartyOrganizationListViewItem_o *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x19
  NpcFollowerEntity_o *v43; // x22
  int32_t DispLimitCnt; // w20
  int32_t v45; // w7
  int32_t v46; // w22
  FollowerInfo_o *FollowerInfo; // x19
  Il2CppObject *v48; // x0
  int32_t klass; // w22
  int32_t monitor; // w23
  EquipTargetInfo_o *v51; // x20
  int32_t EventId; // w20
  EventUpValSetupInfo_o *v53; // x23
  int32_t index_k__BackingField; // w8
  int32_t cost; // w19
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  System_Object_array *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // [xsp+18h] [xbp-A8h]
  int32_t level; // [xsp+1Ch] [xbp-A4h]
  NpcFollowerMaster_o *Master_object; // [xsp+20h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // [xsp+28h] [xbp-98h]
  ServantStatusBattleListViewItem_o *p_focusMemberItem; // [xsp+30h] [xbp-90h]
  QuestGroupMaster_o *v70; // [xsp+38h] [xbp-88h]
  Il2CppObject *v71; // [xsp+40h] [xbp-80h]
  int32_t monitor_high; // [xsp+4Ch] [xbp-74h]
  int32_t questId; // [xsp+50h] [xbp-70h]
  int32_t questPhase; // [xsp+54h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A58FF8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&EquipTargetInfo_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&QuestRestrictionInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58FF8 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1BDA48C(MasterData_object);
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
    v16 = sub_1BDA48C(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BDA48C(v17);
  MasterData_object = **(_QWORD **)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v18 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          v15,
          (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v18 )
    klass_high = HIDWORD(v18[1].klass);
  else
    klass_high = 0;
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BDA48C(v20);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BDA48C(v21);
  MasterData_object = **(_QWORD **)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v22 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          klass_high,
          (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( !v22 )
  {
    monitor_high = 0;
    if ( v14 )
      goto LABEL_29;
LABEL_31:
    v23 = 0;
    questPhase = 0;
    goto LABEL_32;
  }
  monitor_high = HIDWORD(v22[1].monitor);
  if ( !v14 )
    goto LABEL_31;
LABEL_29:
  v23 = v14[31];
  questPhase = v14[32];
LABEL_32:
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BDA48C(v24);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BDA48C(v25);
  MasterData_object = **(_QWORD **)(v25 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  questId = v23;
  v71 = DataManager__GetMasterData_object_(
          (DataManager_o *)MasterData_object,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_83;
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)MasterData_object,
                                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v65 = maxCost;
  Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v27 = v23;
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v29 = monitor_high;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)v71;
  v70 = (QuestGroupMaster_o *)MasterData_object;
  if ( !pieces )
    goto LABEL_83;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    p_focusMemberItem = (ServantStatusBattleListViewItem_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v32 >= max_length )
LABEL_84:
        sub_1B88814(MasterData_object, v9);
      v33 = pieces->m_Items[v32];
      if ( !v33 )
        goto LABEL_83;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_object,
                            v33->fields._restrictionId_k__BackingField,
                            v28);
      v35 = (QuestRestrictionInfo_o *)sub_1B887FC(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_40425900(v35, v29, v27, questPhase, RestrictionEntity, 0LL);
      if ( !v30 )
        goto LABEL_83;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             v30,
             &entity,
             v33->fields._UserServantId_k__BackingField,
             (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        break;
      }
      if ( WarBoardPieceData__get_IsNpc(v33, 0LL) )
      {
        MasterData_object = (__int64)v68;
        if ( !v68 )
          goto LABEL_83;
        v42 = DataMasterBase_object__object__long___GetEntity(
                v68,
                v33->fields._npcId_k__BackingField,
                (const MethodInfo_311DAE0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_object = (__int64)Master_object;
        if ( !Master_object )
          goto LABEL_83;
        MasterData_object = (__int64)NpcFollowerMaster__GetEntity_39433140(
                                       Master_object,
                                       v27,
                                       questPhase,
                                       v33->fields._npcId_k__BackingField,
                                       0LL);
        if ( MasterData_object )
        {
          v43 = (NpcFollowerEntity_o *)MasterData_object;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt((NpcFollowerEntity_o *)MasterData_object, 0LL);
          MasterData_object = NpcFollowerEntity__GetImageSvtId(v43, 0LL);
          v45 = MasterData_object;
        }
        else
        {
          v45 = 0;
          DispLimitCnt = -1;
        }
        v46 = questId;
        if ( !v42 )
          goto LABEL_83;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v42,
                         v33->fields._npcId_k__BackingField,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         0,
                         0,
                         v45,
                         0LL);
        if ( v33->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_object )
            goto LABEL_83;
          MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)MasterData_object,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_object )
            goto LABEL_83;
          v48 = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  v33->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_311DAE0 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v48 )
          {
            klass = (int32_t)v48[2].klass;
            monitor = (int32_t)v48[1].monitor;
            level = HIDWORD(v48[1].monitor);
            v51 = (EquipTargetInfo_o *)sub_1B887FC(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_38882840(v51, monitor, klass, level, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_83;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v51, 0LL);
            v29 = monitor_high;
            v46 = questId;
          }
        }
        EventId = v29;
        if ( v70 )
          EventId = QuestGroupMaster__GetEventId(v70, v46, 0LL);
        v53 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v53, v46, questPhase, EventId, 0LL);
        v39 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32029524(v39, v32, FollowerInfo, 1, v53, v35, 0LL, 0, 0, 0, 0LL);
LABEL_70:
        v29 = monitor_high;
        v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)v71;
        goto LABEL_71;
      }
      v39 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32066372(v39, v32, 0, 0LL, v35, 1, 0, 0LL);
LABEL_71:
      if ( !v39 )
        goto LABEL_83;
      index_k__BackingField = v33->fields._index_k__BackingField;
      v39->fields.warBoardPieceIndex = index_k__BackingField;
      if ( focusPiece && index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (ServantStatusBattleListViewItem_c *)v39;
        sub_1B88554(p_focusMemberItem, (int32_t)v39, v40, v41);
      }
      cost = this->fields.cost;
      MasterData_object = PartyOrganizationListViewItem__get_MargeCost(v39, 0LL);
      this->fields.cost = MasterData_object + cost;
      if ( !v26 )
        goto LABEL_83;
      items = v26->fields._items;
      v59 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_83;
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v39,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v61[4] = (Il2CppClass *)v39;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v39, v56, v57);
      }
      max_length = pieces->max_length;
      v27 = questId;
      if ( (int)++v32 >= max_length )
        goto LABEL_81;
    }
    if ( v70 )
      v29 = QuestGroupMaster__GetEventId(v70, v27, 0LL);
    v36 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor(v36, v27, questPhase, v29, 0LL);
    v37 = entity;
    MasterData_object = sub_1B88658(long___TypeInfo, 1LL);
    if ( !MasterData_object )
      goto LABEL_83;
    v38 = (System_Int64_array *)MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_84;
    *(_QWORD *)(MasterData_object + 32) = v33->fields._UserServantEquipId_k__BackingField;
    v39 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32057164(
      v39,
      v32,
      (UserServantEntity_o *)v37,
      v38,
      v36,
      v35,
      0LL,
      0,
      0LL,
      0,
      0LL);
    goto LABEL_70;
  }
LABEL_81:
  this->fields.maxCost = v65;
  if ( !v26 )
LABEL_83:
    sub_1B8880C(MasterData_object, v9);
  v62 = System_Collections_Generic_List_object___ToArray(
          v26,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = (struct PartyOrganizationListViewItem_array *)v62;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberItemList, (int32_t)v62, v63, v64);
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
        sub_1B88814(this, *(_QWORD *)&pieceIndex);
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v7];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 360LL) == v6 )
      {
        p_focusMemberItem->klass = *(ServantStatusBattleListViewItem_c **)&pieceIndex;
        sub_1B88554(p_focusMemberItem, pieceIndex, (int32_t)method, v3);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1B8880C(this, *(_QWORD *)&pieceIndex);
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
    sub_1B8880C(this, *(_QWORD *)&index);
  }
  if ( v7->max_length <= index )
LABEL_9:
    sub_1B88814(this, *(_QWORD *)&index);
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

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    return 0LL;
  max_length = memberItemList->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1B88814(this, index);
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
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4A58FF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A58FF9 = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  restrictionId,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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
      sub_1B8880C(this, userSvtEquipId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1B88814(this, userSvtEquipId);
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
    sub_1B8880C(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B88814(this, *(_QWORD *)&index);
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
    sub_1B8880C(this, *(_QWORD *)&index);
  }
  if ( v10->max_length <= index )
LABEL_12:
    sub_1B88814(this, *(_QWORD *)&index);
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

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_7;
  max_length = memberItemList->max_length;
  if ( max_length <= index1 || max_length <= index2 )
    sub_1B88814(this, index1);
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_1B8880C(this, index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0LL);
}