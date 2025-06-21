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
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  System_Collections_Generic_List_int__o *v39; // x22
  __int64 seed; // x0
  MethodInfo *v41; // x1
  __int64 v42; // x2
  float v43; // s0
  float v44; // s1
  float v45; // s2
  EventUpValInfo_array *v46; // x8
  float v47; // s8
  float v48; // s10
  float v49; // s9
  unsigned __int64 v50; // x20
  unsigned __int64 max_length; // x9
  EventUpValInfo_o *v52; // x8
  _BOOL8 v53; // x0
  __int64 v54; // x1
  Il2CppObject *current; // x21
  _BOOL8 v56; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  PartyListViewItem_o *v61; // x26
  unsigned int *v62; // x21
  int32_t v63; // w22
  _BOOL8 v64; // x0
  const MethodInfo *v65; // x3
  PartyOrganizationEventPointListViewManager_o *TotalEventPointInfo; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  const MethodInfo *v69; // x4
  PartyOrganizationEventPointListViewManager_o *v70; // x24
  int32_t v71; // w23
  System_String_o *v72; // x26
  __int64 v73; // x25
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x0
  __int64 v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct ListViewItemSeed_o *v80; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v82; // s10
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x8
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  int m_CancellationTokenSource; // w8
  int32_t v91; // w9
  __int64 v92; // x26
  __int64 v93; // x25
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  __int64 v96; // x0
  __int64 v97; // x1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  struct ListViewItemSeed_o *v100; // x8
  System_Collections_Generic_List_object__o *v101; // x0
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v108; // x1
  __int64 v109; // x0
  __int64 v110; // x1
  struct ListViewItemSeed_o *v111; // x8
  UnityEngine_GameObject_o *v112; // x0
  EventUpValInfo_array *v113; // x8
  unsigned __int64 v114; // x23
  CGThumbnailListItem_o *v115; // x24
  unsigned __int64 v116; // x9
  Il2CppClass **v117; // x9
  EventUpValInfo_o *v118; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  const MethodInfo *v123; // x3
  CGThumbnailListItem_c *v124; // x25
  struct EventMemberMargeUpValInfo_array *v125; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // x23
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  EventUpValInfo_array *v129; // x8
  unsigned __int64 v130; // x24
  __int64 v131; // x25
  ServantEntity_o *v132; // x27
  System_String_o *SvtNameText; // x0
  char v134; // w28
  System_String_o *v135; // x29
  EventMemberMargeUpValInfo_o *v136; // x26
  const MethodInfo *v137; // x3
  unsigned int *v138; // x20
  unsigned int *v139; // x0
  EventUpValInfo_array *v140; // x8
  unsigned __int64 v141; // x20
  struct EventMemberMargeUpValInfo_array *v142; // x8
  System_Collections_Generic_List_object__o *v143; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v144; // x27
  PartyOrganizationEventPointListViewManager___c_c *v145; // x0
  System_Func_object__bool__o *_9__20_0; // x28
  Il2CppObject *v147; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x0
  System_Collections_Generic_IEnumerable_T__o *v152; // x27
  EventMargeItemUpValInfo_array *List; // x0
  PartyOrganizationEventPointListViewManager___c_c *v154; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x27
  System_Func_object__bool__o *_9__20_1; // x29
  Il2CppObject *v157; // x20
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v158; // x0
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct System_String_o *servantName; // x20
  char v162; // w26
  __int64 v163; // x27
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  struct ListViewItemSeed_o *v168; // x8
  float y; // s12
  __int64 v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  __int64 v173; // x8
  float v174; // s10
  int v175; // w20
  int32_t v176; // w28
  __int64 v177; // x1
  Il2CppObject *v178; // x29
  ServantEntity_o *v179; // x0
  UserServantEntity_o *v180; // x0
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  __int64 v183; // x0
  __int64 v184; // x1
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  struct ListViewItemSeed_o *v187; // x8
  System_Collections_Generic_List_object__o *v188; // x0
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  Il2CppClass **v192; // x8
  struct ListViewItemSeed_o *v193; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v195; // x0
  __int64 v196; // x0
  PartyOrganizationEventPointListViewManager_o *v197; // [xsp+8h] [xbp-118h]
  PartyListViewItem_o *v198; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v199; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v200; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v201; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v202; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v205; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17FDB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___, partyItem);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v14);
    sub_1BCAFF8(&EventDropItemUpValInfo_____TypeInfo, v15);
    sub_1BCAFF8(&EventMemberMargeUpValInfo___TypeInfo, v16);
    sub_1BCAFF8(&EventMemberMargeUpValInfo_TypeInfo, v17);
    sub_1BCAFF8(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76860160, v29);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_1BCAFF8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v31);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v32);
    sub_1BCAFF8(&PartyOrganizationEventPointListViewItem_TypeInfo, v33);
    sub_1BCAFF8(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__, v34);
    sub_1BCAFF8(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__, v35);
    sub_1BCAFF8(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v36);
    sub_1BCAFF8(&StringLiteral_10253/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, v37);
    sub_1BCAFF8(&StringLiteral_10153/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, v38);
    byte_4B17FDB = 1;
  }
  eventUpValList = 0LL;
  eventId = 0;
  memset(&v202, 0, sizeof(v202));
  memset(&v201, 0, sizeof(v201));
  memset(&v200, 0, sizeof(v200));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v39 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_154;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0LL) )
  {
    seed = (__int64)this->fields.seed;
    v198 = partyItem;
    if ( seed )
    {
      *(UnityEngine_Vector3_o *)&v43 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
      v46 = eventUpValList;
      if ( eventUpValList )
      {
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
LABEL_155:
            sub_1BCB25C(seed, v41, v42);
          v52 = v46->m_Items[v50];
          if ( v52 )
          {
            seed = (__int64)v52->fields.dropList;
            if ( !seed )
              goto LABEL_154;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v199,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v202 = v199;
            while ( 1 )
            {
              v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v202,
                      (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v53 )
                break;
              current = v202.fields._current;
              if ( !v202.fields._current )
                sub_1BCB254(v53, v54);
              if ( !v39 )
                sub_1BCB254(v53, v54);
              v56 = System_Collections_Generic_List_int___Contains(
                      v39,
                      (int32_t)v202.fields._current[1].klass,
                      (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v56 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v39->fields._items;
                v59 = Method_System_Collections_Generic_List_int__Add__;
                ++v39->fields._version;
                if ( !items )
                  sub_1BCB254(v56, klass_low);
                size = v39->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v39,
                    klass_low,
                    *(const MethodInfo_369CBAC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
                }
                else
                {
                  v39->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v202,
              (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
          v46 = eventUpValList;
          ++v50;
          if ( !eventUpValList )
            goto LABEL_154;
        }
        seed = (__int64)this->fields.lineObj;
        if ( seed )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 0, 0LL);
          v61 = partyItem;
          if ( eventUpValList )
          {
            seed = sub_1BCB0A0(EventDropItemUpValInfo_____TypeInfo, eventUpValList->max_length);
            if ( v39 )
            {
              v62 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v199,
                v39,
                (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v63 = 0;
              v201 = v199;
              v197 = this;
              while ( 1 )
              {
                v64 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        (System_Collections_Generic_List_Enumerator_int__o *)&v201,
                        (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v64 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v64,
                                                                                        (int32_t)v201.fields._current,
                                                                                        v61,
                                                                                        v65);
                v70 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_1BCB254(0LL, v67);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v71 = v63 + 1;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_10253/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
                  v73 = sub_1BCB244(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v73 + 136) = 1;
                  ListViewItem___ctor_42932312((ListViewItem_o *)v73, v63, 0LL);
                  *(_QWORD *)(v73 + 112) = v72;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v73 + 112), (int32_t)v72, v74, v75);
                  *(_BYTE *)(v73 + 120) = 0;
                  *(_DWORD *)(v73 + 136) = 0;
                  *(float *)(v73 + 92) = v47;
                  *(float *)(v73 + 96) = v48;
                  *(float *)(v73 + 100) = v49;
                  v80 = this->fields.seed;
                  if ( !v80 )
                    sub_1BCB254(v76, v77);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v61 = v198;
                  v82 = v48 + v80->fields.arrangementPich.fields.y;
                  if ( !itemList )
                    sub_1BCB254(0LL, v77);
                  v83 = itemList->fields._items;
                  v84 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v83 )
                    sub_1BCB254(itemList, v77);
                  v85 = itemList->fields._size;
                  if ( (unsigned int)v85 >= v83->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v73,
                      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v86 = &v83->obj.klass + v85;
                    itemList->fields._size = v85 + 1;
                    v86[4] = (Il2CppClass *)v73;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v86 + 4), v73, v78, v79);
                  }
                  eventId = 0;
                  m_CancellationTokenSource = (int)v70->fields.m_CancellationTokenSource;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v63;
                  }
                  else
                  {
                    v91 = 0;
                    do
                    {
                      if ( v91 >= (unsigned int)m_CancellationTokenSource )
                        sub_1BCB25C(v87, v88, v89);
                      v92 = *((_QWORD *)&v70->fields.dropObjectList + v91);
                      v63 = v71 + 1;
                      v93 = sub_1BCB244(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v93 + 136) = 1;
                      ListViewItem___ctor_42932312((ListViewItem_o *)v93, v71, 0LL);
                      *(_QWORD *)(v93 + 128) = v92;
                      sub_1BCAF9C((CGThumbnailListItem_o *)(v93 + 128), v92, v94, v95);
                      *(_DWORD *)(v93 + 136) = 0;
                      *(float *)(v93 + 92) = v47;
                      *(float *)(v93 + 96) = v82;
                      *(float *)(v93 + 100) = v49;
                      v100 = this->fields.seed;
                      if ( !v100 )
                        sub_1BCB254(v96, v97);
                      v101 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v61 = v198;
                      v82 = v82 + v100->fields.arrangementPich.fields.y;
                      if ( !v101 )
                        sub_1BCB254(0LL, v97);
                      v102 = v101->fields._items;
                      v103 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v101->fields._version;
                      if ( !v102 )
                        sub_1BCB254(v101, v97);
                      v104 = v101->fields._size;
                      if ( (unsigned int)v104 >= v102->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v101,
                          (Il2CppObject *)v93,
                          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v105 = &v102->obj.klass + v104;
                        v101->fields._size = v104 + 1;
                        v105[4] = (Il2CppClass *)v93;
                        sub_1BCAF9C((CGThumbnailListItem_o *)(v105 + 4), v93, v98, v99);
                      }
                      ++v71;
                      v91 = eventId + 1;
                      eventId = v91;
                      m_CancellationTokenSource = (int)v70->fields.m_CancellationTokenSource;
                    }
                    while ( v91 < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_1BCB254(0LL, v88);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0LL);
                  if ( !transform )
                    sub_1BCB254(0LL, v108);
                  v205.fields.x = v47;
                  v205.fields.y = v82;
                  v205.fields.z = v49;
                  UnityEngine_Transform__set_localPosition(transform, v205, 0LL);
                  v111 = this->fields.seed;
                  if ( !v111 )
                    sub_1BCB254(v109, v110);
                  v112 = this->fields.lineObj;
                  v48 = v82 + v111->fields.arrangementPich.fields.y;
                  if ( !v112 )
                    sub_1BCB254(0LL, v110);
                  UnityEngine_GameObject__SetActive(v112, 1, 0LL);
                }
                v113 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_1BCB254(TotalEventPointInfo, v67);
                v114 = 0LL;
                v115 = (CGThumbnailListItem_o *)(v62 + 8);
                while ( 1 )
                {
                  v116 = v113->max_length;
                  if ( (__int64)v114 >= (int)v116 )
                    break;
                  if ( v114 >= v116 )
                    sub_1BCB25C(TotalEventPointInfo, v67, v68);
                  v117 = &v113->obj.klass + v114;
                  v118 = (EventUpValInfo_o *)v117[4];
                  if ( v118 )
                  {
                    questRestrictionInfo = v61->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_1BCB254(TotalEventPointInfo, v67);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v114,
                      (EventUpValInfo_o *)v117[4],
                      questRestrictionInfo->fields.eventId,
                      v69);
                    DropItemList = EventUpValInfo__GetDropItemList(v118, v114, 0LL);
                    if ( !v62 )
                      sub_1BCB254(DropItemList, v121);
                    v124 = (CGThumbnailListItem_c *)DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_1BCB134(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v62 + 64LL));
                      if ( !DropItemList )
                      {
                        v195 = sub_1BCB278();
                        sub_1BCB120(v195, 0LL);
                      }
                    }
                    if ( v114 >= v62[6] )
                      sub_1BCB25C(DropItemList, v121, v122);
                    v115->klass = v124;
                    sub_1BCAF9C(v115, (int32_t)v124, v122, v123);
                    v113 = eventUpValList;
                  }
                  ++v114;
                  v115 = (CGThumbnailListItem_o *)((char *)v115 + 8);
                  if ( !v113 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v201,
                (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v125 = (struct EventMemberMargeUpValInfo_array *)sub_1BCB0A0(
                                                                   EventMemberMargeUpValInfo___TypeInfo,
                                                                   eventUpValList->max_length);
                p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
                this->fields.eventMargeUpValInfoList = v125;
                sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, (int32_t)v125, v127, v128);
                v129 = eventUpValList;
                if ( eventUpValList )
                {
                  v130 = 0LL;
                  do
                  {
                    if ( (__int64)v130 >= (int)v129->max_length )
                      goto LABEL_150;
                    seed = (__int64)PartyListViewItem__GetMember(v61, v130, 0LL);
                    if ( !seed )
                      break;
                    v131 = seed;
                    if ( *(_BYTE *)(seed + 128) )
                    {
                      if ( !*(_QWORD *)(seed + 120) )
                        goto LABEL_144;
                    }
                    else if ( !*(_QWORD *)(seed + 112) )
                    {
                      goto LABEL_144;
                    }
                    v132 = *(ServantEntity_o **)(seed + 184);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v41);
                    v134 = *(_BYTE *)(v131 + 128);
                    v135 = SvtNameText;
                    v136 = (EventMemberMargeUpValInfo_o *)sub_1BCB244(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v136, v130, v132, v135, v134, 0LL);
                    v138 = (unsigned int *)*p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      break;
                    if ( v136 )
                    {
                      seed = sub_1BCB134(v136, *(_QWORD *)(*(_QWORD *)v138 + 64LL));
                      if ( !seed )
                      {
                        v196 = sub_1BCB278();
                        sub_1BCB120(v196, 0LL);
                      }
                    }
                    this = v197;
                    if ( v130 >= v138[6] )
                      goto LABEL_155;
                    v139 = &v138[2 * v130];
                    *((_QWORD *)v139 + 4) = v136;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v139 + 8), (int32_t)v136, v42, v137);
                    v140 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v141 = 0LL;
                    while ( (__int64)v141 < (int)v140->max_length )
                    {
                      if ( !v62 )
                        goto LABEL_154;
                      if ( v141 >= v62[6] )
                        goto LABEL_155;
                      v41 = *(MethodInfo **)&v62[2 * v141 + 8];
                      if ( v41 )
                      {
                        v142 = *p_eventMargeUpValInfoList;
                        if ( !*p_eventMargeUpValInfoList )
                          goto LABEL_154;
                        if ( v130 >= v142->max_length )
                          goto LABEL_155;
                        seed = (__int64)v142->m_Items[v130];
                        if ( !seed )
                          goto LABEL_154;
                        EventMemberMargeUpValInfo__Add(
                          (EventMemberMargeUpValInfo_o *)seed,
                          (EventDropItemUpValInfo_array *)v41,
                          0LL);
                        v140 = eventUpValList;
                      }
                      ++v141;
                      if ( !v140 )
                        goto LABEL_154;
                    }
                    if ( !v136 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v136, 0LL);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v131 + 312) )
                    {
                      v143 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v143,
                        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v144 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v131 + 312);
                      if ( v144 )
                      {
                        v145 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                          v145 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        _9__20_0 = (System_Func_object__bool__o *)v145->static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !v145->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v145);
                            v145 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                          }
                          v147 = (Il2CppObject *)v145->static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v147,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0LL);
                          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          static_fields->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v149, v150);
                        }
                        v151 = System_Linq_Enumerable__Where_object_(
                                 v144,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v152 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v151,
                                                                                (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v143 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_57382084(
                          v143,
                          v152,
                          (const MethodInfo_36B94C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76860160);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v136, 0LL);
                      v154 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v155 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                        v154 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      _9__20_1 = (System_Func_object__bool__o *)v154->static_fields->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !v154->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v154);
                          v154 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        v157 = (Il2CppObject *)v154->static_fields->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v157,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0LL);
                        v158 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v158->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_1BCAF9C((CGThumbnailListItem_o *)&v158->__9__20_1, (int32_t)_9__20_1, v159, v160);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v155,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v143 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v143,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v136->fields.servantName;
                      v162 = *(_BYTE *)(v131 + 128);
                      v163 = sub_1BCB244(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v163 + 136) = 1;
                      ListViewItem___ctor_42932312((ListViewItem_o *)v163, v63, 0LL);
                      *(_QWORD *)(v163 + 112) = servantName;
                      sub_1BCAF9C((CGThumbnailListItem_o *)(v163 + 112), (int32_t)servantName, v164, v165);
                      *(_BYTE *)(v163 + 120) = v162;
                      *(_DWORD *)(v163 + 136) = 1;
                      *(float *)(v163 + 92) = v47;
                      *(float *)(v163 + 96) = v48;
                      *(float *)(v163 + 100) = v49;
                      v168 = v197->fields.seed;
                      if ( !v168 )
                        break;
                      seed = (__int64)v197->fields.itemList;
                      if ( !seed )
                        break;
                      y = v168->fields.arrangementPich.fields.y;
                      v170 = *(_QWORD *)(seed + 16);
                      v171 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v170 )
                        break;
                      v172 = *(int *)(seed + 24);
                      if ( (unsigned int)v172 >= *(_DWORD *)(v170 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v163,
                          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v173 = v170 + 8 * v172;
                        *(_DWORD *)(seed + 24) = v172 + 1;
                        *(_QWORD *)(v173 + 32) = v163;
                        sub_1BCAF9C((CGThumbnailListItem_o *)(v173 + 32), v163, v166, v167);
                      }
                      ++v63;
                      v174 = v48 + y;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v199,
                        v143,
                        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v175 = 0;
                      v200 = v199;
LABEL_122:
                      v176 = v63;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v200,
                                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v178 = v200.fields._current;
                        if ( v200.fields._current && HIDWORD(v200.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v131 + 128) )
                            continue;
                          v179 = *(ServantEntity_o **)(v131 + 184);
                          if ( !v179 )
                            sub_1BCB254(0LL, v177);
                          if ( ServantEntity__checkIsHeroineSvt(v179, 0LL) )
                          {
                            v180 = *(UserServantEntity_o **)(v131 + 112);
                            if ( v180 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v180, 0LL) )
                                continue;
                            }
                          }
                        }
                        ++v63;
                        v163 = sub_1BCB244(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v163 + 136) = 1;
                        ListViewItem___ctor_42932312((ListViewItem_o *)v163, v176, 0LL);
                        *(_QWORD *)(v163 + 128) = v178;
                        sub_1BCAF9C((CGThumbnailListItem_o *)(v163 + 128), (int32_t)v178, v181, v182);
                        *(_DWORD *)(v163 + 136) = 1;
                        *(float *)(v163 + 92) = v47;
                        *(float *)(v163 + 96) = v174;
                        *(float *)(v163 + 100) = v49;
                        v187 = v197->fields.seed;
                        if ( !v187 )
                          sub_1BCB254(v183, v184);
                        v188 = (System_Collections_Generic_List_object__o *)v197->fields.itemList;
                        v174 = v174 + v187->fields.arrangementPich.fields.y;
                        if ( !v188 )
                          sub_1BCB254(0LL, v184);
                        v189 = v188->fields._items;
                        v190 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                        ++v188->fields._version;
                        if ( !v189 )
                          sub_1BCB254(v188, v184);
                        v191 = v188->fields._size;
                        if ( (unsigned int)v191 >= v189->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v188,
                            (Il2CppObject *)v163,
                            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v192 = &v189->obj.klass + v191;
                          v188->fields._size = v191 + 1;
                          v192[4] = (Il2CppClass *)v163;
                          sub_1BCAF9C((CGThumbnailListItem_o *)(v192 + 4), v163, v185, v186);
                        }
                        ++v175;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v200,
                        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      this = v197;
                      if ( v175 )
                      {
                        v48 = v174 + -8.0;
                      }
                      else
                      {
                        seed = (__int64)v197->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v163,
                                 (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v193 = v197->fields.seed;
                        if ( !v193 )
                          break;
                        v48 = v174 - v193->fields.arrangementPich.fields.y;
                      }
                    }
                    v61 = v198;
LABEL_144:
                    v129 = eventUpValList;
                    ++v130;
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
    sub_1BCB254(seed, v41);
  }
LABEL_150:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10153/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_154;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
  ListViewManager__DispItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.eventMargeUpValInfoList = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationEventPointListViewItem_o *__fastcall PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B17FDC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BCAFF8(&PartyOrganizationEventPointListViewItem_TypeInfo, v5);
    byte_4B17FDC = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PartyOrganizationEventPointListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
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
  System_Collections_Generic_List_object__o *v10; // x19
  void *EventUpVal; // x0
  __int64 v12; // x1
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  EventPartyMargeUpValInfo_o *v16; // x21
  __int64 v17; // x2
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
  Il2CppObject *v28; // x21
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  EventUpValInfo_array *v35; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4B17FDA & 1) == 0 )
  {
    sub_1BCAFF8(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v9);
    byte_4B17FDA = 1;
  }
  v35 = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v16 = (EventPartyMargeUpValInfo_o *)sub_1BCB244(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v16, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v35, 0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v19 = v35;
    if ( !v35 )
      goto LABEL_30;
    v20 = 0LL;
    while ( 1 )
    {
      max_length = v19->max_length;
      if ( (__int64)v20 >= (int)max_length )
        break;
      if ( v20 >= max_length )
        goto LABEL_31;
      v22 = &v19->obj.klass + v20;
      v23 = (EventUpValInfo_o *)v22[4];
      if ( v23 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_30;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v20,
          (EventUpValInfo_o *)v22[4],
          questRestrictionInfo->fields.eventId,
          v18);
        EventUpVal = EventUpValInfo__GetDropItemList(v23, v20, 0LL);
        if ( !v16 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v16, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v19 = v35;
      }
      ++v20;
      if ( !v19 )
        goto LABEL_30;
    }
  }
  if ( !v16 )
    goto LABEL_30;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v16, 0LL);
  if ( EventUpVal )
  {
    v25 = *((_DWORD *)EventUpVal + 6);
    v26 = EventUpVal;
    if ( v25 >= 1 )
    {
      v27 = 0LL;
      while ( (unsigned int)v27 < v25 )
      {
        v28 = (Il2CppObject *)*((_QWORD *)v26 + v27 + 4);
        if ( !v28 )
          goto LABEL_30;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v26 + v27 + 4),
                               0LL);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v10 )
            goto LABEL_30;
          items = v10->fields._items;
          v31 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_30;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v28,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v28;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v28, v17, v29);
          }
        }
        v25 = *((_DWORD *)v26 + 6);
        if ( (int)++v27 >= v25 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1BCB25C(EventUpVal, v12, v17);
    }
  }
LABEL_28:
  if ( !v10 )
LABEL_30:
    sub_1BCB254(EventUpVal, v12);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v10,
                                            (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B17FE1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B17FE1 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BCB254(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  void *Instance; // x0
  __int64 v14; // x1
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v16; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvMaster_o *v18; // x21
  __int64 v19; // x2
  int v20; // w8
  void *v21; // x22
  unsigned int v22; // w25
  __int64 v23; // x8
  System_Int32_array **v24; // x23
  int v25; // w8
  void *v26; // x24
  unsigned int v27; // w27
  __int64 v28; // x28
  __int64 v29; // x8
  __int64 v30; // x8
  int32_t actMaxRarity; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B17FD9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4B17FD9 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_33;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0LL);
  if ( Entity )
  {
    v16 = Entity;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_object )
        goto LABEL_33;
      v18 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   (ServantSkillMaster_o *)MasterData_object,
                   eventUpVal->fields.equipSvtId,
                   0LL);
      if ( !Instance )
        goto LABEL_33;
      v20 = *((_DWORD *)Instance + 6);
      v21 = Instance;
      if ( v20 >= 1 )
      {
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= v20 )
LABEL_34:
            sub_1BCB25C(Instance, v14, v19);
          v23 = *((_QWORD *)v21 + (int)v22 + 4);
          if ( !v23 )
            break;
          if ( *(_DWORD *)(v23 + 48) )
          {
            if ( !v18 )
              break;
            Instance = SkillLvMaster__GetEntity(v18, *(_DWORD *)(v23 + 28), 1, 0LL);
            if ( Instance )
            {
              v24 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0LL);
              if ( !Instance )
                break;
              v25 = *((_DWORD *)Instance + 6);
              v26 = Instance;
              if ( v25 >= 1 )
              {
                v27 = 0;
                while ( 1 )
                {
                  if ( v27 >= v25 )
                    goto LABEL_34;
                  v28 = *((_QWORD *)v26 + (int)v27 + 4);
                  if ( !v28 )
                    goto LABEL_33;
                  v29 = *(_QWORD *)(v28 + 24);
                  if ( !v29 )
                    goto LABEL_33;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v24[4],
                                       *(_DWORD *)(v29 + 16),
                                       (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v25 = *((_DWORD *)v26 + 6);
                  if ( (int)++v27 >= v25 )
                    goto LABEL_31;
                }
                v30 = *(_QWORD *)(v28 + 24);
                if ( !v30 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v30 + 16), 0LL);
              }
            }
          }
LABEL_31:
          v20 = *((_DWORD *)v21 + 6);
          if ( (int)++v22 >= v20 )
            return;
        }
LABEL_33:
        sub_1BCB254(Instance, v14);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B17FDF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v11);
    sub_1BCAFF8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v13);
    byte_4B17FDF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BCB254(v19, v20);
      PartyOrganizationEventPointListViewObject__Init_33481896(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_33480784(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B17FE0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v9);
    sub_1BCAFF8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v10);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v11);
    byte_4B17FE0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BCB254(v17, v18);
      PartyOrganizationEventPointListViewObject__Init_33481288(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_33480252(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_33480252(
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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
  Il2CppObject *Item; // x0
  int32_t v18; // w29
  PartyOrganizationEventPointListViewObject_o *v19; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  int32_t v22; // w1

  if ( (byte_4B17FDE & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v6);
    sub_1BCAFF8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v7);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v8);
    byte_4B17FDE = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  switch ( mode )
  {
    case 3:
      ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v9);
      if ( ClippingObjectList )
      {
        size = ClippingObjectList->fields._size;
        v15 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
        if ( size < 1 )
        {
          this->fields.callbackCount = 1;
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
            0.0,
            0LL);
          return;
        }
        this->fields.callbackCount = size;
        v16 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v15,
                   v16,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v18 = v15->fields._size;
          v19 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v20 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(
            v20,
            (Il2CppObject *)this,
            Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
            0LL);
          if ( !v19 )
            break;
          if ( v16 >= v18 - 1 )
            v22 = 5;
          else
            v22 = 2;
          PartyOrganizationEventPointListViewObject__Init_33481288(v19, v22, v20, v21);
          if ( ++v16 >= v15->fields._size )
            return;
        }
      }
      sub_1BCB254(ClippingObjectList, v13);
    case 2:
      v11 = 3;
      goto LABEL_17;
    case 1:
      v11 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_33480784(this, v11, v10);
      break;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_33480732(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_33480252(this, mode, v6);
}


void __fastcall PartyOrganizationEventPointListViewManager__SetObjectItem(
        PartyOrganizationEventPointListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B17FDD & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1BCAFF8(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             obj);
    byte_4B17FDD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_33480128(
    (PartyOrganizationEventPointListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
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

  if ( (byte_4B17FD3 & 1) == 0 )
  {
    sub_1BCAFF8(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B17FD3 = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCB514(v7);
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

  if ( (byte_4B17FD5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B17FD5 = 1;
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
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCB514(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B17FD8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B17FD8 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BCB254(0LL, v18);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BCB254(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42948252((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BCB254(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BCB254(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BCB254(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BCB254(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v11;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B17FD7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B17FD7 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BCB254(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v11;
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

  if ( (byte_4B17FD4 & 1) == 0 )
  {
    sub_1BCAFF8(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B17FD4 = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCB514(v7);
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

  if ( (byte_4B17FD6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B17FD6 = 1;
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
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCB514(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0FB2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0FAD4;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4B17FE2 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9);
    byte_4B17FE2 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v14, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__Invoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PartyOrganizationEventPointListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B17FE3 & 1) == 0 )
  {
    sub_1BCAFF8(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v1);
    byte_4B17FE3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall PartyOrganizationEventPointListViewManager___c___ctor(
        PartyOrganizationEventPointListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___CreateList_b__20_0(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCB254(this, 0LL);
  return info->fields.targetType != 7;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_1BCB254(this, 0LL);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}