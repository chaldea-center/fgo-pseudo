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
  PartyOrganizationEventPointListViewManager_o *v8; // x21
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
  int32_t v28; // w2
  int32_t v29; // w3
  EventDropItemUpValInfo_array *v30; // x21
  signed int v31; // w9
  int32_t v32; // w8
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  unsigned int *v37; // x22
  PartyListViewItem_o *v38; // x27
  int32_t v39; // w23
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  __int64 v43; // x1
  EventMargeItemUpValInfo_array *v44; // x25
  int32_t v45; // w24
  System_String_o *v46; // x27
  __int64 v47; // x26
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  struct ListViewItemSeed_o *v54; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v56; // s10
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x8
  __int64 v61; // x0
  __int64 v62; // x1
  UnityEngine_GameObject_o *v63; // x0
  PartyOrganizationEventPointListViewManager_o *v64; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x4
  int v67; // w8
  int32_t v68; // w9
  EventMargeItemUpValInfo_o *v69; // x27
  __int64 v70; // x26
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 v73; // x0
  __int64 v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
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
  unsigned __int64 v91; // x24
  ServantStatusBattleListViewItem_o *v92; // x25
  unsigned __int64 v93; // x9
  Il2CppClass **v94; // x9
  EventUpValInfo_o *v95; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v98; // x1
  int32_t v99; // w2
  int32_t v100; // w3
  ServantStatusBattleListViewItem_c *v101; // x26
  __int64 v102; // x0
  unsigned int **p_eventMargeUpValInfoList; // x24
  int32_t v104; // w2
  int32_t v105; // w3
  EventUpValInfo_array *v106; // x8
  unsigned __int64 v107; // x25
  __int64 v108; // x19
  ServantEntity_o *v109; // x28
  System_String_o *SvtNameText; // x0
  char v111; // w29
  System_String_o *v112; // x20
  EventMemberMargeUpValInfo_o *v113; // x27
  int32_t v114; // w2
  int32_t v115; // w3
  unsigned int *v116; // x19
  unsigned int *v117; // x0
  EventUpValInfo_array *v118; // x8
  unsigned __int64 v119; // x19
  unsigned int *v120; // x8
  _BOOL8 v121; // x0
  __int64 v122; // x1
  unsigned int *v123; // x8
  EventMemberMargeUpValInfo_o *v124; // x0
  struct System_String_o *servantName; // x20
  char v126; // w19
  __int64 v127; // x28
  int32_t v128; // w2
  int32_t v129; // w3
  int32_t v130; // w2
  int32_t v131; // w3
  struct ListViewItemSeed_o *v132; // x8
  float y; // s12
  __int64 v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x8
  __int64 v138; // x27
  float v139; // s10
  int v140; // w29
  unsigned __int64 v141; // x21
  __int64 v142; // x19
  __int64 v143; // x8
  __int64 v144; // x20
  int32_t v145; // w2
  int32_t v146; // w3
  int32_t v147; // w2
  int32_t v148; // w3
  struct ListViewItemSeed_o *v149; // x8
  float v150; // s12
  __int64 v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x8
  struct ListViewItemSeed_o *v155; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v157; // x0
  __int64 v158; // x0
  System_Collections_Generic_List_object__o *v159; // [xsp+10h] [xbp-140h]
  __int64 v160; // [xsp+18h] [xbp-138h]
  __int64 v162; // [xsp+28h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v164; // [xsp+38h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v166; // [xsp+70h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v167; // [xsp+90h] [xbp-C0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t eventId; // [xsp+BCh] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+C8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57063 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_1B885B0(&EventDropItemUpValInfo_____TypeInfo);
    sub_1B885B0(&EventMemberMargeUpValInfo___TypeInfo);
    sub_1B885B0(&EventMemberMargeUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&PartyOrganizationEventPointListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_10347/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/);
    sub_1B885B0(&StringLiteral_10253/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/);
    byte_4A57063 = 1;
  }
  eventUpValList = 0LL;
  eventId = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v167, 0, sizeof(v167));
  memset(&v166, 0, sizeof(v166));
  memset(&i, 0, sizeof(i));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v159 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v159,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v5 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v5,
    (const MethodInfo_34A7128 *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_159;
  v8 = this;
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v164,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v167 = v164;
            while ( 1 )
            {
              v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v167,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v18 )
                break;
              current = v167.fields._current;
              if ( !v167.fields._current )
                sub_1B8880C(v18, v19);
              if ( !v4 )
                sub_1B8880C(v18, v19);
              v21 = System_Collections_Generic_List_int___Contains(
                      v4,
                      (int32_t)v167.fields._current[1].klass,
                      (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v21 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v4->fields._items;
                v24 = Method_System_Collections_Generic_List_int__Add__;
                ++v4->fields._version;
                if ( !items )
                  sub_1B8880C(v21, klass_low);
                size = v4->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v4,
                    klass_low,
                    *(const MethodInfo_34E0810 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v4->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v167,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v26,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v16,
                     v27);
            if ( (seed & 1) != 0 )
            {
              v30 = campaignFriendshipUpPoints;
              eventId = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_159;
              v31 = campaignFriendshipUpPoints->max_length;
              if ( v31 >= 1 )
              {
                v32 = 0;
                while ( v32 < (unsigned int)v31 )
                {
                  if ( !v159 )
                    goto LABEL_159;
                  max_length = (MethodInfo *)v30->m_Items[v32];
                  v33 = v159->fields._items;
                  v34 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
                  ++v159->fields._version;
                  if ( !v33 )
                    goto LABEL_159;
                  v35 = v159->fields._size;
                  if ( (unsigned int)v35 >= v33->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v159,
                      (Il2CppObject *)max_length,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v36 = &v33->obj.klass + v35;
                    v159->fields._size = v35 + 1;
                    v36[4] = (Il2CppClass *)max_length;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)max_length, v28, v29);
                  }
                  v32 = eventId + 1;
                  eventId = v32;
                  v31 = v30->max_length;
                  if ( v32 >= v31 )
                    goto LABEL_32;
                }
LABEL_160:
                sub_1B88814(seed, max_length);
              }
            }
          }
LABEL_32:
          v12 = eventUpValList;
          v8 = this;
          ++v16;
          if ( !eventUpValList )
            goto LABEL_159;
        }
        seed = sub_1B88658(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v4 )
        {
          v37 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v164,
            v4,
            (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v38 = partyItem;
          v39 = 0;
          v166 = v164;
          while ( 1 )
          {
            v40 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v166,
                    (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v40 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v40,
                                    (int32_t)v166.fields._current,
                                    v38,
                                    v41);
            v44 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_1B8880C(0LL, v43);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v45 = v39 + 1;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v46 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
              v47 = sub_1B887FC(PartyOrganizationEventPointListViewItem_TypeInfo);
              *(_DWORD *)(v47 + 136) = 1;
              ListViewItem___ctor_40706472((ListViewItem_o *)v47, v39, 0LL);
              *(_QWORD *)(v47 + 112) = v46;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 112), (int32_t)v46, v48, v49);
              *(_BYTE *)(v47 + 120) = 0;
              *(_DWORD *)(v47 + 136) = 0;
              *(float *)(v47 + 92) = v13;
              *(float *)(v47 + 96) = v14;
              *(float *)(v47 + 100) = v15;
              v54 = v8->fields.seed;
              if ( !v54 )
                sub_1B8880C(v50, v51);
              itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
              v38 = partyItema;
              v56 = v14 + v54->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_1B8880C(0LL, v51);
              v57 = itemList->fields._items;
              v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++itemList->fields._version;
              if ( !v57 )
                sub_1B8880C(itemList, v51);
              v59 = itemList->fields._size;
              if ( (unsigned int)v59 >= v57->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  itemList,
                  (Il2CppObject *)v47,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                v60 = &v57->obj.klass + v59;
                itemList->fields._size = v59 + 1;
                v60[4] = (Il2CppClass *)v47;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 4), v47, v52, v53);
              }
              eventId = 0;
              v67 = v44->max_length;
              if ( v67 < 1 )
              {
                ++v39;
              }
              else
              {
                v68 = 0;
                do
                {
                  if ( v68 >= (unsigned int)v67 )
                    sub_1B88814(v61, v62);
                  v69 = v44->m_Items[v68];
                  v39 = v45 + 1;
                  v70 = sub_1B887FC(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v70 + 136) = 1;
                  ListViewItem___ctor_40706472((ListViewItem_o *)v70, v45, 0LL);
                  *(_QWORD *)(v70 + 128) = v69;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 128), (int32_t)v69, v71, v72);
                  *(_DWORD *)(v70 + 136) = 0;
                  *(float *)(v70 + 92) = v13;
                  *(float *)(v70 + 96) = v56;
                  *(float *)(v70 + 100) = v15;
                  v77 = v8->fields.seed;
                  if ( !v77 )
                    sub_1B8880C(v73, v74);
                  v78 = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
                  v38 = partyItema;
                  v56 = v56 + v77->fields.arrangementPich.fields.y;
                  if ( !v78 )
                    sub_1B8880C(0LL, v74);
                  v79 = v78->fields._items;
                  v80 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v78->fields._version;
                  if ( !v79 )
                    sub_1B8880C(v78, v74);
                  v81 = v78->fields._size;
                  if ( (unsigned int)v81 >= v79->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v78,
                      (Il2CppObject *)v70,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v82 = &v79->obj.klass + v81;
                    v78->fields._size = v81 + 1;
                    v82[4] = (Il2CppClass *)v70;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v82 + 4), v70, v75, v76);
                  }
                  ++v45;
                  v68 = eventId + 1;
                  eventId = v68;
                  v67 = v44->max_length;
                }
                while ( v68 < v67 );
              }
              lineObj = v8->fields.lineObj;
              if ( !lineObj )
                sub_1B8880C(0LL, v62);
              transform = UnityEngine_GameObject__get_transform(lineObj, 0LL);
              if ( !transform )
                sub_1B8880C(0LL, v85);
              v171.fields.x = v13;
              v171.fields.y = v56;
              v171.fields.z = v15;
              UnityEngine_Transform__set_localPosition(transform, v171, 0LL);
              v88 = v8->fields.seed;
              if ( !v88 )
                sub_1B8880C(v86, v87);
              v89 = v8->fields.lineObj;
              v14 = v56 + v88->fields.arrangementPich.fields.y;
              if ( !v89 )
                sub_1B8880C(0LL, v87);
              UnityEngine_GameObject__SetActive(v89, 1, 0LL);
            }
            else
            {
              v63 = v8->fields.lineObj;
              if ( !v63 )
                sub_1B8880C(0LL, v43);
              UnityEngine_GameObject__SetActive(v63, 0, 0LL);
            }
            v90 = eventUpValList;
            if ( !eventUpValList )
LABEL_81:
              sub_1B8880C(v64, v65);
            v91 = 0LL;
            v92 = (ServantStatusBattleListViewItem_o *)(v37 + 8);
            while ( 1 )
            {
              v93 = v90->max_length;
              if ( (__int64)v91 >= (int)v93 )
                break;
              if ( v91 >= v93 )
                sub_1B88814(v64, v65);
              v94 = &v90->obj.klass + v91;
              v95 = (EventUpValInfo_o *)v94[4];
              if ( v95 )
              {
                questRestrictionInfo = v38->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_1B8880C(v64, v65);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v64,
                  v91,
                  (EventUpValInfo_o *)v94[4],
                  questRestrictionInfo->fields.eventId,
                  v66);
                DropItemList = EventUpValInfo__GetDropItemList(v95, v91, 0LL);
                if ( !v37 )
                  sub_1B8880C(DropItemList, v98);
                v101 = (ServantStatusBattleListViewItem_c *)DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_1B886EC(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v37 + 64LL));
                  if ( !DropItemList )
                  {
                    v157 = sub_1B88830();
                    sub_1B886D8(v157, 0LL);
                  }
                }
                if ( v91 >= v37[6] )
                  sub_1B88814(DropItemList, v98);
                v92->klass = v101;
                sub_1B88554(v92, (int32_t)v101, v99, v100);
                v90 = eventUpValList;
              }
              ++v91;
              v92 = (ServantStatusBattleListViewItem_o *)((char *)v92 + 8);
              if ( !v90 )
                goto LABEL_81;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v166,
            (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( eventUpValList )
          {
            v102 = sub_1B88658(EventMemberMargeUpValInfo___TypeInfo, eventUpValList->max_length);
            p_eventMargeUpValInfoList = (unsigned int **)&v8->fields.eventMargeUpValInfoList;
            v8->fields.eventMargeUpValInfoList = (struct EventMemberMargeUpValInfo_array *)v102;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.eventMargeUpValInfoList, v102, v104, v105);
            v106 = eventUpValList;
            if ( eventUpValList )
            {
              v107 = 0LL;
              do
              {
                if ( (__int64)v107 >= (int)v106->max_length )
                  goto LABEL_155;
                seed = (__int64)PartyListViewItem__GetMember(v38, v107, 0LL);
                if ( !seed )
                  break;
                v108 = seed;
                if ( *(_BYTE *)(seed + 128) )
                {
                  if ( !*(_QWORD *)(seed + 120) )
                    goto LABEL_150;
                }
                else if ( !*(_QWORD *)(seed + 112) )
                {
                  goto LABEL_150;
                }
                v109 = *(ServantEntity_o **)(seed + 176);
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                max_length);
                v160 = v108;
                v111 = *(_BYTE *)(v108 + 128);
                v112 = SvtNameText;
                v113 = (EventMemberMargeUpValInfo_o *)sub_1B887FC(EventMemberMargeUpValInfo_TypeInfo);
                EventMemberMargeUpValInfo___ctor(v113, v107, v109, v112, v111, 0LL);
                v116 = *p_eventMargeUpValInfoList;
                if ( !*p_eventMargeUpValInfoList )
                  break;
                if ( v113 )
                {
                  seed = sub_1B886EC(v113, *(_QWORD *)(*(_QWORD *)v116 + 64LL));
                  if ( !seed )
                  {
                    v158 = sub_1B88830();
                    sub_1B886D8(v158, 0LL);
                  }
                }
                if ( v107 >= v116[6] )
                  goto LABEL_160;
                v117 = &v116[2 * v107];
                *((_QWORD *)v117 + 4) = v113;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v117 + 8), (int32_t)v113, v114, v115);
                v118 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v119 = 0LL;
                while ( (__int64)v119 < (int)v118->max_length )
                {
                  if ( !v37 )
                    goto LABEL_159;
                  if ( v119 >= v37[6] )
                    goto LABEL_160;
                  max_length = *(MethodInfo **)&v37[2 * v119 + 8];
                  if ( max_length )
                  {
                    v120 = *p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      goto LABEL_159;
                    if ( v107 >= v120[6] )
                      goto LABEL_160;
                    seed = *(_QWORD *)&v120[2 * v107 + 8];
                    if ( !seed )
                      goto LABEL_159;
                    EventMemberMargeUpValInfo__Add(
                      (EventMemberMargeUpValInfo_o *)seed,
                      (EventDropItemUpValInfo_array *)max_length,
                      0LL);
                    v118 = eventUpValList;
                  }
                  ++v119;
                  if ( !v118 )
                    goto LABEL_159;
                }
                seed = (__int64)v159;
                if ( !v159 )
                  break;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v164,
                  v159,
                  (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = v164;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v124,
                        (EventDropItemUpValInfo_o *)i.fields._current,
                        0LL) )
                {
                  v121 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &i,
                           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v121 )
                    break;
                  v123 = *p_eventMargeUpValInfoList;
                  if ( !*p_eventMargeUpValInfoList )
                    sub_1B8880C(v121, v122);
                  if ( v107 >= v123[6] )
                    sub_1B88814(v121, v122);
                  v124 = *(EventMemberMargeUpValInfo_o **)&v123[2 * v107 + 8];
                  if ( !v124 )
                    sub_1B8880C(0LL, v122);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &i,
                  (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( !v113 )
                  break;
                seed = EventMemberMargeUpValInfo__IsEmpry(v113, 0LL);
                if ( (seed & 1) != 0 )
                {
                  v38 = partyItema;
                }
                else
                {
                  servantName = v113->fields.servantName;
                  v126 = *(_BYTE *)(v160 + 128);
                  v127 = sub_1B887FC(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v127 + 136) = 1;
                  ListViewItem___ctor_40706472((ListViewItem_o *)v127, v39, 0LL);
                  *(_QWORD *)(v127 + 112) = servantName;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v127 + 112), (int32_t)servantName, v128, v129);
                  *(_BYTE *)(v127 + 120) = v126;
                  *(_DWORD *)(v127 + 136) = 1;
                  *(float *)(v127 + 92) = v13;
                  *(float *)(v127 + 96) = v14;
                  *(float *)(v127 + 100) = v15;
                  v132 = v8->fields.seed;
                  if ( !v132 )
                    break;
                  seed = (__int64)v8->fields.itemList;
                  if ( !seed )
                    break;
                  y = v132->fields.arrangementPich.fields.y;
                  v134 = *(_QWORD *)(seed + 16);
                  v135 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(seed + 28);
                  if ( !v134 )
                    break;
                  v136 = *(int *)(seed + 24);
                  if ( (unsigned int)v136 >= *(_DWORD *)(v134 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)seed,
                      (Il2CppObject *)v127,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v137 = v134 + 8 * v136;
                    *(_DWORD *)(seed + 24) = v136 + 1;
                    *(_QWORD *)(v137 + 32) = v127;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v137 + 32), v127, v130, v131);
                  }
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v113, 0LL);
                  if ( !seed )
                    break;
                  v138 = seed;
                  ++v39;
                  v139 = v14 + y;
                  if ( (int)*(_QWORD *)(seed + 24) >= 1 )
                  {
                    v140 = 0;
                    v141 = 0LL;
                    v142 = seed + 32;
                    v162 = (unsigned int)*(_QWORD *)(seed + 24) - 1LL;
                    while ( 1 )
                    {
                      v143 = *(_QWORD *)(v142 + 8 * v141);
                      if ( !v143 || *(_DWORD *)(v143 + 60) != 111 )
                        goto LABEL_133;
                      if ( !*(_BYTE *)(v160 + 128) )
                      {
                        seed = *(_QWORD *)(v160 + 176);
                        if ( !seed )
                          goto LABEL_159;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v160 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_133:
                          if ( v141 >= *(unsigned int *)(v138 + 24) )
                            goto LABEL_160;
                          v144 = *(_QWORD *)(v142 + 8 * v141);
                          v127 = sub_1B887FC(PartyOrganizationEventPointListViewItem_TypeInfo);
                          *(_DWORD *)(v127 + 136) = 1;
                          ListViewItem___ctor_40706472((ListViewItem_o *)v127, v39, 0LL);
                          *(_QWORD *)(v127 + 128) = v144;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v127 + 128), v144, v145, v146);
                          *(_DWORD *)(v127 + 136) = 1;
                          *(float *)(v127 + 92) = v13;
                          *(float *)(v127 + 96) = v139;
                          *(float *)(v127 + 100) = v15;
                          v149 = this->fields.seed;
                          if ( !v149 )
                            goto LABEL_159;
                          seed = (__int64)this->fields.itemList;
                          if ( !seed )
                            goto LABEL_159;
                          v150 = v149->fields.arrangementPich.fields.y;
                          v151 = *(_QWORD *)(seed + 16);
                          v152 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                          ++*(_DWORD *)(seed + 28);
                          if ( !v151 )
                            goto LABEL_159;
                          v153 = *(int *)(seed + 24);
                          if ( (unsigned int)v153 >= *(_DWORD *)(v151 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)seed,
                              (Il2CppObject *)v127,
                              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v154 = v151 + 8 * v153;
                            *(_DWORD *)(seed + 24) = v153 + 1;
                            *(_QWORD *)(v154 + 32) = v127;
                            sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 32), v127, v147, v148);
                          }
                          ++v39;
                          v139 = v139 + v150;
                          ++v140;
                        }
                      }
                      if ( v162 == v141 )
                        break;
                      if ( ++v141 >= *(unsigned int *)(v138 + 24) )
                        goto LABEL_160;
                    }
                    if ( v140 )
                    {
                      v8 = this;
                      v38 = partyItema;
                      v14 = v139 + -8.0;
                      goto LABEL_150;
                    }
                    v8 = this;
                  }
                  v38 = partyItema;
                  seed = (__int64)v8->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)seed,
                           (Il2CppObject *)v127,
                           (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v155 = v8->fields.seed;
                  if ( !v155 )
                    break;
                  v14 = v139 - v155->fields.arrangementPich.fields.y;
                }
LABEL_150:
                v106 = eventUpValList;
                ++v107;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_159:
    sub_1B8880C(seed, max_length);
  }
LABEL_155:
  emptyMessageLabel = v8->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10253/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_159;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
  ListViewManager__DispItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.eventMargeUpValInfoList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4);
}


PartyOrganizationEventPointListViewItem_o *__fastcall PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A57064 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4A57064 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  void *EventUpVal; // x0
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
  void *v21; // x20
  __int64 v22; // x22
  Il2CppObject *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  EventUpValInfo_array *v31; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4A57062 & 1) == 0 )
  {
    sub_1B885B0(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4A57062 = 1;
  }
  v31 = 0LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v12 = (EventPartyMargeUpValInfo_o *)sub_1B887FC(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v12, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v31, 0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v14 = v31;
    if ( !v31 )
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
        EventUpVal = EventUpValInfo__GetDropItemList(v18, v15, 0LL);
        if ( !v12 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v12, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v14 = v31;
      }
      ++v15;
      if ( !v14 )
        goto LABEL_30;
    }
  }
  if ( !v12 )
    goto LABEL_30;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v12, 0LL);
  if ( EventUpVal )
  {
    v20 = *((_DWORD *)EventUpVal + 6);
    v21 = EventUpVal;
    if ( v20 >= 1 )
    {
      v22 = 0LL;
      while ( (unsigned int)v22 < v20 )
      {
        v23 = (Il2CppObject *)*((_QWORD *)v21 + v22 + 4);
        if ( !v23 )
          goto LABEL_30;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v21 + v22 + 4),
                               0LL);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v23,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v23;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
          }
        }
        v20 = *((_DWORD *)v21 + 6);
        if ( (int)++v22 >= v20 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1B88814(EventUpVal, v8);
    }
  }
LABEL_28:
  if ( !v6 )
LABEL_30:
    sub_1B8880C(EventUpVal, v8);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_4A57069 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57069 = 1;
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
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4A57061 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A57061 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_1B88814(Instance, v9);
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
                                       (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
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
        sub_1B8880C(Instance, v9);
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

  if ( (byte_4A57067 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1B885B0(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57067 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      PartyOrganizationEventPointListViewObject__Init_32046160(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_32045048(
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

  if ( (byte_4A57068 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1B885B0(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57068 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      PartyOrganizationEventPointListViewObject__Init_32045552(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyOrganizationEventPointListViewManager__SetMode_32044516(this, mode, v6);
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32044516(
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

  if ( (byte_4A57066 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
    sub_1B885B0(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57066 = 1;
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
            (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v14 = v11->fields._size;
          v15 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
          PartyOrganizationEventPointListViewObject__Init_32045552(v15, v18, v16, v17);
          if ( ++v12 >= v11->fields._size )
            return;
        }
      }
      sub_1B8880C(ClippingObjectList, v9);
    case 2:
      v7 = 3;
      goto LABEL_17;
    case 1:
      v7 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_32045048(this, v7, v6);
      break;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32044996(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyOrganizationEventPointListViewManager__SetMode_32044516(this, mode, v6);
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
  if ( (byte_4A57065 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1B885B0(&PartyOrganizationEventPointListViewObject_TypeInfo);
    byte_4A57065 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_32044392(
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
  void *HeroineData; // x0
  __int64 v10; // x1
  System_Object_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  PartyOrganizationListViewItem_o *v14; // x22
  Il2CppObject *Master_object; // x23
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x19
  __int64 v20; // x8
  unsigned __int64 v21; // x28
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v22; // x20
  int32_t Item3; // w21
  int32_t Item2; // w23
  int32_t Item1; // w19
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x24
  PartyOrganizationEventPointListViewManager___c_c *v27; // x0
  System_Func_object__object__o *_9__30_0; // x25
  Il2CppObject *v29; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v33; // x0
  PartyOrganizationEventPointListViewManager___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x25
  System_Func_object__bool__o *_9__30_1; // x26
  Il2CppObject *v37; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x25
  PartyOrganizationEventPointListViewManager___c_c *v42; // x0
  System_Func_object__object__o *_9__30_2; // x26
  Il2CppObject *v44; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v48; // x0
  PartyOrganizationEventPointListViewManager___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x24
  System_Func_object__bool__o *_9__30_3; // x26
  Il2CppObject *v52; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x27
  __int64 v57; // x24
  __int64 v58; // x26
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  EventDropUpValInfo_o *v63; // x23
  bool v64; // zf
  __int64 v65; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  System_Object_array *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  ServantStatusBattleListViewItem_o *v79; // [xsp+8h] [xbp-88h]
  int32_t member; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_object__o *v81; // [xsp+18h] [xbp-78h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v82; // [xsp+28h] [xbp-68h]

  if ( (byte_4A5706A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Single_string___);
    sub_1B885B0(&EventDropItemUpValInfo_TypeInfo);
    sub_1B885B0(&EventDropUpValInfo_TypeInfo);
    sub_1B885B0(&System_Func_EventEntity_ScriptData__string__TypeInfo);
    sub_1B885B0(&System_Func_string__bool__TypeInfo);
    sub_1B885B0(&FunctionEntity_TypeInfo);
    sub_1B885B0(&FunctionGroupEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__);
    sub_1B885B0(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__);
    sub_1B885B0(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__);
    sub_1B885B0(&Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__);
    sub_1B885B0(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5706A = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v8 )
    goto LABEL_76;
  v11 = System_Collections_Generic_List_object___ToArray(
          v8,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *campaignFriendshipUpPoints = (EventDropItemUpValInfo_array *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)campaignFriendshipUpPoints, (int32_t)v11, v12, v13);
  if ( !partyItem )
    goto LABEL_76;
  HeroineData = PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_76;
  v14 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*((_QWORD *)HeroineData + 14) || *((_BYTE *)HeroineData + 128) || !*((_QWORD *)HeroineData + 42) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v14, v17);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  HeroineData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(SvtId, 0LL);
  if ( !Master_object )
    goto LABEL_76;
  HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)Master_object, (int32_t)HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = (void *)UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( ((unsigned __int8)HeroineData & 1) == 0 )
      return 0;
  }
  v81 = v8;
  FriendshipUpValTuple_k__BackingField = v14->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  v79 = (ServantStatusBattleListViewItem_o *)campaignFriendshipUpPoints;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_76;
  v20 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    v22 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v82 = v14->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1B88814(HeroineData, v10);
      Item3 = v22[-1].fields.Item3;
      if ( Item3 < 1 )
        goto LABEL_73;
      Item2 = v22[-1].fields.Item2;
      Item1 = v22->fields.Item1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      HeroineData = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !HeroineData )
        goto LABEL_76;
      HeroineData = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)HeroineData,
                      Item2,
                      (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !HeroineData )
        goto LABEL_76;
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)HeroineData + 15);
      if ( !v26 )
        goto LABEL_76;
      if ( v26[1].monitor )
      {
        v27 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v27 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_0 = (System_Func_object__object__o *)v27->static_fields->__9__30_0;
        if ( !_9__30_0 )
        {
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            v27 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v27->static_fields->__9;
          _9__30_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_EventEntity_ScriptData__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__30_0,
            v29,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
            0LL);
          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v31, v32);
        }
        v33 = System_Linq_Enumerable__Select_object__object_(
                v26,
                (System_Func_TSource__TResult__o *)_9__30_0,
                (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
        v34 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        v35 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v34 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_1 = (System_Func_object__bool__o *)v34->static_fields->__9__30_1;
        if ( !_9__30_1 )
        {
          if ( !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34);
            v34 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v34->static_fields->__9;
          _9__30_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_string__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__30_1,
            v37,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
            0LL);
          v38 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          v38->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v38->__9__30_1, (int32_t)_9__30_1, v39, v40);
        }
        v41 = System_Linq_Enumerable__Single_object__48975500(
                v35,
                (System_Func_TSource__bool__o *)_9__30_1,
                (const MethodInfo_2EB4E8C *)Method_System_Linq_Enumerable_Single_string___);
        if ( v26[1].monitor )
        {
          v42 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v42 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_2 = (System_Func_object__object__o *)v42->static_fields->__9__30_2;
          if ( !_9__30_2 )
          {
            if ( !v42->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v42);
              v42 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v44 = (Il2CppObject *)v42->static_fields->__9;
            _9__30_2 = (System_Func_object__object__o *)sub_1B887FC(System_Func_EventEntity_ScriptData__string__TypeInfo);
            System_Func_object__object____ctor(
              _9__30_2,
              v44,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
              0LL);
            v45 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v45->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->__9__30_2, (int32_t)_9__30_2, v46, v47);
          }
          v48 = System_Linq_Enumerable__Select_object__object_(
                  v26,
                  (System_Func_TSource__TResult__o *)_9__30_2,
                  (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v49 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v50 = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v49 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_3 = (System_Func_object__bool__o *)v49->static_fields->__9__30_3;
          if ( !_9__30_3 )
          {
            if ( !v49->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v49);
              v49 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v52 = (Il2CppObject *)v49->static_fields->__9;
            _9__30_3 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_string__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__30_3,
              v52,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
              0LL);
            v53 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v53->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v53->__9__30_3, (int32_t)_9__30_3, v54, v55);
          }
          v56 = System_Linq_Enumerable__Single_object__48975500(
                  v50,
                  (System_Func_TSource__bool__o *)_9__30_3,
                  (const MethodInfo_2EB4E8C *)Method_System_Linq_Enumerable_Single_string___);
          goto LABEL_56;
        }
      }
      else
      {
        v41 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      v56 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_56:
      v57 = sub_1B887FC(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v57, 0LL);
      if ( !v57 )
        goto LABEL_76;
      *(_DWORD *)(v57 + 16) = -2;
      *(_QWORD *)(v57 + 24) = 111LL;
      v58 = sub_1B887FC(FunctionGroupEntity_TypeInfo);
      FunctionGroupEntity___ctor((FunctionGroupEntity_o *)v58, 0LL);
      if ( !v58 )
        goto LABEL_76;
      *(_DWORD *)(v58 + 16) = -2;
      *(_DWORD *)(v58 + 20) = Item2;
      *(_DWORD *)(v58 + 24) = 0;
      *(_QWORD *)(v58 + 40) = v41;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v58 + 40), (int32_t)v41, v59, v60);
      *(_QWORD *)(v58 + 32) = v56;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v58 + 32), (int32_t)v56, v61, v62);
      *(_BYTE *)(v58 + 56) = 1;
      v63 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v63, 0, (FunctionEntity_o *)v57, 0LL);
      if ( Item1 == 2 )
      {
        FriendshipUpValTuple_k__BackingField = v82;
        if ( !v63 )
          goto LABEL_76;
        EventDropUpValInfo__SetRateCount(v63, Item3, 0, 0, 0LL);
      }
      else
      {
        v64 = Item1 == 1;
        FriendshipUpValTuple_k__BackingField = v82;
        if ( v64 )
        {
          if ( !v63 )
            goto LABEL_76;
          EventDropUpValInfo__SetAddCount(v63, Item3, 0, 0, 0LL);
        }
        else if ( !v63 )
        {
          goto LABEL_76;
        }
      }
      if ( v63->fields.rateCount > 0 || v63->fields.addCount >= 1 )
      {
        v65 = sub_1B887FC(EventDropItemUpValInfo_TypeInfo);
        EventDropItemUpValInfo___ctor((EventDropItemUpValInfo_o *)v65, member, v63, 0, 0LL);
        if ( !v65 )
          goto LABEL_76;
        *(_QWORD *)(v65 + 40) = v58;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 40), v58, v66, v67);
        *(_QWORD *)(v65 + 32) = v58;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 32), v58, v68, v69);
        *(_DWORD *)(v65 + 56) = *(_DWORD *)(v57 + 28);
        items = v81->fields._items;
        v73 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
        ++v81->fields._version;
        if ( !items )
          goto LABEL_76;
        size = v81->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v81,
            (Il2CppObject *)v65,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &items->obj.klass + size;
          v81->fields._size = size + 1;
          v75[4] = (Il2CppClass *)v65;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v75 + 4), v65, v70, v71);
        }
      }
LABEL_73:
      LODWORD(v20) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v21;
      ++v22;
    }
    while ( (__int64)v21 < (int)v20 );
  }
  v76 = System_Collections_Generic_List_object___ToArray(
          v81,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  v79->klass = (ServantStatusBattleListViewItem_c *)v76;
  sub_1B88554(v79, (int32_t)v76, v77, v78);
  if ( !v79->klass )
LABEL_76:
    sub_1B8880C(HeroineData, v10);
  return LODWORD(v79->klass->_1.namespaze) != 0;
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

  if ( (byte_4A5705B & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4A5705B = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A5705D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5705D = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B88ACC(v7);
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
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A57060 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57060 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5705F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5705F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A5705C & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo);
    byte_4A5705C = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A5705E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5705E = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B88ACC(v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9188;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9130;
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
  if ( (byte_4A5706B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo);
    byte_4A5706B = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5706C & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationEventPointListViewManager___c_TypeInfo);
    byte_4A5706C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4A5706D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5706D = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1B8880C(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4A5706E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5706E = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}