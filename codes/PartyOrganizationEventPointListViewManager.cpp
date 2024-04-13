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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  System_Collections_Generic_List_int__o *v93; // x23
  System_Collections_Generic_List_T__o *v94; // x0
  __int64 seed; // x0
  MethodInfo *max_length; // x1
  float v97; // s0
  float v98; // s1
  float v99; // s2
  EventUpValInfo_array *v100; // x8
  float v101; // s8
  float v102; // s10
  float v103; // s9
  unsigned __int64 v104; // x22
  EventUpValInfo_o *v105; // x8
  _BOOL8 v106; // x0
  __int64 v107; // x1
  Il2CppObject *current; // x28
  const MethodInfo_201EFCC *v109; // x1
  int v110; // w21
  PartyOrganizationEventPointListViewManager_o *v111; // x0
  const MethodInfo *v112; // x4
  int v113; // w8
  EventDropItemUpValInfo_array *v114; // x28
  signed int v115; // w9
  int32_t v116; // w8
  unsigned int *v117; // x22
  int32_t v118; // w23
  _BOOL8 v119; // x0
  const MethodInfo *v120; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  __int64 v122; // x1
  EventMargeItemUpValInfo_array *v123; // x25
  int32_t v124; // w24
  System_Int32_array **v125; // x27
  __int64 v126; // x26
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  __int64 v133; // x0
  __int64 v134; // x1
  struct ListViewItemSeed_o *v135; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  float v137; // s10
  __int64 v138; // x0
  __int64 v139; // x1
  int v140; // w8
  int32_t v141; // w9
  System_Int32_array **v142; // x27
  __int64 v143; // x26
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x0
  __int64 v151; // x1
  struct ListViewItemSeed_o *v152; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v153; // x0
  UnityEngine_GameObject_o *v154; // x0
  PartyOrganizationEventPointListViewManager_o *v155; // x0
  __int64 v156; // x1
  const MethodInfo *v157; // x4
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v160; // x1
  __int64 v161; // x0
  __int64 v162; // x1
  struct ListViewItemSeed_o *v163; // x8
  UnityEngine_GameObject_o *v164; // x0
  EventUpValInfo_array *v165; // x8
  unsigned __int64 v166; // x24
  BattleServantConfConponent_o *v167; // x25
  unsigned __int64 v168; // x9
  Il2CppClass **v169; // x9
  EventUpValInfo_o *v170; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v173; // x1
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x26
  int v181; // w19
  PartyListViewItem_o *v182; // x21
  int v183; // w8
  struct EventMemberMargeUpValInfo_array *v184; // x0
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  EventUpValInfo_array *v191; // x8
  unsigned __int64 v192; // x25
  ServantEntity_o *v193; // x28
  int v194; // w26
  __int64 v195; // x19
  System_String_o *SvtNameText; // x0
  char v197; // w21
  System_String_o *v198; // x20
  EventMemberMargeUpValInfo_o *v199; // x27
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  unsigned int *v206; // x19
  unsigned int *v207; // x0
  EventUpValInfo_array *v208; // x8
  unsigned __int64 v209; // x19
  struct EventMemberMargeUpValInfo_array *v210; // x8
  _BOOL8 v211; // x0
  __int64 v212; // x1
  struct EventMemberMargeUpValInfo_array *v213; // x8
  EventMemberMargeUpValInfo_o *v214; // x0
  int v215; // w8
  __int64 v216; // x24
  System_Int32_array **servantName; // x20
  char v218; // w19
  __int64 v219; // x28
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  struct ListViewItemSeed_o *v226; // x8
  float y; // s12
  __int64 v228; // x8
  __int64 v229; // x27
  float v230; // s10
  int v231; // w21
  unsigned __int64 v232; // x26
  __int64 v233; // x19
  __int64 v234; // x8
  System_Int32_array **v235; // x20
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  struct ListViewItemSeed_o *v242; // x8
  struct ListViewItemSeed_o *v243; // x8
  __int64 v244; // x0
  UILabel_o *emptyMessageLabel; // x20
  __int64 v246; // x0
  __int64 v247; // x0
  __int64 v248; // x0
  __int64 v249; // x0
  __int64 v250; // x0
  __int64 v251; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // [xsp+8h] [xbp-158h]
  int v253; // [xsp+1Ch] [xbp-144h]
  int v254; // [xsp+1Ch] [xbp-144h]
  __int64 v255; // [xsp+20h] [xbp-140h]
  signed __int64 v256; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v257; // [xsp+30h] [xbp-130h]
  PartyOrganizationEventPointListViewManager_o *v258; // [xsp+38h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+40h] [xbp-120h]
  _BYTE v260[36]; // [xsp+48h] [xbp-118h] BYREF
  int v261; // [xsp+6Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+70h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v263; // [xsp+90h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v264; // [xsp+B0h] [xbp-B0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+C8h] [xbp-98h] BYREF
  int32_t eventId[3]; // [xsp+D4h] [xbp-8Ch] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+E8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v268; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB09E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, (_DWORD)partyItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v27, v28, v29);
    sub_B5D5C4(&EventDropItemUpValInfo_____TypeInfo, v30, v31, v32);
    sub_B5D5C4(&EventMemberMargeUpValInfo___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&EventMemberMargeUpValInfo_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v66, v67, v68);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__, v69, v70, v71);
    sub_B5D5C4(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v72, v73, v74);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v75, v76, v77);
    sub_B5D5C4(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo, v78, v79, v80);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&PartyOrganizationEventPointListViewItem_TypeInfo, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_10534/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_10442/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, v90, v91, v92);
    byte_42EB09E = 1;
  }
  eventUpValList = 0LL;
  eventId[0] = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v264, 0, sizeof(v264));
  memset(&v263, 0, sizeof(v263));
  memset(&i, 0, sizeof(i));
  v261 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v93 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v93,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v257 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v257,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v94 = (System_Collections_Generic_List_T__o *)sub_B5D694(System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v94,
    (const MethodInfo_2FBF5D8 *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_152;
  if ( PartyListViewItem__GetEventUpVal(partyItem, eventId, &eventUpValList, 0LL) )
  {
    v258 = this;
    partyItema = partyItem;
    seed = (__int64)this->fields.seed;
    if ( seed )
    {
      *(UnityEngine_Vector3_o *)&v97 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
      v100 = eventUpValList;
      if ( eventUpValList )
      {
        v253 = 0;
        v101 = v97;
        v102 = v98;
        v103 = v99;
        v104 = 0LL;
        while ( 1 )
        {
          max_length = (MethodInfo *)v100->max_length;
          if ( (__int64)v104 >= (int)max_length )
            break;
          if ( v104 >= (unsigned __int64)max_length )
            goto LABEL_153;
          v105 = v100->m_Items[v104];
          if ( v105 )
          {
            seed = (__int64)v105->fields.dropList;
            if ( !seed )
              goto LABEL_152;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v260,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)seed,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v264 = *(System_Collections_Generic_List_Enumerator_T__o *)v260;
            while ( 1 )
            {
              v106 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v264,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v106 )
                break;
              current = v264.fields.current;
              if ( !v264.fields.current )
                sub_B5D69C(v106, v107);
              if ( !v93 )
                sub_B5D69C(v106, v107);
              if ( !System_Collections_Generic_List_int___Contains(
                      v93,
                      (int32_t)v264.fields.current[1].klass,
                      (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
                System_Collections_Generic_List_int___Add(
                  v93,
                  (int32_t)current[1].klass,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
            v109 = (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__;
            *(_DWORD *)&v260[4 * v253 + 24] = 153;
            v110 = ++v261;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(&v264, v109);
            if ( v110 )
            {
              v113 = v110 - 1;
              if ( *(_DWORD *)&v260[4 * v110 + 20] == 153 )
              {
                --v110;
                v261 = v113;
              }
            }
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v111,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v104,
                     v112);
            if ( (seed & 1) != 0 )
            {
              v114 = campaignFriendshipUpPoints;
              eventId[0] = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_152;
              v115 = campaignFriendshipUpPoints->max_length;
              if ( v115 >= 1 )
              {
                v116 = 0;
                while ( v116 < (unsigned int)v115 )
                {
                  seed = (__int64)v257;
                  if ( !v257 )
                    goto LABEL_152;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v257,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v114->m_Items[v116],
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
                  v116 = eventId[0] + 1;
                  eventId[0] = v116;
                  v115 = v114->max_length;
                  if ( v116 >= v115 )
                    goto LABEL_28;
                }
LABEL_153:
                v246 = sub_B5D6C8(seed);
                sub_B5D668(v246, 0LL);
              }
            }
LABEL_28:
            v253 = v110;
          }
          v100 = eventUpValList;
          ++v104;
          if ( !eventUpValList )
            goto LABEL_152;
        }
        seed = sub_B5D5DC(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v93 )
        {
          v117 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v260,
            v93,
            (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v118 = 0;
          v263 = *(System_Collections_Generic_List_Enumerator_int__o *)v260;
          while ( 1 )
          {
            v119 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                     &v263,
                     (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v119 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v119,
                                    v263.fields.current,
                                    partyItem,
                                    v120);
            v123 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_B5D69C(0LL, v122);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v124 = v118 + 1;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v125 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_10534/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
              v126 = sub_B5D694(PartyOrganizationEventPointListViewItem_TypeInfo);
              *(_DWORD *)(v126 + 136) = 1;
              ListViewItem___ctor_23901828((ListViewItem_o *)v126, v118, 0LL);
              *(_QWORD *)(v126 + 112) = v125;
              sub_B5D560((BattleServantConfConponent_o *)(v126 + 112), v125, v127, v128, v129, v130, v131, v132);
              *(float *)(v126 + 92) = v101;
              *(float *)(v126 + 96) = v102;
              this = v258;
              *(_BYTE *)(v126 + 120) = 0;
              *(_DWORD *)(v126 + 136) = 0;
              *(float *)(v126 + 100) = v103;
              v135 = v258->fields.seed;
              if ( !v135 )
                sub_B5D69C(v133, v134);
              itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v258->fields.itemList;
              v137 = v102 + v135->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_B5D69C(0LL, v134);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                itemList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v126,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              eventId[0] = 0;
              v140 = v123->max_length;
              if ( v140 < 1 )
              {
                ++v118;
              }
              else
              {
                v141 = 0;
                do
                {
                  if ( v141 >= (unsigned int)v140 )
                  {
                    v249 = sub_B5D6C8(v138);
                    sub_B5D668(v249, 0LL);
                  }
                  v142 = (System_Int32_array **)v123->m_Items[v141];
                  v118 = v124 + 1;
                  v143 = sub_B5D694(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v143 + 136) = 1;
                  ListViewItem___ctor_23901828((ListViewItem_o *)v143, v124, 0LL);
                  *(_QWORD *)(v143 + 128) = v142;
                  sub_B5D560((BattleServantConfConponent_o *)(v143 + 128), v142, v144, v145, v146, v147, v148, v149);
                  *(float *)(v143 + 92) = v101;
                  *(float *)(v143 + 96) = v137;
                  this = v258;
                  *(_DWORD *)(v143 + 136) = 0;
                  *(float *)(v143 + 100) = v103;
                  v152 = v258->fields.seed;
                  if ( !v152 )
                    sub_B5D69C(v150, v151);
                  v153 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v258->fields.itemList;
                  v137 = v137 + v152->fields.arrangementPich.fields.y;
                  if ( !v153 )
                    sub_B5D69C(0LL, v151);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v153,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v143,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  ++v124;
                  v141 = eventId[0] + 1;
                  eventId[0] = v141;
                  v140 = v123->max_length;
                }
                while ( v141 < v140 );
              }
              lineObj = this->fields.lineObj;
              if ( !lineObj )
                sub_B5D69C(0LL, v139);
              transform = UnityEngine_GameObject__get_transform(lineObj, 0LL);
              if ( !transform )
                sub_B5D69C(0LL, v160);
              v268.fields.x = v101;
              v268.fields.y = v137;
              v268.fields.z = v103;
              UnityEngine_Transform__set_localPosition(transform, v268, 0LL);
              v163 = this->fields.seed;
              if ( !v163 )
                sub_B5D69C(v161, v162);
              v164 = this->fields.lineObj;
              v102 = v137 + v163->fields.arrangementPich.fields.y;
              if ( !v164 )
                sub_B5D69C(0LL, v162);
              UnityEngine_GameObject__SetActive(v164, 1, 0LL);
            }
            else
            {
              v154 = this->fields.lineObj;
              if ( !v154 )
                sub_B5D69C(0LL, v122);
              UnityEngine_GameObject__SetActive(v154, 0, 0LL);
            }
            v165 = eventUpValList;
            if ( !eventUpValList )
LABEL_70:
              sub_B5D69C(v155, v156);
            v166 = 0LL;
            v167 = (BattleServantConfConponent_o *)(v117 + 8);
            while ( 1 )
            {
              v168 = v165->max_length;
              if ( (__int64)v166 >= (int)v168 )
                break;
              if ( v166 >= v168 )
              {
                v247 = sub_B5D6C8(v155);
                sub_B5D668(v247, 0LL);
              }
              v169 = &v165->obj.klass + v166;
              v170 = (EventUpValInfo_o *)v169[4];
              if ( v170 )
              {
                questRestrictionInfo = partyItem->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_B5D69C(v155, v156);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v155,
                  v166,
                  (EventUpValInfo_o *)v169[4],
                  questRestrictionInfo->fields.eventId,
                  v157);
                DropItemList = EventUpValInfo__GetDropItemList(v170, v166, 0LL);
                if ( !v117 )
                  sub_B5D69C(DropItemList, v173);
                v180 = (System_Int32_array **)DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_B5D684(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v117 + 64LL));
                  if ( !DropItemList )
                  {
                    v250 = sub_B5D6BC(0LL);
                    sub_B5D668(v250, 0LL);
                  }
                }
                if ( v166 >= v117[6] )
                {
                  v248 = sub_B5D6C8(DropItemList);
                  sub_B5D668(v248, 0LL);
                }
                v167->klass = (BattleServantConfConponent_c *)v180;
                sub_B5D560(v167, v180, v174, v175, v176, v177, v178, v179);
                v165 = eventUpValList;
              }
              ++v166;
              v167 = (BattleServantConfConponent_o *)((char *)v167 + 8);
              if ( !v165 )
                goto LABEL_70;
            }
          }
          *(_DWORD *)&v260[4 * v253 + 24] = 594;
          v181 = ++v261;
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v263,
            (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v182 = partyItem;
          if ( v181 )
          {
            v183 = v181 - 1;
            if ( *(_DWORD *)&v260[4 * v181 + 20] == 594 )
            {
              --v181;
              v261 = v183;
            }
          }
          if ( eventUpValList )
          {
            v184 = (struct EventMemberMargeUpValInfo_array *)sub_B5D5DC(
                                                               EventMemberMargeUpValInfo___TypeInfo,
                                                               eventUpValList->max_length);
            this->fields.eventMargeUpValInfoList = v184;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfoList,
              (System_Int32_array **)v184,
              v185,
              v186,
              v187,
              v188,
              v189,
              v190);
            v191 = eventUpValList;
            if ( eventUpValList )
            {
              v192 = 0LL;
              p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
              do
              {
                if ( (__int64)v192 >= (int)v191->max_length )
                  goto LABEL_147;
                seed = (__int64)PartyListViewItem__GetMember(v182, v192, 0LL);
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
                v193 = *(ServantEntity_o **)(seed + 176);
                v194 = v181;
                v195 = seed;
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                max_length);
                v255 = v195;
                v197 = *(_BYTE *)(v195 + 128);
                v198 = SvtNameText;
                v199 = (EventMemberMargeUpValInfo_o *)sub_B5D694(EventMemberMargeUpValInfo_TypeInfo);
                EventMemberMargeUpValInfo___ctor(v199, v192, v193, v198, v197, 0LL);
                v206 = (unsigned int *)*p_eventMargeUpValInfoList;
                if ( !*p_eventMargeUpValInfoList )
                  break;
                if ( v199 )
                {
                  seed = sub_B5D684(v199, *(_QWORD *)(*(_QWORD *)v206 + 64LL));
                  if ( !seed )
                  {
                    v251 = sub_B5D6BC(0LL);
                    sub_B5D668(v251, 0LL);
                  }
                }
                v182 = partyItema;
                if ( v192 >= v206[6] )
                  goto LABEL_153;
                v207 = &v206[2 * v192];
                *((_QWORD *)v207 + 4) = v199;
                sub_B5D560(
                  (BattleServantConfConponent_o *)(v207 + 8),
                  (System_Int32_array **)v199,
                  v200,
                  v201,
                  v202,
                  v203,
                  v204,
                  v205);
                v208 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v209 = 0LL;
                while ( (__int64)v209 < (int)v208->max_length )
                {
                  if ( !v117 )
                    goto LABEL_152;
                  if ( v209 >= v117[6] )
                    goto LABEL_153;
                  max_length = *(MethodInfo **)&v117[2 * v209 + 8];
                  if ( max_length )
                  {
                    v210 = *p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      goto LABEL_152;
                    if ( v192 >= v210->max_length )
                      goto LABEL_153;
                    seed = (__int64)v210->m_Items[v192];
                    if ( !seed )
                      goto LABEL_152;
                    EventMemberMargeUpValInfo__Add(
                      (EventMemberMargeUpValInfo_o *)seed,
                      (EventDropItemUpValInfo_array *)max_length,
                      0LL);
                    v208 = eventUpValList;
                  }
                  ++v209;
                  if ( !v208 )
                    goto LABEL_152;
                }
                seed = (__int64)v257;
                if ( !v257 )
                  break;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v260,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v257,
                  (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v260;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v214,
                        (EventDropItemUpValInfo_o *)i.fields.current,
                        0LL) )
                {
                  v211 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                           &i,
                           (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v211 )
                    break;
                  v213 = *p_eventMargeUpValInfoList;
                  if ( !*p_eventMargeUpValInfoList )
                    sub_B5D69C(v211, v212);
                  if ( v192 >= v213->max_length )
                  {
                    v244 = sub_B5D6C8(v211);
                    sub_B5D668(v244, 0LL);
                  }
                  v214 = v213->m_Items[v192];
                  if ( !v214 )
                    sub_B5D69C(0LL, v212);
                }
                *(_DWORD *)&v260[4 * v194 + 24] = 806;
                v181 = ++v261;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &i,
                  (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( v181 )
                {
                  v215 = v181 - 1;
                  v216 = v255;
                  if ( *(_DWORD *)&v260[4 * v181 + 20] == 806 )
                  {
                    --v181;
                    v261 = v215;
                    if ( !v199 )
                      break;
                    goto LABEL_112;
                  }
                }
                else
                {
                  v216 = v255;
                }
                if ( !v199 )
                  break;
LABEL_112:
                seed = EventMemberMargeUpValInfo__IsEmpry(v199, 0LL);
                if ( (seed & 1) != 0 )
                {
                  this = v258;
                }
                else
                {
                  v254 = v181;
                  servantName = (System_Int32_array **)v199->fields.servantName;
                  v218 = *(_BYTE *)(v216 + 128);
                  v219 = sub_B5D694(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v219 + 136) = 1;
                  ListViewItem___ctor_23901828((ListViewItem_o *)v219, v118, 0LL);
                  *(_QWORD *)(v219 + 112) = servantName;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)(v219 + 112),
                    servantName,
                    v220,
                    v221,
                    v222,
                    v223,
                    v224,
                    v225);
                  *(_BYTE *)(v219 + 120) = v218;
                  *(_DWORD *)(v219 + 136) = 1;
                  if ( !v219 )
                    break;
                  *(float *)(v219 + 92) = v101;
                  *(float *)(v219 + 96) = v102;
                  *(float *)(v219 + 100) = v103;
                  v226 = v258->fields.seed;
                  if ( !v226 )
                    break;
                  seed = (__int64)v258->fields.itemList;
                  if ( !seed )
                    break;
                  y = v226->fields.arrangementPich.fields.y;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v219,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v199, 0LL);
                  if ( !seed )
                    break;
                  v228 = *(_QWORD *)(seed + 24);
                  v229 = seed;
                  ++v118;
                  v230 = v102 + y;
                  if ( (int)v228 < 1 )
                  {
                    this = v258;
                  }
                  else
                  {
                    v231 = 0;
                    v232 = 0LL;
                    v233 = seed + 32;
                    v256 = (int)v228;
                    while ( 1 )
                    {
                      v234 = *(_QWORD *)(v233 + 8 * v232);
                      if ( !v234 || *(_DWORD *)(v234 + 60) != 111 )
                        goto LABEL_127;
                      if ( !*(_BYTE *)(v255 + 128) )
                      {
                        seed = *(_QWORD *)(v255 + 176);
                        if ( !seed )
                          goto LABEL_152;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v255 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_127:
                          if ( v232 >= *(unsigned int *)(v229 + 24) )
                            goto LABEL_153;
                          v235 = *(System_Int32_array ***)(v233 + 8 * v232);
                          v219 = sub_B5D694(PartyOrganizationEventPointListViewItem_TypeInfo);
                          *(_DWORD *)(v219 + 136) = 1;
                          ListViewItem___ctor_23901828((ListViewItem_o *)v219, v118, 0LL);
                          *(_QWORD *)(v219 + 128) = v235;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)(v219 + 128),
                            v235,
                            v236,
                            v237,
                            v238,
                            v239,
                            v240,
                            v241);
                          *(_DWORD *)(v219 + 136) = 1;
                          if ( !v219 )
                            goto LABEL_152;
                          *(float *)(v219 + 92) = v101;
                          *(float *)(v219 + 96) = v230;
                          *(float *)(v219 + 100) = v103;
                          v242 = v258->fields.seed;
                          if ( !v242 )
                            goto LABEL_152;
                          seed = (__int64)v258->fields.itemList;
                          if ( !seed )
                            goto LABEL_152;
                          ++v118;
                          v230 = v230 + v242->fields.arrangementPich.fields.y;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v219,
                            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                          ++v231;
                        }
                      }
                      if ( (__int64)++v232 >= v256 )
                        break;
                      if ( v232 >= *(unsigned int *)(v229 + 24) )
                        goto LABEL_153;
                    }
                    if ( v231 )
                    {
                      this = v258;
                      v182 = partyItema;
                      v181 = v254;
                      v102 = v230 + -8.0;
                      goto LABEL_142;
                    }
                    this = v258;
                    v182 = partyItema;
                  }
                  v181 = v254;
                  seed = (__int64)this->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)seed,
                           (WarBoardManager_TaskList_o *)v219,
                           (const MethodInfo_305896C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v243 = this->fields.seed;
                  if ( !v243 )
                    break;
                  v102 = v230 - v243->fields.arrangementPich.fields.y;
                }
LABEL_142:
                v191 = eventUpValList;
                ++v192;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_152:
    sub_B5D69C(seed, max_length);
  }
LABEL_147:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10442/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfoList, 0LL, v3, v4, v5, v6, v7, v8);
}


PartyOrganizationEventPointListViewItem_o *__fastcall PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EB09F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&PartyOrganizationEventPointListViewItem_TypeInfo, v6, v7, v8);
    byte_42EB09F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&PartyOrganizationEventPointListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (PartyOrganizationEventPointListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == PartyOrganizationEventPointListViewItem_TypeInfo )
    return (PartyOrganizationEventPointListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


EventMargeItemUpValInfo_array *__fastcall PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t eventId,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *EventUpVal; // x0
  __int64 v20; // x1
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  EventPartyMargeUpValInfo_o *v24; // x21
  const MethodInfo *v25; // x4
  EventUpValInfo_array *v26; // x8
  unsigned __int64 v27; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v29; // x9
  EventUpValInfo_o *v30; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v32; // w8
  void *v33; // x20
  __int64 v34; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x21
  __int64 v37; // x0
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-34h] BYREF

  eventIda = eventId;
  if ( (byte_42EB09D & 1) == 0 )
  {
    sub_B5D5C4(&EventPartyMargeUpValInfo_TypeInfo, eventId, (_DWORD)partyItem, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v15, v16, v17);
    byte_42EB09D = 1;
  }
  eventUpValList = 0LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_27;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v24 = (EventPartyMargeUpValInfo_o *)sub_B5D694(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v24, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &eventUpValList, 0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v26 = eventUpValList;
    if ( !eventUpValList )
      goto LABEL_27;
    v27 = 0LL;
    while ( 1 )
    {
      max_length = v26->max_length;
      if ( (__int64)v27 >= (int)max_length )
        break;
      if ( v27 >= max_length )
        goto LABEL_28;
      v29 = &v26->obj.klass + v27;
      v30 = (EventUpValInfo_o *)v29[4];
      if ( v30 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_27;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v27,
          (EventUpValInfo_o *)v29[4],
          questRestrictionInfo->fields.eventId,
          v25);
        EventUpVal = EventUpValInfo__GetDropItemList(v30, v27, 0LL);
        if ( !v24 )
          goto LABEL_27;
        EventPartyMargeUpValInfo__Add(v24, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v26 = eventUpValList;
      }
      ++v27;
      if ( !v26 )
        goto LABEL_27;
    }
  }
  if ( !v24 )
    goto LABEL_27;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v24, 0LL);
  if ( EventUpVal )
  {
    v32 = *((_DWORD *)EventUpVal + 6);
    v33 = EventUpVal;
    if ( v32 >= 1 )
    {
      v34 = 0LL;
      while ( (unsigned int)v34 < v32 )
      {
        v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v33 + v34 + 4);
        if ( !v35 )
          goto LABEL_27;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v33 + v34 + 4),
                               0LL);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            v35,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        v32 = *((_DWORD *)v33 + 6);
        if ( (int)++v34 >= v32 )
          goto LABEL_25;
      }
LABEL_28:
      v37 = sub_B5D6C8(EventUpVal);
      sub_B5D668(v37, 0LL);
    }
  }
LABEL_25:
  if ( !v18 )
LABEL_27:
    sub_B5D69C(EventUpVal, v20);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void __fastcall PartyOrganizationEventPointListViewManager__OnMoveEnd(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EB0A4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0A4 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  void *Instance; // x0
  __int64 v27; // x1
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v29; // x22
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  SkillLvMaster_o *v31; // x21
  int v32; // w8
  void *v33; // x22
  unsigned int v34; // w25
  __int64 v35; // x8
  System_Int32_array **v36; // x23
  int v37; // w8
  void *v38; // x24
  unsigned int v39; // w27
  __int64 v40; // x28
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x0
  int32_t actMaxRarity; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB09C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, idx, (_DWORD)eventUpVal, *(_QWORD *)&eventId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v23, v24, v25);
    byte_42EB09C = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_36;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0LL);
  if ( Entity )
  {
    v29 = Entity;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           (PartyOrganizationUtility_o *)Instance,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v29->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_36;
      v31 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   MasterData_WarQuestSelectionMaster,
                   eventUpVal->fields.equipSvtId,
                   0LL);
      if ( !Instance )
        goto LABEL_36;
      v32 = *((_DWORD *)Instance + 6);
      v33 = Instance;
      if ( v32 >= 1 )
      {
        v34 = 0;
        while ( 1 )
        {
          if ( v34 >= v32 )
          {
LABEL_37:
            v43 = sub_B5D6C8(Instance);
            sub_B5D668(v43, 0LL);
          }
          v35 = *((_QWORD *)v33 + (int)v34 + 4);
          if ( !v35 )
            break;
          if ( *(_DWORD *)(v35 + 48) )
          {
            if ( !v31 )
              break;
            Instance = SkillLvMaster__GetEntity(v31, *(_DWORD *)(v35 + 28), 1, 0LL);
            if ( Instance )
            {
              v36 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0LL);
              if ( !Instance )
                break;
              v37 = *((_DWORD *)Instance + 6);
              v38 = Instance;
              if ( v37 >= 1 )
              {
                v39 = 0;
                while ( 1 )
                {
                  if ( v39 >= v37 )
                    goto LABEL_37;
                  v40 = *((_QWORD *)v38 + (int)v39 + 4);
                  if ( !v40 )
                    goto LABEL_36;
                  v41 = *(_QWORD *)(v40 + 24);
                  if ( !v41 )
                    goto LABEL_36;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v36[4],
                                       *(_DWORD *)(v41 + 16),
                                       (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v37 = *((_DWORD *)v38 + 6);
                  if ( (int)++v39 >= v37 )
                    goto LABEL_34;
                }
                v42 = *(_QWORD *)(v40 + 24);
                if ( !v42 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v42 + 16), 0LL);
              }
            }
          }
LABEL_34:
          v32 = *((_DWORD *)v33 + 6);
          if ( (int)++v34 >= v32 )
            return;
        }
LABEL_36:
        sub_B5D69C(Instance, v27);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EB0A2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EB0A2 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationEventPointListViewObject__Init(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_29743648(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EB0A3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EB0A3 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v31,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationEventPointListViewObject__Init(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_29743104(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_29743104(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  int32_t v20; // w1
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *ClippingObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *v24; // x20
  int v25; // w26
  __int64 v26; // x23
  PartyOrganizationEventPointListViewObject_o *v27; // x21
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3
  float v30; // s0
  int v31; // s1
  int32_t v34; // w1

  if ( (byte_42EB0A1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v15, v16, v17);
    byte_42EB0A1 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode != 3 )
  {
    if ( mode == 2 )
    {
      v20 = 3;
      goto LABEL_20;
    }
    if ( mode == 1 )
    {
      v20 = 2;
LABEL_20:
      PartyOrganizationEventPointListViewManager__RequestListObject_29743648(this, v20, v19);
      return;
    }
    return;
  }
  ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v18);
  if ( !ClippingObjectList )
LABEL_22:
    sub_B5D69C(ClippingObjectList, v22);
  size = ClippingObjectList->fields._size;
  v24 = ClippingObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
    return;
  }
  this->fields.callbackCount = size;
  v25 = ClippingObjectList->fields._size;
  if ( v25 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v25 <= (unsigned int)v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v27 = v24->fields._items->m_Items[v26];
      v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v28,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !v27 )
        break;
      *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
      if ( (int)v26 >= v25 - 1 )
        v34 = 5;
      else
        v34 = 2;
      PartyOrganizationEventPointListViewObject__Init(v27, v34, v28, v30, *(UnityEngine_Vector3_o *)&v31, v29);
      v25 = v24->fields._size;
      if ( (int)++v26 >= v25 )
        return;
    }
    goto LABEL_22;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_29743592(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_29743104(this, mode, v10);
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
  if ( (byte_42EB0A0 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_B5D5C4(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             (_DWORD)obj,
                                                             (_DWORD)item,
                                                             method);
    byte_42EB0A0 = 1;
  }
  if ( !obj
    || (v6 = *(&PartyOrganizationEventPointListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        EventDropItemUpValInfo_array **campaignFriendshipUpPoints,
        PartyListViewItem_o *partyItem,
        int32_t index,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // x19
  void *HeroineData; // x0
  __int64 v82; // x1
  EventDropItemUpValInfo_array *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  PartyOrganizationListViewItem_o *v90; // x22
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x23
  const MethodInfo *v93; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x25
  __int64 v96; // x8
  unsigned __int64 v97; // x20
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v98; // x19
  unsigned __int64 v99; // x23
  unsigned __int64 v100; // x22
  int32_t Item1; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x24
  PartyOrganizationEventPointListViewManager___c_c *v103; // x0
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__30_0; // x25
  Il2CppObject *v106; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v114; // x0
  PartyOrganizationEventPointListViewManager___c_c *v115; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x25
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v117; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__30_1; // x26
  Il2CppObject *v119; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x25
  PartyOrganizationEventPointListViewManager___c_c *v128; // x0
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v129; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__30_2; // x26
  Il2CppObject *v131; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v139; // x0
  PartyOrganizationEventPointListViewManager___c_c *v140; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v141; // x24
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v142; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__30_3; // x26
  Il2CppObject *v144; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x27
  __int64 v153; // x24
  __int64 v154; // x26
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  EventDropUpValInfo_o *v167; // x23
  __int64 v168; // x22
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x0
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  __int64 v188; // x0
  BattleServantConfConponent_o *v189; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v190; // [xsp+10h] [xbp-70h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v191; // [xsp+18h] [xbp-68h]
  int32_t member; // [xsp+28h] [xbp-58h]
  int32_t v193; // [xsp+2Ch] [xbp-54h]

  if ( (byte_42EB0A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_EventMaster___,
      (_DWORD)campaignFriendshipUpPoints,
      (_DWORD)partyItem,
      *(_QWORD *)&index);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Single_string___, v20, v21, v22);
    sub_B5D5C4(&EventDropItemUpValInfo_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&EventDropUpValInfo_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_EventEntity_ScriptData__string___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Func_string__bool___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Func_EventEntity_ScriptData__string__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Func_string__bool__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&FunctionEntity_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&FunctionGroupEntity_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v60, v61);
    sub_B5D5C4(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
      v62,
      v63,
      v64);
    sub_B5D5C4(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
      v65,
      v66,
      v67);
    sub_B5D5C4(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
      v68,
      v69,
      v70);
    sub_B5D5C4(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
      v71,
      v72,
      v73);
    sub_B5D5C4(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_1/*""*/, v77, v78, v79);
    byte_42EB0A5 = 1;
  }
  v80 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v80,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v80 )
    goto LABEL_83;
  v83 = (EventDropItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v80,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *campaignFriendshipUpPoints = v83;
  sub_B5D560(
    (BattleServantConfConponent_o *)campaignFriendshipUpPoints,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  if ( !partyItem )
    goto LABEL_83;
  HeroineData = PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_83;
  v90 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*((_QWORD *)HeroineData + 14) || *((_BYTE *)HeroineData + 128) || !*((_QWORD *)HeroineData + 42) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v90, v93);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  HeroineData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_83;
  HeroineData = UserServantMaster__getHeroineData(Master_WarQuestSelectionMaster, (int32_t)HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = (void *)UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( ((unsigned __int8)HeroineData & 1) == 0 )
      return 0;
  }
  v189 = (BattleServantConfConponent_o *)campaignFriendshipUpPoints;
  v190 = v80;
  FriendshipUpValTuple_k__BackingField = v90->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_83;
  v96 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v96 >= 1 )
  {
    v97 = 0LL;
    v98 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v191 = v90->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v97 >= (unsigned int)v96 )
      {
        v188 = sub_B5D6C8(HeroineData);
        sub_B5D668(v188, 0LL);
      }
      v99 = *(_QWORD *)&v98[-1].fields.Item2;
      v100 = HIDWORD(v99);
      if ( SHIDWORD(v99) >= 1 )
      {
        Item1 = v98->fields.Item1;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        HeroineData = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
        if ( !HeroineData )
          goto LABEL_83;
        HeroineData = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)HeroineData,
                        v99,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !HeroineData )
          goto LABEL_83;
        v102 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)HeroineData + 15);
        if ( !v102 )
          goto LABEL_83;
        v193 = Item1;
        if ( v102[1].monitor )
        {
          v103 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v103 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          static_fields = v103->static_fields;
          _9__30_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__30_0;
          if ( !_9__30_0 )
          {
            if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v103);
              static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            }
            v106 = (Il2CppObject *)static_fields->__9;
            _9__30_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_EventEntity_ScriptData__string__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
              _9__30_0,
              v106,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
              (const MethodInfo_2C3041C *)Method_System_Func_EventEntity_ScriptData__string___ctor__);
            v107 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v107->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v107->__9__30_0,
              (System_Int32_array **)_9__30_0,
              v108,
              v109,
              v110,
              v111,
              v112,
              v113);
          }
          v114 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                   v102,
                   (System_Func_TSource__TResult__o *)_9__30_0,
                   (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v115 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v116 = (System_Collections_Generic_IEnumerable_TSource__o *)v114;
          if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v115 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v117 = v115->static_fields;
          _9__30_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v117->__9__30_1;
          if ( !_9__30_1 )
          {
            if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) != 0 && !v115->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v115);
              v117 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            }
            v119 = (Il2CppObject *)v117->__9;
            _9__30_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__30_1,
              v119,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
            v120 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v120->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v120->__9__30_1,
              (System_Int32_array **)_9__30_1,
              v121,
              v122,
              v123,
              v124,
              v125,
              v126);
          }
          v127 = (System_Int32_array **)System_Linq_Enumerable__Single_DiscriminatedUnionConverter_UnionCase_(
                                          v116,
                                          (System_Func_TSource__bool__o *)_9__30_1,
                                          (const MethodInfo_1CB5E9C *)Method_System_Linq_Enumerable_Single_string___);
          if ( v102[1].monitor )
          {
            v128 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
              v128 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v129 = v128->static_fields;
            _9__30_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v129->__9__30_2;
            if ( !_9__30_2 )
            {
              if ( (BYTE3(v128->vtable._0_Equals.methodPtr) & 4) != 0 && !v128->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v128);
                v129 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              }
              v131 = (Il2CppObject *)v129->__9;
              _9__30_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_EventEntity_ScriptData__string__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                _9__30_2,
                v131,
                Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
                (const MethodInfo_2C3041C *)Method_System_Func_EventEntity_ScriptData__string___ctor__);
              v132 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              v132->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v132->__9__30_2,
                (System_Int32_array **)_9__30_2,
                v133,
                v134,
                v135,
                v136,
                v137,
                v138);
            }
            v139 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                     v102,
                     (System_Func_TSource__TResult__o *)_9__30_2,
                     (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
            v140 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            v141 = (System_Collections_Generic_IEnumerable_TSource__o *)v139;
            if ( (BYTE3(PartyOrganizationEventPointListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
              v140 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v142 = v140->static_fields;
            _9__30_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v142->__9__30_3;
            if ( !_9__30_3 )
            {
              if ( (BYTE3(v140->vtable._0_Equals.methodPtr) & 4) != 0 && !v140->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v140);
                v142 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              }
              v144 = (Il2CppObject *)v142->__9;
              _9__30_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                _9__30_3,
                v144,
                Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
                (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
              v145 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
              v145->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v145->__9__30_3,
                (System_Int32_array **)_9__30_3,
                v146,
                v147,
                v148,
                v149,
                v150,
                v151);
            }
            v152 = (System_Int32_array **)System_Linq_Enumerable__Single_DiscriminatedUnionConverter_UnionCase_(
                                            v141,
                                            (System_Func_TSource__bool__o *)_9__30_3,
                                            (const MethodInfo_1CB5E9C *)Method_System_Linq_Enumerable_Single_string___);
          }
          else
          {
            v152 = (System_Int32_array **)StringLiteral_1/*""*/;
          }
        }
        else
        {
          v127 = (System_Int32_array **)StringLiteral_1/*""*/;
          v152 = (System_Int32_array **)StringLiteral_1/*""*/;
        }
        v153 = sub_B5D694(FunctionEntity_TypeInfo);
        FunctionEntity___ctor((FunctionEntity_o *)v153, 0LL);
        if ( !v153 )
          goto LABEL_83;
        *(_DWORD *)(v153 + 16) = -2;
        *(_QWORD *)(v153 + 24) = 111LL;
        v154 = sub_B5D694(FunctionGroupEntity_TypeInfo);
        FunctionGroupEntity___ctor((FunctionGroupEntity_o *)v154, 0LL);
        if ( !v154 )
          goto LABEL_83;
        *(_DWORD *)(v154 + 16) = -2;
        *(_DWORD *)(v154 + 20) = v99;
        *(_DWORD *)(v154 + 24) = 0;
        *(_QWORD *)(v154 + 40) = v127;
        sub_B5D560((BattleServantConfConponent_o *)(v154 + 40), v127, v155, v156, v157, v158, v159, v160);
        *(_QWORD *)(v154 + 32) = v152;
        sub_B5D560((BattleServantConfConponent_o *)(v154 + 32), v152, v161, v162, v163, v164, v165, v166);
        *(_BYTE *)(v154 + 56) = 1;
        v167 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
        EventDropUpValInfo___ctor(v167, 0, (FunctionEntity_o *)v153, 0LL);
        if ( v193 == 2 )
        {
          FriendshipUpValTuple_k__BackingField = v191;
          if ( !v167 )
            goto LABEL_83;
          EventDropUpValInfo__SetRateCount(v167, v100, 0, 0, 0LL);
        }
        else
        {
          FriendshipUpValTuple_k__BackingField = v191;
          if ( v193 == 1 )
          {
            if ( !v167 )
              goto LABEL_83;
            EventDropUpValInfo__SetAddCount(v167, v100, 0, 0, 0LL);
          }
          else if ( !v167 )
          {
            goto LABEL_83;
          }
        }
        if ( v167->fields.rateCount > 0 || v167->fields.addCount >= 1 )
        {
          v168 = sub_B5D694(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor((EventDropItemUpValInfo_o *)v168, member, v167, 0, 0LL);
          if ( !v168 )
            goto LABEL_83;
          *(_QWORD *)(v168 + 40) = v154;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v168 + 40),
            (System_Int32_array **)v154,
            v169,
            v170,
            v171,
            v172,
            v173,
            v174);
          *(_QWORD *)(v168 + 32) = v154;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v168 + 32),
            (System_Int32_array **)v154,
            v175,
            v176,
            v177,
            v178,
            v179,
            v180);
          *(_DWORD *)(v168 + 56) = *(_DWORD *)(v153 + 28);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v190,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v168,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
        }
      }
      LODWORD(v96) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v97;
      ++v98;
    }
    while ( (__int64)v97 < (int)v96 );
  }
  v181 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v190,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  v189->klass = (BattleServantConfConponent_c *)v181;
  sub_B5D560(v189, v181, v182, v183, v184, v185, v186, v187);
  if ( !v189->klass )
LABEL_83:
    sub_B5D69C(HeroineData, v82);
  return LODWORD(v189->klass->_1.namespaze) != 0;
}


void __fastcall PartyOrganizationEventPointListViewManager__add_callbackFunc(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationEventPointListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewManager_o *v11; // x0
  PartyOrganizationEventPointListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB096 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB096 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationEventPointListViewManager_CallbackFunc_c *)v8->klass != PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationEventPointListViewManager__add_callbackFunc2(
        PartyOrganizationEventPointListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB098 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB098 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  PartyOrganizationEventPointListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EB09B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB09B = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (PartyOrganizationEventPointListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)current,
                                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v29;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB09A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB09A = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v29;
}


void __fastcall PartyOrganizationEventPointListViewManager__remove_callbackFunc(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationEventPointListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB097 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB097 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationEventPointListViewManager_CallbackFunc_c *)v8->klass != PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyOrganizationEventPointListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall PartyOrganizationEventPointListViewManager__remove_callbackFunc2(
        PartyOrganizationEventPointListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EB099 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB099 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyOrganizationEventPointListViewManager__get_ObjectList(v11, v12);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E5A85 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5A85 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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


void __fastcall PartyOrganizationEventPointListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A82 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5A82 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E5A83 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)names, (_DWORD)method, v3);
    byte_42E5A83 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_B5D69C(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E5A84 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)names, (_DWORD)method, v3);
    byte_42E5A84 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}