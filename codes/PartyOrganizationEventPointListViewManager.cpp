void __fastcall PartyOrganizationEventPointListViewManager___ctor(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__CreateList(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x23
  System_Collections_Generic_List_T__o *v6; // x0
  __int64 seed; // x0
  EventDropItemUpValInfo_array *max_length; // x1
  float v9; // s0
  float v10; // s1
  float v11; // s2
  EventUpValInfo_array *v12; // x8
  float v13; // s8
  float v14; // s10
  float v15; // s9
  unsigned __int64 v16; // x22
  EventUpValInfo_o *v17; // x8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x28
  const MethodInfo_22212C8 *v21; // x1
  int v22; // w21
  PartyOrganizationEventPointListViewManager_o *v23; // x0
  const MethodInfo *v24; // x4
  int v25; // w8
  EventDropItemUpValInfo_array *v26; // x28
  signed int v27; // w9
  int32_t v28; // w8
  unsigned int *v29; // x22
  int32_t v30; // w23
  _BOOL8 v31; // x0
  const MethodInfo *v32; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  __int64 v34; // x1
  EventMargeItemUpValInfo_array *v35; // x25
  int32_t v36; // w24
  System_Int32_array **v37; // x27
  __int64 v38; // x26
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x0
  __int64 v46; // x1
  struct ListViewItemSeed_o *v47; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  float v49; // s10
  __int64 v50; // x0
  __int64 v51; // x1
  int v52; // w8
  int32_t v53; // w9
  System_Int32_array **v54; // x27
  __int64 v55; // x26
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x0
  __int64 v63; // x1
  struct ListViewItemSeed_o *v64; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  PartyOrganizationEventPointListViewManager_o *v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x4
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v72; // x1
  __int64 v73; // x0
  __int64 v74; // x1
  struct ListViewItemSeed_o *v75; // x8
  UnityEngine_GameObject_o *v76; // x0
  EventUpValInfo_array *v77; // x8
  unsigned __int64 v78; // x24
  BattleServantConfConponent_o *v79; // x25
  unsigned __int64 v80; // x9
  Il2CppClass **v81; // x9
  EventUpValInfo_o *v82; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x26
  int v93; // w19
  PartyListViewItem_o *v94; // x21
  int v95; // w8
  struct EventMemberMargeUpValInfo_array *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  EventUpValInfo_array *v103; // x8
  unsigned __int64 v104; // x25
  ServantEntity_o *v105; // x28
  int v106; // w26
  __int64 v107; // x19
  System_String_o *SvtNameText; // x0
  char v109; // w21
  System_String_o *v110; // x20
  EventMemberMargeUpValInfo_o *v111; // x27
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  unsigned int *v118; // x19
  unsigned int *v119; // x0
  EventUpValInfo_array *v120; // x8
  unsigned __int64 v121; // x19
  struct EventMemberMargeUpValInfo_array *v122; // x8
  _BOOL8 v123; // x0
  __int64 v124; // x1
  struct EventMemberMargeUpValInfo_array *v125; // x8
  EventMemberMargeUpValInfo_o *v126; // x0
  int v127; // w8
  __int64 v128; // x24
  System_Int32_array **servantName; // x20
  char v130; // w19
  __int64 v131; // x28
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct ListViewItemSeed_o *v138; // x8
  float y; // s12
  __int64 v140; // x8
  __int64 v141; // x27
  float v142; // s10
  int v143; // w21
  unsigned __int64 v144; // x26
  __int64 v145; // x19
  __int64 v146; // x8
  System_Int32_array **v147; // x20
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  struct ListViewItemSeed_o *v154; // x8
  struct ListViewItemSeed_o *v155; // x8
  __int64 v156; // x0
  UILabel_o *emptyMessageLabel; // x20
  __int64 v158; // x0
  __int64 v159; // x0
  __int64 v160; // x0
  __int64 v161; // x0
  __int64 v162; // x0
  __int64 v163; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // [xsp+8h] [xbp-158h]
  int v165; // [xsp+1Ch] [xbp-144h]
  int v166; // [xsp+1Ch] [xbp-144h]
  __int64 v167; // [xsp+20h] [xbp-140h]
  signed __int64 v168; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v169; // [xsp+30h] [xbp-130h]
  PartyOrganizationEventPointListViewManager_o *v170; // [xsp+38h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+40h] [xbp-120h]
  _BYTE v172[36]; // [xsp+48h] [xbp-118h] BYREF
  int v173; // [xsp+6Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+70h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v175; // [xsp+90h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v176; // [xsp+B0h] [xbp-B0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+C8h] [xbp-98h] BYREF
  int32_t eventId[3]; // [xsp+D4h] [xbp-8Ch] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+E8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v180; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4354D4D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_B70694(&EventDropItemUpValInfo_____TypeInfo);
    sub_B70694(&EventMemberMargeUpValInfo___TypeInfo);
    sub_B70694(&EventMemberMargeUpValInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
    sub_B70694(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_B70694(&StringLiteral_10555/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_B70694(&StringLiteral_10461/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_4354D4D = 1;
  }
  eventUpValList = 0LL;
  eventId[0] = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v176, 0, sizeof(v176));
  memset(&v175, 0, sizeof(v175));
  memset(&i, 0, sizeof(i));
  v173 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v169 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v169,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v6 = (System_Collections_Generic_List_T__o *)sub_B70764(System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v6,
    (const MethodInfo_30420C4 *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_152;
  if ( PartyListViewItem__GetEventUpVal(partyItem, eventId, &eventUpValList, 0LL) )
  {
    v170 = this;
    partyItema = partyItem;
    seed = (__int64)this->fields.seed;
    if ( seed )
    {
      *(UnityEngine_Vector3_o *)&v9 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
      v12 = eventUpValList;
      if ( eventUpValList )
      {
        v165 = 0;
        v13 = v9;
        v14 = v10;
        v15 = v11;
        v16 = 0LL;
        while ( 1 )
        {
          max_length = (EventDropItemUpValInfo_array *)v12->max_length;
          if ( (__int64)v16 >= (int)max_length )
            break;
          if ( v16 >= (unsigned __int64)max_length )
            goto LABEL_153;
          v17 = v12->m_Items[v16];
          if ( v17 )
          {
            seed = (__int64)v17->fields.dropList;
            if ( !seed )
              goto LABEL_152;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v172,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)seed,
              (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v176 = *(System_Collections_Generic_List_Enumerator_T__o *)v172;
            while ( 1 )
            {
              v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v176,
                      (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v18 )
                break;
              current = v176.fields.current;
              if ( !v176.fields.current )
                sub_B7076C(v18, v19);
              if ( !v5 )
                sub_B7076C(v18, v19);
              if ( !System_Collections_Generic_List_int___Contains(
                      v5,
                      (int32_t)v176.fields.current[1].klass,
                      (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
                System_Collections_Generic_List_int___Add(
                  v5,
                  (int32_t)current[1].klass,
                  (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            }
            v21 = (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__;
            *(_DWORD *)&v172[4 * v165 + 24] = 153;
            v22 = ++v173;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(&v176, v21);
            if ( v22 )
            {
              v25 = v22 - 1;
              if ( *(_DWORD *)&v172[4 * v22 + 20] == 153 )
              {
                --v22;
                v173 = v25;
              }
            }
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v23,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v16,
                     v24);
            if ( (seed & 1) != 0 )
            {
              v26 = campaignFriendshipUpPoints;
              eventId[0] = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_152;
              v27 = campaignFriendshipUpPoints->max_length;
              if ( v27 >= 1 )
              {
                v28 = 0;
                while ( v28 < (unsigned int)v27 )
                {
                  seed = (__int64)v169;
                  if ( !v169 )
                    goto LABEL_152;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v169,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v26->m_Items[v28],
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
                  v28 = eventId[0] + 1;
                  eventId[0] = v28;
                  v27 = v26->max_length;
                  if ( v28 >= v27 )
                    goto LABEL_28;
                }
LABEL_153:
                v158 = sub_B70798(seed);
                sub_B70738(v158, 0LL);
              }
            }
LABEL_28:
            v165 = v22;
          }
          v12 = eventUpValList;
          ++v16;
          if ( !eventUpValList )
            goto LABEL_152;
        }
        seed = sub_B706AC(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v5 )
        {
          v29 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v172,
            v5,
            (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v30 = 0;
          v175 = *(System_Collections_Generic_List_Enumerator_int__o *)v172;
          while ( 1 )
          {
            v31 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v175,
                    (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v31 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v31,
                                    v175.fields.current,
                                    partyItem,
                                    v32);
            v35 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_B7076C(0LL, v34);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v36 = v30 + 1;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v37 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_10555/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
              v38 = sub_B70764(PartyOrganizationEventPointListViewItem_TypeInfo);
              *(_DWORD *)(v38 + 136) = 1;
              ListViewItem___ctor_23967088((ListViewItem_o *)v38, v30, 0LL);
              *(_QWORD *)(v38 + 112) = v37;
              sub_B70630((BattleServantConfConponent_o *)(v38 + 112), v37, v39, v40, v41, v42, v43, v44);
              *(float *)(v38 + 92) = v13;
              *(float *)(v38 + 96) = v14;
              this = v170;
              *(_BYTE *)(v38 + 120) = 0;
              *(_DWORD *)(v38 + 136) = 0;
              *(float *)(v38 + 100) = v15;
              v47 = v170->fields.seed;
              if ( !v47 )
                sub_B7076C(v45, v46);
              itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v170->fields.itemList;
              v49 = v14 + v47->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_B7076C(0LL, v46);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                itemList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              eventId[0] = 0;
              v52 = v35->max_length;
              if ( v52 < 1 )
              {
                ++v30;
              }
              else
              {
                v53 = 0;
                do
                {
                  if ( v53 >= (unsigned int)v52 )
                  {
                    v161 = sub_B70798(v50);
                    sub_B70738(v161, 0LL);
                  }
                  v54 = (System_Int32_array **)v35->m_Items[v53];
                  v30 = v36 + 1;
                  v55 = sub_B70764(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v55 + 136) = 1;
                  ListViewItem___ctor_23967088((ListViewItem_o *)v55, v36, 0LL);
                  *(_QWORD *)(v55 + 128) = v54;
                  sub_B70630((BattleServantConfConponent_o *)(v55 + 128), v54, v56, v57, v58, v59, v60, v61);
                  *(float *)(v55 + 92) = v13;
                  *(float *)(v55 + 96) = v49;
                  this = v170;
                  *(_DWORD *)(v55 + 136) = 0;
                  *(float *)(v55 + 100) = v15;
                  v64 = v170->fields.seed;
                  if ( !v64 )
                    sub_B7076C(v62, v63);
                  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v170->fields.itemList;
                  v49 = v49 + v64->fields.arrangementPich.fields.y;
                  if ( !v65 )
                    sub_B7076C(0LL, v63);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v65,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  ++v36;
                  v53 = eventId[0] + 1;
                  eventId[0] = v53;
                  v52 = v35->max_length;
                }
                while ( v53 < v52 );
              }
              lineObj = this->fields.lineObj;
              if ( !lineObj )
                sub_B7076C(0LL, v51);
              transform = UnityEngine_GameObject__get_transform(lineObj, 0LL);
              if ( !transform )
                sub_B7076C(0LL, v72);
              v180.fields.x = v13;
              v180.fields.y = v49;
              v180.fields.z = v15;
              UnityEngine_Transform__set_localPosition(transform, v180, 0LL);
              v75 = this->fields.seed;
              if ( !v75 )
                sub_B7076C(v73, v74);
              v76 = this->fields.lineObj;
              v14 = v49 + v75->fields.arrangementPich.fields.y;
              if ( !v76 )
                sub_B7076C(0LL, v74);
              UnityEngine_GameObject__SetActive(v76, 1, 0LL);
            }
            else
            {
              v66 = this->fields.lineObj;
              if ( !v66 )
                sub_B7076C(0LL, v34);
              UnityEngine_GameObject__SetActive(v66, 0, 0LL);
            }
            v77 = eventUpValList;
            if ( !eventUpValList )
LABEL_70:
              sub_B7076C(v67, v68);
            v78 = 0LL;
            v79 = (BattleServantConfConponent_o *)(v29 + 8);
            while ( 1 )
            {
              v80 = v77->max_length;
              if ( (__int64)v78 >= (int)v80 )
                break;
              if ( v78 >= v80 )
              {
                v159 = sub_B70798(v67);
                sub_B70738(v159, 0LL);
              }
              v81 = &v77->obj.klass + v78;
              v82 = (EventUpValInfo_o *)v81[4];
              if ( v82 )
              {
                questRestrictionInfo = partyItem->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_B7076C(v67, v68);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v67,
                  v78,
                  (EventUpValInfo_o *)v81[4],
                  questRestrictionInfo->fields.eventId,
                  v69);
                DropItemList = EventUpValInfo__GetDropItemList(v82, v78, 0LL);
                if ( !v29 )
                  sub_B7076C(DropItemList, v85);
                v92 = (System_Int32_array **)DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_B70754(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v29 + 64LL));
                  if ( !DropItemList )
                  {
                    v162 = sub_B7078C(0LL);
                    sub_B70738(v162, 0LL);
                  }
                }
                if ( v78 >= v29[6] )
                {
                  v160 = sub_B70798(DropItemList);
                  sub_B70738(v160, 0LL);
                }
                v79->klass = (BattleServantConfConponent_c *)v92;
                sub_B70630(v79, v92, v86, v87, v88, v89, v90, v91);
                v77 = eventUpValList;
              }
              ++v78;
              v79 = (BattleServantConfConponent_o *)((char *)v79 + 8);
              if ( !v77 )
                goto LABEL_70;
            }
          }
          *(_DWORD *)&v172[4 * v165 + 24] = 594;
          v93 = ++v173;
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v175,
            (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v94 = partyItem;
          if ( v93 )
          {
            v95 = v93 - 1;
            if ( *(_DWORD *)&v172[4 * v93 + 20] == 594 )
            {
              --v93;
              v173 = v95;
            }
          }
          if ( eventUpValList )
          {
            v96 = (struct EventMemberMargeUpValInfo_array *)sub_B706AC(
                                                              EventMemberMargeUpValInfo___TypeInfo,
                                                              eventUpValList->max_length);
            this->fields.eventMargeUpValInfoList = v96;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfoList,
              (System_Int32_array **)v96,
              v97,
              v98,
              v99,
              v100,
              v101,
              v102);
            v103 = eventUpValList;
            if ( eventUpValList )
            {
              v104 = 0LL;
              p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
              do
              {
                if ( (__int64)v104 >= (int)v103->max_length )
                  goto LABEL_147;
                seed = (__int64)PartyListViewItem__GetMember(v94, v104, 0LL);
                if ( !seed )
                  break;
                if ( *(_BYTE *)(seed + 128) )
                {
                  if ( !*(_QWORD *)(seed + 120) )
                    goto LABEL_142;
                }
                else if ( !*(_QWORD *)(seed + 112) )
                {
                  goto LABEL_142;
                }
                v105 = *(ServantEntity_o **)(seed + 176);
                v106 = v93;
                v107 = seed;
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                0LL);
                v167 = v107;
                v109 = *(_BYTE *)(v107 + 128);
                v110 = SvtNameText;
                v111 = (EventMemberMargeUpValInfo_o *)sub_B70764(EventMemberMargeUpValInfo_TypeInfo);
                EventMemberMargeUpValInfo___ctor(v111, v104, v105, v110, v109, 0LL);
                v118 = (unsigned int *)*p_eventMargeUpValInfoList;
                if ( !*p_eventMargeUpValInfoList )
                  break;
                if ( v111 )
                {
                  seed = sub_B70754(v111, *(_QWORD *)(*(_QWORD *)v118 + 64LL));
                  if ( !seed )
                  {
                    v163 = sub_B7078C(0LL);
                    sub_B70738(v163, 0LL);
                  }
                }
                v94 = partyItema;
                if ( v104 >= v118[6] )
                  goto LABEL_153;
                v119 = &v118[2 * v104];
                *((_QWORD *)v119 + 4) = v111;
                sub_B70630(
                  (BattleServantConfConponent_o *)(v119 + 8),
                  (System_Int32_array **)v111,
                  v112,
                  v113,
                  v114,
                  v115,
                  v116,
                  v117);
                v120 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v121 = 0LL;
                while ( (__int64)v121 < (int)v120->max_length )
                {
                  if ( !v29 )
                    goto LABEL_152;
                  if ( v121 >= v29[6] )
                    goto LABEL_153;
                  max_length = *(EventDropItemUpValInfo_array **)&v29[2 * v121 + 8];
                  if ( max_length )
                  {
                    v122 = *p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      goto LABEL_152;
                    if ( v104 >= v122->max_length )
                      goto LABEL_153;
                    seed = (__int64)v122->m_Items[v104];
                    if ( !seed )
                      goto LABEL_152;
                    EventMemberMargeUpValInfo__Add((EventMemberMargeUpValInfo_o *)seed, max_length, 0LL);
                    v120 = eventUpValList;
                  }
                  ++v121;
                  if ( !v120 )
                    goto LABEL_152;
                }
                seed = (__int64)v169;
                if ( !v169 )
                  break;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v172,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v169,
                  (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v172;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v126,
                        (EventDropItemUpValInfo_o *)i.fields.current,
                        0LL) )
                {
                  v123 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                           &i,
                           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v123 )
                    break;
                  v125 = *p_eventMargeUpValInfoList;
                  if ( !*p_eventMargeUpValInfoList )
                    sub_B7076C(v123, v124);
                  if ( v104 >= v125->max_length )
                  {
                    v156 = sub_B70798(v123);
                    sub_B70738(v156, 0LL);
                  }
                  v126 = v125->m_Items[v104];
                  if ( !v126 )
                    sub_B7076C(0LL, v124);
                }
                *(_DWORD *)&v172[4 * v106 + 24] = 806;
                v93 = ++v173;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &i,
                  (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( v93 )
                {
                  v127 = v93 - 1;
                  v128 = v167;
                  if ( *(_DWORD *)&v172[4 * v93 + 20] == 806 )
                  {
                    --v93;
                    v173 = v127;
                    if ( !v111 )
                      break;
                    goto LABEL_112;
                  }
                }
                else
                {
                  v128 = v167;
                }
                if ( !v111 )
                  break;
LABEL_112:
                seed = EventMemberMargeUpValInfo__IsEmpry(v111, 0LL);
                if ( (seed & 1) != 0 )
                {
                  this = v170;
                }
                else
                {
                  v166 = v93;
                  servantName = (System_Int32_array **)v111->fields.servantName;
                  v130 = *(_BYTE *)(v128 + 128);
                  v131 = sub_B70764(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v131 + 136) = 1;
                  ListViewItem___ctor_23967088((ListViewItem_o *)v131, v30, 0LL);
                  *(_QWORD *)(v131 + 112) = servantName;
                  sub_B70630(
                    (BattleServantConfConponent_o *)(v131 + 112),
                    servantName,
                    v132,
                    v133,
                    v134,
                    v135,
                    v136,
                    v137);
                  *(_BYTE *)(v131 + 120) = v130;
                  *(_DWORD *)(v131 + 136) = 1;
                  if ( !v131 )
                    break;
                  *(float *)(v131 + 92) = v13;
                  *(float *)(v131 + 96) = v14;
                  *(float *)(v131 + 100) = v15;
                  v138 = v170->fields.seed;
                  if ( !v138 )
                    break;
                  seed = (__int64)v170->fields.itemList;
                  if ( !seed )
                    break;
                  y = v138->fields.arrangementPich.fields.y;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v131,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v111, 0LL);
                  if ( !seed )
                    break;
                  v140 = *(_QWORD *)(seed + 24);
                  v141 = seed;
                  ++v30;
                  v142 = v14 + y;
                  if ( (int)v140 < 1 )
                  {
                    this = v170;
                  }
                  else
                  {
                    v143 = 0;
                    v144 = 0LL;
                    v145 = seed + 32;
                    v168 = (int)v140;
                    while ( 1 )
                    {
                      v146 = *(_QWORD *)(v145 + 8 * v144);
                      if ( !v146 || *(_DWORD *)(v146 + 60) != 111 )
                        goto LABEL_127;
                      if ( !*(_BYTE *)(v167 + 128) )
                      {
                        seed = *(_QWORD *)(v167 + 176);
                        if ( !seed )
                          goto LABEL_152;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v167 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_127:
                          if ( v144 >= *(unsigned int *)(v141 + 24) )
                            goto LABEL_153;
                          v147 = *(System_Int32_array ***)(v145 + 8 * v144);
                          v131 = sub_B70764(PartyOrganizationEventPointListViewItem_TypeInfo);
                          *(_DWORD *)(v131 + 136) = 1;
                          ListViewItem___ctor_23967088((ListViewItem_o *)v131, v30, 0LL);
                          *(_QWORD *)(v131 + 128) = v147;
                          sub_B70630(
                            (BattleServantConfConponent_o *)(v131 + 128),
                            v147,
                            v148,
                            v149,
                            v150,
                            v151,
                            v152,
                            v153);
                          *(_DWORD *)(v131 + 136) = 1;
                          if ( !v131 )
                            goto LABEL_152;
                          *(float *)(v131 + 92) = v13;
                          *(float *)(v131 + 96) = v142;
                          *(float *)(v131 + 100) = v15;
                          v154 = v170->fields.seed;
                          if ( !v154 )
                            goto LABEL_152;
                          seed = (__int64)v170->fields.itemList;
                          if ( !seed )
                            goto LABEL_152;
                          ++v30;
                          v142 = v142 + v154->fields.arrangementPich.fields.y;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v131,
                            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                          ++v143;
                        }
                      }
                      if ( (__int64)++v144 >= v168 )
                        break;
                      if ( v144 >= *(unsigned int *)(v141 + 24) )
                        goto LABEL_153;
                    }
                    if ( v143 )
                    {
                      this = v170;
                      v94 = partyItema;
                      v93 = v166;
                      v14 = v142 + -8.0;
                      goto LABEL_142;
                    }
                    this = v170;
                    v94 = partyItema;
                  }
                  v93 = v166;
                  seed = (__int64)this->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)seed,
                           (WarBoardManager_TaskList_o *)v131,
                           (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v155 = this->fields.seed;
                  if ( !v155 )
                    break;
                  v14 = v142 - v155->fields.arrangementPich.fields.y;
                }
LABEL_142:
                v103 = eventUpValList;
                ++v104;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_152:
    sub_B7076C(seed, max_length);
  }
LABEL_147:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10461/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_152;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
  ListViewManager__DispItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfoList, 0LL, v3, v4, v5, v6, v7, v8);
}


PartyOrganizationEventPointListViewItem_o *__fastcall PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_4354D4E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4354D4E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&PartyOrganizationEventPointListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (PartyOrganizationEventPointListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationEventPointListViewItem_TypeInfo )
    return (PartyOrganizationEventPointListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


EventMargeItemUpValInfo_array *__fastcall PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t eventId,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  void *EventUpVal; // x0
  __int64 v8; // x1
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  EventPartyMargeUpValInfo_o *v12; // x21
  const MethodInfo *v13; // x4
  EventUpValInfo_array *v14; // x8
  unsigned __int64 v15; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v17; // x9
  EventUpValInfo_o *v18; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v20; // w8
  void *v21; // x20
  __int64 v22; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x21
  __int64 v25; // x0
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-34h] BYREF

  eventIda = eventId;
  if ( (byte_4354D4C & 1) == 0 )
  {
    sub_B70694(&EventPartyMargeUpValInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4354D4C = 1;
  }
  eventUpValList = 0LL;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_27;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v12 = (EventPartyMargeUpValInfo_o *)sub_B70764(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v12, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &eventUpValList, 0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v14 = eventUpValList;
    if ( !eventUpValList )
      goto LABEL_27;
    v15 = 0LL;
    while ( 1 )
    {
      max_length = v14->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
        goto LABEL_28;
      v17 = &v14->obj.klass + v15;
      v18 = (EventUpValInfo_o *)v17[4];
      if ( v18 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_27;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v15,
          (EventUpValInfo_o *)v17[4],
          questRestrictionInfo->fields.eventId,
          v13);
        EventUpVal = EventUpValInfo__GetDropItemList(v18, v15, 0LL);
        if ( !v12 )
          goto LABEL_27;
        EventPartyMargeUpValInfo__Add(v12, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v14 = eventUpValList;
      }
      ++v15;
      if ( !v14 )
        goto LABEL_27;
    }
  }
  if ( !v12 )
    goto LABEL_27;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v12, 0LL);
  if ( EventUpVal )
  {
    v20 = *((_DWORD *)EventUpVal + 6);
    v21 = EventUpVal;
    if ( v20 >= 1 )
    {
      v22 = 0LL;
      while ( (unsigned int)v22 < v20 )
      {
        v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v21 + v22 + 4);
        if ( !v23 )
          goto LABEL_27;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v21 + v22 + 4),
                               0LL);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            v23,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        v20 = *((_DWORD *)v21 + 6);
        if ( (int)++v22 >= v20 )
          goto LABEL_25;
      }
LABEL_28:
      v25 = sub_B70798(EventUpVal);
      sub_B70738(v25, 0LL);
    }
  }
LABEL_25:
  if ( !v6 )
LABEL_27:
    sub_B7076C(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_4354D53 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D53 = 1;
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
          sub_B7076C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t idx,
        EventUpValInfo_o *eventUpVal,
        int32_t eventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v11; // x22
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  SkillLvMaster_o *v13; // x21
  int v14; // w8
  void *v15; // x22
  unsigned int v16; // w25
  __int64 v17; // x8
  System_Int32_array **v18; // x23
  int v19; // w8
  void *v20; // x24
  unsigned int v21; // w27
  __int64 v22; // x28
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x0
  int32_t actMaxRarity; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4354D4B & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_int___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_4354D4B = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_36;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0LL);
  if ( Entity )
  {
    v11 = Entity;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           (PartyOrganizationUtility_o *)Instance,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v11->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_36;
      v13 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   MasterData_WarQuestSelectionMaster,
                   eventUpVal->fields.equipSvtId,
                   0LL);
      if ( !Instance )
        goto LABEL_36;
      v14 = *((_DWORD *)Instance + 6);
      v15 = Instance;
      if ( v14 >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= v14 )
          {
LABEL_37:
            v25 = sub_B70798(Instance);
            sub_B70738(v25, 0LL);
          }
          v17 = *((_QWORD *)v15 + (int)v16 + 4);
          if ( !v17 )
            break;
          if ( *(_DWORD *)(v17 + 48) )
          {
            if ( !v13 )
              break;
            Instance = SkillLvMaster__GetEntity(v13, *(_DWORD *)(v17 + 28), 1, 0LL);
            if ( Instance )
            {
              v18 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0LL);
              if ( !Instance )
                break;
              v19 = *((_DWORD *)Instance + 6);
              v20 = Instance;
              if ( v19 >= 1 )
              {
                v21 = 0;
                while ( 1 )
                {
                  if ( v21 >= v19 )
                    goto LABEL_37;
                  v22 = *((_QWORD *)v20 + (int)v21 + 4);
                  if ( !v22 )
                    goto LABEL_36;
                  v23 = *(_QWORD *)(v22 + 24);
                  if ( !v23 )
                    goto LABEL_36;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v18[4],
                                       *(_DWORD *)(v23 + 16),
                                       (const MethodInfo_1FCBFE4 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v19 = *((_DWORD *)v20 + 6);
                  if ( (int)++v21 >= v19 )
                    goto LABEL_34;
                }
                v24 = *(_QWORD *)(v22 + 24);
                if ( !v24 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v24 + 16), 0LL);
              }
            }
          }
LABEL_34:
          v14 = *((_DWORD *)v15 + 6);
          if ( (int)++v16 >= v14 )
            return;
        }
LABEL_36:
        sub_B7076C(Instance, v9);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4354D51 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_B70694(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4354D51 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B7076C(v12, v13);
      PartyOrganizationEventPointListViewObject__Init_38355932(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v11,
        delay,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_30912824(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4354D52 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_B70694(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4354D52 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v12.fields.current;
      v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v10, v11);
      PartyOrganizationEventPointListViewObject__Init_38355996(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v9,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_30912284(this, mode, v10);
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_30912284(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *ClippingObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *v11; // x20
  int v12; // w26
  __int64 v13; // x23
  PartyOrganizationEventPointListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  int32_t v16; // w1

  if ( (byte_4354D50 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_B70694(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4354D50 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode != 3 )
  {
    if ( mode == 2 )
    {
      v7 = 3;
      goto LABEL_20;
    }
    if ( mode == 1 )
    {
      v7 = 2;
LABEL_20:
      PartyOrganizationEventPointListViewManager__RequestListObject_30912824(this, v7, v6);
      return;
    }
    return;
  }
  ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v5);
  if ( !ClippingObjectList )
LABEL_22:
    sub_B7076C(ClippingObjectList, v9);
  size = ClippingObjectList->fields._size;
  v11 = ClippingObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
    return;
  }
  this->fields.callbackCount = size;
  v12 = ClippingObjectList->fields._size;
  if ( v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v12 <= (unsigned int)v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v14 = v11->fields._items->m_Items[v13];
      v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !v14 )
        break;
      if ( (int)v13 >= v12 - 1 )
        v16 = 5;
      else
        v16 = 2;
      PartyOrganizationEventPointListViewObject__Init_38355996(v14, v16, v15, 0LL);
      v12 = v11->fields._size;
      if ( (int)++v13 >= v12 )
        return;
    }
    goto LABEL_22;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_30912768(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_30912284(this, mode, v10);
}


void __fastcall PartyOrganizationEventPointListViewManager__SetObjectItem(
        PartyOrganizationEventPointListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4354D4F & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_B70694(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_4354D4F = 1;
  }
  if ( !obj
    || (v6 = *(&PartyOrganizationEventPointListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_38355128((PartyOrganizationEventPointListViewObject_o *)obj, v7, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        EventDropItemUpValInfo_array **campaignFriendshipUpPoints,
        PartyListViewItem_o *partyItem,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  void *HeroineData; // x0
  __int64 v10; // x1
  EventDropItemUpValInfo_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  PartyOrganizationListViewItem_o *v18; // x22
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x25
  __int64 v23; // x8
  unsigned __int64 v24; // x20
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v25; // x19
  unsigned __int64 v26; // x23
  unsigned __int64 v27; // x22
  int32_t Item1; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  PartyOrganizationEventPointListViewManager___c_c *v30; // x0
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__30_0; // x25
  Il2CppObject *v33; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v41; // x0
  PartyOrganizationEventPointListViewManager___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x25
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v44; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__30_1; // x26
  Il2CppObject *v46; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x25
  PartyOrganizationEventPointListViewManager___c_c *v55; // x0
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v56; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__30_2; // x26
  Il2CppObject *v58; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v66; // x0
  PartyOrganizationEventPointListViewManager___c_c *v67; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x24
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v69; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__30_3; // x26
  Il2CppObject *v71; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x27
  __int64 v80; // x24
  __int64 v81; // x26
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  EventDropUpValInfo_o *v94; // x23
  __int64 v95; // x22
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  __int64 v115; // x0
  BattleServantConfConponent_o *v116; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v117; // [xsp+10h] [xbp-70h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v118; // [xsp+18h] [xbp-68h]
  int32_t member; // [xsp+28h] [xbp-58h]
  int32_t v120; // [xsp+2Ch] [xbp-54h]

  if ( (byte_4354D54 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
    sub_B70694(&Method_System_Linq_Enumerable_Single_string___);
    sub_B70694(&EventDropItemUpValInfo_TypeInfo);
    sub_B70694(&EventDropUpValInfo_TypeInfo);
    sub_B70694(&Method_System_Func_EventEntity_ScriptData__string___ctor__);
    sub_B70694(&Method_System_Func_string__bool___ctor__);
    sub_B70694(&System_Func_EventEntity_ScriptData__string__TypeInfo);
    sub_B70694(&System_Func_string__bool__TypeInfo);
    sub_B70694(&FunctionEntity_TypeInfo);
    sub_B70694(&FunctionGroupEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__);
    sub_B70694(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__);
    sub_B70694(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__);
    sub_B70694(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__);
    sub_B70694(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354D54 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v8 )
    goto LABEL_83;
  v11 = (EventDropItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *campaignFriendshipUpPoints = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)campaignFriendshipUpPoints,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !partyItem )
    goto LABEL_83;
  HeroineData = PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_83;
  v18 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*((_QWORD *)HeroineData + 14) || *((_BYTE *)HeroineData + 128) || !*((_QWORD *)HeroineData + 42) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v18, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  HeroineData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(SvtId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_83;
  HeroineData = UserServantMaster__getHeroineData(Master_WarQuestSelectionMaster, (int32_t)HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = (void *)UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( ((unsigned __int8)HeroineData & 1) == 0 )
      return 0;
  }
  v116 = (BattleServantConfConponent_o *)campaignFriendshipUpPoints;
  v117 = v8;
  FriendshipUpValTuple_k__BackingField = v18->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_83;
  v23 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    v25 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v118 = v18->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v24 >= (unsigned int)v23 )
      {
        v115 = sub_B70798(HeroineData);
        sub_B70738(v115, 0LL);
      }
      v26 = *(_QWORD *)&v25[-1].fields.Item2;
      v27 = HIDWORD(v26);
      if ( SHIDWORD(v26) >= 1 )
      {
        Item1 = v25->fields.Item1;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        HeroineData = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !HeroineData )
          goto LABEL_83;
        HeroineData = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)HeroineData,
                        v26,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !HeroineData )
          goto LABEL_83;
        v29 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)HeroineData + 15);
        if ( !v29 )
          goto LABEL_83;
        v120 = Item1;
        if ( v29[1].monitor )
        {
          v30 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v30 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          static_fields = v30->static_fields;
          _9__30_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__30_0;
          if ( !_9__30_0 )
          {
            if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v30);
              static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            }
            v33 = (Il2CppObject *)static_fields->__9;
            _9__30_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_EventEntity_ScriptData__string__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
              _9__30_0,
              v33,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
              (const MethodInfo_29ADCC4 *)Method_System_Func_EventEntity_ScriptData__string___ctor__);
            v34 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v34->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
            sub_B70630(
              (BattleServantConfConponent_o *)&v34->__9__30_0,
              (System_Int32_array **)_9__30_0,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
          v41 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                  v29,
                  (System_Func_TSource__TResult__o *)_9__30_0,
                  (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v42 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
          if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v42 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v44 = v42->static_fields;
          _9__30_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v44->__9__30_1;
          if ( !_9__30_1 )
          {
            if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v42);
              v44 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            }
            v46 = (Il2CppObject *)v44->__9;
            _9__30_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_string__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__30_1,
              v46,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
              (const MethodInfo_29AC578 *)Method_System_Func_string__bool___ctor__);
            v47 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v47->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
            sub_B70630(
              (BattleServantConfConponent_o *)&v47->__9__30_1,
              (System_Int32_array **)_9__30_1,
              v48,
              v49,
              v50,
              v51,
              v52,
              v53);
          }
          v54 = (System_Int32_array **)System_Linq_Enumerable__Single_DiscriminatedUnionConverter_UnionCase_(
                                         v43,
                                         (System_Func_TSource__bool__o *)_9__30_1,
                                         (const MethodInfo_1CC6CF0 *)Method_System_Linq_Enumerable_Single_string___);
          if ( v29[1].monitor )
          {
            v55 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
              v55 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v56 = v55->static_fields;
            _9__30_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v56->__9__30_2;
            if ( !_9__30_2 )
            {
              if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v55);
                v56 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              }
              v58 = (Il2CppObject *)v56->__9;
              _9__30_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_EventEntity_ScriptData__string__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                _9__30_2,
                v58,
                Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
                (const MethodInfo_29ADCC4 *)Method_System_Func_EventEntity_ScriptData__string___ctor__);
              v59 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              v59->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
              sub_B70630(
                (BattleServantConfConponent_o *)&v59->__9__30_2,
                (System_Int32_array **)_9__30_2,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65);
            }
            v66 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                    v29,
                    (System_Func_TSource__TResult__o *)_9__30_2,
                    (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
            v67 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            v68 = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
            if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
              v67 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v69 = v67->static_fields;
            _9__30_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v69->__9__30_3;
            if ( !_9__30_3 )
            {
              if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v67);
                v69 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              }
              v71 = (Il2CppObject *)v69->__9;
              _9__30_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_string__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                _9__30_3,
                v71,
                Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
                (const MethodInfo_29AC578 *)Method_System_Func_string__bool___ctor__);
              v72 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              v72->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
              sub_B70630(
                (BattleServantConfConponent_o *)&v72->__9__30_3,
                (System_Int32_array **)_9__30_3,
                v73,
                v74,
                v75,
                v76,
                v77,
                v78);
            }
            v79 = (System_Int32_array **)System_Linq_Enumerable__Single_DiscriminatedUnionConverter_UnionCase_(
                                           v68,
                                           (System_Func_TSource__bool__o *)_9__30_3,
                                           (const MethodInfo_1CC6CF0 *)Method_System_Linq_Enumerable_Single_string___);
          }
          else
          {
            v79 = (System_Int32_array **)StringLiteral_1/*""*/;
          }
        }
        else
        {
          v54 = (System_Int32_array **)StringLiteral_1/*""*/;
          v79 = (System_Int32_array **)StringLiteral_1/*""*/;
        }
        v80 = sub_B70764(FunctionEntity_TypeInfo);
        FunctionEntity___ctor((FunctionEntity_o *)v80, 0LL);
        if ( !v80 )
          goto LABEL_83;
        *(_DWORD *)(v80 + 16) = -2;
        *(_QWORD *)(v80 + 24) = 111LL;
        v81 = sub_B70764(FunctionGroupEntity_TypeInfo);
        FunctionGroupEntity___ctor((FunctionGroupEntity_o *)v81, 0LL);
        if ( !v81 )
          goto LABEL_83;
        *(_DWORD *)(v81 + 16) = -2;
        *(_DWORD *)(v81 + 20) = v26;
        *(_DWORD *)(v81 + 24) = 0;
        *(_QWORD *)(v81 + 40) = v54;
        sub_B70630((BattleServantConfConponent_o *)(v81 + 40), v54, v82, v83, v84, v85, v86, v87);
        *(_QWORD *)(v81 + 32) = v79;
        sub_B70630((BattleServantConfConponent_o *)(v81 + 32), v79, v88, v89, v90, v91, v92, v93);
        *(_BYTE *)(v81 + 56) = 1;
        v94 = (EventDropUpValInfo_o *)sub_B70764(EventDropUpValInfo_TypeInfo);
        EventDropUpValInfo___ctor(v94, 0, (FunctionEntity_o *)v80, 0LL);
        if ( v120 == 2 )
        {
          FriendshipUpValTuple_k__BackingField = v118;
          if ( !v94 )
            goto LABEL_83;
          EventDropUpValInfo__SetRateCount(v94, v27, 0, 0, 0LL);
        }
        else
        {
          FriendshipUpValTuple_k__BackingField = v118;
          if ( v120 == 1 )
          {
            if ( !v94 )
              goto LABEL_83;
            EventDropUpValInfo__SetAddCount(v94, v27, 0, 0, 0LL);
          }
          else if ( !v94 )
          {
            goto LABEL_83;
          }
        }
        if ( v94->fields.rateCount > 0 || v94->fields.addCount >= 1 )
        {
          v95 = sub_B70764(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor((EventDropItemUpValInfo_o *)v95, member, v94, 0, 0LL);
          if ( !v95 )
            goto LABEL_83;
          *(_QWORD *)(v95 + 40) = v81;
          sub_B70630(
            (BattleServantConfConponent_o *)(v95 + 40),
            (System_Int32_array **)v81,
            v96,
            v97,
            v98,
            v99,
            v100,
            v101);
          *(_QWORD *)(v95 + 32) = v81;
          sub_B70630(
            (BattleServantConfConponent_o *)(v95 + 32),
            (System_Int32_array **)v81,
            v102,
            v103,
            v104,
            v105,
            v106,
            v107);
          *(_DWORD *)(v95 + 56) = *(_DWORD *)(v80 + 28);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v117,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v95,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
        }
      }
      LODWORD(v23) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v24;
      ++v25;
    }
    while ( (__int64)v24 < (int)v23 );
  }
  v108 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v117,
                                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  v116->klass = (BattleServantConfConponent_c *)v108;
  sub_B70630(v116, v108, v109, v110, v111, v112, v113, v114);
  if ( !v116->klass )
LABEL_83:
    sub_B7076C(HeroineData, v10);
  return LODWORD(v116->klass->_1.namespaze) != 0;
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

  if ( (byte_4354D45 & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4354D45 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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

  if ( (byte_4354D47 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4354D47 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  PartyOrganizationEventPointListViewObject_o *Component_srcLineSprite; // x0
  __int64 v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4354D4A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D4A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (PartyOrganizationEventPointListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)current,
                                                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7076C(0LL, v10);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B7076C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23985548((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7076C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7076C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4354D49 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D49 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
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

  if ( (byte_4354D46 & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4354D46 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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

  if ( (byte_4354D48 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4354D48 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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
  sub_B70630(
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
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4350F27 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_4350F27 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v13,
             *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B706C4(v22) & 1) == 0 )
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
      v24 = sub_B706BC(v22);
      v25 = sub_B70AC0(v22);
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
            v18 = sub_B08590(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v22);
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
            v16 = sub_B08590(v21, class_0, v10);
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


void __fastcall PartyOrganizationEventPointListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4350F24 & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_4350F24 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall PartyOrganizationEventPointListViewManager___c___ctor(
        PartyOrganizationEventPointListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_B7076C(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4350F25 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350F25 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_B7076C(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4350F26 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350F26 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}