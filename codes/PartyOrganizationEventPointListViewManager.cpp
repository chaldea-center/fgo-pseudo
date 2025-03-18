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
  ListViewManager_o *v37; // x21
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
  EventDropItemUpValInfo_array *v57; // x21
  signed int v58; // w9
  int32_t v59; // w8
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  unsigned int *v64; // x22
  PartyListViewItem_o *v65; // x27
  int32_t v66; // w23
  _BOOL8 v67; // x0
  const MethodInfo *v68; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  __int64 v70; // x1
  EventMargeItemUpValInfo_array *v71; // x25
  int32_t v72; // w24
  System_String_o *v73; // x27
  __int64 v74; // x26
  __int64 v75; // x0
  __int64 v76; // x1
  struct ListViewItemSeed_o *v77; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v79; // s10
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x8
  __int64 v84; // x0
  __int64 v85; // x1
  UnityEngine_GameObject_o *v86; // x0
  PartyOrganizationEventPointListViewManager_o *v87; // x0
  __int64 v88; // x1
  const MethodInfo *v89; // x4
  int v90; // w8
  int32_t v91; // w9
  EventMargeItemUpValInfo_o *v92; // x27
  __int64 v93; // x26
  __int64 v94; // x0
  __int64 v95; // x1
  struct ListViewItemSeed_o *v96; // x8
  System_Collections_Generic_List_object__o *v97; // x0
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x8
  UnityEngine_GameObject_o *monitor; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v104; // x1
  __int64 v105; // x0
  __int64 v106; // x1
  struct ListViewItemSeed_o *v107; // x8
  UnityEngine_GameObject_o *v108; // x0
  EventUpValInfo_array *v109; // x8
  unsigned __int64 v110; // x24
  EventDropItemUpValInfo_array **v111; // x25
  unsigned __int64 v112; // x9
  Il2CppClass **v113; // x9
  EventUpValInfo_o *v114; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v117; // x1
  EventDropItemUpValInfo_array *v118; // x26
  unsigned int **p_indicator; // x24
  EventUpValInfo_array *v120; // x8
  unsigned __int64 v121; // x25
  __int64 v122; // x19
  ServantEntity_o *v123; // x28
  System_String_o *SvtNameText; // x0
  char v125; // w29
  System_String_o *v126; // x20
  EventMemberMargeUpValInfo_o *v127; // x27
  unsigned int *v128; // x19
  unsigned int *v129; // x0
  EventUpValInfo_array *v130; // x8
  unsigned __int64 v131; // x19
  unsigned int *v132; // x8
  _BOOL8 v133; // x0
  __int64 v134; // x1
  unsigned int *v135; // x8
  EventMemberMargeUpValInfo_o *v136; // x0
  struct System_String_o *servantName; // x20
  char v138; // w19
  __int64 v139; // x28
  struct ListViewItemSeed_o *v140; // x8
  float y; // s12
  __int64 v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  __int64 v145; // x8
  __int64 v146; // x27
  float v147; // s10
  int v148; // w29
  unsigned __int64 v149; // x21
  __int64 v150; // x19
  __int64 v151; // x8
  __int64 v152; // x20
  struct ListViewItemSeed_o *v153; // x8
  float v154; // s12
  __int64 v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  __int64 v158; // x8
  struct ListViewItemSeed_o *v159; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v161; // x0
  __int64 v162; // x0
  System_Collections_Generic_List_object__o *v163; // [xsp+10h] [xbp-140h]
  __int64 v164; // [xsp+18h] [xbp-138h]
  __int64 v166; // [xsp+28h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v168; // [xsp+38h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v170; // [xsp+70h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v171; // [xsp+90h] [xbp-C0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t eventId; // [xsp+BCh] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+C8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v175; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1DB78 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, partyItem);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v11);
    sub_1C3B764(&EventDropItemUpValInfo_____TypeInfo, v12);
    sub_1C3B764(&EventMemberMargeUpValInfo___TypeInfo, v13);
    sub_1C3B764(&EventMemberMargeUpValInfo_TypeInfo, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v25);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_1C3B764(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo, v27);
    sub_1C3B764(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v28);
    sub_1C3B764(&LocalizationManager_TypeInfo, v29);
    sub_1C3B764(&PartyOrganizationEventPointListViewItem_TypeInfo, v30);
    sub_1C3B764(&StringLiteral_10550/*"Purchase"*/, v31);
    sub_1C3B764(&StringLiteral_10450/*"Port"*/, v32);
    byte_4C1DB78 = 1;
  }
  eventUpValList = 0LL;
  eventId = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v171, 0, sizeof(v171));
  memset(&v170, 0, sizeof(v170));
  memset(&i, 0, sizeof(i));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v33 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v163 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v163,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v34 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v34,
    (const MethodInfo_3635560 *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_159;
  v37 = (ListViewManager_o *)this;
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v168,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v171 = v168;
            while ( 1 )
            {
              v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v171,
                      (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v47 )
                break;
              current = v171.fields._current;
              if ( !v171.fields._current )
                sub_1C3B9C0(v47, v48);
              if ( !v33 )
                sub_1C3B9C0(v47, v48);
              v50 = System_Collections_Generic_List_int___Contains(
                      v33,
                      (int32_t)v171.fields._current[1].klass,
                      (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v50 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v33->fields._items;
                v53 = Method_System_Collections_Generic_List_int__Add__;
                ++v33->fields._version;
                if ( !items )
                  sub_1C3B9C0(v50, klass_low);
                size = v33->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    klass_low,
                    *(const MethodInfo_366EC48 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                }
                else
                {
                  v33->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v171,
              (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v55,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v45,
                     v56);
            if ( (seed & 1) != 0 )
            {
              v57 = campaignFriendshipUpPoints;
              eventId = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_159;
              v58 = campaignFriendshipUpPoints->max_length;
              if ( v58 >= 1 )
              {
                v59 = 0;
                while ( v59 < (unsigned int)v58 )
                {
                  if ( !v163 )
                    goto LABEL_159;
                  max_length = (MethodInfo *)v57->m_Items[v59];
                  v60 = v163->fields._items;
                  v61 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
                  ++v163->fields._version;
                  if ( !v60 )
                    goto LABEL_159;
                  v62 = v163->fields._size;
                  if ( (unsigned int)v62 >= v60->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v163,
                      (Il2CppObject *)max_length,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v63 = &v60->obj.klass + v62;
                    v163->fields._size = v62 + 1;
                    v63[4] = (Il2CppClass *)max_length;
                    seed = sub_1C3B708(v63 + 4);
                  }
                  v59 = eventId + 1;
                  eventId = v59;
                  v58 = v57->max_length;
                  if ( v59 >= v58 )
                    goto LABEL_32;
                }
LABEL_160:
                sub_1C3B9C8(seed, max_length);
              }
            }
          }
LABEL_32:
          v41 = eventUpValList;
          v37 = (ListViewManager_o *)this;
          ++v45;
          if ( !eventUpValList )
            goto LABEL_159;
        }
        seed = sub_1C3B80C(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v33 )
        {
          v64 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v168,
            v33,
            (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v65 = partyItem;
          v66 = 0;
          v170 = v168;
          while ( 1 )
          {
            v67 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v170,
                    (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v67 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v67,
                                    (int32_t)v170.fields._current,
                                    v65,
                                    v68);
            v71 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_1C3B9C0(0LL, v70);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v72 = v66 + 1;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v73 = LocalizationManager__Get((System_String_o *)StringLiteral_10550/*"Purchase"*/, 0LL);
              v74 = sub_1C3B9B0(PartyOrganizationEventPointListViewItem_TypeInfo);
              *(_DWORD *)(v74 + 136) = 1;
              ListViewItem___ctor_42199332((ListViewItem_o *)v74, v66, 0LL);
              *(_QWORD *)(v74 + 112) = v73;
              v75 = sub_1C3B708(v74 + 112);
              *(_BYTE *)(v74 + 120) = 0;
              *(_DWORD *)(v74 + 136) = 0;
              *(float *)(v74 + 92) = v42;
              *(float *)(v74 + 96) = v43;
              *(float *)(v74 + 100) = v44;
              v77 = v37->fields.seed;
              if ( !v77 )
                sub_1C3B9C0(v75, v76);
              itemList = (System_Collections_Generic_List_object__o *)v37->fields.itemList;
              v65 = partyItema;
              v79 = v43 + v77->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_1C3B9C0(0LL, v76);
              v80 = itemList->fields._items;
              v81 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++itemList->fields._version;
              if ( !v80 )
                sub_1C3B9C0(itemList, v76);
              v82 = itemList->fields._size;
              if ( (unsigned int)v82 >= v80->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  itemList,
                  (Il2CppObject *)v74,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
              }
              else
              {
                v83 = &v80->obj.klass + v82;
                itemList->fields._size = v82 + 1;
                v83[4] = (Il2CppClass *)v74;
                v84 = sub_1C3B708(v83 + 4);
              }
              eventId = 0;
              v90 = v71->max_length;
              if ( v90 < 1 )
              {
                ++v66;
              }
              else
              {
                v91 = 0;
                do
                {
                  if ( v91 >= (unsigned int)v90 )
                    sub_1C3B9C8(v84, v85);
                  v92 = v71->m_Items[v91];
                  v66 = v72 + 1;
                  v93 = sub_1C3B9B0(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v93 + 136) = 1;
                  ListViewItem___ctor_42199332((ListViewItem_o *)v93, v72, 0LL);
                  *(_QWORD *)(v93 + 128) = v92;
                  v94 = sub_1C3B708(v93 + 128);
                  *(_DWORD *)(v93 + 136) = 0;
                  *(float *)(v93 + 92) = v42;
                  *(float *)(v93 + 96) = v79;
                  *(float *)(v93 + 100) = v44;
                  v96 = v37->fields.seed;
                  if ( !v96 )
                    sub_1C3B9C0(v94, v95);
                  v97 = (System_Collections_Generic_List_object__o *)v37->fields.itemList;
                  v65 = partyItema;
                  v79 = v79 + v96->fields.arrangementPich.fields.y;
                  if ( !v97 )
                    sub_1C3B9C0(0LL, v95);
                  v98 = v97->fields._items;
                  v99 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v97->fields._version;
                  if ( !v98 )
                    sub_1C3B9C0(v97, v95);
                  v100 = v97->fields._size;
                  if ( (unsigned int)v100 >= v98->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v97,
                      (Il2CppObject *)v93,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v101 = &v98->obj.klass + v100;
                    v97->fields._size = v100 + 1;
                    v101[4] = (Il2CppClass *)v93;
                    v84 = sub_1C3B708(v101 + 4);
                  }
                  ++v72;
                  v91 = eventId + 1;
                  eventId = v91;
                  v90 = v71->max_length;
                }
                while ( v91 < v90 );
              }
              monitor = (UnityEngine_GameObject_o *)v37[1].monitor;
              if ( !monitor )
                sub_1C3B9C0(0LL, v85);
              transform = UnityEngine_GameObject__get_transform(monitor, 0LL);
              if ( !transform )
                sub_1C3B9C0(0LL, v104);
              v175.fields.x = v42;
              v175.fields.y = v79;
              v175.fields.z = v44;
              UnityEngine_Transform__set_localPosition(transform, v175, 0LL);
              v107 = v37->fields.seed;
              if ( !v107 )
                sub_1C3B9C0(v105, v106);
              v108 = (UnityEngine_GameObject_o *)v37[1].monitor;
              v43 = v79 + v107->fields.arrangementPich.fields.y;
              if ( !v108 )
                sub_1C3B9C0(0LL, v106);
              UnityEngine_GameObject__SetActive(v108, 1, 0LL);
            }
            else
            {
              v86 = (UnityEngine_GameObject_o *)v37[1].monitor;
              if ( !v86 )
                sub_1C3B9C0(0LL, v70);
              UnityEngine_GameObject__SetActive(v86, 0, 0LL);
            }
            v109 = eventUpValList;
            if ( !eventUpValList )
LABEL_81:
              sub_1C3B9C0(v87, v88);
            v110 = 0LL;
            v111 = (EventDropItemUpValInfo_array **)(v64 + 8);
            while ( 1 )
            {
              v112 = v109->max_length;
              if ( (__int64)v110 >= (int)v112 )
                break;
              if ( v110 >= v112 )
                sub_1C3B9C8(v87, v88);
              v113 = &v109->obj.klass + v110;
              v114 = (EventUpValInfo_o *)v113[4];
              if ( v114 )
              {
                questRestrictionInfo = v65->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_1C3B9C0(v87, v88);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v87,
                  v110,
                  (EventUpValInfo_o *)v113[4],
                  questRestrictionInfo->fields.eventId,
                  v89);
                DropItemList = EventUpValInfo__GetDropItemList(v114, v110, 0LL);
                if ( !v64 )
                  sub_1C3B9C0(DropItemList, v117);
                v118 = DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_1C3B8A0(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v64 + 64LL));
                  if ( !DropItemList )
                  {
                    v161 = sub_1C3B9E4();
                    sub_1C3B88C(v161, 0LL);
                  }
                }
                if ( v110 >= v64[6] )
                  sub_1C3B9C8(DropItemList, v117);
                *v111 = v118;
                v87 = (PartyOrganizationEventPointListViewManager_o *)sub_1C3B708(v111);
                v109 = eventUpValList;
              }
              ++v110;
              ++v111;
              if ( !v109 )
                goto LABEL_81;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v170,
            (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( eventUpValList )
          {
            p_indicator = (unsigned int **)&v37[1].fields.indicator;
            v37[1].fields.indicator = (struct ListViewIndicator_o *)sub_1C3B80C(
                                                                      EventMemberMargeUpValInfo___TypeInfo,
                                                                      eventUpValList->max_length);
            seed = sub_1C3B708(&v37[1].fields.indicator);
            v120 = eventUpValList;
            if ( eventUpValList )
            {
              v121 = 0LL;
              do
              {
                if ( (__int64)v121 >= (int)v120->max_length )
                  goto LABEL_155;
                seed = (__int64)PartyListViewItem__GetMember(v65, v121, 0LL);
                if ( !seed )
                  break;
                v122 = seed;
                if ( *(_BYTE *)(seed + 128) )
                {
                  if ( !*(_QWORD *)(seed + 120) )
                    goto LABEL_150;
                }
                else if ( !*(_QWORD *)(seed + 112) )
                {
                  goto LABEL_150;
                }
                v123 = *(ServantEntity_o **)(seed + 176);
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                max_length);
                v164 = v122;
                v125 = *(_BYTE *)(v122 + 128);
                v126 = SvtNameText;
                v127 = (EventMemberMargeUpValInfo_o *)sub_1C3B9B0(EventMemberMargeUpValInfo_TypeInfo);
                EventMemberMargeUpValInfo___ctor(v127, v121, v123, v126, v125, 0LL);
                v128 = *p_indicator;
                if ( !*p_indicator )
                  break;
                if ( v127 )
                {
                  seed = sub_1C3B8A0(v127, *(_QWORD *)(*(_QWORD *)v128 + 64LL));
                  if ( !seed )
                  {
                    v162 = sub_1C3B9E4();
                    sub_1C3B88C(v162, 0LL);
                  }
                }
                if ( v121 >= v128[6] )
                  goto LABEL_160;
                v129 = &v128[2 * v121];
                *((_QWORD *)v129 + 4) = v127;
                seed = sub_1C3B708(v129 + 8);
                v130 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v131 = 0LL;
                while ( (__int64)v131 < (int)v130->max_length )
                {
                  if ( !v64 )
                    goto LABEL_159;
                  if ( v131 >= v64[6] )
                    goto LABEL_160;
                  max_length = *(MethodInfo **)&v64[2 * v131 + 8];
                  if ( max_length )
                  {
                    v132 = *p_indicator;
                    if ( !*p_indicator )
                      goto LABEL_159;
                    if ( v121 >= v132[6] )
                      goto LABEL_160;
                    seed = *(_QWORD *)&v132[2 * v121 + 8];
                    if ( !seed )
                      goto LABEL_159;
                    EventMemberMargeUpValInfo__Add(
                      (EventMemberMargeUpValInfo_o *)seed,
                      (EventDropItemUpValInfo_array *)max_length,
                      0LL);
                    v130 = eventUpValList;
                  }
                  ++v131;
                  if ( !v130 )
                    goto LABEL_159;
                }
                seed = (__int64)v163;
                if ( !v163 )
                  break;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v168,
                  v163,
                  (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = v168;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v136,
                        (EventDropItemUpValInfo_o *)i.fields._current,
                        0LL) )
                {
                  v133 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &i,
                           (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v133 )
                    break;
                  v135 = *p_indicator;
                  if ( !*p_indicator )
                    sub_1C3B9C0(v133, v134);
                  if ( v121 >= v135[6] )
                    sub_1C3B9C8(v133, v134);
                  v136 = *(EventMemberMargeUpValInfo_o **)&v135[2 * v121 + 8];
                  if ( !v136 )
                    sub_1C3B9C0(0LL, v134);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &i,
                  (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( !v127 )
                  break;
                seed = EventMemberMargeUpValInfo__IsEmpry(v127, 0LL);
                if ( (seed & 1) != 0 )
                {
                  v65 = partyItema;
                }
                else
                {
                  servantName = v127->fields.servantName;
                  v138 = *(_BYTE *)(v164 + 128);
                  v139 = sub_1C3B9B0(PartyOrganizationEventPointListViewItem_TypeInfo);
                  *(_DWORD *)(v139 + 136) = 1;
                  ListViewItem___ctor_42199332((ListViewItem_o *)v139, v66, 0LL);
                  *(_QWORD *)(v139 + 112) = servantName;
                  seed = sub_1C3B708(v139 + 112);
                  *(_BYTE *)(v139 + 120) = v138;
                  *(_DWORD *)(v139 + 136) = 1;
                  *(float *)(v139 + 92) = v42;
                  *(float *)(v139 + 96) = v43;
                  *(float *)(v139 + 100) = v44;
                  v140 = v37->fields.seed;
                  if ( !v140 )
                    break;
                  seed = (__int64)v37->fields.itemList;
                  if ( !seed )
                    break;
                  y = v140->fields.arrangementPich.fields.y;
                  v142 = *(_QWORD *)(seed + 16);
                  v143 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(seed + 28);
                  if ( !v142 )
                    break;
                  v144 = *(int *)(seed + 24);
                  if ( (unsigned int)v144 >= *(_DWORD *)(v142 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)seed,
                      (Il2CppObject *)v139,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v145 = v142 + 8 * v144;
                    *(_DWORD *)(seed + 24) = v144 + 1;
                    *(_QWORD *)(v145 + 32) = v139;
                    sub_1C3B708(v145 + 32);
                  }
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v127, 0LL);
                  if ( !seed )
                    break;
                  v146 = seed;
                  ++v66;
                  v147 = v43 + y;
                  if ( (int)*(_QWORD *)(seed + 24) >= 1 )
                  {
                    v148 = 0;
                    v149 = 0LL;
                    v150 = seed + 32;
                    v166 = (unsigned int)*(_QWORD *)(seed + 24) - 1LL;
                    while ( 1 )
                    {
                      v151 = *(_QWORD *)(v150 + 8 * v149);
                      if ( !v151 || *(_DWORD *)(v151 + 60) != 111 )
                        goto LABEL_133;
                      if ( !*(_BYTE *)(v164 + 128) )
                      {
                        seed = *(_QWORD *)(v164 + 176);
                        if ( !seed )
                          goto LABEL_159;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v164 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_133:
                          if ( v149 >= *(unsigned int *)(v146 + 24) )
                            goto LABEL_160;
                          v152 = *(_QWORD *)(v150 + 8 * v149);
                          v139 = sub_1C3B9B0(PartyOrganizationEventPointListViewItem_TypeInfo);
                          *(_DWORD *)(v139 + 136) = 1;
                          ListViewItem___ctor_42199332((ListViewItem_o *)v139, v66, 0LL);
                          *(_QWORD *)(v139 + 128) = v152;
                          seed = sub_1C3B708(v139 + 128);
                          *(_DWORD *)(v139 + 136) = 1;
                          *(float *)(v139 + 92) = v42;
                          *(float *)(v139 + 96) = v147;
                          *(float *)(v139 + 100) = v44;
                          v153 = this->fields.seed;
                          if ( !v153 )
                            goto LABEL_159;
                          seed = (__int64)this->fields.itemList;
                          if ( !seed )
                            goto LABEL_159;
                          v154 = v153->fields.arrangementPich.fields.y;
                          v155 = *(_QWORD *)(seed + 16);
                          v156 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                          ++*(_DWORD *)(seed + 28);
                          if ( !v155 )
                            goto LABEL_159;
                          v157 = *(int *)(seed + 24);
                          if ( (unsigned int)v157 >= *(_DWORD *)(v155 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)seed,
                              (Il2CppObject *)v139,
                              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v158 = v155 + 8 * v157;
                            *(_DWORD *)(seed + 24) = v157 + 1;
                            *(_QWORD *)(v158 + 32) = v139;
                            seed = sub_1C3B708(v158 + 32);
                          }
                          ++v66;
                          v147 = v147 + v154;
                          ++v148;
                        }
                      }
                      if ( v166 == v149 )
                        break;
                      if ( ++v149 >= *(unsigned int *)(v146 + 24) )
                        goto LABEL_160;
                    }
                    if ( v148 )
                    {
                      v37 = (ListViewManager_o *)this;
                      v65 = partyItema;
                      v43 = v147 + -8.0;
                      goto LABEL_150;
                    }
                    v37 = (ListViewManager_o *)this;
                  }
                  v65 = partyItema;
                  seed = (__int64)v37->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)seed,
                           (Il2CppObject *)v139,
                           (const MethodInfo_368D194 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v159 = v37->fields.seed;
                  if ( !v159 )
                    break;
                  v43 = v147 - v159->fields.arrangementPich.fields.y;
                }
LABEL_150:
                v120 = eventUpValList;
                ++v121;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_159:
    sub_1C3B9C0(seed, max_length);
  }
LABEL_155:
  emptyMessageLabel = v37->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10450/*"Port"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_159;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
  ListViewManager__DispItem(v37, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.eventMargeUpValInfoList = 0LL;
  sub_1C3B708(&this->fields.eventMargeUpValInfoList);
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

  if ( (byte_4C1DB79 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C3B764(&PartyOrganizationEventPointListViewItem_TypeInfo, v5);
    byte_4C1DB79 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 EventUpVal; // x0
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
  __int64 v25; // x20
  __int64 v26; // x22
  Il2CppObject *v27; // x21
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  EventUpValInfo_array *v33; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4C1DB77 & 1) == 0 )
  {
    sub_1C3B764(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v9);
    byte_4C1DB77 = 1;
  }
  v33 = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v16 = (EventPartyMargeUpValInfo_o *)sub_1C3B9B0(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v16, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v33, 0LL);
  if ( (EventUpVal & 1) != 0 )
  {
    v18 = v33;
    if ( !v33 )
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
        EventUpVal = (__int64)EventUpValInfo__GetDropItemList(v22, v19, 0LL);
        if ( !v16 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v16, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v18 = v33;
      }
      ++v19;
      if ( !v18 )
        goto LABEL_30;
    }
  }
  if ( !v16 )
    goto LABEL_30;
  EventUpVal = (__int64)EventPartyMargeUpValInfo__GetList(v16, 0LL);
  if ( EventUpVal )
  {
    v24 = *(_DWORD *)(EventUpVal + 24);
    v25 = EventUpVal;
    if ( v24 >= 1 )
    {
      v26 = 0LL;
      while ( (unsigned int)v26 < v24 )
      {
        v27 = *(Il2CppObject **)(v25 + 32 + 8 * v26);
        if ( !v27 )
          goto LABEL_30;
        EventUpVal = EventMargeItemUpValInfo__IsServantSelfValInfo(
                       *(EventMargeItemUpValInfo_o **)(v25 + 32 + 8 * v26),
                       0LL);
        if ( (EventUpVal & 1) == 0 )
        {
          if ( !v10 )
            goto LABEL_30;
          items = v10->fields._items;
          v29 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_30;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v27,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v27;
            EventUpVal = sub_1C3B708(v31 + 4);
          }
        }
        v24 = *(_DWORD *)(v25 + 24);
        if ( (int)++v26 >= v24 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C3B9C8(EventUpVal, v12);
    }
  }
LABEL_28:
  if ( !v10 )
LABEL_30:
    sub_1C3B9C0(EventUpVal, v12);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v10,
                                            (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_4C1DB7E & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1DB7E = 1;
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
          sub_1C3B9C0(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C3B708(&this->fields.callbackFunc2);
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

  if ( (byte_4C1DB76 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4C1DB76 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_1C3B9C8(Instance, v14);
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
                                       (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
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
        sub_1C3B9C0(Instance, v14);
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

  if ( (byte_4C1DB7C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v11);
    sub_1C3B764(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v13);
    byte_4C1DB7C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1C3B9C0(v19, v20);
      PartyOrganizationEventPointListViewObject__Init_33136736(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_33135624(
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

  if ( (byte_4C1DB7D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v9);
    sub_1C3B764(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v10);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v11);
    byte_4C1DB7D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1C3B9C0(v17, v18);
      PartyOrganizationEventPointListViewObject__Init_33136128(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1C3B708(&this->fields.callbackFunc);
  PartyOrganizationEventPointListViewManager__SetMode_33135092(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_33135092(
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

  if ( (byte_4C1DB7B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v6);
    sub_1C3B764(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v7);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v8);
    byte_4C1DB7B = 1;
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
            (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
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
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v18 = v15->fields._size;
          v19 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v20 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
          PartyOrganizationEventPointListViewObject__Init_33136128(v19, v22, v20, v21);
          if ( ++v16 >= v15->fields._size )
            return;
        }
      }
      sub_1C3B9C0(ClippingObjectList, v13);
    case 2:
      v11 = 3;
      goto LABEL_17;
    case 1:
      v11 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_33135624(this, v11, v10);
      break;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_33135572(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C3B708(&this->fields.callbackFunc2);
  PartyOrganizationEventPointListViewManager__SetMode_33135092(this, mode, v6);
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
  if ( (byte_4C1DB7A & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1C3B764(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             obj);
    byte_4C1DB7A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1C3B9C0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_33134968(
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
  __int64 HeroineData; // x0
  __int64 v32; // x1
  PartyOrganizationListViewItem_o *v33; // x22
  Il2CppObject *Master_object; // x23
  const MethodInfo *v36; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x19
  __int64 v39; // x8
  unsigned __int64 v40; // x28
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v41; // x20
  int32_t Item3; // w21
  int32_t Item2; // w23
  int32_t Item1; // w19
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x24
  PartyOrganizationEventPointListViewManager___c_c *v46; // x0
  System_Func_object__object__o *_9__30_0; // x25
  Il2CppObject *v48; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v50; // x0
  PartyOrganizationEventPointListViewManager___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x25
  System_Func_object__bool__o *_9__30_1; // x26
  Il2CppObject *v54; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v55; // x0
  Il2CppObject *v56; // x25
  PartyOrganizationEventPointListViewManager___c_c *v57; // x0
  System_Func_object__object__o *_9__30_2; // x26
  Il2CppObject *v59; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v60; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v61; // x0
  PartyOrganizationEventPointListViewManager___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x24
  System_Func_object__bool__o *_9__30_3; // x26
  Il2CppObject *v65; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v66; // x0
  Il2CppObject *v67; // x27
  __int64 v68; // x24
  FunctionGroupEntity_o *v69; // x26
  EventDropUpValInfo_o *v70; // x23
  bool v71; // zf
  EventDropItemUpValInfo_o *v72; // x22
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  EventDropItemUpValInfo_array **v77; // [xsp+8h] [xbp-88h]
  int32_t member; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_object__o *v79; // [xsp+18h] [xbp-78h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v80; // [xsp+28h] [xbp-68h]

  if ( (byte_4C1DB7F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, campaignFriendshipUpPoints);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_Single_string___, v12);
    sub_1C3B764(&EventDropItemUpValInfo_TypeInfo, v13);
    sub_1C3B764(&EventDropUpValInfo_TypeInfo, v14);
    sub_1C3B764(&System_Func_EventEntity_ScriptData__string__TypeInfo, v15);
    sub_1C3B764(&System_Func_string__bool__TypeInfo, v16);
    sub_1C3B764(&FunctionEntity_TypeInfo, v17);
    sub_1C3B764(&FunctionGroupEntity_TypeInfo, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v21);
    sub_1C3B764(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v22);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1C3B764(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
      v24);
    sub_1C3B764(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
      v25);
    sub_1C3B764(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
      v26);
    sub_1C3B764(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
      v27);
    sub_1C3B764(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v28);
    sub_1C3B764(&StringLiteral_1/*""*/, v29);
    byte_4C1DB7F = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v30 )
    goto LABEL_76;
  *campaignFriendshipUpPoints = (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                  v30,
                                                                  (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  HeroineData = sub_1C3B708(campaignFriendshipUpPoints);
  if ( !partyItem )
    goto LABEL_76;
  HeroineData = (__int64)PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_76;
  v33 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*(_QWORD *)(HeroineData + 112) || *(_BYTE *)(HeroineData + 128) || !*(_QWORD *)(HeroineData + 336) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v33, v36);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  HeroineData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(SvtId, 0LL);
  if ( !Master_object )
    goto LABEL_76;
  HeroineData = (__int64)UserServantMaster__getHeroineData((UserServantMaster_o *)Master_object, HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( (HeroineData & 1) == 0 )
      return 0;
  }
  v79 = v30;
  FriendshipUpValTuple_k__BackingField = v33->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  v77 = campaignFriendshipUpPoints;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_76;
  v39 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0LL;
    v41 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v80 = v33->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v40 >= (unsigned int)v39 )
        sub_1C3B9C8(HeroineData, v32);
      Item3 = v41[-1].fields.Item3;
      if ( Item3 < 1 )
        goto LABEL_73;
      Item2 = v41[-1].fields.Item2;
      Item1 = v41->fields.Item1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      HeroineData = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !HeroineData )
        goto LABEL_76;
      HeroineData = (__int64)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)HeroineData,
                               Item2,
                               (const MethodInfo_329AE48 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !HeroineData )
        goto LABEL_76;
      v45 = *(System_Collections_Generic_IEnumerable_TSource__o **)(HeroineData + 120);
      if ( !v45 )
        goto LABEL_76;
      if ( v45[1].monitor )
      {
        v46 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v46 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_0 = (System_Func_object__object__o *)v46->static_fields->__9__30_0;
        if ( !_9__30_0 )
        {
          if ( !v46->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v46);
            v46 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v48 = (Il2CppObject *)v46->static_fields->__9;
          _9__30_0 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_EventEntity_ScriptData__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__30_0,
            v48,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
            0LL);
          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
          sub_1C3B708(&static_fields->__9__30_0);
        }
        v50 = System_Linq_Enumerable__Select_object__object_(
                v45,
                (System_Func_TSource__TResult__o *)_9__30_0,
                (const MethodInfo_3022A9C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
        v51 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v50;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v51 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_1 = (System_Func_object__bool__o *)v51->static_fields->__9__30_1;
        if ( !_9__30_1 )
        {
          if ( !v51->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v51);
            v51 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v54 = (Il2CppObject *)v51->static_fields->__9;
          _9__30_1 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_string__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__30_1,
            v54,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
            0LL);
          v55 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          v55->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
          sub_1C3B708(&v55->__9__30_1);
        }
        v56 = System_Linq_Enumerable__Single_object__50493360(
                v52,
                (System_Func_TSource__bool__o *)_9__30_1,
                (const MethodInfo_30277B0 *)Method_System_Linq_Enumerable_Single_string___);
        if ( v45[1].monitor )
        {
          v57 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v57 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_2 = (System_Func_object__object__o *)v57->static_fields->__9__30_2;
          if ( !_9__30_2 )
          {
            if ( !v57->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v57);
              v57 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v59 = (Il2CppObject *)v57->static_fields->__9;
            _9__30_2 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_EventEntity_ScriptData__string__TypeInfo);
            System_Func_object__object____ctor(
              _9__30_2,
              v59,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
              0LL);
            v60 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v60->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
            sub_1C3B708(&v60->__9__30_2);
          }
          v61 = System_Linq_Enumerable__Select_object__object_(
                  v45,
                  (System_Func_TSource__TResult__o *)_9__30_2,
                  (const MethodInfo_3022A9C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v62 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v63 = (System_Collections_Generic_IEnumerable_TSource__o *)v61;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v62 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_3 = (System_Func_object__bool__o *)v62->static_fields->__9__30_3;
          if ( !_9__30_3 )
          {
            if ( !v62->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v62);
              v62 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v65 = (Il2CppObject *)v62->static_fields->__9;
            _9__30_3 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_string__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__30_3,
              v65,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
              0LL);
            v66 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v66->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
            sub_1C3B708(&v66->__9__30_3);
          }
          v67 = System_Linq_Enumerable__Single_object__50493360(
                  v63,
                  (System_Func_TSource__bool__o *)_9__30_3,
                  (const MethodInfo_30277B0 *)Method_System_Linq_Enumerable_Single_string___);
          goto LABEL_56;
        }
      }
      else
      {
        v56 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      v67 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_56:
      v68 = sub_1C3B9B0(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v68, 0LL);
      if ( !v68 )
        goto LABEL_76;
      *(_DWORD *)(v68 + 16) = -2;
      *(_QWORD *)(v68 + 24) = 111LL;
      v69 = (FunctionGroupEntity_o *)sub_1C3B9B0(FunctionGroupEntity_TypeInfo);
      FunctionGroupEntity___ctor(v69, 0LL);
      if ( !v69 )
        goto LABEL_76;
      v69->fields.funcId = -2;
      v69->fields.eventId = Item2;
      v69->fields.baseFuncId = 0;
      v69->fields.nameTotal = (struct System_String_o *)v56;
      sub_1C3B708(&v69->fields.nameTotal);
      v69->fields.name = (struct System_String_o *)v67;
      sub_1C3B708(&v69->fields.name);
      v69->fields.isDispValue = 1;
      v70 = (EventDropUpValInfo_o *)sub_1C3B9B0(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v70, 0, (FunctionEntity_o *)v68, 0LL);
      if ( Item1 == 2 )
      {
        FriendshipUpValTuple_k__BackingField = v80;
        if ( !v70 )
          goto LABEL_76;
        EventDropUpValInfo__SetRateCount(v70, Item3, 0, 0, 0LL);
      }
      else
      {
        v71 = Item1 == 1;
        FriendshipUpValTuple_k__BackingField = v80;
        if ( v71 )
        {
          if ( !v70 )
            goto LABEL_76;
          EventDropUpValInfo__SetAddCount(v70, Item3, 0, 0, 0LL);
        }
        else if ( !v70 )
        {
          goto LABEL_76;
        }
      }
      if ( v70->fields.rateCount > 0 || v70->fields.addCount >= 1 )
      {
        v72 = (EventDropItemUpValInfo_o *)sub_1C3B9B0(EventDropItemUpValInfo_TypeInfo);
        EventDropItemUpValInfo___ctor(v72, member, v70, 0, 0LL);
        if ( !v72 )
          goto LABEL_76;
        v72->fields.baseFuncGroupEntity = v69;
        sub_1C3B708(&v72->fields.baseFuncGroupEntity);
        v72->fields.funcGroupEntity = v69;
        HeroineData = sub_1C3B708(&v72->fields.funcGroupEntity);
        v72->fields.targetType = *(_DWORD *)(v68 + 28);
        items = v79->fields._items;
        v74 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
        ++v79->fields._version;
        if ( !items )
          goto LABEL_76;
        size = v79->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v79,
            (Il2CppObject *)v72,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &items->obj.klass + size;
          v79->fields._size = size + 1;
          v76[4] = (Il2CppClass *)v72;
          HeroineData = sub_1C3B708(v76 + 4);
        }
      }
LABEL_73:
      LODWORD(v39) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v40;
      ++v41;
    }
    while ( (__int64)v40 < (int)v39 );
  }
  *v77 = (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v79,
                                           (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  HeroineData = sub_1C3B708(v77);
  if ( !*v77 )
LABEL_76:
    sub_1C3B9C0(HeroineData, v32);
  return (*v77)->max_length != 0;
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

  if ( (byte_4C1DB70 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1DB70 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C3BC80(v7);
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

  if ( (byte_4C1DB72 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1DB72 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C3BC80(v7);
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
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C1DB75 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1DB75 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C3B9C0(0LL, v18);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C3B9C0(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_42215272((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1C3B9C0(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C3B9C0(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C3B9C0(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C3B9C0(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1C3B708(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C1DB74 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1DB74 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1C3B9C0(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C3B708(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C1DB71 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1DB71 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C3BC80(v7);
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

  if ( (byte_4C1DB73 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1DB73 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1C3BC80(v7);
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A76C9C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A76C44;
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
  if ( (byte_4C1DB80 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9);
    byte_4C1DB80 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v14, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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

  if ( (byte_4C1DB81 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v1);
    byte_4C1DB81 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v2;
  sub_1C3B708(PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields);
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
    sub_1C3B9C0(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4C1DB82 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, names);
    byte_4C1DB82 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1C3B9C0(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4C1DB83 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, names);
    byte_4C1DB83 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}