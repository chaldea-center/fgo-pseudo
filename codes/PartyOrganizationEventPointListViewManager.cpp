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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  _BOOL8 v19; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  PartyListViewItem_o *v24; // x26
  unsigned int *v25; // x21
  int32_t v26; // w22
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x3
  PartyOrganizationEventPointListViewManager_o *TotalEventPointInfo; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x4
  PartyOrganizationEventPointListViewManager_o *v33; // x24
  int32_t v34; // w23
  System_String_o *v35; // x26
  __int64 v36; // x25
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct ListViewItemSeed_o *v43; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v45; // s10
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x8
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  int m_CancellationTokenSource; // w8
  int32_t v54; // w9
  __int64 v55; // x26
  __int64 v56; // x25
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct ListViewItemSeed_o *v63; // x8
  System_Collections_Generic_List_object__o *v64; // x0
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v71; // x1
  __int64 v72; // x0
  __int64 v73; // x1
  struct ListViewItemSeed_o *v74; // x8
  UnityEngine_GameObject_o *v75; // x0
  EventUpValInfo_array *v76; // x8
  unsigned __int64 v77; // x23
  CGThumbnailListItem_o *v78; // x24
  unsigned __int64 v79; // x9
  Il2CppClass **v80; // x9
  EventUpValInfo_o *v81; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  const MethodInfo *v86; // x3
  CGThumbnailListItem_c *v87; // x25
  struct EventMemberMargeUpValInfo_array *v88; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // x23
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  EventUpValInfo_array *v92; // x8
  unsigned __int64 v93; // x24
  __int64 v94; // x25
  ServantEntity_o *v95; // x27
  System_String_o *SvtNameText; // x0
  char v97; // w28
  System_String_o *v98; // x29
  EventMemberMargeUpValInfo_o *v99; // x26
  const MethodInfo *v100; // x3
  unsigned int *v101; // x20
  unsigned int *v102; // x0
  EventUpValInfo_array *v103; // x8
  unsigned __int64 v104; // x20
  struct EventMemberMargeUpValInfo_array *v105; // x8
  System_Collections_Generic_List_object__o *v106; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x27
  PartyOrganizationEventPointListViewManager___c_c *v108; // x0
  System_Func_object__bool__o *_9__20_0; // x28
  Il2CppObject *v110; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  System_Collections_Generic_IEnumerable_T__o *v115; // x27
  EventMargeItemUpValInfo_array *List; // x0
  PartyOrganizationEventPointListViewManager___c_c *v117; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x27
  System_Func_object__bool__o *_9__20_1; // x29
  Il2CppObject *v120; // x20
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  struct System_String_o *servantName; // x20
  char v125; // w26
  __int64 v126; // x27
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct ListViewItemSeed_o *v131; // x8
  float v132; // s12
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x8
  float v137; // s10
  int v138; // w20
  int32_t v139; // w28
  __int64 v140; // x1
  Il2CppObject *v141; // x29
  ServantEntity_o *v142; // x0
  UserServantEntity_o *v143; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  __int64 v146; // x0
  __int64 v147; // x1
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  struct ListViewItemSeed_o *v150; // x8
  System_Collections_Generic_List_object__o *v151; // x0
  struct System_Object_array *v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  Il2CppClass **v155; // x8
  struct ListViewItemSeed_o *v156; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v158; // x0
  __int64 v159; // x0
  PartyOrganizationEventPointListViewManager_o *v160; // [xsp+8h] [xbp-118h]
  PartyListViewItem_o *v161; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v162; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v163; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v164; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v165; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C22D17 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C2D490(&EventDropItemUpValInfo_____TypeInfo);
    sub_1C2D490(&EventMemberMargeUpValInfo___TypeInfo);
    sub_1C2D490(&EventMemberMargeUpValInfo_TypeInfo);
    sub_1C2D490(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77938608);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__);
    sub_1C2D490(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__);
    sub_1C2D490(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_1C2D490(&StringLiteral_10325/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_1C2D490(&StringLiteral_10224/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_4C22D17 = 1;
  }
  eventUpValList = 0;
  eventId = 0;
  memset(&v165, 0, sizeof(v165));
  memset(&v164, 0, sizeof(v164));
  memset(&v163, 0, sizeof(v163));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_154;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0) )
  {
    seed = (__int64)this->fields.seed;
    v161 = partyItem;
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
LABEL_155:
            sub_1C2D6F4(seed, v7, v8);
          v15 = v9->m_Items[v13];
          if ( v15 )
          {
            seed = (__int64)v15->fields.dropList;
            if ( !seed )
              goto LABEL_154;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v162,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v165 = v162;
            while ( 1 )
            {
              v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v165,
                      (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v16 )
                break;
              current = v165.fields._current;
              if ( !v165.fields._current )
                sub_1C2D6EC(v16, v17);
              if ( !v5 )
                sub_1C2D6EC(v16, v17);
              v19 = System_Collections_Generic_List_int___Contains(
                      v5,
                      (int32_t)v165.fields._current[1].klass,
                      (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v19 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v5->fields._items;
                v22 = Method_System_Collections_Generic_List_int__Add__;
                ++v5->fields._version;
                if ( !items )
                  sub_1C2D6EC(v19, klass_low);
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v5,
                    klass_low,
                    *(const MethodInfo_376CB60 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                }
                else
                {
                  v5->fields._size = size + 1;
                  items->m_Items[size] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v165,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
          v9 = eventUpValList;
          ++v13;
          if ( !eventUpValList )
            goto LABEL_154;
        }
        seed = (__int64)this->fields.lineObj;
        if ( seed )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 0, 0);
          v24 = partyItem;
          if ( eventUpValList )
          {
            seed = sub_1C2D538(EventDropItemUpValInfo_____TypeInfo, LODWORD(eventUpValList->max_length));
            if ( v5 )
            {
              v25 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v162,
                v5,
                (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v26 = 0;
              v164 = v162;
              v160 = this;
              while ( 1 )
              {
                v27 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        (System_Collections_Generic_List_Enumerator_int__o *)&v164,
                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v27 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v27,
                                                                                        (int32_t)v164.fields._current,
                                                                                        v24,
                                                                                        v28);
                v33 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_1C2D6EC(0, v30);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v34 = v26 + 1;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0);
                  v36 = sub_1C2D6DC(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v36 + 144) = 1;
                  ListViewItem___ctor_43566844((ListViewItem_o *)v36, v26, 0);
                  *(_QWORD *)(v36 + 120) = v35;
                  sub_1C2D434((CGThumbnailListItem_o *)(v36 + 120), (int32_t)v35, v37, v38);
                  *(_BYTE *)(v36 + 128) = 0;
                  *(_DWORD *)(v36 + 144) = 0;
                  *(float *)(v36 + 100) = x;
                  *(float *)(v36 + 104) = y;
                  *(float *)(v36 + 108) = z;
                  v43 = this->fields.seed;
                  if ( !v43 )
                    sub_1C2D6EC(v39, v40);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v24 = v161;
                  v45 = y + v43->fields.arrangementPich.fields.y;
                  if ( !itemList )
                    sub_1C2D6EC(0, v40);
                  v46 = itemList->fields._items;
                  v47 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v46 )
                    sub_1C2D6EC(itemList, v40);
                  v48 = itemList->fields._size;
                  if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v36,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v49 = &v46->obj.klass + v48;
                    itemList->fields._size = v48 + 1;
                    v49[4] = (Il2CppClass *)v36;
                    sub_1C2D434((CGThumbnailListItem_o *)(v49 + 4), v36, v41, v42);
                  }
                  eventId = 0;
                  m_CancellationTokenSource = (int)v33->fields.m_CancellationTokenSource;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v26;
                  }
                  else
                  {
                    v54 = 0;
                    do
                    {
                      if ( v54 >= (unsigned int)m_CancellationTokenSource )
                        sub_1C2D6F4(v50, v51, v52);
                      v55 = *((_QWORD *)&v33->fields.dropObjectList + v54);
                      v26 = v34 + 1;
                      v56 = sub_1C2D6DC(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v56 + 144) = 1;
                      ListViewItem___ctor_43566844((ListViewItem_o *)v56, v34, 0);
                      *(_QWORD *)(v56 + 136) = v55;
                      sub_1C2D434((CGThumbnailListItem_o *)(v56 + 136), v55, v57, v58);
                      *(_DWORD *)(v56 + 144) = 0;
                      *(float *)(v56 + 100) = x;
                      *(float *)(v56 + 104) = v45;
                      *(float *)(v56 + 108) = z;
                      v63 = this->fields.seed;
                      if ( !v63 )
                        sub_1C2D6EC(v59, v60);
                      v64 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v24 = v161;
                      v45 = v45 + v63->fields.arrangementPich.fields.y;
                      if ( !v64 )
                        sub_1C2D6EC(0, v60);
                      v65 = v64->fields._items;
                      v66 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v64->fields._version;
                      if ( !v65 )
                        sub_1C2D6EC(v64, v60);
                      v67 = v64->fields._size;
                      if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v64,
                          (Il2CppObject *)v56,
                          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v68 = &v65->obj.klass + v67;
                        v64->fields._size = v67 + 1;
                        v68[4] = (Il2CppClass *)v56;
                        sub_1C2D434((CGThumbnailListItem_o *)(v68 + 4), v56, v61, v62);
                      }
                      ++v34;
                      v54 = eventId + 1;
                      eventId = v54;
                      m_CancellationTokenSource = (int)v33->fields.m_CancellationTokenSource;
                    }
                    while ( v54 < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_1C2D6EC(0, v51);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0);
                  if ( !transform )
                    sub_1C2D6EC(0, v71);
                  v169.fields.x = x;
                  v169.fields.y = v45;
                  v169.fields.z = z;
                  UnityEngine_Transform__set_localPosition(transform, v169, 0);
                  v74 = this->fields.seed;
                  if ( !v74 )
                    sub_1C2D6EC(v72, v73);
                  v75 = this->fields.lineObj;
                  y = v45 + v74->fields.arrangementPich.fields.y;
                  if ( !v75 )
                    sub_1C2D6EC(0, v73);
                  UnityEngine_GameObject__SetActive(v75, 1, 0);
                }
                v76 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_1C2D6EC(TotalEventPointInfo, v30);
                v77 = 0;
                v78 = (CGThumbnailListItem_o *)(v25 + 8);
                while ( 1 )
                {
                  v79 = LODWORD(v76->max_length);
                  if ( (__int64)v77 >= (int)v79 )
                    break;
                  if ( v77 >= v79 )
                    sub_1C2D6F4(TotalEventPointInfo, v30, v31);
                  v80 = &v76->obj.klass + v77;
                  v81 = (EventUpValInfo_o *)v80[4];
                  if ( v81 )
                  {
                    questRestrictionInfo = v24->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_1C2D6EC(TotalEventPointInfo, v30);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v77,
                      (EventUpValInfo_o *)v80[4],
                      questRestrictionInfo->fields.eventId,
                      v32);
                    DropItemList = EventUpValInfo__GetDropItemList(v81, v77, 0);
                    if ( !v25 )
                      sub_1C2D6EC(DropItemList, v84);
                    v87 = (CGThumbnailListItem_c *)DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_1C2D5CC(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v25 + 64LL));
                      if ( !DropItemList )
                      {
                        v158 = sub_1C2D710();
                        sub_1C2D5B8(v158, 0);
                      }
                    }
                    if ( v77 >= v25[6] )
                      sub_1C2D6F4(DropItemList, v84, v85);
                    v78->klass = v87;
                    sub_1C2D434(v78, (int32_t)v87, v85, v86);
                    v76 = eventUpValList;
                  }
                  ++v77;
                  v78 = (CGThumbnailListItem_o *)((char *)v78 + 8);
                  if ( !v76 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v164,
                (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v88 = (struct EventMemberMargeUpValInfo_array *)sub_1C2D538(
                                                                  EventMemberMargeUpValInfo___TypeInfo,
                                                                  LODWORD(eventUpValList->max_length));
                p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
                this->fields.eventMargeUpValInfoList = v88;
                sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, (int32_t)v88, v90, v91);
                v92 = eventUpValList;
                if ( eventUpValList )
                {
                  v93 = 0;
                  do
                  {
                    if ( (__int64)v93 >= SLODWORD(v92->max_length) )
                      goto LABEL_150;
                    seed = (__int64)PartyListViewItem__GetMember(v24, v93, 0);
                    if ( !seed )
                      break;
                    v94 = seed;
                    if ( *(_BYTE *)(seed + 136) )
                    {
                      if ( !*(_QWORD *)(seed + 128) )
                        goto LABEL_144;
                    }
                    else if ( !*(_QWORD *)(seed + 120) )
                    {
                      goto LABEL_144;
                    }
                    v95 = *(ServantEntity_o **)(seed + 192);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v7);
                    v97 = *(_BYTE *)(v94 + 136);
                    v98 = SvtNameText;
                    v99 = (EventMemberMargeUpValInfo_o *)sub_1C2D6DC(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v99, v93, v95, v98, v97, 0);
                    v101 = (unsigned int *)*p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      break;
                    if ( v99 )
                    {
                      seed = sub_1C2D5CC(v99, *(_QWORD *)(*(_QWORD *)v101 + 64LL));
                      if ( !seed )
                      {
                        v159 = sub_1C2D710();
                        sub_1C2D5B8(v159, 0);
                      }
                    }
                    this = v160;
                    if ( v93 >= v101[6] )
                      goto LABEL_155;
                    v102 = &v101[2 * v93];
                    *((_QWORD *)v102 + 4) = v99;
                    sub_1C2D434((CGThumbnailListItem_o *)(v102 + 8), (int32_t)v99, v8, v100);
                    v103 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v104 = 0;
                    while ( (__int64)v104 < SLODWORD(v103->max_length) )
                    {
                      if ( !v25 )
                        goto LABEL_154;
                      if ( v104 >= v25[6] )
                        goto LABEL_155;
                      v7 = *(MethodInfo **)&v25[2 * v104 + 8];
                      if ( v7 )
                      {
                        v105 = *p_eventMargeUpValInfoList;
                        if ( !*p_eventMargeUpValInfoList )
                          goto LABEL_154;
                        if ( v93 >= LODWORD(v105->max_length) )
                          goto LABEL_155;
                        seed = (__int64)v105->m_Items[v93];
                        if ( !seed )
                          goto LABEL_154;
                        EventMemberMargeUpValInfo__Add(
                          (EventMemberMargeUpValInfo_o *)seed,
                          (EventDropItemUpValInfo_array *)v7,
                          0);
                        v103 = eventUpValList;
                      }
                      ++v104;
                      if ( !v103 )
                        goto LABEL_154;
                    }
                    if ( !v99 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v99, 0);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v94 + 320) )
                    {
                      v106 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v106,
                        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v107 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v94 + 320);
                      if ( v107 )
                      {
                        v108 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                          v108 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        _9__20_0 = (System_Func_object__bool__o *)v108->static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !v108->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v108);
                            v108 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                          }
                          v110 = (Il2CppObject *)v108->static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v110,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0);
                          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          static_fields->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v112, v113);
                        }
                        v114 = System_Linq_Enumerable__Where_object_(
                                 v107,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v115 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v114,
                                                                                (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v106 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_58233976(
                          v106,
                          v115,
                          (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77938608);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v99, 0);
                      v117 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v118 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                        v117 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      _9__20_1 = (System_Func_object__bool__o *)v117->static_fields->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !v117->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v117);
                          v117 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        v120 = (Il2CppObject *)v117->static_fields->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v120,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0);
                        v121 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v121->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_1C2D434((CGThumbnailListItem_o *)&v121->__9__20_1, (int32_t)_9__20_1, v122, v123);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v118,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v106 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v106,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v99->fields.servantName;
                      v125 = *(_BYTE *)(v94 + 136);
                      v126 = sub_1C2D6DC(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v126 + 144) = 1;
                      ListViewItem___ctor_43566844((ListViewItem_o *)v126, v26, 0);
                      *(_QWORD *)(v126 + 120) = servantName;
                      sub_1C2D434((CGThumbnailListItem_o *)(v126 + 120), (int32_t)servantName, v127, v128);
                      *(_BYTE *)(v126 + 128) = v125;
                      *(_DWORD *)(v126 + 144) = 1;
                      *(float *)(v126 + 100) = x;
                      *(float *)(v126 + 104) = y;
                      *(float *)(v126 + 108) = z;
                      v131 = v160->fields.seed;
                      if ( !v131 )
                        break;
                      seed = (__int64)v160->fields.itemList;
                      if ( !seed )
                        break;
                      v132 = v131->fields.arrangementPich.fields.y;
                      v133 = *(_QWORD *)(seed + 16);
                      v134 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v133 )
                        break;
                      v135 = *(int *)(seed + 24);
                      if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v126,
                          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v136 = v133 + 8 * v135;
                        *(_DWORD *)(seed + 24) = v135 + 1;
                        *(_QWORD *)(v136 + 32) = v126;
                        sub_1C2D434((CGThumbnailListItem_o *)(v136 + 32), v126, v129, v130);
                      }
                      ++v26;
                      v137 = y + v132;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v162,
                        v106,
                        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v138 = 0;
                      v163 = v162;
LABEL_122:
                      v139 = v26;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v163,
                                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v141 = v163.fields._current;
                        if ( v163.fields._current && HIDWORD(v163.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v94 + 136) )
                            continue;
                          v142 = *(ServantEntity_o **)(v94 + 192);
                          if ( !v142 )
                            sub_1C2D6EC(0, v140);
                          if ( ServantEntity__checkIsHeroineSvt(v142, 0) )
                          {
                            v143 = *(UserServantEntity_o **)(v94 + 120);
                            if ( v143 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v143, 0) )
                                continue;
                            }
                          }
                        }
                        ++v26;
                        v126 = sub_1C2D6DC(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v126 + 144) = 1;
                        ListViewItem___ctor_43566844((ListViewItem_o *)v126, v139, 0);
                        *(_QWORD *)(v126 + 136) = v141;
                        sub_1C2D434((CGThumbnailListItem_o *)(v126 + 136), (int32_t)v141, v144, v145);
                        *(_DWORD *)(v126 + 144) = 1;
                        *(float *)(v126 + 100) = x;
                        *(float *)(v126 + 104) = v137;
                        *(float *)(v126 + 108) = z;
                        v150 = v160->fields.seed;
                        if ( !v150 )
                          sub_1C2D6EC(v146, v147);
                        v151 = (System_Collections_Generic_List_object__o *)v160->fields.itemList;
                        v137 = v137 + v150->fields.arrangementPich.fields.y;
                        if ( !v151 )
                          sub_1C2D6EC(0, v147);
                        v152 = v151->fields._items;
                        v153 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                        ++v151->fields._version;
                        if ( !v152 )
                          sub_1C2D6EC(v151, v147);
                        v154 = v151->fields._size;
                        if ( (unsigned int)v154 >= LODWORD(v152->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v151,
                            (Il2CppObject *)v126,
                            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v155 = &v152->obj.klass + v154;
                          v151->fields._size = v154 + 1;
                          v155[4] = (Il2CppClass *)v126;
                          sub_1C2D434((CGThumbnailListItem_o *)(v155 + 4), v126, v148, v149);
                        }
                        ++v138;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v163,
                        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      this = v160;
                      if ( v138 )
                      {
                        y = v137 + -8.0;
                      }
                      else
                      {
                        seed = (__int64)v160->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v126,
                                 (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v156 = v160->fields.seed;
                        if ( !v156 )
                          break;
                        y = v137 - v156->fields.arrangementPich.fields.y;
                      }
                    }
                    v24 = v161;
LABEL_144:
                    v92 = eventUpValList;
                    ++v93;
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
    sub_1C2D6EC(seed, v7);
  }
LABEL_150:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10224/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4);
}


PartyOrganizationEventPointListViewItem_o *PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C22D18 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4C22D18 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x4
  EventUpValInfo_array *v15; // x8
  unsigned __int64 v16; // x22
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v18; // x9
  EventUpValInfo_o *v19; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v21; // w8
  void *v22; // x20
  __int64 v23; // x22
  Il2CppObject *v24; // x21
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  EventUpValInfo_array *v31; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4C22D16 & 1) == 0 )
  {
    sub_1C2D490(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4C22D16 = 1;
  }
  v31 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0);
  v12 = (EventPartyMargeUpValInfo_o *)sub_1C2D6DC(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v12, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v31, 0);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v15 = v31;
    if ( !v31 )
      goto LABEL_30;
    v16 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v15->max_length);
      if ( (__int64)v16 >= (int)max_length_low )
        break;
      if ( v16 >= max_length_low )
        goto LABEL_31;
      v18 = &v15->obj.klass + v16;
      v19 = (EventUpValInfo_o *)v18[4];
      if ( v19 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_30;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v16,
          (EventUpValInfo_o *)v18[4],
          questRestrictionInfo->fields.eventId,
          v14);
        EventUpVal = EventUpValInfo__GetDropItemList(v19, v16, 0);
        if ( !v12 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v12, (EventDropItemUpValInfo_array *)EventUpVal, 0);
        v15 = v31;
      }
      ++v16;
      if ( !v15 )
        goto LABEL_30;
    }
  }
  if ( !v12 )
    goto LABEL_30;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v12, 0);
  if ( EventUpVal )
  {
    v21 = *((_DWORD *)EventUpVal + 6);
    v22 = EventUpVal;
    if ( v21 >= 1 )
    {
      v23 = 0;
      while ( (unsigned int)v23 < v21 )
      {
        v24 = (Il2CppObject *)*((_QWORD *)v22 + v23 + 4);
        if ( !v24 )
          goto LABEL_30;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v22 + v23 + 4),
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
              v24,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v24;
            sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v24, v13, v25);
          }
        }
        v21 = *((_DWORD *)v22 + 6);
        if ( (int)++v23 >= v21 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C2D6F4(EventUpVal, v8, v13);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_30:
    sub_1C2D6EC(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_4C22D1D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22D1D = 1;
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
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v14; // x2
  int v15; // w8
  void *v16; // x22
  unsigned int v17; // w25
  __int64 v18; // x8
  System_Int32_array **v19; // x23
  int v20; // w8
  void *v21; // x24
  unsigned int v22; // w27
  __int64 v23; // x28
  __int64 v24; // x8
  __int64 v25; // x8
  int32_t actMaxRarity; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C22D15 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22D15 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_object )
        goto LABEL_33;
      v13 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   (ServantSkillMaster_o *)MasterData_object,
                   eventUpVal->fields.equipSvtId,
                   0);
      if ( !Instance )
        goto LABEL_33;
      v15 = *((_DWORD *)Instance + 6);
      v16 = Instance;
      if ( v15 >= 1 )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( v17 >= v15 )
LABEL_34:
            sub_1C2D6F4(Instance, v9, v14);
          v18 = *((_QWORD *)v16 + (int)v17 + 4);
          if ( !v18 )
            break;
          if ( *(_DWORD *)(v18 + 48) )
          {
            if ( !v13 )
              break;
            Instance = SkillLvMaster__GetEntity(v13, *(_DWORD *)(v18 + 28), 1, 0);
            if ( Instance )
            {
              v19 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0);
              if ( !Instance )
                break;
              v20 = *((_DWORD *)Instance + 6);
              v21 = Instance;
              if ( v20 >= 1 )
              {
                v22 = 0;
                while ( 1 )
                {
                  if ( v22 >= v20 )
                    goto LABEL_34;
                  v23 = *((_QWORD *)v21 + (int)v22 + 4);
                  if ( !v23 )
                    goto LABEL_33;
                  v24 = *(_QWORD *)(v23 + 24);
                  if ( !v24 )
                    goto LABEL_33;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v19[4],
                                       *(_DWORD *)(v24 + 16),
                                       (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v20 = *((_DWORD *)v21 + 6);
                  if ( (int)++v22 >= v20 )
                    goto LABEL_31;
                }
                v25 = *(_QWORD *)(v23 + 24);
                if ( !v25 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v25 + 16), 0);
              }
            }
          }
LABEL_31:
          v15 = *((_DWORD *)v16 + 6);
          if ( (int)++v17 >= v15 )
            return;
        }
LABEL_33:
        sub_1C2D6EC(Instance, v9);
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

  if ( (byte_4C22D1B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C2D490(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C22D1B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      PartyOrganizationEventPointListViewObject__Init_34008192(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewManager__RequestListObject_34007080(
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

  if ( (byte_4C22D1C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C2D490(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C22D1C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      PartyOrganizationEventPointListViewObject__Init_34007584(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_34006548(this, mode, v6);
}


void PartyOrganizationEventPointListViewManager__SetMode_34006548(
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

  if ( (byte_4C22D1A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_1C2D490(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C22D1A = 1;
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
            (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
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
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v14 = v11->fields._size;
          v15 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
          PartyOrganizationEventPointListViewObject__Init_34007584(v15, v18, v16, v17);
          if ( ++v12 >= v11->fields._size )
            return;
        }
      }
      sub_1C2D6EC(ClippingObjectList, v9);
    case 2:
      v7 = 3;
      goto LABEL_17;
    case 1:
      v7 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_34007080(this, v7, v6);
      break;
  }
}


void PartyOrganizationEventPointListViewManager__SetMode_34007028(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_34006548(this, mode, v6);
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
  if ( (byte_4C22D19 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1C2D490(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_4C22D19 = 1;
  }
  if ( !obj
    || (naturalAligment = PartyOrganizationEventPointListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_34006424(
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

  if ( (byte_4C22D0F & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4C22D0F = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C22D11 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C22D11 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C22D14 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22D14 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C22D13 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22D13 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C22D10 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4C22D10 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C22D12 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C22D12 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C2D9AC(v7);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6C444;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6C3EC;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4C22D1E & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_4C22D1E = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  if ( (byte_4C22D1F & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_4C22D1F = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_1C2D434(
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
    sub_1C2D6EC(this, 0);
  return info->fields.targetType != 7;
}


bool PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_1C2D6EC(this, 0);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}