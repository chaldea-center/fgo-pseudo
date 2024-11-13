void __fastcall WarBoardPartyListViewItem___ctor(
        WarBoardPartyListViewItem_o *this,
        WarBoardPieceData_array *pieces,
        WarBoardPieceData_o *focusPiece,
        int32_t maxCost,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  long double v58; // q0
  __int64 v59; // x0
  __int64 MasterData_object; // x0
  __int64 v61; // x8
  __int64 v62; // x8
  _DWORD *v63; // x21
  int32_t v64; // w19
  __int64 v65; // x0
  __int64 v66; // x0
  Il2CppObject *v67; // x0
  long double v68; // q0
  int32_t klass_high; // w19
  __int64 v70; // x0
  __int64 v71; // x0
  Il2CppObject *v72; // x0
  long double v73; // q0
  int32_t v74; // w19
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_object__o *v81; // x28
  int32_t v82; // w22
  const MethodInfo *v83; // x2
  int32_t v84; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // x20
  signed int max_length; // w8
  unsigned int v87; // w27
  WarBoardPieceData_o *v88; // x29
  RestrictionEntity_o *RestrictionEntity; // x19
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  QuestRestrictionInfo_o *v93; // x21
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  EventUpValSetupInfo_o *v97; // x19
  Il2CppObject *v98; // x20
  __int64 v99; // x2
  __int64 v100; // x3
  System_Int64_array *v101; // x23
  PartyOrganizationListViewItem_o *v102; // x22
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  __int64 v109; // x2
  __int64 v110; // x3
  Il2CppObject *v111; // x19
  NpcFollowerEntity_o *v112; // x22
  int32_t DispLimitCnt; // w20
  int32_t v114; // w7
  int32_t v115; // w22
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  FollowerInfo_o *FollowerInfo; // x19
  Il2CppObject *v120; // x0
  int32_t klass; // w22
  int32_t monitor; // w23
  EquipTargetInfo_o *v123; // x20
  int32_t EventId; // w20
  EventUpValSetupInfo_o *v125; // x23
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  int32_t index_k__BackingField; // w8
  int32_t cost; // w19
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  struct System_Object_array *items; // x8
  _QWORD *v138; // x9
  __int64 size; // x10
  Il2CppClass **v140; // x0
  System_Object_array *v141; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int32_t v148; // [xsp+18h] [xbp-A8h]
  int32_t level; // [xsp+1Ch] [xbp-A4h]
  NpcFollowerMaster_o *Master_object; // [xsp+20h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v151; // [xsp+28h] [xbp-98h]
  PartyOrganizationUtility_o *p_focusMemberItem; // [xsp+30h] [xbp-90h]
  QuestGroupMaster_o *v153; // [xsp+38h] [xbp-88h]
  Il2CppObject *v154; // [xsp+40h] [xbp-80h]
  int32_t monitor_high; // [xsp+4Ch] [xbp-74h]
  int32_t questId; // [xsp+50h] [xbp-70h]
  int32_t questPhase; // [xsp+54h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B14029 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, pieces, focusPiece);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v31, v32);
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v33, v34);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v35, v36);
    sub_1BCA7E0(&long___TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v43, v44);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v45, v46);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v47, v48);
    sub_1BCA7E0(&QuestRestrictionInfo_TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v51, v52);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v53, v54);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v55, v56);
    byte_4B14029 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v59 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
    v59 = sub_1C1C6BC(v58);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v59 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1C1C6BC(v58);
  v61 = **(_QWORD **)(MasterData_object + 184);
  if ( !v61 )
    goto LABEL_83;
  v62 = *(_QWORD *)(v61 + 440);
  if ( !v62 )
    goto LABEL_83;
  v63 = *(_DWORD **)(v62 + 104);
  if ( v63 )
    v64 = v63[33];
  else
    v64 = 0;
  v65 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
    v65 = sub_1C1C6BC(v58);
  v66 = *(_QWORD *)(*(_QWORD *)(v65 + 192) + 16LL);
  if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
    v66 = sub_1C1C6BC(v58);
  MasterData_object = **(_QWORD **)(v66 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v67 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          v64,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v67 )
    klass_high = HIDWORD(v67[1].klass);
  else
    klass_high = 0;
  v70 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
    v70 = sub_1C1C6BC(v68);
  v71 = *(_QWORD *)(*(_QWORD *)(v70 + 192) + 16LL);
  if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
    v71 = sub_1C1C6BC(v68);
  MasterData_object = **(_QWORD **)(v71 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  v72 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          klass_high,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
  if ( !v72 )
  {
    monitor_high = 0;
    if ( v63 )
      goto LABEL_29;
LABEL_31:
    v74 = 0;
    questPhase = 0;
    goto LABEL_32;
  }
  monitor_high = HIDWORD(v72[1].monitor);
  if ( !v63 )
    goto LABEL_31;
LABEL_29:
  v74 = v63[31];
  questPhase = v63[32];
LABEL_32:
  v75 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
    v75 = sub_1C1C6BC(v73);
  v76 = *(_QWORD *)(*(_QWORD *)(v75 + 192) + 16LL);
  if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
    v76 = sub_1C1C6BC(v73);
  MasterData_object = **(_QWORD **)(v76 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  questId = v74;
  v154 = DataManager__GetMasterData_object_(
           (DataManager_o *)MasterData_object,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_83;
  v151 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)MasterData_object,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v77);
  v148 = maxCost;
  Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v81 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                       v78,
                                                       v79,
                                                       v80);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v82 = v74;
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v84 = monitor_high;
  v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)v154;
  v153 = (QuestGroupMaster_o *)MasterData_object;
  if ( !pieces )
    goto LABEL_83;
  max_length = pieces->max_length;
  if ( max_length >= 1 )
  {
    v87 = 0;
    p_focusMemberItem = (PartyOrganizationUtility_o *)&this->fields.focusMemberItem;
    while ( 1 )
    {
      if ( v87 >= max_length )
LABEL_84:
        sub_1BCAA44(MasterData_object, v57);
      v88 = pieces->m_Items[v87];
      if ( !v88 )
        goto LABEL_83;
      RestrictionEntity = WarBoardPartyListViewItem__GetRestrictionEntity(
                            (WarBoardPartyListViewItem_o *)MasterData_object,
                            v88->fields._restrictionId_k__BackingField,
                            v83);
      v93 = (QuestRestrictionInfo_o *)sub_1BCAA2C(QuestRestrictionInfo_TypeInfo, v90, v91, v92);
      QuestRestrictionInfo___ctor_41161348(v93, v84, v82, questPhase, RestrictionEntity, 0LL);
      if ( !v85 )
        goto LABEL_83;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             v85,
             &entity,
             v88->fields._UserServantId_k__BackingField,
             (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        break;
      }
      if ( WarBoardPieceData__get_IsNpc(v88, 0LL) )
      {
        MasterData_object = (__int64)v151;
        if ( !v151 )
          goto LABEL_83;
        v111 = DataMasterBase_object__object__long___GetEntity(
                 v151,
                 v88->fields._npcId_k__BackingField,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
        MasterData_object = (__int64)Master_object;
        if ( !Master_object )
          goto LABEL_83;
        MasterData_object = (__int64)NpcFollowerMaster__GetEntity_40158156(
                                       Master_object,
                                       v82,
                                       questPhase,
                                       v88->fields._npcId_k__BackingField,
                                       0LL);
        if ( MasterData_object )
        {
          v112 = (NpcFollowerEntity_o *)MasterData_object;
          DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt((NpcFollowerEntity_o *)MasterData_object, -1, 0LL);
          MasterData_object = NpcFollowerEntity__GetImageSvtId(v112, 0LL);
          v114 = MasterData_object;
        }
        else
        {
          v114 = 0;
          DispLimitCnt = -1;
        }
        v115 = questId;
        if ( !v111 )
          goto LABEL_83;
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         (NpcServantFollowerEntity_o *)v111,
                         v88->fields._npcId_k__BackingField,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         0,
                         0,
                         v114,
                         0LL);
        if ( v88->fields._npcEquipId_k__BackingField >= 1 )
        {
          MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !MasterData_object )
            goto LABEL_83;
          MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
          if ( !MasterData_object )
            goto LABEL_83;
          v120 = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v88->fields._npcEquipId_k__BackingField,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( v120 )
          {
            klass = (int32_t)v120[2].klass;
            monitor = (int32_t)v120[1].monitor;
            level = HIDWORD(v120[1].monitor);
            v123 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, v116, v117, v118);
            EquipTargetInfo___ctor_39602340(v123, monitor, klass, level, 0, 0LL);
            if ( !FollowerInfo )
              goto LABEL_83;
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v123, 0LL);
            v84 = monitor_high;
            v115 = questId;
          }
        }
        EventId = v84;
        if ( v153 )
          EventId = QuestGroupMaster__GetEventId(v153, v115, 0LL);
        v125 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v116, v117, v118);
        EventUpValSetupInfo___ctor(v125, v115, questPhase, EventId, 0LL);
        v102 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v126, v127, v128);
        PartyOrganizationListViewItem___ctor_32576596(v102, v87, FollowerInfo, 1, v125, v93, 0LL, 0, 0, 0, 0LL);
LABEL_70:
        v84 = monitor_high;
        v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)v154;
        goto LABEL_71;
      }
      v102 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v57, v109, v110);
      PartyOrganizationListViewItem___ctor_32613444(v102, v87, 0, 0LL, v93, 1, 0, 0LL);
LABEL_71:
      if ( !v102 )
        goto LABEL_83;
      index_k__BackingField = v88->fields._index_k__BackingField;
      v102->fields.warBoardPieceIndex = index_k__BackingField;
      if ( focusPiece && index_k__BackingField == focusPiece->fields._index_k__BackingField )
      {
        p_focusMemberItem->klass = (PartyOrganizationUtility_c *)v102;
        sub_1BCA784(p_focusMemberItem, (int64_t)v102, v103, v104, v105, v106, v107, v108);
      }
      cost = this->fields.cost;
      MasterData_object = PartyOrganizationListViewItem__get_MargeCost(v102, 0LL);
      this->fields.cost = MasterData_object + cost;
      if ( !v81 )
        goto LABEL_83;
      items = v81->fields._items;
      v138 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
      ++v81->fields._version;
      if ( !items )
        goto LABEL_83;
      size = v81->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v81,
          (Il2CppObject *)v102,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
      }
      else
      {
        v140 = &items->obj.klass + size;
        v81->fields._size = size + 1;
        v140[4] = (Il2CppClass *)v102;
        sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 4), (int64_t)v102, v131, v132, v133, v134, v135, v136);
      }
      max_length = pieces->max_length;
      v82 = questId;
      if ( (int)++v87 >= max_length )
        goto LABEL_81;
    }
    if ( v153 )
      v84 = QuestGroupMaster__GetEventId(v153, v82, 0LL);
    v97 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v94, v95, v96);
    EventUpValSetupInfo___ctor(v97, v82, questPhase, v84, 0LL);
    v98 = entity;
    MasterData_object = sub_1BCA888(long___TypeInfo, 1LL);
    if ( !MasterData_object )
      goto LABEL_83;
    v101 = (System_Int64_array *)MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_84;
    *(_QWORD *)(MasterData_object + 32) = v88->fields._UserServantEquipId_k__BackingField;
    v102 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v57, v99, v100);
    PartyOrganizationListViewItem___ctor_32604236(
      v102,
      v87,
      (UserServantEntity_o *)v98,
      v101,
      v97,
      v93,
      0LL,
      0,
      0LL,
      0,
      0LL);
    goto LABEL_70;
  }
LABEL_81:
  this->fields.maxCost = v148;
  if ( !v81 )
LABEL_83:
    sub_1BCAA3C(MasterData_object, v57);
  v141 = System_Collections_Generic_List_object___ToArray(
           v81,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__ToArray__);
  this->fields.memberItemList = (struct PartyOrganizationListViewItem_array *)v141;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.memberItemList,
    (int64_t)v141,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
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
        sub_1BCAA44(this, *(_QWORD *)&pieceIndex);
      *(_QWORD *)&pieceIndex = memberItemList->m_Items[v11];
      if ( !*(_QWORD *)&pieceIndex )
        break;
      if ( *(_DWORD *)(*(_QWORD *)&pieceIndex + 360LL) == v10 )
      {
        p_focusMemberItem->klass = *(PartyOrganizationUtility_c **)&pieceIndex;
        sub_1BCA784(p_focusMemberItem, *(int64_t *)&pieceIndex, (int64_t)method, v3, v4, v5, v6, v7);
      }
      max_length = memberItemList->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&pieceIndex);
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  }
  if ( v7->max_length <= index )
LABEL_9:
    sub_1BCAA44(this, *(_QWORD *)&index);
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
    sub_1BCAA44(this, index);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4B1402A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RestrictionMaster___, *(_QWORD *)&restrictionId, method);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7, v8);
    byte_4B1402A = 1;
  }
  if ( restrictionId < 1 )
    return 0LL;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  MasterData_object = **(Il2CppObject ***)(v10 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RestrictionMaster___)) == 0LL )
  {
    sub_1BCAA3C(MasterData_object, *(_QWORD *)&restrictionId);
  }
  return (RestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  restrictionId,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
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
      sub_1BCAA3C(this, userSvtEquipId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberItemList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1BCAA44(this, userSvtEquipId);
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberItemList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&index);
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  }
  if ( v10->max_length <= index )
LABEL_12:
    sub_1BCAA44(this, *(_QWORD *)&index);
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
    sub_1BCAA44(this, index1);
  this = (WarBoardPartyListViewItem_o *)memberItemList->m_Items[index1];
  if ( !this )
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&index1);
  PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, memberItemList->m_Items[index2], 0, 0LL);
}