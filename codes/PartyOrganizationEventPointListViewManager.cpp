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
  System_Collections_Generic_List_int__o *v4; // x23
  System_Collections_Generic_List_T__o *v5; // x0
  __int64 seed; // x0
  MethodInfo *max_length; // x1
  ListViewManager_o *v8; // x21
  float v9; // s0
  float v10; // s1
  float v11; // s2
  EventUpValInfo_array *v12; // x8
  float v13; // s8
  float v14; // s10
  float v15; // s9
  unsigned __int64 v16; // x22
  EventUpValInfo_o *v17; // x8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  _BOOL8 v21; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  PartyOrganizationEventPointListViewManager_o *v26; // x0
  const MethodInfo *v27; // x4
  EventDropItemUpValInfo_array *v28; // x21
  signed int v29; // w9
  int32_t v30; // w8
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  unsigned int *v35; // x22
  PartyListViewItem_o *v36; // x27
  int32_t v37; // w23
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  __int64 v41; // x1
  EventMargeItemUpValInfo_array *v42; // x25
  int32_t v43; // w24
  System_String_o *v44; // x27
  __int64 v45; // x26
  __int64 v46; // x0
  __int64 v47; // x1
  struct ListViewItemSeed_o *v48; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v50; // s10
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x8
  __int64 v55; // x0
  __int64 v56; // x1
  UnityEngine_GameObject_o *v57; // x0
  PartyOrganizationEventPointListViewManager_o *v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x4
  int v61; // w8
  int32_t v62; // w9
  EventMargeItemUpValInfo_o *v63; // x27
  __int64 v64; // x26
  __int64 v65; // x0
  __int64 v66; // x1
  struct ListViewItemSeed_o *v67; // x8
  System_Collections_Generic_List_object__o *v68; // x0
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x8
  UnityEngine_GameObject_o *monitor; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v75; // x1
  __int64 v76; // x0
  __int64 v77; // x1
  struct ListViewItemSeed_o *v78; // x8
  UnityEngine_GameObject_o *v79; // x0
  EventUpValInfo_array *v80; // x8
  unsigned __int64 v81; // x24
  EventDropItemUpValInfo_array **v82; // x25
  unsigned __int64 v83; // x9
  Il2CppClass **v84; // x9
  EventUpValInfo_o *v85; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v88; // x1
  EventDropItemUpValInfo_array *v89; // x26
  __int64 v90; // x0
  unsigned int **p_indicator; // x24
  EventUpValInfo_array *v92; // x8
  unsigned __int64 v93; // x25
  __int64 v94; // x19
  ServantEntity_o *v95; // x28
  System_String_o *SvtNameText; // x0
  char v97; // w29
  System_String_o *v98; // x20
  EventMemberMargeUpValInfo_o *v99; // x27
  unsigned int *v100; // x19
  unsigned int *v101; // x0
  EventUpValInfo_array *v102; // x8
  unsigned __int64 v103; // x19
  unsigned int *v104; // x8
  _BOOL8 v105; // x0
  __int64 v106; // x1
  unsigned int *v107; // x8
  EventMemberMargeUpValInfo_o *v108; // x0
  struct System_String_o *servantName; // x20
  char v110; // w19
  __int64 v111; // x28
  struct ListViewItemSeed_o *v112; // x8
  float y; // s12
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  __int64 v118; // x27
  float v119; // s10
  int v120; // w29
  unsigned __int64 v121; // x21
  __int64 v122; // x19
  __int64 v123; // x8
  __int64 v124; // x20
  struct ListViewItemSeed_o *v125; // x8
  float v126; // s12
  __int64 v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  __int64 v130; // x8
  struct ListViewItemSeed_o *v131; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v133; // x0
  __int64 v134; // x0
  System_Collections_Generic_List_object__o *v135; // [xsp+10h] [xbp-140h]
  __int64 v136; // [xsp+18h] [xbp-138h]
  __int64 v138; // [xsp+28h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+38h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v142; // [xsp+70h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+90h] [xbp-C0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t eventId; // [xsp+BCh] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+C8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD81C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_1C21E38(&EventDropItemUpValInfo_____TypeInfo);
    sub_1C21E38(&EventMemberMargeUpValInfo___TypeInfo);
    sub_1C21E38(&EventMemberMargeUpValInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_1C21E38(&StringLiteral_10551/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_1C21E38(&StringLiteral_10451/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_4BD81C4 = 1;
  }
  eventUpValList = 0LL;
  eventId = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v143, 0, sizeof(v143));
  memset(&v142, 0, sizeof(v142));
  memset(&i, 0, sizeof(i));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v135 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v135,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v5 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v5,
    (const MethodInfo_35F89A8 *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_159;
  v8 = (ListViewManager_o *)this;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0LL) )
  {
    seed = (__int64)this->fields.seed;
    partyItema = partyItem;
    if ( seed )
    {
      *(UnityEngine_Vector3_o *)&v9 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
      v12 = eventUpValList;
      if ( eventUpValList )
      {
        v13 = v9;
        v14 = v10;
        v15 = v11;
        v16 = 0LL;
        while ( 1 )
        {
          max_length = (MethodInfo *)v12->max_length;
          if ( (__int64)v16 >= (int)max_length )
            break;
          if ( v16 >= (unsigned __int64)max_length )
            goto LABEL_160;
          v17 = v12->m_Items[v16];
          if ( v17 )
          {
            seed = (__int64)v17->fields.dropList;
            if ( !seed )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v140,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v143 = v140;
            while ( 1 )
            {
              v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v143,
                      (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v18 )
                break;
              current = v143.fields._current;
              if ( !v143.fields._current )
                sub_1C22094(v18, v19);
              if ( !v4 )
                sub_1C22094(v18, v19);
              v21 = System_Collections_Generic_List_int___Contains(
                      v4,
                      (int32_t)v143.fields._current[1].klass,
                      (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v21 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v4->fields._items;
                v24 = Method_System_Collections_Generic_List_int__Add__;
                ++v4->fields._version;
                if ( !items )
                  sub_1C22094(v21, klass_low);
                size = v4->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v4,
                    klass_low,
                    *(const MethodInfo_3632090 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v4->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v143,
              (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v26,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v16,
                     v27);
            if ( (seed & 1) != 0 )
            {
              v28 = campaignFriendshipUpPoints;
              eventId = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_159;
              v29 = campaignFriendshipUpPoints->max_length;
              if ( v29 >= 1 )
              {
                v30 = 0;
                while ( v30 < (unsigned int)v29 )
                {
                  if ( !v135 )
                    goto LABEL_159;
                  max_length = (MethodInfo *)v28->m_Items[v30];
                  v31 = v135->fields._items;
                  v32 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
                  ++v135->fields._version;
                  if ( !v31 )
                    goto LABEL_159;
                  v33 = v135->fields._size;
                  if ( (unsigned int)v33 >= v31->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v135,
                      (Il2CppObject *)max_length,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v34 = &v31->obj.klass + v33;
                    v135->fields._size = v33 + 1;
                    v34[4] = (Il2CppClass *)max_length;
                    seed = sub_1C21DDC(v34 + 4, max_length);
                  }
                  v30 = eventId + 1;
                  eventId = v30;
                  v29 = v28->max_length;
                  if ( v30 >= v29 )
                    goto LABEL_32;
                }
LABEL_160:
                sub_1C2209C(seed, max_length);
              }
            }
          }
LABEL_32:
          v12 = eventUpValList;
          v8 = (ListViewManager_o *)this;
          ++v16;
          if ( !eventUpValList )
            goto LABEL_159;
        }
        seed = sub_1C21EE0(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v4 )
        {
          v35 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v140,
            v4,
            (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v36 = partyItem;
          v37 = 0;
          v142 = v140;
          while ( 1 )
          {
            v38 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v142,
                    (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v38 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v38,
                                    (int32_t)v142.fields._current,
                                    v36,
                                    v39);
            v42 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_1C22094(0LL, v41);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v43 = v37 + 1;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10551/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
              v45 = sub_1C22084(PartyOrganizationEventPointListViewItem_TypeInfo);
              *(_DWORD *)(v45 + 136) = 1;
              ListViewItem___ctor_41996612((ListViewItem_o *)v45, v37, 0LL);
              *(_QWORD *)(v45 + 112) = v44;
              v46 = sub_1C21DDC(v45 + 112, v44);
              *(_BYTE *)(v45 + 120) = 0;
              *(_DWORD *)(v45 + 136) = 0;
              *(float *)(v45 + 92) = v13;
              *(float *)(v45 + 96) = v14;
              *(float *)(v45 + 100) = v15;
              v48 = v8->fields.seed;
              if ( !v48 )
                sub_1C22094(v46, v47);
              itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
              v36 = partyItema;
              v50 = v14 + v48->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_1C22094(0LL, v47);
              v51 = itemList->fields._items;
              v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++itemList->fields._version;
              if ( !v51 )
                sub_1C22094(itemList, v47);
              v53 = itemList->fields._size;
              if ( (unsigned int)v53 >= v51->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  itemList,
                  (Il2CppObject *)v45,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
              }
              else
              {
                v54 = &v51->obj.klass + v53;
                itemList->fields._size = v53 + 1;
                v54[4] = (Il2CppClass *)v45;
                v55 = sub_1C21DDC(v54 + 4, v45);
              }
              eventId = 0;
              v61 = v42->max_length;
              if ( v61 < 1 )
              {
                ++v37;
              }
              else
              {
                v62 = 0;
                do
                {
                  if ( v62 >= (unsigned int)v61 )
                    sub_1C2209C(v55, v56);
                  v63 = v42->m_Items[v62];
                  v37 = v43 + 1;
                  v64 = sub_1C22084(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v64 + 136) = 1;
                  ListViewItem___ctor_41996612((ListViewItem_o *)v64, v43, 0LL);
                  *(_QWORD *)(v64 + 128) = v63;
                  v65 = sub_1C21DDC(v64 + 128, v63);
                  *(_DWORD *)(v64 + 136) = 0;
                  *(float *)(v64 + 92) = v13;
                  *(float *)(v64 + 96) = v50;
                  *(float *)(v64 + 100) = v15;
                  v67 = v8->fields.seed;
                  if ( !v67 )
                    sub_1C22094(v65, v66);
                  v68 = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
                  v36 = partyItema;
                  v50 = v50 + v67->fields.arrangementPich.fields.y;
                  if ( !v68 )
                    sub_1C22094(0LL, v66);
                  v69 = v68->fields._items;
                  v70 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v68->fields._version;
                  if ( !v69 )
                    sub_1C22094(v68, v66);
                  v71 = v68->fields._size;
                  if ( (unsigned int)v71 >= v69->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v68,
                      (Il2CppObject *)v64,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v72 = &v69->obj.klass + v71;
                    v68->fields._size = v71 + 1;
                    v72[4] = (Il2CppClass *)v64;
                    v55 = sub_1C21DDC(v72 + 4, v64);
                  }
                  ++v43;
                  v62 = eventId + 1;
                  eventId = v62;
                  v61 = v42->max_length;
                }
                while ( v62 < v61 );
              }
              monitor = (UnityEngine_GameObject_o *)v8[1].monitor;
              if ( !monitor )
                sub_1C22094(0LL, v56);
              transform = UnityEngine_GameObject__get_transform(monitor, 0LL);
              if ( !transform )
                sub_1C22094(0LL, v75);
              v147.fields.x = v13;
              v147.fields.y = v50;
              v147.fields.z = v15;
              UnityEngine_Transform__set_localPosition(transform, v147, 0LL);
              v78 = v8->fields.seed;
              if ( !v78 )
                sub_1C22094(v76, v77);
              v79 = (UnityEngine_GameObject_o *)v8[1].monitor;
              v14 = v50 + v78->fields.arrangementPich.fields.y;
              if ( !v79 )
                sub_1C22094(0LL, v77);
              UnityEngine_GameObject__SetActive(v79, 1, 0LL);
            }
            else
            {
              v57 = (UnityEngine_GameObject_o *)v8[1].monitor;
              if ( !v57 )
                sub_1C22094(0LL, v41);
              UnityEngine_GameObject__SetActive(v57, 0, 0LL);
            }
            v80 = eventUpValList;
            if ( !eventUpValList )
LABEL_81:
              sub_1C22094(v58, v59);
            v81 = 0LL;
            v82 = (EventDropItemUpValInfo_array **)(v35 + 8);
            while ( 1 )
            {
              v83 = v80->max_length;
              if ( (__int64)v81 >= (int)v83 )
                break;
              if ( v81 >= v83 )
                sub_1C2209C(v58, v59);
              v84 = &v80->obj.klass + v81;
              v85 = (EventUpValInfo_o *)v84[4];
              if ( v85 )
              {
                questRestrictionInfo = v36->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_1C22094(v58, v59);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v58,
                  v81,
                  (EventUpValInfo_o *)v84[4],
                  questRestrictionInfo->fields.eventId,
                  v60);
                DropItemList = EventUpValInfo__GetDropItemList(v85, v81, 0LL);
                if ( !v35 )
                  sub_1C22094(DropItemList, v88);
                v89 = DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_1C21F74(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v35 + 64LL));
                  if ( !DropItemList )
                  {
                    v133 = sub_1C220B8();
                    sub_1C21F60(v133, 0LL);
                  }
                }
                if ( v81 >= v35[6] )
                  sub_1C2209C(DropItemList, v88);
                *v82 = v89;
                v58 = (PartyOrganizationEventPointListViewManager_o *)sub_1C21DDC(v82, v89);
                v80 = eventUpValList;
              }
              ++v81;
              ++v82;
              if ( !v80 )
                goto LABEL_81;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v142,
            (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( eventUpValList )
          {
            v90 = sub_1C21EE0(EventMemberMargeUpValInfo___TypeInfo, eventUpValList->max_length);
            p_indicator = (unsigned int **)&v8[1].fields.indicator;
            v8[1].fields.indicator = (struct ListViewIndicator_o *)v90;
            seed = sub_1C21DDC(&v8[1].fields.indicator, v90);
            v92 = eventUpValList;
            if ( eventUpValList )
            {
              v93 = 0LL;
              do
              {
                if ( (__int64)v93 >= (int)v92->max_length )
                  goto LABEL_155;
                seed = (__int64)PartyListViewItem__GetMember(v36, v93, 0LL);
                if ( !seed )
                  break;
                v94 = seed;
                if ( *(_BYTE *)(seed + 128) )
                {
                  if ( !*(_QWORD *)(seed + 120) )
                    goto LABEL_150;
                }
                else if ( !*(_QWORD *)(seed + 112) )
                {
                  goto LABEL_150;
                }
                v95 = *(ServantEntity_o **)(seed + 176);
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                max_length);
                v136 = v94;
                v97 = *(_BYTE *)(v94 + 128);
                v98 = SvtNameText;
                v99 = (EventMemberMargeUpValInfo_o *)sub_1C22084(EventMemberMargeUpValInfo_TypeInfo);
                EventMemberMargeUpValInfo___ctor(v99, v93, v95, v98, v97, 0LL);
                v100 = *p_indicator;
                if ( !*p_indicator )
                  break;
                if ( v99 )
                {
                  seed = sub_1C21F74(v99, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
                  if ( !seed )
                  {
                    v134 = sub_1C220B8();
                    sub_1C21F60(v134, 0LL);
                  }
                }
                if ( v93 >= v100[6] )
                  goto LABEL_160;
                v101 = &v100[2 * v93];
                *((_QWORD *)v101 + 4) = v99;
                seed = sub_1C21DDC(v101 + 8, v99);
                v102 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v103 = 0LL;
                while ( (__int64)v103 < (int)v102->max_length )
                {
                  if ( !v35 )
                    goto LABEL_159;
                  if ( v103 >= v35[6] )
                    goto LABEL_160;
                  max_length = *(MethodInfo **)&v35[2 * v103 + 8];
                  if ( max_length )
                  {
                    v104 = *p_indicator;
                    if ( !*p_indicator )
                      goto LABEL_159;
                    if ( v93 >= v104[6] )
                      goto LABEL_160;
                    seed = *(_QWORD *)&v104[2 * v93 + 8];
                    if ( !seed )
                      goto LABEL_159;
                    EventMemberMargeUpValInfo__Add(
                      (EventMemberMargeUpValInfo_o *)seed,
                      (EventDropItemUpValInfo_array *)max_length,
                      0LL);
                    v102 = eventUpValList;
                  }
                  ++v103;
                  if ( !v102 )
                    goto LABEL_159;
                }
                seed = (__int64)v135;
                if ( !v135 )
                  break;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v140,
                  v135,
                  (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = v140;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v108,
                        (EventDropItemUpValInfo_o *)i.fields._current,
                        0LL) )
                {
                  v105 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &i,
                           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v105 )
                    break;
                  v107 = *p_indicator;
                  if ( !*p_indicator )
                    sub_1C22094(v105, v106);
                  if ( v93 >= v107[6] )
                    sub_1C2209C(v105, v106);
                  v108 = *(EventMemberMargeUpValInfo_o **)&v107[2 * v93 + 8];
                  if ( !v108 )
                    sub_1C22094(0LL, v106);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &i,
                  (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( !v99 )
                  break;
                seed = EventMemberMargeUpValInfo__IsEmpry(v99, 0LL);
                if ( (seed & 1) != 0 )
                {
                  v36 = partyItema;
                }
                else
                {
                  servantName = v99->fields.servantName;
                  v110 = *(_BYTE *)(v136 + 128);
                  v111 = sub_1C22084(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v111 + 136) = 1;
                  ListViewItem___ctor_41996612((ListViewItem_o *)v111, v37, 0LL);
                  *(_QWORD *)(v111 + 112) = servantName;
                  seed = sub_1C21DDC(v111 + 112, servantName);
                  *(_BYTE *)(v111 + 120) = v110;
                  *(_DWORD *)(v111 + 136) = 1;
                  *(float *)(v111 + 92) = v13;
                  *(float *)(v111 + 96) = v14;
                  *(float *)(v111 + 100) = v15;
                  v112 = v8->fields.seed;
                  if ( !v112 )
                    break;
                  seed = (__int64)v8->fields.itemList;
                  if ( !seed )
                    break;
                  y = v112->fields.arrangementPich.fields.y;
                  v114 = *(_QWORD *)(seed + 16);
                  v115 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(seed + 28);
                  if ( !v114 )
                    break;
                  v116 = *(int *)(seed + 24);
                  if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)seed,
                      (Il2CppObject *)v111,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v117 = v114 + 8 * v116;
                    *(_DWORD *)(seed + 24) = v116 + 1;
                    *(_QWORD *)(v117 + 32) = v111;
                    sub_1C21DDC(v117 + 32, v111);
                  }
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v99, 0LL);
                  if ( !seed )
                    break;
                  v118 = seed;
                  ++v37;
                  v119 = v14 + y;
                  if ( (int)*(_QWORD *)(seed + 24) >= 1 )
                  {
                    v120 = 0;
                    v121 = 0LL;
                    v122 = seed + 32;
                    v138 = (unsigned int)*(_QWORD *)(seed + 24) - 1LL;
                    while ( 1 )
                    {
                      v123 = *(_QWORD *)(v122 + 8 * v121);
                      if ( !v123 || *(_DWORD *)(v123 + 60) != 111 )
                        goto LABEL_133;
                      if ( !*(_BYTE *)(v136 + 128) )
                      {
                        seed = *(_QWORD *)(v136 + 176);
                        if ( !seed )
                          goto LABEL_159;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v136 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_133:
                          if ( v121 >= *(unsigned int *)(v118 + 24) )
                            goto LABEL_160;
                          v124 = *(_QWORD *)(v122 + 8 * v121);
                          v111 = sub_1C22084(PartyOrganizationEventPointListViewItem_TypeInfo);
                          *(_DWORD *)(v111 + 136) = 1;
                          ListViewItem___ctor_41996612((ListViewItem_o *)v111, v37, 0LL);
                          *(_QWORD *)(v111 + 128) = v124;
                          seed = sub_1C21DDC(v111 + 128, v124);
                          *(_DWORD *)(v111 + 136) = 1;
                          *(float *)(v111 + 92) = v13;
                          *(float *)(v111 + 96) = v119;
                          *(float *)(v111 + 100) = v15;
                          v125 = this->fields.seed;
                          if ( !v125 )
                            goto LABEL_159;
                          seed = (__int64)this->fields.itemList;
                          if ( !seed )
                            goto LABEL_159;
                          v126 = v125->fields.arrangementPich.fields.y;
                          v127 = *(_QWORD *)(seed + 16);
                          v128 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                          ++*(_DWORD *)(seed + 28);
                          if ( !v127 )
                            goto LABEL_159;
                          v129 = *(int *)(seed + 24);
                          if ( (unsigned int)v129 >= *(_DWORD *)(v127 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)seed,
                              (Il2CppObject *)v111,
                              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v130 = v127 + 8 * v129;
                            *(_DWORD *)(seed + 24) = v129 + 1;
                            *(_QWORD *)(v130 + 32) = v111;
                            seed = sub_1C21DDC(v130 + 32, v111);
                          }
                          ++v37;
                          v119 = v119 + v126;
                          ++v120;
                        }
                      }
                      if ( v138 == v121 )
                        break;
                      if ( ++v121 >= *(unsigned int *)(v118 + 24) )
                        goto LABEL_160;
                    }
                    if ( v120 )
                    {
                      v8 = (ListViewManager_o *)this;
                      v36 = partyItema;
                      v14 = v119 + -8.0;
                      goto LABEL_150;
                    }
                    v8 = (ListViewManager_o *)this;
                  }
                  v36 = partyItema;
                  seed = (__int64)v8->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)seed,
                           (Il2CppObject *)v111,
                           (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v131 = v8->fields.seed;
                  if ( !v131 )
                    break;
                  v14 = v119 - v131->fields.arrangementPich.fields.y;
                }
LABEL_150:
                v92 = eventUpValList;
                ++v93;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_159:
    sub_1C22094(seed, max_length);
  }
LABEL_155:
  emptyMessageLabel = v8->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10451/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_159;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
  ListViewManager__DispItem(v8, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.eventMargeUpValInfoList = 0LL;
  sub_1C21DDC(&this->fields.eventMargeUpValInfoList, 0LL);
}


PartyOrganizationEventPointListViewItem_o *__fastcall PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BD81C5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4BD81C5 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


EventMargeItemUpValInfo_array *__fastcall PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t eventId,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 EventUpVal; // x0
  __int64 v8; // x1
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  EventPartyMargeUpValInfo_o *v12; // x21
  const MethodInfo *v13; // x4
  EventUpValInfo_array *v14; // x8
  unsigned __int64 v15; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v17; // x9
  EventUpValInfo_o *v18; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v20; // w8
  __int64 v21; // x20
  __int64 v22; // x22
  Il2CppObject *v23; // x21
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  EventUpValInfo_array *v29; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4BD81C3 & 1) == 0 )
  {
    sub_1C21E38(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4BD81C3 = 1;
  }
  v29 = 0LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v12 = (EventPartyMargeUpValInfo_o *)sub_1C22084(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v12, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v29, 0LL);
  if ( (EventUpVal & 1) != 0 )
  {
    v14 = v29;
    if ( !v29 )
      goto LABEL_30;
    v15 = 0LL;
    while ( 1 )
    {
      max_length = v14->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
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
        EventUpVal = (__int64)EventUpValInfo__GetDropItemList(v18, v15, 0LL);
        if ( !v12 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v12, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v14 = v29;
      }
      ++v15;
      if ( !v14 )
        goto LABEL_30;
    }
  }
  if ( !v12 )
    goto LABEL_30;
  EventUpVal = (__int64)EventPartyMargeUpValInfo__GetList(v12, 0LL);
  if ( EventUpVal )
  {
    v20 = *(_DWORD *)(EventUpVal + 24);
    v21 = EventUpVal;
    if ( v20 >= 1 )
    {
      v22 = 0LL;
      while ( (unsigned int)v22 < v20 )
      {
        v23 = *(Il2CppObject **)(v21 + 32 + 8 * v22);
        if ( !v23 )
          goto LABEL_30;
        EventUpVal = EventMargeItemUpValInfo__IsServantSelfValInfo(
                       *(EventMargeItemUpValInfo_o **)(v21 + 32 + 8 * v22),
                       0LL);
        if ( (EventUpVal & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_30;
          items = v6->fields._items;
          v25 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_30;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v23,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v23;
            EventUpVal = sub_1C21DDC(v27 + 4, v23);
          }
        }
        v20 = *(_DWORD *)(v21 + 24);
        if ( (int)++v22 >= v20 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C2209C(EventUpVal, v8);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_30:
    sub_1C22094(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4BD81CA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD81CA = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C22094(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C21DDC(&this->fields.callbackFunc2, 0LL);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
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

  if ( (byte_4BD81C2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD81C2 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_33;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0LL);
  if ( Entity )
  {
    v11 = Entity;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
           0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_object )
        goto LABEL_33;
      v13 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   (ServantSkillMaster_o *)MasterData_object,
                   eventUpVal->fields.equipSvtId,
                   0LL);
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
            sub_1C2209C(Instance, v9);
          v17 = *((_QWORD *)v15 + (int)v16 + 4);
          if ( !v17 )
            break;
          if ( *(_DWORD *)(v17 + 48) )
          {
            if ( !v13 )
              break;
            Instance = SkillLvMaster__GetEntity(v13, *(_DWORD *)(v17 + 28), 1, 0LL);
            if ( Instance )
            {
              v18 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0LL);
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
                                       (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v19 = *((_DWORD *)v20 + 6);
                  if ( (int)++v21 >= v19 )
                    goto LABEL_31;
                }
                v24 = *(_QWORD *)(v22 + 24);
                if ( !v24 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v24 + 16), 0LL);
              }
            }
          }
LABEL_31:
          v14 = *((_DWORD *)v15 + 6);
          if ( (int)++v16 >= v14 )
            return;
        }
LABEL_33:
        sub_1C22094(Instance, v9);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD81C8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C21E38(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD81C8 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1C22094(v12, v13);
      PartyOrganizationEventPointListViewObject__Init_33001856(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_33000744(
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

  if ( (byte_4BD81C9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C21E38(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD81C9 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v10, v11);
      PartyOrganizationEventPointListViewObject__Init_33001248(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1C21DDC(&this->fields.callbackFunc, callback);
  PartyOrganizationEventPointListViewManager__SetMode_33000212(this, mode, v6);
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_33000212(
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

  if ( (byte_4BD81C7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_1C21E38(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD81C7 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
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
            (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
            0.0,
            0LL);
          return;
        }
        this->fields.callbackCount = size;
        v12 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v11,
                   v12,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v14 = v11->fields._size;
          v15 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)this,
            Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
            0LL);
          if ( !v15 )
            break;
          if ( v12 >= v14 - 1 )
            v18 = 5;
          else
            v18 = 2;
          PartyOrganizationEventPointListViewObject__Init_33001248(v15, v18, v16, v17);
          if ( ++v12 >= v11->fields._size )
            return;
        }
      }
      sub_1C22094(ClippingObjectList, v9);
    case 2:
      v7 = 3;
      goto LABEL_17;
    case 1:
      v7 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_33000744(this, v7, v6);
      break;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_33000692(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C21DDC(&this->fields.callbackFunc2, callback);
  PartyOrganizationEventPointListViewManager__SetMode_33000212(this, mode, v6);
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
  if ( (byte_4BD81C6 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1C21E38(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_4BD81C6 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_33000088(
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
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 HeroineData; // x0
  __int64 v10; // x1
  System_Object_array *v11; // x0
  PartyOrganizationListViewItem_o *v12; // x22
  Il2CppObject *Master_object; // x23
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x19
  __int64 v18; // x8
  unsigned __int64 v19; // x28
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v20; // x20
  int32_t Item3; // w21
  int32_t Item2; // w23
  int32_t Item1; // w19
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x24
  PartyOrganizationEventPointListViewManager___c_c *v25; // x0
  System_Func_object__object__o *_9__30_0; // x25
  Il2CppObject *v27; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v29; // x0
  PartyOrganizationEventPointListViewManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x25
  System_Func_object__bool__o *_9__30_1; // x26
  Il2CppObject *v33; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v34; // x0
  Il2CppObject *v35; // x25
  PartyOrganizationEventPointListViewManager___c_c *v36; // x0
  System_Func_object__object__o *_9__30_2; // x26
  Il2CppObject *v38; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v39; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v40; // x0
  PartyOrganizationEventPointListViewManager___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x24
  System_Func_object__bool__o *_9__30_3; // x26
  Il2CppObject *v44; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v45; // x0
  Il2CppObject *v46; // x27
  __int64 v47; // x24
  FunctionGroupEntity_o *v48; // x26
  EventDropUpValInfo_o *v49; // x23
  bool v50; // zf
  EventDropItemUpValInfo_o *v51; // x22
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  System_Object_array *v56; // x0
  EventDropItemUpValInfo_array **v57; // [xsp+8h] [xbp-88h]
  int32_t member; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_object__o *v59; // [xsp+18h] [xbp-78h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v60; // [xsp+28h] [xbp-68h]

  if ( (byte_4BD81CB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Single_string___);
    sub_1C21E38(&EventDropItemUpValInfo_TypeInfo);
    sub_1C21E38(&EventDropUpValInfo_TypeInfo);
    sub_1C21E38(&System_Func_EventEntity_ScriptData__string__TypeInfo);
    sub_1C21E38(&System_Func_string__bool__TypeInfo);
    sub_1C21E38(&FunctionEntity_TypeInfo);
    sub_1C21E38(&FunctionGroupEntity_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__);
    sub_1C21E38(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__);
    sub_1C21E38(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__);
    sub_1C21E38(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__);
    sub_1C21E38(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD81CB = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v8 )
    goto LABEL_76;
  v11 = System_Collections_Generic_List_object___ToArray(
          v8,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *campaignFriendshipUpPoints = (EventDropItemUpValInfo_array *)v11;
  HeroineData = sub_1C21DDC(campaignFriendshipUpPoints, v11);
  if ( !partyItem )
    goto LABEL_76;
  HeroineData = (__int64)PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_76;
  v12 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*(_QWORD *)(HeroineData + 112) || *(_BYTE *)(HeroineData + 128) || !*(_QWORD *)(HeroineData + 336) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v12, v15);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  HeroineData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
  if ( !Master_object )
    goto LABEL_76;
  HeroineData = (__int64)UserServantMaster__getHeroineData((UserServantMaster_o *)Master_object, HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( (HeroineData & 1) == 0 )
      return 0;
  }
  v59 = v8;
  FriendshipUpValTuple_k__BackingField = v12->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  v57 = campaignFriendshipUpPoints;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_76;
  v18 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v60 = v12->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v19 >= (unsigned int)v18 )
        sub_1C2209C(HeroineData, v10);
      Item3 = v20[-1].fields.Item3;
      if ( Item3 < 1 )
        goto LABEL_73;
      Item2 = v20[-1].fields.Item2;
      Item1 = v20->fields.Item1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      HeroineData = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !HeroineData )
        goto LABEL_76;
      HeroineData = (__int64)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)HeroineData,
                               Item2,
                               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !HeroineData )
        goto LABEL_76;
      v24 = *(System_Collections_Generic_IEnumerable_TSource__o **)(HeroineData + 120);
      if ( !v24 )
        goto LABEL_76;
      if ( v24[1].monitor )
      {
        v25 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v25 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_0 = (System_Func_object__object__o *)v25->static_fields->__9__30_0;
        if ( !_9__30_0 )
        {
          if ( !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            v25 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v27 = (Il2CppObject *)v25->static_fields->__9;
          _9__30_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_EventEntity_ScriptData__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__30_0,
            v27,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
            0LL);
          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
          sub_1C21DDC(&static_fields->__9__30_0, _9__30_0);
        }
        v29 = System_Linq_Enumerable__Select_object__object_(
                v24,
                (System_Func_TSource__TResult__o *)_9__30_0,
                (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
        v30 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v30 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_1 = (System_Func_object__bool__o *)v30->static_fields->__9__30_1;
        if ( !_9__30_1 )
        {
          if ( !v30->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v30);
            v30 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v33 = (Il2CppObject *)v30->static_fields->__9;
          _9__30_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_string__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__30_1,
            v33,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
            0LL);
          v34 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          v34->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
          sub_1C21DDC(&v34->__9__30_1, _9__30_1);
        }
        v35 = System_Linq_Enumerable__Single_object__50225868(
                v31,
                (System_Func_TSource__bool__o *)_9__30_1,
                (const MethodInfo_2FE62CC *)Method_System_Linq_Enumerable_Single_string___);
        if ( v24[1].monitor )
        {
          v36 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v36 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_2 = (System_Func_object__object__o *)v36->static_fields->__9__30_2;
          if ( !_9__30_2 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v38 = (Il2CppObject *)v36->static_fields->__9;
            _9__30_2 = (System_Func_object__object__o *)sub_1C22084(System_Func_EventEntity_ScriptData__string__TypeInfo);
            System_Func_object__object____ctor(
              _9__30_2,
              v38,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
              0LL);
            v39 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v39->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
            sub_1C21DDC(&v39->__9__30_2, _9__30_2);
          }
          v40 = System_Linq_Enumerable__Select_object__object_(
                  v24,
                  (System_Func_TSource__TResult__o *)_9__30_2,
                  (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v41 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v41 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_3 = (System_Func_object__bool__o *)v41->static_fields->__9__30_3;
          if ( !_9__30_3 )
          {
            if ( !v41->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v41);
              v41 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v44 = (Il2CppObject *)v41->static_fields->__9;
            _9__30_3 = (System_Func_object__bool__o *)sub_1C22084(System_Func_string__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__30_3,
              v44,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
              0LL);
            v45 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v45->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
            sub_1C21DDC(&v45->__9__30_3, _9__30_3);
          }
          v46 = System_Linq_Enumerable__Single_object__50225868(
                  v42,
                  (System_Func_TSource__bool__o *)_9__30_3,
                  (const MethodInfo_2FE62CC *)Method_System_Linq_Enumerable_Single_string___);
          goto LABEL_56;
        }
      }
      else
      {
        v35 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      v46 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_56:
      v47 = sub_1C22084(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v47, 0LL);
      if ( !v47 )
        goto LABEL_76;
      *(_DWORD *)(v47 + 16) = -2;
      *(_QWORD *)(v47 + 24) = 111LL;
      v48 = (FunctionGroupEntity_o *)sub_1C22084(FunctionGroupEntity_TypeInfo);
      FunctionGroupEntity___ctor(v48, 0LL);
      if ( !v48 )
        goto LABEL_76;
      v48->fields.funcId = -2;
      v48->fields.eventId = Item2;
      v48->fields.baseFuncId = 0;
      v48->fields.nameTotal = (struct System_String_o *)v35;
      sub_1C21DDC(&v48->fields.nameTotal, v35);
      v48->fields.name = (struct System_String_o *)v46;
      sub_1C21DDC(&v48->fields.name, v46);
      v48->fields.isDispValue = 1;
      v49 = (EventDropUpValInfo_o *)sub_1C22084(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v49, 0, (FunctionEntity_o *)v47, 0LL);
      if ( Item1 == 2 )
      {
        FriendshipUpValTuple_k__BackingField = v60;
        if ( !v49 )
          goto LABEL_76;
        EventDropUpValInfo__SetRateCount(v49, Item3, 0, 0, 0LL);
      }
      else
      {
        v50 = Item1 == 1;
        FriendshipUpValTuple_k__BackingField = v60;
        if ( v50 )
        {
          if ( !v49 )
            goto LABEL_76;
          EventDropUpValInfo__SetAddCount(v49, Item3, 0, 0, 0LL);
        }
        else if ( !v49 )
        {
          goto LABEL_76;
        }
      }
      if ( v49->fields.rateCount > 0 || v49->fields.addCount >= 1 )
      {
        v51 = (EventDropItemUpValInfo_o *)sub_1C22084(EventDropItemUpValInfo_TypeInfo);
        EventDropItemUpValInfo___ctor(v51, member, v49, 0, 0LL);
        if ( !v51 )
          goto LABEL_76;
        v51->fields.baseFuncGroupEntity = v48;
        sub_1C21DDC(&v51->fields.baseFuncGroupEntity, v48);
        v51->fields.funcGroupEntity = v48;
        HeroineData = sub_1C21DDC(&v51->fields.funcGroupEntity, v48);
        v51->fields.targetType = *(_DWORD *)(v47 + 28);
        items = v59->fields._items;
        v53 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
        ++v59->fields._version;
        if ( !items )
          goto LABEL_76;
        size = v59->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v59,
            (Il2CppObject *)v51,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &items->obj.klass + size;
          v59->fields._size = size + 1;
          v55[4] = (Il2CppClass *)v51;
          HeroineData = sub_1C21DDC(v55 + 4, v51);
        }
      }
LABEL_73:
      LODWORD(v18) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v19;
      ++v20;
    }
    while ( (__int64)v19 < (int)v18 );
  }
  v56 = System_Collections_Generic_List_object___ToArray(
          v59,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *v57 = (EventDropItemUpValInfo_array *)v56;
  HeroineData = sub_1C21DDC(v57, v56);
  if ( !*v57 )
LABEL_76:
    sub_1C22094(HeroineData, v10);
  return (*v57)->max_length != 0;
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

  if ( (byte_4BD81BC & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4BD81BC = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C22354(v7);
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

  if ( (byte_4BD81BE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD81BE = 1;
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
    v8 = sub_1C5D328(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C22354(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BD81C1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD81C1 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C22094(0LL, v10);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C22094(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_42012552((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C22094(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C22094(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C22094(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C22094(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C21DDC(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
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
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD81C0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD81C0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C22094(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C21DDC(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v3;
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

  if ( (byte_4BD81BD & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4BD81BD = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C22354(v7);
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

  if ( (byte_4BD81BF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD81BF = 1;
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
    v8 = sub_1C5D328(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C22354(v7);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5D744;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5D6EC;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4BD81CC & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_4BD81CC = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v13, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  Il2CppObject *v1; // x19

  if ( (byte_4BD81CD & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_4BD81CD = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_1C21DDC(PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields, v1);
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
    sub_1C22094(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4BD81CE & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD81CE = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1C22094(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4BD81CF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD81CF = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}