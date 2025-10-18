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
  EventUpValInfo_array *v7; // x8
  float x; // s8
  float y; // s10
  float z; // s9
  unsigned __int64 v11; // x20
  unsigned __int64 max_length_low; // x9
  EventUpValInfo_o *v13; // x8
  _BOOL8 v14; // x0
  Il2CppObject *current; // x21
  _BOOL8 v16; // x0
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  PartyListViewItem_o *v21; // x26
  unsigned int *v22; // x21
  int32_t v23; // w22
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x3
  PartyOrganizationEventPointListViewManager_o *TotalEventPointInfo; // x0
  const MethodInfo *v27; // x4
  PartyOrganizationEventPointListViewManager_o *v28; // x24
  int32_t v29; // w23
  System_String_o *v30; // x26
  __int64 v31; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct ListViewItemSeed_o *v37; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v39; // s10
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x8
  __int64 v44; // x0
  int m_CancellationTokenSource; // w8
  int32_t v46; // w9
  __int64 v47; // x26
  __int64 v48; // x25
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct ListViewItemSeed_o *v54; // x8
  System_Collections_Generic_List_object__o *v55; // x0
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v62; // x0
  struct ListViewItemSeed_o *v63; // x8
  UnityEngine_GameObject_o *v64; // x0
  EventUpValInfo_array *v65; // x8
  unsigned __int64 v66; // x23
  CGThumbnailListItem_o *v67; // x24
  unsigned __int64 v68; // x9
  Il2CppClass **v69; // x9
  EventUpValInfo_o *v70; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  CGThumbnailListItem_c *v75; // x25
  struct EventMemberMargeUpValInfo_array *v76; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // x23
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  EventUpValInfo_array *v80; // x8
  unsigned __int64 v81; // x24
  const MethodInfo *v82; // x1
  __int64 v83; // x25
  ServantEntity_o *v84; // x27
  System_String_o *SvtNameText; // x0
  char v86; // w28
  System_String_o *v87; // x29
  EventMemberMargeUpValInfo_o *v88; // x26
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  unsigned int *v91; // x20
  unsigned int *v92; // x0
  EventUpValInfo_array *v93; // x8
  unsigned __int64 v94; // x20
  EventDropItemUpValInfo_array *v95; // x1
  struct EventMemberMargeUpValInfo_array *v96; // x8
  System_Collections_Generic_List_object__o *v97; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x27
  PartyOrganizationEventPointListViewManager___c_c *v99; // x0
  System_Func_object__bool__o *_9__20_0; // x28
  Il2CppObject *v101; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  System_Collections_Generic_IEnumerable_T__o *v106; // x27
  EventMargeItemUpValInfo_array *List; // x0
  PartyOrganizationEventPointListViewManager___c_c *v108; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x27
  System_Func_object__bool__o *_9__20_1; // x29
  Il2CppObject *v111; // x20
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  struct System_String_o *servantName; // x20
  char v116; // w26
  __int64 v117; // x27
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct ListViewItemSeed_o *v122; // x8
  float v123; // s12
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x8
  float v128; // s10
  int v129; // w20
  int32_t v130; // w28
  Il2CppObject *v131; // x29
  ServantEntity_o *v132; // x0
  UserServantEntity_o *v133; // x0
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  __int64 v136; // x0
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  struct ListViewItemSeed_o *v139; // x8
  System_Collections_Generic_List_object__o *v140; // x0
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x8
  struct ListViewItemSeed_o *v145; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v147; // x0
  __int64 v148; // x0
  PartyOrganizationEventPointListViewManager_o *v149; // [xsp+8h] [xbp-118h]
  PartyListViewItem_o *v150; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v153; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v154; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E9D0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C37058(&EventDropItemUpValInfo_____TypeInfo);
    sub_1C37058(&EventMemberMargeUpValInfo___TypeInfo);
    sub_1C37058(&EventMemberMargeUpValInfo_TypeInfo);
    sub_1C37058(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78049648);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__);
    sub_1C37058(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__);
    sub_1C37058(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_10332/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_1C37058(&StringLiteral_10230/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_4C3E9D0 = 1;
  }
  eventUpValList = 0;
  eventId = 0;
  memset(&v154, 0, sizeof(v154));
  memset(&v153, 0, sizeof(v153));
  memset(&v152, 0, sizeof(v152));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_154;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0) )
  {
    seed = (__int64)this->fields.seed;
    v150 = partyItem;
    if ( seed )
    {
      LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0);
      v7 = eventUpValList;
      if ( eventUpValList )
      {
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        v11 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(v7->max_length);
          if ( (__int64)v11 >= (int)max_length_low )
            break;
          if ( v11 >= max_length_low )
LABEL_155:
            sub_1C372BC(seed);
          v13 = v7->m_Items[v11];
          if ( v13 )
          {
            seed = (__int64)v13->fields.dropList;
            if ( !seed )
              goto LABEL_154;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v151,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v154 = v151;
            while ( 1 )
            {
              v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v154,
                      (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v14 )
                break;
              current = v154.fields._current;
              if ( !v154.fields._current )
                sub_1C372B4(v14);
              if ( !v5 )
                sub_1C372B4(v14);
              v16 = System_Collections_Generic_List_int___Contains(
                      v5,
                      (int32_t)v154.fields._current[1].klass,
                      (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v16 )
              {
                klass = (int32_t)current[1].klass;
                items = v5->fields._items;
                v19 = Method_System_Collections_Generic_List_int__Add__;
                ++v5->fields._version;
                if ( !items )
                  sub_1C372B4(v16);
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v5,
                    klass,
                    *(const MethodInfo_3786000 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v5->fields._size = size + 1;
                  items->m_Items[size] = klass;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v154,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
          v7 = eventUpValList;
          ++v11;
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
            seed = sub_1C37100(EventDropItemUpValInfo_____TypeInfo, LODWORD(eventUpValList->max_length));
            if ( v5 )
            {
              v22 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v151,
                v5,
                (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v23 = 0;
              v153 = v151;
              v149 = this;
              while ( 1 )
              {
                v24 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        (System_Collections_Generic_List_Enumerator_int__o *)&v153,
                        (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v24 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v24,
                                                                                        (int32_t)v153.fields._current,
                                                                                        v21,
                                                                                        v25);
                v28 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_1C372B4(0);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v29 = v23 + 1;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_10332/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0);
                  v31 = sub_1C372A4(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v31 + 144) = 1;
                  ListViewItem___ctor_43804668((ListViewItem_o *)v31, v23, 0);
                  *(_QWORD *)(v31 + 120) = v30;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 120), (int32_t)v30, v32, v33);
                  *(_BYTE *)(v31 + 128) = 0;
                  *(_DWORD *)(v31 + 144) = 0;
                  *(float *)(v31 + 100) = x;
                  *(float *)(v31 + 104) = y;
                  *(float *)(v31 + 108) = z;
                  v37 = this->fields.seed;
                  if ( !v37 )
                    sub_1C372B4(v34);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v21 = v150;
                  v39 = y + v37->fields.arrangementPich.fields.y;
                  if ( !itemList )
                    sub_1C372B4(0);
                  v40 = itemList->fields._items;
                  v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v40 )
                    sub_1C372B4(itemList);
                  v42 = itemList->fields._size;
                  if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v31,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v43 = &v40->obj.klass + v42;
                    itemList->fields._size = v42 + 1;
                    v43[4] = (Il2CppClass *)v31;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 4), v31, v35, v36);
                  }
                  eventId = 0;
                  m_CancellationTokenSource = (int)v28->fields.m_CancellationTokenSource;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v23;
                  }
                  else
                  {
                    v46 = 0;
                    do
                    {
                      if ( v46 >= (unsigned int)m_CancellationTokenSource )
                        sub_1C372BC(v44);
                      v47 = *((_QWORD *)&v28->fields.dropObjectList + v46);
                      v23 = v29 + 1;
                      v48 = sub_1C372A4(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v48 + 144) = 1;
                      ListViewItem___ctor_43804668((ListViewItem_o *)v48, v29, 0);
                      *(_QWORD *)(v48 + 136) = v47;
                      sub_1C36FFC((CGThumbnailListItem_o *)(v48 + 136), v47, v49, v50);
                      *(_DWORD *)(v48 + 144) = 0;
                      *(float *)(v48 + 100) = x;
                      *(float *)(v48 + 104) = v39;
                      *(float *)(v48 + 108) = z;
                      v54 = this->fields.seed;
                      if ( !v54 )
                        sub_1C372B4(v51);
                      v55 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v21 = v150;
                      v39 = v39 + v54->fields.arrangementPich.fields.y;
                      if ( !v55 )
                        sub_1C372B4(0);
                      v56 = v55->fields._items;
                      v57 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v55->fields._version;
                      if ( !v56 )
                        sub_1C372B4(v55);
                      v58 = v55->fields._size;
                      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v55,
                          (Il2CppObject *)v48,
                          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v59 = &v56->obj.klass + v58;
                        v55->fields._size = v58 + 1;
                        v59[4] = (Il2CppClass *)v48;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v59 + 4), v48, v52, v53);
                      }
                      ++v29;
                      v46 = eventId + 1;
                      eventId = v46;
                      m_CancellationTokenSource = (int)v28->fields.m_CancellationTokenSource;
                    }
                    while ( v46 < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_1C372B4(0);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0);
                  if ( !transform )
                    sub_1C372B4(0);
                  v158.fields.x = x;
                  v158.fields.y = v39;
                  v158.fields.z = z;
                  UnityEngine_Transform__set_localPosition(transform, v158, 0);
                  v63 = this->fields.seed;
                  if ( !v63 )
                    sub_1C372B4(v62);
                  v64 = this->fields.lineObj;
                  y = v39 + v63->fields.arrangementPich.fields.y;
                  if ( !v64 )
                    sub_1C372B4(0);
                  UnityEngine_GameObject__SetActive(v64, 1, 0);
                }
                v65 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_1C372B4(TotalEventPointInfo);
                v66 = 0;
                v67 = (CGThumbnailListItem_o *)(v22 + 8);
                while ( 1 )
                {
                  v68 = LODWORD(v65->max_length);
                  if ( (__int64)v66 >= (int)v68 )
                    break;
                  if ( v66 >= v68 )
                    sub_1C372BC(TotalEventPointInfo);
                  v69 = &v65->obj.klass + v66;
                  v70 = (EventUpValInfo_o *)v69[4];
                  if ( v70 )
                  {
                    questRestrictionInfo = v21->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_1C372B4(TotalEventPointInfo);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v66,
                      (EventUpValInfo_o *)v69[4],
                      questRestrictionInfo->fields.eventId,
                      v27);
                    DropItemList = EventUpValInfo__GetDropItemList(v70, v66, 0);
                    if ( !v22 )
                      sub_1C372B4(DropItemList);
                    v75 = (CGThumbnailListItem_c *)DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_1C37194(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v22 + 64LL));
                      if ( !DropItemList )
                      {
                        v147 = sub_1C372D8();
                        sub_1C37180(v147, 0);
                      }
                    }
                    if ( v66 >= v22[6] )
                      sub_1C372BC(DropItemList);
                    v67->klass = v75;
                    sub_1C36FFC(v67, (int32_t)v75, v73, v74);
                    v65 = eventUpValList;
                  }
                  ++v66;
                  v67 = (CGThumbnailListItem_o *)((char *)v67 + 8);
                  if ( !v65 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v153,
                (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v76 = (struct EventMemberMargeUpValInfo_array *)sub_1C37100(
                                                                  EventMemberMargeUpValInfo___TypeInfo,
                                                                  LODWORD(eventUpValList->max_length));
                p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
                this->fields.eventMargeUpValInfoList = v76;
                sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, (int32_t)v76, v78, v79);
                v80 = eventUpValList;
                if ( eventUpValList )
                {
                  v81 = 0;
                  do
                  {
                    if ( (__int64)v81 >= SLODWORD(v80->max_length) )
                      goto LABEL_150;
                    seed = (__int64)PartyListViewItem__GetMember(v21, v81, 0);
                    if ( !seed )
                      break;
                    v83 = seed;
                    if ( *(_BYTE *)(seed + 136) )
                    {
                      if ( !*(_QWORD *)(seed + 128) )
                        goto LABEL_144;
                    }
                    else if ( !*(_QWORD *)(seed + 120) )
                    {
                      goto LABEL_144;
                    }
                    v84 = *(ServantEntity_o **)(seed + 192);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v82);
                    v86 = *(_BYTE *)(v83 + 136);
                    v87 = SvtNameText;
                    v88 = (EventMemberMargeUpValInfo_o *)sub_1C372A4(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v88, v81, v84, v87, v86, 0);
                    v91 = (unsigned int *)*p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      break;
                    if ( v88 )
                    {
                      seed = sub_1C37194(v88, *(_QWORD *)(*(_QWORD *)v91 + 64LL));
                      if ( !seed )
                      {
                        v148 = sub_1C372D8();
                        sub_1C37180(v148, 0);
                      }
                    }
                    this = v149;
                    if ( v81 >= v91[6] )
                      goto LABEL_155;
                    v92 = &v91[2 * v81];
                    *((_QWORD *)v92 + 4) = v88;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v92 + 8), (int32_t)v88, v89, v90);
                    v93 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v94 = 0;
                    while ( (__int64)v94 < SLODWORD(v93->max_length) )
                    {
                      if ( !v22 )
                        goto LABEL_154;
                      if ( v94 >= v22[6] )
                        goto LABEL_155;
                      v95 = *(EventDropItemUpValInfo_array **)&v22[2 * v94 + 8];
                      if ( v95 )
                      {
                        v96 = *p_eventMargeUpValInfoList;
                        if ( !*p_eventMargeUpValInfoList )
                          goto LABEL_154;
                        if ( v81 >= LODWORD(v96->max_length) )
                          goto LABEL_155;
                        seed = (__int64)v96->m_Items[v81];
                        if ( !seed )
                          goto LABEL_154;
                        EventMemberMargeUpValInfo__Add((EventMemberMargeUpValInfo_o *)seed, v95, 0);
                        v93 = eventUpValList;
                      }
                      ++v94;
                      if ( !v93 )
                        goto LABEL_154;
                    }
                    if ( !v88 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v88, 0);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v83 + 320) )
                    {
                      v97 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v97,
                        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v98 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v83 + 320);
                      if ( v98 )
                      {
                        v99 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                          v99 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        _9__20_0 = (System_Func_object__bool__o *)v99->static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !v99->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v99);
                            v99 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                          }
                          v101 = (Il2CppObject *)v99->static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v101,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0);
                          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          static_fields->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v103, v104);
                        }
                        v105 = System_Linq_Enumerable__Where_object_(
                                 v98,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v106 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v105,
                                                                                (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v97 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_58337560(
                          v97,
                          v106,
                          (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78049648);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v88, 0);
                      v108 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v109 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                        v108 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      _9__20_1 = (System_Func_object__bool__o *)v108->static_fields->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !v108->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v108);
                          v108 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        v111 = (Il2CppObject *)v108->static_fields->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v111,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0);
                        v112 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v112->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_1C36FFC((CGThumbnailListItem_o *)&v112->__9__20_1, (int32_t)_9__20_1, v113, v114);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v109,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v97 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v97,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v88->fields.servantName;
                      v116 = *(_BYTE *)(v83 + 136);
                      v117 = sub_1C372A4(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v117 + 144) = 1;
                      ListViewItem___ctor_43804668((ListViewItem_o *)v117, v23, 0);
                      *(_QWORD *)(v117 + 120) = servantName;
                      sub_1C36FFC((CGThumbnailListItem_o *)(v117 + 120), (int32_t)servantName, v118, v119);
                      *(_BYTE *)(v117 + 128) = v116;
                      *(_DWORD *)(v117 + 144) = 1;
                      *(float *)(v117 + 100) = x;
                      *(float *)(v117 + 104) = y;
                      *(float *)(v117 + 108) = z;
                      v122 = v149->fields.seed;
                      if ( !v122 )
                        break;
                      seed = (__int64)v149->fields.itemList;
                      if ( !seed )
                        break;
                      v123 = v122->fields.arrangementPich.fields.y;
                      v124 = *(_QWORD *)(seed + 16);
                      v125 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v124 )
                        break;
                      v126 = *(int *)(seed + 24);
                      if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v117,
                          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v127 = v124 + 8 * v126;
                        *(_DWORD *)(seed + 24) = v126 + 1;
                        *(_QWORD *)(v127 + 32) = v117;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v127 + 32), v117, v120, v121);
                      }
                      ++v23;
                      v128 = y + v123;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v151,
                        v97,
                        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v129 = 0;
                      v152 = v151;
LABEL_122:
                      v130 = v23;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v152,
                                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v131 = v152.fields._current;
                        if ( v152.fields._current && HIDWORD(v152.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v83 + 136) )
                            continue;
                          v132 = *(ServantEntity_o **)(v83 + 192);
                          if ( !v132 )
                            sub_1C372B4(0);
                          if ( ServantEntity__checkIsHeroineSvt(v132, 0) )
                          {
                            v133 = *(UserServantEntity_o **)(v83 + 120);
                            if ( v133 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v133, 0) )
                                continue;
                            }
                          }
                        }
                        ++v23;
                        v117 = sub_1C372A4(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v117 + 144) = 1;
                        ListViewItem___ctor_43804668((ListViewItem_o *)v117, v130, 0);
                        *(_QWORD *)(v117 + 136) = v131;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v117 + 136), (int32_t)v131, v134, v135);
                        *(_DWORD *)(v117 + 144) = 1;
                        *(float *)(v117 + 100) = x;
                        *(float *)(v117 + 104) = v128;
                        *(float *)(v117 + 108) = z;
                        v139 = v149->fields.seed;
                        if ( !v139 )
                          sub_1C372B4(v136);
                        v140 = (System_Collections_Generic_List_object__o *)v149->fields.itemList;
                        v128 = v128 + v139->fields.arrangementPich.fields.y;
                        if ( !v140 )
                          sub_1C372B4(0);
                        v141 = v140->fields._items;
                        v142 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                        ++v140->fields._version;
                        if ( !v141 )
                          sub_1C372B4(v140);
                        v143 = v140->fields._size;
                        if ( (unsigned int)v143 >= LODWORD(v141->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v140,
                            (Il2CppObject *)v117,
                            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v144 = &v141->obj.klass + v143;
                          v140->fields._size = v143 + 1;
                          v144[4] = (Il2CppClass *)v117;
                          sub_1C36FFC((CGThumbnailListItem_o *)(v144 + 4), v117, v137, v138);
                        }
                        ++v129;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v152,
                        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      this = v149;
                      if ( v129 )
                      {
                        y = v128 + -8.0;
                      }
                      else
                      {
                        seed = (__int64)v149->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v117,
                                 (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v145 = v149->fields.seed;
                        if ( !v145 )
                          break;
                        y = v128 - v145->fields.arrangementPich.fields.y;
                      }
                    }
                    v21 = v150;
LABEL_144:
                    v80 = eventUpValList;
                    ++v81;
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
    sub_1C372B4(seed);
  }
LABEL_150:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10230/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4);
}


PartyOrganizationEventPointListViewItem_o *PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C3E9D1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4C3E9D1 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  EventPartyMargeUpValInfo_o *v11; // x21
  const MethodInfo *v12; // x4
  EventUpValInfo_array *v13; // x8
  unsigned __int64 v14; // x22
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v16; // x9
  EventUpValInfo_o *v17; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v19; // w8
  void *v20; // x20
  __int64 v21; // x22
  Il2CppObject *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  EventUpValInfo_array *v30; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4C3E9CF & 1) == 0 )
  {
    sub_1C37058(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4C3E9CF = 1;
  }
  v30 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0);
  v11 = (EventPartyMargeUpValInfo_o *)sub_1C372A4(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v11, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v30, 0);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v13 = v30;
    if ( !v30 )
      goto LABEL_30;
    v14 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v13->max_length);
      if ( (__int64)v14 >= (int)max_length_low )
        break;
      if ( v14 >= max_length_low )
        goto LABEL_31;
      v16 = &v13->obj.klass + v14;
      v17 = (EventUpValInfo_o *)v16[4];
      if ( v17 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_30;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v14,
          (EventUpValInfo_o *)v16[4],
          questRestrictionInfo->fields.eventId,
          v12);
        EventUpVal = EventUpValInfo__GetDropItemList(v17, v14, 0);
        if ( !v11 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v11, (EventDropItemUpValInfo_array *)EventUpVal, 0);
        v13 = v30;
      }
      ++v14;
      if ( !v13 )
        goto LABEL_30;
    }
  }
  if ( !v11 )
    goto LABEL_30;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v11, 0);
  if ( EventUpVal )
  {
    v19 = *((_DWORD *)EventUpVal + 6);
    v20 = EventUpVal;
    if ( v19 >= 1 )
    {
      v21 = 0;
      while ( (unsigned int)v21 < v19 )
      {
        v22 = (Il2CppObject *)*((_QWORD *)v20 + v21 + 4);
        if ( !v22 )
          goto LABEL_30;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v20 + v21 + 4),
                               0);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_30;
          items = v6->fields._items;
          v26 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_30;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v22,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v22;
            sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
          }
        }
        v19 = *((_DWORD *)v20 + 6);
        if ( (int)++v21 >= v19 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C372BC(EventUpVal);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_30:
    sub_1C372B4(EventUpVal);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void PartyOrganizationEventPointListViewManager__OnMoveEnd(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C3E9D6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9D6 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v10; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvMaster_o *v12; // x21
  int v13; // w8
  void *v14; // x22
  unsigned int v15; // w25
  __int64 v16; // x8
  System_Int32_array **v17; // x23
  int v18; // w8
  void *v19; // x24
  unsigned int v20; // w27
  __int64 v21; // x28
  __int64 v22; // x8
  __int64 v23; // x8
  int32_t actMaxRarity; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C3E9CE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3E9CE = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_33;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0);
  if ( Entity )
  {
    v10 = Entity;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           (PartyOrganizationUtility_o *)Instance,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v10->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_object )
        goto LABEL_33;
      v12 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   (ServantSkillMaster_o *)MasterData_object,
                   eventUpVal->fields.equipSvtId,
                   0);
      if ( !Instance )
        goto LABEL_33;
      v13 = *((_DWORD *)Instance + 6);
      v14 = Instance;
      if ( v13 >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          if ( v15 >= v13 )
LABEL_34:
            sub_1C372BC(Instance);
          v16 = *((_QWORD *)v14 + (int)v15 + 4);
          if ( !v16 )
            break;
          if ( *(_DWORD *)(v16 + 48) )
          {
            if ( !v12 )
              break;
            Instance = SkillLvMaster__GetEntity(v12, *(_DWORD *)(v16 + 28), 1, 0);
            if ( Instance )
            {
              v17 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0);
              if ( !Instance )
                break;
              v18 = *((_DWORD *)Instance + 6);
              v19 = Instance;
              if ( v18 >= 1 )
              {
                v20 = 0;
                while ( 1 )
                {
                  if ( v20 >= v18 )
                    goto LABEL_34;
                  v21 = *((_QWORD *)v19 + (int)v20 + 4);
                  if ( !v21 )
                    goto LABEL_33;
                  v22 = *(_QWORD *)(v21 + 24);
                  if ( !v22 )
                    goto LABEL_33;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v17[4],
                                       *(_DWORD *)(v22 + 16),
                                       (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v18 = *((_DWORD *)v19 + 6);
                  if ( (int)++v20 >= v18 )
                    goto LABEL_31;
                }
                v23 = *(_QWORD *)(v21 + 24);
                if ( !v23 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v23 + 16), 0);
              }
            }
          }
LABEL_31:
          v13 = *((_DWORD *)v14 + 6);
          if ( (int)++v15 >= v13 )
            return;
        }
LABEL_33:
        sub_1C372B4(Instance);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E9D4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C37058(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E9D4 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      PartyOrganizationEventPointListViewObject__Init_34217800(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v10,
        delay,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewManager__RequestListObject_34216688(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E9D5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C37058(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E9D5 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      PartyOrganizationEventPointListViewObject__Init_34217192(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v8,
        v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_34216156(this, mode, v6);
}


void PartyOrganizationEventPointListViewManager__SetMode_34216156(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *ClippingObjectList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  Il2CppObject *Item; // x0
  int32_t v13; // w29
  PartyOrganizationEventPointListViewObject_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  int32_t v17; // w1

  if ( (byte_4C3E9D3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_1C37058(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E9D3 = 1;
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
        v10 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
        if ( size < 1 )
        {
          this->fields.callbackCount = 1;
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
            0.0,
            0);
          return;
        }
        this->fields.callbackCount = size;
        v11 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v11,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v13 = v10->fields._size;
          v14 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
            0);
          if ( !v14 )
            break;
          if ( v11 >= v13 - 1 )
            v17 = 5;
          else
            v17 = 2;
          PartyOrganizationEventPointListViewObject__Init_34217192(v14, v17, v15, v16);
          if ( ++v11 >= v10->fields._size )
            return;
        }
      }
      sub_1C372B4(ClippingObjectList);
    case 2:
      v7 = 3;
      goto LABEL_17;
    case 1:
      v7 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_34216688(this, v7, v6);
      break;
  }
}


void PartyOrganizationEventPointListViewManager__SetMode_34216636(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_34216156(this, mode, v6);
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
  if ( (byte_4C3E9D2 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1C37058(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_4C3E9D2 = 1;
  }
  if ( !obj
    || (naturalAligment = PartyOrganizationEventPointListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_34216032(
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

  if ( (byte_4C3E9C8 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4C3E9C8 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C37574(v7);
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

  if ( (byte_4C3E9CA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E9CA = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C37574(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3E9CD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9CD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v8);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C372B4(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3E9CC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9CC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C3E9C9 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4C3E9C9 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C37574(v7);
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

  if ( (byte_4C3E9CB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E9CB = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C37574(v7);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A75E9C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A75E44;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *PartyOrganizationEventPointListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = result;
  v20 = kind;
  if ( (byte_4C3E9D7 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_4C3E9D7 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&result,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v18, callback, object);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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

  if ( (byte_4C3E9D8 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_4C3E9D8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_1C36FFC(
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
    sub_1C372B4(this);
  return info->fields.targetType != 7;
}


bool PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_1C372B4(this);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}