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
  __int64 v8; // x2
  EventUpValInfo_array *v9; // x8
  float y; // s10
  unsigned __int64 v11; // x20
  unsigned __int64 max_length_low; // x9
  EventUpValInfo_o *v13; // x8
  __int128 v14; // q0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x21
  _BOOL8 v18; // x0
  struct System_Int32_array *items; // x8
  __int64 klass_low; // x1
  _QWORD *v21; // x9
  __int64 size; // x10
  PartyListViewItem_o *v23; // x29
  unsigned int *v24; // x21
  int32_t v25; // w22
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x3
  PartyOrganizationEventPointListViewManager_o *TotalEventPointInfo; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x4
  PartyOrganizationEventPointListViewManager_o *v32; // x23
  int32_t v33; // w25
  System_String_o *v34; // x26
  __int64 v35; // x24
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x0
  __int64 v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct ListViewItemSeed_o *v50; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v52; // s10
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x8
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t m_CancellationTokenSource; // w8
  int32_t v60; // w9
  __int64 v61; // x26
  __int64 v62; // x24
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x0
  __int64 v70; // x1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct ListViewItemSeed_o *v77; // x8
  System_Collections_Generic_List_object__o *v78; // x0
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v85; // x1
  __int64 v86; // x0
  __int64 v87; // x1
  struct ListViewItemSeed_o *v88; // x8
  UnityEngine_GameObject_o *v89; // x0
  EventUpValInfo_array *v90; // x8
  unsigned __int64 v91; // x23
  __int64 v92; // x25
  unsigned __int64 v93; // x9
  Il2CppClass **v94; // x9
  EventUpValInfo_o *v95; // x24
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v98; // x1
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  EventDropItemUpValInfo_array *v105; // x24
  __int64 v106; // x1
  struct EventMemberMargeUpValInfo_array *v107; // x0
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  EventUpValInfo_array *v114; // x8
  unsigned __int64 v115; // x23
  __int64 v116; // x24
  ServantEntity_o *v117; // x26
  System_String_o *SvtNameText; // x0
  char v119; // w27
  System_String_o *v120; // x28
  EventMemberMargeUpValInfo_o *v121; // x25
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  unsigned int *eventMargeUpValInfoList; // x26
  __int64 v129; // x1
  unsigned int *v130; // x0
  EventUpValInfo_array *v131; // x8
  unsigned __int64 v132; // x26
  struct EventMemberMargeUpValInfo_array *v133; // x8
  System_Collections_Generic_List_object__o *v134; // x26
  __int64 v135; // x1
  __int64 v136; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v137; // x27
  PartyOrganizationEventPointListViewManager___c_c *v138; // x0
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__20_0; // x26
  Il2CppObject *v141; // x28
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v142; // x0
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x0
  System_Collections_Generic_IEnumerable_T__o *v150; // x27
  EventMargeItemUpValInfo_array *List; // x0
  __int64 v152; // x1
  __int64 v153; // x2
  PartyOrganizationEventPointListViewManager___c_c *v154; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v156; // x9
  System_Func_object__bool__o *_9__20_1; // x28
  Il2CppObject *v158; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v159; // x0
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  struct System_String_o *servantName; // x27
  char v167; // w28
  __int64 v168; // x25
  System_String_o *v169; // x2
  System_String_o *v170; // x3
  int32_t v171; // w4
  int32_t v172; // w5
  bool v173; // w6
  bool v174; // w7
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  struct ListViewItemSeed_o *v181; // x9
  float v182; // s12
  __int64 v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  __int64 v186; // x8
  float v187; // s10
  int v188; // w29
  int32_t v189; // w27
  __int64 v190; // x1
  Il2CppObject *v191; // x28
  ServantEntity_o *v192; // x0
  UserServantEntity_o *v193; // x0
  System_String_o *v194; // x2
  System_String_o *v195; // x3
  int32_t v196; // w4
  int32_t v197; // w5
  bool v198; // w6
  bool v199; // w7
  __int64 v200; // x0
  __int64 v201; // x1
  System_String_o *v202; // x2
  System_String_o *v203; // x3
  int32_t v204; // w4
  int32_t v205; // w5
  bool v206; // w6
  bool v207; // w7
  struct ListViewItemSeed_o *v208; // x8
  System_Collections_Generic_List_object__o *v209; // x0
  struct System_Object_array *v210; // x8
  _QWORD *v211; // x9
  __int64 v212; // x10
  Il2CppClass **v213; // x8
  struct ListViewItemSeed_o *v214; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v216; // x0
  __int64 v217; // x0
  PartyListViewItem_o *v218; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v219; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v220; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v221; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v222; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v226; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596BFE5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_2213A60(&EventDropItemUpValInfo_____TypeInfo);
    sub_2213A60(&EventMemberMargeUpValInfo___TypeInfo);
    sub_2213A60(&EventMemberMargeUpValInfo_TypeInfo);
    sub_2213A60(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91646752);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__);
    sub_2213A60(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__);
    sub_2213A60(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_10745/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_10640/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_596BFE5 = 1;
  }
  eventUpValList = 0;
  eventId = 0;
  memset(&v222, 0, sizeof(v222));
  memset(&v221, 0, sizeof(v221));
  memset(&v220, 0, sizeof(v220));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_152;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0) )
  {
    seed = (__int64)this->fields.seed;
    v218 = partyItem;
    if ( seed )
    {
      LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0);
      v9 = eventUpValList;
      if ( eventUpValList )
      {
        y = LocalPosition.fields.y;
        v11 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(v9->max_length);
          if ( (__int64)v11 >= (int)max_length_low )
            break;
          if ( v11 >= max_length_low )
LABEL_153:
            sub_2213CE4(seed);
          v13 = v9->m_Items[v11];
          if ( v13 )
          {
            seed = (__int64)v13->fields.dropList;
            if ( !seed )
              goto LABEL_152;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v219,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v14 = *(_OWORD *)&v219.fields._list;
            v219.fields._list = 0;
            *(_QWORD *)&v219.fields._index = &v222;
            *(_OWORD *)&v222.fields._list = v14;
            v222.fields._current = v219.fields._current;
            while ( 1 )
            {
              v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v222,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v15 )
                break;
              current = v222.fields._current;
              if ( !v222.fields._current )
                sub_2213CDC(v15, v16);
              if ( !v5 )
                sub_2213CDC(v15, v16);
              v18 = System_Collections_Generic_List_int___Contains(
                      v5,
                      (int32_t)v222.fields._current[1].klass,
                      (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v18 )
              {
                items = v5->fields._items;
                klass_low = LODWORD(current[1].klass);
                v21 = Method_System_Collections_Generic_List_int__Add__;
                ++v5->fields._version;
                if ( !items )
                  sub_2213CDC(v18, klass_low);
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v5,
                    klass_low,
                    *(const MethodInfo_4467270 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v5->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v222,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
          v9 = eventUpValList;
          ++v11;
          if ( !eventUpValList )
            goto LABEL_152;
        }
        seed = (__int64)this->fields.lineObj;
        if ( seed )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 0, 0);
          v23 = partyItem;
          if ( eventUpValList )
          {
            seed = sub_2213B20(EventDropItemUpValInfo_____TypeInfo, LODWORD(eventUpValList->max_length));
            if ( v5 )
            {
              v24 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v219,
                v5,
                (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v25 = 0;
              v221 = (System_Collections_Generic_List_Enumerator_int__o)v219;
              v219.fields._list = 0;
              *(_QWORD *)&v219.fields._index = &v221;
              while ( 1 )
              {
                v26 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        &v221,
                        (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v26 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v26,
                                                                                        v221.fields._current,
                                                                                        v218,
                                                                                        v27);
                v32 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_2213CDC(0, v29);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v33 = v25 + 1;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
                  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10745/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0);
                  v35 = sub_2213CCC(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v35 + 144) = 1;
                  ListViewItem___ctor_50819428((ListViewItem_o *)v35, v25, 0);
                  *(_QWORD *)(v35 + 120) = v34;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v35 + 120),
                    (int32_t)v34,
                    v36,
                    v37,
                    v38,
                    v39,
                    v40,
                    v41);
                  *(_BYTE *)(v35 + 128) = 0;
                  *(_DWORD *)(v35 + 144) = 0;
                  *(float *)(v35 + 100) = LocalPosition.fields.x;
                  *(float *)(v35 + 104) = y;
                  *(float *)(v35 + 108) = LocalPosition.fields.z;
                  v50 = this->fields.seed;
                  if ( !v50 )
                    sub_2213CDC(v42, v43);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v52 = y + v50->fields.arrangementPich.fields.y;
                  if ( !itemList
                    || (v53 = itemList->fields._items,
                        v54 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                        ++itemList->fields._version,
                        !v53) )
                  {
                    sub_2213CDC(itemList, v43);
                  }
                  v55 = itemList->fields._size;
                  if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v35,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v56 = &v53->obj.klass + v55;
                    itemList->fields._size = v55 + 1;
                    v56[4] = (Il2CppClass *)v35;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v56 + 4), v35, v44, v45, v46, v47, v48, v49);
                  }
                  m_CancellationTokenSource = (int32_t)v32->fields.m_CancellationTokenSource;
                  eventId = 0;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v25;
                  }
                  else
                  {
                    v60 = 0;
                    do
                    {
                      if ( v60 >= (unsigned int)m_CancellationTokenSource )
                        sub_2213CE4(v57);
                      v25 = v33 + 1;
                      v61 = *((_QWORD *)&v32->fields.dropObjectList + v60);
                      v62 = sub_2213CCC(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v62 + 144) = 1;
                      ListViewItem___ctor_50819428((ListViewItem_o *)v62, v33, 0);
                      *(_QWORD *)(v62 + 136) = v61;
                      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v62 + 136), v61, v63, v64, v65, v66, v67, v68);
                      *(_DWORD *)(v62 + 144) = 0;
                      *(float *)(v62 + 100) = LocalPosition.fields.x;
                      *(float *)(v62 + 104) = v52;
                      *(float *)(v62 + 108) = LocalPosition.fields.z;
                      v77 = this->fields.seed;
                      if ( !v77 )
                        sub_2213CDC(v69, v70);
                      v78 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v52 = v52 + v77->fields.arrangementPich.fields.y;
                      if ( !v78
                        || (v79 = v78->fields._items,
                            v80 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                            ++v78->fields._version,
                            !v79) )
                      {
                        sub_2213CDC(v78, v70);
                      }
                      v81 = v78->fields._size;
                      if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v78,
                          (Il2CppObject *)v62,
                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v82 = &v79->obj.klass + v81;
                        v78->fields._size = v81 + 1;
                        v82[4] = (Il2CppClass *)v62;
                        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v82 + 4), v62, v71, v72, v73, v74, v75, v76);
                      }
                      m_CancellationTokenSource = (int32_t)v32->fields.m_CancellationTokenSource;
                      ++v33;
                      v60 = ++eventId;
                    }
                    while ( eventId < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_2213CDC(0, v58);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0);
                  if ( !transform )
                    sub_2213CDC(0, v85);
                  v226.fields.x = LocalPosition.fields.x;
                  v226.fields.y = v52;
                  v226.fields.z = LocalPosition.fields.z;
                  UnityEngine_Transform__set_localPosition(transform, v226, 0);
                  v88 = this->fields.seed;
                  if ( !v88 )
                    sub_2213CDC(v86, v87);
                  v89 = this->fields.lineObj;
                  y = v52 + v88->fields.arrangementPich.fields.y;
                  if ( !v89 )
                    sub_2213CDC(0, v87);
                  UnityEngine_GameObject__SetActive(v89, 1, 0);
                }
                v90 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_2213CDC(TotalEventPointInfo, v29);
                v91 = 0;
                v92 = 8;
                while ( 1 )
                {
                  v93 = LODWORD(v90->max_length);
                  if ( (__int64)v91 >= (int)v93 )
                    break;
                  if ( v91 >= v93 )
                    sub_2213CE4(TotalEventPointInfo);
                  v94 = &v90->obj.klass + v91;
                  v95 = (EventUpValInfo_o *)v94[4];
                  if ( v95 )
                  {
                    questRestrictionInfo = v218->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_2213CDC(TotalEventPointInfo, v29);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v91,
                      (EventUpValInfo_o *)v94[4],
                      questRestrictionInfo->fields.eventId,
                      v31);
                    DropItemList = EventUpValInfo__GetDropItemList(v95, v91, 0);
                    if ( !v24 )
                      sub_2213CDC(DropItemList, v98);
                    v105 = DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_2213BB4(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v24 + 64LL));
                      if ( !DropItemList )
                      {
                        v216 = sub_2213D00(0, v106);
                        sub_2213BA0(v216, 0);
                      }
                    }
                    if ( v91 >= v24[6] )
                      sub_2213CE4(DropItemList);
                    *(_QWORD *)&v24[2 * v91 + 8] = v105;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&v24[v92],
                      (int32_t)v105,
                      v99,
                      v100,
                      v101,
                      v102,
                      v103,
                      v104);
                    v90 = eventUpValList;
                  }
                  ++v91;
                  v92 += 2;
                  if ( !v90 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                &v221,
                (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v107 = (struct EventMemberMargeUpValInfo_array *)sub_2213B20(
                                                                   EventMemberMargeUpValInfo___TypeInfo,
                                                                   LODWORD(eventUpValList->max_length));
                this->fields.eventMargeUpValInfoList = v107;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.eventMargeUpValInfoList,
                  (int32_t)v107,
                  v108,
                  v109,
                  v110,
                  v111,
                  v112,
                  v113);
                v114 = eventUpValList;
                if ( eventUpValList )
                {
                  v115 = 0;
                  do
                  {
                    if ( (__int64)v115 >= SLODWORD(v114->max_length) )
                      goto LABEL_148;
                    seed = (__int64)PartyListViewItem__GetMember(v23, v115, 0);
                    if ( !seed )
                      break;
                    v116 = seed;
                    if ( *(_BYTE *)(seed + 136) )
                    {
                      if ( !*(_QWORD *)(seed + 128) )
                        goto LABEL_143;
                    }
                    else if ( !*(_QWORD *)(seed + 120) )
                    {
                      goto LABEL_143;
                    }
                    v117 = *(ServantEntity_o **)(seed + 424);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v7);
                    v119 = *(_BYTE *)(v116 + 136);
                    v120 = SvtNameText;
                    v121 = (EventMemberMargeUpValInfo_o *)sub_2213CCC(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v121, v115, v117, v120, v119, 0);
                    eventMargeUpValInfoList = (unsigned int *)this->fields.eventMargeUpValInfoList;
                    if ( !eventMargeUpValInfoList )
                      break;
                    if ( v121 )
                    {
                      seed = sub_2213BB4(v121, *(_QWORD *)(*(_QWORD *)eventMargeUpValInfoList + 64LL));
                      if ( !seed )
                      {
                        v217 = sub_2213D00(0, v129);
                        sub_2213BA0(v217, 0);
                      }
                    }
                    if ( v115 >= eventMargeUpValInfoList[6] )
                      goto LABEL_153;
                    v130 = &eventMargeUpValInfoList[2 * v115];
                    *((_QWORD *)v130 + 4) = v121;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v130 + 8),
                      (int32_t)v121,
                      v122,
                      v123,
                      v124,
                      v125,
                      v126,
                      v127);
                    v131 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v132 = 0;
                    while ( (__int64)v132 < SLODWORD(v131->max_length) )
                    {
                      if ( !v24 )
                        goto LABEL_152;
                      if ( v132 >= v24[6] )
                        goto LABEL_153;
                      v7 = *(MethodInfo **)&v24[2 * v132 + 8];
                      if ( v7 )
                      {
                        v133 = this->fields.eventMargeUpValInfoList;
                        if ( !v133 )
                          goto LABEL_152;
                        if ( v115 >= LODWORD(v133->max_length) )
                          goto LABEL_153;
                        seed = (__int64)v133->m_Items[v115];
                        if ( !seed )
                          goto LABEL_152;
                        EventMemberMargeUpValInfo__Add(
                          (EventMemberMargeUpValInfo_o *)seed,
                          (EventDropItemUpValInfo_array *)v7,
                          0);
                        v131 = eventUpValList;
                      }
                      ++v132;
                      if ( !v131 )
                        goto LABEL_152;
                    }
                    if ( !v121 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v121, 0);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v116 + 312) )
                    {
                      v134 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v134,
                        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v137 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v116 + 312);
                      if ( v137 )
                      {
                        v138 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !*(&PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(
                            PartyOrganizationEventPointListViewManager___c_TypeInfo,
                            v135,
                            v136);
                          v138 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        static_fields = v138->static_fields;
                        _9__20_0 = (System_Func_object__bool__o *)static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !*(&v138->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(v138, v135, v136);
                            static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          }
                          v141 = (Il2CppObject *)static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v141,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0);
                          v142 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          v142->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v142->__9__20_0,
                            (int32_t)_9__20_0,
                            v143,
                            v144,
                            v145,
                            v146,
                            v147,
                            v148);
                        }
                        v149 = System_Linq_Enumerable__Where_object_(
                                 v137,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v150 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v149,
                                                                                (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v134 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_71841080(
                          v134,
                          v150,
                          (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91646752);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v121, 0);
                      v154 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v155 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !*(&PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(
                          PartyOrganizationEventPointListViewManager___c_TypeInfo,
                          v152,
                          v153);
                        v154 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      v156 = v154->static_fields;
                      _9__20_1 = (System_Func_object__bool__o *)v156->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !*(&v154->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(v154, v152, v153);
                          v156 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        }
                        v158 = (Il2CppObject *)v156->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v158,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0);
                        v159 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v159->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)&v159->__9__20_1,
                          (int32_t)_9__20_1,
                          v160,
                          v161,
                          v162,
                          v163,
                          v164,
                          v165);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v155,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v134 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v134,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v121->fields.servantName;
                      v167 = *(_BYTE *)(v116 + 136);
                      v168 = sub_2213CCC(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v168 + 144) = 1;
                      ListViewItem___ctor_50819428((ListViewItem_o *)v168, v25, 0);
                      *(_QWORD *)(v168 + 120) = servantName;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v168 + 120),
                        (int32_t)servantName,
                        v169,
                        v170,
                        v171,
                        v172,
                        v173,
                        v174);
                      *(_BYTE *)(v168 + 128) = v167;
                      *(_DWORD *)(v168 + 144) = 1;
                      *(float *)(v168 + 100) = LocalPosition.fields.x;
                      *(float *)(v168 + 104) = y;
                      *(float *)(v168 + 108) = LocalPosition.fields.z;
                      v181 = this->fields.seed;
                      if ( !v181 )
                        break;
                      seed = (__int64)this->fields.itemList;
                      if ( !seed )
                        break;
                      v182 = v181->fields.arrangementPich.fields.y;
                      v183 = *(_QWORD *)(seed + 16);
                      v184 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v183 )
                        break;
                      v185 = *(int *)(seed + 24);
                      if ( (unsigned int)v185 >= *(_DWORD *)(v183 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v168,
                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v186 = v183 + 8 * v185;
                        *(_DWORD *)(seed + 24) = v185 + 1;
                        *(_QWORD *)(v186 + 32) = v168;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v186 + 32),
                          v168,
                          v175,
                          v176,
                          v177,
                          v178,
                          v179,
                          v180);
                      }
                      v187 = y + v182;
                      ++v25;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v219,
                        v134,
                        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v188 = 0;
                      v220 = v219;
                      v219.fields._list = 0;
                      *(_QWORD *)&v219.fields._index = &v220;
LABEL_122:
                      v189 = v25;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v220,
                                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v191 = v220.fields._current;
                        if ( v220.fields._current && HIDWORD(v220.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v116 + 136) )
                            continue;
                          v192 = *(ServantEntity_o **)(v116 + 424);
                          if ( !v192 )
                            sub_2213CDC(0, v190);
                          if ( ServantEntity__checkIsHeroineSvt(v192, 0) )
                          {
                            v193 = *(UserServantEntity_o **)(v116 + 120);
                            if ( v193 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v193, 0) )
                                continue;
                            }
                          }
                        }
                        ++v25;
                        v168 = sub_2213CCC(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v168 + 144) = 1;
                        ListViewItem___ctor_50819428((ListViewItem_o *)v168, v189, 0);
                        *(_QWORD *)(v168 + 136) = v191;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v168 + 136),
                          (int32_t)v191,
                          v194,
                          v195,
                          v196,
                          v197,
                          v198,
                          v199);
                        *(float *)(v168 + 100) = LocalPosition.fields.x;
                        *(float *)(v168 + 104) = v187;
                        *(_DWORD *)(v168 + 144) = 1;
                        *(float *)(v168 + 108) = LocalPosition.fields.z;
                        v208 = this->fields.seed;
                        if ( !v208 )
                          sub_2213CDC(v200, v201);
                        v209 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                        v187 = v187 + v208->fields.arrangementPich.fields.y;
                        if ( !v209
                          || (v210 = v209->fields._items,
                              v211 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                              ++v209->fields._version,
                              !v210) )
                        {
                          sub_2213CDC(v209, v201);
                        }
                        v212 = v209->fields._size;
                        if ( (unsigned int)v212 >= LODWORD(v210->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v209,
                            (Il2CppObject *)v168,
                            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v213 = &v210->obj.klass + v212;
                          v209->fields._size = v212 + 1;
                          v213[4] = (Il2CppClass *)v168;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v213 + 4),
                            v168,
                            v202,
                            v203,
                            v204,
                            v205,
                            v206,
                            v207);
                        }
                        ++v188;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v220,
                        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      if ( v188 )
                      {
                        y = v187 + -8.0;
                        v23 = v218;
                      }
                      else
                      {
                        seed = (__int64)this->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v168,
                                 (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v214 = this->fields.seed;
                        v23 = v218;
                        if ( !v214 )
                          break;
                        y = v187 - v214->fields.arrangementPich.fields.y;
                      }
                    }
LABEL_143:
                    v114 = eventUpValList;
                    ++v115;
                  }
                  while ( eventUpValList );
                }
              }
            }
          }
        }
      }
    }
LABEL_152:
    sub_2213CDC(seed, v7);
  }
LABEL_148:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10640/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_152;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0);
  ListViewManager__DispItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  this->fields.eventMargeUpValInfoList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4, v5, v6, v7, v8);
}


PartyOrganizationEventPointListViewItem_o *PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596BFE6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_596BFE6 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  EventUpValInfo_array *v35; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_596BFE4 & 1) == 0 )
  {
    sub_2213A60(&EventPartyMargeUpValInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_596BFE4 = 1;
  }
  v35 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_14;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0);
  v12 = (EventPartyMargeUpValInfo_o *)sub_2213CCC(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v12, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v35, 0);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v14 = v35;
    if ( !v35 )
      goto LABEL_14;
    v15 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v14->max_length);
      if ( (__int64)v15 >= (int)max_length_low )
        break;
      if ( v15 >= max_length_low )
        goto LABEL_30;
      v17 = &v14->obj.klass + v15;
      v18 = (EventUpValInfo_o *)v17[4];
      if ( v18 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_14;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v15,
          (EventUpValInfo_o *)v17[4],
          questRestrictionInfo->fields.eventId,
          v13);
        EventUpVal = EventUpValInfo__GetDropItemList(v18, v15, 0);
        if ( !v12 )
          goto LABEL_14;
        EventPartyMargeUpValInfo__Add(v12, (EventDropItemUpValInfo_array *)EventUpVal, 0);
        v14 = v35;
      }
      ++v15;
      if ( !v14 )
        goto LABEL_14;
    }
  }
  if ( !v12 )
    goto LABEL_14;
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
          goto LABEL_14;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v21 + v22 + 4),
                               0);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_14;
          items = v6->fields._items;
          v31 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_14;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v23,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
        v20 = *((_DWORD *)v21 + 6);
        if ( (int)++v22 >= v20 )
          goto LABEL_28;
      }
LABEL_30:
      sub_2213CE4(EventUpVal);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_14:
    sub_2213CDC(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void PartyOrganizationEventPointListViewManager__OnMoveEnd(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596BFEB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BFEB = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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
  unsigned int v16; // w26
  __int64 v17; // x8
  System_Int32_array **v18; // x23
  int v19; // w8
  void *v20; // x24
  __int64 v21; // x27
  __int64 v22; // x29
  __int64 v23; // x8
  __int64 v24; // x8
  int32_t actMaxRarity; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596BFE3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596BFE3 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_2213CE4(Instance);
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
                  if ( (unsigned int)v21 >= v19 )
                    goto LABEL_34;
                  v22 = *((_QWORD *)v20 + v21 + 4);
                  if ( !v22 )
                    goto LABEL_33;
                  v23 = *(_QWORD *)(v22 + 24);
                  if ( !v23 )
                    goto LABEL_33;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v18[4],
                                       *(_DWORD *)(v23 + 16),
                                       (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
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
        sub_2213CDC(Instance, v9);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BFE9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_2213A60(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BFE9 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      PartyOrganizationEventPointListViewObject__Init_40957472(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v12,
        delay,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewManager__RequestListObject_40956384(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BFEA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_2213A60(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BFEA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      PartyOrganizationEventPointListViewObject__Init_40956876(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v10,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


void PartyOrganizationEventPointListViewManager__SetMode(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_40955860(this, mode, v10);
}


void PartyOrganizationEventPointListViewManager__SetMode_40955860(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  PartyOrganizationEventPointListViewManager_o *v7; // x0
  int32_t v8; // w1
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *ClippingObjectList; // x0
  __int64 v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int v15; // w27
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  System_String_o *v19; // x1

  if ( (byte_596BFE8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_2213A60(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BFE8 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  switch ( mode )
  {
    case 3:
      ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v5);
      if ( !ClippingObjectList )
LABEL_20:
        sub_2213CDC(ClippingObjectList, v10);
      size = ClippingObjectList->fields._size;
      v12 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      if ( size < 1 )
      {
        v19 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v19, 0.0, 0);
      }
      else
      {
        v13 = 0;
        this->fields.callbackCount = size;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v12,
                   v13,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v15 = v12->fields._size - 1;
          v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)this,
            Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
            0);
          if ( v13 >= v15 )
          {
            if ( !Item )
              goto LABEL_20;
            v18 = 5;
          }
          else
          {
            if ( !Item )
              goto LABEL_20;
            v18 = 2;
          }
          PartyOrganizationEventPointListViewObject__Init_40956876(
            (PartyOrganizationEventPointListViewObject_o *)Item,
            v18,
            v16,
            v17);
          ++v13;
        }
        while ( v13 < v12->fields._size );
      }
      break;
    case 2:
      v7 = this;
      v8 = 3;
      goto LABEL_8;
    case 1:
      v7 = this;
      v8 = 2;
LABEL_8:
      PartyOrganizationEventPointListViewManager__RequestListObject_40956384(v7, v8, v6);
      break;
  }
}


void PartyOrganizationEventPointListViewManager__SetMode_40956332(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_40955860(this, mode, v10);
}


void PartyOrganizationEventPointListViewManager__SetObjectItem(
        PartyOrganizationEventPointListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596BFE7 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_596BFE7 = 1;
  }
  if ( obj
    && (naturalAligment = PartyOrganizationEventPointListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationEventPointListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  PartyOrganizationEventPointListViewObject__Init_40955736(
    (PartyOrganizationEventPointListViewObject_o *)v7,
    v8,
    (const MethodInfo *)item);
}


void PartyOrganizationEventPointListViewManager__add_callbackFunc(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewManager_o *v11; // x0
  PartyOrganizationEventPointListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BFDD & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_596BFDD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyOrganizationEventPointListViewManager_CallbackFunc_c *)v6->klass != PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewManager_o *)sub_221405C(
                                                          v6,
                                                          PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo,
                                                          v7,
                                                          v8);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationEventPointListViewManager__add_callbackFunc2(
        PartyOrganizationEventPointListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BFDF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BFDF = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596BFE2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BFE2 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596BFE1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BFE1 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
}


void PartyOrganizationEventPointListViewManager__remove_callbackFunc(
        PartyOrganizationEventPointListViewManager_o *this,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BFDE & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_596BFDE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyOrganizationEventPointListViewManager_CallbackFunc_c *)v6->klass != PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewManager_o *)sub_221405C(
                                                          v6,
                                                          PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo,
                                                          v7,
                                                          v8);
  PartyOrganizationEventPointListViewManager__add_callbackFunc2(v11, v12, v13);
}


void PartyOrganizationEventPointListViewManager__remove_callbackFunc2(
        PartyOrganizationEventPointListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596BFE0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BFE0 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  PartyOrganizationEventPointListViewManager__get_ObjectList(v11, v12);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc___ctor(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20046E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_200468C;
}


System_IAsyncResult_o *PartyOrganizationEventPointListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_596BFEC & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_596BFEC = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BFED & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_596BFED = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return info->fields.targetType != 7;
}


bool PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_2213CDC(this, 0);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}