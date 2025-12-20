void PartyOrganizationEventPointListViewManager___ctor(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PartyOrganizationEventPointListViewManager__CreateList(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x22
  __int64 seed; // x0
  MethodInfo *v7; // x1
  EventUpValInfo_array *v8; // x8
  float x; // s8
  float y; // s10
  float z; // s9
  unsigned __int64 v12; // x20
  unsigned __int64 max_length_low; // x9
  EventUpValInfo_o *v14; // x8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x21
  _BOOL8 v18; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  PartyListViewItem_o *v23; // x26
  unsigned int *v24; // x21
  int32_t v25; // w22
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x3
  PartyOrganizationEventPointListViewManager_o *TotalEventPointInfo; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x4
  PartyOrganizationEventPointListViewManager_o *v31; // x24
  int32_t v32; // w23
  System_String_o *v33; // x26
  __int64 v34; // x25
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct ListViewItemSeed_o *v49; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v51; // s10
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x8
  __int64 v56; // x0
  __int64 v57; // x1
  int m_CancellationTokenSource; // w8
  int32_t v59; // w9
  __int64 v60; // x26
  __int64 v61; // x25
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  __int64 v68; // x0
  __int64 v69; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct ListViewItemSeed_o *v76; // x8
  System_Collections_Generic_List_object__o *v77; // x0
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v84; // x1
  __int64 v85; // x0
  __int64 v86; // x1
  struct ListViewItemSeed_o *v87; // x8
  UnityEngine_GameObject_o *v88; // x0
  EventUpValInfo_array *v89; // x8
  unsigned __int64 v90; // x23
  GrandQuestFolderBoardItem_o *v91; // x24
  unsigned __int64 v92; // x9
  Il2CppClass **v93; // x9
  EventUpValInfo_o *v94; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v97; // x1
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  GrandQuestFolderBoardItem_c *v104; // x25
  struct EventMemberMargeUpValInfo_array *v105; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // x23
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  EventUpValInfo_array *v113; // x8
  unsigned __int64 v114; // x24
  __int64 v115; // x25
  ServantEntity_o *v116; // x27
  System_String_o *SvtNameText; // x0
  char v118; // w28
  System_String_o *v119; // x29
  EventMemberMargeUpValInfo_o *v120; // x26
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  unsigned int *v127; // x20
  unsigned int *v128; // x0
  EventUpValInfo_array *v129; // x8
  unsigned __int64 v130; // x20
  struct EventMemberMargeUpValInfo_array *v131; // x8
  System_Collections_Generic_List_object__o *v132; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v133; // x27
  PartyOrganizationEventPointListViewManager___c_c *v134; // x0
  System_Func_object__bool__o *_9__20_0; // x28
  Il2CppObject *v136; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v144; // x0
  System_Collections_Generic_IEnumerable_T__o *v145; // x27
  EventMargeItemUpValInfo_array *List; // x0
  PartyOrganizationEventPointListViewManager___c_c *v147; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x27
  System_Func_object__bool__o *_9__20_1; // x29
  Il2CppObject *v150; // x20
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v151; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  struct System_String_o *servantName; // x20
  char v159; // w26
  __int64 v160; // x27
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  struct ListViewItemSeed_o *v173; // x8
  float v174; // s12
  __int64 v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  __int64 v178; // x8
  float v179; // s10
  int v180; // w20
  int32_t v181; // w28
  __int64 v182; // x1
  Il2CppObject *v183; // x29
  ServantEntity_o *v184; // x0
  UserServantEntity_o *v185; // x0
  int32_t v186; // w2
  int32_t v187; // w3
  System_String_o *v188; // x4
  int32_t v189; // w5
  int64_t v190; // x6
  System_String_o *v191; // x7
  __int64 v192; // x0
  __int64 v193; // x1
  int32_t v194; // w2
  int32_t v195; // w3
  System_String_o *v196; // x4
  int32_t v197; // w5
  int64_t v198; // x6
  System_String_o *v199; // x7
  struct ListViewItemSeed_o *v200; // x8
  System_Collections_Generic_List_object__o *v201; // x0
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  Il2CppClass **v205; // x8
  struct ListViewItemSeed_o *v206; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v208; // x0
  __int64 v209; // x0
  PartyOrganizationEventPointListViewManager_o *v210; // [xsp+8h] [xbp-118h]
  PartyListViewItem_o *v211; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v212; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v213; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v214; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v215; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v219; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D281A6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C94098(&EventDropItemUpValInfo_____TypeInfo);
    sub_1C94098(&EventMemberMargeUpValInfo___TypeInfo);
    sub_1C94098(&EventMemberMargeUpValInfo_TypeInfo);
    sub_1C94098(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78988968);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_1C94098(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__);
    sub_1C94098(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__);
    sub_1C94098(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_10364/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_1C94098(&StringLiteral_10259/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_4D281A6 = 1;
  }
  eventUpValList = 0;
  eventId = 0;
  memset(&v215, 0, sizeof(v215));
  memset(&v214, 0, sizeof(v214));
  memset(&v213, 0, sizeof(v213));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_154;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0) )
  {
    seed = (__int64)this->fields.seed;
    v211 = partyItem;
    if ( seed )
    {
      LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0);
      v8 = eventUpValList;
      if ( eventUpValList )
      {
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        v12 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(v8->max_length);
          if ( (__int64)v12 >= (int)max_length_low )
            break;
          if ( v12 >= max_length_low )
LABEL_155:
            sub_1C942F8(seed);
          v14 = v8->m_Items[v12];
          if ( v14 )
          {
            seed = (__int64)v14->fields.dropList;
            if ( !seed )
              goto LABEL_154;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v212,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v215 = v212;
            while ( 1 )
            {
              v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v215,
                      (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v15 )
                break;
              current = v215.fields._current;
              if ( !v215.fields._current )
                sub_1C942F0(v15, v16);
              if ( !v5 )
                sub_1C942F0(v15, v16);
              v18 = System_Collections_Generic_List_int___Contains(
                      v5,
                      (int32_t)v215.fields._current[1].klass,
                      (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v18 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v5->fields._items;
                v21 = Method_System_Collections_Generic_List_int__Add__;
                ++v5->fields._version;
                if ( !items )
                  sub_1C942F0(v18, klass_low);
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v5,
                    klass_low,
                    *(const MethodInfo_384DE10 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v5->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v215,
              (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
          v8 = eventUpValList;
          ++v12;
          if ( !eventUpValList )
            goto LABEL_154;
        }
        seed = (__int64)this->fields.lineObj;
        if ( seed )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 0, 0);
          v23 = partyItem;
          if ( eventUpValList )
          {
            seed = sub_1C94140(EventDropItemUpValInfo_____TypeInfo, LODWORD(eventUpValList->max_length));
            if ( v5 )
            {
              v24 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v212,
                v5,
                (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v25 = 0;
              v214 = v212;
              v210 = this;
              while ( 1 )
              {
                v26 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        (System_Collections_Generic_List_Enumerator_int__o *)&v214,
                        (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v26 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v26,
                                                                                        (int32_t)v214.fields._current,
                                                                                        v23,
                                                                                        v27);
                v31 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_1C942F0(0, v29);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v32 = v25 + 1;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10364/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0);
                  v34 = sub_1C942E4(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v34 + 144) = 1;
                  ListViewItem___ctor_44594388((ListViewItem_o *)v34, v25, 0);
                  *(_QWORD *)(v34 + 120) = v33;
                  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 120), (int32_t)v33, v35, v36, v37, v38, v39, v40);
                  *(_BYTE *)(v34 + 128) = 0;
                  *(_DWORD *)(v34 + 144) = 0;
                  *(float *)(v34 + 100) = x;
                  *(float *)(v34 + 104) = y;
                  *(float *)(v34 + 108) = z;
                  v49 = this->fields.seed;
                  if ( !v49 )
                    sub_1C942F0(v41, v42);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v23 = v211;
                  v51 = y + v49->fields.arrangementPich.fields.y;
                  if ( !itemList )
                    sub_1C942F0(0, v42);
                  v52 = itemList->fields._items;
                  v53 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v52 )
                    sub_1C942F0(itemList, v42);
                  v54 = itemList->fields._size;
                  if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v34,
                      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v55 = &v52->obj.klass + v54;
                    itemList->fields._size = v54 + 1;
                    v55[4] = (Il2CppClass *)v34;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v55 + 4), v34, v43, v44, v45, v46, v47, v48);
                  }
                  eventId = 0;
                  m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v25;
                  }
                  else
                  {
                    v59 = 0;
                    do
                    {
                      if ( v59 >= (unsigned int)m_CancellationTokenSource )
                        sub_1C942F8(v56);
                      v60 = *((_QWORD *)&v31->fields.dropObjectList + v59);
                      v25 = v32 + 1;
                      v61 = sub_1C942E4(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v61 + 144) = 1;
                      ListViewItem___ctor_44594388((ListViewItem_o *)v61, v32, 0);
                      *(_QWORD *)(v61 + 136) = v60;
                      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v61 + 136), v60, v62, v63, v64, v65, v66, v67);
                      *(_DWORD *)(v61 + 144) = 0;
                      *(float *)(v61 + 100) = x;
                      *(float *)(v61 + 104) = v51;
                      *(float *)(v61 + 108) = z;
                      v76 = this->fields.seed;
                      if ( !v76 )
                        sub_1C942F0(v68, v69);
                      v77 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v23 = v211;
                      v51 = v51 + v76->fields.arrangementPich.fields.y;
                      if ( !v77 )
                        sub_1C942F0(0, v69);
                      v78 = v77->fields._items;
                      v79 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v77->fields._version;
                      if ( !v78 )
                        sub_1C942F0(v77, v69);
                      v80 = v77->fields._size;
                      if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v77,
                          (Il2CppObject *)v61,
                          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v81 = &v78->obj.klass + v80;
                        v77->fields._size = v80 + 1;
                        v81[4] = (Il2CppClass *)v61;
                        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v81 + 4), v61, v70, v71, v72, v73, v74, v75);
                      }
                      ++v32;
                      v59 = eventId + 1;
                      eventId = v59;
                      m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
                    }
                    while ( v59 < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_1C942F0(0, v57);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0);
                  if ( !transform )
                    sub_1C942F0(0, v84);
                  v219.fields.x = x;
                  v219.fields.y = v51;
                  v219.fields.z = z;
                  UnityEngine_Transform__set_localPosition(transform, v219, 0);
                  v87 = this->fields.seed;
                  if ( !v87 )
                    sub_1C942F0(v85, v86);
                  v88 = this->fields.lineObj;
                  y = v51 + v87->fields.arrangementPich.fields.y;
                  if ( !v88 )
                    sub_1C942F0(0, v86);
                  UnityEngine_GameObject__SetActive(v88, 1, 0);
                }
                v89 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_1C942F0(TotalEventPointInfo, v29);
                v90 = 0;
                v91 = (GrandQuestFolderBoardItem_o *)(v24 + 8);
                while ( 1 )
                {
                  v92 = LODWORD(v89->max_length);
                  if ( (__int64)v90 >= (int)v92 )
                    break;
                  if ( v90 >= v92 )
                    sub_1C942F8(TotalEventPointInfo);
                  v93 = &v89->obj.klass + v90;
                  v94 = (EventUpValInfo_o *)v93[4];
                  if ( v94 )
                  {
                    questRestrictionInfo = v23->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_1C942F0(TotalEventPointInfo, v29);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v90,
                      (EventUpValInfo_o *)v93[4],
                      questRestrictionInfo->fields.eventId,
                      v30);
                    DropItemList = EventUpValInfo__GetDropItemList(v94, v90, 0);
                    if ( !v24 )
                      sub_1C942F0(DropItemList, v97);
                    v104 = (GrandQuestFolderBoardItem_c *)DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_1C941D4(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v24 + 64LL));
                      if ( !DropItemList )
                      {
                        v208 = sub_1C94314();
                        sub_1C941C0(v208, 0);
                      }
                    }
                    if ( v90 >= v24[6] )
                      sub_1C942F8(DropItemList);
                    v91->klass = v104;
                    sub_1C9403C(v91, (int32_t)v104, v98, v99, v100, v101, v102, v103);
                    v89 = eventUpValList;
                  }
                  ++v90;
                  v91 = (GrandQuestFolderBoardItem_o *)((char *)v91 + 8);
                  if ( !v89 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v214,
                (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v105 = (struct EventMemberMargeUpValInfo_array *)sub_1C94140(
                                                                   EventMemberMargeUpValInfo___TypeInfo,
                                                                   LODWORD(eventUpValList->max_length));
                p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
                this->fields.eventMargeUpValInfoList = v105;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.eventMargeUpValInfoList,
                  (int32_t)v105,
                  v107,
                  v108,
                  v109,
                  v110,
                  v111,
                  v112);
                v113 = eventUpValList;
                if ( eventUpValList )
                {
                  v114 = 0;
                  do
                  {
                    if ( (__int64)v114 >= SLODWORD(v113->max_length) )
                      goto LABEL_150;
                    seed = (__int64)PartyListViewItem__GetMember(v23, v114, 0);
                    if ( !seed )
                      break;
                    v115 = seed;
                    if ( *(_BYTE *)(seed + 136) )
                    {
                      if ( !*(_QWORD *)(seed + 128) )
                        goto LABEL_144;
                    }
                    else if ( !*(_QWORD *)(seed + 120) )
                    {
                      goto LABEL_144;
                    }
                    v116 = *(ServantEntity_o **)(seed + 192);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v7);
                    v118 = *(_BYTE *)(v115 + 136);
                    v119 = SvtNameText;
                    v120 = (EventMemberMargeUpValInfo_o *)sub_1C942E4(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v120, v114, v116, v119, v118, 0);
                    v127 = (unsigned int *)*p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      break;
                    if ( v120 )
                    {
                      seed = sub_1C941D4(v120, *(_QWORD *)(*(_QWORD *)v127 + 64LL));
                      if ( !seed )
                      {
                        v209 = sub_1C94314();
                        sub_1C941C0(v209, 0);
                      }
                    }
                    this = v210;
                    if ( v114 >= v127[6] )
                      goto LABEL_155;
                    v128 = &v127[2 * v114];
                    *((_QWORD *)v128 + 4) = v120;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)(v128 + 8),
                      (int32_t)v120,
                      v121,
                      v122,
                      v123,
                      v124,
                      v125,
                      v126);
                    v129 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v130 = 0;
                    while ( (__int64)v130 < SLODWORD(v129->max_length) )
                    {
                      if ( !v24 )
                        goto LABEL_154;
                      if ( v130 >= v24[6] )
                        goto LABEL_155;
                      v7 = *(MethodInfo **)&v24[2 * v130 + 8];
                      if ( v7 )
                      {
                        v131 = *p_eventMargeUpValInfoList;
                        if ( !*p_eventMargeUpValInfoList )
                          goto LABEL_154;
                        if ( v114 >= LODWORD(v131->max_length) )
                          goto LABEL_155;
                        seed = (__int64)v131->m_Items[v114];
                        if ( !seed )
                          goto LABEL_154;
                        EventMemberMargeUpValInfo__Add(
                          (EventMemberMargeUpValInfo_o *)seed,
                          (EventDropItemUpValInfo_array *)v7,
                          0);
                        v129 = eventUpValList;
                      }
                      ++v130;
                      if ( !v129 )
                        goto LABEL_154;
                    }
                    if ( !v120 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v120, 0);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v115 + 320) )
                    {
                      v132 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v132,
                        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v133 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v115 + 320);
                      if ( v133 )
                      {
                        v134 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                          v134 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        _9__20_0 = (System_Func_object__bool__o *)v134->static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !v134->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v134);
                            v134 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                          }
                          v136 = (Il2CppObject *)v134->static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v136,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0);
                          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          static_fields->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_1C9403C(
                            (GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0,
                            (int32_t)_9__20_0,
                            v138,
                            v139,
                            v140,
                            v141,
                            v142,
                            v143);
                        }
                        v144 = System_Linq_Enumerable__Where_object_(
                                 v133,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v145 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v144,
                                                                                (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v132 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_59156264(
                          v132,
                          v145,
                          (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78988968);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v120, 0);
                      v147 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v148 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                        v147 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      _9__20_1 = (System_Func_object__bool__o *)v147->static_fields->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !v147->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v147);
                          v147 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        v150 = (Il2CppObject *)v147->static_fields->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v150,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0);
                        v151 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v151->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)&v151->__9__20_1,
                          (int32_t)_9__20_1,
                          v152,
                          v153,
                          v154,
                          v155,
                          v156,
                          v157);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v148,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v132 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v132,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v120->fields.servantName;
                      v159 = *(_BYTE *)(v115 + 136);
                      v160 = sub_1C942E4(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v160 + 144) = 1;
                      ListViewItem___ctor_44594388((ListViewItem_o *)v160, v25, 0);
                      *(_QWORD *)(v160 + 120) = servantName;
                      sub_1C9403C(
                        (GrandQuestFolderBoardItem_o *)(v160 + 120),
                        (int32_t)servantName,
                        v161,
                        v162,
                        v163,
                        v164,
                        v165,
                        v166);
                      *(_BYTE *)(v160 + 128) = v159;
                      *(_DWORD *)(v160 + 144) = 1;
                      *(float *)(v160 + 100) = x;
                      *(float *)(v160 + 104) = y;
                      *(float *)(v160 + 108) = z;
                      v173 = v210->fields.seed;
                      if ( !v173 )
                        break;
                      seed = (__int64)v210->fields.itemList;
                      if ( !seed )
                        break;
                      v174 = v173->fields.arrangementPich.fields.y;
                      v175 = *(_QWORD *)(seed + 16);
                      v176 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v175 )
                        break;
                      v177 = *(int *)(seed + 24);
                      if ( (unsigned int)v177 >= *(_DWORD *)(v175 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v160,
                          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v178 = v175 + 8 * v177;
                        *(_DWORD *)(seed + 24) = v177 + 1;
                        *(_QWORD *)(v178 + 32) = v160;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)(v178 + 32),
                          v160,
                          v167,
                          v168,
                          v169,
                          v170,
                          v171,
                          v172);
                      }
                      ++v25;
                      v179 = y + v174;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v212,
                        v132,
                        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v180 = 0;
                      v213 = v212;
LABEL_122:
                      v181 = v25;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v213,
                                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v183 = v213.fields._current;
                        if ( v213.fields._current && HIDWORD(v213.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v115 + 136) )
                            continue;
                          v184 = *(ServantEntity_o **)(v115 + 192);
                          if ( !v184 )
                            sub_1C942F0(0, v182);
                          if ( ServantEntity__checkIsHeroineSvt(v184, 0) )
                          {
                            v185 = *(UserServantEntity_o **)(v115 + 120);
                            if ( v185 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v185, 0) )
                                continue;
                            }
                          }
                        }
                        ++v25;
                        v160 = sub_1C942E4(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v160 + 144) = 1;
                        ListViewItem___ctor_44594388((ListViewItem_o *)v160, v181, 0);
                        *(_QWORD *)(v160 + 136) = v183;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)(v160 + 136),
                          (int32_t)v183,
                          v186,
                          v187,
                          v188,
                          v189,
                          v190,
                          v191);
                        *(_DWORD *)(v160 + 144) = 1;
                        *(float *)(v160 + 100) = x;
                        *(float *)(v160 + 104) = v179;
                        *(float *)(v160 + 108) = z;
                        v200 = v210->fields.seed;
                        if ( !v200 )
                          sub_1C942F0(v192, v193);
                        v201 = (System_Collections_Generic_List_object__o *)v210->fields.itemList;
                        v179 = v179 + v200->fields.arrangementPich.fields.y;
                        if ( !v201 )
                          sub_1C942F0(0, v193);
                        v202 = v201->fields._items;
                        v203 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                        ++v201->fields._version;
                        if ( !v202 )
                          sub_1C942F0(v201, v193);
                        v204 = v201->fields._size;
                        if ( (unsigned int)v204 >= LODWORD(v202->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v201,
                            (Il2CppObject *)v160,
                            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v205 = &v202->obj.klass + v204;
                          v201->fields._size = v204 + 1;
                          v205[4] = (Il2CppClass *)v160;
                          sub_1C9403C(
                            (GrandQuestFolderBoardItem_o *)(v205 + 4),
                            v160,
                            v194,
                            v195,
                            v196,
                            v197,
                            v198,
                            v199);
                        }
                        ++v180;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v213,
                        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      this = v210;
                      if ( v180 )
                      {
                        y = v179 + -8.0;
                      }
                      else
                      {
                        seed = (__int64)v210->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v160,
                                 (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v206 = v210->fields.seed;
                        if ( !v206 )
                          break;
                        y = v179 - v206->fields.arrangementPich.fields.y;
                      }
                    }
                    v23 = v211;
LABEL_144:
                    v113 = eventUpValList;
                    ++v114;
                  }
                  while ( eventUpValList );
                }
              }
            }
          }
        }
      }
    }
LABEL_154:
    sub_1C942F0(seed, v7);
  }
LABEL_150:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10259/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_154;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0);
  ListViewManager__DispItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  this->fields.eventMargeUpValInfoList = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4, v5, v6, v7, v8);
}


PartyOrganizationEventPointListViewItem_o *PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D281A7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4D281A7 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = PartyOrganizationEventPointListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (PartyOrganizationEventPointListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationEventPointListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


EventMargeItemUpValInfo_array *PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t eventId,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  void *EventUpVal; // x0
  __int64 v8; // x1
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  EventPartyMargeUpValInfo_o *v12; // x21
  const MethodInfo *v13; // x4
  EventUpValInfo_array *v14; // x8
  unsigned __int64 v15; // x22
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v17; // x9
  EventUpValInfo_o *v18; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v20; // w8
  void *v21; // x20
  __int64 v22; // x22
  Il2CppObject *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  EventUpValInfo_array *v35; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4D281A5 & 1) == 0 )
  {
    sub_1C94098(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4D281A5 = 1;
  }
  v35 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0);
  v12 = (EventPartyMargeUpValInfo_o *)sub_1C942E4(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v12, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v35, 0);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v14 = v35;
    if ( !v35 )
      goto LABEL_30;
    v15 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v14->max_length);
      if ( (__int64)v15 >= (int)max_length_low )
        break;
      if ( v15 >= max_length_low )
        goto LABEL_31;
      v17 = &v14->obj.klass + v15;
      v18 = (EventUpValInfo_o *)v17[4];
      if ( v18 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_30;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v15,
          (EventUpValInfo_o *)v17[4],
          questRestrictionInfo->fields.eventId,
          v13);
        EventUpVal = EventUpValInfo__GetDropItemList(v18, v15, 0);
        if ( !v12 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v12, (EventDropItemUpValInfo_array *)EventUpVal, 0);
        v14 = v35;
      }
      ++v15;
      if ( !v14 )
        goto LABEL_30;
    }
  }
  if ( !v12 )
    goto LABEL_30;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v12, 0);
  if ( EventUpVal )
  {
    v20 = *((_DWORD *)EventUpVal + 6);
    v21 = EventUpVal;
    if ( v20 >= 1 )
    {
      v22 = 0;
      while ( (unsigned int)v22 < v20 )
      {
        v23 = (Il2CppObject *)*((_QWORD *)v21 + v22 + 4);
        if ( !v23 )
          goto LABEL_30;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v21 + v22 + 4),
                               0);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_30;
          items = v6->fields._items;
          v31 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_30;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v23,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
        v20 = *((_DWORD *)v21 + 6);
        if ( (int)++v22 >= v20 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C942F8(EventUpVal);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_30:
    sub_1C942F0(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void PartyOrganizationEventPointListViewManager__OnMoveEnd(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D281AC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281AC = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C942F0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
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
  Il2CppObject *MasterData_object; // x22
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
  int32_t actMaxRarity; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4D281A4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D281A4 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_33;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0);
  if ( Entity )
  {
    v11 = Entity;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           (PartyOrganizationUtility_o *)Instance,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v11->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_object )
        goto LABEL_33;
      v13 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   (ServantSkillMaster_o *)MasterData_object,
                   eventUpVal->fields.equipSvtId,
                   0);
      if ( !Instance )
        goto LABEL_33;
      v14 = *((_DWORD *)Instance + 6);
      v15 = Instance;
      if ( v14 >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= v14 )
LABEL_34:
            sub_1C942F8(Instance);
          v17 = *((_QWORD *)v15 + (int)v16 + 4);
          if ( !v17 )
            break;
          if ( *(_DWORD *)(v17 + 48) )
          {
            if ( !v13 )
              break;
            Instance = SkillLvMaster__GetEntity(v13, *(_DWORD *)(v17 + 28), 1, 0);
            if ( Instance )
            {
              v18 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0);
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
                    goto LABEL_34;
                  v22 = *((_QWORD *)v20 + (int)v21 + 4);
                  if ( !v22 )
                    goto LABEL_33;
                  v23 = *(_QWORD *)(v22 + 24);
                  if ( !v23 )
                    goto LABEL_33;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v18[4],
                                       *(_DWORD *)(v23 + 16),
                                       (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v19 = *((_DWORD *)v20 + 6);
                  if ( (int)++v21 >= v19 )
                    goto LABEL_31;
                }
                v24 = *(_QWORD *)(v22 + 24);
                if ( !v24 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v24 + 16), 0);
              }
            }
          }
LABEL_31:
          v14 = *((_DWORD *)v15 + 6);
          if ( (int)++v16 >= v14 )
            return;
        }
LABEL_33:
        sub_1C942F0(Instance, v9);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewManager__RequestListObject(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D281AA & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C94098(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D281AA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      PartyOrganizationEventPointListViewObject__Init_34886140(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewManager__RequestListObject_34885028(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D281AB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C94098(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D281AB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v10, v11);
      PartyOrganizationEventPointListViewObject__Init_34885532(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


void PartyOrganizationEventPointListViewManager__SetMode(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_34884496(this, mode, v10);
}


void PartyOrganizationEventPointListViewManager__SetMode_34884496(
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
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  Il2CppObject *Item; // x0
  int32_t v14; // w29
  PartyOrganizationEventPointListViewObject_o *v15; // x22
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3
  int32_t v18; // w1

  if ( (byte_4D281A9 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_1C94098(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D281A9 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  switch ( mode )
  {
    case 3:
      ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v5);
      if ( ClippingObjectList )
      {
        size = ClippingObjectList->fields._size;
        v11 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
        if ( size < 1 )
        {
          this->fields.callbackCount = 1;
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
            0.0,
            0);
          return;
        }
        this->fields.callbackCount = size;
        v12 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v11,
                   v12,
                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v14 = v11->fields._size;
          v15 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)this,
            Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
            0);
          if ( !v15 )
            break;
          if ( v12 >= v14 - 1 )
            v18 = 5;
          else
            v18 = 2;
          PartyOrganizationEventPointListViewObject__Init_34885532(v15, v18, v16, v17);
          if ( ++v12 >= v11->fields._size )
            return;
        }
      }
      sub_1C942F0(ClippingObjectList, v9);
    case 2:
      v7 = 3;
      goto LABEL_17;
    case 1:
      v7 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_34885028(this, v7, v6);
      break;
  }
}


void PartyOrganizationEventPointListViewManager__SetMode_34884976(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_34884496(this, mode, v10);
}


void PartyOrganizationEventPointListViewManager__SetObjectItem(
        PartyOrganizationEventPointListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D281A8 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1C94098(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_4D281A8 = 1;
  }
  if ( !obj
    || (naturalAligment = PartyOrganizationEventPointListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_34884372(
    (PartyOrganizationEventPointListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void PartyOrganizationEventPointListViewManager__add_callbackFunc(
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

  if ( (byte_4D2819E & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4D2819E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyOrganizationEventPointListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C9468C(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc(v10, v11, v12);
}


void PartyOrganizationEventPointListViewManager__add_callbackFunc2(
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

  if ( (byte_4D281A0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D281A0 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C9468C(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D281A3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281A3 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C942F0(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44610268((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C942F0(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C942F0(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C942F0(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D281A2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281A2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
}


void PartyOrganizationEventPointListViewManager__remove_callbackFunc(
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

  if ( (byte_4D2819F & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4D2819F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyOrganizationEventPointListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C9468C(v7);
  PartyOrganizationEventPointListViewManager__add_callbackFunc2(v10, v11, v12);
}


void PartyOrganizationEventPointListViewManager__remove_callbackFunc2(
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

  if ( (byte_4D281A1 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D281A1 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C9468C(v7);
  PartyOrganizationEventPointListViewManager__get_ObjectList(v10, v11);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc___ctor(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC2BCC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC2B74;
}


System_IAsyncResult_o *PartyOrganizationEventPointListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4D281AD & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_4D281AD = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v10, callback, object);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc__Invoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void PartyOrganizationEventPointListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D281AE & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_4D281AE = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationEventPointListViewManager___c___ctor(
        PartyOrganizationEventPointListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationEventPointListViewManager___c___CreateList_b__20_0(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C942F0(this, 0);
  return info->fields.targetType != 7;
}


bool PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_1C942F0(this, 0);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}