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
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_int__o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_T__o *v40; // x0
  __int64 seed; // x0
  PartyOrganizationEventPointListViewManager_o *v42; // x21
  float v43; // s0
  float v44; // s1
  float v45; // s2
  EventUpValInfo_array *v46; // x8
  float v47; // s8
  float v48; // s10
  float v49; // s9
  unsigned __int64 v50; // x22
  EventDropItemUpValInfo_array *max_length; // x1
  EventUpValInfo_o *v52; // x8
  _BOOL8 v53; // x0
  Il2CppObject *current; // x21
  _BOOL8 v55; // x0
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  PartyOrganizationEventPointListViewManager_o *v60; // x0
  const MethodInfo *v61; // x4
  int32_t v62; // w2
  int32_t v63; // w3
  EventDropItemUpValInfo_array *v64; // x21
  signed int v65; // w9
  int32_t v66; // w8
  Il2CppObject *v67; // x1
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  unsigned int *v72; // x22
  PartyListViewItem_o *v73; // x27
  int32_t v74; // w23
  _BOOL8 v75; // x0
  const MethodInfo *v76; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  EventMargeItemUpValInfo_array *v78; // x25
  int32_t v79; // w24
  System_String_o *v80; // x27
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x26
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  struct ListViewItemSeed_o *v89; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v91; // s10
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x8
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  UnityEngine_GameObject_o *v99; // x0
  PartyOrganizationEventPointListViewManager_o *v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x4
  int v103; // w8
  int32_t v104; // w9
  EventMargeItemUpValInfo_o *v105; // x27
  __int64 v106; // x26
  int32_t v107; // w2
  int32_t v108; // w3
  __int64 v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  struct ListViewItemSeed_o *v112; // x8
  System_Collections_Generic_List_object__o *v113; // x0
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x8
  UnityEngine_GameObject_o *lineObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v120; // x0
  struct ListViewItemSeed_o *v121; // x8
  UnityEngine_GameObject_o *v122; // x0
  EventUpValInfo_array *v123; // x8
  unsigned __int64 v124; // x24
  ServantStatusBattleListViewItem_o *v125; // x25
  unsigned __int64 v126; // x9
  Il2CppClass **v127; // x9
  EventUpValInfo_o *v128; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v131; // x1
  int32_t v132; // w2
  int32_t v133; // w3
  ServantStatusBattleListViewItem_c *v134; // x26
  __int64 v135; // x0
  unsigned int **p_eventMargeUpValInfoList; // x24
  int32_t v137; // w2
  int32_t v138; // w3
  EventUpValInfo_array *v139; // x8
  unsigned __int64 v140; // x25
  const MethodInfo *v141; // x1
  __int64 v142; // x19
  ServantEntity_o *v143; // x28
  System_String_o *SvtNameText; // x0
  char v145; // w29
  System_String_o *v146; // x20
  __int64 v147; // x1
  __int64 v148; // x2
  EventMemberMargeUpValInfo_o *v149; // x27
  int32_t v150; // w2
  int32_t v151; // w3
  unsigned int *v152; // x19
  unsigned int *v153; // x0
  EventUpValInfo_array *v154; // x8
  unsigned __int64 v155; // x19
  unsigned int *v156; // x8
  _BOOL8 v157; // x0
  __int64 v158; // x1
  unsigned int *v159; // x8
  EventMemberMargeUpValInfo_o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x2
  struct System_String_o *servantName; // x20
  char v164; // w19
  __int64 v165; // x28
  int32_t v166; // w2
  int32_t v167; // w3
  int32_t v168; // w2
  int32_t v169; // w3
  struct ListViewItemSeed_o *v170; // x8
  float y; // s12
  __int64 v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  __int64 v175; // x8
  __int64 v176; // x2
  __int64 v177; // x27
  float v178; // s10
  int v179; // w29
  unsigned __int64 v180; // x21
  __int64 v181; // x19
  __int64 v182; // x8
  __int64 v183; // x20
  int32_t v184; // w2
  int32_t v185; // w3
  int32_t v186; // w2
  int32_t v187; // w3
  struct ListViewItemSeed_o *v188; // x8
  float v189; // s12
  __int64 v190; // x8
  _QWORD *v191; // x9
  __int64 v192; // x10
  __int64 v193; // x8
  struct ListViewItemSeed_o *v194; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v196; // x0
  __int64 v197; // x0
  System_Collections_Generic_List_object__o *v198; // [xsp+10h] [xbp-140h]
  __int64 v199; // [xsp+18h] [xbp-138h]
  __int64 v201; // [xsp+28h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v203; // [xsp+38h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v205; // [xsp+70h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v206; // [xsp+90h] [xbp-C0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t eventId; // [xsp+BCh] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+C8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v210; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F839C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, partyItem);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v11);
    sub_1B640C8(&EventDropItemUpValInfo_____TypeInfo, v12);
    sub_1B640C8(&EventMemberMargeUpValInfo___TypeInfo, v13);
    sub_1B640C8(&EventMemberMargeUpValInfo_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v25);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_1B640C8(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo, v27);
    sub_1B640C8(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v28);
    sub_1B640C8(&LocalizationManager_TypeInfo, v29);
    sub_1B640C8(&PartyOrganizationEventPointListViewItem_TypeInfo, v30);
    sub_1B640C8(&StringLiteral_10298/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, v31);
    sub_1B640C8(&StringLiteral_10204/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, v32);
    byte_49F839C = 1;
  }
  eventUpValList = 0LL;
  eventId = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v206, 0, sizeof(v206));
  memset(&v205, 0, sizeof(v205));
  memset(&i, 0, sizeof(i));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v35 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v33, v34);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v198 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                        v36,
                                                        v37);
  System_Collections_Generic_List_object____ctor(
    v198,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v40 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo,
                                                  v38,
                                                  v39);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v40,
    (const MethodInfo_342D41C *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_159;
  v42 = this;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0LL) )
  {
    seed = (__int64)this->fields.seed;
    partyItema = partyItem;
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
          max_length = (EventDropItemUpValInfo_array *)v46->max_length;
          if ( (__int64)v50 >= (int)max_length )
            break;
          if ( v50 >= (unsigned __int64)max_length )
            goto LABEL_160;
          v52 = v46->m_Items[v50];
          if ( v52 )
          {
            seed = (__int64)v52->fields.dropList;
            if ( !seed )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v203,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v206 = v203;
            while ( 1 )
            {
              v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v206,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v53 )
                break;
              current = v206.fields._current;
              if ( !v206.fields._current )
                sub_1B64324(v53);
              if ( !v35 )
                sub_1B64324(v53);
              v55 = System_Collections_Generic_List_int___Contains(
                      v35,
                      (int32_t)v206.fields._current[1].klass,
                      (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v55 )
              {
                klass = (int32_t)current[1].klass;
                items = v35->fields._items;
                v58 = Method_System_Collections_Generic_List_int__Add__;
                ++v35->fields._version;
                if ( !items )
                  sub_1B64324(v55);
                size = v35->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v35,
                    klass,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                }
                else
                {
                  v35->fields._size = size + 1;
                  items->m_Items[size + 1] = klass;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v206,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v60,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v50,
                     v61);
            if ( (seed & 1) != 0 )
            {
              v64 = campaignFriendshipUpPoints;
              eventId = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_159;
              v65 = campaignFriendshipUpPoints->max_length;
              if ( v65 >= 1 )
              {
                v66 = 0;
                while ( v66 < (unsigned int)v65 )
                {
                  if ( !v198 )
                    goto LABEL_159;
                  v67 = (Il2CppObject *)v64->m_Items[v66];
                  v68 = v198->fields._items;
                  v69 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
                  ++v198->fields._version;
                  if ( !v68 )
                    goto LABEL_159;
                  v70 = v198->fields._size;
                  if ( (unsigned int)v70 >= v68->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v198,
                      v67,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v71 = &v68->obj.klass + v70;
                    v198->fields._size = v70 + 1;
                    v71[4] = (Il2CppClass *)v67;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v67, v62, v63);
                  }
                  v66 = eventId + 1;
                  eventId = v66;
                  v65 = v64->max_length;
                  if ( v66 >= v65 )
                    goto LABEL_32;
                }
LABEL_160:
                sub_1B6432C(seed, max_length);
              }
            }
          }
LABEL_32:
          v46 = eventUpValList;
          v42 = this;
          ++v50;
          if ( !eventUpValList )
            goto LABEL_159;
        }
        seed = sub_1B64170(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v35 )
        {
          v72 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v203,
            v35,
            (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v73 = partyItem;
          v74 = 0;
          v205 = v203;
          while ( 1 )
          {
            v75 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v205,
                    (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v75 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v75,
                                    (int32_t)v205.fields._current,
                                    v73,
                                    v76);
            v78 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_1B64324(0LL);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v79 = v74 + 1;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10298/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
              v83 = sub_1B64314(PartyOrganizationEventPointListViewItem_TypeInfo, v81, v82);
              *(_DWORD *)(v83 + 136) = 1;
              ListViewItem___ctor_40370988((ListViewItem_o *)v83, v74, 0LL);
              *(_QWORD *)(v83 + 112) = v80;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 112), (int32_t)v80, v84, v85);
              *(_BYTE *)(v83 + 120) = 0;
              *(_DWORD *)(v83 + 136) = 0;
              *(float *)(v83 + 92) = v47;
              *(float *)(v83 + 96) = v48;
              *(float *)(v83 + 100) = v49;
              v89 = v42->fields.seed;
              if ( !v89 )
                sub_1B64324(v86);
              itemList = (System_Collections_Generic_List_object__o *)v42->fields.itemList;
              v73 = partyItema;
              v91 = v48 + v89->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_1B64324(0LL);
              v92 = itemList->fields._items;
              v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++itemList->fields._version;
              if ( !v92 )
                sub_1B64324(itemList);
              v94 = itemList->fields._size;
              if ( (unsigned int)v94 >= v92->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  itemList,
                  (Il2CppObject *)v83,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
              }
              else
              {
                v95 = &v92->obj.klass + v94;
                itemList->fields._size = v94 + 1;
                v95[4] = (Il2CppClass *)v83;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v95 + 4), v83, v87, v88);
              }
              eventId = 0;
              v103 = v78->max_length;
              if ( v103 < 1 )
              {
                ++v74;
              }
              else
              {
                v104 = 0;
                do
                {
                  if ( v104 >= (unsigned int)v103 )
                    sub_1B6432C(v96, v97);
                  v105 = v78->m_Items[v104];
                  v74 = v79 + 1;
                  v106 = sub_1B64314(PartyOrganizationEventPointListViewItem_TypeInfo, v97, v98);
                  *(_DWORD *)(v106 + 136) = 1;
                  ListViewItem___ctor_40370988((ListViewItem_o *)v106, v79, 0LL);
                  *(_QWORD *)(v106 + 128) = v105;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v106 + 128), (int32_t)v105, v107, v108);
                  *(_DWORD *)(v106 + 136) = 0;
                  *(float *)(v106 + 92) = v47;
                  *(float *)(v106 + 96) = v91;
                  *(float *)(v106 + 100) = v49;
                  v112 = v42->fields.seed;
                  if ( !v112 )
                    sub_1B64324(v109);
                  v113 = (System_Collections_Generic_List_object__o *)v42->fields.itemList;
                  v73 = partyItema;
                  v91 = v91 + v112->fields.arrangementPich.fields.y;
                  if ( !v113 )
                    sub_1B64324(0LL);
                  v114 = v113->fields._items;
                  v115 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v113->fields._version;
                  if ( !v114 )
                    sub_1B64324(v113);
                  v116 = v113->fields._size;
                  if ( (unsigned int)v116 >= v114->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v113,
                      (Il2CppObject *)v106,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v117 = &v114->obj.klass + v116;
                    v113->fields._size = v116 + 1;
                    v117[4] = (Il2CppClass *)v106;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v117 + 4), v106, v110, v111);
                  }
                  ++v79;
                  v104 = eventId + 1;
                  eventId = v104;
                  v103 = v78->max_length;
                }
                while ( v104 < v103 );
              }
              lineObj = v42->fields.lineObj;
              if ( !lineObj )
                sub_1B64324(0LL);
              transform = UnityEngine_GameObject__get_transform(lineObj, 0LL);
              if ( !transform )
                sub_1B64324(0LL);
              v210.fields.x = v47;
              v210.fields.y = v91;
              v210.fields.z = v49;
              UnityEngine_Transform__set_localPosition(transform, v210, 0LL);
              v121 = v42->fields.seed;
              if ( !v121 )
                sub_1B64324(v120);
              v122 = v42->fields.lineObj;
              v48 = v91 + v121->fields.arrangementPich.fields.y;
              if ( !v122 )
                sub_1B64324(0LL);
              UnityEngine_GameObject__SetActive(v122, 1, 0LL);
            }
            else
            {
              v99 = v42->fields.lineObj;
              if ( !v99 )
                sub_1B64324(0LL);
              UnityEngine_GameObject__SetActive(v99, 0, 0LL);
            }
            v123 = eventUpValList;
            if ( !eventUpValList )
LABEL_81:
              sub_1B64324(v100);
            v124 = 0LL;
            v125 = (ServantStatusBattleListViewItem_o *)(v72 + 8);
            while ( 1 )
            {
              v126 = v123->max_length;
              if ( (__int64)v124 >= (int)v126 )
                break;
              if ( v124 >= v126 )
                sub_1B6432C(v100, v101);
              v127 = &v123->obj.klass + v124;
              v128 = (EventUpValInfo_o *)v127[4];
              if ( v128 )
              {
                questRestrictionInfo = v73->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_1B64324(v100);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v100,
                  v124,
                  (EventUpValInfo_o *)v127[4],
                  questRestrictionInfo->fields.eventId,
                  v102);
                DropItemList = EventUpValInfo__GetDropItemList(v128, v124, 0LL);
                if ( !v72 )
                  sub_1B64324(DropItemList);
                v134 = (ServantStatusBattleListViewItem_c *)DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_1B64204(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v72 + 64LL));
                  if ( !DropItemList )
                  {
                    v196 = sub_1B64348();
                    sub_1B641F0(v196, 0LL);
                  }
                }
                if ( v124 >= v72[6] )
                  sub_1B6432C(DropItemList, v131);
                v125->klass = v134;
                sub_1B6406C(v125, (int32_t)v134, v132, v133);
                v123 = eventUpValList;
              }
              ++v124;
              v125 = (ServantStatusBattleListViewItem_o *)((char *)v125 + 8);
              if ( !v123 )
                goto LABEL_81;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v205,
            (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( eventUpValList )
          {
            v135 = sub_1B64170(EventMemberMargeUpValInfo___TypeInfo, eventUpValList->max_length);
            p_eventMargeUpValInfoList = (unsigned int **)&v42->fields.eventMargeUpValInfoList;
            v42->fields.eventMargeUpValInfoList = (struct EventMemberMargeUpValInfo_array *)v135;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->fields.eventMargeUpValInfoList, v135, v137, v138);
            v139 = eventUpValList;
            if ( eventUpValList )
            {
              v140 = 0LL;
              do
              {
                if ( (__int64)v140 >= (int)v139->max_length )
                  goto LABEL_155;
                seed = (__int64)PartyListViewItem__GetMember(v73, v140, 0LL);
                if ( !seed )
                  break;
                v142 = seed;
                if ( *(_BYTE *)(seed + 128) )
                {
                  if ( !*(_QWORD *)(seed + 120) )
                    goto LABEL_150;
                }
                else if ( !*(_QWORD *)(seed + 112) )
                {
                  goto LABEL_150;
                }
                v143 = *(ServantEntity_o **)(seed + 176);
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                v141);
                v199 = v142;
                v145 = *(_BYTE *)(v142 + 128);
                v146 = SvtNameText;
                v149 = (EventMemberMargeUpValInfo_o *)sub_1B64314(EventMemberMargeUpValInfo_TypeInfo, v147, v148);
                EventMemberMargeUpValInfo___ctor(v149, v140, v143, v146, v145, 0LL);
                v152 = *p_eventMargeUpValInfoList;
                if ( !*p_eventMargeUpValInfoList )
                  break;
                if ( v149 )
                {
                  seed = sub_1B64204(v149, *(_QWORD *)(*(_QWORD *)v152 + 64LL));
                  if ( !seed )
                  {
                    v197 = sub_1B64348();
                    sub_1B641F0(v197, 0LL);
                  }
                }
                if ( v140 >= v152[6] )
                  goto LABEL_160;
                v153 = &v152[2 * v140];
                *((_QWORD *)v153 + 4) = v149;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v153 + 8), (int32_t)v149, v150, v151);
                v154 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v155 = 0LL;
                while ( (__int64)v155 < (int)v154->max_length )
                {
                  if ( !v72 )
                    goto LABEL_159;
                  if ( v155 >= v72[6] )
                    goto LABEL_160;
                  max_length = *(EventDropItemUpValInfo_array **)&v72[2 * v155 + 8];
                  if ( max_length )
                  {
                    v156 = *p_eventMargeUpValInfoList;
                    if ( !*p_eventMargeUpValInfoList )
                      goto LABEL_159;
                    if ( v140 >= v156[6] )
                      goto LABEL_160;
                    seed = *(_QWORD *)&v156[2 * v140 + 8];
                    if ( !seed )
                      goto LABEL_159;
                    EventMemberMargeUpValInfo__Add((EventMemberMargeUpValInfo_o *)seed, max_length, 0LL);
                    v154 = eventUpValList;
                  }
                  ++v155;
                  if ( !v154 )
                    goto LABEL_159;
                }
                seed = (__int64)v198;
                if ( !v198 )
                  break;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v203,
                  v198,
                  (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = v203;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v160,
                        (EventDropItemUpValInfo_o *)i.fields._current,
                        0LL) )
                {
                  v157 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &i,
                           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v157 )
                    break;
                  v159 = *p_eventMargeUpValInfoList;
                  if ( !*p_eventMargeUpValInfoList )
                    sub_1B64324(v157);
                  if ( v140 >= v159[6] )
                    sub_1B6432C(v157, v158);
                  v160 = *(EventMemberMargeUpValInfo_o **)&v159[2 * v140 + 8];
                  if ( !v160 )
                    sub_1B64324(0LL);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &i,
                  (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( !v149 )
                  break;
                seed = EventMemberMargeUpValInfo__IsEmpry(v149, 0LL);
                if ( (seed & 1) != 0 )
                {
                  v73 = partyItema;
                }
                else
                {
                  servantName = v149->fields.servantName;
                  v164 = *(_BYTE *)(v199 + 128);
                  v165 = sub_1B64314(PartyOrganizationEventPointListViewItem_TypeInfo, v161, v162);
                  *(_DWORD *)(v165 + 136) = 1;
                  ListViewItem___ctor_40370988((ListViewItem_o *)v165, v74, 0LL);
                  *(_QWORD *)(v165 + 112) = servantName;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v165 + 112), (int32_t)servantName, v166, v167);
                  *(_BYTE *)(v165 + 120) = v164;
                  *(_DWORD *)(v165 + 136) = 1;
                  *(float *)(v165 + 92) = v47;
                  *(float *)(v165 + 96) = v48;
                  *(float *)(v165 + 100) = v49;
                  v170 = v42->fields.seed;
                  if ( !v170 )
                    break;
                  seed = (__int64)v42->fields.itemList;
                  if ( !seed )
                    break;
                  y = v170->fields.arrangementPich.fields.y;
                  v172 = *(_QWORD *)(seed + 16);
                  v173 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(seed + 28);
                  if ( !v172 )
                    break;
                  v174 = *(int *)(seed + 24);
                  if ( (unsigned int)v174 >= *(_DWORD *)(v172 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)seed,
                      (Il2CppObject *)v165,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v175 = v172 + 8 * v174;
                    *(_DWORD *)(seed + 24) = v174 + 1;
                    *(_QWORD *)(v175 + 32) = v165;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v175 + 32), v165, v168, v169);
                  }
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v149, 0LL);
                  if ( !seed )
                    break;
                  v177 = seed;
                  ++v74;
                  v178 = v48 + y;
                  if ( (int)*(_QWORD *)(seed + 24) >= 1 )
                  {
                    v179 = 0;
                    v180 = 0LL;
                    v181 = seed + 32;
                    v201 = (unsigned int)*(_QWORD *)(seed + 24) - 1LL;
                    while ( 1 )
                    {
                      v182 = *(_QWORD *)(v181 + 8 * v180);
                      if ( !v182 || *(_DWORD *)(v182 + 60) != 111 )
                        goto LABEL_133;
                      if ( !*(_BYTE *)(v199 + 128) )
                      {
                        seed = *(_QWORD *)(v199 + 176);
                        if ( !seed )
                          goto LABEL_159;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v199 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_133:
                          if ( v180 >= *(unsigned int *)(v177 + 24) )
                            goto LABEL_160;
                          v183 = *(_QWORD *)(v181 + 8 * v180);
                          v165 = sub_1B64314(PartyOrganizationEventPointListViewItem_TypeInfo, max_length, v176);
                          *(_DWORD *)(v165 + 136) = 1;
                          ListViewItem___ctor_40370988((ListViewItem_o *)v165, v74, 0LL);
                          *(_QWORD *)(v165 + 128) = v183;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v165 + 128), v183, v184, v185);
                          *(_DWORD *)(v165 + 136) = 1;
                          *(float *)(v165 + 92) = v47;
                          *(float *)(v165 + 96) = v178;
                          *(float *)(v165 + 100) = v49;
                          v188 = this->fields.seed;
                          if ( !v188 )
                            goto LABEL_159;
                          seed = (__int64)this->fields.itemList;
                          if ( !seed )
                            goto LABEL_159;
                          v189 = v188->fields.arrangementPich.fields.y;
                          v190 = *(_QWORD *)(seed + 16);
                          v191 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                          ++*(_DWORD *)(seed + 28);
                          if ( !v190 )
                            goto LABEL_159;
                          v192 = *(int *)(seed + 24);
                          if ( (unsigned int)v192 >= *(_DWORD *)(v190 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)seed,
                              (Il2CppObject *)v165,
                              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v193 = v190 + 8 * v192;
                            *(_DWORD *)(seed + 24) = v192 + 1;
                            *(_QWORD *)(v193 + 32) = v165;
                            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v193 + 32), v165, v186, v187);
                          }
                          ++v74;
                          v178 = v178 + v189;
                          ++v179;
                        }
                      }
                      if ( v201 == v180 )
                        break;
                      if ( ++v180 >= *(unsigned int *)(v177 + 24) )
                        goto LABEL_160;
                    }
                    if ( v179 )
                    {
                      v42 = this;
                      v73 = partyItema;
                      v48 = v178 + -8.0;
                      goto LABEL_150;
                    }
                    v42 = this;
                  }
                  v73 = partyItema;
                  seed = (__int64)v42->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)seed,
                           (Il2CppObject *)v165,
                           (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v194 = v42->fields.seed;
                  if ( !v194 )
                    break;
                  v48 = v178 - v194->fields.arrangementPich.fields.y;
                }
LABEL_150:
                v139 = eventUpValList;
                ++v140;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_159:
    sub_1B64324(seed);
  }
LABEL_155:
  emptyMessageLabel = v42->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10204/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_159;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
  ListViewManager__DispItem((ListViewManager_o *)v42, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.eventMargeUpValInfoList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfoList, 0, v3, v4);
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

  if ( (byte_49F839D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&PartyOrganizationEventPointListViewItem_TypeInfo, v5);
    byte_49F839D = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  __int64 v15; // x1
  __int64 v16; // x2
  EventPartyMargeUpValInfo_o *v17; // x21
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  EventUpValInfo_array *v20; // x8
  unsigned __int64 v21; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v23; // x9
  EventUpValInfo_o *v24; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v26; // w8
  void *v27; // x20
  __int64 v28; // x22
  Il2CppObject *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  EventUpValInfo_array *v37; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_49F839B & 1) == 0 )
  {
    sub_1B640C8(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v9);
    byte_49F839B = 1;
  }
  v37 = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       partyItem);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v17 = (EventPartyMargeUpValInfo_o *)sub_1B64314(EventPartyMargeUpValInfo_TypeInfo, v15, v16);
  EventPartyMargeUpValInfo___ctor(v17, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = (void *)PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v37, 0LL);
  if ( ((unsigned __int8)EventUpVal & 1) != 0 )
  {
    v20 = v37;
    if ( !v37 )
      goto LABEL_30;
    v21 = 0LL;
    while ( 1 )
    {
      max_length = v20->max_length;
      if ( (__int64)v21 >= (int)max_length )
        break;
      if ( v21 >= max_length )
        goto LABEL_31;
      v23 = &v20->obj.klass + v21;
      v24 = (EventUpValInfo_o *)v23[4];
      if ( v24 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_30;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v21,
          (EventUpValInfo_o *)v23[4],
          questRestrictionInfo->fields.eventId,
          v19);
        EventUpVal = EventUpValInfo__GetDropItemList(v24, v21, 0LL);
        if ( !v17 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v17, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v20 = v37;
      }
      ++v21;
      if ( !v20 )
        goto LABEL_30;
    }
  }
  if ( !v17 )
    goto LABEL_30;
  EventUpVal = EventPartyMargeUpValInfo__GetList(v17, 0LL);
  if ( EventUpVal )
  {
    v26 = *((_DWORD *)EventUpVal + 6);
    v27 = EventUpVal;
    if ( v26 >= 1 )
    {
      v28 = 0LL;
      while ( (unsigned int)v28 < v26 )
      {
        v29 = (Il2CppObject *)*((_QWORD *)v27 + v28 + 4);
        if ( !v29 )
          goto LABEL_30;
        EventUpVal = (void *)EventMargeItemUpValInfo__IsServantSelfValInfo(
                               *((EventMargeItemUpValInfo_o **)v27 + v28 + 4),
                               0LL);
        if ( ((unsigned __int8)EventUpVal & 1) == 0 )
        {
          if ( !v10 )
            goto LABEL_30;
          items = v10->fields._items;
          v33 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_30;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v29,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v29;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
          }
        }
        v26 = *((_DWORD *)v27 + 6);
        if ( (int)++v28 >= v26 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1B6432C(EventUpVal, v18);
    }
  }
LABEL_28:
  if ( !v10 )
LABEL_30:
    sub_1B64324(EventUpVal);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v10,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void __fastcall PartyOrganizationEventPointListViewManager__OnMoveEnd(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F83A2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F83A2 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v15; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvMaster_o *v17; // x21
  __int64 v18; // x1
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

  if ( (byte_49F839A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_49F839A = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_33;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0LL);
  if ( Entity )
  {
    v15 = Entity;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           (PartyOrganizationUtility_o *)Instance,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v15->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_object )
        goto LABEL_33;
      v17 = (SkillLvMaster_o *)Instance;
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
            sub_1B6432C(Instance, v18);
          v22 = *((_QWORD *)v20 + (int)v21 + 4);
          if ( !v22 )
            break;
          if ( *(_DWORD *)(v22 + 48) )
          {
            if ( !v17 )
              break;
            Instance = SkillLvMaster__GetEntity(v17, *(_DWORD *)(v22 + 28), 1, 0LL);
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
                                       (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
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
        sub_1B64324(Instance);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F83A0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F83A0 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(
        v19,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B64324(v20);
      PartyOrganizationEventPointListViewObject__Init_31784748(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v19,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_31783636(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F83A1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F83A1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B64324(v18);
      PartyOrganizationEventPointListViewObject__Init_31784140(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v17,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyOrganizationEventPointListViewManager__SetMode_31783104(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_31783104(
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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w21
  Il2CppObject *Item; // x0
  int32_t v17; // w29
  PartyOrganizationEventPointListViewObject_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x23
  const MethodInfo *v22; // x3
  int32_t v23; // w1

  if ( (byte_49F839F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v6);
    sub_1B640C8(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v7);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v8);
    byte_49F839F = 1;
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
        v14 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
        if ( size < 1 )
        {
          this->fields.callbackCount = 1;
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
            0.0,
            0LL);
          return;
        }
        this->fields.callbackCount = size;
        v15 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v14,
                   v15,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v17 = v14->fields._size;
          v18 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
          System_Action___ctor(
            v21,
            (Il2CppObject *)this,
            Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
            0LL);
          if ( !v18 )
            break;
          if ( v15 >= v17 - 1 )
            v23 = 5;
          else
            v23 = 2;
          PartyOrganizationEventPointListViewObject__Init_31784140(v18, v23, v21, v22);
          if ( ++v15 >= v14->fields._size )
            return;
        }
      }
      sub_1B64324(ClippingObjectList);
    case 2:
      v11 = 3;
      goto LABEL_17;
    case 1:
      v11 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_31783636(this, v11, v10);
      break;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_31783584(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PartyOrganizationEventPointListViewManager__SetMode_31783104(this, mode, v6);
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
  if ( (byte_49F839E & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1B640C8(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             obj);
    byte_49F839E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_31782980(
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
  System_Object_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  PartyOrganizationListViewItem_o *v35; // x22
  Il2CppObject *Master_object; // x23
  const MethodInfo *v38; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  __int64 v40; // x1
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x19
  __int64 v42; // x8
  unsigned __int64 v43; // x28
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v44; // x20
  int32_t Item3; // w21
  int32_t Item2; // w23
  int32_t Item1; // w19
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x24
  PartyOrganizationEventPointListViewManager___c_c *v51; // x0
  System_Func_object__object__o *_9__30_0; // x25
  Il2CppObject *v53; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  PartyOrganizationEventPointListViewManager___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x25
  System_Func_object__bool__o *_9__30_1; // x26
  Il2CppObject *v63; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x25
  PartyOrganizationEventPointListViewManager___c_c *v68; // x0
  System_Func_object__object__o *_9__30_2; // x26
  Il2CppObject *v70; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  PartyOrganizationEventPointListViewManager___c_c *v77; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x24
  System_Func_object__bool__o *_9__30_3; // x26
  Il2CppObject *v80; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x27
  __int64 v85; // x24
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x26
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w2
  int32_t v92; // w3
  __int64 v93; // x1
  __int64 v94; // x2
  EventDropUpValInfo_o *v95; // x23
  __int64 v96; // x2
  bool v97; // zf
  __int64 v98; // x22
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Object_array *items; // x8
  _QWORD *v106; // x9
  __int64 size; // x10
  Il2CppClass **v108; // x0
  System_Object_array *v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  ServantStatusBattleListViewItem_o *v112; // [xsp+8h] [xbp-88h]
  int32_t member; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_object__o *v114; // [xsp+18h] [xbp-78h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v115; // [xsp+28h] [xbp-68h]

  if ( (byte_49F83A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, campaignFriendshipUpPoints);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Single_string___, v12);
    sub_1B640C8(&EventDropItemUpValInfo_TypeInfo, v13);
    sub_1B640C8(&EventDropUpValInfo_TypeInfo, v14);
    sub_1B640C8(&System_Func_EventEntity_ScriptData__string__TypeInfo, v15);
    sub_1B640C8(&System_Func_string__bool__TypeInfo, v16);
    sub_1B640C8(&FunctionEntity_TypeInfo, v17);
    sub_1B640C8(&FunctionGroupEntity_TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B640C8(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
      v24);
    sub_1B640C8(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
      v25);
    sub_1B640C8(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
      v26);
    sub_1B640C8(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
      v27);
    sub_1B640C8(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v28);
    sub_1B640C8(&StringLiteral_1/*""*/, v29);
    byte_49F83A3 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                       campaignFriendshipUpPoints,
                                                       partyItem);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v30 )
    goto LABEL_76;
  v32 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *campaignFriendshipUpPoints = (EventDropItemUpValInfo_array *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)campaignFriendshipUpPoints, (int32_t)v32, v33, v34);
  if ( !partyItem )
    goto LABEL_76;
  HeroineData = PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_76;
  v35 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*((_QWORD *)HeroineData + 14) || *((_BYTE *)HeroineData + 128) || !*((_QWORD *)HeroineData + 42) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v35, v38);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  HeroineData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(SvtId, 0LL);
  if ( !Master_object )
    goto LABEL_76;
  HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)Master_object, (int32_t)HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = (void *)UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( ((unsigned __int8)HeroineData & 1) == 0 )
      return 0;
  }
  v114 = v30;
  FriendshipUpValTuple_k__BackingField = v35->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  v112 = (ServantStatusBattleListViewItem_o *)campaignFriendshipUpPoints;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_76;
  v42 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v42 >= 1 )
  {
    v43 = 0LL;
    v44 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v115 = v35->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v43 >= (unsigned int)v42 )
        sub_1B6432C(HeroineData, v40);
      Item3 = v44[-1].fields.Item3;
      if ( Item3 < 1 )
        goto LABEL_73;
      Item2 = v44[-1].fields.Item2;
      Item1 = v44->fields.Item1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      HeroineData = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !HeroineData )
        goto LABEL_76;
      HeroineData = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)HeroineData,
                      Item2,
                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !HeroineData )
        goto LABEL_76;
      v50 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)HeroineData + 15);
      if ( !v50 )
        goto LABEL_76;
      if ( v50[1].monitor )
      {
        v51 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v51 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_0 = (System_Func_object__object__o *)v51->static_fields->__9__30_0;
        if ( !_9__30_0 )
        {
          if ( !v51->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v51);
            v51 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v53 = (Il2CppObject *)v51->static_fields->__9;
          _9__30_0 = (System_Func_object__object__o *)sub_1B64314(
                                                        System_Func_EventEntity_ScriptData__string__TypeInfo,
                                                        v48,
                                                        v49);
          System_Func_object__object____ctor(
            _9__30_0,
            v53,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
            0LL);
          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v55, v56);
        }
        v57 = System_Linq_Enumerable__Select_object__object_(
                v50,
                (System_Func_TSource__TResult__o *)_9__30_0,
                (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
        v60 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        v61 = (System_Collections_Generic_IEnumerable_TSource__o *)v57;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
          v60 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_1 = (System_Func_object__bool__o *)v60->static_fields->__9__30_1;
        if ( !_9__30_1 )
        {
          if ( !v60->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v60);
            v60 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v63 = (Il2CppObject *)v60->static_fields->__9;
          _9__30_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v58, v59);
          System_Func_object__bool____ctor(
            _9__30_1,
            v63,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
            0LL);
          v64 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          v64->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v64->__9__30_1, (int32_t)_9__30_1, v65, v66);
        }
        v67 = System_Linq_Enumerable__Single_object__48684588(
                v61,
                (System_Func_TSource__bool__o *)_9__30_1,
                (const MethodInfo_2E6DE2C *)Method_System_Linq_Enumerable_Single_string___);
        if ( v50[1].monitor )
        {
          v68 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v68 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_2 = (System_Func_object__object__o *)v68->static_fields->__9__30_2;
          if ( !_9__30_2 )
          {
            if ( !v68->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v68);
              v68 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v70 = (Il2CppObject *)v68->static_fields->__9;
            _9__30_2 = (System_Func_object__object__o *)sub_1B64314(
                                                          System_Func_EventEntity_ScriptData__string__TypeInfo,
                                                          v48,
                                                          v49);
            System_Func_object__object____ctor(
              _9__30_2,
              v70,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
              0LL);
            v71 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v71->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v71->__9__30_2, (int32_t)_9__30_2, v72, v73);
          }
          v74 = System_Linq_Enumerable__Select_object__object_(
                  v50,
                  (System_Func_TSource__TResult__o *)_9__30_2,
                  (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v77 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v78 = (System_Collections_Generic_IEnumerable_TSource__o *)v74;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo);
            v77 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_3 = (System_Func_object__bool__o *)v77->static_fields->__9__30_3;
          if ( !_9__30_3 )
          {
            if ( !v77->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v77);
              v77 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v80 = (Il2CppObject *)v77->static_fields->__9;
            _9__30_3 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v75, v76);
            System_Func_object__bool____ctor(
              _9__30_3,
              v80,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
              0LL);
            v81 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v81->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v81->__9__30_3, (int32_t)_9__30_3, v82, v83);
          }
          v84 = System_Linq_Enumerable__Single_object__48684588(
                  v78,
                  (System_Func_TSource__bool__o *)_9__30_3,
                  (const MethodInfo_2E6DE2C *)Method_System_Linq_Enumerable_Single_string___);
          goto LABEL_56;
        }
      }
      else
      {
        v67 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      v84 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_56:
      v85 = sub_1B64314(FunctionEntity_TypeInfo, v48, v49);
      FunctionEntity___ctor((FunctionEntity_o *)v85, 0LL);
      if ( !v85 )
        goto LABEL_76;
      *(_DWORD *)(v85 + 16) = -2;
      *(_QWORD *)(v85 + 24) = 111LL;
      v88 = sub_1B64314(FunctionGroupEntity_TypeInfo, v86, v87);
      FunctionGroupEntity___ctor((FunctionGroupEntity_o *)v88, 0LL);
      if ( !v88 )
        goto LABEL_76;
      *(_DWORD *)(v88 + 16) = -2;
      *(_DWORD *)(v88 + 20) = Item2;
      *(_DWORD *)(v88 + 24) = 0;
      *(_QWORD *)(v88 + 40) = v67;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v88 + 40), (int32_t)v67, v89, v90);
      *(_QWORD *)(v88 + 32) = v84;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v88 + 32), (int32_t)v84, v91, v92);
      *(_BYTE *)(v88 + 56) = 1;
      v95 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v93, v94);
      EventDropUpValInfo___ctor(v95, 0, (FunctionEntity_o *)v85, 0LL);
      if ( Item1 == 2 )
      {
        FriendshipUpValTuple_k__BackingField = v115;
        if ( !v95 )
          goto LABEL_76;
        EventDropUpValInfo__SetRateCount(v95, Item3, 0, 0, 0LL);
      }
      else
      {
        v97 = Item1 == 1;
        FriendshipUpValTuple_k__BackingField = v115;
        if ( v97 )
        {
          if ( !v95 )
            goto LABEL_76;
          EventDropUpValInfo__SetAddCount(v95, Item3, 0, 0, 0LL);
        }
        else if ( !v95 )
        {
          goto LABEL_76;
        }
      }
      if ( v95->fields.rateCount > 0 || v95->fields.addCount >= 1 )
      {
        v98 = sub_1B64314(EventDropItemUpValInfo_TypeInfo, v40, v96);
        EventDropItemUpValInfo___ctor((EventDropItemUpValInfo_o *)v98, member, v95, 0, 0LL);
        if ( !v98 )
          goto LABEL_76;
        *(_QWORD *)(v98 + 40) = v88;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 40), v88, v99, v100);
        *(_QWORD *)(v98 + 32) = v88;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 32), v88, v101, v102);
        *(_DWORD *)(v98 + 56) = *(_DWORD *)(v85 + 28);
        items = v114->fields._items;
        v106 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
        ++v114->fields._version;
        if ( !items )
          goto LABEL_76;
        size = v114->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v114,
            (Il2CppObject *)v98,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
        }
        else
        {
          v108 = &items->obj.klass + size;
          v114->fields._size = size + 1;
          v108[4] = (Il2CppClass *)v98;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v108 + 4), v98, v103, v104);
        }
      }
LABEL_73:
      LODWORD(v42) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v43;
      ++v44;
    }
    while ( (__int64)v43 < (int)v42 );
  }
  v109 = System_Collections_Generic_List_object___ToArray(
           v114,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  v112->klass = (ServantStatusBattleListViewItem_c *)v109;
  sub_1B6406C(v112, (int32_t)v109, v110, v111);
  if ( !v112->klass )
LABEL_76:
    sub_1B64324(HeroineData);
  return LODWORD(v112->klass->_1.namespaze) != 0;
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

  if ( (byte_49F8394 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F8394 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F8396 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F8396 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B645E4(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F8399 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F8399 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v12;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F8398 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F8398 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v12;
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

  if ( (byte_49F8395 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F8395 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F8397 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F8397 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A6994;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A693C;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_49F83A4 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9);
    byte_49F83A4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F83A5 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v1);
    byte_49F83A5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(PartyOrganizationEventPointListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_49F83A6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, names);
    byte_49F83A6 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1B64324(this);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_49F83A7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, names);
    byte_49F83A7 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}