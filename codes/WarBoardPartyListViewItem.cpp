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
  int32_t v16; // w20
  __int64 v17; // x0
  __int64 v18; // x0
  Il2CppObject *v19; // x0
  long double v20; // q0
  int32_t klass_high; // w20
  __int64 v22; // x0
  __int64 v23; // x0
  Il2CppObject *v24; // x0
  long double v25; // q0
  int32_t v26; // w20
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x28
  int32_t v32; // w22
  const MethodInfo *v33; // x2
  int32_t EventId; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x20
  int max_length; // w8
  int32_t v37; // w27
  WarBoardPieceData_o *v38; // x29
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v40; // x21
  EventUpValSetupInfo_o *v41; // x20
  Il2CppObject *v42; // x23
  System_Int64_array *v43; // x19
  PartyOrganizationListViewItem_o *v44; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *v51; // x20
  NpcFollowerEntity_o *v52; // x22
  int32_t DispLimitCnt; // w19
  int32_t v54; // w7
  int32_t v55; // w22
  FollowerInfo_o *FollowerInfo; // x0
  Il2CppObject *v57; // x0
  int32_t monitor; // w23
  int32_t v59; // w20
  int32_t klass; // w22
  EquipTargetInfo_o *v61; // x19
  int32_t v62; // w19
  EventUpValSetupInfo_o *v63; // x23
  int32_t index_k__BackingField; // w8
  int32_t cost; // w19
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  System_Object_array *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  int32_t v83; // [xsp+2Ch] [xbp-A4h]
  NpcFollowerMaster_o *Master_object; // [xsp+30h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // [xsp+38h] [xbp-98h]
  FollowerInfo_o *follower; // [xsp+40h] [xbp-90h]
  QuestGroupMaster_o *v87; // [xsp+48h] [xbp-88h]
  int32_t monitor_high; // [xsp+54h] [xbp-7Ch]
  Il2CppObject *v89; // [xsp+58h] [xbp-78h]
  int32_t questId; // [xsp+60h] [xbp-70h]
  int32_t questPhase; // [xsp+64h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_596E355 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarBoardMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&EquipTargetInfo_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596E355 = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908(v10);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_224B908(v10);
  v13 = **(_QWORD **)(MasterData_object + 184);
  if ( !v13 )
    goto LABEL_82;
  v14 = *(_QWORD *)(v13 + 440);
  if ( !v14 )
    goto LABEL_82;
  v15 = *(_DWORD **)(v14 + 104);
  if ( v15 )
    v16 = v15[33];
  else
    v16 = 0;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_224B908(v10);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
    v18 = sub_224B908(v10);
  MasterData_object = **(_QWORD **)(v18 + 184);
  if ( !MasterData_object )
    goto LABEL_82;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_object )
    goto LABEL_82;
  v19 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          v16,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v19 )
    klass_high = HIDWORD(v19[1].klass);
  else
    klass_high = 0;
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v22 + 309) & 1) == 0 )
    v22 = sub_224B908(v20);
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
    v23 = sub_224B908(v20);
  MasterData_object = **(_QWORD **)(v23 + 184);
  if ( !MasterData_object )
    goto LABEL_82;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_object )
    goto LABEL_82;
  v24 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          klass_high,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( v24 )
  {
    monitor_high = HIDWORD(v24[1].monitor);
    if ( v15 )
    {
LABEL_29:
      v26 = v15[31];
      questPhase = v15[32];
      goto LABEL_32;
    }
  }
  else
  {
    monitor_high = 0;
    if ( v15 )
      goto LABEL_29;
  }
  v26 = 0;
  questPhase = 0;
LABEL_32:
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_224B908(v25);
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
    v28 = sub_224B908(v25);
  MasterData_object = **(_QWORD **)(v28 + 184);
  if ( !MasterData_object )
    goto LABEL_82;
  questId = v26;
  v89 = DataManager__GetMasterData_object_(
          (DataManager_o *)MasterData_object,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_82;
  v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)MasterData_object,
                                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
  v83 = maxCost;
  Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v32 = v26;
  if ( !MasterData_object )
    goto LABEL_82;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  EventId = monitor_high;
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)v89;
  v87 = (QuestGroupMaster_o *)MasterData_object;
  if ( !pieces )
    goto LABEL_82;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)max_length )
LABEL_83:
        sub_2213CE4(MasterData_object);
      v38 = pieces->m_Items[v37];
      if ( !v38 )
        break;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_object,
                            v38->fields._restrictionId_k__BackingField,
                            v33);
      v40 = (QuestRestrictionInfo_o *)sub_2213CCC(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_50424472(v40, EventId, v32, questPhase, RestrictionEntity, 0);
      if ( !v35 )
        break;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             v35,
             &entity,
             v38->fields._UserServantId_k__BackingField,
             (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        if ( v87 )
          EventId = QuestGroupMaster__GetEventId(v87, v32, 0);
        v41 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v41, v32, questPhase, EventId, 0);
        v42 = entity;
        MasterData_object = sub_2213B20(long___TypeInfo, 1);
        if ( !MasterData_object )
          break;
        v43 = (System_Int64_array *)MasterData_object;
        if ( !*(_DWORD *)(MasterData_object + 24) )
          goto LABEL_83;
        *(_QWORD *)(MasterData_object + 32) = v38->fields._UserServantEquipId_k__BackingField;
        v44 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40968980(
          v44,
          v37,
          (UserServantEntity_o *)v42,
          v43,
          v41,
          v40,
          0,
          0,
          0,
          0,
          0,
          0,
          0);
        EventId = monitor_high;
        v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)v89;
      }
      else if ( WarBoardPieceData__get_IsNpc(v38, 0) )
      {
        MasterData_object = (__int64)v85;
        if ( !v85 )
          break;
        v51 = DataMasterBase_object__object__long___GetEntity(
                v85,
                v38->fields._npcId_k__BackingField,
                (const MethodInfo_3F13190 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_object = (__int64)Master_object;
        if ( !Master_object )
          break;
        MasterData_object = (__int64)NpcFollowerMaster__GetEntity_49447928(
                                       Master_object,
                                       v32,
                                       questPhase,
                                       v38->fields._npcId_k__BackingField,
                                       0);
        if ( MasterData_object )
        {
          v52 = (NpcFollowerEntity_o *)MasterData_object;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt((NpcFollowerEntity_o *)MasterData_object, -1, 0);
          MasterData_object = NpcFollowerEntity__GetImageSvtId(v52, 0);
          v54 = MasterData_object;
        }
        else
        {
          v54 = 0;
          DispLimitCnt = -1;
        }
        v55 = questId;
        if ( !v51 )
          break;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v51,
                         v38->fields._npcId_k__BackingField,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         0,
                         0,
                         v54,
                         0);
        v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)v89;
        follower = FollowerInfo;
        if ( v38->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_object )
            break;
          MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)MasterData_object,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_object )
            break;
          v57 = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  v38->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_3F13190 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v57 )
          {
            monitor = (int32_t)v57[1].monitor;
            v59 = HIDWORD(v57[1].monitor);
            klass = (int32_t)v57[2].klass;
            v61 = (EquipTargetInfo_o *)sub_2213CCC(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_48715996(v61, monitor, klass, v59, 0, 0);
            MasterData_object = (__int64)follower;
            if ( !follower )
              break;
            FollowerInfo__SetEquipInfoForNpc(follower, v61, 0);
            EventId = monitor_high;
            v55 = questId;
            v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)v89;
          }
        }
        v62 = EventId;
        if ( v87 )
          v62 = QuestGroupMaster__GetEventId(v87, v55, 0);
        v63 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v63, v55, questPhase, v62, 0);
        v44 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40942508(v44, v37, follower, 1, 0, v63, v40, 0, 0, 0, 0, 0, 0);
        EventId = monitor_high;
      }
      else
      {
        v44 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40980060(v44, v37, 0, 0, v40, 1, 0, 0, 0);
      }
      if ( !v44 )
        break;
      index_k__BackingField = v38->fields._index_k__BackingField;
      v44->fields.warBoardPieceIndex = index_k__BackingField;
      if ( focusPiece && index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        this->fields.focusMemberItem = v44;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.focusMemberItem,
          (int32_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
      cost = this->fields.cost;
      MasterData_object = PartyOrganizationListViewItem__get_MargeCost(v44, 0);
      this->fields.cost = MasterData_object + cost;
      if ( !v31 )
        break;
      items = v31->fields._items;
      v73 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
      ++v31->fields._version;
      if ( !items )
        break;
      size = v31->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)v44,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v44;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v44, v66, v67, v68, v69, v70, v71);
      }
      max_length = pieces->max_length;
      ++v37;
      v32 = questId;
      if ( v37 >= max_length )
        goto LABEL_80;
    }
LABEL_82:
    sub_2213CDC(MasterData_object, v9);
  }
LABEL_80:
  this->fields.maxCost = v83;
  if ( !v31 )
    goto LABEL_82;
  v76 = System_Collections_Generic_List_object___ToArray(
          v31,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = (struct PartyOrganizationListViewItem_array *)v76;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.memberItemList,
    (int32_t)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyListViewItem__ChangeFocusMember(
        WarBoardPartyListViewItem_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyOrganizationListViewItem_array *memberItemList; // x21
  int max_length; // w8
  int32_t v11; // w20
  unsigned int v12; // w22

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_10;
  max_length = memberItemList->max_length;
  if ( max_length >= 1 )
  {
    v11 = pieceIndex;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_2213CE4(this);
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v12];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 376LL) == v11 )
      {
        this->fields.focusMemberItem = *(struct PartyOrganizationListViewItem_o **)&pieceIndex;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.focusMemberItem,
          pieceIndex,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_10:
    sub_2213CDC(this, *(_QWORD *)&pieceIndex);
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
    sub_2213CDC(this, *(_QWORD *)&index);
  }
  if ( LODWORD(v7->max_length) <= index )
LABEL_9:
    sub_2213CE4(this);
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
    sub_2213CE4(this);
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

  if ( (byte_596E356 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_2213A60(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_596E356 = 1;
  }
  if ( restrictionId < 1 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0 )
  {
    sub_2213CDC(MasterData_object, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  restrictionId,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
}


int32_t WarBoardPartyListViewItem__GetWeareMember(
        WarBoardPartyListViewItem_o *this,
        int64_t userSvtEquipId,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  WarBoardPartyListViewItem_o *v4; // x21
  __int64 v6; // x20
  int max_length; // w9

  if ( userSvtEquipId >= 1 )
  {
    memberItemList = this->fields.memberItemList;
    v4 = this;
    if ( !memberItemList )
LABEL_9:
      sub_2213CDC(this, userSvtEquipId);
    v6 = 0;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
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
  unsigned __int64 v7; // x22
  __int64 v8; // x23
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v10; // x8
  PartyOrganizationListViewItem_o *v11; // x21
  int32_t cost; // w24
  int32_t v13; // w24
  int32_t v14; // w9
  int32_t v15; // w24

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
LABEL_11:
    sub_2213CDC(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0;
  v8 = (unsigned int)index;
  while ( 1 )
  {
    max_length_low = LODWORD(memberItemList->max_length);
    if ( (__int64)v7 >= (int)max_length_low )
      break;
    if ( v7 >= max_length_low )
      sub_2213CE4(this);
    v10 = &memberItemList->obj.klass + v7;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( v8 == v7 )
    {
      if ( !v11 )
        goto LABEL_11;
      cost = v6->fields.cost;
      v6->fields.cost = cost
                      - PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v10[4], 0);
      PartyOrganizationListViewItem__SetEquipUserServantId(v11, userSvtEquipId, 0, 0);
      v13 = v6->fields.cost;
      this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v11, 0);
      v14 = (_DWORD)this + v13;
    }
    else
    {
      if ( !v11 )
        goto LABEL_11;
      v15 = v6->fields.cost;
      this = (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__RemoveEquipUserServantId(
                                              (PartyOrganizationListViewItem_o *)v10[4],
                                              userSvtEquipId,
                                              0);
      v14 = v15 - (_DWORD)this;
    }
    memberItemList = v6->fields.memberItemList;
    ++v7;
    v6->fields.cost = v14;
    if ( !memberItemList )
      goto LABEL_11;
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
    sub_2213CDC(this, *(_QWORD *)&index);
  }
  if ( LODWORD(v10->max_length) <= index )
LABEL_12:
    sub_2213CE4(this);
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
    sub_2213CE4(this);
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0);
}