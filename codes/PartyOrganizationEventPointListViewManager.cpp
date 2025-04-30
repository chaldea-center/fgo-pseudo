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
  float v42; // s0
  float v43; // s1
  float v44; // s2
  EventUpValInfo_array *v45; // x8
  float v46; // s8
  float v47; // s10
  float v48; // s9
  unsigned __int64 v49; // x20
  unsigned __int64 max_length; // x9
  EventUpValInfo_o *v51; // x8
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x21
  _BOOL8 v55; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  PartyListViewItem_o *v60; // x26
  unsigned int *v61; // x21
  int32_t v62; // w22
  _BOOL8 v63; // x0
  const MethodInfo *v64; // x3
  PartyOrganizationEventPointListViewManager_o *TotalEventPointInfo; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x4
  PartyOrganizationEventPointListViewManager_o *v68; // x24
  int32_t v69; // w23
  System_String_o *v70; // x26
  __int64 v71; // x25
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct ListViewItemSeed_o *v78; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v80; // s10
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x8
  __int64 v85; // x0
  __int64 v86; // x1
  int m_CancellationTokenSource; // w8
  int32_t v88; // w9
  __int64 v89; // x26
  __int64 v90; // x25
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  __int64 v93; // x0
  __int64 v94; // x1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct ListViewItemSeed_o *v97; // x8
  System_Collections_Generic_List_object__o *v98; // x0
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v105; // x1
  __int64 v106; // x0
  __int64 v107; // x1
  struct ListViewItemSeed_o *v108; // x8
  UnityEngine_GameObject_o *v109; // x0
  EventUpValInfo_array *v110; // x8
  unsigned __int64 v111; // x23
  CGThumbnailListItem_o *v112; // x24
  unsigned __int64 v113; // x9
  Il2CppClass **v114; // x9
  EventUpValInfo_o *v115; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v118; // x1
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  CGThumbnailListItem_c *v121; // x25
  struct EventMemberMargeUpValInfo_array *v122; // x0
  struct EventMemberMargeUpValInfo_array **p_eventMargeUpValInfoList; // x23
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  EventUpValInfo_array *v126; // x8
  unsigned __int64 v127; // x24
  __int64 v128; // x25
  ServantEntity_o *v129; // x27
  System_String_o *SvtNameText; // x0
  char v131; // w28
  System_String_o *v132; // x29
  EventMemberMargeUpValInfo_o *v133; // x26
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  unsigned int *v136; // x20
  unsigned int *v137; // x0
  EventUpValInfo_array *v138; // x8
  unsigned __int64 v139; // x20
  struct EventMemberMargeUpValInfo_array *v140; // x8
  System_Collections_Generic_List_object__o *v141; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v142; // x27
  PartyOrganizationEventPointListViewManager___c_c *v143; // x0
  System_Func_object__bool__o *_9__20_0; // x28
  Il2CppObject *v145; // x29
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x0
  System_Collections_Generic_IEnumerable_T__o *v150; // x27
  EventMargeItemUpValInfo_array *List; // x0
  PartyOrganizationEventPointListViewManager___c_c *v152; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x27
  System_Func_object__bool__o *_9__20_1; // x29
  Il2CppObject *v155; // x20
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v156; // x0
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  struct System_String_o *servantName; // x20
  char v160; // w26
  __int64 v161; // x27
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  struct ListViewItemSeed_o *v166; // x8
  float y; // s12
  __int64 v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  __int64 v171; // x8
  float v172; // s10
  int v173; // w20
  int32_t v174; // w28
  __int64 v175; // x1
  Il2CppObject *v176; // x29
  ServantEntity_o *v177; // x0
  UserServantEntity_o *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  __int64 v181; // x0
  __int64 v182; // x1
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  struct ListViewItemSeed_o *v185; // x8
  System_Collections_Generic_List_object__o *v186; // x0
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x8
  struct ListViewItemSeed_o *v191; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v193; // x0
  __int64 v194; // x0
  PartyOrganizationEventPointListViewManager_o *v195; // [xsp+8h] [xbp-118h]
  PartyListViewItem_o *v196; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v197; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v198; // [xsp+30h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v199; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v200; // [xsp+70h] [xbp-B0h] BYREF
  int32_t eventId; // [xsp+8Ch] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+98h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v203; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A49FD6 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___, partyItem);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v14);
    sub_1B863B8(&EventDropItemUpValInfo_____TypeInfo, v15);
    sub_1B863B8(&EventMemberMargeUpValInfo___TypeInfo, v16);
    sub_1B863B8(&EventMemberMargeUpValInfo_TypeInfo, v17);
    sub_1B863B8(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030432, v29);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_1B863B8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v31);
    sub_1B863B8(&LocalizationManager_TypeInfo, v32);
    sub_1B863B8(&PartyOrganizationEventPointListViewItem_TypeInfo, v33);
    sub_1B863B8(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__, v34);
    sub_1B863B8(&Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__, v35);
    sub_1B863B8(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v36);
    sub_1B863B8(&StringLiteral_10179/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, v37);
    sub_1B863B8(&StringLiteral_10079/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, v38);
    byte_4A49FD6 = 1;
  }
  eventUpValList = 0LL;
  eventId = 0;
  memset(&v200, 0, sizeof(v200));
  memset(&v199, 0, sizeof(v199));
  memset(&v198, 0, sizeof(v198));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v39 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !partyItem )
    goto LABEL_154;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0LL) )
  {
    seed = (__int64)this->fields.seed;
    v196 = partyItem;
    if ( seed )
    {
      *(UnityEngine_Vector3_o *)&v42 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
      v45 = eventUpValList;
      if ( eventUpValList )
      {
        v46 = v42;
        v47 = v43;
        v48 = v44;
        v49 = 0LL;
        while ( 1 )
        {
          max_length = v45->max_length;
          if ( (__int64)v49 >= (int)max_length )
            break;
          if ( v49 >= max_length )
LABEL_155:
            sub_1B8661C(seed, v41);
          v51 = v45->m_Items[v49];
          if ( v51 )
          {
            seed = (__int64)v51->fields.dropList;
            if ( !seed )
              goto LABEL_154;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v197,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v200 = v197;
            while ( 1 )
            {
              v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v200,
                      (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v52 )
                break;
              current = v200.fields._current;
              if ( !v200.fields._current )
                sub_1B86614(v52, v53);
              if ( !v39 )
                sub_1B86614(v52, v53);
              v55 = System_Collections_Generic_List_int___Contains(
                      v39,
                      (int32_t)v200.fields._current[1].klass,
                      (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v55 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v39->fields._items;
                v58 = Method_System_Collections_Generic_List_int__Add__;
                ++v39->fields._version;
                if ( !items )
                  sub_1B86614(v55, klass_low);
                size = v39->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v39,
                    klass_low,
                    *(const MethodInfo_35DF934 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                }
                else
                {
                  v39->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v200,
              (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
          }
          v45 = eventUpValList;
          ++v49;
          if ( !eventUpValList )
            goto LABEL_154;
        }
        seed = (__int64)this->fields.lineObj;
        if ( seed )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seed, 0, 0LL);
          v60 = partyItem;
          if ( eventUpValList )
          {
            seed = sub_1B86460(EventDropItemUpValInfo_____TypeInfo, eventUpValList->max_length);
            if ( v39 )
            {
              v61 = (unsigned int *)seed;
              System_Collections_Generic_List_int___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v197,
                v39,
                (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
              v62 = 0;
              v199 = v197;
              v195 = this;
              while ( 1 )
              {
                v63 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                        (System_Collections_Generic_List_Enumerator_int__o *)&v199,
                        (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                if ( !v63 )
                  break;
                TotalEventPointInfo = (PartyOrganizationEventPointListViewManager_o *)PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                                                                        (PartyOrganizationEventPointListViewManager_o *)v63,
                                                                                        (int32_t)v199.fields._current,
                                                                                        v60,
                                                                                        v64);
                v68 = TotalEventPointInfo;
                if ( !TotalEventPointInfo )
                  sub_1B86614(0LL, v66);
                if ( TotalEventPointInfo->fields.m_CancellationTokenSource )
                {
                  v69 = v62 + 1;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_10179/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
                  v71 = sub_1B86604(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v71 + 136) = 1;
                  ListViewItem___ctor_41775716((ListViewItem_o *)v71, v62, 0LL);
                  *(_QWORD *)(v71 + 112) = v70;
                  sub_1B8635C((CGThumbnailListItem_o *)(v71 + 112), (int32_t)v70, v72, v73);
                  *(_BYTE *)(v71 + 120) = 0;
                  *(_DWORD *)(v71 + 136) = 0;
                  *(float *)(v71 + 92) = v46;
                  *(float *)(v71 + 96) = v47;
                  *(float *)(v71 + 100) = v48;
                  v78 = this->fields.seed;
                  if ( !v78 )
                    sub_1B86614(v74, v75);
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  v60 = v196;
                  v80 = v47 + v78->fields.arrangementPich.fields.y;
                  if ( !itemList )
                    sub_1B86614(0LL, v75);
                  v81 = itemList->fields._items;
                  v82 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v81 )
                    sub_1B86614(itemList, v75);
                  v83 = itemList->fields._size;
                  if ( (unsigned int)v83 >= v81->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v71,
                      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v84 = &v81->obj.klass + v83;
                    itemList->fields._size = v83 + 1;
                    v84[4] = (Il2CppClass *)v71;
                    sub_1B8635C((CGThumbnailListItem_o *)(v84 + 4), v71, v76, v77);
                  }
                  eventId = 0;
                  m_CancellationTokenSource = (int)v68->fields.m_CancellationTokenSource;
                  if ( m_CancellationTokenSource < 1 )
                  {
                    ++v62;
                  }
                  else
                  {
                    v88 = 0;
                    do
                    {
                      if ( v88 >= (unsigned int)m_CancellationTokenSource )
                        sub_1B8661C(v85, v86);
                      v89 = *((_QWORD *)&v68->fields.dropObjectList + v88);
                      v62 = v69 + 1;
                      v90 = sub_1B86604(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v90 + 136) = 1;
                      ListViewItem___ctor_41775716((ListViewItem_o *)v90, v69, 0LL);
                      *(_QWORD *)(v90 + 128) = v89;
                      sub_1B8635C((CGThumbnailListItem_o *)(v90 + 128), v89, v91, v92);
                      *(_DWORD *)(v90 + 136) = 0;
                      *(float *)(v90 + 92) = v46;
                      *(float *)(v90 + 96) = v80;
                      *(float *)(v90 + 100) = v48;
                      v97 = this->fields.seed;
                      if ( !v97 )
                        sub_1B86614(v93, v94);
                      v98 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      v60 = v196;
                      v80 = v80 + v97->fields.arrangementPich.fields.y;
                      if ( !v98 )
                        sub_1B86614(0LL, v94);
                      v99 = v98->fields._items;
                      v100 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v98->fields._version;
                      if ( !v99 )
                        sub_1B86614(v98, v94);
                      v101 = v98->fields._size;
                      if ( (unsigned int)v101 >= v99->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v98,
                          (Il2CppObject *)v90,
                          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v102 = &v99->obj.klass + v101;
                        v98->fields._size = v101 + 1;
                        v102[4] = (Il2CppClass *)v90;
                        sub_1B8635C((CGThumbnailListItem_o *)(v102 + 4), v90, v95, v96);
                      }
                      ++v69;
                      v88 = eventId + 1;
                      eventId = v88;
                      m_CancellationTokenSource = (int)v68->fields.m_CancellationTokenSource;
                    }
                    while ( v88 < m_CancellationTokenSource );
                  }
                  lineObj = this->fields.lineObj;
                  if ( !lineObj )
                    sub_1B86614(0LL, v86);
                  transform = UnityEngine_GameObject__get_transform(lineObj, 0LL);
                  if ( !transform )
                    sub_1B86614(0LL, v105);
                  v203.fields.x = v46;
                  v203.fields.y = v80;
                  v203.fields.z = v48;
                  UnityEngine_Transform__set_localPosition(transform, v203, 0LL);
                  v108 = this->fields.seed;
                  if ( !v108 )
                    sub_1B86614(v106, v107);
                  v109 = this->fields.lineObj;
                  v47 = v80 + v108->fields.arrangementPich.fields.y;
                  if ( !v109 )
                    sub_1B86614(0LL, v107);
                  UnityEngine_GameObject__SetActive(v109, 1, 0LL);
                }
                v110 = eventUpValList;
                if ( !eventUpValList )
LABEL_71:
                  sub_1B86614(TotalEventPointInfo, v66);
                v111 = 0LL;
                v112 = (CGThumbnailListItem_o *)(v61 + 8);
                while ( 1 )
                {
                  v113 = v110->max_length;
                  if ( (__int64)v111 >= (int)v113 )
                    break;
                  if ( v111 >= v113 )
                    sub_1B8661C(TotalEventPointInfo, v66);
                  v114 = &v110->obj.klass + v111;
                  v115 = (EventUpValInfo_o *)v114[4];
                  if ( v115 )
                  {
                    questRestrictionInfo = v60->fields.questRestrictionInfo;
                    if ( !questRestrictionInfo )
                      sub_1B86614(TotalEventPointInfo, v66);
                    PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                      TotalEventPointInfo,
                      v111,
                      (EventUpValInfo_o *)v114[4],
                      questRestrictionInfo->fields.eventId,
                      v67);
                    DropItemList = EventUpValInfo__GetDropItemList(v115, v111, 0LL);
                    if ( !v61 )
                      sub_1B86614(DropItemList, v118);
                    v121 = (CGThumbnailListItem_c *)DropItemList;
                    if ( DropItemList )
                    {
                      DropItemList = (EventDropItemUpValInfo_array *)sub_1B864F4(
                                                                       DropItemList,
                                                                       *(_QWORD *)(*(_QWORD *)v61 + 64LL));
                      if ( !DropItemList )
                      {
                        v193 = sub_1B86638();
                        sub_1B864E0(v193, 0LL);
                      }
                    }
                    if ( v111 >= v61[6] )
                      sub_1B8661C(DropItemList, v118);
                    v112->klass = v121;
                    sub_1B8635C(v112, (int32_t)v121, v119, v120);
                    v110 = eventUpValList;
                  }
                  ++v111;
                  v112 = (CGThumbnailListItem_o *)((char *)v112 + 8);
                  if ( !v110 )
                    goto LABEL_71;
                }
              }
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v199,
                (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              if ( eventUpValList )
              {
                v122 = (struct EventMemberMargeUpValInfo_array *)sub_1B86460(
                                                                   EventMemberMargeUpValInfo___TypeInfo,
                                                                   eventUpValList->max_length);
                p_eventMargeUpValInfoList = &this->fields.eventMargeUpValInfoList;
                this->fields.eventMargeUpValInfoList = v122;
                sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, (int32_t)v122, v124, v125);
                v126 = eventUpValList;
                if ( eventUpValList )
                {
                  v127 = 0LL;
                  do
                  {
                    if ( (__int64)v127 >= (int)v126->max_length )
                      goto LABEL_150;
                    seed = (__int64)PartyListViewItem__GetMember(v60, v127, 0LL);
                    if ( !seed )
                      break;
                    v128 = seed;
                    if ( *(_BYTE *)(seed + 128) )
                    {
                      if ( !*(_QWORD *)(seed + 120) )
                        goto LABEL_144;
                    }
                    else if ( !*(_QWORD *)(seed + 112) )
                    {
                      goto LABEL_144;
                    }
                    v129 = *(ServantEntity_o **)(seed + 176);
                    SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                    (PartyOrganizationListViewItem_o *)seed,
                                    v41);
                    v131 = *(_BYTE *)(v128 + 128);
                    v132 = SvtNameText;
                    v133 = (EventMemberMargeUpValInfo_o *)sub_1B86604(EventMemberMargeUpValInfo_TypeInfo);
                    EventMemberMargeUpValInfo___ctor(v133, v127, v129, v132, v131, 0LL);
                    v136 = (unsigned int *)*p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      break;
                    if ( v133 )
                    {
                      seed = sub_1B864F4(v133, *(_QWORD *)(*(_QWORD *)v136 + 64LL));
                      if ( !seed )
                      {
                        v194 = sub_1B86638();
                        sub_1B864E0(v194, 0LL);
                      }
                    }
                    this = v195;
                    if ( v127 >= v136[6] )
                      goto LABEL_155;
                    v137 = &v136[2 * v127];
                    *((_QWORD *)v137 + 4) = v133;
                    sub_1B8635C((CGThumbnailListItem_o *)(v137 + 8), (int32_t)v133, v134, v135);
                    v138 = eventUpValList;
                    if ( !eventUpValList )
                      break;
                    v139 = 0LL;
                    while ( (__int64)v139 < (int)v138->max_length )
                    {
                      if ( !v61 )
                        goto LABEL_154;
                      if ( v139 >= v61[6] )
                        goto LABEL_155;
                      v41 = *(MethodInfo **)&v61[2 * v139 + 8];
                      if ( v41 )
                      {
                        v140 = *p_eventMargeUpValInfoList;
                        if ( !*p_eventMargeUpValInfoList )
                          goto LABEL_154;
                        if ( v127 >= v140->max_length )
                          goto LABEL_155;
                        seed = (__int64)v140->m_Items[v127];
                        if ( !seed )
                          goto LABEL_154;
                        EventMemberMargeUpValInfo__Add(
                          (EventMemberMargeUpValInfo_o *)seed,
                          (EventDropItemUpValInfo_array *)v41,
                          0LL);
                        v138 = eventUpValList;
                      }
                      ++v139;
                      if ( !v138 )
                        goto LABEL_154;
                    }
                    if ( !v133 )
                      break;
                    seed = EventMemberMargeUpValInfo__IsEmpty(v133, 0LL);
                    if ( (seed & 1) == 0 || *(_QWORD *)(v128 + 304) )
                    {
                      v141 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v141,
                        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                      v142 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v128 + 304);
                      if ( v142 )
                      {
                        v143 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                          v143 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        _9__20_0 = (System_Func_object__bool__o *)v143->static_fields->__9__20_0;
                        if ( !_9__20_0 )
                        {
                          if ( !v143->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v143);
                            v143 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                          }
                          v145 = (Il2CppObject *)v143->static_fields->__9;
                          _9__20_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__20_0,
                            v145,
                            Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_0__,
                            0LL);
                          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                          static_fields->__9__20_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_0;
                          sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v147, v148);
                        }
                        v149 = System_Linq_Enumerable__Where_object_(
                                 v142,
                                 (System_Func_TSource__bool__o *)_9__20_0,
                                 (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                        v150 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                v149,
                                                                                (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
                        v141 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                        System_Collections_Generic_List_object____ctor_56607308(
                          v141,
                          v150,
                          (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030432);
                      }
                      List = EventMemberMargeUpValInfo__GetList(v133, 0LL);
                      v152 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      v153 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
                      if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
                        v152 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                      }
                      _9__20_1 = (System_Func_object__bool__o *)v152->static_fields->__9__20_1;
                      if ( !_9__20_1 )
                      {
                        if ( !v152->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v152);
                          v152 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
                        }
                        v155 = (Il2CppObject *)v152->static_fields->__9;
                        _9__20_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
                        System_Func_object__bool____ctor(
                          _9__20_1,
                          v155,
                          Method_PartyOrganizationEventPointListViewManager___c__CreateList_b__20_1__,
                          0LL);
                        v156 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
                        v156->__9__20_1 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__20_1;
                        sub_1B8635C((CGThumbnailListItem_o *)&v156->__9__20_1, (int32_t)_9__20_1, v157, v158);
                      }
                      seed = (__int64)System_Linq_Enumerable__Where_object_(
                                        v153,
                                        (System_Func_TSource__bool__o *)_9__20_1,
                                        (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
                      if ( !v141 )
                        break;
                      System_Collections_Generic_List_object___AddRange(
                        v141,
                        (System_Collections_Generic_IEnumerable_T__o *)seed,
                        (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
                      servantName = v133->fields.servantName;
                      v160 = *(_BYTE *)(v128 + 128);
                      v161 = sub_1B86604(PartyOrganizationEventPointListViewItem_TypeInfo);
                      *(_DWORD *)(v161 + 136) = 1;
                      ListViewItem___ctor_41775716((ListViewItem_o *)v161, v62, 0LL);
                      *(_QWORD *)(v161 + 112) = servantName;
                      sub_1B8635C((CGThumbnailListItem_o *)(v161 + 112), (int32_t)servantName, v162, v163);
                      *(_BYTE *)(v161 + 120) = v160;
                      *(_DWORD *)(v161 + 136) = 1;
                      *(float *)(v161 + 92) = v46;
                      *(float *)(v161 + 96) = v47;
                      *(float *)(v161 + 100) = v48;
                      v166 = v195->fields.seed;
                      if ( !v166 )
                        break;
                      seed = (__int64)v195->fields.itemList;
                      if ( !seed )
                        break;
                      y = v166->fields.arrangementPich.fields.y;
                      v168 = *(_QWORD *)(seed + 16);
                      v169 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++*(_DWORD *)(seed + 28);
                      if ( !v168 )
                        break;
                      v170 = *(int *)(seed + 24);
                      if ( (unsigned int)v170 >= *(_DWORD *)(v168 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)seed,
                          (Il2CppObject *)v161,
                          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v171 = v168 + 8 * v170;
                        *(_DWORD *)(seed + 24) = v170 + 1;
                        *(_QWORD *)(v171 + 32) = v161;
                        sub_1B8635C((CGThumbnailListItem_o *)(v171 + 32), v161, v164, v165);
                      }
                      ++v62;
                      v172 = v47 + y;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v197,
                        v141,
                        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
                      v173 = 0;
                      v198 = v197;
LABEL_122:
                      v174 = v62;
                      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v198,
                                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
                      {
                        v176 = v198.fields._current;
                        if ( v198.fields._current && HIDWORD(v198.fields._current[3].monitor) == 111 )
                        {
                          if ( *(_BYTE *)(v128 + 128) )
                            continue;
                          v177 = *(ServantEntity_o **)(v128 + 176);
                          if ( !v177 )
                            sub_1B86614(0LL, v175);
                          if ( ServantEntity__checkIsHeroineSvt(v177, 0LL) )
                          {
                            v178 = *(UserServantEntity_o **)(v128 + 112);
                            if ( v178 )
                            {
                              if ( !UserServantEntity__IsAddFriendShipHeroine(v178, 0LL) )
                                continue;
                            }
                          }
                        }
                        ++v62;
                        v161 = sub_1B86604(PartyOrganizationEventPointListViewItem_TypeInfo);
                        *(_DWORD *)(v161 + 136) = 1;
                        ListViewItem___ctor_41775716((ListViewItem_o *)v161, v174, 0LL);
                        *(_QWORD *)(v161 + 128) = v176;
                        sub_1B8635C((CGThumbnailListItem_o *)(v161 + 128), (int32_t)v176, v179, v180);
                        *(_DWORD *)(v161 + 136) = 1;
                        *(float *)(v161 + 92) = v46;
                        *(float *)(v161 + 96) = v172;
                        *(float *)(v161 + 100) = v48;
                        v185 = v195->fields.seed;
                        if ( !v185 )
                          sub_1B86614(v181, v182);
                        v186 = (System_Collections_Generic_List_object__o *)v195->fields.itemList;
                        v172 = v172 + v185->fields.arrangementPich.fields.y;
                        if ( !v186 )
                          sub_1B86614(0LL, v182);
                        v187 = v186->fields._items;
                        v188 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                        ++v186->fields._version;
                        if ( !v187 )
                          sub_1B86614(v186, v182);
                        v189 = v186->fields._size;
                        if ( (unsigned int)v189 >= v187->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v186,
                            (Il2CppObject *)v161,
                            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v190 = &v187->obj.klass + v189;
                          v186->fields._size = v189 + 1;
                          v190[4] = (Il2CppClass *)v161;
                          sub_1B8635C((CGThumbnailListItem_o *)(v190 + 4), v161, v183, v184);
                        }
                        ++v173;
                        goto LABEL_122;
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v198,
                        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
                      this = v195;
                      if ( v173 )
                      {
                        v47 = v172 + -8.0;
                      }
                      else
                      {
                        seed = (__int64)v195->fields.itemList;
                        if ( !seed )
                          break;
                        seed = System_Collections_Generic_List_object___Remove(
                                 (System_Collections_Generic_List_object__o *)seed,
                                 (Il2CppObject *)v161,
                                 (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                        v191 = v195->fields.seed;
                        if ( !v191 )
                          break;
                        v47 = v172 - v191->fields.arrangementPich.fields.y;
                      }
                    }
                    v60 = v196;
LABEL_144:
                    v126 = eventUpValList;
                    ++v127;
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
    sub_1B86614(seed, v41);
  }
LABEL_150:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10079/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4);
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

  if ( (byte_4A49FD7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B863B8(&PartyOrganizationEventPointListViewItem_TypeInfo, v5);
    byte_4A49FD7 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v17; // x4
  EventUpValInfo_array *v18; // x8
  unsigned __int64 v19; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v21; // x9
  EventUpValInfo_o *v22; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v24; // w8
  void *v25; // x20
  __int64 v26; // x22
  Il2CppObject *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  EventUpValInfo_array *v35; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4A49FD5 & 1) == 0 )
  {
    sub_1B863B8(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v9);
    byte_4A49FD5 = 1;
  }
  v35 = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v16 = (EventPartyMargeUpValInfo_o *)sub_1B86604(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v16, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v35, 0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v18 = v35;
    if ( !v35 )
      goto LABEL_30;
    v19 = 0LL;
    while ( 1 )
    {
      max_length = v18->max_length;
      if ( (__int64)v19 >= (int)max_length )
        break;
      if ( v19 >= max_length )
        goto LABEL_31;
      v21 = &v18->obj.klass + v19;
      v22 = (EventUpValInfo_o *)v21[4];
      if ( v22 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_30;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v19,
          (EventUpValInfo_o *)v21[4],
          questRestrictionInfo->fields.eventId,
          v17);
        EventUpVal = EventUpValInfo__GetDropItemList(v22, v19, 0LL);
        if ( !v16 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v16, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v18 = v35;
      }
      ++v19;
      if ( !v18 )
        goto LABEL_30;
    }
  }
  if ( !v16 )
    goto LABEL_30;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v16, 0LL);
  if ( EventUpVal )
  {
    v24 = *((_DWORD *)EventUpVal + 6);
    v25 = EventUpVal;
    if ( v24 >= 1 )
    {
      v26 = 0LL;
      while ( (unsigned int)v26 < v24 )
      {
        v27 = (Il2CppObject *)*((_QWORD *)v25 + v26 + 4);
        if ( !v27 )
          goto LABEL_30;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v25 + v26 + 4),
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
              v27,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v27;
            sub_1B8635C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
          }
        }
        v24 = *((_DWORD *)v25 + 6);
        if ( (int)++v26 >= v24 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1B8661C(EventUpVal, v12);
    }
  }
LABEL_28:
  if ( !v10 )
LABEL_30:
    sub_1B86614(EventUpVal, v12);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v10,
                                            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_4A49FDC & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A49FDC = 1;
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
          sub_1B86614(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  int32_t actMaxRarity; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A49FD4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4A49FD4 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_object )
        goto LABEL_33;
      v18 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   (ServantSkillMaster_o *)MasterData_object,
                   eventUpVal->fields.equipSvtId,
                   0LL);
      if ( !Instance )
        goto LABEL_33;
      v19 = *((_DWORD *)Instance + 6);
      v20 = Instance;
      if ( v19 >= 1 )
      {
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= v19 )
LABEL_34:
            sub_1B8661C(Instance, v14);
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
                    goto LABEL_34;
                  v27 = *((_QWORD *)v25 + (int)v26 + 4);
                  if ( !v27 )
                    goto LABEL_33;
                  v28 = *(_QWORD *)(v27 + 24);
                  if ( !v28 )
                    goto LABEL_33;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v23[4],
                                       *(_DWORD *)(v28 + 16),
                                       (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v24 = *((_DWORD *)v25 + 6);
                  if ( (int)++v26 >= v24 )
                    goto LABEL_31;
                }
                v29 = *(_QWORD *)(v27 + 24);
                if ( !v29 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v29 + 16), 0LL);
              }
            }
          }
LABEL_31:
          v19 = *((_DWORD *)v20 + 6);
          if ( (int)++v21 >= v19 )
            return;
        }
LABEL_33:
        sub_1B86614(Instance, v14);
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

  if ( (byte_4A49FDA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v8);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v11);
    sub_1B863B8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v13);
    byte_4A49FDA = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B86614(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B86614(v19, v20);
      PartyOrganizationEventPointListViewObject__Init_32569948(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_32568836(
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

  if ( (byte_4A49FDB & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v6);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v9);
    sub_1B863B8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v10);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v11);
    byte_4A49FDB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B86614(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B86614(v17, v18);
      PartyOrganizationEventPointListViewObject__Init_32569340(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_32568304(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32568304(
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

  if ( (byte_4A49FD9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v6);
    sub_1B863B8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v7);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v8);
    byte_4A49FD9 = 1;
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
            (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
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
                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v18 = v15->fields._size;
          v19 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
          PartyOrganizationEventPointListViewObject__Init_32569340(v19, v22, v20, v21);
          if ( ++v16 >= v15->fields._size )
            return;
        }
      }
      sub_1B86614(ClippingObjectList, v13);
    case 2:
      v11 = 3;
      goto LABEL_17;
    case 1:
      v11 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_32568836(this, v11, v10);
      break;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32568784(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  PartyOrganizationEventPointListViewManager__SetMode_32568304(this, mode, v6);
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
  if ( (byte_4A49FD8 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1B863B8(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             obj);
    byte_4A49FD8 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1B86614(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_32568180(
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

  if ( (byte_4A49FCE & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A49FCE = 1;
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
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B868D4(v7);
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

  if ( (byte_4A49FD0 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A49FD0 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B868D4(v7);
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

  if ( (byte_4A49FD3 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A49FD3 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B86614(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B86614(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B86614(0LL, v18);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B86614(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41791656((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B86614(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B86614(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B86614(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B86614(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B8635C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A49FD2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A49FD2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B86614(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B86614(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B86614(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B86614(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B8635C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A49FCF & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A49FCF = 1;
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
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B868D4(v7);
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

  if ( (byte_4A49FD1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A49FD1 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B868D4(v7);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CCBDC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CCB84;
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
  if ( (byte_4A49FDD & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9);
    byte_4A49FDD = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v14, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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

  if ( (byte_4A49FDE & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v1);
    byte_4A49FDE = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v2;
  sub_1B8635C(
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
    sub_1B86614(this, 0LL);
  return info->fields.targetType != 7;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___CreateList_b__20_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventMargeItemUpValInfo_o *eventMargeItemUpValInfo,
        const MethodInfo *method)
{
  if ( !eventMargeItemUpValInfo )
    sub_1B86614(this, 0LL);
  return eventMargeItemUpValInfo->fields.targetType == 7;
}