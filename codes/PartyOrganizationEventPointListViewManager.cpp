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
  __int64 seed; // x0
  MethodInfo *v14; // x1
  float x; // s8
  float y; // s10
  float z; // s9
  PartyOrganizationEventPointListViewManager_o *v18; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x22
  System_Int32_array **v21; // x23
  __int64 v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ListViewItemSeed_o *v29; // x8
  float v30; // s10
  __int64 v31; // x8
  unsigned __int64 v32; // x21
  System_Int32_array **v33; // x24
  __int64 v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ListViewItemSeed_o *v41; // x8
  struct ListViewItemSeed_o *v42; // x8
  unsigned int *v43; // x22
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x4
  EventUpValInfo_array *v52; // x8
  unsigned __int64 v53; // x24
  BattleServantConfConponent_o *v54; // x25
  unsigned __int64 max_length; // x9
  EventUpValInfo_o *v56; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x26
  unsigned int **v65; // x25
  unsigned __int64 i; // x24
  __int64 v67; // x20
  int32_t v68; // w26
  ServantEntity_o *v69; // x28
  System_String_o *SvtNameText; // x0
  char v71; // w20
  System_String_o *v72; // x19
  EventMemberMargeUpValInfo_o *v73; // x27
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  unsigned int *v80; // x19
  unsigned int *v81; // x0
  EventUpValInfo_array *v82; // x8
  unsigned __int64 v83; // x19
  unsigned int *v84; // x8
  System_Int32_array **servantName; // x19
  char v86; // w20
  ListViewItem_o *v87; // x0
  int32_t v88; // w1
  ListViewItem_o *v89; // x26
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct ListViewItemSeed_o *v96; // x8
  float v97; // s12
  __int64 v98; // x8
  __int64 v99; // x27
  float v100; // s10
  int v101; // w20
  unsigned __int64 v102; // x28
  __int64 v103; // x25
  __int64 v104; // x8
  System_Int32_array **v105; // x19
  ListViewItem_o *v106; // x0
  int32_t v107; // w1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct ListViewItemSeed_o *v114; // x8
  struct ListViewItemSeed_o *v115; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v117; // x0
  __int64 v118; // x0
  unsigned int **p_eventMargeUpValInfoList; // [xsp+0h] [xbp-B0h]
  PartyListViewItem_o *v120; // [xsp+8h] [xbp-A8h]
  __int64 v121; // [xsp+10h] [xbp-A0h]
  signed __int64 v123; // [xsp+20h] [xbp-90h]
  EventUpValInfo_array *eventUpValList; // [xsp+28h] [xbp-88h] BYREF
  int32_t index; // [xsp+38h] [xbp-78h]
  int32_t eventId; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4

  v3 = partyItem;
  if ( (byte_418B6C7 & 1) == 0 )
  {
    sub_B2C35C(&EventDropItemUpValInfo_____TypeInfo, partyItem);
    sub_B2C35C(&EventMemberMargeUpValInfo___TypeInfo, v4);
    sub_B2C35C(&EventMemberMargeUpValInfo_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&PartyOrganizationEventPointListViewItem_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_10426/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, v10);
    sub_B2C35C(&StringLiteral_10336/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, v11);
    byte_418B6C7 = 1;
  }
  v12 = this;
  eventId = 0;
  eventUpValList = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v3 )
    goto LABEL_106;
  if ( !PartyListViewItem__GetEventUpVal(v3, &eventId, &eventUpValList, 0LL) )
    goto LABEL_101;
  seed = (__int64)this->fields.seed;
  if ( !seed )
    goto LABEL_106;
  LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  seed = (__int64)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(v18, eventId, v3, v19);
  if ( !seed )
    goto LABEL_106;
  v20 = seed;
  v120 = v3;
  if ( !*(_QWORD *)(seed + 24) )
  {
    seed = (__int64)this->fields.lineObj;
    if ( !seed )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 0, 0LL);
    index = 0;
    goto LABEL_29;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_10426/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
  v22 = sub_B2C42C(PartyOrganizationEventPointListViewItem_TypeInfo);
  *(_DWORD *)(v22 + 136) = 1;
  ListViewItem___ctor_24128628((ListViewItem_o *)v22, 0, 0LL);
  *(_QWORD *)(v22 + 112) = v21;
  sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 112), v21, v23, v24, v25, v26, v27, v28);
  *(_BYTE *)(v22 + 120) = 0;
  *(_DWORD *)(v22 + 136) = 0;
  if ( !v22 )
    goto LABEL_106;
  *(float *)(v22 + 92) = x;
  *(float *)(v22 + 96) = y;
  *(float *)(v22 + 100) = z;
  v29 = this->fields.seed;
  if ( !v29 )
    goto LABEL_106;
  seed = (__int64)this->fields.itemList;
  v3 = v120;
  if ( !seed )
    goto LABEL_106;
  v30 = y + v29->fields.arrangementPich.fields.y;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  v31 = *(_QWORD *)(v20 + 24);
  index = 1;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v31 )
      {
LABEL_107:
        v117 = sub_B2C460(seed);
        sub_B2C400(v117, 0LL);
      }
      v33 = *(System_Int32_array ***)(v20 + 32 + 8 * v32);
      v34 = sub_B2C42C(PartyOrganizationEventPointListViewItem_TypeInfo);
      *(_DWORD *)(v34 + 136) = 1;
      ListViewItem___ctor_24128628((ListViewItem_o *)v34, v32 + 1, 0LL);
      *(_QWORD *)(v34 + 128) = v33;
      sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 128), v33, v35, v36, v37, v38, v39, v40);
      *(_DWORD *)(v34 + 136) = 0;
      if ( !v34 )
        goto LABEL_106;
      *(float *)(v34 + 92) = x;
      *(float *)(v34 + 96) = v30;
      *(float *)(v34 + 100) = z;
      v41 = this->fields.seed;
      if ( !v41 )
        goto LABEL_106;
      seed = (__int64)this->fields.itemList;
      if ( !seed )
        goto LABEL_106;
      v30 = v30 + v41->fields.arrangementPich.fields.y;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v31) = *(_DWORD *)(v20 + 24);
      ++v32;
    }
    while ( (__int64)v32 < (int)v31 );
    v3 = v120;
    index = v32 + 1;
  }
  v12 = this;
  seed = (__int64)this->fields.lineObj;
  if ( !seed
    || (seed = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seed, 0LL)) == 0
    || (v128.fields.x = x,
        v128.fields.y = v30,
        v128.fields.z = z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)seed, v128, 0LL),
        (v42 = this->fields.seed) == 0LL)
    || (seed = (__int64)this->fields.lineObj) == 0 )
  {
LABEL_106:
    sub_B2C434(seed, v14);
  }
  y = v30 + v42->fields.arrangementPich.fields.y;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 1, 0LL);
LABEL_29:
  if ( !eventUpValList )
    goto LABEL_106;
  seed = sub_B2C374(EventDropItemUpValInfo_____TypeInfo, eventUpValList->max_length);
  if ( !eventUpValList )
    goto LABEL_106;
  v43 = (unsigned int *)seed;
  v44 = (System_Int32_array **)sub_B2C374(EventMemberMargeUpValInfo___TypeInfo, eventUpValList->max_length);
  v12->fields.eventMargeUpValInfoList = (struct EventMemberMargeUpValInfo_array *)v44;
  p_eventMargeUpValInfoList = (unsigned int **)&v12->fields.eventMargeUpValInfoList;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->fields.eventMargeUpValInfoList, v44, v45, v46, v47, v48, v49, v50);
  v52 = eventUpValList;
  if ( !eventUpValList )
    goto LABEL_106;
  v53 = 0LL;
  v54 = (BattleServantConfConponent_o *)(v43 + 8);
  while ( 1 )
  {
    max_length = v52->max_length;
    if ( (__int64)v53 >= (int)max_length )
      break;
    if ( v53 >= max_length )
      goto LABEL_107;
    v56 = v52->m_Items[v53];
    if ( v56 )
    {
      questRestrictionInfo = v3->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_106;
      PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
        (PartyOrganizationEventPointListViewManager_o *)seed,
        v53,
        v56,
        questRestrictionInfo->fields.eventId,
        v51);
      if ( !eventUpValList )
        goto LABEL_106;
      if ( v53 >= eventUpValList->max_length )
        goto LABEL_107;
      seed = (__int64)eventUpValList->m_Items[v53];
      if ( !seed )
        goto LABEL_106;
      seed = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)seed, v53, 0LL);
      if ( !v43 )
        goto LABEL_106;
      v64 = (System_Int32_array **)seed;
      if ( seed )
      {
        seed = sub_B2C41C(seed, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
        if ( !seed )
        {
LABEL_108:
          v118 = sub_B2C454(seed);
          sub_B2C400(v118, 0LL);
        }
      }
      if ( v53 >= v43[6] )
        goto LABEL_107;
      v54->klass = (BattleServantConfConponent_c *)v64;
      sub_B2C2F8(v54, v64, v58, v59, v60, v61, v62, v63);
      v52 = eventUpValList;
    }
    ++v53;
    v54 = (BattleServantConfConponent_o *)((char *)v54 + 8);
    if ( !v52 )
      goto LABEL_106;
  }
  v65 = (unsigned int **)&v12->fields.eventMargeUpValInfoList;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)eventUpValList->max_length; ++i )
    {
      seed = (__int64)PartyListViewItem__GetMember(v3, i, 0LL);
      if ( !seed )
        goto LABEL_106;
      v67 = seed;
      if ( *(_BYTE *)(seed + 128) )
      {
        if ( !*(_QWORD *)(seed + 120) )
          goto LABEL_99;
      }
      else if ( !*(_QWORD *)(seed + 112) )
      {
        goto LABEL_99;
      }
      v68 = eventId;
      v69 = *(ServantEntity_o **)(seed + 168);
      SvtNameText = PartyOrganizationListViewItem__get_SvtNameText((PartyOrganizationListViewItem_o *)seed, v14);
      v121 = v67;
      v71 = *(_BYTE *)(v67 + 128);
      v72 = SvtNameText;
      v73 = (EventMemberMargeUpValInfo_o *)sub_B2C42C(EventMemberMargeUpValInfo_TypeInfo);
      EventMemberMargeUpValInfo___ctor(v73, v68, i, v69, v72, v71, 0LL);
      v80 = *v65;
      if ( !*v65 )
        goto LABEL_106;
      if ( v73 )
      {
        seed = sub_B2C41C(v73, *(_QWORD *)(*(_QWORD *)v80 + 64LL));
        if ( !seed )
          goto LABEL_108;
      }
      if ( i >= v80[6] )
        goto LABEL_107;
      v81 = &v80[2 * i];
      *((_QWORD *)v81 + 4) = v73;
      sub_B2C2F8((BattleServantConfConponent_o *)(v81 + 8), (System_Int32_array **)v73, v74, v75, v76, v77, v78, v79);
      v82 = eventUpValList;
      if ( !eventUpValList )
        goto LABEL_106;
      v83 = 0LL;
      while ( (__int64)v83 < (int)v82->max_length )
      {
        if ( !v43 )
          goto LABEL_106;
        if ( v83 >= v43[6] )
          goto LABEL_107;
        v14 = *(MethodInfo **)&v43[2 * v83 + 8];
        if ( v14 )
        {
          v84 = *v65;
          if ( !*v65 )
            goto LABEL_106;
          if ( i >= v84[6] )
            goto LABEL_107;
          seed = *(_QWORD *)&v84[2 * i + 8];
          if ( !seed )
            goto LABEL_106;
          EventMemberMargeUpValInfo__Add((EventMemberMargeUpValInfo_o *)seed, (EventDropItemUpValInfo_array *)v14, 0LL);
          v82 = eventUpValList;
        }
        ++v83;
        if ( !v82 )
          goto LABEL_106;
      }
      if ( !v73 )
        goto LABEL_106;
      seed = EventMemberMargeUpValInfo__IsEmpry(v73, 0LL);
      if ( (seed & 1) != 0 )
      {
        v12 = this;
      }
      else
      {
        servantName = (System_Int32_array **)v73->fields.servantName;
        v86 = *(_BYTE *)(v121 + 128);
        v87 = (ListViewItem_o *)sub_B2C42C(PartyOrganizationEventPointListViewItem_TypeInfo);
        v88 = index;
        v89 = v87;
        v87[1].fields.sortIndex = 1;
        ListViewItem___ctor_24128628(v87, v88, 0LL);
        v89[1].klass = (ListViewItem_c *)servantName;
        sub_B2C2F8((BattleServantConfConponent_o *)&v89[1], servantName, v90, v91, v92, v93, v94, v95);
        LOBYTE(v89[1].monitor) = v86;
        v89[1].fields.sortIndex = 1;
        if ( !v89 )
          goto LABEL_106;
        v89->fields.basePosition.fields.x = x;
        v89->fields.basePosition.fields.y = y;
        v12 = this;
        v89->fields.basePosition.fields.z = z;
        v96 = this->fields.seed;
        if ( !v96 )
          goto LABEL_106;
        seed = (__int64)this->fields.itemList;
        if ( !seed )
          goto LABEL_106;
        v97 = v96->fields.arrangementPich.fields.y;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        seed = (__int64)EventMemberMargeUpValInfo__GetList(v73, 0LL);
        if ( !seed )
          goto LABEL_106;
        v98 = *(_QWORD *)(seed + 24);
        v99 = seed;
        v100 = y + v97;
        ++index;
        if ( (int)v98 < 1 )
          goto LABEL_96;
        v101 = 0;
        v102 = 0LL;
        v103 = seed + 32;
        v123 = (int)v98;
        while ( 1 )
        {
          v104 = *(_QWORD *)(v103 + 8 * v102);
          if ( !v104 || *(_DWORD *)(v104 + 60) != 111 )
            goto LABEL_86;
          if ( !*(_BYTE *)(v121 + 128) )
          {
            seed = *(_QWORD *)(v121 + 168);
            if ( !seed )
              goto LABEL_106;
            seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
            if ( (seed & 1) == 0
              || (seed = *(_QWORD *)(v121 + 112)) == 0
              || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL), (seed & 1) != 0) )
            {
LABEL_86:
              if ( v102 >= *(unsigned int *)(v99 + 24) )
                goto LABEL_107;
              v105 = *(System_Int32_array ***)(v103 + 8 * v102);
              v106 = (ListViewItem_o *)sub_B2C42C(PartyOrganizationEventPointListViewItem_TypeInfo);
              v107 = index;
              v89 = v106;
              v106[1].fields.sortIndex = 1;
              ListViewItem___ctor_24128628(v106, v107, 0LL);
              *(_QWORD *)&v89[1].fields.selectNum = v105;
              sub_B2C2F8((BattleServantConfConponent_o *)&v89[1].fields, v105, v108, v109, v110, v111, v112, v113);
              v89[1].fields.sortIndex = 1;
              if ( !v89 )
                goto LABEL_106;
              v89->fields.basePosition.fields.x = x;
              v89->fields.basePosition.fields.y = v100;
              v12 = this;
              v89->fields.basePosition.fields.z = z;
              v114 = this->fields.seed;
              if ( !v114 )
                goto LABEL_106;
              seed = (__int64)this->fields.itemList;
              if ( !seed )
                goto LABEL_106;
              v100 = v100 + v114->fields.arrangementPich.fields.y;
              ++index;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              ++v101;
            }
          }
          if ( (__int64)++v102 >= v123 )
            break;
          if ( v102 >= *(unsigned int *)(v99 + 24) )
            goto LABEL_107;
        }
        if ( v101 )
        {
          v65 = p_eventMargeUpValInfoList;
          v3 = v120;
          y = v100 + -8.0;
        }
        else
        {
LABEL_96:
          v65 = p_eventMargeUpValInfoList;
          v3 = v120;
          seed = (__int64)v12->fields.itemList;
          if ( !seed )
            goto LABEL_106;
          seed = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)seed,
                   (WarBoardManager_TaskList_o *)v89,
                   (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
          v115 = v12->fields.seed;
          if ( !v115 )
            goto LABEL_106;
          y = v100 - v115->fields.arrangementPich.fields.y;
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
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10336/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_106;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfoList, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_418B6C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&PartyOrganizationEventPointListViewItem_TypeInfo, v5);
    byte_418B6C8 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  void *EventUpVal; // x0
  __int64 v12; // x1
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  EventPartyMargeUpValInfo_o *v16; // x21
  const MethodInfo *v17; // x4
  EventUpValInfo_array *v18; // x8
  unsigned __int64 v19; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v21; // x9
  EventUpValInfo_o *v22; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v24; // w8
  void *v25; // x20
  __int64 v26; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x21
  __int64 v29; // x0
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-34h] BYREF

  eventIda = eventId;
  if ( (byte_418B6C6 & 1) == 0 )
  {
    sub_B2C35C(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v9);
    byte_418B6C6 = 1;
  }
  eventUpValList = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_27;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v16 = (EventPartyMargeUpValInfo_o *)sub_B2C42C(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v16, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &eventUpValList, 0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v18 = eventUpValList;
    if ( !eventUpValList )
      goto LABEL_27;
    v19 = 0LL;
    while ( 1 )
    {
      max_length = v18->max_length;
      if ( (__int64)v19 >= (int)max_length )
        break;
      if ( v19 >= max_length )
        goto LABEL_28;
      v21 = &v18->obj.klass + v19;
      v22 = (EventUpValInfo_o *)v21[4];
      if ( v22 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_27;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v19,
          (EventUpValInfo_o *)v21[4],
          questRestrictionInfo->fields.eventId,
          v17);
        EventUpVal = EventUpValInfo__GetDropItemList(v22, v19, 0LL);
        if ( !v16 )
          goto LABEL_27;
        EventPartyMargeUpValInfo__Add(v16, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v18 = eventUpValList;
      }
      ++v19;
      if ( !v18 )
        goto LABEL_27;
    }
  }
  if ( !v16 )
    goto LABEL_27;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v16, 0LL);
  if ( EventUpVal )
  {
    v24 = *((_DWORD *)EventUpVal + 6);
    v25 = EventUpVal;
    if ( v24 >= 1 )
    {
      v26 = 0LL;
      while ( (unsigned int)v26 < v24 )
      {
        v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v25 + v26 + 4);
        if ( !v27 )
          goto LABEL_27;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v25 + v26 + 4),
                               0LL);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v10 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            v27,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        v24 = *((_DWORD *)v25 + 6);
        if ( (int)++v26 >= v24 )
          goto LABEL_25;
      }
LABEL_28:
      v29 = sub_B2C460(EventUpVal);
      sub_B2C400(v29, 0LL);
    }
  }
LABEL_25:
  if ( !v10 )
LABEL_27:
    sub_B2C434(EventUpVal, v12);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void __fastcall PartyOrganizationEventPointListViewManager__OnMoveEnd(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_418B6CD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B6CD = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  void *Instance; // x0
  __int64 v15; // x1
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v17; // x22
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  SkillLvMaster_o *v19; // x21
  int v20; // w8
  void *v21; // x22
  unsigned int v22; // w25
  __int64 v23; // x8
  System_Int32_array **v24; // x23
  int v25; // w8
  void *v26; // x24
  unsigned int v27; // w27
  __int64 v28; // x28
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x0
  int32_t actMaxRarity; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418B6C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    byte_418B6C5 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_36;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
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
    Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           (PartyOrganizationUtility_o *)Instance,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v17->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_36;
      v19 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   MasterData_WarQuestSelectionMaster,
                   eventUpVal->fields.equipSvtId,
                   0LL);
      if ( !Instance )
        goto LABEL_36;
      v20 = *((_DWORD *)Instance + 6);
      v21 = Instance;
      if ( v20 >= 1 )
      {
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= v20 )
          {
LABEL_37:
            v31 = sub_B2C460(Instance);
            sub_B2C400(v31, 0LL);
          }
          v23 = *((_QWORD *)v21 + (int)v22 + 4);
          if ( !v23 )
            break;
          if ( *(_DWORD *)(v23 + 48) )
          {
            if ( !v19 )
              break;
            Instance = SkillLvMaster__GetEntity(v19, *(_DWORD *)(v23 + 28), 1, 0LL);
            if ( Instance )
            {
              v24 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0LL);
              if ( !Instance )
                break;
              v25 = *((_DWORD *)Instance + 6);
              v26 = Instance;
              if ( v25 >= 1 )
              {
                v27 = 0;
                while ( 1 )
                {
                  if ( v27 >= v25 )
                    goto LABEL_37;
                  v28 = *((_QWORD *)v26 + (int)v27 + 4);
                  if ( !v28 )
                    goto LABEL_36;
                  v29 = *(_QWORD *)(v28 + 24);
                  if ( !v29 )
                    goto LABEL_36;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v24[4],
                                       *(_DWORD *)(v29 + 16),
                                       (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v25 = *((_DWORD *)v26 + 6);
                  if ( (int)++v27 >= v25 )
                    goto LABEL_34;
                }
                v30 = *(_QWORD *)(v28 + 24);
                if ( !v30 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v30 + 16), 0LL);
              }
            }
          }
LABEL_34:
          v20 = *((_DWORD *)v21 + 6);
          if ( (int)++v22 >= v20 )
            return;
        }
LABEL_36:
        sub_B2C434(Instance, v15);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B6CB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418B6CB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationEventPointListViewObject__Init(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_32194308(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B6CC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418B6CC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationEventPointListViewObject__Init(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_32193764(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32193764(
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
  int32_t size; // w8
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *v15; // x20
  int v16; // w26
  __int64 v17; // x23
  PartyOrganizationEventPointListViewObject_o *v18; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  float v21; // s0
  int v22; // s1
  int32_t v25; // w1

  if ( (byte_418B6CA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v6);
    sub_B2C35C(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v8);
    byte_418B6CA = 1;
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
      PartyOrganizationEventPointListViewManager__RequestListObject_32194308(this, v11, v10);
      return;
    }
    return;
  }
  ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v9);
  if ( !ClippingObjectList )
LABEL_22:
    sub_B2C434(ClippingObjectList, v13);
  size = ClippingObjectList->fields._size;
  v15 = ClippingObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
    return;
  }
  this->fields.callbackCount = size;
  v16 = ClippingObjectList->fields._size;
  if ( v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v16 <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v18 = v15->fields._items->m_Items[v17];
      v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !v18 )
        break;
      *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
      if ( (int)v17 >= v16 - 1 )
        v25 = 5;
      else
        v25 = 2;
      PartyOrganizationEventPointListViewObject__Init(v18, v25, v19, v21, *(UnityEngine_Vector3_o *)&v22, v20);
      v16 = v15->fields._size;
      if ( (int)++v17 >= v16 )
        return;
    }
    goto LABEL_22;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32194252(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_32193764(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetObjectItem(
        PartyOrganizationEventPointListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_418B6C9 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_B2C35C(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             obj);
    byte_418B6C9 = 1;
  }
  if ( !obj
    || (v6 = *(&PartyOrganizationEventPointListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
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

  if ( (byte_418B6BF & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B6BF = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B6C1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B6C1 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  PartyOrganizationEventPointListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418B6C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B6C4 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (PartyOrganizationEventPointListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)current,
                                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v11;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418B6C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B6C3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v11;
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

  if ( (byte_418B6C0 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B6C0 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B6C2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B6C2 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  PartyOrganizationEventPointListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc___ctor(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_418528E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9);
    byte_418528E = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationEventPointListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationEventPointListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}