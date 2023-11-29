void __fastcall PartyOrganizationEventPointListViewManager___ctor(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__CreateList(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x23
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  PartyOrganizationEventPointListViewManager_o *v12; // x19
  ListViewItemSeed_o *seed; // x0
  float x; // s8
  float y; // s10
  float z; // s9
  PartyOrganizationEventPointListViewManager_o *v17; // x0
  const MethodInfo *v18; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  EventMargeItemUpValInfo_array *v20; // x22
  System_Int32_array **v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct ListViewItemSeed_o *v33; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  float v35; // s10
  __int64 DropItemList; // x0
  EventDropItemUpValInfo_array *v37; // x1
  EventUpValInfo_o *v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x8
  unsigned __int64 v42; // x21
  System_Int32_array **v43; // x24
  __int64 v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct ListViewItemSeed_o *v51; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Transform_o *transform; // x0
  struct ListViewItemSeed_o *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  __int64 v57; // x2
  UnityEngine_GameObject_o *lineObj; // x0
  __int64 v59; // x0
  __int64 v60; // x2
  unsigned int *v61; // x22
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x4
  EventUpValInfo_array *v70; // x8
  unsigned __int64 v71; // x24
  BattleServantConfConponent_o *v72; // x25
  unsigned __int64 max_length; // x9
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValInfo_o *v75; // x0
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x26
  unsigned int **v82; // x25
  unsigned __int64 i; // x24
  PartyOrganizationListViewItem_o *Member; // x0
  const MethodInfo *v85; // x1
  PartyOrganizationListViewItem_o *v86; // x20
  int32_t v87; // w26
  ServantEntity_o *servantEntity; // x28
  System_String_o *SvtNameText; // x0
  bool isFollower; // w20
  System_String_o *v91; // x19
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  EventMemberMargeUpValInfo_o *v96; // x27
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  unsigned int *v102; // x19
  unsigned int *v103; // x0
  EventUpValInfo_array *v104; // x8
  unsigned __int64 v105; // x19
  unsigned int *v106; // x8
  EventMemberMargeUpValInfo_o *v107; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  System_Int32_array **servantName; // x19
  bool v113; // w20
  ListViewItem_o *v114; // x0
  int32_t v115; // w1
  ListViewItem_o *v116; // x26
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  struct ListViewItemSeed_o *v123; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v124; // x0
  float v125; // s12
  __int64 v126; // x3
  __int64 v127; // x4
  __int64 v128; // x8
  __int64 v129; // x27
  float v130; // s10
  int v131; // w20
  unsigned __int64 v132; // x28
  __int64 v133; // x25
  __int64 v134; // x8
  ServantEntity_o *v135; // x0
  System_Int32_array **v136; // x19
  ListViewItem_o *v137; // x0
  int32_t v138; // w1
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  struct ListViewItemSeed_o *v145; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v146; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v147; // x0
  struct ListViewItemSeed_o *v148; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v150; // x0
  unsigned int **p_eventMargeUpValInfoList; // [xsp+0h] [xbp-B0h]
  PartyListViewItem_o *v152; // [xsp+8h] [xbp-A8h]
  PartyOrganizationListViewItem_o *v153; // [xsp+10h] [xbp-A0h]
  signed __int64 v155; // [xsp+20h] [xbp-90h]
  EventUpValInfo_array *eventUpValList; // [xsp+28h] [xbp-88h] BYREF
  int32_t index; // [xsp+38h] [xbp-78h]
  int32_t eventId; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4

  v3 = partyItem;
  if ( (byte_40FDC64 & 1) == 0 )
  {
    sub_B16FFC(&EventDropItemUpValInfo_____TypeInfo, partyItem);
    sub_B16FFC(&EventMemberMargeUpValInfo___TypeInfo, v4);
    sub_B16FFC(&EventMemberMargeUpValInfo_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&PartyOrganizationEventPointListViewItem_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_10393, v10);
    sub_B16FFC(&StringLiteral_10303, v11);
    byte_40FDC64 = 1;
  }
  v12 = this;
  eventId = 0;
  eventUpValList = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v3 )
    goto LABEL_106;
  if ( !PartyListViewItem__GetEventUpVal(v3, &eventId, &eventUpValList, 0LL) )
    goto LABEL_101;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_106;
  LocalPosition = ListViewItemSeed__GetLocalPosition(seed, 0, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(v17, eventId, v3, v18);
  if ( !TotalEventPointInfo )
    goto LABEL_106;
  v20 = TotalEventPointInfo;
  v152 = v3;
  if ( !*(_QWORD *)&TotalEventPointInfo->max_length )
  {
    lineObj = this->fields.lineObj;
    if ( !lineObj )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive(lineObj, 0, 0LL);
    index = 0;
    goto LABEL_29;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_10393, 0LL);
  v26 = sub_B170CC(PartyOrganizationEventPointListViewItem_TypeInfo, v22, v23, v24, v25);
  *(_DWORD *)(v26 + 136) = 1;
  ListViewItem___ctor_30173668((ListViewItem_o *)v26, 0, 0LL);
  *(_QWORD *)(v26 + 112) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 112), v21, v27, v28, v29, v30, v31, v32);
  *(_BYTE *)(v26 + 120) = 0;
  *(_DWORD *)(v26 + 136) = 0;
  if ( !v26 )
    goto LABEL_106;
  *(float *)(v26 + 92) = x;
  *(float *)(v26 + 96) = y;
  *(float *)(v26 + 100) = z;
  v33 = this->fields.seed;
  if ( !v33 )
    goto LABEL_106;
  itemList = this->fields.itemList;
  v3 = v152;
  if ( !itemList )
    goto LABEL_106;
  v35 = y + v33->fields.arrangementPich.fields.y;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  v41 = *(_QWORD *)&v20->max_length;
  index = 1;
  if ( (int)v41 >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)v41 )
      {
LABEL_107:
        sub_B17100(DropItemList, v37, v38);
        sub_B170A0();
      }
      v43 = (System_Int32_array **)v20->m_Items[v42];
      v44 = sub_B170CC(PartyOrganizationEventPointListViewItem_TypeInfo, v37, v38, v39, v40);
      *(_DWORD *)(v44 + 136) = 1;
      ListViewItem___ctor_30173668((ListViewItem_o *)v44, v42 + 1, 0LL);
      *(_QWORD *)(v44 + 128) = v43;
      sub_B16F98((BattleServantConfConponent_o *)(v44 + 128), v43, v45, v46, v47, v48, v49, v50);
      *(_DWORD *)(v44 + 136) = 0;
      if ( !v44 )
        goto LABEL_106;
      *(float *)(v44 + 92) = x;
      *(float *)(v44 + 96) = v35;
      *(float *)(v44 + 100) = z;
      v51 = this->fields.seed;
      if ( !v51 )
        goto LABEL_106;
      v52 = this->fields.itemList;
      if ( !v52 )
        goto LABEL_106;
      v35 = v35 + v51->fields.arrangementPich.fields.y;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v41) = v20->max_length;
      ++v42;
    }
    while ( (__int64)v42 < (int)v41 );
    v3 = v152;
    index = v42 + 1;
  }
  v12 = this;
  v53 = this->fields.lineObj;
  if ( !v53
    || (transform = UnityEngine_GameObject__get_transform(v53, 0LL)) == 0LL
    || (v160.fields.x = x,
        v160.fields.y = v35,
        v160.fields.z = z,
        UnityEngine_Transform__set_localPosition(transform, v160, 0LL),
        (v55 = this->fields.seed) == 0LL)
    || (v56 = this->fields.lineObj) == 0LL )
  {
LABEL_106:
    sub_B170D4();
  }
  y = v35 + v55->fields.arrangementPich.fields.y;
  UnityEngine_GameObject__SetActive(v56, 1, 0LL);
LABEL_29:
  if ( !eventUpValList )
    goto LABEL_106;
  v59 = sub_B17014(EventDropItemUpValInfo_____TypeInfo, eventUpValList->max_length, v57);
  if ( !eventUpValList )
    goto LABEL_106;
  v61 = (unsigned int *)v59;
  v62 = (System_Int32_array **)sub_B17014(EventMemberMargeUpValInfo___TypeInfo, eventUpValList->max_length, v60);
  v12->fields.eventMargeUpValInfoList = (struct EventMemberMargeUpValInfo_array *)v62;
  p_eventMargeUpValInfoList = (unsigned int **)&v12->fields.eventMargeUpValInfoList;
  sub_B16F98((BattleServantConfConponent_o *)&v12->fields.eventMargeUpValInfoList, v62, v63, v64, v65, v66, v67, v68);
  v70 = eventUpValList;
  if ( !eventUpValList )
    goto LABEL_106;
  v71 = 0LL;
  v72 = (BattleServantConfConponent_o *)(v61 + 8);
  while ( 1 )
  {
    max_length = v70->max_length;
    if ( (__int64)v71 >= (int)max_length )
      break;
    if ( v71 >= max_length )
      goto LABEL_107;
    v38 = v70->m_Items[v71];
    if ( v38 )
    {
      questRestrictionInfo = v3->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_106;
      PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
        (PartyOrganizationEventPointListViewManager_o *)DropItemList,
        v71,
        v38,
        questRestrictionInfo->fields.eventId,
        v69);
      if ( !eventUpValList )
        goto LABEL_106;
      if ( v71 >= eventUpValList->max_length )
        goto LABEL_107;
      v75 = eventUpValList->m_Items[v71];
      if ( !v75 )
        goto LABEL_106;
      DropItemList = (__int64)EventUpValInfo__GetDropItemList(v75, v71, 0LL);
      if ( !v61 )
        goto LABEL_106;
      v81 = (System_Int32_array **)DropItemList;
      if ( DropItemList )
      {
        DropItemList = sub_B170BC(DropItemList, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
        if ( !DropItemList )
        {
LABEL_108:
          sub_B170F4(DropItemList);
          sub_B170A0();
        }
      }
      if ( v71 >= v61[6] )
        goto LABEL_107;
      v72->klass = (BattleServantConfConponent_c *)v81;
      sub_B16F98(v72, v81, (System_String_array **)v38, v76, v77, v78, v79, v80);
      v70 = eventUpValList;
    }
    ++v71;
    v72 = (BattleServantConfConponent_o *)((char *)v72 + 8);
    if ( !v70 )
      goto LABEL_106;
  }
  v82 = (unsigned int **)&v12->fields.eventMargeUpValInfoList;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)eventUpValList->max_length; ++i )
    {
      Member = PartyListViewItem__GetMember(v3, i, 0LL);
      if ( !Member )
        goto LABEL_106;
      v86 = Member;
      if ( Member->fields.isFollower )
      {
        if ( !Member->fields.followerInfo )
          goto LABEL_99;
      }
      else if ( !Member->fields.userServantEntity )
      {
        goto LABEL_99;
      }
      v87 = eventId;
      servantEntity = Member->fields.servantEntity;
      SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(Member, v85);
      v153 = v86;
      isFollower = v86->fields.isFollower;
      v91 = SvtNameText;
      v96 = (EventMemberMargeUpValInfo_o *)sub_B170CC(EventMemberMargeUpValInfo_TypeInfo, v92, v93, v94, v95);
      EventMemberMargeUpValInfo___ctor(v96, v87, i, servantEntity, v91, isFollower, 0LL);
      v102 = *v82;
      if ( !*v82 )
        goto LABEL_106;
      if ( v96 )
      {
        DropItemList = sub_B170BC(v96, *(_QWORD *)(*(_QWORD *)v102 + 64LL));
        if ( !DropItemList )
          goto LABEL_108;
      }
      if ( i >= v102[6] )
        goto LABEL_107;
      v103 = &v102[2 * i];
      *((_QWORD *)v103 + 4) = v96;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v103 + 8),
        (System_Int32_array **)v96,
        (System_String_array **)v38,
        v97,
        v98,
        v99,
        v100,
        v101);
      v104 = eventUpValList;
      if ( !eventUpValList )
        goto LABEL_106;
      v105 = 0LL;
      while ( (__int64)v105 < (int)v104->max_length )
      {
        if ( !v61 )
          goto LABEL_106;
        if ( v105 >= v61[6] )
          goto LABEL_107;
        v37 = *(EventDropItemUpValInfo_array **)&v61[2 * v105 + 8];
        if ( v37 )
        {
          v106 = *v82;
          if ( !*v82 )
            goto LABEL_106;
          if ( i >= v106[6] )
            goto LABEL_107;
          v107 = *(EventMemberMargeUpValInfo_o **)&v106[2 * i + 8];
          if ( !v107 )
            goto LABEL_106;
          EventMemberMargeUpValInfo__Add(v107, v37, 0LL);
          v104 = eventUpValList;
        }
        ++v105;
        if ( !v104 )
          goto LABEL_106;
      }
      if ( !v96 )
        goto LABEL_106;
      if ( EventMemberMargeUpValInfo__IsEmpry(v96, 0LL) )
      {
        v12 = this;
      }
      else
      {
        servantName = (System_Int32_array **)v96->fields.servantName;
        v113 = v153->fields.isFollower;
        v114 = (ListViewItem_o *)sub_B170CC(PartyOrganizationEventPointListViewItem_TypeInfo, v108, v109, v110, v111);
        v115 = index;
        v116 = v114;
        v114[1].fields.sortIndex = 1;
        ListViewItem___ctor_30173668(v114, v115, 0LL);
        v116[1].klass = (ListViewItem_c *)servantName;
        sub_B16F98((BattleServantConfConponent_o *)&v116[1], servantName, v117, v118, v119, v120, v121, v122);
        LOBYTE(v116[1].monitor) = v113;
        v116[1].fields.sortIndex = 1;
        if ( !v116 )
          goto LABEL_106;
        v116->fields.basePosition.fields.x = x;
        v116->fields.basePosition.fields.y = y;
        v12 = this;
        v116->fields.basePosition.fields.z = z;
        v123 = this->fields.seed;
        if ( !v123 )
          goto LABEL_106;
        v124 = this->fields.itemList;
        if ( !v124 )
          goto LABEL_106;
        v125 = v123->fields.arrangementPich.fields.y;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v124,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v116,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        DropItemList = (__int64)EventMemberMargeUpValInfo__GetList(v96, 0LL);
        if ( !DropItemList )
          goto LABEL_106;
        v128 = *(_QWORD *)(DropItemList + 24);
        v129 = DropItemList;
        v130 = y + v125;
        ++index;
        if ( (int)v128 < 1 )
          goto LABEL_96;
        v131 = 0;
        v132 = 0LL;
        v133 = DropItemList + 32;
        v155 = (int)v128;
        while ( 1 )
        {
          v134 = *(_QWORD *)(v133 + 8 * v132);
          if ( !v134 || *(_DWORD *)(v134 + 60) != 111 )
            goto LABEL_86;
          if ( !v153->fields.isFollower )
          {
            v135 = v153->fields.servantEntity;
            if ( !v135 )
              goto LABEL_106;
            DropItemList = ServantEntity__checkIsHeroineSvt(v135, 0LL);
            if ( (DropItemList & 1) == 0
              || (DropItemList = (__int64)v153->fields.userServantEntity) == 0
              || (DropItemList = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)DropItemList, 0LL),
                  (DropItemList & 1) != 0) )
            {
LABEL_86:
              if ( v132 >= *(unsigned int *)(v129 + 24) )
                goto LABEL_107;
              v136 = *(System_Int32_array ***)(v133 + 8 * v132);
              v137 = (ListViewItem_o *)sub_B170CC(
                                         PartyOrganizationEventPointListViewItem_TypeInfo,
                                         v37,
                                         v38,
                                         v126,
                                         v127);
              v138 = index;
              v116 = v137;
              v137[1].fields.sortIndex = 1;
              ListViewItem___ctor_30173668(v137, v138, 0LL);
              *(_QWORD *)&v116[1].fields.selectNum = v136;
              sub_B16F98((BattleServantConfConponent_o *)&v116[1].fields, v136, v139, v140, v141, v142, v143, v144);
              v116[1].fields.sortIndex = 1;
              if ( !v116 )
                goto LABEL_106;
              v116->fields.basePosition.fields.x = x;
              v116->fields.basePosition.fields.y = v130;
              v12 = this;
              v116->fields.basePosition.fields.z = z;
              v145 = this->fields.seed;
              if ( !v145 )
                goto LABEL_106;
              v146 = this->fields.itemList;
              if ( !v146 )
                goto LABEL_106;
              v130 = v130 + v145->fields.arrangementPich.fields.y;
              ++index;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v146,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v116,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              ++v131;
            }
          }
          if ( (__int64)++v132 >= v155 )
            break;
          if ( v132 >= *(unsigned int *)(v129 + 24) )
            goto LABEL_107;
        }
        if ( v131 )
        {
          v82 = p_eventMargeUpValInfoList;
          v3 = v152;
          y = v130 + -8.0;
        }
        else
        {
LABEL_96:
          v82 = p_eventMargeUpValInfoList;
          v3 = v152;
          v147 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12->fields.itemList;
          if ( !v147 )
            goto LABEL_106;
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            v147,
            (WarBoardManager_TaskList_o *)v116,
            (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
          v148 = v12->fields.seed;
          if ( !v148 )
            goto LABEL_106;
          y = v130 - v148->fields.arrangementPich.fields.y;
        }
      }
LABEL_99:
      if ( !eventUpValList )
        goto LABEL_106;
    }
  }
LABEL_101:
  emptyMessageLabel = v12->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v150 = LocalizationManager__Get((System_String_o *)StringLiteral_10303, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_106;
  UILabel__set_text(emptyMessageLabel, v150, 0LL);
  ListViewManager__DispItem((ListViewManager_o *)v12, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.eventMargeUpValInfoList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfoList, 0LL, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationEventPointListViewItem_o *__fastcall PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FDC65 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&PartyOrganizationEventPointListViewItem_TypeInfo, v5);
    byte_40FDC65 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&PartyOrganizationEventPointListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (PartyOrganizationEventPointListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == PartyOrganizationEventPointListViewItem_TypeInfo )
    return (PartyOrganizationEventPointListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_array *__fastcall PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t eventId,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  EventPartyMargeUpValInfo_o *v19; // x21
  EventMargeItemUpValInfo_array *EventUpVal; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x4
  EventUpValInfo_array *v24; // x8
  unsigned __int64 v25; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v27; // x9
  EventUpValInfo_o *v28; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  int v31; // w8
  EventMargeItemUpValInfo_array *v32; // x20
  __int64 v33; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x21
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-34h] BYREF

  eventIda = eventId;
  if ( (byte_40FDC63 & 1) == 0 )
  {
    sub_B16FFC(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v10);
    byte_40FDC63 = 1;
  }
  eventUpValList = 0LL;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  partyItem,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_27;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v19 = (EventPartyMargeUpValInfo_o *)sub_B170CC(EventPartyMargeUpValInfo_TypeInfo, v15, v16, v17, v18);
  EventPartyMargeUpValInfo___ctor(v19, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (EventMargeItemUpValInfo_array *)PartyListViewItem__GetEventUpVal(
                                                  partyItem,
                                                  &eventIda,
                                                  &eventUpValList,
                                                  0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v24 = eventUpValList;
    if ( !eventUpValList )
      goto LABEL_27;
    v25 = 0LL;
    while ( 1 )
    {
      max_length = v24->max_length;
      if ( (__int64)v25 >= (int)max_length )
        break;
      if ( v25 >= max_length )
        goto LABEL_28;
      v27 = &v24->obj.klass + v25;
      v28 = (EventUpValInfo_o *)v27[4];
      if ( v28 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_27;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v25,
          (EventUpValInfo_o *)v27[4],
          questRestrictionInfo->fields.eventId,
          v23);
        DropItemList = EventUpValInfo__GetDropItemList(v28, v25, 0LL);
        if ( !v19 )
          goto LABEL_27;
        EventPartyMargeUpValInfo__Add(v19, DropItemList, 0LL);
        v24 = eventUpValList;
      }
      ++v25;
      if ( !v24 )
        goto LABEL_27;
    }
  }
  if ( !v19 )
    goto LABEL_27;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v19, 0LL);
  if ( EventUpVal )
  {
    v31 = EventUpVal->max_length;
    v32 = EventUpVal;
    if ( v31 >= 1 )
    {
      v33 = 0LL;
      while ( (unsigned int)v33 < v31 )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)v32->m_Items[v33];
        if ( !v34 )
          goto LABEL_27;
        EventUpVal = (EventMargeItemUpValInfo_array *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                                                        v32->m_Items[v33],
                                                        0LL);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v11 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            v34,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        v31 = v32->max_length;
        if ( (int)++v33 >= v31 )
          goto LABEL_25;
      }
LABEL_28:
      sub_B17100(EventUpVal, v21, v22);
      sub_B170A0();
    }
  }
LABEL_25:
  if ( !v11 )
LABEL_27:
    sub_B170D4();
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void __fastcall PartyOrganizationEventPointListViewManager__OnMoveEnd(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FDC6A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDC6A = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t idx,
        EventUpValInfo_o *eventUpVal,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v17; // x22
  PartyOrganizationUtility_o *v18; // x0
  WebViewManager_o *v19; // x0
  ServantSkillMaster_o *v20; // x22
  WebViewManager_o *v21; // x0
  WarQuestSelectionMaster_o *v22; // x0
  SkillLvMaster_o *v23; // x21
  void *ServantSkillList; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int v27; // w8
  void *v28; // x22
  unsigned int v29; // w25
  __int64 v30; // x8
  System_Int32_array **v31; // x23
  int v32; // w8
  void *v33; // x24
  unsigned int v34; // w27
  __int64 v35; // x28
  __int64 v36; // x8
  __int64 v37; // x8
  int32_t actMaxRarity; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FDC62 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    byte_40FDC62 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !MasterData_WarQuestSelectionMaster )
    goto LABEL_36;
  Entity = ServantLimitMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0LL);
  if ( Entity )
  {
    v17 = Entity;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v18 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v18 )
      goto LABEL_36;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           v18,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v17->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0LL) )
    {
      v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v19 )
        goto LABEL_36;
      v20 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v19,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v21 )
        goto LABEL_36;
      v22 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v21,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v20 )
        goto LABEL_36;
      v23 = (SkillLvMaster_o *)v22;
      ServantSkillList = ServantSkillMaster__getServantSkillList(v20, eventUpVal->fields.equipSvtId, 0LL);
      if ( !ServantSkillList )
        goto LABEL_36;
      v27 = *((_DWORD *)ServantSkillList + 6);
      v28 = ServantSkillList;
      if ( v27 >= 1 )
      {
        v29 = 0;
        while ( 1 )
        {
          if ( v29 >= v27 )
          {
LABEL_37:
            sub_B17100(ServantSkillList, v25, v26);
            sub_B170A0();
          }
          v30 = *((_QWORD *)v28 + (int)v29 + 4);
          if ( !v30 )
            break;
          if ( *(_DWORD *)(v30 + 48) )
          {
            if ( !v23 )
              break;
            ServantSkillList = SkillLvMaster__GetEntity(v23, *(_DWORD *)(v30 + 28), 1, 0LL);
            if ( ServantSkillList )
            {
              v31 = (System_Int32_array **)ServantSkillList;
              ServantSkillList = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0LL);
              if ( !ServantSkillList )
                break;
              v32 = *((_DWORD *)ServantSkillList + 6);
              v33 = ServantSkillList;
              if ( v32 >= 1 )
              {
                v34 = 0;
                while ( 1 )
                {
                  if ( v34 >= v32 )
                    goto LABEL_37;
                  v35 = *((_QWORD *)v33 + (int)v34 + 4);
                  if ( !v35 )
                    goto LABEL_36;
                  v36 = *(_QWORD *)(v35 + 24);
                  if ( !v36 )
                    goto LABEL_36;
                  ServantSkillList = (void *)System_Array__IndexOf_int_(
                                               v31[4],
                                               *(_DWORD *)(v36 + 16),
                                               (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)ServantSkillList & 0x80000000) == 0 )
                    break;
                  v32 = *((_DWORD *)v33 + 6);
                  if ( (int)++v34 >= v32 )
                    goto LABEL_34;
                }
                v37 = *(_QWORD *)(v35 + 24);
                if ( !v37 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v37 + 16), 0LL);
              }
            }
          }
LABEL_34:
          v27 = *((_DWORD *)v28 + 6);
          if ( (int)++v29 >= v27 )
            return;
        }
LABEL_36:
        sub_B170D4();
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDC68 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FDC68 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(
        v21,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationEventPointListViewObject__Init(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_32293348(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDC69 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FDC69 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(
        v19,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationEventPointListViewObject__Init(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_32292804(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32292804(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w1
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *ClippingObjectList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t size; // w8
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *v18; // x20
  int v19; // w26
  __int64 v20; // x23
  PartyOrganizationEventPointListViewObject_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3
  float v24; // s0
  int v25; // s1
  int32_t v28; // w1

  if ( (byte_40FDC67 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v6);
    sub_B16FFC(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&StringLiteral_10004, v8);
    byte_40FDC67 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode != 3 )
  {
    if ( mode == 2 )
    {
      v11 = 3;
      goto LABEL_20;
    }
    if ( mode == 1 )
    {
      v11 = 2;
LABEL_20:
      PartyOrganizationEventPointListViewManager__RequestListObject_32293348(this, v11, v10);
      return;
    }
    return;
  }
  ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v9);
  if ( !ClippingObjectList )
LABEL_22:
    sub_B170D4();
  size = ClippingObjectList->fields._size;
  v18 = ClippingObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
    return;
  }
  this->fields.callbackCount = size;
  v19 = ClippingObjectList->fields._size;
  if ( v19 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v19 <= (unsigned int)v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v21 = v18->fields._items->m_Items[v20];
      v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
      System_Action___ctor(
        v22,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !v21 )
        break;
      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
      if ( (int)v20 >= v19 - 1 )
        v28 = 5;
      else
        v28 = 2;
      PartyOrganizationEventPointListViewObject__Init(v21, v28, v22, v24, *(UnityEngine_Vector3_o *)&v25, v23);
      v19 = v18->fields._size;
      if ( (int)++v20 >= v19 )
        return;
    }
    goto LABEL_22;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32293292(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_32292804(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetObjectItem(
        PartyOrganizationEventPointListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FDC66 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationEventPointListViewObject_TypeInfo, obj);
    byte_40FDC66 = 1;
  }
  if ( !obj
    || (v6 = *(&PartyOrganizationEventPointListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  PartyOrganizationEventPointListViewObject__Init(
    (PartyOrganizationEventPointListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall PartyOrganizationEventPointListViewManager__add_callbackFunc(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationEventPointListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationEventPointListViewManager_o *v10; // x0
  PartyOrganizationEventPointListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FDC5C & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FDC5C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationEventPointListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall PartyOrganizationEventPointListViewManager__add_callbackFunc2(
        PartyOrganizationEventPointListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationEventPointListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FDC5E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDC5E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  PartyOrganizationEventPointListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FDC61 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FDC61 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (PartyOrganizationEventPointListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)current,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v14;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FDC60 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FDC60 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v14;
}


void __fastcall PartyOrganizationEventPointListViewManager__remove_callbackFunc(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationEventPointListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationEventPointListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FDC5D & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FDC5D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationEventPointListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  PartyOrganizationEventPointListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall PartyOrganizationEventPointListViewManager__remove_callbackFunc2(
        PartyOrganizationEventPointListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationEventPointListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FDC5F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDC5F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  PartyOrganizationEventPointListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc___ctor(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_40F8378 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9);
    byte_40F8378 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__Invoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PartyOrganizationEventPointListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationEventPointListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationEventPointListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationEventPointListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}