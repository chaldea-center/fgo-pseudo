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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_int__o *v36; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_T__o *v41; // x0
  __int64 seed; // x0
  float v43; // s0
  float v44; // s1
  float v45; // s2
  EventUpValInfo_array *v46; // x8
  float v47; // s8
  float v48; // s10
  float v49; // s9
  unsigned __int64 v50; // x22
  unsigned __int64 max_length; // x1
  EventUpValInfo_o *v52; // x8
  _BOOL8 v53; // x0
  Il2CppObject *current; // x28
  const MethodInfo_211254C *v55; // x1
  int v56; // w21
  PartyOrganizationEventPointListViewManager_o *v57; // x0
  const MethodInfo *v58; // x4
  int v59; // w8
  EventDropItemUpValInfo_array *v60; // x28
  signed int v61; // w9
  int32_t v62; // w8
  unsigned int *v63; // x22
  int32_t v64; // w23
  _BOOL8 v65; // x0
  const MethodInfo *v66; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  EventMargeItemUpValInfo_array *v68; // x25
  int32_t v69; // w24
  System_Int32_array **v70; // x27
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x26
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x0
  struct ListViewItemSeed_o *v81; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  float v83; // s10
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  int v87; // w8
  int32_t v88; // w9
  System_Int32_array **v89; // x27
  __int64 v90; // x26
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  struct ListViewItemSeed_o *v98; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  PartyOrganizationEventPointListViewManager_o *v101; // x0
  const MethodInfo *v102; // x4
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v105; // x0
  struct ListViewItemSeed_o *v106; // x8
  UnityEngine_GameObject_o *v107; // x0
  EventUpValInfo_array *v108; // x8
  unsigned __int64 v109; // x24
  BattleServantConfConponent_o *v110; // x25
  unsigned __int64 v111; // x9
  Il2CppClass **v112; // x9
  EventUpValInfo_o *v113; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x26
  int v123; // w19
  PartyListViewItem_o *v124; // x21
  int v125; // w8
  struct EventMemberMargeUpValInfo_array *v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  EventUpValInfo_array *v133; // x8
  unsigned __int64 v134; // x25
  const MethodInfo *v135; // x1
  ServantEntity_o *v136; // x28
  int v137; // w26
  __int64 v138; // x19
  System_String_o *SvtNameText; // x0
  char v140; // w21
  System_String_o *v141; // x20
  __int64 v142; // x1
  __int64 v143; // x2
  EventMemberMargeUpValInfo_o *v144; // x27
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  unsigned int *v151; // x19
  unsigned int *v152; // x0
  EventUpValInfo_array *v153; // x8
  unsigned __int64 v154; // x19
  EventDropItemUpValInfo_array *v155; // x1
  struct EventMemberMargeUpValInfo_array *v156; // x8
  _BOOL8 v157; // x0
  struct EventMemberMargeUpValInfo_array *v158; // x8
  EventMemberMargeUpValInfo_o *v159; // x0
  int v160; // w8
  __int64 v161; // x24
  __int64 v162; // x1
  __int64 v163; // x2
  System_Int32_array **servantName; // x20
  char v165; // w19
  __int64 v166; // x28
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  struct ListViewItemSeed_o *v173; // x8
  float y; // s12
  __int64 v175; // x1
  __int64 v176; // x2
  __int64 v177; // x8
  __int64 v178; // x27
  float v179; // s10
  int v180; // w21
  unsigned __int64 v181; // x26
  __int64 v182; // x19
  __int64 v183; // x8
  System_Int32_array **v184; // x20
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  struct ListViewItemSeed_o *v191; // x8
  struct ListViewItemSeed_o *v192; // x8
  __int64 v193; // x0
  UILabel_o *emptyMessageLabel; // x20
  __int64 v195; // x0
  __int64 v196; // x0
  __int64 v197; // x0
  __int64 v198; // x0
  __int64 v199; // x0
  __int64 v200; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // [xsp+8h] [xbp-158h]
  int v202; // [xsp+1Ch] [xbp-144h]
  int v203; // [xsp+1Ch] [xbp-144h]
  __int64 v204; // [xsp+20h] [xbp-140h]
  signed __int64 v205; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v206; // [xsp+30h] [xbp-130h]
  PartyOrganizationEventPointListViewManager_o *v207; // [xsp+38h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+40h] [xbp-120h]
  _BYTE v209[36]; // [xsp+48h] [xbp-118h] BYREF
  int v210; // [xsp+6Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+70h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v212; // [xsp+90h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v213; // [xsp+B0h] [xbp-B0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+C8h] [xbp-98h] BYREF
  int32_t eventId[3]; // [xsp+D4h] [xbp-8Ch] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+E8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v217; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217D69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, partyItem);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v12);
    sub_B0D8A4(&EventDropItemUpValInfo_____TypeInfo, v13);
    sub_B0D8A4(&EventMemberMargeUpValInfo___TypeInfo, v14);
    sub_B0D8A4(&EventMemberMargeUpValInfo_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__, v26);
    sub_B0D8A4(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v27);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_B0D8A4(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo, v29);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v30);
    sub_B0D8A4(&PartyOrganizationEventPointListViewItem_TypeInfo, v31);
    sub_B0D8A4(&StringLiteral_10450/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, v32);
    sub_B0D8A4(&StringLiteral_10360/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, v33);
    byte_4217D69 = 1;
  }
  eventUpValList = 0LL;
  eventId[0] = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v213, 0, sizeof(v213));
  memset(&v212, 0, sizeof(v212));
  memset(&i, 0, sizeof(i));
  v210 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v36 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v34, v35);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v206 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                                                                   v37,
                                                                                                   v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v206,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v41 = (System_Collections_Generic_List_T__o *)sub_B0D974(
                                                  System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo,
                                                  v39,
                                                  v40);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v41,
    (const MethodInfo_2F28DBC *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_152;
  if ( PartyListViewItem__GetEventUpVal(partyItem, eventId, &eventUpValList, 0LL) )
  {
    v207 = this;
    partyItema = partyItem;
    seed = (__int64)this->fields.seed;
    if ( seed )
    {
      *(UnityEngine_Vector3_o *)&v43 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
      v46 = eventUpValList;
      if ( eventUpValList )
      {
        v202 = 0;
        v47 = v43;
        v48 = v44;
        v49 = v45;
        v50 = 0LL;
        while ( 1 )
        {
          max_length = v46->max_length;
          if ( (__int64)v50 >= (int)max_length )
            break;
          if ( v50 >= max_length )
            goto LABEL_153;
          v52 = v46->m_Items[v50];
          if ( v52 )
          {
            seed = (__int64)v52->fields.dropList;
            if ( !seed )
              goto LABEL_152;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v209,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)seed,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v213 = *(System_Collections_Generic_List_Enumerator_T__o *)v209;
            while ( 1 )
            {
              v53 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v213,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v53 )
                break;
              current = v213.fields.current;
              if ( !v213.fields.current )
                sub_B0D97C(v53);
              if ( !v36 )
                sub_B0D97C(v53);
              if ( !System_Collections_Generic_List_int___Contains(
                      v36,
                      (int32_t)v213.fields.current[1].klass,
                      (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
                System_Collections_Generic_List_int___Add(
                  v36,
                  (int32_t)current[1].klass,
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            }
            v55 = (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__;
            *(_DWORD *)&v209[4 * v202 + 24] = 153;
            v56 = ++v210;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(&v213, v55);
            if ( v56 )
            {
              v59 = v56 - 1;
              if ( *(_DWORD *)&v209[4 * v56 + 20] == 153 )
              {
                --v56;
                v210 = v59;
              }
            }
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v57,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v50,
                     v58);
            if ( (seed & 1) != 0 )
            {
              v60 = campaignFriendshipUpPoints;
              eventId[0] = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_152;
              v61 = campaignFriendshipUpPoints->max_length;
              if ( v61 >= 1 )
              {
                v62 = 0;
                while ( v62 < (unsigned int)v61 )
                {
                  seed = (__int64)v206;
                  if ( !v206 )
                    goto LABEL_152;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v206,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v60->m_Items[v62],
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
                  v62 = eventId[0] + 1;
                  eventId[0] = v62;
                  v61 = v60->max_length;
                  if ( v62 >= v61 )
                    goto LABEL_28;
                }
LABEL_153:
                v195 = sub_B0D9A8(seed);
                sub_B0D948(v195, 0LL);
              }
            }
LABEL_28:
            v202 = v56;
          }
          v46 = eventUpValList;
          ++v50;
          if ( !eventUpValList )
            goto LABEL_152;
        }
        seed = sub_B0D8BC(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v36 )
        {
          v63 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v209,
            v36,
            (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v64 = 0;
          v212 = *(System_Collections_Generic_List_Enumerator_int__o *)v209;
          while ( 1 )
          {
            v65 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v212,
                    (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v65 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v65,
                                    v212.fields.current,
                                    partyItem,
                                    v66);
            v68 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_B0D97C(0LL);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v69 = v64 + 1;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v70 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_10450/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
              v73 = sub_B0D974(PartyOrganizationEventPointListViewItem_TypeInfo, v71, v72);
              *(_DWORD *)(v73 + 136) = 1;
              ListViewItem___ctor_23700744((ListViewItem_o *)v73, v64, 0LL);
              *(_QWORD *)(v73 + 112) = v70;
              sub_B0D840((BattleServantConfConponent_o *)(v73 + 112), v70, v74, v75, v76, v77, v78, v79);
              *(float *)(v73 + 92) = v47;
              *(float *)(v73 + 96) = v48;
              this = v207;
              *(_BYTE *)(v73 + 120) = 0;
              *(_DWORD *)(v73 + 136) = 0;
              *(float *)(v73 + 100) = v49;
              v81 = v207->fields.seed;
              if ( !v81 )
                sub_B0D97C(v80);
              itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v207->fields.itemList;
              v83 = v48 + v81->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                itemList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              eventId[0] = 0;
              v87 = v68->max_length;
              if ( v87 < 1 )
              {
                ++v64;
              }
              else
              {
                v88 = 0;
                do
                {
                  if ( v88 >= (unsigned int)v87 )
                  {
                    v198 = sub_B0D9A8(v84);
                    sub_B0D948(v198, 0LL);
                  }
                  v89 = (System_Int32_array **)v68->m_Items[v88];
                  v64 = v69 + 1;
                  v90 = sub_B0D974(PartyOrganizationEventPointListViewItem_TypeInfo, v85, v86);
                  *(_DWORD *)(v90 + 136) = 1;
                  ListViewItem___ctor_23700744((ListViewItem_o *)v90, v69, 0LL);
                  *(_QWORD *)(v90 + 128) = v89;
                  sub_B0D840((BattleServantConfConponent_o *)(v90 + 128), v89, v91, v92, v93, v94, v95, v96);
                  *(float *)(v90 + 92) = v47;
                  *(float *)(v90 + 96) = v83;
                  this = v207;
                  *(_DWORD *)(v90 + 136) = 0;
                  *(float *)(v90 + 100) = v49;
                  v98 = v207->fields.seed;
                  if ( !v98 )
                    sub_B0D97C(v97);
                  v99 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v207->fields.itemList;
                  v83 = v83 + v98->fields.arrangementPich.fields.y;
                  if ( !v99 )
                    sub_B0D97C(0LL);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v99,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  ++v69;
                  v88 = eventId[0] + 1;
                  eventId[0] = v88;
                  v87 = v68->max_length;
                }
                while ( v88 < v87 );
              }
              lineObj = this->fields.lineObj;
              if ( !lineObj )
                sub_B0D97C(0LL);
              transform = UnityEngine_GameObject__get_transform(lineObj, 0LL);
              if ( !transform )
                sub_B0D97C(0LL);
              v217.fields.x = v47;
              v217.fields.y = v83;
              v217.fields.z = v49;
              UnityEngine_Transform__set_localPosition(transform, v217, 0LL);
              v106 = this->fields.seed;
              if ( !v106 )
                sub_B0D97C(v105);
              v107 = this->fields.lineObj;
              v48 = v83 + v106->fields.arrangementPich.fields.y;
              if ( !v107 )
                sub_B0D97C(0LL);
              UnityEngine_GameObject__SetActive(v107, 1, 0LL);
            }
            else
            {
              v100 = this->fields.lineObj;
              if ( !v100 )
                sub_B0D97C(0LL);
              UnityEngine_GameObject__SetActive(v100, 0, 0LL);
            }
            v108 = eventUpValList;
            if ( !eventUpValList )
LABEL_70:
              sub_B0D97C(v101);
            v109 = 0LL;
            v110 = (BattleServantConfConponent_o *)(v63 + 8);
            while ( 1 )
            {
              v111 = v108->max_length;
              if ( (__int64)v109 >= (int)v111 )
                break;
              if ( v109 >= v111 )
              {
                v196 = sub_B0D9A8(v101);
                sub_B0D948(v196, 0LL);
              }
              v112 = &v108->obj.klass + v109;
              v113 = (EventUpValInfo_o *)v112[4];
              if ( v113 )
              {
                questRestrictionInfo = partyItem->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_B0D97C(v101);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v101,
                  v109,
                  (EventUpValInfo_o *)v112[4],
                  questRestrictionInfo->fields.eventId,
                  v102);
                DropItemList = EventUpValInfo__GetDropItemList(v113, v109, 0LL);
                if ( !v63 )
                  sub_B0D97C(DropItemList);
                v122 = (System_Int32_array **)DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_B0D964(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v63 + 64LL));
                  if ( !DropItemList )
                  {
                    v199 = sub_B0D99C(0LL);
                    sub_B0D948(v199, 0LL);
                  }
                }
                if ( v109 >= v63[6] )
                {
                  v197 = sub_B0D9A8(DropItemList);
                  sub_B0D948(v197, 0LL);
                }
                v110->klass = (BattleServantConfConponent_c *)v122;
                sub_B0D840(v110, v122, v116, v117, v118, v119, v120, v121);
                v108 = eventUpValList;
              }
              ++v109;
              v110 = (BattleServantConfConponent_o *)((char *)v110 + 8);
              if ( !v108 )
                goto LABEL_70;
            }
          }
          *(_DWORD *)&v209[4 * v202 + 24] = 594;
          v123 = ++v210;
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v212,
            (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v124 = partyItem;
          if ( v123 )
          {
            v125 = v123 - 1;
            if ( *(_DWORD *)&v209[4 * v123 + 20] == 594 )
            {
              --v123;
              v210 = v125;
            }
          }
          if ( eventUpValList )
          {
            v126 = (struct EventMemberMargeUpValInfo_array *)sub_B0D8BC(
                                                               EventMemberMargeUpValInfo___TypeInfo,
                                                               eventUpValList->max_length);
            this->fields.eventMargeUpValInfoList = v126;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfoList,
              (System_Int32_array **)v126,
              v127,
              v128,
              v129,
              v130,
              v131,
              v132);
            v133 = eventUpValList;
            if ( eventUpValList )
            {
              v134 = 0LL;
              p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
              do
              {
                if ( (__int64)v134 >= (int)v133->max_length )
                  goto LABEL_147;
                seed = (__int64)PartyListViewItem__GetMember(v124, v134, 0LL);
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
                v136 = *(ServantEntity_o **)(seed + 168);
                v137 = v123;
                v138 = seed;
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                v135);
                v204 = v138;
                v140 = *(_BYTE *)(v138 + 128);
                v141 = SvtNameText;
                v144 = (EventMemberMargeUpValInfo_o *)sub_B0D974(EventMemberMargeUpValInfo_TypeInfo, v142, v143);
                EventMemberMargeUpValInfo___ctor(v144, v134, v136, v141, v140, 0LL);
                v151 = (unsigned int *)*p_eventMargeUpValInfoList;
                if ( !*p_eventMargeUpValInfoList )
                  break;
                if ( v144 )
                {
                  seed = sub_B0D964(v144, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
                  if ( !seed )
                  {
                    v200 = sub_B0D99C(0LL);
                    sub_B0D948(v200, 0LL);
                  }
                }
                v124 = partyItema;
                if ( v134 >= v151[6] )
                  goto LABEL_153;
                v152 = &v151[2 * v134];
                *((_QWORD *)v152 + 4) = v144;
                sub_B0D840(
                  (BattleServantConfConponent_o *)(v152 + 8),
                  (System_Int32_array **)v144,
                  v145,
                  v146,
                  v147,
                  v148,
                  v149,
                  v150);
                v153 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v154 = 0LL;
                while ( (__int64)v154 < (int)v153->max_length )
                {
                  if ( !v63 )
                    goto LABEL_152;
                  if ( v154 >= v63[6] )
                    goto LABEL_153;
                  v155 = *(EventDropItemUpValInfo_array **)&v63[2 * v154 + 8];
                  if ( v155 )
                  {
                    v156 = *p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      goto LABEL_152;
                    if ( v134 >= v156->max_length )
                      goto LABEL_153;
                    seed = (__int64)v156->m_Items[v134];
                    if ( !seed )
                      goto LABEL_152;
                    EventMemberMargeUpValInfo__Add((EventMemberMargeUpValInfo_o *)seed, v155, 0LL);
                    v153 = eventUpValList;
                  }
                  ++v154;
                  if ( !v153 )
                    goto LABEL_152;
                }
                seed = (__int64)v206;
                if ( !v206 )
                  break;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v209,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v206,
                  (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v209;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v159,
                        (EventDropItemUpValInfo_o *)i.fields.current,
                        0LL) )
                {
                  v157 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                           &i,
                           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v157 )
                    break;
                  v158 = *p_eventMargeUpValInfoList;
                  if ( !*p_eventMargeUpValInfoList )
                    sub_B0D97C(v157);
                  if ( v134 >= v158->max_length )
                  {
                    v193 = sub_B0D9A8(v157);
                    sub_B0D948(v193, 0LL);
                  }
                  v159 = v158->m_Items[v134];
                  if ( !v159 )
                    sub_B0D97C(0LL);
                }
                *(_DWORD *)&v209[4 * v137 + 24] = 806;
                v123 = ++v210;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &i,
                  (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( v123 )
                {
                  v160 = v123 - 1;
                  v161 = v204;
                  if ( *(_DWORD *)&v209[4 * v123 + 20] == 806 )
                  {
                    --v123;
                    v210 = v160;
                    if ( !v144 )
                      break;
                    goto LABEL_112;
                  }
                }
                else
                {
                  v161 = v204;
                }
                if ( !v144 )
                  break;
LABEL_112:
                seed = EventMemberMargeUpValInfo__IsEmpry(v144, 0LL);
                if ( (seed & 1) != 0 )
                {
                  this = v207;
                }
                else
                {
                  v203 = v123;
                  servantName = (System_Int32_array **)v144->fields.servantName;
                  v165 = *(_BYTE *)(v161 + 128);
                  v166 = sub_B0D974(PartyOrganizationEventPointListViewItem_TypeInfo, v162, v163);
                  *(_DWORD *)(v166 + 136) = 1;
                  ListViewItem___ctor_23700744((ListViewItem_o *)v166, v64, 0LL);
                  *(_QWORD *)(v166 + 112) = servantName;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)(v166 + 112),
                    servantName,
                    v167,
                    v168,
                    v169,
                    v170,
                    v171,
                    v172);
                  *(_BYTE *)(v166 + 120) = v165;
                  *(_DWORD *)(v166 + 136) = 1;
                  if ( !v166 )
                    break;
                  *(float *)(v166 + 92) = v47;
                  *(float *)(v166 + 96) = v48;
                  *(float *)(v166 + 100) = v49;
                  v173 = v207->fields.seed;
                  if ( !v173 )
                    break;
                  seed = (__int64)v207->fields.itemList;
                  if ( !seed )
                    break;
                  y = v173->fields.arrangementPich.fields.y;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v166,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v144, 0LL);
                  if ( !seed )
                    break;
                  v177 = *(_QWORD *)(seed + 24);
                  v178 = seed;
                  ++v64;
                  v179 = v48 + y;
                  if ( (int)v177 < 1 )
                  {
                    this = v207;
                  }
                  else
                  {
                    v180 = 0;
                    v181 = 0LL;
                    v182 = seed + 32;
                    v205 = (int)v177;
                    while ( 1 )
                    {
                      v183 = *(_QWORD *)(v182 + 8 * v181);
                      if ( !v183 || *(_DWORD *)(v183 + 60) != 111 )
                        goto LABEL_127;
                      if ( !*(_BYTE *)(v204 + 128) )
                      {
                        seed = *(_QWORD *)(v204 + 168);
                        if ( !seed )
                          goto LABEL_152;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v204 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_127:
                          if ( v181 >= *(unsigned int *)(v178 + 24) )
                            goto LABEL_153;
                          v184 = *(System_Int32_array ***)(v182 + 8 * v181);
                          v166 = sub_B0D974(PartyOrganizationEventPointListViewItem_TypeInfo, v175, v176);
                          *(_DWORD *)(v166 + 136) = 1;
                          ListViewItem___ctor_23700744((ListViewItem_o *)v166, v64, 0LL);
                          *(_QWORD *)(v166 + 128) = v184;
                          sub_B0D840(
                            (BattleServantConfConponent_o *)(v166 + 128),
                            v184,
                            v185,
                            v186,
                            v187,
                            v188,
                            v189,
                            v190);
                          *(_DWORD *)(v166 + 136) = 1;
                          if ( !v166 )
                            goto LABEL_152;
                          *(float *)(v166 + 92) = v47;
                          *(float *)(v166 + 96) = v179;
                          *(float *)(v166 + 100) = v49;
                          v191 = v207->fields.seed;
                          if ( !v191 )
                            goto LABEL_152;
                          seed = (__int64)v207->fields.itemList;
                          if ( !seed )
                            goto LABEL_152;
                          ++v64;
                          v179 = v179 + v191->fields.arrangementPich.fields.y;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v166,
                            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                          ++v180;
                        }
                      }
                      if ( (__int64)++v181 >= v205 )
                        break;
                      if ( v181 >= *(unsigned int *)(v178 + 24) )
                        goto LABEL_153;
                    }
                    if ( v180 )
                    {
                      this = v207;
                      v124 = partyItema;
                      v123 = v203;
                      v48 = v179 + -8.0;
                      goto LABEL_142;
                    }
                    this = v207;
                    v124 = partyItema;
                  }
                  v123 = v203;
                  seed = (__int64)this->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)seed,
                           (WarBoardManager_TaskList_o *)v166,
                           (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v192 = this->fields.seed;
                  if ( !v192 )
                    break;
                  v48 = v179 - v192->fields.arrangementPich.fields.y;
                }
LABEL_142:
                v133 = eventUpValList;
                ++v134;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_152:
    sub_B0D97C(seed);
  }
LABEL_147:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10360/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfoList, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4217D6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&PartyOrganizationEventPointListViewItem_TypeInfo, v5);
    byte_4217D6A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  __int64 v15; // x1
  __int64 v16; // x2
  EventPartyMargeUpValInfo_o *v17; // x21
  const MethodInfo *v18; // x4
  EventUpValInfo_array *v19; // x8
  unsigned __int64 v20; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v22; // x9
  EventUpValInfo_o *v23; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v25; // w8
  void *v26; // x20
  __int64 v27; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x21
  __int64 v30; // x0
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-34h] BYREF

  eventIda = eventId;
  if ( (byte_4217D68 & 1) == 0 )
  {
    sub_B0D8A4(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v9);
    byte_4217D68 = 1;
  }
  eventUpValList = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  partyItem);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_27;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v17 = (EventPartyMargeUpValInfo_o *)sub_B0D974(EventPartyMargeUpValInfo_TypeInfo, v15, v16);
  EventPartyMargeUpValInfo___ctor(v17, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &eventUpValList, 0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v19 = eventUpValList;
    if ( !eventUpValList )
      goto LABEL_27;
    v20 = 0LL;
    while ( 1 )
    {
      max_length = v19->max_length;
      if ( (__int64)v20 >= (int)max_length )
        break;
      if ( v20 >= max_length )
        goto LABEL_28;
      v22 = &v19->obj.klass + v20;
      v23 = (EventUpValInfo_o *)v22[4];
      if ( v23 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_27;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v20,
          (EventUpValInfo_o *)v22[4],
          questRestrictionInfo->fields.eventId,
          v18);
        EventUpVal = EventUpValInfo__GetDropItemList(v23, v20, 0LL);
        if ( !v17 )
          goto LABEL_27;
        EventPartyMargeUpValInfo__Add(v17, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v19 = eventUpValList;
      }
      ++v20;
      if ( !v19 )
        goto LABEL_27;
    }
  }
  if ( !v17 )
    goto LABEL_27;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v17, 0LL);
  if ( EventUpVal )
  {
    v25 = *((_DWORD *)EventUpVal + 6);
    v26 = EventUpVal;
    if ( v25 >= 1 )
    {
      v27 = 0LL;
      while ( (unsigned int)v27 < v25 )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v26 + v27 + 4);
        if ( !v28 )
          goto LABEL_27;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v26 + v27 + 4),
                               0LL);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v10 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            v28,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        v25 = *((_DWORD *)v26 + 6);
        if ( (int)++v27 >= v25 )
          goto LABEL_25;
      }
LABEL_28:
      v30 = sub_B0D9A8(EventUpVal);
      sub_B0D948(v30, 0LL);
    }
  }
LABEL_25:
  if ( !v10 )
LABEL_27:
    sub_B0D97C(EventUpVal);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_4217D6F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217D6F = 1;
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
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v16; // x22
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  SkillLvMaster_o *v18; // x21
  int v19; // w8
  void *v20; // x22
  unsigned int v21; // w25
  __int64 v22; // x8
  System_Int32_array **v23; // x23
  int v24; // w8
  void *v25; // x24
  unsigned int v26; // w27
  __int64 v27; // x28
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x0
  int32_t actMaxRarity; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217D67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    byte_4217D67 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_36;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0LL);
  if ( Entity )
  {
    v16 = Entity;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           (PartyOrganizationUtility_o *)Instance,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v16->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_36;
      v18 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   MasterData_WarQuestSelectionMaster,
                   eventUpVal->fields.equipSvtId,
                   0LL);
      if ( !Instance )
        goto LABEL_36;
      v19 = *((_DWORD *)Instance + 6);
      v20 = Instance;
      if ( v19 >= 1 )
      {
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= v19 )
          {
LABEL_37:
            v30 = sub_B0D9A8(Instance);
            sub_B0D948(v30, 0LL);
          }
          v22 = *((_QWORD *)v20 + (int)v21 + 4);
          if ( !v22 )
            break;
          if ( *(_DWORD *)(v22 + 48) )
          {
            if ( !v18 )
              break;
            Instance = SkillLvMaster__GetEntity(v18, *(_DWORD *)(v22 + 28), 1, 0LL);
            if ( Instance )
            {
              v23 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0LL);
              if ( !Instance )
                break;
              v24 = *((_DWORD *)Instance + 6);
              v25 = Instance;
              if ( v24 >= 1 )
              {
                v26 = 0;
                while ( 1 )
                {
                  if ( v26 >= v24 )
                    goto LABEL_37;
                  v27 = *((_QWORD *)v25 + (int)v26 + 4);
                  if ( !v27 )
                    goto LABEL_36;
                  v28 = *(_QWORD *)(v27 + 24);
                  if ( !v28 )
                    goto LABEL_36;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v23[4],
                                       *(_DWORD *)(v28 + 16),
                                       (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v24 = *((_DWORD *)v25 + 6);
                  if ( (int)++v26 >= v24 )
                    goto LABEL_34;
                }
                v29 = *(_QWORD *)(v27 + 24);
                if ( !v29 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v29 + 16), 0LL);
              }
            }
          }
LABEL_34:
          v19 = *((_DWORD *)v20 + 6);
          if ( (int)++v21 >= v19 )
            return;
        }
LABEL_36:
        sub_B0D97C(Instance);
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
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4217D6D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4217D6D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(
        v19,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationEventPointListViewObject__Init(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_30719368(
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4217D6E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4217D6E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationEventPointListViewObject__Init(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_30718824(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_30718824(
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
  int32_t size; // w8
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *v16; // x20
  int v17; // w26
  __int64 v18; // x23
  PartyOrganizationEventPointListViewObject_o *v19; // x21
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3
  float v22; // s0
  int v23; // s1
  int32_t v26; // w1

  if ( (byte_4217D6C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v6);
    sub_B0D8A4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v7);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v8);
    byte_4217D6C = 1;
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
      PartyOrganizationEventPointListViewManager__RequestListObject_30719368(this, v11, v10);
      return;
    }
    return;
  }
  ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v9);
  if ( !ClippingObjectList )
LABEL_22:
    sub_B0D97C(ClippingObjectList);
  size = ClippingObjectList->fields._size;
  v16 = ClippingObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
    return;
  }
  this->fields.callbackCount = size;
  v17 = ClippingObjectList->fields._size;
  if ( v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v17 <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v19 = v16->fields._items->m_Items[v18];
      v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
      System_Action___ctor(
        v20,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !v19 )
        break;
      *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
      if ( (int)v18 >= v17 - 1 )
        v26 = 5;
      else
        v26 = 2;
      PartyOrganizationEventPointListViewObject__Init(v19, v26, v20, v22, *(UnityEngine_Vector3_o *)&v23, v21);
      v17 = v16->fields._size;
      if ( (int)++v18 >= v17 )
        return;
    }
    goto LABEL_22;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_30719312(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_30718824(this, mode, v10);
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
  if ( (byte_4217D6B & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_B0D8A4(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             obj);
    byte_4217D6B = 1;
  }
  if ( !obj
    || (v6 = *(&PartyOrganizationEventPointListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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


bool __fastcall PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        EventDropItemUpValInfo_array **campaignFriendshipUpPoints,
        PartyListViewItem_o *partyItem,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v8; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  void *HeroineData; // x0
  EventDropItemUpValInfo_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  PartyOrganizationListViewItem_o *v41; // x22
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x23
  const MethodInfo *v44; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x25
  __int64 v47; // x8
  unsigned __int64 v48; // x20
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v49; // x19
  unsigned __int64 v50; // x23
  unsigned __int64 v51; // x22
  int32_t Item1; // w25
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x24
  PartyOrganizationEventPointListViewManager___c_c *v56; // x0
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__30_0; // x25
  Il2CppObject *v59; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  PartyOrganizationEventPointListViewManager___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x25
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v72; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__30_1; // x26
  Il2CppObject *v74; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x25
  PartyOrganizationEventPointListViewManager___c_c *v83; // x0
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v84; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__30_2; // x26
  Il2CppObject *v86; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  PartyOrganizationEventPointListViewManager___c_c *v97; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x24
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v99; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__30_3; // x26
  Il2CppObject *v101; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x27
  __int64 v110; // x24
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x26
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x1
  __int64 v127; // x2
  EventDropUpValInfo_o *v128; // x23
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x22
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  __int64 v151; // x0
  BattleServantConfConponent_o *v152; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v153; // [xsp+10h] [xbp-70h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v154; // [xsp+18h] [xbp-68h]
  int32_t member; // [xsp+28h] [xbp-58h]
  int32_t v156; // [xsp+2Ch] [xbp-54h]

  if ( (byte_4217D70 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, campaignFriendshipUpPoints);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Single_string___, v12);
    sub_B0D8A4(&EventDropItemUpValInfo_TypeInfo, v13);
    sub_B0D8A4(&EventDropUpValInfo_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Func_EventEntity_ScriptData__string___ctor__, v15);
    sub_B0D8A4(&Method_System_Func_string__bool___ctor__, v16);
    sub_B0D8A4(&System_Func_EventEntity_ScriptData__string__TypeInfo, v17);
    sub_B0D8A4(&System_Func_string__bool__TypeInfo, v18);
    sub_B0D8A4(&FunctionEntity_TypeInfo, v19);
    sub_B0D8A4(&FunctionGroupEntity_TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v24);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B0D8A4(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
      v26);
    sub_B0D8A4(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
      v27);
    sub_B0D8A4(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
      v28);
    sub_B0D8A4(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
      v29);
    sub_B0D8A4(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v30);
    sub_B0D8A4(&StringLiteral_1/*""*/, v31);
    byte_4217D70 = 1;
  }
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                                                                  campaignFriendshipUpPoints,
                                                                                                  partyItem);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v32 )
    goto LABEL_83;
  v34 = (EventDropItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *campaignFriendshipUpPoints = v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)campaignFriendshipUpPoints,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !partyItem )
    goto LABEL_83;
  HeroineData = PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_83;
  v41 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*((_QWORD *)HeroineData + 14) || *((_BYTE *)HeroineData + 128) || !*((_QWORD *)HeroineData + 41) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v41, v44);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  HeroineData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_83;
  HeroineData = UserServantMaster__getHeroineData(Master_WarQuestSelectionMaster, (int32_t)HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = (void *)UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( ((unsigned __int8)HeroineData & 1) == 0 )
      return 0;
  }
  v152 = (BattleServantConfConponent_o *)campaignFriendshipUpPoints;
  v153 = v32;
  FriendshipUpValTuple_k__BackingField = v41->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_83;
  v47 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v47 >= 1 )
  {
    v48 = 0LL;
    v49 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v154 = v41->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v48 >= (unsigned int)v47 )
      {
        v151 = sub_B0D9A8(HeroineData);
        sub_B0D948(v151, 0LL);
      }
      v50 = *(_QWORD *)&v49[-1].fields.Item2;
      v51 = HIDWORD(v50);
      if ( SHIDWORD(v50) >= 1 )
      {
        Item1 = v49->fields.Item1;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        HeroineData = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !HeroineData )
          goto LABEL_83;
        HeroineData = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)HeroineData,
                        v50,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !HeroineData )
          goto LABEL_83;
        v55 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)HeroineData + 15);
        if ( !v55 )
          goto LABEL_83;
        v156 = Item1;
        if ( v55[1].monitor )
        {
          v56 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v56 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          static_fields = v56->static_fields;
          _9__30_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__30_0;
          if ( !_9__30_0 )
          {
            if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v56);
              static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            }
            v59 = (Il2CppObject *)static_fields->__9;
            _9__30_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(System_Func_EventEntity_ScriptData__string__TypeInfo, v53, v54);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
              _9__30_0,
              v59,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
              (const MethodInfo_261A104 *)Method_System_Func_EventEntity_ScriptData__string___ctor__);
            v60 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v60->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v60->__9__30_0,
              (System_Int32_array **)_9__30_0,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66);
          }
          v67 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                  v55,
                  (System_Func_TSource__TResult__o *)_9__30_0,
                  (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v70 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v67;
          if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v70 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v72 = v70->static_fields;
          _9__30_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v72->__9__30_1;
          if ( !_9__30_1 )
          {
            if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v70);
              v72 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            }
            v74 = (Il2CppObject *)v72->__9;
            _9__30_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                            System_Func_string__bool__TypeInfo,
                                                                                            v68,
                                                                                            v69);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__30_1,
              v74,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
              (const MethodInfo_26189B8 *)Method_System_Func_string__bool___ctor__);
            v75 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v75->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v75->__9__30_1,
              (System_Int32_array **)_9__30_1,
              v76,
              v77,
              v78,
              v79,
              v80,
              v81);
          }
          v82 = (System_Int32_array **)System_Linq_Enumerable__Single_DiscriminatedUnionConverter_UnionCase_(
                                         v71,
                                         (System_Func_TSource__bool__o *)_9__30_1,
                                         (const MethodInfo_1B5495C *)Method_System_Linq_Enumerable_Single_string___);
          if ( v55[1].monitor )
          {
            v83 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
              v83 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v84 = v83->static_fields;
            _9__30_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v84->__9__30_2;
            if ( !_9__30_2 )
            {
              if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v83);
                v84 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              }
              v86 = (Il2CppObject *)v84->__9;
              _9__30_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(System_Func_EventEntity_ScriptData__string__TypeInfo, v53, v54);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                _9__30_2,
                v86,
                Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
                (const MethodInfo_261A104 *)Method_System_Func_EventEntity_ScriptData__string___ctor__);
              v87 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              v87->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v87->__9__30_2,
                (System_Int32_array **)_9__30_2,
                v88,
                v89,
                v90,
                v91,
                v92,
                v93);
            }
            v94 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                    v55,
                    (System_Func_TSource__TResult__o *)_9__30_2,
                    (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
            v97 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            v98 = (System_Collections_Generic_IEnumerable_TSource__o *)v94;
            if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
              v97 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v99 = v97->static_fields;
            _9__30_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v99->__9__30_3;
            if ( !_9__30_3 )
            {
              if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v97);
                v99 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              }
              v101 = (Il2CppObject *)v99->__9;
              _9__30_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                              System_Func_string__bool__TypeInfo,
                                                                                              v95,
                                                                                              v96);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                _9__30_3,
                v101,
                Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
                (const MethodInfo_26189B8 *)Method_System_Func_string__bool___ctor__);
              v102 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              v102->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v102->__9__30_3,
                (System_Int32_array **)_9__30_3,
                v103,
                v104,
                v105,
                v106,
                v107,
                v108);
            }
            v109 = (System_Int32_array **)System_Linq_Enumerable__Single_DiscriminatedUnionConverter_UnionCase_(
                                            v98,
                                            (System_Func_TSource__bool__o *)_9__30_3,
                                            (const MethodInfo_1B5495C *)Method_System_Linq_Enumerable_Single_string___);
          }
          else
          {
            v109 = (System_Int32_array **)StringLiteral_1/*""*/;
          }
        }
        else
        {
          v82 = (System_Int32_array **)StringLiteral_1/*""*/;
          v109 = (System_Int32_array **)StringLiteral_1/*""*/;
        }
        v110 = sub_B0D974(FunctionEntity_TypeInfo, v53, v54);
        FunctionEntity___ctor((FunctionEntity_o *)v110, 0LL);
        if ( !v110 )
          goto LABEL_83;
        *(_DWORD *)(v110 + 16) = -2;
        *(_QWORD *)(v110 + 24) = 111LL;
        v113 = sub_B0D974(FunctionGroupEntity_TypeInfo, v111, v112);
        FunctionGroupEntity___ctor((FunctionGroupEntity_o *)v113, 0LL);
        if ( !v113 )
          goto LABEL_83;
        *(_DWORD *)(v113 + 16) = -2;
        *(_DWORD *)(v113 + 20) = v50;
        *(_DWORD *)(v113 + 24) = 0;
        *(_QWORD *)(v113 + 40) = v82;
        sub_B0D840((BattleServantConfConponent_o *)(v113 + 40), v82, v114, v115, v116, v117, v118, v119);
        *(_QWORD *)(v113 + 32) = v109;
        sub_B0D840((BattleServantConfConponent_o *)(v113 + 32), v109, v120, v121, v122, v123, v124, v125);
        *(_BYTE *)(v113 + 56) = 1;
        v128 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v126, v127);
        EventDropUpValInfo___ctor(v128, 0, (FunctionEntity_o *)v110, 0LL);
        if ( v156 == 2 )
        {
          FriendshipUpValTuple_k__BackingField = v154;
          if ( !v128 )
            goto LABEL_83;
          EventDropUpValInfo__SetRateCount(v128, v51, 0, 0, 0LL);
        }
        else
        {
          FriendshipUpValTuple_k__BackingField = v154;
          if ( v156 == 1 )
          {
            if ( !v128 )
              goto LABEL_83;
            EventDropUpValInfo__SetAddCount(v128, v51, 0, 0, 0LL);
          }
          else if ( !v128 )
          {
            goto LABEL_83;
          }
        }
        if ( v128->fields.rateCount > 0 || v128->fields.addCount >= 1 )
        {
          v131 = sub_B0D974(EventDropItemUpValInfo_TypeInfo, v129, v130);
          EventDropItemUpValInfo___ctor((EventDropItemUpValInfo_o *)v131, member, v128, 0, 0LL);
          if ( !v131 )
            goto LABEL_83;
          *(_QWORD *)(v131 + 40) = v113;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v131 + 40),
            (System_Int32_array **)v113,
            v132,
            v133,
            v134,
            v135,
            v136,
            v137);
          *(_QWORD *)(v131 + 32) = v113;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v131 + 32),
            (System_Int32_array **)v113,
            v138,
            v139,
            v140,
            v141,
            v142,
            v143);
          *(_DWORD *)(v131 + 56) = *(_DWORD *)(v110 + 28);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v153,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v131,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
        }
      }
      LODWORD(v47) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v48;
      ++v49;
    }
    while ( (__int64)v48 < (int)v47 );
  }
  v144 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v153,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  v152->klass = (BattleServantConfConponent_c *)v144;
  sub_B0D840(v152, v144, v145, v146, v147, v148, v149, v150);
  if ( !v152->klass )
LABEL_83:
    sub_B0D97C(HeroineData);
  return LODWORD(v152->klass->_1.namespaze) != 0;
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

  if ( (byte_4217D61 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217D61 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217D63 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217D63 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  PartyOrganizationEventPointListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4217D66 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217D66 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (PartyOrganizationEventPointListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)current,
                                                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v12;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217D65 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217D65 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v12;
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

  if ( (byte_4217D62 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217D62 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217D64 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217D64 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_421217F & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9);
    byte_421217F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_421217C & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v1);
    byte_421217C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(PartyOrganizationEventPointListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_421217D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, names);
    byte_421217D = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_B0D97C(this);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_421217E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, names);
    byte_421217E = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}