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
  long double v34; // q0
  __int64 v35; // x0
  __int64 MasterData_object; // x0
  __int64 v37; // x8
  __int64 v38; // x8
  _DWORD *v39; // x21
  int32_t v40; // w19
  __int64 v41; // x0
  __int64 v42; // x0
  Il2CppObject *v43; // x0
  long double v44; // q0
  int32_t klass_high; // w19
  __int64 v46; // x0
  __int64 v47; // x0
  Il2CppObject *v48; // x0
  long double v49; // q0
  int32_t v50; // w19
  __int64 v51; // x0
  __int64 v52; // x0
  System_Collections_Generic_List_object__o *v53; // x28
  int32_t v54; // w22
  const MethodInfo *v55; // x2
  int32_t v56; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x20
  signed int max_length; // w8
  unsigned int v59; // w27
  WarBoardPieceData_o *v60; // x29
  RestrictionEntity_o *RestrictionEntity; // x19
  QuestRestrictionInfo_o *v62; // x21
  EventUpValSetupInfo_o *v63; // x19
  Il2CppObject *v64; // x20
  System_Int64_array *v65; // x23
  PartyOrganizationListViewItem_o *v66; // x22
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *v73; // x19
  NpcFollowerEntity_o *v74; // x22
  int32_t DispLimitCnt; // w20
  int32_t v76; // w7
  int32_t v77; // w22
  FollowerInfo_o *FollowerInfo; // x19
  Il2CppObject *v79; // x0
  int32_t klass; // w22
  int32_t monitor; // w23
  EquipTargetInfo_o *v82; // x20
  int32_t EventId; // w20
  EventUpValSetupInfo_o *v84; // x23
  int32_t index_k__BackingField; // w8
  int32_t cost; // w19
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_Object_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  Il2CppClass **v96; // x0
  System_Object_array *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int32_t v104; // [xsp+18h] [xbp-A8h]
  int32_t level; // [xsp+1Ch] [xbp-A4h]
  NpcFollowerMaster_o *Master_object; // [xsp+20h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v107; // [xsp+28h] [xbp-98h]
  PartyOrganizationUtility_o *p_focusMemberItem; // [xsp+30h] [xbp-90h]
  QuestGroupMaster_o *v109; // [xsp+38h] [xbp-88h]
  Il2CppObject *v110; // [xsp+40h] [xbp-80h]
  int32_t monitor_high; // [xsp+4Ch] [xbp-74h]
  int32_t questId; // [xsp+50h] [xbp-70h]
  int32_t questPhase; // [xsp+54h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BC588C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, pieces);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarBoardMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v13);
    sub_1C1ABD4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v14);
    sub_1C1ABD4(&DataManager_TypeInfo, v15);
    sub_1C1ABD4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v16);
    sub_1C1ABD4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v17);
    sub_1C1ABD4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v18);
    sub_1C1ABD4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v19);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v20);
    sub_1C1ABD4(&EquipTargetInfo_TypeInfo, v21);
    sub_1C1ABD4(&EventUpValSetupInfo_TypeInfo, v22);
    sub_1C1ABD4(&long___TypeInfo, v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__, v25);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v26);
    sub_1C1ABD4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v27);
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, v28);
    sub_1C1ABD4(&QuestRestrictionInfo_TypeInfo, v29);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v30);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v31);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    byte_4BC588C = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C6CAB0(v34);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v35 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1C6CAB0(v34);
  v37 = **(_QWORD **)(MasterData_object + 184);
  if ( !v37 )
    goto LABEL_83;
  v38 = *(_QWORD *)(v37 + 440);
  if ( !v38 )
    goto LABEL_83;
  v39 = *(_DWORD **)(v38 + 104);
  if ( v39 )
    v40 = v39[33];
  else
    v40 = 0;
  v41 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1C6CAB0(v34);
  v42 = *(_QWORD *)(*(_QWORD *)(v41 + 192) + 16LL);
  if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
    v42 = sub_1C6CAB0(v34);
  MasterData_object = **(_QWORD **)(v42 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v43 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          v40,
          (const MethodInfo_3248678 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v43 )
    klass_high = HIDWORD(v43[1].klass);
  else
    klass_high = 0;
  v46 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
    v46 = sub_1C6CAB0(v44);
  v47 = *(_QWORD *)(*(_QWORD *)(v46 + 192) + 16LL);
  if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
    v47 = sub_1C6CAB0(v44);
  MasterData_object = **(_QWORD **)(v47 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v48 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          klass_high,
          (const MethodInfo_3248678 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( !v48 )
  {
    monitor_high = 0;
    if ( v39 )
      goto LABEL_29;
LABEL_31:
    v50 = 0;
    questPhase = 0;
    goto LABEL_32;
  }
  monitor_high = HIDWORD(v48[1].monitor);
  if ( !v39 )
    goto LABEL_31;
LABEL_29:
  v50 = v39[31];
  questPhase = v39[32];
LABEL_32:
  v51 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
    v51 = sub_1C6CAB0(v49);
  v52 = *(_QWORD *)(*(_QWORD *)(v51 + 192) + 16LL);
  if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
    v52 = sub_1C6CAB0(v49);
  MasterData_object = **(_QWORD **)(v52 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  questId = v50;
  v110 = DataManager__GetMasterData_object_(
           (DataManager_o *)MasterData_object,
           (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_83;
  v107 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)MasterData_object,
                                                         (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v104 = maxCost;
  Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v53 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v54 = v50;
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v56 = monitor_high;
  v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)v110;
  v109 = (QuestGroupMaster_o *)MasterData_object;
  if ( !pieces )
    goto LABEL_83;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v59 = 0;
    p_focusMemberItem = (PartyOrganizationUtility_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v59 >= max_length )
LABEL_84:
        sub_1C1AE38(MasterData_object, v33);
      v60 = pieces->m_Items[v59];
      if ( !v60 )
        goto LABEL_83;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_object,
                            v60->fields._restrictionId_k__BackingField,
                            v55);
      v62 = (QuestRestrictionInfo_o *)sub_1C1AE20(QuestRestrictionInfo_TypeInfo);
      QuestRestrictionInfo___ctor_41654936(v62, v56, v54, questPhase, RestrictionEntity, 0LL);
      if ( !v57 )
        goto LABEL_83;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             v57,
             &entity,
             v60->fields._UserServantId_k__BackingField,
             (const MethodInfo_324AC20 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        break;
      }
      if ( WarBoardPieceData__get_IsNpc(v60, 0LL) )
      {
        MasterData_object = (__int64)v107;
        if ( !v107 )
          goto LABEL_83;
        v73 = DataMasterBase_object__object__long___GetEntity(
                v107,
                v60->fields._npcId_k__BackingField,
                (const MethodInfo_324ABD4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_object = (__int64)Master_object;
        if ( !Master_object )
          goto LABEL_83;
        MasterData_object = (__int64)NpcFollowerMaster__GetEntity_40647520(
                                       Master_object,
                                       v54,
                                       questPhase,
                                       v60->fields._npcId_k__BackingField,
                                       0LL);
        if ( MasterData_object )
        {
          v74 = (NpcFollowerEntity_o *)MasterData_object;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt((NpcFollowerEntity_o *)MasterData_object, -1, 0LL);
          MasterData_object = NpcFollowerEntity__GetImageSvtId(v74, 0LL);
          v76 = MasterData_object;
        }
        else
        {
          v76 = 0;
          DispLimitCnt = -1;
        }
        v77 = questId;
        if ( !v73 )
          goto LABEL_83;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v73,
                         v60->fields._npcId_k__BackingField,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         0,
                         0,
                         v76,
                         0LL);
        if ( v60->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_object )
            goto LABEL_83;
          MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)MasterData_object,
                                         (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_object )
            goto LABEL_83;
          v79 = DataMasterBase_object__object__long___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  v60->fields._npcEquipId_k__BackingField,
                  (const MethodInfo_324ABD4 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v79 )
          {
            klass = (int32_t)v79[2].klass;
            monitor = (int32_t)v79[1].monitor;
            level = HIDWORD(v79[1].monitor);
            v82 = (EquipTargetInfo_o *)sub_1C1AE20(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_40095444(v82, monitor, klass, level, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_83;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v82, 0LL);
            v56 = monitor_high;
            v77 = questId;
          }
        }
        EventId = v56;
        if ( v109 )
          EventId = QuestGroupMaster__GetEventId(v109, v77, 0LL);
        v84 = (EventUpValSetupInfo_o *)sub_1C1AE20(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v84, v77, questPhase, EventId, 0LL);
        v66 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32949872(v66, v59, FollowerInfo, 1, v84, v62, 0LL, 0, 0, 0, 0LL);
LABEL_70:
        v56 = monitor_high;
        v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)v110;
        goto LABEL_71;
      }
      v66 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32986860(v66, v59, 0, 0LL, v62, 1, 0, 0LL);
LABEL_71:
      if ( !v66 )
        goto LABEL_83;
      index_k__BackingField = v60->fields._index_k__BackingField;
      v66->fields.warBoardPieceIndex = index_k__BackingField;
      if ( focusPiece && index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (PartyOrganizationUtility_c *)v66;
        sub_1C1AB78(p_focusMemberItem, (int64_t)v66, v67, v68, v69, v70, v71, v72);
      }
      cost = this->fields.cost;
      MasterData_object = PartyOrganizationListViewItem__get_MargeCost(v66, 0LL);
      this->fields.cost = MasterData_object + cost;
      if ( !v53 )
        goto LABEL_83;
      items = v53->fields._items;
      v94 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
      ++v53->fields._version;
      if ( !items )
        goto LABEL_83;
      size = v53->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v53,
          (Il2CppObject *)v66,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      }
      else
      {
        v96 = &items->obj.klass + size;
        v53->fields._size = size + 1;
        v96[4] = (Il2CppClass *)v66;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v96 + 4), (int64_t)v66, v87, v88, v89, v90, v91, v92);
      }
      max_length = pieces->max_length;
      v54 = questId;
      if ( (int)++v59 >= max_length )
        goto LABEL_81;
    }
    if ( v109 )
      v56 = QuestGroupMaster__GetEventId(v109, v54, 0LL);
    v63 = (EventUpValSetupInfo_o *)sub_1C1AE20(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor(v63, v54, questPhase, v56, 0LL);
    v64 = entity;
    MasterData_object = sub_1C1AC7C(long___TypeInfo, 1LL);
    if ( !MasterData_object )
      goto LABEL_83;
    v65 = (System_Int64_array *)MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_84;
    *(_QWORD *)(MasterData_object + 32) = v60->fields._UserServantEquipId_k__BackingField;
    v66 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32977504(
      v66,
      v59,
      (UserServantEntity_o *)v64,
      v65,
      v63,
      v62,
      0LL,
      0,
      0LL,
      0,
      0LL);
    goto LABEL_70;
  }
LABEL_81:
  this->fields.maxCost = v104;
  if ( !v53 )
LABEL_83:
    sub_1C1AE30(MasterData_object, v33);
  v97 = System_Collections_Generic_List_object___ToArray(
          v53,
          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = (struct PartyOrganizationListViewItem_array *)v97;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.memberItemList,
    (int64_t)v97,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewItem__ChangeFocusMember(
        WarBoardPartyListViewItem_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x21
  int max_length; // w8
  int32_t v10; // w19
  unsigned int v11; // w22
  PartyOrganizationUtility_o *p_focusMemberItem; // x20

  memberItemList = this->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_11;
  max_length = memberItemList->max_length;
  if ( max_length >= 1 )
  {
    v10 = pieceIndex;
    v11 = 0;
    p_focusMemberItem = (PartyOrganizationUtility_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C1AE38(this, *(_QWORD *)&pieceIndex);
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v11];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 360LL) == v10 )
      {
        p_focusMemberItem->klass = *(PartyOrganizationUtility_c **)&pieceIndex;
        sub_1C1AB78(p_focusMemberItem, *(int64_t *)&pieceIndex, (int64_t)method, v3, v4, v5, v6, v7);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_11:
    sub_1C1AE30(this, *(_QWORD *)&pieceIndex);
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
    sub_1C1AE30(this, *(_QWORD *)&index);
  }
  if ( v7->max_length <= index )
LABEL_9:
    sub_1C1AE38(this, *(_QWORD *)&index);
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
    sub_1C1AE38(this, *(_QWORD *)&index);
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
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4BC588D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_RestrictionMaster___, *(_QWORD *)&restrictionId);
    sub_1C1ABD4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4BC588D = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6CAB0(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C6CAB0(v3);
  MasterData_object = **(Il2CppObject ***)(v8 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_1C1AE30(MasterData_object, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  restrictionId,
                                  (const MethodInfo_3248678 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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
      sub_1C1AE30(this, userSvtEquipId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C1AE38(this, userSvtEquipId);
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
    sub_1C1AE30(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C1AE38(this, *(_QWORD *)&index);
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
    sub_1C1AE30(this, *(_QWORD *)&index);
  }
  if ( v10->max_length <= index )
LABEL_12:
    sub_1C1AE38(this, *(_QWORD *)&index);
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
    sub_1C1AE38(this, *(_QWORD *)&index1);
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_1C1AE30(this, index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0LL);
}