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
  float y; // s10
  unsigned __int64 v10; // x20
  unsigned __int64 max_length_low; // x9
  EventUpValInfo_o *v12; // x8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  _BOOL8 v16; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  PartyListViewItem_o *v21; // x26
  unsigned int *v22; // x21
  int32_t v23; // w22
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x3
  PartyOrganizationEventPointListViewManager_o *TotalEventPointInfo; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  PartyOrganizationEventPointListViewManager_o *v29; // x24
  int32_t v30; // w23
  System_String_o *v31; // x26
  __int64 v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct ListViewItemSeed_o *v47; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v49; // s10
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x8
  __int64 v54; // x0
  __int64 v55; // x1
  int m_CancellationTokenSource; // w8
  int32_t v57; // w9
  __int64 v58; // x26
  __int64 v59; // x25
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  struct ListViewItemSeed_o *v74; // x8
  System_Collections_Generic_List_object__o *v75; // x0
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v82; // x1
  __int64 v83; // x0
  __int64 v84; // x1
  struct ListViewItemSeed_o *v85; // x8
  UnityEngine_GameObject_o *v86; // x0
  EventUpValInfo_array *v87; // x8
  unsigned __int64 v88; // x23
  GrandQuestFolderBoardItem_o *v89; // x24
  unsigned __int64 v90; // x9
  Il2CppClass **v91; // x9
  EventUpValInfo_o *v92; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  GrandQuestFolderBoardItem_c *v102; // x25
  struct EventMemberMargeUpValInfo_array *v103; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // x23
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  EventUpValInfo_array *v111; // x8
  unsigned __int64 v112; // x24
  __int64 v113; // x25
  ServantEntity_o *v114; // x27
  System_String_o *SvtNameText; // x0
  char v116; // w28
  System_String_o *v117; // x29
  EventMemberMargeUpValInfo_o *v118; // x26
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  unsigned int *v125; // x20
  unsigned int *v126; // x0
  EventUpValInfo_array *v127; // x8
  unsigned __int64 v128; // x20
  struct EventMemberMargeUpValInfo_array *v129; // x8
  System_Collections_Generic_List_object__o *v130; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x27
  PartyOrganizationEventPointListViewManager___c_c *v132; // x0
  System_Func_object__bool__o *_9__20_0; // x28
  Il2CppObject *v134; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v142; // x0
  System_Collections_Generic_IEnumerable_T__o *v143; // x27
  EventMargeItemUpValInfo_array *List; // x0
  PartyOrganizationEventPointListViewManager___c_c *v145; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x27
  System_Func_object__bool__o *_9__20_1; // x29
  Il2CppObject *v148; // x20
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v149; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  System_String_o *v152; // x4
  int32_t v153; // w5
  int64_t v154; // x6
  System_String_o *v155; // x7
  struct System_String_o *servantName; // x20
  char v157; // w26
  __int64 v158; // x27
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x4
  int32_t v162; // w5
  int64_t v163; // x6
  System_String_o *v164; // x7
  int32_t v165; // w2
  int32_t v166; // w3
  System_String_o *v167; // x4
  int32_t v168; // w5
  int64_t v169; // x6
  System_String_o *v170; // x7
  struct ListViewItemSeed_o *v171; // x8
  float v172; // s12
  __int64 v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  __int64 v176; // x8
  float v177; // s10
  int v178; // w20
  int32_t v179; // w28
  __int64 v180; // x1
  Il2CppObject *v181; // x29
  ServantEntity_o *v182; // x0
  UserServantEntity_o *v183; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  System_String_o *v186; // x4
  int32_t v187; // w5
  int64_t v188; // x6
  System_String_o *v189; // x7
  __int64 v190; // x0
  __int64 v191; // x1
  int32_t v192; // w2
  int32_t v193; // w3
  System_String_o *v194; // x4
  int32_t v195; // w5
  int64_t v196; // x6
  System_String_o *v197; // x7
  struct ListViewItemSeed_o *v198; // x8
  System_Collections_Generic_List_object__o *v199; // x0
  struct System_Object_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  Il2CppClass **v203; // x8
  struct ListViewItemSeed_o *v204; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v206; // x0
  __int64 v207; // x0
  PartyOrganizationEventPointListViewManager_o *v208; // [xsp+8h] [xbp-118h]
  PartyListViewItem_o *v209; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v210; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v211; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v212; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v213; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v217; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2C338 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C93AD4(&EventDropItemUpValInfo_____TypeInfo);
    sub_1C93AD4(&EventMemberMargeUpValInfo___TypeInfo);
    sub_1C93AD4(&EventMemberMargeUpValInfo_TypeInfo);
    sub_1C93AD4(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___79002184);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__);
    sub_1C93AD4(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__);
    sub_1C93AD4(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_10396/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10291/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_4D2C338 = 1;
  }
  eventUpValList = 0;
  eventId = 0;
  memset(&v213, 0, sizeof(v213));
  memset(&v212, 0, sizeof(v212));
  memset(&v211, 0, sizeof(v211));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_154;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0) )
  {
    seed = (__int64)this->fields.seed;
    v209 = partyItem;
    if ( seed )
    {
      LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0);
      v8 = eventUpValList;
      if ( eventUpValList )
      {
        y = LocalPosition.fields.y;
        v10 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(v8->max_length);
          if ( (__int64)v10 >= (int)max_length_low )
            break;
          if ( v10 >= max_length_low )
LABEL_155:
            sub_1C93D34(seed);
          v12 = v8->m_Items[v10];
          if ( v12 )
          {
            seed = (__int64)v12->fields.dropList;
            if ( !seed )
              goto LABEL_154;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v210,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v213 = v210;
            while ( 1 )
            {
              v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v213,
                      (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v13 )
                break;
              current = v213.fields._current;
              if ( !v213.fields._current )
                sub_1C93D2C(v13, v14);
              if ( !v5 )
                sub_1C93D2C(v13, v14);
              v16 = System_Collections_Generic_List_int___Contains(
                      v5,
                      (int32_t)v213.fields._current[1].klass,
                      (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v16 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v5->fields._items;
                v19 = Method_System_Collections_Generic_List_int__Add__;
                ++v5->fields._version;
                if ( !items )
                  sub_1C93D2C(v16, klass_low);
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v5,
                    klass_low,
                    *(const MethodInfo_385C978 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v5->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v213,
              (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
          v8 = eventUpValList;
          ++v10;
          if ( !eventUpValList )
            goto LABEL_154;
        }
        seed = (__int64)this->fields.lineObj;
        if ( seed )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 0, 0);
          v21 = partyItem;
          if ( eventUpValList )
          {
            seed = sub_1C93B7C(EventDropItemUpValInfo_____TypeInfo, LODWORD(eventUpValList->max_length));
            if ( v5 )
            {
              v22 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v210,
                v5,
                (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v23 = 0;
              v212 = (System_Collections_Generic_List_Enumerator_int__o)v210;
              v208 = this;
              while ( 1 )
              {
                v24 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        &v212,
                        (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v24 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v24,
                                                                                        v212.fields._current,
                                                                                        v21,
                                                                                        v25);
                v29 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_1C93D2C(0, v27);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v30 = v23 + 1;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10396/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0);
                  v32 = sub_1C93D20(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v32 + 144) = 1;
                  ListViewItem___ctor_44487500((ListViewItem_o *)v32, v23, 0);
                  *(_QWORD *)(v32 + 120) = v31;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 120), (int32_t)v31, v33, v34, v35, v36, v37, v38);
                  *(_BYTE *)(v32 + 128) = 0;
                  *(_DWORD *)(v32 + 144) = 0;
                  *(float *)(v32 + 100) = LocalPosition.fields.x;
                  *(float *)(v32 + 104) = y;
                  *(float *)(v32 + 108) = LocalPosition.fields.z;
                  v47 = this->fields.seed;
                  if ( !v47 )
                    sub_1C93D2C(v39, v40);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v21 = v209;
                  v49 = y + v47->fields.arrangementPich.fields.y;
                  if ( !itemList )
                    sub_1C93D2C(0, v40);
                  v50 = itemList->fields._items;
                  v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v50 )
                    sub_1C93D2C(itemList, v40);
                  v52 = itemList->fields._size;
                  if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v32,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v53 = &v50->obj.klass + v52;
                    itemList->fields._size = v52 + 1;
                    v53[4] = (Il2CppClass *)v32;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v53 + 4), v32, v41, v42, v43, v44, v45, v46);
                  }
                  eventId = 0;
                  m_CancellationTokenSource = (int)v29->fields.m_CancellationTokenSource;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v23;
                  }
                  else
                  {
                    v57 = 0;
                    do
                    {
                      if ( v57 >= (unsigned int)m_CancellationTokenSource )
                        sub_1C93D34(v54);
                      v58 = *((_QWORD *)&v29->fields.dropObjectList + v57);
                      v23 = v30 + 1;
                      v59 = sub_1C93D20(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v59 + 144) = 1;
                      ListViewItem___ctor_44487500((ListViewItem_o *)v59, v30, 0);
                      *(_QWORD *)(v59 + 136) = v58;
                      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v59 + 136), v58, v60, v61, v62, v63, v64, v65);
                      *(_DWORD *)(v59 + 144) = 0;
                      *(float *)(v59 + 100) = LocalPosition.fields.x;
                      *(float *)(v59 + 104) = v49;
                      *(float *)(v59 + 108) = LocalPosition.fields.z;
                      v74 = this->fields.seed;
                      if ( !v74 )
                        sub_1C93D2C(v66, v67);
                      v75 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v21 = v209;
                      v49 = v49 + v74->fields.arrangementPich.fields.y;
                      if ( !v75 )
                        sub_1C93D2C(0, v67);
                      v76 = v75->fields._items;
                      v77 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v75->fields._version;
                      if ( !v76 )
                        sub_1C93D2C(v75, v67);
                      v78 = v75->fields._size;
                      if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v75,
                          (Il2CppObject *)v59,
                          *(const MethodInfo_387999C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v79 = &v76->obj.klass + v78;
                        v75->fields._size = v78 + 1;
                        v79[4] = (Il2CppClass *)v59;
                        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v79 + 4), v59, v68, v69, v70, v71, v72, v73);
                      }
                      ++v30;
                      v57 = eventId + 1;
                      eventId = v57;
                      m_CancellationTokenSource = (int)v29->fields.m_CancellationTokenSource;
                    }
                    while ( v57 < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_1C93D2C(0, v55);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0);
                  if ( !transform )
                    sub_1C93D2C(0, v82);
                  v217.fields.x = LocalPosition.fields.x;
                  v217.fields.y = v49;
                  v217.fields.z = LocalPosition.fields.z;
                  UnityEngine_Transform__set_localPosition(transform, v217, 0);
                  v85 = this->fields.seed;
                  if ( !v85 )
                    sub_1C93D2C(v83, v84);
                  v86 = this->fields.lineObj;
                  y = v49 + v85->fields.arrangementPich.fields.y;
                  if ( !v86 )
                    sub_1C93D2C(0, v84);
                  UnityEngine_GameObject__SetActive(v86, 1, 0);
                }
                v87 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_1C93D2C(TotalEventPointInfo, v27);
                v88 = 0;
                v89 = (GrandQuestFolderBoardItem_o *)(v22 + 8);
                while ( 1 )
                {
                  v90 = LODWORD(v87->max_length);
                  if ( (__int64)v88 >= (int)v90 )
                    break;
                  if ( v88 >= v90 )
                    sub_1C93D34(TotalEventPointInfo);
                  v91 = &v87->obj.klass + v88;
                  v92 = (EventUpValInfo_o *)v91[4];
                  if ( v92 )
                  {
                    questRestrictionInfo = v21->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_1C93D2C(TotalEventPointInfo, v27);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v88,
                      (EventUpValInfo_o *)v91[4],
                      questRestrictionInfo->fields.eventId,
                      v28);
                    DropItemList = EventUpValInfo__GetDropItemList(v92, v88, 0);
                    if ( !v22 )
                      sub_1C93D2C(DropItemList, v95);
                    v102 = (GrandQuestFolderBoardItem_c *)DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_1C93C10(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v22 + 64LL));
                      if ( !DropItemList )
                      {
                        v206 = sub_1C93D50();
                        sub_1C93BFC(v206, 0);
                      }
                    }
                    if ( v88 >= v22[6] )
                      sub_1C93D34(DropItemList);
                    v89->klass = v102;
                    sub_1C93A78(v89, (int32_t)v102, v96, v97, v98, v99, v100, v101);
                    v87 = eventUpValList;
                  }
                  ++v88;
                  v89 = (GrandQuestFolderBoardItem_o *)((char *)v89 + 8);
                  if ( !v87 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                &v212,
                (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v103 = (struct EventMemberMargeUpValInfo_array *)sub_1C93B7C(
                                                                   EventMemberMargeUpValInfo___TypeInfo,
                                                                   LODWORD(eventUpValList->max_length));
                p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
                this->fields.eventMargeUpValInfoList = v103;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&this->fields.eventMargeUpValInfoList,
                  (int32_t)v103,
                  v105,
                  v106,
                  v107,
                  v108,
                  v109,
                  v110);
                v111 = eventUpValList;
                if ( eventUpValList )
                {
                  v112 = 0;
                  do
                  {
                    if ( (__int64)v112 >= SLODWORD(v111->max_length) )
                      goto LABEL_150;
                    seed = (__int64)PartyListViewItem__GetMember(v21, v112, 0);
                    if ( !seed )
                      break;
                    v113 = seed;
                    if ( *(_BYTE *)(seed + 136) )
                    {
                      if ( !*(_QWORD *)(seed + 128) )
                        goto LABEL_144;
                    }
                    else if ( !*(_QWORD *)(seed + 120) )
                    {
                      goto LABEL_144;
                    }
                    v114 = *(ServantEntity_o **)(seed + 192);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v7);
                    v116 = *(_BYTE *)(v113 + 136);
                    v117 = SvtNameText;
                    v118 = (EventMemberMargeUpValInfo_o *)sub_1C93D20(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v118, v112, v114, v117, v116, 0);
                    v125 = (unsigned int *)*p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      break;
                    if ( v118 )
                    {
                      seed = sub_1C93C10(v118, *(_QWORD *)(*(_QWORD *)v125 + 64LL));
                      if ( !seed )
                      {
                        v207 = sub_1C93D50();
                        sub_1C93BFC(v207, 0);
                      }
                    }
                    this = v208;
                    if ( v112 >= v125[6] )
                      goto LABEL_155;
                    v126 = &v125[2 * v112];
                    *((_QWORD *)v126 + 4) = v118;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)(v126 + 8),
                      (int32_t)v118,
                      v119,
                      v120,
                      v121,
                      v122,
                      v123,
                      v124);
                    v127 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v128 = 0;
                    while ( (__int64)v128 < SLODWORD(v127->max_length) )
                    {
                      if ( !v22 )
                        goto LABEL_154;
                      if ( v128 >= v22[6] )
                        goto LABEL_155;
                      v7 = *(MethodInfo **)&v22[2 * v128 + 8];
                      if ( v7 )
                      {
                        v129 = *p_eventMargeUpValInfoList;
                        if ( !*p_eventMargeUpValInfoList )
                          goto LABEL_154;
                        if ( v112 >= LODWORD(v129->max_length) )
                          goto LABEL_155;
                        seed = (__int64)v129->m_Items[v112];
                        if ( !seed )
                          goto LABEL_154;
                        EventMemberMargeUpValInfo__Add(
                          (EventMemberMargeUpValInfo_o *)seed,
                          (EventDropItemUpValInfo_array *)v7,
                          0);
                        v127 = eventUpValList;
                      }
                      ++v128;
                      if ( !v127 )
                        goto LABEL_154;
                    }
                    if ( !v118 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v118, 0);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v113 + 320) )
                    {
                      v130 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v130,
                        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v131 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v113 + 320);
                      if ( v131 )
                      {
                        v132 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                          v132 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        _9__20_0 = (System_Func_object__bool__o *)v132->static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !v132->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v132);
                            v132 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                          }
                          v134 = (Il2CppObject *)v132->static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v134,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0);
                          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          static_fields->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0,
                            (int32_t)_9__20_0,
                            v136,
                            v137,
                            v138,
                            v139,
                            v140,
                            v141);
                        }
                        v142 = System_Linq_Enumerable__Where_object_(
                                 v131,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v143 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v142,
                                                                                (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v130 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_59216528(
                          v130,
                          v143,
                          (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___79002184);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v118, 0);
                      v145 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v146 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                        v145 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      _9__20_1 = (System_Func_object__bool__o *)v145->static_fields->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !v145->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v145);
                          v145 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        v148 = (Il2CppObject *)v145->static_fields->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v148,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0);
                        v149 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v149->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)&v149->__9__20_1,
                          (int32_t)_9__20_1,
                          v150,
                          v151,
                          v152,
                          v153,
                          v154,
                          v155);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v146,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v130 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v130,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v118->fields.servantName;
                      v157 = *(_BYTE *)(v113 + 136);
                      v158 = sub_1C93D20(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v158 + 144) = 1;
                      ListViewItem___ctor_44487500((ListViewItem_o *)v158, v23, 0);
                      *(_QWORD *)(v158 + 120) = servantName;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)(v158 + 120),
                        (int32_t)servantName,
                        v159,
                        v160,
                        v161,
                        v162,
                        v163,
                        v164);
                      *(_BYTE *)(v158 + 128) = v157;
                      *(_DWORD *)(v158 + 144) = 1;
                      *(float *)(v158 + 100) = LocalPosition.fields.x;
                      *(float *)(v158 + 104) = y;
                      *(float *)(v158 + 108) = LocalPosition.fields.z;
                      v171 = v208->fields.seed;
                      if ( !v171 )
                        break;
                      seed = (__int64)v208->fields.itemList;
                      if ( !seed )
                        break;
                      v172 = v171->fields.arrangementPich.fields.y;
                      v173 = *(_QWORD *)(seed + 16);
                      v174 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v173 )
                        break;
                      v175 = *(int *)(seed + 24);
                      if ( (unsigned int)v175 >= *(_DWORD *)(v173 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v158,
                          *(const MethodInfo_387999C **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v176 = v173 + 8 * v175;
                        *(_DWORD *)(seed + 24) = v175 + 1;
                        *(_QWORD *)(v176 + 32) = v158;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)(v176 + 32),
                          v158,
                          v165,
                          v166,
                          v167,
                          v168,
                          v169,
                          v170);
                      }
                      ++v23;
                      v177 = y + v172;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v210,
                        v130,
                        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v178 = 0;
                      v211 = v210;
LABEL_122:
                      v179 = v23;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v211,
                                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v181 = v211.fields._current;
                        if ( v211.fields._current && HIDWORD(v211.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v113 + 136) )
                            continue;
                          v182 = *(ServantEntity_o **)(v113 + 192);
                          if ( !v182 )
                            sub_1C93D2C(0, v180);
                          if ( ServantEntity__checkIsHeroineSvt(v182, 0) )
                          {
                            v183 = *(UserServantEntity_o **)(v113 + 120);
                            if ( v183 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v183, 0) )
                                continue;
                            }
                          }
                        }
                        ++v23;
                        v158 = sub_1C93D20(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v158 + 144) = 1;
                        ListViewItem___ctor_44487500((ListViewItem_o *)v158, v179, 0);
                        *(_QWORD *)(v158 + 136) = v181;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)(v158 + 136),
                          (int32_t)v181,
                          v184,
                          v185,
                          v186,
                          v187,
                          v188,
                          v189);
                        *(_DWORD *)(v158 + 144) = 1;
                        *(float *)(v158 + 100) = LocalPosition.fields.x;
                        *(float *)(v158 + 104) = v177;
                        *(float *)(v158 + 108) = LocalPosition.fields.z;
                        v198 = v208->fields.seed;
                        if ( !v198 )
                          sub_1C93D2C(v190, v191);
                        v199 = (System_Collections_Generic_List_object__o *)v208->fields.itemList;
                        v177 = v177 + v198->fields.arrangementPich.fields.y;
                        if ( !v199 )
                          sub_1C93D2C(0, v191);
                        v200 = v199->fields._items;
                        v201 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                        ++v199->fields._version;
                        if ( !v200 )
                          sub_1C93D2C(v199, v191);
                        v202 = v199->fields._size;
                        if ( (unsigned int)v202 >= LODWORD(v200->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v199,
                            (Il2CppObject *)v158,
                            *(const MethodInfo_387999C **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v203 = &v200->obj.klass + v202;
                          v199->fields._size = v202 + 1;
                          v203[4] = (Il2CppClass *)v158;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)(v203 + 4),
                            v158,
                            v192,
                            v193,
                            v194,
                            v195,
                            v196,
                            v197);
                        }
                        ++v178;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v211,
                        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      this = v208;
                      if ( v178 )
                      {
                        y = v177 + -8.0;
                      }
                      else
                      {
                        seed = (__int64)v208->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v158,
                                 (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v204 = v208->fields.seed;
                        if ( !v204 )
                          break;
                        y = v177 - v204->fields.arrangementPich.fields.y;
                      }
                    }
                    v21 = v209;
LABEL_144:
                    v111 = eventUpValList;
                    ++v112;
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
    sub_1C93D2C(seed, v7);
  }
LABEL_150:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4, v5, v6, v7, v8);
}


PartyOrganizationEventPointListViewItem_o *PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D2C339 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4D2C339 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4D2C337 & 1) == 0 )
  {
    sub_1C93AD4(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4D2C337 = 1;
  }
  v35 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0);
  v12 = (EventPartyMargeUpValInfo_o *)sub_1C93D20(EventPartyMargeUpValInfo_TypeInfo);
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
              *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
        v20 = *((_DWORD *)v21 + 6);
        if ( (int)++v22 >= v20 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C93D34(EventUpVal);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_30:
    sub_1C93D2C(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_4D2C33E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C33E = 1;
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
          sub_1C93D2C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4D2C336 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2C336 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_1C93D34(Instance);
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
                                       (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
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
        sub_1C93D2C(Instance, v9);
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

  if ( (byte_4D2C33C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C93AD4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2C33C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      PartyOrganizationEventPointListViewObject__Init_34827048(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewManager__RequestListObject_34825936(
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

  if ( (byte_4D2C33D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C93AD4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2C33D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      PartyOrganizationEventPointListViewObject__Init_34826440(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_34825404(this, mode, v10);
}


void PartyOrganizationEventPointListViewManager__SetMode_34825404(
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

  if ( (byte_4D2C33B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_1C93AD4(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2C33B = 1;
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
            (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
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
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v14 = v11->fields._size;
          v15 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v16 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
          PartyOrganizationEventPointListViewObject__Init_34826440(v15, v18, v16, v17);
          if ( ++v12 >= v11->fields._size )
            return;
        }
      }
      sub_1C93D2C(ClippingObjectList, v9);
    case 2:
      v7 = 3;
      goto LABEL_17;
    case 1:
      v7 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_34825936(this, v7, v6);
      break;
  }
}


void PartyOrganizationEventPointListViewManager__SetMode_34825884(
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationEventPointListViewManager__SetMode_34825404(this, mode, v10);
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
  if ( (byte_4D2C33A & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1C93AD4(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_4D2C33A = 1;
  }
  if ( !obj
    || (naturalAligment = PartyOrganizationEventPointListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_34825280(
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

  if ( (byte_4D2C330 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4D2C330 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2C332 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2C332 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2C335 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C335 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C93D2C(0, v10);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C93D2C(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44503492((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C93D2C(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C93D2C(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C93D2C(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C93D2C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D2C334 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C334 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D2C331 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4D2C331 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2C333 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2C333 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C940C8(v7);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC2F70;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC2F18;
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
  if ( (byte_4D2C33F & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_4D2C33F = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return sub_1C93A88(this, v10, callback, object);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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

  if ( (byte_4D2C340 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_4D2C340 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_1C93A78(
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
    sub_1C93D2C(this, 0);
  return info->fields.targetType != 7;
}


bool PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_1C93D2C(this, 0);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}