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
  float x; // s8
  float y; // s10
  float z; // s9
  unsigned __int64 v13; // x20
  unsigned __int64 max_length_low; // x9
  EventUpValInfo_o *v15; // x8
  __int128 v16; // q0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  _BOOL8 v20; // x0
  struct System_Int32_array *items; // x8
  __int64 klass_low; // x1
  _QWORD *v23; // x9
  __int64 size; // x10
  PartyListViewItem_o *v25; // x29
  unsigned int *v26; // x21
  int32_t v27; // w22
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x3
  PartyOrganizationEventPointListViewManager_o *TotalEventPointInfo; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  const MethodInfo *v33; // x4
  PartyOrganizationEventPointListViewManager_o *v34; // x23
  int32_t v35; // w25
  System_String_o *v36; // x26
  __int64 v37; // x24
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x0
  __int64 v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct ListViewItemSeed_o *v52; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v54; // s10
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x8
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t m_CancellationTokenSource; // w8
  int32_t v62; // w9
  __int64 v63; // x26
  __int64 v64; // x24
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x0
  __int64 v72; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct ListViewItemSeed_o *v79; // x8
  System_Collections_Generic_List_object__o *v80; // x0
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v87; // x1
  __int64 v88; // x0
  __int64 v89; // x1
  struct ListViewItemSeed_o *v90; // x8
  UnityEngine_GameObject_o *v91; // x0
  EventUpValInfo_array *v92; // x8
  unsigned __int64 v93; // x23
  __int64 v94; // x25
  unsigned __int64 v95; // x9
  Il2CppClass **v96; // x9
  EventUpValInfo_o *v97; // x24
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v100; // x1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  EventDropItemUpValInfo_array *v107; // x24
  __int64 v108; // x1
  struct EventMemberMargeUpValInfo_array *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  EventUpValInfo_array *v116; // x8
  unsigned __int64 v117; // x23
  __int64 v118; // x24
  ServantEntity_o *v119; // x26
  System_String_o *SvtNameText; // x0
  char v121; // w27
  System_String_o *v122; // x28
  EventMemberMargeUpValInfo_o *v123; // x25
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  unsigned int *eventMargeUpValInfoList; // x26
  __int64 v131; // x1
  unsigned int *v132; // x0
  EventUpValInfo_array *v133; // x8
  unsigned __int64 v134; // x26
  struct EventMemberMargeUpValInfo_array *v135; // x8
  System_Collections_Generic_List_object__o *v136; // x26
  __int64 v137; // x1
  __int64 v138; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x27
  PartyOrganizationEventPointListViewManager___c_c *v140; // x0
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__20_0; // x26
  Il2CppObject *v143; // x28
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v144; // x0
  System_String_o *v145; // x2
  System_String_o *v146; // x3
  int32_t v147; // w4
  int32_t v148; // w5
  bool v149; // w6
  bool v150; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x0
  System_Collections_Generic_IEnumerable_T__o *v152; // x27
  EventMargeItemUpValInfo_array *List; // x0
  __int64 v154; // x1
  __int64 v155; // x2
  PartyOrganizationEventPointListViewManager___c_c *v156; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v157; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v158; // x9
  System_Func_object__bool__o *_9__20_1; // x28
  Il2CppObject *v160; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v161; // x0
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  struct System_String_o *servantName; // x27
  char v169; // w28
  __int64 v170; // x25
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  System_String_o *v177; // x2
  System_String_o *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  struct ListViewItemSeed_o *v183; // x9
  float v184; // s12
  __int64 v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  __int64 v188; // x8
  float v189; // s10
  int v190; // w29
  int32_t v191; // w27
  __int64 v192; // x1
  Il2CppObject *v193; // x28
  ServantEntity_o *v194; // x0
  UserServantEntity_o *v195; // x0
  System_String_o *v196; // x2
  System_String_o *v197; // x3
  int32_t v198; // w4
  int32_t v199; // w5
  bool v200; // w6
  bool v201; // w7
  __int64 v202; // x0
  __int64 v203; // x1
  System_String_o *v204; // x2
  System_String_o *v205; // x3
  int32_t v206; // w4
  int32_t v207; // w5
  bool v208; // w6
  bool v209; // w7
  struct ListViewItemSeed_o *v210; // x8
  System_Collections_Generic_List_object__o *v211; // x0
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  Il2CppClass **v215; // x8
  struct ListViewItemSeed_o *v216; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v218; // x0
  __int64 v219; // x0
  PartyListViewItem_o *v220; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v221; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v222; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v223; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v224; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v228; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933ECC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_21FFC50(&EventDropItemUpValInfo_____TypeInfo);
    sub_21FFC50(&EventMemberMargeUpValInfo___TypeInfo);
    sub_21FFC50(&EventMemberMargeUpValInfo_TypeInfo);
    sub_21FFC50(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91420664);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__);
    sub_21FFC50(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__);
    sub_21FFC50(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_10732/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_21FFC50(&StringLiteral_10627/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_5933ECC = 1;
  }
  eventUpValList = 0;
  eventId = 0;
  memset(&v224, 0, sizeof(v224));
  memset(&v223, 0, sizeof(v223));
  memset(&v222, 0, sizeof(v222));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_152;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0) )
  {
    seed = (__int64)this->fields.seed;
    v220 = partyItem;
    if ( seed )
    {
      LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0);
      v9 = eventUpValList;
      if ( eventUpValList )
      {
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        v13 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(v9->max_length);
          if ( (__int64)v13 >= (int)max_length_low )
            break;
          if ( v13 >= max_length_low )
LABEL_153:
            sub_21FFED4(seed);
          v15 = v9->m_Items[v13];
          if ( v15 )
          {
            seed = (__int64)v15->fields.dropList;
            if ( !seed )
              goto LABEL_152;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v221,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v16 = *(_OWORD *)&v221.fields._list;
            v221.fields._list = 0;
            *(_QWORD *)&v221.fields._index = &v224;
            *(_OWORD *)&v224.fields._list = v16;
            v224.fields._current = v221.fields._current;
            while ( 1 )
            {
              v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v224,
                      (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v17 )
                break;
              current = v224.fields._current;
              if ( !v224.fields._current )
                sub_21FFECC(v17, v18);
              if ( !v5 )
                sub_21FFECC(v17, v18);
              v20 = System_Collections_Generic_List_int___Contains(
                      v5,
                      (int32_t)v224.fields._current[1].klass,
                      (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v20 )
              {
                items = v5->fields._items;
                klass_low = LODWORD(current[1].klass);
                v23 = Method_System_Collections_Generic_List_int__Add__;
                ++v5->fields._version;
                if ( !items )
                  sub_21FFECC(v20, klass_low);
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v5,
                    klass_low,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v5->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v224,
              (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
          v9 = eventUpValList;
          ++v13;
          if ( !eventUpValList )
            goto LABEL_152;
        }
        seed = (__int64)this->fields.lineObj;
        if ( seed )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 0, 0);
          v25 = partyItem;
          if ( eventUpValList )
          {
            seed = sub_21FFD10(EventDropItemUpValInfo_____TypeInfo, LODWORD(eventUpValList->max_length));
            if ( v5 )
            {
              v26 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v221,
                v5,
                (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v27 = 0;
              v223 = v221;
              v221.fields._list = 0;
              *(_QWORD *)&v221.fields._index = &v223;
              while ( 1 )
              {
                v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        (System_Collections_Generic_List_Enumerator_int__o *)&v223,
                        (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v28 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v28,
                                                                                        (int32_t)v223.fields._current,
                                                                                        v220,
                                                                                        v29);
                v34 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_21FFECC(0, v31);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v35 = v27 + 1;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
                  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10732/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0);
                  v37 = sub_21FFEBC(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v37 + 144) = 1;
                  ListViewItem___ctor_50749276((ListViewItem_o *)v37, v27, 0);
                  *(_QWORD *)(v37 + 120) = v36;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v37 + 120),
                    (int32_t)v36,
                    v38,
                    v39,
                    v40,
                    v41,
                    v42,
                    v43);
                  *(_BYTE *)(v37 + 128) = 0;
                  *(_DWORD *)(v37 + 144) = 0;
                  *(float *)(v37 + 100) = x;
                  *(float *)(v37 + 104) = y;
                  *(float *)(v37 + 108) = z;
                  v52 = this->fields.seed;
                  if ( !v52 )
                    sub_21FFECC(v44, v45);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v54 = y + v52->fields.arrangementPich.fields.y;
                  if ( !itemList
                    || (v55 = itemList->fields._items,
                        v56 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                        ++itemList->fields._version,
                        !v55) )
                  {
                    sub_21FFECC(itemList, v45);
                  }
                  v57 = itemList->fields._size;
                  if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v37,
                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v58 = &v55->obj.klass + v57;
                    itemList->fields._size = v57 + 1;
                    v58[4] = (Il2CppClass *)v37;
                    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v58 + 4), v37, v46, v47, v48, v49, v50, v51);
                  }
                  m_CancellationTokenSource = (int32_t)v34->fields.m_CancellationTokenSource;
                  eventId = 0;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v27;
                  }
                  else
                  {
                    v62 = 0;
                    do
                    {
                      if ( v62 >= (unsigned int)m_CancellationTokenSource )
                        sub_21FFED4(v59);
                      v27 = v35 + 1;
                      v63 = *((_QWORD *)&v34->fields.dropObjectList + v62);
                      v64 = sub_21FFEBC(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v64 + 144) = 1;
                      ListViewItem___ctor_50749276((ListViewItem_o *)v64, v35, 0);
                      *(_QWORD *)(v64 + 136) = v63;
                      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v64 + 136), v63, v65, v66, v67, v68, v69, v70);
                      *(_DWORD *)(v64 + 144) = 0;
                      *(float *)(v64 + 100) = x;
                      *(float *)(v64 + 104) = v54;
                      *(float *)(v64 + 108) = z;
                      v79 = this->fields.seed;
                      if ( !v79 )
                        sub_21FFECC(v71, v72);
                      v80 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v54 = v54 + v79->fields.arrangementPich.fields.y;
                      if ( !v80
                        || (v81 = v80->fields._items,
                            v82 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                            ++v80->fields._version,
                            !v81) )
                      {
                        sub_21FFECC(v80, v72);
                      }
                      v83 = v80->fields._size;
                      if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v80,
                          (Il2CppObject *)v64,
                          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v84 = &v81->obj.klass + v83;
                        v80->fields._size = v83 + 1;
                        v84[4] = (Il2CppClass *)v64;
                        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 4), v64, v73, v74, v75, v76, v77, v78);
                      }
                      m_CancellationTokenSource = (int32_t)v34->fields.m_CancellationTokenSource;
                      ++v35;
                      v62 = ++eventId;
                    }
                    while ( eventId < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_21FFECC(0, v60);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0);
                  if ( !transform )
                    sub_21FFECC(0, v87);
                  v228.fields.x = x;
                  v228.fields.y = v54;
                  v228.fields.z = z;
                  UnityEngine_Transform__set_localPosition(transform, v228, 0);
                  v90 = this->fields.seed;
                  if ( !v90 )
                    sub_21FFECC(v88, v89);
                  v91 = this->fields.lineObj;
                  y = v54 + v90->fields.arrangementPich.fields.y;
                  if ( !v91 )
                    sub_21FFECC(0, v89);
                  UnityEngine_GameObject__SetActive(v91, 1, 0);
                }
                v92 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_21FFECC(TotalEventPointInfo, v31);
                v93 = 0;
                v94 = 8;
                while ( 1 )
                {
                  v95 = LODWORD(v92->max_length);
                  if ( (__int64)v93 >= (int)v95 )
                    break;
                  if ( v93 >= v95 )
                    sub_21FFED4(TotalEventPointInfo);
                  v96 = &v92->obj.klass + v93;
                  v97 = (EventUpValInfo_o *)v96[4];
                  if ( v97 )
                  {
                    questRestrictionInfo = v220->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_21FFECC(TotalEventPointInfo, v31);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v93,
                      (EventUpValInfo_o *)v96[4],
                      questRestrictionInfo->fields.eventId,
                      v33);
                    DropItemList = EventUpValInfo__GetDropItemList(v97, v93, 0);
                    if ( !v26 )
                      sub_21FFECC(DropItemList, v100);
                    v107 = DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_21FFDA4(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v26 + 64LL));
                      if ( !DropItemList )
                      {
                        v218 = sub_21FFEF0(0, v108);
                        sub_21FFD90(v218, 0);
                      }
                    }
                    if ( v93 >= v26[6] )
                      sub_21FFED4(DropItemList);
                    *(_QWORD *)&v26[2 * v93 + 8] = v107;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&v26[v94],
                      (int32_t)v107,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105,
                      v106);
                    v92 = eventUpValList;
                  }
                  ++v93;
                  v94 += 2;
                  if ( !v92 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v223,
                (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v109 = (struct EventMemberMargeUpValInfo_array *)sub_21FFD10(
                                                                   EventMemberMargeUpValInfo___TypeInfo,
                                                                   LODWORD(eventUpValList->max_length));
                this->fields.eventMargeUpValInfoList = v109;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.eventMargeUpValInfoList,
                  (int32_t)v109,
                  v110,
                  v111,
                  v112,
                  v113,
                  v114,
                  v115);
                v116 = eventUpValList;
                if ( eventUpValList )
                {
                  v117 = 0;
                  do
                  {
                    if ( (__int64)v117 >= SLODWORD(v116->max_length) )
                      goto LABEL_148;
                    seed = (__int64)PartyListViewItem__GetMember(v25, v117, 0);
                    if ( !seed )
                      break;
                    v118 = seed;
                    if ( *(_BYTE *)(seed + 136) )
                    {
                      if ( !*(_QWORD *)(seed + 128) )
                        goto LABEL_143;
                    }
                    else if ( !*(_QWORD *)(seed + 120) )
                    {
                      goto LABEL_143;
                    }
                    v119 = *(ServantEntity_o **)(seed + 424);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v7);
                    v121 = *(_BYTE *)(v118 + 136);
                    v122 = SvtNameText;
                    v123 = (EventMemberMargeUpValInfo_o *)sub_21FFEBC(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v123, v117, v119, v122, v121, 0);
                    eventMargeUpValInfoList = (unsigned int *)this->fields.eventMargeUpValInfoList;
                    if ( !eventMargeUpValInfoList )
                      break;
                    if ( v123 )
                    {
                      seed = sub_21FFDA4(v123, *(_QWORD *)(*(_QWORD *)eventMargeUpValInfoList + 64LL));
                      if ( !seed )
                      {
                        v219 = sub_21FFEF0(0, v131);
                        sub_21FFD90(v219, 0);
                      }
                    }
                    if ( v117 >= eventMargeUpValInfoList[6] )
                      goto LABEL_153;
                    v132 = &eventMargeUpValInfoList[2 * v117];
                    *((_QWORD *)v132 + 4) = v123;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v132 + 8),
                      (int32_t)v123,
                      v124,
                      v125,
                      v126,
                      v127,
                      v128,
                      v129);
                    v133 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v134 = 0;
                    while ( (__int64)v134 < SLODWORD(v133->max_length) )
                    {
                      if ( !v26 )
                        goto LABEL_152;
                      if ( v134 >= v26[6] )
                        goto LABEL_153;
                      v7 = *(MethodInfo **)&v26[2 * v134 + 8];
                      if ( v7 )
                      {
                        v135 = this->fields.eventMargeUpValInfoList;
                        if ( !v135 )
                          goto LABEL_152;
                        if ( v117 >= LODWORD(v135->max_length) )
                          goto LABEL_153;
                        seed = (__int64)v135->m_Items[v117];
                        if ( !seed )
                          goto LABEL_152;
                        EventMemberMargeUpValInfo__Add(
                          (EventMemberMargeUpValInfo_o *)seed,
                          (EventDropItemUpValInfo_array *)v7,
                          0);
                        v133 = eventUpValList;
                      }
                      ++v134;
                      if ( !v133 )
                        goto LABEL_152;
                    }
                    if ( !v123 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v123, 0);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v118 + 312) )
                    {
                      v136 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v136,
                        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v139 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v118 + 312);
                      if ( v139 )
                      {
                        v140 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !*(&PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(
                            PartyOrganizationEventPointListViewManager___c_TypeInfo,
                            v137,
                            v138);
                          v140 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        static_fields = v140->static_fields;
                        _9__20_0 = (System_Func_object__bool__o *)static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !*(&v140->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(v140, v137, v138);
                            static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          }
                          v143 = (Il2CppObject *)static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v143,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0);
                          v144 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          v144->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)&v144->__9__20_0,
                            (int32_t)_9__20_0,
                            v145,
                            v146,
                            v147,
                            v148,
                            v149,
                            v150);
                        }
                        v151 = System_Linq_Enumerable__Where_object_(
                                 v139,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v152 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v151,
                                                                                (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v136 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_71627776(
                          v136,
                          v152,
                          (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91420664);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v123, 0);
                      v156 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v157 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !*(&PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(
                          PartyOrganizationEventPointListViewManager___c_TypeInfo,
                          v154,
                          v155);
                        v156 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      v158 = v156->static_fields;
                      _9__20_1 = (System_Func_object__bool__o *)v158->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !*(&v156->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(v156, v154, v155);
                          v158 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        }
                        v160 = (Il2CppObject *)v158->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v160,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0);
                        v161 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v161->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)&v161->__9__20_1,
                          (int32_t)_9__20_1,
                          v162,
                          v163,
                          v164,
                          v165,
                          v166,
                          v167);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v157,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v136 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v136,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v123->fields.servantName;
                      v169 = *(_BYTE *)(v118 + 136);
                      v170 = sub_21FFEBC(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v170 + 144) = 1;
                      ListViewItem___ctor_50749276((ListViewItem_o *)v170, v27, 0);
                      *(_QWORD *)(v170 + 120) = servantName;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v170 + 120),
                        (int32_t)servantName,
                        v171,
                        v172,
                        v173,
                        v174,
                        v175,
                        v176);
                      *(_BYTE *)(v170 + 128) = v169;
                      *(_DWORD *)(v170 + 144) = 1;
                      *(float *)(v170 + 100) = x;
                      *(float *)(v170 + 104) = y;
                      *(float *)(v170 + 108) = z;
                      v183 = this->fields.seed;
                      if ( !v183 )
                        break;
                      seed = (__int64)this->fields.itemList;
                      if ( !seed )
                        break;
                      v184 = v183->fields.arrangementPich.fields.y;
                      v185 = *(_QWORD *)(seed + 16);
                      v186 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v185 )
                        break;
                      v187 = *(int *)(seed + 24);
                      if ( (unsigned int)v187 >= *(_DWORD *)(v185 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v170,
                          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v188 = v185 + 8 * v187;
                        *(_DWORD *)(seed + 24) = v187 + 1;
                        *(_QWORD *)(v188 + 32) = v170;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)(v188 + 32),
                          v170,
                          v177,
                          v178,
                          v179,
                          v180,
                          v181,
                          v182);
                      }
                      v189 = y + v184;
                      ++v27;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v221,
                        v136,
                        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v190 = 0;
                      v222 = v221;
                      v221.fields._list = 0;
                      *(_QWORD *)&v221.fields._index = &v222;
LABEL_122:
                      v191 = v27;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v222,
                                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v193 = v222.fields._current;
                        if ( v222.fields._current && HIDWORD(v222.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v118 + 136) )
                            continue;
                          v194 = *(ServantEntity_o **)(v118 + 424);
                          if ( !v194 )
                            sub_21FFECC(0, v192);
                          if ( ServantEntity__checkIsHeroineSvt(v194, 0) )
                          {
                            v195 = *(UserServantEntity_o **)(v118 + 120);
                            if ( v195 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v195, 0) )
                                continue;
                            }
                          }
                        }
                        ++v27;
                        v170 = sub_21FFEBC(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v170 + 144) = 1;
                        ListViewItem___ctor_50749276((ListViewItem_o *)v170, v191, 0);
                        *(_QWORD *)(v170 + 136) = v193;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)(v170 + 136),
                          (int32_t)v193,
                          v196,
                          v197,
                          v198,
                          v199,
                          v200,
                          v201);
                        *(float *)(v170 + 100) = x;
                        *(float *)(v170 + 104) = v189;
                        *(_DWORD *)(v170 + 144) = 1;
                        *(float *)(v170 + 108) = z;
                        v210 = this->fields.seed;
                        if ( !v210 )
                          sub_21FFECC(v202, v203);
                        v211 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                        v189 = v189 + v210->fields.arrangementPich.fields.y;
                        if ( !v211
                          || (v212 = v211->fields._items,
                              v213 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                              ++v211->fields._version,
                              !v212) )
                        {
                          sub_21FFECC(v211, v203);
                        }
                        v214 = v211->fields._size;
                        if ( (unsigned int)v214 >= LODWORD(v212->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v211,
                            (Il2CppObject *)v170,
                            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v215 = &v212->obj.klass + v214;
                          v211->fields._size = v214 + 1;
                          v215[4] = (Il2CppClass *)v170;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)(v215 + 4),
                            v170,
                            v204,
                            v205,
                            v206,
                            v207,
                            v208,
                            v209);
                        }
                        ++v190;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v222,
                        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      if ( v190 )
                      {
                        y = v189 + -8.0;
                        v25 = v220;
                      }
                      else
                      {
                        seed = (__int64)this->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v170,
                                 (const MethodInfo_445101C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v216 = this->fields.seed;
                        v25 = v220;
                        if ( !v216 )
                          break;
                        y = v189 - v216->fields.arrangementPich.fields.y;
                      }
                    }
LABEL_143:
                    v116 = eventUpValList;
                    ++v117;
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
    sub_21FFECC(seed, v7);
  }
LABEL_148:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10627/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4, v5, v6, v7, v8);
}


PartyOrganizationEventPointListViewItem_o *PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5933ECD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_5933ECD = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_5933ECB & 1) == 0 )
  {
    sub_21FFC50(&EventPartyMargeUpValInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_5933ECB = 1;
  }
  v35 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_14;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0);
  v12 = (EventPartyMargeUpValInfo_o *)sub_21FFEBC(EventPartyMargeUpValInfo_TypeInfo);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
        v20 = *((_DWORD *)v21 + 6);
        if ( (int)++v22 >= v20 )
          goto LABEL_28;
      }
LABEL_30:
      sub_21FFED4(EventUpVal);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_14:
    sub_21FFECC(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_5933ED2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933ED2 = 1;
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
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_5933ECA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933ECA = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_21FFED4(Instance);
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
                                       (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
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
        sub_21FFECC(Instance, v9);
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
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5933ED0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_21FFC50(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5933ED0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      PartyOrganizationEventPointListViewObject__Init_40949384(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v12,
        delay,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewManager__RequestListObject_40948296(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5933ED1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_21FFC50(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5933ED1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      PartyOrganizationEventPointListViewObject__Init_40948788(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v10,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_40947772(this, mode, v10);
}


void PartyOrganizationEventPointListViewManager__SetMode_40947772(
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

  if ( (byte_5933ECF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_21FFC50(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5933ECF = 1;
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
        sub_21FFECC(ClippingObjectList, v10);
      size = ClippingObjectList->fields._size;
      v12 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      if ( size < 1 )
      {
        v19 = (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/;
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
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v15 = v12->fields._size - 1;
          v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
          PartyOrganizationEventPointListViewObject__Init_40948788(
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
      PartyOrganizationEventPointListViewManager__RequestListObject_40948296(v7, v8, v6);
      break;
  }
}


void PartyOrganizationEventPointListViewManager__SetMode_40948244(
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_40947772(this, mode, v10);
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

  if ( (byte_5933ECE & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_5933ECE = 1;
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
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  PartyOrganizationEventPointListViewObject__Init_40947648(
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

  if ( (byte_5933EC4 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_5933EC4 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewManager_o *)sub_220024C(
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

  if ( (byte_5933EC6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5933EC6 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
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

  if ( (byte_5933EC9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933EC9 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_5933EC8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933EC8 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_5933EC5 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_5933EC5 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewManager_o *)sub_220024C(
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

  if ( (byte_5933EC7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5933EC7 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF176C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF1714;
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
  if ( (byte_5933ED3 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_5933ED3 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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

  if ( (byte_5933ED4 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_5933ED4 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_21FFBF4(
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
    sub_21FFECC(this, 0);
  return info->fields.targetType != 7;
}


bool PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_21FFECC(this, 0);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}