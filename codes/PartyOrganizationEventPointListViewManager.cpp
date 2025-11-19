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
  const MethodInfo *v36; // x3
  __int64 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct ListViewItemSeed_o *v41; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v43; // s10
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x8
  __int64 v48; // x0
  __int64 v49; // x1
  int m_CancellationTokenSource; // w8
  int32_t v51; // w9
  __int64 v52; // x26
  __int64 v53; // x25
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct ListViewItemSeed_o *v60; // x8
  System_Collections_Generic_List_object__o *v61; // x0
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  struct ListViewItemSeed_o *v71; // x8
  UnityEngine_GameObject_o *v72; // x0
  EventUpValInfo_array *v73; // x8
  unsigned __int64 v74; // x23
  CGThumbnailListItem_o *v75; // x24
  unsigned __int64 v76; // x9
  Il2CppClass **v77; // x9
  EventUpValInfo_o *v78; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v81; // x1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  CGThumbnailListItem_c *v84; // x25
  struct EventMemberMargeUpValInfo_array *v85; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // x23
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  EventUpValInfo_array *v89; // x8
  unsigned __int64 v90; // x24
  __int64 v91; // x25
  ServantEntity_o *v92; // x27
  System_String_o *SvtNameText; // x0
  char v94; // w28
  System_String_o *v95; // x29
  EventMemberMargeUpValInfo_o *v96; // x26
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  unsigned int *v99; // x20
  unsigned int *v100; // x0
  EventUpValInfo_array *v101; // x8
  unsigned __int64 v102; // x20
  struct EventMemberMargeUpValInfo_array *v103; // x8
  System_Collections_Generic_List_object__o *v104; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x27
  PartyOrganizationEventPointListViewManager___c_c *v106; // x0
  System_Func_object__bool__o *_9__20_0; // x28
  Il2CppObject *v108; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0
  System_Collections_Generic_IEnumerable_T__o *v113; // x27
  EventMargeItemUpValInfo_array *List; // x0
  PartyOrganizationEventPointListViewManager___c_c *v115; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x27
  System_Func_object__bool__o *_9__20_1; // x29
  Il2CppObject *v118; // x20
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct System_String_o *servantName; // x20
  char v123; // w26
  __int64 v124; // x27
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  struct ListViewItemSeed_o *v129; // x8
  float v130; // s12
  __int64 v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x8
  float v135; // s10
  int v136; // w20
  int32_t v137; // w28
  __int64 v138; // x1
  Il2CppObject *v139; // x29
  ServantEntity_o *v140; // x0
  UserServantEntity_o *v141; // x0
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  __int64 v144; // x0
  __int64 v145; // x1
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  struct ListViewItemSeed_o *v148; // x8
  System_Collections_Generic_List_object__o *v149; // x0
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  Il2CppClass **v153; // x8
  struct ListViewItemSeed_o *v154; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v156; // x0
  __int64 v157; // x0
  PartyOrganizationEventPointListViewManager_o *v158; // [xsp+8h] [xbp-118h]
  PartyListViewItem_o *v159; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v160; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v161; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v162; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v163; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB1CA6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C6BA08(&EventDropItemUpValInfo_____TypeInfo);
    sub_1C6BA08(&EventMemberMargeUpValInfo___TypeInfo);
    sub_1C6BA08(&EventMemberMargeUpValInfo_TypeInfo);
    sub_1C6BA08(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78512464);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__);
    sub_1C6BA08(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__);
    sub_1C6BA08(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_10330/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10228/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_4CB1CA6 = 1;
  }
  eventUpValList = 0;
  eventId = 0;
  memset(&v163, 0, sizeof(v163));
  memset(&v162, 0, sizeof(v162));
  memset(&v161, 0, sizeof(v161));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_154;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0) )
  {
    seed = (__int64)this->fields.seed;
    v159 = partyItem;
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
            sub_1C6BC68(seed);
          v14 = v8->m_Items[v12];
          if ( v14 )
          {
            seed = (__int64)v14->fields.dropList;
            if ( !seed )
              goto LABEL_154;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v160,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v163 = v160;
            while ( 1 )
            {
              v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v163,
                      (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v15 )
                break;
              current = v163.fields._current;
              if ( !v163.fields._current )
                sub_1C6BC60(v15, v16);
              if ( !v5 )
                sub_1C6BC60(v15, v16);
              v18 = System_Collections_Generic_List_int___Contains(
                      v5,
                      (int32_t)v163.fields._current[1].klass,
                      (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v18 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v5->fields._items;
                v21 = Method_System_Collections_Generic_List_int__Add__;
                ++v5->fields._version;
                if ( !items )
                  sub_1C6BC60(v18, klass_low);
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v5,
                    klass_low,
                    *(const MethodInfo_37E3950 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v5->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v163,
              (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
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
            seed = sub_1C6BAB0(EventDropItemUpValInfo_____TypeInfo, LODWORD(eventUpValList->max_length));
            if ( v5 )
            {
              v24 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v160,
                v5,
                (const MethodInfo_37E4424 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v25 = 0;
              v162 = v160;
              v158 = this;
              while ( 1 )
              {
                v26 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        (System_Collections_Generic_List_Enumerator_int__o *)&v162,
                        (const MethodInfo_358270C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v26 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v26,
                                                                                        (int32_t)v162.fields._current,
                                                                                        v23,
                                                                                        v27);
                v31 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_1C6BC60(0, v29);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v32 = v25 + 1;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0);
                  v34 = sub_1C6BC54(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v34 + 144) = 1;
                  ListViewItem___ctor_44050768((ListViewItem_o *)v34, v25, 0);
                  *(_QWORD *)(v34 + 120) = v33;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 120), (int32_t)v33, v35, v36);
                  *(_BYTE *)(v34 + 128) = 0;
                  *(_DWORD *)(v34 + 144) = 0;
                  *(float *)(v34 + 100) = x;
                  *(float *)(v34 + 104) = y;
                  *(float *)(v34 + 108) = z;
                  v41 = this->fields.seed;
                  if ( !v41 )
                    sub_1C6BC60(v37, v38);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v23 = v159;
                  v43 = y + v41->fields.arrangementPich.fields.y;
                  if ( !itemList )
                    sub_1C6BC60(0, v38);
                  v44 = itemList->fields._items;
                  v45 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v44 )
                    sub_1C6BC60(itemList, v38);
                  v46 = itemList->fields._size;
                  if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v34,
                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v47 = &v44->obj.klass + v46;
                    itemList->fields._size = v46 + 1;
                    v47[4] = (Il2CppClass *)v34;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v47 + 4), v34, v39, v40);
                  }
                  eventId = 0;
                  m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v25;
                  }
                  else
                  {
                    v51 = 0;
                    do
                    {
                      if ( v51 >= (unsigned int)m_CancellationTokenSource )
                        sub_1C6BC68(v48);
                      v52 = *((_QWORD *)&v31->fields.dropObjectList + v51);
                      v25 = v32 + 1;
                      v53 = sub_1C6BC54(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v53 + 144) = 1;
                      ListViewItem___ctor_44050768((ListViewItem_o *)v53, v32, 0);
                      *(_QWORD *)(v53 + 136) = v52;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v53 + 136), v52, v54, v55);
                      *(_DWORD *)(v53 + 144) = 0;
                      *(float *)(v53 + 100) = x;
                      *(float *)(v53 + 104) = v43;
                      *(float *)(v53 + 108) = z;
                      v60 = this->fields.seed;
                      if ( !v60 )
                        sub_1C6BC60(v56, v57);
                      v61 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v23 = v159;
                      v43 = v43 + v60->fields.arrangementPich.fields.y;
                      if ( !v61 )
                        sub_1C6BC60(0, v57);
                      v62 = v61->fields._items;
                      v63 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v61->fields._version;
                      if ( !v62 )
                        sub_1C6BC60(v61, v57);
                      v64 = v61->fields._size;
                      if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v61,
                          (Il2CppObject *)v53,
                          *(const MethodInfo_3800974 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v65 = &v62->obj.klass + v64;
                        v61->fields._size = v64 + 1;
                        v65[4] = (Il2CppClass *)v53;
                        sub_1C6B9AC((CGThumbnailListItem_o *)(v65 + 4), v53, v58, v59);
                      }
                      ++v32;
                      v51 = eventId + 1;
                      eventId = v51;
                      m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
                    }
                    while ( v51 < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_1C6BC60(0, v49);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0);
                  if ( !transform )
                    sub_1C6BC60(0, v68);
                  v167.fields.x = x;
                  v167.fields.y = v43;
                  v167.fields.z = z;
                  UnityEngine_Transform__set_localPosition(transform, v167, 0);
                  v71 = this->fields.seed;
                  if ( !v71 )
                    sub_1C6BC60(v69, v70);
                  v72 = this->fields.lineObj;
                  y = v43 + v71->fields.arrangementPich.fields.y;
                  if ( !v72 )
                    sub_1C6BC60(0, v70);
                  UnityEngine_GameObject__SetActive(v72, 1, 0);
                }
                v73 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_1C6BC60(TotalEventPointInfo, v29);
                v74 = 0;
                v75 = (CGThumbnailListItem_o *)(v24 + 8);
                while ( 1 )
                {
                  v76 = LODWORD(v73->max_length);
                  if ( (__int64)v74 >= (int)v76 )
                    break;
                  if ( v74 >= v76 )
                    sub_1C6BC68(TotalEventPointInfo);
                  v77 = &v73->obj.klass + v74;
                  v78 = (EventUpValInfo_o *)v77[4];
                  if ( v78 )
                  {
                    questRestrictionInfo = v23->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_1C6BC60(TotalEventPointInfo, v29);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v74,
                      (EventUpValInfo_o *)v77[4],
                      questRestrictionInfo->fields.eventId,
                      v30);
                    DropItemList = EventUpValInfo__GetDropItemList(v78, v74, 0);
                    if ( !v24 )
                      sub_1C6BC60(DropItemList, v81);
                    v84 = (CGThumbnailListItem_c *)DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_1C6BB44(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v24 + 64LL));
                      if ( !DropItemList )
                      {
                        v156 = sub_1C6BC84();
                        sub_1C6BB30(v156, 0);
                      }
                    }
                    if ( v74 >= v24[6] )
                      sub_1C6BC68(DropItemList);
                    v75->klass = v84;
                    sub_1C6B9AC(v75, (int32_t)v84, v82, v83);
                    v73 = eventUpValList;
                  }
                  ++v74;
                  v75 = (CGThumbnailListItem_o *)((char *)v75 + 8);
                  if ( !v73 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v162,
                (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v85 = (struct EventMemberMargeUpValInfo_array *)sub_1C6BAB0(
                                                                  EventMemberMargeUpValInfo___TypeInfo,
                                                                  LODWORD(eventUpValList->max_length));
                p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
                this->fields.eventMargeUpValInfoList = v85;
                sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, (int32_t)v85, v87, v88);
                v89 = eventUpValList;
                if ( eventUpValList )
                {
                  v90 = 0;
                  do
                  {
                    if ( (__int64)v90 >= SLODWORD(v89->max_length) )
                      goto LABEL_150;
                    seed = (__int64)PartyListViewItem__GetMember(v23, v90, 0);
                    if ( !seed )
                      break;
                    v91 = seed;
                    if ( *(_BYTE *)(seed + 136) )
                    {
                      if ( !*(_QWORD *)(seed + 128) )
                        goto LABEL_144;
                    }
                    else if ( !*(_QWORD *)(seed + 120) )
                    {
                      goto LABEL_144;
                    }
                    v92 = *(ServantEntity_o **)(seed + 192);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v7);
                    v94 = *(_BYTE *)(v91 + 136);
                    v95 = SvtNameText;
                    v96 = (EventMemberMargeUpValInfo_o *)sub_1C6BC54(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v96, v90, v92, v95, v94, 0);
                    v99 = (unsigned int *)*p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      break;
                    if ( v96 )
                    {
                      seed = sub_1C6BB44(v96, *(_QWORD *)(*(_QWORD *)v99 + 64LL));
                      if ( !seed )
                      {
                        v157 = sub_1C6BC84();
                        sub_1C6BB30(v157, 0);
                      }
                    }
                    this = v158;
                    if ( v90 >= v99[6] )
                      goto LABEL_155;
                    v100 = &v99[2 * v90];
                    *((_QWORD *)v100 + 4) = v96;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v100 + 8), (int32_t)v96, v97, v98);
                    v101 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v102 = 0;
                    while ( (__int64)v102 < SLODWORD(v101->max_length) )
                    {
                      if ( !v24 )
                        goto LABEL_154;
                      if ( v102 >= v24[6] )
                        goto LABEL_155;
                      v7 = *(MethodInfo **)&v24[2 * v102 + 8];
                      if ( v7 )
                      {
                        v103 = *p_eventMargeUpValInfoList;
                        if ( !*p_eventMargeUpValInfoList )
                          goto LABEL_154;
                        if ( v90 >= LODWORD(v103->max_length) )
                          goto LABEL_155;
                        seed = (__int64)v103->m_Items[v90];
                        if ( !seed )
                          goto LABEL_154;
                        EventMemberMargeUpValInfo__Add(
                          (EventMemberMargeUpValInfo_o *)seed,
                          (EventDropItemUpValInfo_array *)v7,
                          0);
                        v101 = eventUpValList;
                      }
                      ++v102;
                      if ( !v101 )
                        goto LABEL_154;
                    }
                    if ( !v96 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v96, 0);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v91 + 320) )
                    {
                      v104 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v104,
                        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v105 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v91 + 320);
                      if ( v105 )
                      {
                        v106 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                          v106 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        _9__20_0 = (System_Func_object__bool__o *)v106->static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !v106->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v106);
                            v106 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                          }
                          v108 = (Il2CppObject *)v106->static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v108,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0);
                          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          static_fields->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v110, v111);
                        }
                        v112 = System_Linq_Enumerable__Where_object_(
                                 v105,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v113 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v112,
                                                                                (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v104 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_58720872(
                          v104,
                          v113,
                          (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78512464);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v96, 0);
                      v115 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v116 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                        v115 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      _9__20_1 = (System_Func_object__bool__o *)v115->static_fields->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !v115->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v115);
                          v115 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        v118 = (Il2CppObject *)v115->static_fields->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v118,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0);
                        v119 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v119->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_1C6B9AC((CGThumbnailListItem_o *)&v119->__9__20_1, (int32_t)_9__20_1, v120, v121);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v116,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v104 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v104,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v96->fields.servantName;
                      v123 = *(_BYTE *)(v91 + 136);
                      v124 = sub_1C6BC54(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v124 + 144) = 1;
                      ListViewItem___ctor_44050768((ListViewItem_o *)v124, v25, 0);
                      *(_QWORD *)(v124 + 120) = servantName;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v124 + 120), (int32_t)servantName, v125, v126);
                      *(_BYTE *)(v124 + 128) = v123;
                      *(_DWORD *)(v124 + 144) = 1;
                      *(float *)(v124 + 100) = x;
                      *(float *)(v124 + 104) = y;
                      *(float *)(v124 + 108) = z;
                      v129 = v158->fields.seed;
                      if ( !v129 )
                        break;
                      seed = (__int64)v158->fields.itemList;
                      if ( !seed )
                        break;
                      v130 = v129->fields.arrangementPich.fields.y;
                      v131 = *(_QWORD *)(seed + 16);
                      v132 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v131 )
                        break;
                      v133 = *(int *)(seed + 24);
                      if ( (unsigned int)v133 >= *(_DWORD *)(v131 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v124,
                          *(const MethodInfo_3800974 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v134 = v131 + 8 * v133;
                        *(_DWORD *)(seed + 24) = v133 + 1;
                        *(_QWORD *)(v134 + 32) = v124;
                        sub_1C6B9AC((CGThumbnailListItem_o *)(v134 + 32), v124, v127, v128);
                      }
                      ++v25;
                      v135 = y + v130;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v160,
                        v104,
                        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v136 = 0;
                      v161 = v160;
LABEL_122:
                      v137 = v25;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v161,
                                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v139 = v161.fields._current;
                        if ( v161.fields._current && HIDWORD(v161.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v91 + 136) )
                            continue;
                          v140 = *(ServantEntity_o **)(v91 + 192);
                          if ( !v140 )
                            sub_1C6BC60(0, v138);
                          if ( ServantEntity__checkIsHeroineSvt(v140, 0) )
                          {
                            v141 = *(UserServantEntity_o **)(v91 + 120);
                            if ( v141 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v141, 0) )
                                continue;
                            }
                          }
                        }
                        ++v25;
                        v124 = sub_1C6BC54(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v124 + 144) = 1;
                        ListViewItem___ctor_44050768((ListViewItem_o *)v124, v137, 0);
                        *(_QWORD *)(v124 + 136) = v139;
                        sub_1C6B9AC((CGThumbnailListItem_o *)(v124 + 136), (int32_t)v139, v142, v143);
                        *(_DWORD *)(v124 + 144) = 1;
                        *(float *)(v124 + 100) = x;
                        *(float *)(v124 + 104) = v135;
                        *(float *)(v124 + 108) = z;
                        v148 = v158->fields.seed;
                        if ( !v148 )
                          sub_1C6BC60(v144, v145);
                        v149 = (System_Collections_Generic_List_object__o *)v158->fields.itemList;
                        v135 = v135 + v148->fields.arrangementPich.fields.y;
                        if ( !v149 )
                          sub_1C6BC60(0, v145);
                        v150 = v149->fields._items;
                        v151 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                        ++v149->fields._version;
                        if ( !v150 )
                          sub_1C6BC60(v149, v145);
                        v152 = v149->fields._size;
                        if ( (unsigned int)v152 >= LODWORD(v150->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v149,
                            (Il2CppObject *)v124,
                            *(const MethodInfo_3800974 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v153 = &v150->obj.klass + v152;
                          v149->fields._size = v152 + 1;
                          v153[4] = (Il2CppClass *)v124;
                          sub_1C6B9AC((CGThumbnailListItem_o *)(v153 + 4), v124, v146, v147);
                        }
                        ++v136;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v161,
                        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      this = v158;
                      if ( v136 )
                      {
                        y = v135 + -8.0;
                      }
                      else
                      {
                        seed = (__int64)v158->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v124,
                                 (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v154 = v158->fields.seed;
                        if ( !v154 )
                          break;
                        y = v135 - v154->fields.arrangementPich.fields.y;
                      }
                    }
                    v23 = v159;
LABEL_144:
                    v89 = eventUpValList;
                    ++v90;
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
    sub_1C6BC60(seed, v7);
  }
LABEL_150:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10228/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0);
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
  const MethodInfo *v4; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  this->fields.eventMargeUpValInfoList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4);
}


PartyOrganizationEventPointListViewItem_o *PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CB1CA7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4CB1CA7 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  EventUpValInfo_array *v31; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4CB1CA5 & 1) == 0 )
  {
    sub_1C6BA08(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4CB1CA5 = 1;
  }
  v31 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0);
  v12 = (EventPartyMargeUpValInfo_o *)sub_1C6BC54(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v12, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v31, 0);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v14 = v31;
    if ( !v31 )
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
        v14 = v31;
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
          v27 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_30;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v23,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v23;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
          }
        }
        v20 = *((_DWORD *)v21 + 6);
        if ( (int)++v22 >= v20 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C6BC68(EventUpVal);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_30:
    sub_1C6BC60(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CB1CAC & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1CAC = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C6BC60(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4CB1CA4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_int___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CB1CA4 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_1C6BC68(Instance);
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
                                       (const MethodInfo_324317C *)Method_System_Array_IndexOf_int___);
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
        sub_1C6BC60(Instance, v9);
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

  if ( (byte_4CB1CAA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C6BA08(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB1CAA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v12, v13);
      PartyOrganizationEventPointListViewObject__Init_34430556(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewManager__RequestListObject_34429444(
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

  if ( (byte_4CB1CAB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C6BA08(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB1CAB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v10, v11);
      PartyOrganizationEventPointListViewObject__Init_34429948(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


void PartyOrganizationEventPointListViewManager__SetMode(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_34428912(this, mode, v6);
}


void PartyOrganizationEventPointListViewManager__SetMode_34428912(
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

  if ( (byte_4CB1CA9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_1C6BA08(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB1CA9 = 1;
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
            (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
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
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v14 = v11->fields._size;
          v15 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v16 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
          PartyOrganizationEventPointListViewObject__Init_34429948(v15, v18, v16, v17);
          if ( ++v12 >= v11->fields._size )
            return;
        }
      }
      sub_1C6BC60(ClippingObjectList, v9);
    case 2:
      v7 = 3;
      goto LABEL_17;
    case 1:
      v7 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_34429444(this, v7, v6);
      break;
  }
}


void PartyOrganizationEventPointListViewManager__SetMode_34429392(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_34428912(this, mode, v6);
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
  if ( (byte_4CB1CA8 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1C6BA08(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_4CB1CA8 = 1;
  }
  if ( !obj
    || (naturalAligment = PartyOrganizationEventPointListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_34428788(
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

  if ( (byte_4CB1C9E & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4CB1C9E = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C6BFFC(v7);
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

  if ( (byte_4CB1CA0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB1CA0 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C6BFFC(v7);
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
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CB1CA3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1CA3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C6BC60(0, v10);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C6BC60(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_44066648((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C6BC60(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C6BC60(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C6BC60(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB1CA2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1CA2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CB1C9F & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4CB1C9F = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C6BFFC(v7);
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

  if ( (byte_4CB1CA1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB1CA1 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C6BFFC(v7);
  PartyOrganizationEventPointListViewManager__get_ObjectList(v10, v11);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc___ctor(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9BEFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9BEA4;
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
  if ( (byte_4CB1CAD & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_4CB1CAD = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB1CAE & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_4CB1CAE = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C6BC60(this, 0);
  return info->fields.targetType != 7;
}


bool PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_1C6BC60(this, 0);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}