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
  __int64 v4; // x1
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
  System_Collections_Generic_List_int__o *v33; // x23
  System_Collections_Generic_List_T__o *v34; // x0
  __int64 seed; // x0
  MethodInfo *max_length; // x1
  PartyOrganizationEventPointListViewManager_o *v37; // x21
  float v38; // s0
  float v39; // s1
  float v40; // s2
  EventUpValInfo_array *v41; // x8
  float v42; // s8
  float v43; // s10
  float v44; // s9
  unsigned __int64 v45; // x22
  EventUpValInfo_o *v46; // x8
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppObject *current; // x21
  _BOOL8 v50; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  PartyOrganizationEventPointListViewManager_o *v55; // x0
  const MethodInfo *v56; // x4
  int32_t v57; // w2
  int32_t v58; // w3
  EventDropItemUpValInfo_array *v59; // x21
  signed int v60; // w9
  int32_t v61; // w8
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  unsigned int *v66; // x22
  PartyListViewItem_o *v67; // x27
  int32_t v68; // w23
  _BOOL8 v69; // x0
  const MethodInfo *v70; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  __int64 v72; // x1
  EventMargeItemUpValInfo_array *v73; // x25
  int32_t v74; // w24
  System_String_o *v75; // x27
  __int64 v76; // x26
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x0
  __int64 v80; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  struct ListViewItemSeed_o *v83; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v85; // s10
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x8
  __int64 v90; // x0
  __int64 v91; // x1
  UnityEngine_GameObject_o *v92; // x0
  PartyOrganizationEventPointListViewManager_o *v93; // x0
  __int64 v94; // x1
  const MethodInfo *v95; // x4
  int v96; // w8
  int32_t v97; // w9
  EventMargeItemUpValInfo_o *v98; // x27
  __int64 v99; // x26
  int32_t v100; // w2
  int32_t v101; // w3
  __int64 v102; // x0
  __int64 v103; // x1
  int32_t v104; // w2
  int32_t v105; // w3
  struct ListViewItemSeed_o *v106; // x8
  System_Collections_Generic_List_object__o *v107; // x0
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v114; // x1
  __int64 v115; // x0
  __int64 v116; // x1
  struct ListViewItemSeed_o *v117; // x8
  UnityEngine_GameObject_o *v118; // x0
  EventUpValInfo_array *v119; // x8
  unsigned __int64 v120; // x24
  ServantStatusBattleListViewItem_o *v121; // x25
  unsigned __int64 v122; // x9
  Il2CppClass **v123; // x9
  EventUpValInfo_o *v124; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v127; // x1
  int32_t v128; // w2
  int32_t v129; // w3
  ServantStatusBattleListViewItem_c *v130; // x26
  __int64 v131; // x0
  unsigned int **p_eventMargeUpValInfoList; // x24
  int32_t v133; // w2
  int32_t v134; // w3
  EventUpValInfo_array *v135; // x8
  unsigned __int64 v136; // x25
  __int64 v137; // x19
  ServantEntity_o *v138; // x28
  System_String_o *SvtNameText; // x0
  char v140; // w29
  System_String_o *v141; // x20
  EventMemberMargeUpValInfo_o *v142; // x27
  int32_t v143; // w2
  int32_t v144; // w3
  unsigned int *v145; // x19
  unsigned int *v146; // x0
  EventUpValInfo_array *v147; // x8
  unsigned __int64 v148; // x19
  unsigned int *v149; // x8
  _BOOL8 v150; // x0
  __int64 v151; // x1
  unsigned int *v152; // x8
  EventMemberMargeUpValInfo_o *v153; // x0
  struct System_String_o *servantName; // x20
  char v155; // w19
  __int64 v156; // x28
  int32_t v157; // w2
  int32_t v158; // w3
  int32_t v159; // w2
  int32_t v160; // w3
  struct ListViewItemSeed_o *v161; // x8
  float y; // s12
  __int64 v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  __int64 v166; // x8
  __int64 v167; // x27
  float v168; // s10
  int v169; // w29
  unsigned __int64 v170; // x21
  __int64 v171; // x19
  __int64 v172; // x8
  __int64 v173; // x20
  int32_t v174; // w2
  int32_t v175; // w3
  int32_t v176; // w2
  int32_t v177; // w3
  struct ListViewItemSeed_o *v178; // x8
  float v179; // s12
  __int64 v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  __int64 v183; // x8
  struct ListViewItemSeed_o *v184; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v186; // x0
  __int64 v187; // x0
  System_Collections_Generic_List_object__o *v188; // [xsp+10h] [xbp-140h]
  __int64 v189; // [xsp+18h] [xbp-138h]
  __int64 v191; // [xsp+28h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v193; // [xsp+38h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v195; // [xsp+70h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v196; // [xsp+90h] [xbp-C0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t eventId; // [xsp+BCh] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+C8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v200; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB1B29 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, partyItem);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v11);
    sub_1BAB41C(&EventDropItemUpValInfo_____TypeInfo, v12);
    sub_1BAB41C(&EventMemberMargeUpValInfo___TypeInfo, v13);
    sub_1BAB41C(&EventMemberMargeUpValInfo_TypeInfo, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v20);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v22);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__, v24);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v25);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_1BAB41C(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo, v27);
    sub_1BAB41C(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v28);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v29);
    sub_1BAB41C(&PartyOrganizationEventPointListViewItem_TypeInfo, v30);
    sub_1BAB41C(&StringLiteral_10353/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, v31);
    sub_1BAB41C(&StringLiteral_10259/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, v32);
    byte_4AB1B29 = 1;
  }
  eventUpValList = 0LL;
  eventId = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v196, 0, sizeof(v196));
  memset(&v195, 0, sizeof(v195));
  memset(&i, 0, sizeof(i));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v33 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  v188 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v188,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v34 = (System_Collections_Generic_List_T__o *)sub_1BAB668(System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v34,
    (const MethodInfo_34F71B0 *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_159;
  v37 = this;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0LL) )
  {
    seed = (__int64)this->fields.seed;
    partyItema = partyItem;
    if ( seed )
    {
      *(UnityEngine_Vector3_o *)&v38 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
      v41 = eventUpValList;
      if ( eventUpValList )
      {
        v42 = v38;
        v43 = v39;
        v44 = v40;
        v45 = 0LL;
        while ( 1 )
        {
          max_length = (MethodInfo *)v41->max_length;
          if ( (__int64)v45 >= (int)max_length )
            break;
          if ( v45 >= (unsigned __int64)max_length )
            goto LABEL_160;
          v46 = v41->m_Items[v45];
          if ( v46 )
          {
            seed = (__int64)v46->fields.dropList;
            if ( !seed )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v193,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v196 = v193;
            while ( 1 )
            {
              v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v196,
                      (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v47 )
                break;
              current = v196.fields._current;
              if ( !v196.fields._current )
                sub_1BAB678(v47, v48);
              if ( !v33 )
                sub_1BAB678(v47, v48);
              v50 = System_Collections_Generic_List_int___Contains(
                      v33,
                      (int32_t)v196.fields._current[1].klass,
                      (const MethodInfo_3530C10 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v50 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v33->fields._items;
                v53 = Method_System_Collections_Generic_List_int__Add__;
                ++v33->fields._version;
                if ( !items )
                  sub_1BAB678(v50, klass_low);
                size = v33->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    klass_low,
                    *(const MethodInfo_3530898 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                }
                else
                {
                  v33->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v196,
              (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v55,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v45,
                     v56);
            if ( (seed & 1) != 0 )
            {
              v59 = campaignFriendshipUpPoints;
              eventId = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_159;
              v60 = campaignFriendshipUpPoints->max_length;
              if ( v60 >= 1 )
              {
                v61 = 0;
                while ( v61 < (unsigned int)v60 )
                {
                  if ( !v188 )
                    goto LABEL_159;
                  max_length = (MethodInfo *)v59->m_Items[v61];
                  v62 = v188->fields._items;
                  v63 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
                  ++v188->fields._version;
                  if ( !v62 )
                    goto LABEL_159;
                  v64 = v188->fields._size;
                  if ( (unsigned int)v64 >= v62->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v188,
                      (Il2CppObject *)max_length,
                      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v65 = &v62->obj.klass + v64;
                    v188->fields._size = v64 + 1;
                    v65[4] = (Il2CppClass *)max_length;
                    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)max_length, v57, v58);
                  }
                  v61 = eventId + 1;
                  eventId = v61;
                  v60 = v59->max_length;
                  if ( v61 >= v60 )
                    goto LABEL_32;
                }
LABEL_160:
                sub_1BAB680(seed, max_length);
              }
            }
          }
LABEL_32:
          v41 = eventUpValList;
          v37 = this;
          ++v45;
          if ( !eventUpValList )
            goto LABEL_159;
        }
        seed = sub_1BAB4C4(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v33 )
        {
          v66 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v193,
            v33,
            (const MethodInfo_353136C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v67 = partyItem;
          v68 = 0;
          v195 = v193;
          while ( 1 )
          {
            v69 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v195,
                    (const MethodInfo_32C0BAC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v69 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v69,
                                    (int32_t)v195.fields._current,
                                    v67,
                                    v70);
            v73 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_1BAB678(0LL, v72);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v74 = v68 + 1;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v75 = LocalizationManager__Get((System_String_o *)StringLiteral_10353/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
              v76 = sub_1BAB668(PartyOrganizationEventPointListViewItem_TypeInfo);
              *(_DWORD *)(v76 + 136) = 1;
              ListViewItem___ctor_41102532((ListViewItem_o *)v76, v68, 0LL);
              *(_QWORD *)(v76 + 112) = v75;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v76 + 112), (int32_t)v75, v77, v78);
              *(_BYTE *)(v76 + 120) = 0;
              *(_DWORD *)(v76 + 136) = 0;
              *(float *)(v76 + 92) = v42;
              *(float *)(v76 + 96) = v43;
              *(float *)(v76 + 100) = v44;
              v83 = v37->fields.seed;
              if ( !v83 )
                sub_1BAB678(v79, v80);
              itemList = (System_Collections_Generic_List_object__o *)v37->fields.itemList;
              v67 = partyItema;
              v85 = v43 + v83->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_1BAB678(0LL, v80);
              v86 = itemList->fields._items;
              v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++itemList->fields._version;
              if ( !v86 )
                sub_1BAB678(itemList, v80);
              v88 = itemList->fields._size;
              if ( (unsigned int)v88 >= v86->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  itemList,
                  (Il2CppObject *)v76,
                  *(const MethodInfo_354D8BC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
              }
              else
              {
                v89 = &v86->obj.klass + v88;
                itemList->fields._size = v88 + 1;
                v89[4] = (Il2CppClass *)v76;
                sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v89 + 4), v76, v81, v82);
              }
              eventId = 0;
              v96 = v73->max_length;
              if ( v96 < 1 )
              {
                ++v68;
              }
              else
              {
                v97 = 0;
                do
                {
                  if ( v97 >= (unsigned int)v96 )
                    sub_1BAB680(v90, v91);
                  v98 = v73->m_Items[v97];
                  v68 = v74 + 1;
                  v99 = sub_1BAB668(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v99 + 136) = 1;
                  ListViewItem___ctor_41102532((ListViewItem_o *)v99, v74, 0LL);
                  *(_QWORD *)(v99 + 128) = v98;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v99 + 128), (int32_t)v98, v100, v101);
                  *(_DWORD *)(v99 + 136) = 0;
                  *(float *)(v99 + 92) = v42;
                  *(float *)(v99 + 96) = v85;
                  *(float *)(v99 + 100) = v44;
                  v106 = v37->fields.seed;
                  if ( !v106 )
                    sub_1BAB678(v102, v103);
                  v107 = (System_Collections_Generic_List_object__o *)v37->fields.itemList;
                  v67 = partyItema;
                  v85 = v85 + v106->fields.arrangementPich.fields.y;
                  if ( !v107 )
                    sub_1BAB678(0LL, v103);
                  v108 = v107->fields._items;
                  v109 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v107->fields._version;
                  if ( !v108 )
                    sub_1BAB678(v107, v103);
                  v110 = v107->fields._size;
                  if ( (unsigned int)v110 >= v108->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v107,
                      (Il2CppObject *)v99,
                      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v111 = &v108->obj.klass + v110;
                    v107->fields._size = v110 + 1;
                    v111[4] = (Il2CppClass *)v99;
                    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v111 + 4), v99, v104, v105);
                  }
                  ++v74;
                  v97 = eventId + 1;
                  eventId = v97;
                  v96 = v73->max_length;
                }
                while ( v97 < v96 );
              }
              lineObj = v37->fields.lineObj;
              if ( !lineObj )
                sub_1BAB678(0LL, v91);
              transform = UnityEngine_GameObject__get_transform(lineObj, 0LL);
              if ( !transform )
                sub_1BAB678(0LL, v114);
              v200.fields.x = v42;
              v200.fields.y = v85;
              v200.fields.z = v44;
              UnityEngine_Transform__set_localPosition(transform, v200, 0LL);
              v117 = v37->fields.seed;
              if ( !v117 )
                sub_1BAB678(v115, v116);
              v118 = v37->fields.lineObj;
              v43 = v85 + v117->fields.arrangementPich.fields.y;
              if ( !v118 )
                sub_1BAB678(0LL, v116);
              UnityEngine_GameObject__SetActive(v118, 1, 0LL);
            }
            else
            {
              v92 = v37->fields.lineObj;
              if ( !v92 )
                sub_1BAB678(0LL, v72);
              UnityEngine_GameObject__SetActive(v92, 0, 0LL);
            }
            v119 = eventUpValList;
            if ( !eventUpValList )
LABEL_81:
              sub_1BAB678(v93, v94);
            v120 = 0LL;
            v121 = (ServantStatusBattleListViewItem_o *)(v66 + 8);
            while ( 1 )
            {
              v122 = v119->max_length;
              if ( (__int64)v120 >= (int)v122 )
                break;
              if ( v120 >= v122 )
                sub_1BAB680(v93, v94);
              v123 = &v119->obj.klass + v120;
              v124 = (EventUpValInfo_o *)v123[4];
              if ( v124 )
              {
                questRestrictionInfo = v67->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_1BAB678(v93, v94);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v93,
                  v120,
                  (EventUpValInfo_o *)v123[4],
                  questRestrictionInfo->fields.eventId,
                  v95);
                DropItemList = EventUpValInfo__GetDropItemList(v124, v120, 0LL);
                if ( !v66 )
                  sub_1BAB678(DropItemList, v127);
                v130 = (ServantStatusBattleListViewItem_c *)DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_1BAB558(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v66 + 64LL));
                  if ( !DropItemList )
                  {
                    v186 = sub_1BAB69C();
                    sub_1BAB544(v186, 0LL);
                  }
                }
                if ( v120 >= v66[6] )
                  sub_1BAB680(DropItemList, v127);
                v121->klass = v130;
                sub_1BAB3C0(v121, (int32_t)v130, v128, v129);
                v119 = eventUpValList;
              }
              ++v120;
              v121 = (ServantStatusBattleListViewItem_o *)((char *)v121 + 8);
              if ( !v119 )
                goto LABEL_81;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v195,
            (const MethodInfo_32C0BA8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( eventUpValList )
          {
            v131 = sub_1BAB4C4(EventMemberMargeUpValInfo___TypeInfo, eventUpValList->max_length);
            p_eventMargeUpValInfoList = (unsigned int **)&v37->fields.eventMargeUpValInfoList;
            v37->fields.eventMargeUpValInfoList = (struct EventMemberMargeUpValInfo_array *)v131;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v37->fields.eventMargeUpValInfoList, v131, v133, v134);
            v135 = eventUpValList;
            if ( eventUpValList )
            {
              v136 = 0LL;
              do
              {
                if ( (__int64)v136 >= (int)v135->max_length )
                  goto LABEL_155;
                seed = (__int64)PartyListViewItem__GetMember(v67, v136, 0LL);
                if ( !seed )
                  break;
                v137 = seed;
                if ( *(_BYTE *)(seed + 128) )
                {
                  if ( !*(_QWORD *)(seed + 120) )
                    goto LABEL_150;
                }
                else if ( !*(_QWORD *)(seed + 112) )
                {
                  goto LABEL_150;
                }
                v138 = *(ServantEntity_o **)(seed + 176);
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                max_length);
                v189 = v137;
                v140 = *(_BYTE *)(v137 + 128);
                v141 = SvtNameText;
                v142 = (EventMemberMargeUpValInfo_o *)sub_1BAB668(EventMemberMargeUpValInfo_TypeInfo);
                EventMemberMargeUpValInfo___ctor(v142, v136, v138, v141, v140, 0LL);
                v145 = *p_eventMargeUpValInfoList;
                if ( !*p_eventMargeUpValInfoList )
                  break;
                if ( v142 )
                {
                  seed = sub_1BAB558(v142, *(_QWORD *)(*(_QWORD *)v145 + 64LL));
                  if ( !seed )
                  {
                    v187 = sub_1BAB69C();
                    sub_1BAB544(v187, 0LL);
                  }
                }
                if ( v136 >= v145[6] )
                  goto LABEL_160;
                v146 = &v145[2 * v136];
                *((_QWORD *)v146 + 4) = v142;
                sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v146 + 8), (int32_t)v142, v143, v144);
                v147 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v148 = 0LL;
                while ( (__int64)v148 < (int)v147->max_length )
                {
                  if ( !v66 )
                    goto LABEL_159;
                  if ( v148 >= v66[6] )
                    goto LABEL_160;
                  max_length = *(MethodInfo **)&v66[2 * v148 + 8];
                  if ( max_length )
                  {
                    v149 = *p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      goto LABEL_159;
                    if ( v136 >= v149[6] )
                      goto LABEL_160;
                    seed = *(_QWORD *)&v149[2 * v136 + 8];
                    if ( !seed )
                      goto LABEL_159;
                    EventMemberMargeUpValInfo__Add(
                      (EventMemberMargeUpValInfo_o *)seed,
                      (EventDropItemUpValInfo_array *)max_length,
                      0LL);
                    v147 = eventUpValList;
                  }
                  ++v148;
                  if ( !v147 )
                    goto LABEL_159;
                }
                seed = (__int64)v188;
                if ( !v188 )
                  break;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v193,
                  v188,
                  (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = v193;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v153,
                        (EventDropItemUpValInfo_o *)i.fields._current,
                        0LL) )
                {
                  v150 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &i,
                           (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v150 )
                    break;
                  v152 = *p_eventMargeUpValInfoList;
                  if ( !*p_eventMargeUpValInfoList )
                    sub_1BAB678(v150, v151);
                  if ( v136 >= v152[6] )
                    sub_1BAB680(v150, v151);
                  v153 = *(EventMemberMargeUpValInfo_o **)&v152[2 * v136 + 8];
                  if ( !v153 )
                    sub_1BAB678(0LL, v151);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &i,
                  (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( !v142 )
                  break;
                seed = EventMemberMargeUpValInfo__IsEmpry(v142, 0LL);
                if ( (seed & 1) != 0 )
                {
                  v67 = partyItema;
                }
                else
                {
                  servantName = v142->fields.servantName;
                  v155 = *(_BYTE *)(v189 + 128);
                  v156 = sub_1BAB668(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v156 + 136) = 1;
                  ListViewItem___ctor_41102532((ListViewItem_o *)v156, v68, 0LL);
                  *(_QWORD *)(v156 + 112) = servantName;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v156 + 112), (int32_t)servantName, v157, v158);
                  *(_BYTE *)(v156 + 120) = v155;
                  *(_DWORD *)(v156 + 136) = 1;
                  *(float *)(v156 + 92) = v42;
                  *(float *)(v156 + 96) = v43;
                  *(float *)(v156 + 100) = v44;
                  v161 = v37->fields.seed;
                  if ( !v161 )
                    break;
                  seed = (__int64)v37->fields.itemList;
                  if ( !seed )
                    break;
                  y = v161->fields.arrangementPich.fields.y;
                  v163 = *(_QWORD *)(seed + 16);
                  v164 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(seed + 28);
                  if ( !v163 )
                    break;
                  v165 = *(int *)(seed + 24);
                  if ( (unsigned int)v165 >= *(_DWORD *)(v163 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)seed,
                      (Il2CppObject *)v156,
                      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v166 = v163 + 8 * v165;
                    *(_DWORD *)(seed + 24) = v165 + 1;
                    *(_QWORD *)(v166 + 32) = v156;
                    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v166 + 32), v156, v159, v160);
                  }
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v142, 0LL);
                  if ( !seed )
                    break;
                  v167 = seed;
                  ++v68;
                  v168 = v43 + y;
                  if ( (int)*(_QWORD *)(seed + 24) >= 1 )
                  {
                    v169 = 0;
                    v170 = 0LL;
                    v171 = seed + 32;
                    v191 = (unsigned int)*(_QWORD *)(seed + 24) - 1LL;
                    while ( 1 )
                    {
                      v172 = *(_QWORD *)(v171 + 8 * v170);
                      if ( !v172 || *(_DWORD *)(v172 + 60) != 111 )
                        goto LABEL_133;
                      if ( !*(_BYTE *)(v189 + 128) )
                      {
                        seed = *(_QWORD *)(v189 + 176);
                        if ( !seed )
                          goto LABEL_159;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v189 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_133:
                          if ( v170 >= *(unsigned int *)(v167 + 24) )
                            goto LABEL_160;
                          v173 = *(_QWORD *)(v171 + 8 * v170);
                          v156 = sub_1BAB668(PartyOrganizationEventPointListViewItem_TypeInfo);
                          *(_DWORD *)(v156 + 136) = 1;
                          ListViewItem___ctor_41102532((ListViewItem_o *)v156, v68, 0LL);
                          *(_QWORD *)(v156 + 128) = v173;
                          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v156 + 128), v173, v174, v175);
                          *(_DWORD *)(v156 + 136) = 1;
                          *(float *)(v156 + 92) = v42;
                          *(float *)(v156 + 96) = v168;
                          *(float *)(v156 + 100) = v44;
                          v178 = this->fields.seed;
                          if ( !v178 )
                            goto LABEL_159;
                          seed = (__int64)this->fields.itemList;
                          if ( !seed )
                            goto LABEL_159;
                          v179 = v178->fields.arrangementPich.fields.y;
                          v180 = *(_QWORD *)(seed + 16);
                          v181 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                          ++*(_DWORD *)(seed + 28);
                          if ( !v180 )
                            goto LABEL_159;
                          v182 = *(int *)(seed + 24);
                          if ( (unsigned int)v182 >= *(_DWORD *)(v180 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)seed,
                              (Il2CppObject *)v156,
                              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v183 = v180 + 8 * v182;
                            *(_DWORD *)(seed + 24) = v182 + 1;
                            *(_QWORD *)(v183 + 32) = v156;
                            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v183 + 32), v156, v176, v177);
                          }
                          ++v68;
                          v168 = v168 + v179;
                          ++v169;
                        }
                      }
                      if ( v191 == v170 )
                        break;
                      if ( ++v170 >= *(unsigned int *)(v167 + 24) )
                        goto LABEL_160;
                    }
                    if ( v169 )
                    {
                      v37 = this;
                      v67 = partyItema;
                      v43 = v168 + -8.0;
                      goto LABEL_150;
                    }
                    v37 = this;
                  }
                  v67 = partyItema;
                  seed = (__int64)v37->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)seed,
                           (Il2CppObject *)v156,
                           (const MethodInfo_354EDE4 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v184 = v37->fields.seed;
                  if ( !v184 )
                    break;
                  v43 = v168 - v184->fields.arrangementPich.fields.y;
                }
LABEL_150:
                v135 = eventUpValList;
                ++v136;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_159:
    sub_1BAB678(seed, max_length);
  }
LABEL_155:
  emptyMessageLabel = v37->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10259/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_159;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
  ListViewManager__DispItem((ListViewManager_o *)v37, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.eventMargeUpValInfoList = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4);
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

  if ( (byte_4AB1B2A & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BAB41C(&PartyOrganizationEventPointListViewItem_TypeInfo, v5);
    byte_4AB1B2A = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  EventUpValInfo_array *v35; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4AB1B28 & 1) == 0 )
  {
    sub_1BAB41C(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v9);
    byte_4AB1B28 = 1;
  }
  v35 = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v16 = (EventPartyMargeUpValInfo_o *)sub_1BAB668(EventPartyMargeUpValInfo_TypeInfo);
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
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v27;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
          }
        }
        v24 = *((_DWORD *)v25 + 6);
        if ( (int)++v26 >= v24 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1BAB680(EventUpVal, v12);
    }
  }
LABEL_28:
  if ( !v10 )
LABEL_30:
    sub_1BAB678(EventUpVal, v12);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v10,
                                            (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4AB1B2F & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB1B2F = 1;
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
          sub_1BAB678(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4AB1B27 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4AB1B27 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_1BAB680(Instance, v14);
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
                                       (const MethodInfo_2FBF4DC *)Method_System_Array_IndexOf_int___);
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
        sub_1BAB678(Instance, v14);
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

  if ( (byte_4AB1B2D & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v8);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v11);
    sub_1BAB41C(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v13);
    byte_4AB1B2D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BAB678(v19, v20);
      PartyOrganizationEventPointListViewObject__Init_32312972(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_32311860(
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

  if ( (byte_4AB1B2E & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v6);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v9);
    sub_1BAB41C(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v10);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v11);
    byte_4AB1B2E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BAB678(v17, v18);
      PartyOrganizationEventPointListViewObject__Init_32312364(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyOrganizationEventPointListViewManager__SetMode_32311328(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32311328(
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

  if ( (byte_4AB1B2C & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v6);
    sub_1BAB41C(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v7);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v8);
    byte_4AB1B2C = 1;
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
            (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
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
                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v18 = v15->fields._size;
          v19 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v20 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
          PartyOrganizationEventPointListViewObject__Init_32312364(v19, v22, v20, v21);
          if ( ++v16 >= v15->fields._size )
            return;
        }
      }
      sub_1BAB678(ClippingObjectList, v13);
    case 2:
      v11 = 3;
      goto LABEL_17;
    case 1:
      v11 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_32311860(this, v11, v10);
      break;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32311808(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyOrganizationEventPointListViewManager__SetMode_32311328(this, mode, v6);
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
  if ( (byte_4AB1B2B & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1BAB41C(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             obj);
    byte_4AB1B2B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1BAB678(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_32311204(
    (PartyOrganizationEventPointListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


bool __fastcall PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        EventDropItemUpValInfo_array **campaignFriendshipUpPoints,
        PartyListViewItem_o *partyItem,
        int32_t index,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v30; // x19
  void *HeroineData; // x0
  __int64 v32; // x1
  System_Object_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  PartyOrganizationListViewItem_o *v36; // x22
  Il2CppObject *Master_object; // x23
  const MethodInfo *v39; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x19
  __int64 v42; // x8
  unsigned __int64 v43; // x28
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v44; // x20
  int32_t Item3; // w21
  int32_t Item2; // w23
  int32_t Item1; // w19
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x24
  PartyOrganizationEventPointListViewManager___c_c *v49; // x0
  System_Func_object__object__o *_9__30_0; // x25
  Il2CppObject *v51; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v55; // x0
  PartyOrganizationEventPointListViewManager___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x25
  System_Func_object__bool__o *_9__30_1; // x26
  Il2CppObject *v59; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x25
  PartyOrganizationEventPointListViewManager___c_c *v64; // x0
  System_Func_object__object__o *_9__30_2; // x26
  Il2CppObject *v66; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v70; // x0
  PartyOrganizationEventPointListViewManager___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x24
  System_Func_object__bool__o *_9__30_3; // x26
  Il2CppObject *v74; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x27
  __int64 v79; // x24
  __int64 v80; // x26
  int32_t v81; // w2
  int32_t v82; // w3
  int32_t v83; // w2
  int32_t v84; // w3
  EventDropUpValInfo_o *v85; // x23
  bool v86; // zf
  __int64 v87; // x22
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_Object_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  Il2CppClass **v97; // x0
  System_Object_array *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  ServantStatusBattleListViewItem_o *v101; // [xsp+8h] [xbp-88h]
  int32_t member; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_object__o *v103; // [xsp+18h] [xbp-78h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v104; // [xsp+28h] [xbp-68h]

  if ( (byte_4AB1B30 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_EventMaster___, campaignFriendshipUpPoints);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1BAB41C(&DataManager_TypeInfo, v9);
    sub_1BAB41C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___, v11);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Single_string___, v12);
    sub_1BAB41C(&EventDropItemUpValInfo_TypeInfo, v13);
    sub_1BAB41C(&EventDropUpValInfo_TypeInfo, v14);
    sub_1BAB41C(&System_Func_EventEntity_ScriptData__string__TypeInfo, v15);
    sub_1BAB41C(&System_Func_string__bool__TypeInfo, v16);
    sub_1BAB41C(&FunctionEntity_TypeInfo, v17);
    sub_1BAB41C(&FunctionGroupEntity_TypeInfo, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v20);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v21);
    sub_1BAB41C(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v22);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BAB41C(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
      v24);
    sub_1BAB41C(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
      v25);
    sub_1BAB41C(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
      v26);
    sub_1BAB41C(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
      v27);
    sub_1BAB41C(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v28);
    sub_1BAB41C(&StringLiteral_1/*""*/, v29);
    byte_4AB1B30 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v30 )
    goto LABEL_76;
  v33 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *campaignFriendshipUpPoints = (EventDropItemUpValInfo_array *)v33;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)campaignFriendshipUpPoints, (int32_t)v33, v34, v35);
  if ( !partyItem )
    goto LABEL_76;
  HeroineData = PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_76;
  v36 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*((_QWORD *)HeroineData + 14) || *((_BYTE *)HeroineData + 128) || !*((_QWORD *)HeroineData + 42) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v36, v39);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  HeroineData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(SvtId, 0LL);
  if ( !Master_object )
    goto LABEL_76;
  HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)Master_object, (int32_t)HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = (void *)UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( ((unsigned __int8)HeroineData & 1) == 0 )
      return 0;
  }
  v103 = v30;
  FriendshipUpValTuple_k__BackingField = v36->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  v101 = (ServantStatusBattleListViewItem_o *)campaignFriendshipUpPoints;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_76;
  v42 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v42 >= 1 )
  {
    v43 = 0LL;
    v44 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v104 = v36->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v43 >= (unsigned int)v42 )
        sub_1BAB680(HeroineData, v32);
      Item3 = v44[-1].fields.Item3;
      if ( Item3 < 1 )
        goto LABEL_73;
      Item2 = v44[-1].fields.Item2;
      Item1 = v44->fields.Item1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      HeroineData = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !HeroineData )
        goto LABEL_76;
      HeroineData = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)HeroineData,
                      Item2,
                      (const MethodInfo_3163D90 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !HeroineData )
        goto LABEL_76;
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)HeroineData + 15);
      if ( !v48 )
        goto LABEL_76;
      if ( v48[1].monitor )
      {
        v49 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v49 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_0 = (System_Func_object__object__o *)v49->static_fields->__9__30_0;
        if ( !_9__30_0 )
        {
          if ( !v49->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v49);
            v49 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v51 = (Il2CppObject *)v49->static_fields->__9;
          _9__30_0 = (System_Func_object__object__o *)sub_1BAB668(System_Func_EventEntity_ScriptData__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__30_0,
            v51,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
            0LL);
          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v53, v54);
        }
        v55 = System_Linq_Enumerable__Select_object__object_(
                v48,
                (System_Func_TSource__TResult__o *)_9__30_0,
                (const MethodInfo_2EF4318 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
        v56 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v56 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_1 = (System_Func_object__bool__o *)v56->static_fields->__9__30_1;
        if ( !_9__30_1 )
        {
          if ( !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v56 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v59 = (Il2CppObject *)v56->static_fields->__9;
          _9__30_1 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_string__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__30_1,
            v59,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
            0LL);
          v60 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          v60->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v60->__9__30_1, (int32_t)_9__30_1, v61, v62);
        }
        v63 = System_Linq_Enumerable__Single_object__49257428(
                v57,
                (System_Func_TSource__bool__o *)_9__30_1,
                (const MethodInfo_2EF9BD4 *)Method_System_Linq_Enumerable_Single_string___);
        if ( v48[1].monitor )
        {
          v64 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v64 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_2 = (System_Func_object__object__o *)v64->static_fields->__9__30_2;
          if ( !_9__30_2 )
          {
            if ( !v64->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v64);
              v64 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v66 = (Il2CppObject *)v64->static_fields->__9;
            _9__30_2 = (System_Func_object__object__o *)sub_1BAB668(System_Func_EventEntity_ScriptData__string__TypeInfo);
            System_Func_object__object____ctor(
              _9__30_2,
              v66,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
              0LL);
            v67 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v67->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v67->__9__30_2, (int32_t)_9__30_2, v68, v69);
          }
          v70 = System_Linq_Enumerable__Select_object__object_(
                  v48,
                  (System_Func_TSource__TResult__o *)_9__30_2,
                  (const MethodInfo_2EF4318 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v71 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v72 = (System_Collections_Generic_IEnumerable_TSource__o *)v70;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v71 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_3 = (System_Func_object__bool__o *)v71->static_fields->__9__30_3;
          if ( !_9__30_3 )
          {
            if ( !v71->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v71);
              v71 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v74 = (Il2CppObject *)v71->static_fields->__9;
            _9__30_3 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_string__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__30_3,
              v74,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
              0LL);
            v75 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v75->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v75->__9__30_3, (int32_t)_9__30_3, v76, v77);
          }
          v78 = System_Linq_Enumerable__Single_object__49257428(
                  v72,
                  (System_Func_TSource__bool__o *)_9__30_3,
                  (const MethodInfo_2EF9BD4 *)Method_System_Linq_Enumerable_Single_string___);
          goto LABEL_56;
        }
      }
      else
      {
        v63 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      v78 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_56:
      v79 = sub_1BAB668(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v79, 0LL);
      if ( !v79 )
        goto LABEL_76;
      *(_DWORD *)(v79 + 16) = -2;
      *(_QWORD *)(v79 + 24) = 111LL;
      v80 = sub_1BAB668(FunctionGroupEntity_TypeInfo);
      FunctionGroupEntity___ctor((FunctionGroupEntity_o *)v80, 0LL);
      if ( !v80 )
        goto LABEL_76;
      *(_DWORD *)(v80 + 16) = -2;
      *(_DWORD *)(v80 + 20) = Item2;
      *(_DWORD *)(v80 + 24) = 0;
      *(_QWORD *)(v80 + 40) = v63;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v80 + 40), (int32_t)v63, v81, v82);
      *(_QWORD *)(v80 + 32) = v78;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v80 + 32), (int32_t)v78, v83, v84);
      *(_BYTE *)(v80 + 56) = 1;
      v85 = (EventDropUpValInfo_o *)sub_1BAB668(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v85, 0, (FunctionEntity_o *)v79, 0LL);
      if ( Item1 == 2 )
      {
        FriendshipUpValTuple_k__BackingField = v104;
        if ( !v85 )
          goto LABEL_76;
        EventDropUpValInfo__SetRateCount(v85, Item3, 0, 0, 0LL);
      }
      else
      {
        v86 = Item1 == 1;
        FriendshipUpValTuple_k__BackingField = v104;
        if ( v86 )
        {
          if ( !v85 )
            goto LABEL_76;
          EventDropUpValInfo__SetAddCount(v85, Item3, 0, 0, 0LL);
        }
        else if ( !v85 )
        {
          goto LABEL_76;
        }
      }
      if ( v85->fields.rateCount > 0 || v85->fields.addCount >= 1 )
      {
        v87 = sub_1BAB668(EventDropItemUpValInfo_TypeInfo);
        EventDropItemUpValInfo___ctor((EventDropItemUpValInfo_o *)v87, member, v85, 0, 0LL);
        if ( !v87 )
          goto LABEL_76;
        *(_QWORD *)(v87 + 40) = v80;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v87 + 40), v80, v88, v89);
        *(_QWORD *)(v87 + 32) = v80;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v87 + 32), v80, v90, v91);
        *(_DWORD *)(v87 + 56) = *(_DWORD *)(v79 + 28);
        items = v103->fields._items;
        v95 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
        ++v103->fields._version;
        if ( !items )
          goto LABEL_76;
        size = v103->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v103,
            (Il2CppObject *)v87,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
        }
        else
        {
          v97 = &items->obj.klass + size;
          v103->fields._size = size + 1;
          v97[4] = (Il2CppClass *)v87;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v97 + 4), v87, v92, v93);
        }
      }
LABEL_73:
      LODWORD(v42) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v43;
      ++v44;
    }
    while ( (__int64)v43 < (int)v42 );
  }
  v98 = System_Collections_Generic_List_object___ToArray(
          v103,
          (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  v101->klass = (ServantStatusBattleListViewItem_c *)v98;
  sub_1BAB3C0(v101, (int32_t)v98, v99, v100);
  if ( !v101->klass )
LABEL_76:
    sub_1BAB678(HeroineData, v32);
  return LODWORD(v101->klass->_1.namespaze) != 0;
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

  if ( (byte_4AB1B21 & 1) == 0 )
  {
    sub_1BAB41C(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB1B21 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BAB938(v7);
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

  if ( (byte_4AB1B23 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB1B23 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BAB938(v7);
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
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AB1B26 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB1B26 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BAB678(0LL, v18);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BAB678(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41118488((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BAB678(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BAB678(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BAB678(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BAB678(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB1B25 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB1B25 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BAB678(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BAB678(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4AB1B22 & 1) == 0 )
  {
    sub_1BAB41C(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB1B22 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BAB938(v7);
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

  if ( (byte_4AB1B24 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB1B24 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BAB938(v7);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19E94D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E947C;
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
  if ( (byte_4AB1B31 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9);
    byte_4AB1B31 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v14, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  int32_t v4; // w3

  if ( (byte_4AB1B32 & 1) == 0 )
  {
    sub_1BAB41C(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v1);
    byte_4AB1B32 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields,
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


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1BAB678(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4AB1B33 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, names);
    byte_4AB1B33 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1BAB678(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4AB1B34 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, names);
    byte_4AB1B34 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}