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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_List_int__o *v65; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_Generic_List_T__o *v72; // x0
  __int64 seed; // x0
  MethodInfo *max_length; // x1
  ListViewManager_o *v75; // x21
  float v76; // s0
  float v77; // s1
  float v78; // s2
  EventUpValInfo_array *v79; // x8
  float v80; // s8
  float v81; // s10
  float v82; // s9
  unsigned __int64 v83; // x22
  EventUpValInfo_o *v84; // x8
  _BOOL8 v85; // x0
  __int64 v86; // x1
  Il2CppObject *current; // x21
  _BOOL8 v88; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  PartyOrganizationEventPointListViewManager_o *v93; // x0
  const MethodInfo *v94; // x4
  EventDropItemUpValInfo_array *v95; // x21
  signed int v96; // w9
  int32_t v97; // w8
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  unsigned int *v102; // x22
  PartyListViewItem_o *v103; // x27
  int32_t v104; // w23
  _BOOL8 v105; // x0
  const MethodInfo *v106; // x3
  EventMargeItemUpValInfo_array *TotalEventPointInfo; // x0
  __int64 v108; // x1
  EventMargeItemUpValInfo_array *v109; // x25
  int32_t v110; // w24
  System_String_o *v111; // x27
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x26
  __int64 v116; // x0
  __int64 v117; // x1
  struct ListViewItemSeed_o *v118; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  float v120; // s10
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x8
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  UnityEngine_GameObject_o *v129; // x0
  PartyOrganizationEventPointListViewManager_o *v130; // x0
  __int64 v131; // x1
  const MethodInfo *v132; // x4
  int v133; // w8
  int32_t v134; // w9
  EventMargeItemUpValInfo_o *v135; // x27
  __int64 v136; // x26
  __int64 v137; // x0
  __int64 v138; // x1
  struct ListViewItemSeed_o *v139; // x8
  System_Collections_Generic_List_object__o *v140; // x0
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x8
  UnityEngine_GameObject_o *monitor; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v147; // x1
  __int64 v148; // x0
  __int64 v149; // x1
  struct ListViewItemSeed_o *v150; // x8
  UnityEngine_GameObject_o *v151; // x0
  EventUpValInfo_array *v152; // x8
  unsigned __int64 v153; // x24
  EventDropItemUpValInfo_array **v154; // x25
  unsigned __int64 v155; // x9
  Il2CppClass **v156; // x9
  EventUpValInfo_o *v157; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v160; // x1
  EventDropItemUpValInfo_array *v161; // x26
  __int64 v162; // x0
  unsigned int **p_indicator; // x24
  EventUpValInfo_array *v164; // x8
  unsigned __int64 v165; // x25
  __int64 v166; // x19
  ServantEntity_o *v167; // x28
  System_String_o *SvtNameText; // x0
  char v169; // w29
  System_String_o *v170; // x20
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x3
  EventMemberMargeUpValInfo_o *v174; // x27
  unsigned int *v175; // x19
  unsigned int *v176; // x0
  EventUpValInfo_array *v177; // x8
  unsigned __int64 v178; // x19
  unsigned int *v179; // x8
  _BOOL8 v180; // x0
  __int64 v181; // x1
  unsigned int *v182; // x8
  EventMemberMargeUpValInfo_o *v183; // x0
  __int64 v184; // x2
  __int64 v185; // x3
  struct System_String_o *servantName; // x20
  char v187; // w19
  __int64 v188; // x28
  struct ListViewItemSeed_o *v189; // x8
  float y; // s12
  __int64 v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  __int64 v194; // x8
  __int64 v195; // x2
  __int64 v196; // x3
  __int64 v197; // x27
  float v198; // s10
  int v199; // w29
  unsigned __int64 v200; // x21
  __int64 v201; // x19
  __int64 v202; // x8
  __int64 v203; // x20
  struct ListViewItemSeed_o *v204; // x8
  float v205; // s12
  __int64 v206; // x8
  _QWORD *v207; // x9
  __int64 v208; // x10
  __int64 v209; // x8
  struct ListViewItemSeed_o *v210; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 v212; // x0
  __int64 v213; // x0
  System_Collections_Generic_List_object__o *v214; // [xsp+10h] [xbp-140h]
  __int64 v215; // [xsp+18h] [xbp-138h]
  __int64 v217; // [xsp+28h] [xbp-128h]
  PartyListViewItem_o *partyItema; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v219; // [xsp+38h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v221; // [xsp+70h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v222; // [xsp+90h] [xbp-C0h] BYREF
  EventDropItemUpValInfo_array *campaignFriendshipUpPoints; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t eventId; // [xsp+BCh] [xbp-94h] BYREF
  EventUpValInfo_array *eventUpValList; // [xsp+C8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v226; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11F40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, partyItem, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v18, v19);
    sub_1BCA7E0(&EventDropItemUpValInfo_____TypeInfo, v20, v21);
    sub_1BCA7E0(&EventMemberMargeUpValInfo___TypeInfo, v22, v23);
    sub_1BCA7E0(&EventMemberMargeUpValInfo_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v48, v49);
    sub_1BCA7E0(&System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo, v50, v51);
    sub_1BCA7E0(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v52, v53);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v54, v55);
    sub_1BCA7E0(&PartyOrganizationEventPointListViewItem_TypeInfo, v56, v57);
    sub_1BCA7E0(&StringLiteral_10480/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_10386/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, v60, v61);
    byte_4B11F40 = 1;
  }
  eventUpValList = 0LL;
  eventId = 0;
  campaignFriendshipUpPoints = 0LL;
  memset(&v222, 0, sizeof(v222));
  memset(&v221, 0, sizeof(v221));
  memset(&i, 0, sizeof(i));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v65 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v62,
                                                    v63,
                                                    v64);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v214 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                        v66,
                                                        v67,
                                                        v68);
  System_Collections_Generic_List_object____ctor(
    v214,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  v72 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool___TypeInfo,
                                                  v69,
                                                  v70,
                                                  v71);
  System_Collections_Generic_List_ValueTuple_object__bool_____ctor(
    v72,
    (const MethodInfo_354B550 *)Method_System_Collections_Generic_List_ValueTuple_EventDropItemUpValInfo__bool____ctor__);
  if ( !partyItem )
    goto LABEL_159;
  v75 = (ListViewManager_o *)this;
  if ( PartyListViewItem__GetEventUpVal(partyItem, &eventId, &eventUpValList, 0LL) )
  {
    seed = (__int64)this->fields.seed;
    partyItema = partyItem;
    if ( seed )
    {
      *(UnityEngine_Vector3_o *)&v76 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)seed, 0, 0LL);
      v79 = eventUpValList;
      if ( eventUpValList )
      {
        v80 = v76;
        v81 = v77;
        v82 = v78;
        v83 = 0LL;
        while ( 1 )
        {
          max_length = (MethodInfo *)v79->max_length;
          if ( (__int64)v83 >= (int)max_length )
            break;
          if ( v83 >= (unsigned __int64)max_length )
            goto LABEL_160;
          v84 = v79->m_Items[v83];
          if ( v84 )
          {
            seed = (__int64)v84->fields.dropList;
            if ( !seed )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v219,
              (System_Collections_Generic_List_object__o *)seed,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
            v222 = v219;
            while ( 1 )
            {
              v85 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v222,
                      (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
              if ( !v85 )
                break;
              current = v222.fields._current;
              if ( !v222.fields._current )
                sub_1BCAA3C(v85, v86);
              if ( !v65 )
                sub_1BCAA3C(v85, v86);
              v88 = System_Collections_Generic_List_int___Contains(
                      v65,
                      (int32_t)v222.fields._current[1].klass,
                      (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( !v88 )
              {
                klass_low = LODWORD(current[1].klass);
                items = v65->fields._items;
                v91 = Method_System_Collections_Generic_List_int__Add__;
                ++v65->fields._version;
                if ( !items )
                  sub_1BCAA3C(v88, klass_low);
                size = v65->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v65,
                    klass_low,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
                }
                else
                {
                  v65->fields._size = size + 1;
                  items->m_Items[size + 1] = klass_low;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v222,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
            seed = PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
                     v93,
                     &campaignFriendshipUpPoints,
                     partyItem,
                     v83,
                     v94);
            if ( (seed & 1) != 0 )
            {
              v95 = campaignFriendshipUpPoints;
              eventId = 0;
              if ( !campaignFriendshipUpPoints )
                goto LABEL_159;
              v96 = campaignFriendshipUpPoints->max_length;
              if ( v96 >= 1 )
              {
                v97 = 0;
                while ( v97 < (unsigned int)v96 )
                {
                  if ( !v214 )
                    goto LABEL_159;
                  max_length = (MethodInfo *)v95->m_Items[v97];
                  v98 = v214->fields._items;
                  v99 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
                  ++v214->fields._version;
                  if ( !v98 )
                    goto LABEL_159;
                  v100 = v214->fields._size;
                  if ( (unsigned int)v100 >= v98->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v214,
                      (Il2CppObject *)max_length,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v101 = &v98->obj.klass + v100;
                    v214->fields._size = v100 + 1;
                    v101[4] = (Il2CppClass *)max_length;
                    seed = sub_1BCA784(v101 + 4, max_length);
                  }
                  v97 = eventId + 1;
                  eventId = v97;
                  v96 = v95->max_length;
                  if ( v97 >= v96 )
                    goto LABEL_32;
                }
LABEL_160:
                sub_1BCAA44(seed, max_length);
              }
            }
          }
LABEL_32:
          v79 = eventUpValList;
          v75 = (ListViewManager_o *)this;
          ++v83;
          if ( !eventUpValList )
            goto LABEL_159;
        }
        seed = sub_1BCA888(EventDropItemUpValInfo_____TypeInfo, max_length);
        if ( v65 )
        {
          v102 = (unsigned int *)seed;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v219,
            v65,
            (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v103 = partyItem;
          v104 = 0;
          v221 = v219;
          while ( 1 )
          {
            v105 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                     (System_Collections_Generic_List_Enumerator_int__o *)&v221,
                     (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v105 )
              break;
            TotalEventPointInfo = PartyOrganizationEventPointListViewManager__GetTotalEventPointInfo(
                                    (PartyOrganizationEventPointListViewManager_o *)v105,
                                    (int32_t)v221.fields._current,
                                    v103,
                                    v106);
            v109 = TotalEventPointInfo;
            if ( !TotalEventPointInfo )
              sub_1BCAA3C(0LL, v108);
            if ( *(_QWORD *)&TotalEventPointInfo->max_length )
            {
              v110 = v104 + 1;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
              v111 = LocalizationManager__Get((System_String_o *)StringLiteral_10480/*"PARTY_ORGANIZATION_TOTAL_EVENT_POINT_INFO_TITLE"*/, 0LL);
              v115 = sub_1BCAA2C(PartyOrganizationEventPointListViewItem_TypeInfo, v112, v113, v114);
              *(_DWORD *)(v115 + 136) = 1;
              ListViewItem___ctor_41447164((ListViewItem_o *)v115, v104, 0LL);
              *(_QWORD *)(v115 + 112) = v111;
              v116 = sub_1BCA784(v115 + 112, v111);
              *(_BYTE *)(v115 + 120) = 0;
              *(_DWORD *)(v115 + 136) = 0;
              *(float *)(v115 + 92) = v80;
              *(float *)(v115 + 96) = v81;
              *(float *)(v115 + 100) = v82;
              v118 = v75->fields.seed;
              if ( !v118 )
                sub_1BCAA3C(v116, v117);
              itemList = (System_Collections_Generic_List_object__o *)v75->fields.itemList;
              v103 = partyItema;
              v120 = v81 + v118->fields.arrangementPich.fields.y;
              if ( !itemList )
                sub_1BCAA3C(0LL, v117);
              v121 = itemList->fields._items;
              v122 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++itemList->fields._version;
              if ( !v121 )
                sub_1BCAA3C(itemList, v117);
              v123 = itemList->fields._size;
              if ( (unsigned int)v123 >= v121->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  itemList,
                  (Il2CppObject *)v115,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
              }
              else
              {
                v124 = &v121->obj.klass + v123;
                itemList->fields._size = v123 + 1;
                v124[4] = (Il2CppClass *)v115;
                v125 = sub_1BCA784(v124 + 4, v115);
              }
              eventId = 0;
              v133 = v109->max_length;
              if ( v133 < 1 )
              {
                ++v104;
              }
              else
              {
                v134 = 0;
                do
                {
                  if ( v134 >= (unsigned int)v133 )
                    sub_1BCAA44(v125, v126);
                  v135 = v109->m_Items[v134];
                  v104 = v110 + 1;
                  v136 = sub_1BCAA2C(PartyOrganizationEventPointListViewItem_TypeInfo, v126, v127, v128);
                  *(_DWORD *)(v136 + 136) = 1;
                  ListViewItem___ctor_41447164((ListViewItem_o *)v136, v110, 0LL);
                  *(_QWORD *)(v136 + 128) = v135;
                  v137 = sub_1BCA784(v136 + 128, v135);
                  *(_DWORD *)(v136 + 136) = 0;
                  *(float *)(v136 + 92) = v80;
                  *(float *)(v136 + 96) = v120;
                  *(float *)(v136 + 100) = v82;
                  v139 = v75->fields.seed;
                  if ( !v139 )
                    sub_1BCAA3C(v137, v138);
                  v140 = (System_Collections_Generic_List_object__o *)v75->fields.itemList;
                  v103 = partyItema;
                  v120 = v120 + v139->fields.arrangementPich.fields.y;
                  if ( !v140 )
                    sub_1BCAA3C(0LL, v138);
                  v141 = v140->fields._items;
                  v142 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v140->fields._version;
                  if ( !v141 )
                    sub_1BCAA3C(v140, v138);
                  v143 = v140->fields._size;
                  if ( (unsigned int)v143 >= v141->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v140,
                      (Il2CppObject *)v136,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v144 = &v141->obj.klass + v143;
                    v140->fields._size = v143 + 1;
                    v144[4] = (Il2CppClass *)v136;
                    v125 = sub_1BCA784(v144 + 4, v136);
                  }
                  ++v110;
                  v134 = eventId + 1;
                  eventId = v134;
                  v133 = v109->max_length;
                }
                while ( v134 < v133 );
              }
              monitor = (UnityEngine_GameObject_o *)v75[1].monitor;
              if ( !monitor )
                sub_1BCAA3C(0LL, v126);
              transform = UnityEngine_GameObject__get_transform(monitor, 0LL);
              if ( !transform )
                sub_1BCAA3C(0LL, v147);
              v226.fields.x = v80;
              v226.fields.y = v120;
              v226.fields.z = v82;
              UnityEngine_Transform__set_localPosition(transform, v226, 0LL);
              v150 = v75->fields.seed;
              if ( !v150 )
                sub_1BCAA3C(v148, v149);
              v151 = (UnityEngine_GameObject_o *)v75[1].monitor;
              v81 = v120 + v150->fields.arrangementPich.fields.y;
              if ( !v151 )
                sub_1BCAA3C(0LL, v149);
              UnityEngine_GameObject__SetActive(v151, 1, 0LL);
            }
            else
            {
              v129 = (UnityEngine_GameObject_o *)v75[1].monitor;
              if ( !v129 )
                sub_1BCAA3C(0LL, v108);
              UnityEngine_GameObject__SetActive(v129, 0, 0LL);
            }
            v152 = eventUpValList;
            if ( !eventUpValList )
LABEL_81:
              sub_1BCAA3C(v130, v131);
            v153 = 0LL;
            v154 = (EventDropItemUpValInfo_array **)(v102 + 8);
            while ( 1 )
            {
              v155 = v152->max_length;
              if ( (__int64)v153 >= (int)v155 )
                break;
              if ( v153 >= v155 )
                sub_1BCAA44(v130, v131);
              v156 = &v152->obj.klass + v153;
              v157 = (EventUpValInfo_o *)v156[4];
              if ( v157 )
              {
                questRestrictionInfo = v103->fields.questRestrictionInfo;
                if ( !questRestrictionInfo )
                  sub_1BCAA3C(v130, v131);
                PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
                  v130,
                  v153,
                  (EventUpValInfo_o *)v156[4],
                  questRestrictionInfo->fields.eventId,
                  v132);
                DropItemList = EventUpValInfo__GetDropItemList(v157, v153, 0LL);
                if ( !v102 )
                  sub_1BCAA3C(DropItemList, v160);
                v161 = DropItemList;
                if ( DropItemList )
                {
                  DropItemList = (EventDropItemUpValInfo_array *)sub_1BCA91C(
                                                                   DropItemList,
                                                                   *(_QWORD *)(*(_QWORD *)v102 + 64LL));
                  if ( !DropItemList )
                  {
                    v212 = sub_1BCAA60();
                    sub_1BCA908(v212, 0LL);
                  }
                }
                if ( v153 >= v102[6] )
                  sub_1BCAA44(DropItemList, v160);
                *v154 = v161;
                v130 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCA784(v154, v161);
                v152 = eventUpValList;
              }
              ++v153;
              ++v154;
              if ( !v152 )
                goto LABEL_81;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v221,
            (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( eventUpValList )
          {
            v162 = sub_1BCA888(EventMemberMargeUpValInfo___TypeInfo, eventUpValList->max_length);
            p_indicator = (unsigned int **)&v75[1].fields.indicator;
            v75[1].fields.indicator = (struct ListViewIndicator_o *)v162;
            seed = sub_1BCA784(&v75[1].fields.indicator, v162);
            v164 = eventUpValList;
            if ( eventUpValList )
            {
              v165 = 0LL;
              do
              {
                if ( (__int64)v165 >= (int)v164->max_length )
                  goto LABEL_155;
                seed = (__int64)PartyListViewItem__GetMember(v103, v165, 0LL);
                if ( !seed )
                  break;
                v166 = seed;
                if ( *(_BYTE *)(seed + 128) )
                {
                  if ( !*(_QWORD *)(seed + 120) )
                    goto LABEL_150;
                }
                else if ( !*(_QWORD *)(seed + 112) )
                {
                  goto LABEL_150;
                }
                v167 = *(ServantEntity_o **)(seed + 176);
                SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(
                                (PartyOrganizationListViewItem_o *)seed,
                                max_length);
                v215 = v166;
                v169 = *(_BYTE *)(v166 + 128);
                v170 = SvtNameText;
                v174 = (EventMemberMargeUpValInfo_o *)sub_1BCAA2C(EventMemberMargeUpValInfo_TypeInfo, v171, v172, v173);
                EventMemberMargeUpValInfo___ctor(v174, v165, v167, v170, v169, 0LL);
                v175 = *p_indicator;
                if ( !*p_indicator )
                  break;
                if ( v174 )
                {
                  seed = sub_1BCA91C(v174, *(_QWORD *)(*(_QWORD *)v175 + 64LL));
                  if ( !seed )
                  {
                    v213 = sub_1BCAA60();
                    sub_1BCA908(v213, 0LL);
                  }
                }
                if ( v165 >= v175[6] )
                  goto LABEL_160;
                v176 = &v175[2 * v165];
                *((_QWORD *)v176 + 4) = v174;
                seed = sub_1BCA784(v176 + 8, v174);
                v177 = eventUpValList;
                if ( !eventUpValList )
                  break;
                v178 = 0LL;
                while ( (__int64)v178 < (int)v177->max_length )
                {
                  if ( !v102 )
                    goto LABEL_159;
                  if ( v178 >= v102[6] )
                    goto LABEL_160;
                  max_length = *(MethodInfo **)&v102[2 * v178 + 8];
                  if ( max_length )
                  {
                    v179 = *p_indicator;
                    if ( !*p_indicator )
                      goto LABEL_159;
                    if ( v165 >= v179[6] )
                      goto LABEL_160;
                    seed = *(_QWORD *)&v179[2 * v165 + 8];
                    if ( !seed )
                      goto LABEL_159;
                    EventMemberMargeUpValInfo__Add(
                      (EventMemberMargeUpValInfo_o *)seed,
                      (EventDropItemUpValInfo_array *)max_length,
                      0LL);
                    v177 = eventUpValList;
                  }
                  ++v178;
                  if ( !v177 )
                    goto LABEL_159;
                }
                seed = (__int64)v214;
                if ( !v214 )
                  break;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v219,
                  v214,
                  (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
                for ( i = v219;
                      ;
                      EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
                        v183,
                        (EventDropItemUpValInfo_o *)i.fields._current,
                        0LL) )
                {
                  v180 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &i,
                           (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
                  if ( !v180 )
                    break;
                  v182 = *p_indicator;
                  if ( !*p_indicator )
                    sub_1BCAA3C(v180, v181);
                  if ( v165 >= v182[6] )
                    sub_1BCAA44(v180, v181);
                  v183 = *(EventMemberMargeUpValInfo_o **)&v182[2 * v165 + 8];
                  if ( !v183 )
                    sub_1BCAA3C(0LL, v181);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &i,
                  (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
                if ( !v174 )
                  break;
                seed = EventMemberMargeUpValInfo__IsEmpry(v174, 0LL);
                if ( (seed & 1) != 0 )
                {
                  v103 = partyItema;
                }
                else
                {
                  servantName = v174->fields.servantName;
                  v187 = *(_BYTE *)(v215 + 128);
                  v188 = sub_1BCAA2C(PartyOrganizationEventPointListViewItem_TypeInfo, max_length, v184, v185);
                  *(_DWORD *)(v188 + 136) = 1;
                  ListViewItem___ctor_41447164((ListViewItem_o *)v188, v104, 0LL);
                  *(_QWORD *)(v188 + 112) = servantName;
                  seed = sub_1BCA784(v188 + 112, servantName);
                  *(_BYTE *)(v188 + 120) = v187;
                  *(_DWORD *)(v188 + 136) = 1;
                  *(float *)(v188 + 92) = v80;
                  *(float *)(v188 + 96) = v81;
                  *(float *)(v188 + 100) = v82;
                  v189 = v75->fields.seed;
                  if ( !v189 )
                    break;
                  seed = (__int64)v75->fields.itemList;
                  if ( !seed )
                    break;
                  y = v189->fields.arrangementPich.fields.y;
                  v191 = *(_QWORD *)(seed + 16);
                  v192 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(seed + 28);
                  if ( !v191 )
                    break;
                  v193 = *(int *)(seed + 24);
                  if ( (unsigned int)v193 >= *(_DWORD *)(v191 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)seed,
                      (Il2CppObject *)v188,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v194 = v191 + 8 * v193;
                    *(_DWORD *)(seed + 24) = v193 + 1;
                    *(_QWORD *)(v194 + 32) = v188;
                    sub_1BCA784(v194 + 32, v188);
                  }
                  seed = (__int64)EventMemberMargeUpValInfo__GetList(v174, 0LL);
                  if ( !seed )
                    break;
                  v197 = seed;
                  ++v104;
                  v198 = v81 + y;
                  if ( (int)*(_QWORD *)(seed + 24) >= 1 )
                  {
                    v199 = 0;
                    v200 = 0LL;
                    v201 = seed + 32;
                    v217 = (unsigned int)*(_QWORD *)(seed + 24) - 1LL;
                    while ( 1 )
                    {
                      v202 = *(_QWORD *)(v201 + 8 * v200);
                      if ( !v202 || *(_DWORD *)(v202 + 60) != 111 )
                        goto LABEL_133;
                      if ( !*(_BYTE *)(v215 + 128) )
                      {
                        seed = *(_QWORD *)(v215 + 176);
                        if ( !seed )
                          goto LABEL_159;
                        seed = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)seed, 0LL);
                        if ( (seed & 1) == 0
                          || (seed = *(_QWORD *)(v215 + 112)) == 0
                          || (seed = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)seed, 0LL),
                              (seed & 1) != 0) )
                        {
LABEL_133:
                          if ( v200 >= *(unsigned int *)(v197 + 24) )
                            goto LABEL_160;
                          v203 = *(_QWORD *)(v201 + 8 * v200);
                          v188 = sub_1BCAA2C(PartyOrganizationEventPointListViewItem_TypeInfo, max_length, v195, v196);
                          *(_DWORD *)(v188 + 136) = 1;
                          ListViewItem___ctor_41447164((ListViewItem_o *)v188, v104, 0LL);
                          *(_QWORD *)(v188 + 128) = v203;
                          seed = sub_1BCA784(v188 + 128, v203);
                          *(_DWORD *)(v188 + 136) = 1;
                          *(float *)(v188 + 92) = v80;
                          *(float *)(v188 + 96) = v198;
                          *(float *)(v188 + 100) = v82;
                          v204 = this->fields.seed;
                          if ( !v204 )
                            goto LABEL_159;
                          seed = (__int64)this->fields.itemList;
                          if ( !seed )
                            goto LABEL_159;
                          v205 = v204->fields.arrangementPich.fields.y;
                          v206 = *(_QWORD *)(seed + 16);
                          v207 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                          ++*(_DWORD *)(seed + 28);
                          if ( !v206 )
                            goto LABEL_159;
                          v208 = *(int *)(seed + 24);
                          if ( (unsigned int)v208 >= *(_DWORD *)(v206 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)seed,
                              (Il2CppObject *)v188,
                              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v209 = v206 + 8 * v208;
                            *(_DWORD *)(seed + 24) = v208 + 1;
                            *(_QWORD *)(v209 + 32) = v188;
                            seed = sub_1BCA784(v209 + 32, v188);
                          }
                          ++v104;
                          v198 = v198 + v205;
                          ++v199;
                        }
                      }
                      if ( v217 == v200 )
                        break;
                      if ( ++v200 >= *(unsigned int *)(v197 + 24) )
                        goto LABEL_160;
                    }
                    if ( v199 )
                    {
                      v75 = (ListViewManager_o *)this;
                      v103 = partyItema;
                      v81 = v198 + -8.0;
                      goto LABEL_150;
                    }
                    v75 = (ListViewManager_o *)this;
                  }
                  v103 = partyItema;
                  seed = (__int64)v75->fields.itemList;
                  if ( !seed )
                    break;
                  seed = System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)seed,
                           (Il2CppObject *)v188,
                           (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
                  v210 = v75->fields.seed;
                  if ( !v210 )
                    break;
                  v81 = v198 - v210->fields.arrangementPich.fields.y;
                }
LABEL_150:
                v164 = eventUpValList;
                ++v165;
              }
              while ( eventUpValList );
            }
          }
        }
      }
    }
LABEL_159:
    sub_1BCAA3C(seed, max_length);
  }
LABEL_155:
  emptyMessageLabel = v75->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, max_length);
  seed = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10386/*"PARTY_ORGANIZATION_EVENT_MEMBER_MESSAGE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_159;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)seed, 0LL);
  ListViewManager__DispItem(v75, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationEventPointListViewManager__DestroyList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.eventMargeUpValInfoList = 0LL;
  sub_1BCA784(&this->fields.eventMargeUpValInfoList, 0LL);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationEventPointListViewItem_o *__fastcall PartyOrganizationEventPointListViewManager__GetItem(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PartyOrganizationEventPointListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B11F41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&PartyOrganizationEventPointListViewItem_TypeInfo, v5, v6);
    byte_4B11F41 = 1;
  }
  result = (PartyOrganizationEventPointListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyOrganizationEventPointListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 EventUpVal; // x0
  __int64 v16; // x1
  ServantEntity_array *SvtEntityList; // x23
  System_String_array *SvtNameList; // x24
  System_Boolean_array *IsFollowerList; // x25
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  EventPartyMargeUpValInfo_o *v23; // x21
  const MethodInfo *v24; // x4
  EventUpValInfo_array *v25; // x8
  unsigned __int64 v26; // x22
  unsigned __int64 max_length; // x9
  Il2CppClass **v28; // x9
  EventUpValInfo_o *v29; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int v31; // w8
  __int64 v32; // x20
  __int64 v33; // x22
  Il2CppObject *v34; // x21
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  EventUpValInfo_array *v40; // [xsp+0h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4B11F3F & 1) == 0 )
  {
    sub_1BCA7E0(&EventPartyMargeUpValInfo_TypeInfo, *(_QWORD *)&eventId, partyItem);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v12, v13);
    byte_4B11F3F = 1;
  }
  v40 = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       partyItem,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !partyItem )
    goto LABEL_30;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, 0LL);
  SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, 0LL);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, 0LL);
  v23 = (EventPartyMargeUpValInfo_o *)sub_1BCAA2C(EventPartyMargeUpValInfo_TypeInfo, v20, v21, v22);
  EventPartyMargeUpValInfo___ctor(v23, eventId, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
  EventUpVal = PartyListViewItem__GetEventUpVal(partyItem, &eventIda, &v40, 0LL);
  if ( (EventUpVal & 1) != 0 )
  {
    v25 = v40;
    if ( !v40 )
      goto LABEL_30;
    v26 = 0LL;
    while ( 1 )
    {
      max_length = v25->max_length;
      if ( (__int64)v26 >= (int)max_length )
        break;
      if ( v26 >= max_length )
        goto LABEL_31;
      v28 = &v25->obj.klass + v26;
      v29 = (EventUpValInfo_o *)v28[4];
      if ( v29 )
      {
        questRestrictionInfo = partyItem->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_30;
        PartyOrganizationEventPointListViewManager__RemoveInvalidBonusSkill(
          (PartyOrganizationEventPointListViewManager_o *)EventUpVal,
          v26,
          (EventUpValInfo_o *)v28[4],
          questRestrictionInfo->fields.eventId,
          v24);
        EventUpVal = (__int64)EventUpValInfo__GetDropItemList(v29, v26, 0LL);
        if ( !v23 )
          goto LABEL_30;
        EventPartyMargeUpValInfo__Add(v23, (EventDropItemUpValInfo_array *)EventUpVal, 0LL);
        v25 = v40;
      }
      ++v26;
      if ( !v25 )
        goto LABEL_30;
    }
  }
  if ( !v23 )
    goto LABEL_30;
  EventUpVal = (__int64)EventPartyMargeUpValInfo__GetList(v23, 0LL);
  if ( EventUpVal )
  {
    v31 = *(_DWORD *)(EventUpVal + 24);
    v32 = EventUpVal;
    if ( v31 >= 1 )
    {
      v33 = 0LL;
      while ( (unsigned int)v33 < v31 )
      {
        v34 = *(Il2CppObject **)(v32 + 32 + 8 * v33);
        if ( !v34 )
          goto LABEL_30;
        EventUpVal = EventMargeItemUpValInfo__IsServantSelfValInfo(
                       *(EventMargeItemUpValInfo_o **)(v32 + 32 + 8 * v33),
                       0LL);
        if ( (EventUpVal & 1) == 0 )
        {
          if ( !v14 )
            goto LABEL_30;
          items = v14->fields._items;
          v36 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_30;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              v34,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v34;
            EventUpVal = sub_1BCA784(v38 + 4, v34);
          }
        }
        v31 = *(_DWORD *)(v32 + 24);
        if ( (int)++v33 >= v31 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1BCAA44(EventUpVal, v16);
    }
  }
LABEL_28:
  if ( !v14 )
LABEL_30:
    sub_1BCAA3C(EventUpVal, v16);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v14,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void __fastcall PartyOrganizationEventPointListViewManager__OnMoveEnd(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B11F46 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11F46 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784(&this->fields.callbackFunc2, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  void *Instance; // x0
  __int64 v19; // x1
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v21; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvMaster_o *v23; // x21
  int v24; // w8
  void *v25; // x22
  unsigned int v26; // w25
  __int64 v27; // x8
  System_Int32_array **v28; // x23
  int v29; // w8
  void *v30; // x24
  unsigned int v31; // w27
  __int64 v32; // x28
  __int64 v33; // x8
  __int64 v34; // x8
  int32_t actMaxRarity; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B11F3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&idx, eventUpVal);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16, v17);
    byte_4B11F3E = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !eventUpVal || !Instance )
    goto LABEL_33;
  Entity = ServantLimitMaster__GetEntity(
             (ServantLimitMaster_o *)Instance,
             eventUpVal->fields.svtId,
             eventUpVal->fields.limitCount,
             0LL);
  if ( Entity )
  {
    v21 = Entity;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( PartyOrganizationUtility__IsRarityRestriction(
           (PartyOrganizationUtility_o *)Instance,
           &skillName,
           &actMaxRarity,
           eventUpVal->fields.svtId,
           v21->fields.rarity,
           eventUpVal->fields.equipSvtId,
           eventId,
           0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !MasterData_object )
        goto LABEL_33;
      v23 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(
                   (ServantSkillMaster_o *)MasterData_object,
                   eventUpVal->fields.equipSvtId,
                   0LL);
      if ( !Instance )
        goto LABEL_33;
      v24 = *((_DWORD *)Instance + 6);
      v25 = Instance;
      if ( v24 >= 1 )
      {
        v26 = 0;
        while ( 1 )
        {
          if ( v26 >= v24 )
LABEL_34:
            sub_1BCAA44(Instance, v19);
          v27 = *((_QWORD *)v25 + (int)v26 + 4);
          if ( !v27 )
            break;
          if ( *(_DWORD *)(v27 + 48) )
          {
            if ( !v23 )
              break;
            Instance = SkillLvMaster__GetEntity(v23, *(_DWORD *)(v27 + 28), 1, 0LL);
            if ( Instance )
            {
              v28 = (System_Int32_array **)Instance;
              Instance = EventUpValInfo__GetDropItemList(eventUpVal, idx, 0LL);
              if ( !Instance )
                break;
              v29 = *((_DWORD *)Instance + 6);
              v30 = Instance;
              if ( v29 >= 1 )
              {
                v31 = 0;
                while ( 1 )
                {
                  if ( v31 >= v29 )
                    goto LABEL_34;
                  v32 = *((_QWORD *)v30 + (int)v31 + 4);
                  if ( !v32 )
                    goto LABEL_33;
                  v33 = *(_QWORD *)(v32 + 24);
                  if ( !v33 )
                    goto LABEL_33;
                  Instance = (void *)System_Array__IndexOf_int_(
                                       v28[4],
                                       *(_DWORD *)(v33 + 16),
                                       (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
                  if ( ((unsigned int)Instance & 0x80000000) == 0 )
                    break;
                  v29 = *((_DWORD *)v30 + 6);
                  if ( (int)++v31 >= v29 )
                    goto LABEL_31;
                }
                v34 = *(_QWORD *)(v32 + 24);
                if ( !v34 )
                  break;
                EventUpValInfo__RemoveDropItem(eventUpVal, *(_DWORD *)(v34 + 16), 0LL);
              }
            }
          }
LABEL_31:
          v24 = *((_DWORD *)v25 + 6);
          if ( (int)++v26 >= v24 )
            return;
        }
LABEL_33:
        sub_1BCAA3C(Instance, v19);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11F44 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__,
      v15,
      v16);
    sub_1BCA7E0(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B11F44 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(
        v28,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      PartyOrganizationEventPointListViewObject__Init_32593232(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v28,
        delay,
        v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__RequestListObject_32592120(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11F45 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__,
      v13,
      v14);
    sub_1BCA7E0(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B11F45 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)PartyOrganizationEventPointListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(
        v26,
        (Il2CppObject *)this,
        Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      PartyOrganizationEventPointListViewObject__Init_32592624(
        (PartyOrganizationEventPointListViewObject_o *)current,
        mode,
        v26,
        v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationEventPointListViewObject__Dispose__);
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
  sub_1BCA784(&this->fields.callbackFunc, callback);
  PartyOrganizationEventPointListViewManager__SetMode_32591588(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32591588(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  int32_t v15; // w1
  System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *ClippingObjectList; // x0
  __int64 v17; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  Il2CppObject *Item; // x0
  int32_t v22; // w29
  PartyOrganizationEventPointListViewObject_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x23
  const MethodInfo *v28; // x3
  int32_t v29; // w1

  if ( (byte_4B11F43 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__, v9, v10);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v11, v12);
    byte_4B11F43 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  switch ( mode )
  {
    case 3:
      ClippingObjectList = PartyOrganizationEventPointListViewManager__get_ClippingObjectList(this, v13);
      if ( ClippingObjectList )
      {
        size = ClippingObjectList->fields._size;
        v19 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
        if ( size < 1 )
        {
          this->fields.callbackCount = 1;
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
            0.0,
            0LL);
          return;
        }
        this->fields.callbackCount = size;
        v20 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v19,
                   v20,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__get_Item__);
          v22 = v19->fields._size;
          v23 = (PartyOrganizationEventPointListViewObject_o *)Item;
          v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
          System_Action___ctor(
            v27,
            (Il2CppObject *)this,
            Method_PartyOrganizationEventPointListViewManager_OnMoveEnd__,
            0LL);
          if ( !v23 )
            break;
          if ( v20 >= v22 - 1 )
            v29 = 5;
          else
            v29 = 2;
          PartyOrganizationEventPointListViewObject__Init_32592624(v23, v29, v27, v28);
          if ( ++v20 >= v19->fields._size )
            return;
        }
      }
      sub_1BCAA3C(ClippingObjectList, v17);
    case 2:
      v15 = 3;
      goto LABEL_17;
    case 1:
      v15 = 2;
LABEL_17:
      PartyOrganizationEventPointListViewManager__RequestListObject_32592120(this, v15, v14);
      break;
  }
}


void __fastcall PartyOrganizationEventPointListViewManager__SetMode_32592068(
        PartyOrganizationEventPointListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  PartyOrganizationEventPointListViewManager__SetMode_32591588(this, mode, v6);
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
  if ( (byte_4B11F42 & 1) == 0 )
  {
    this = (PartyOrganizationEventPointListViewManager_o *)sub_1BCA7E0(
                                                             &PartyOrganizationEventPointListViewObject_TypeInfo,
                                                             obj,
                                                             item);
    byte_4B11F42 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PartyOrganizationEventPointListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationEventPointListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationEventPointListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PartyOrganizationEventPointListViewObject__Init_32591464(
    (PartyOrganizationEventPointListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationEventPointListViewManager__TryGetCampaignFriendshipUpDropItemUpValInfo(
        PartyOrganizationEventPointListViewManager_o *this,
        EventDropItemUpValInfo_array **campaignFriendshipUpPoints,
        PartyListViewItem_o *partyItem,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_object__o *v52; // x19
  __int64 HeroineData; // x0
  __int64 v54; // x1
  System_Object_array *v55; // x0
  PartyOrganizationListViewItem_o *v56; // x22
  Il2CppObject *Master_object; // x23
  const MethodInfo *v59; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x19
  __int64 v62; // x8
  unsigned __int64 v63; // x28
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o *v64; // x20
  int32_t Item3; // w21
  int32_t Item2; // w23
  int32_t Item1; // w19
  __int64 v68; // x2
  __int64 v69; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x24
  PartyOrganizationEventPointListViewManager___c_c *v71; // x0
  System_Func_object__object__o *_9__30_0; // x25
  Il2CppObject *v73; // x26
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  PartyOrganizationEventPointListViewManager___c_c *v79; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x25
  System_Func_object__bool__o *_9__30_1; // x26
  Il2CppObject *v82; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v83; // x0
  Il2CppObject *v84; // x25
  PartyOrganizationEventPointListViewManager___c_c *v85; // x0
  System_Func_object__object__o *_9__30_2; // x26
  Il2CppObject *v87; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v88; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  PartyOrganizationEventPointListViewManager___c_c *v93; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x24
  System_Func_object__bool__o *_9__30_3; // x26
  Il2CppObject *v96; // x27
  struct PartyOrganizationEventPointListViewManager___c_StaticFields *v97; // x0
  Il2CppObject *v98; // x27
  __int64 v99; // x24
  __int64 v100; // x2
  __int64 v101; // x3
  FunctionGroupEntity_o *v102; // x26
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  EventDropUpValInfo_o *v106; // x23
  __int64 v107; // x2
  __int64 v108; // x3
  bool v109; // zf
  EventDropItemUpValInfo_o *v110; // x22
  struct System_Object_array *items; // x8
  _QWORD *v112; // x9
  __int64 size; // x10
  Il2CppClass **v114; // x0
  System_Object_array *v115; // x0
  EventDropItemUpValInfo_array **v116; // [xsp+8h] [xbp-88h]
  int32_t member; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_object__o *v118; // [xsp+18h] [xbp-78h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v119; // [xsp+28h] [xbp-68h]

  if ( (byte_4B11F47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, campaignFriendshipUpPoints, partyItem);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Single_string___, v16, v17);
    sub_1BCA7E0(&EventDropItemUpValInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&EventDropUpValInfo_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_EventEntity_ScriptData__string__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&FunctionEntity_TypeInfo, v26, v27);
    sub_1BCA7E0(&FunctionGroupEntity_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v36, v37);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v39);
    sub_1BCA7E0(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
      v40,
      v41);
    sub_1BCA7E0(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
      v42,
      v43);
    sub_1BCA7E0(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
      v44,
      v45);
    sub_1BCA7E0(
      &Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
      v46,
      v47);
    sub_1BCA7E0(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v48, v49);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v50, v51);
    byte_4B11F47 = 1;
  }
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                       campaignFriendshipUpPoints,
                                                       partyItem,
                                                       *(_QWORD *)&index);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  if ( !v52 )
    goto LABEL_76;
  v55 = System_Collections_Generic_List_object___ToArray(
          v52,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *campaignFriendshipUpPoints = (EventDropItemUpValInfo_array *)v55;
  HeroineData = sub_1BCA784(campaignFriendshipUpPoints, v55);
  if ( !partyItem )
    goto LABEL_76;
  HeroineData = (__int64)PartyListViewItem__GetMember(partyItem, index, 0LL);
  if ( !HeroineData )
    goto LABEL_76;
  v56 = (PartyOrganizationListViewItem_o *)HeroineData;
  if ( !*(_QWORD *)(HeroineData + 112) || *(_BYTE *)(HeroineData + 128) || !*(_QWORD *)(HeroineData + 336) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  SvtId = PartyOrganizationListViewItem__get_SvtId(v56, v59);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&SvtId.fields.fakeValue);
  HeroineData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
  if ( !Master_object )
    goto LABEL_76;
  HeroineData = (__int64)UserServantMaster__getHeroineData((UserServantMaster_o *)Master_object, HeroineData, 0LL);
  if ( HeroineData )
  {
    HeroineData = UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)HeroineData, 0LL);
    if ( (HeroineData & 1) == 0 )
      return 0;
  }
  v118 = v52;
  FriendshipUpValTuple_k__BackingField = v56->fields._FriendshipUpValTuple_k__BackingField;
  member = index;
  v116 = campaignFriendshipUpPoints;
  if ( !FriendshipUpValTuple_k__BackingField )
    goto LABEL_76;
  v62 = *(_QWORD *)&FriendshipUpValTuple_k__BackingField->max_length;
  if ( (int)v62 >= 1 )
  {
    v63 = 0LL;
    v64 = &FriendshipUpValTuple_k__BackingField->m_Items[1];
    v119 = v56->fields._FriendshipUpValTuple_k__BackingField;
    do
    {
      if ( v63 >= (unsigned int)v62 )
        sub_1BCAA44(HeroineData, v54);
      Item3 = v64[-1].fields.Item3;
      if ( Item3 < 1 )
        goto LABEL_73;
      Item2 = v64[-1].fields.Item2;
      Item1 = v64->fields.Item1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54);
      HeroineData = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !HeroineData )
        goto LABEL_76;
      HeroineData = (__int64)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)HeroineData,
                               Item2,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !HeroineData )
        goto LABEL_76;
      v70 = *(System_Collections_Generic_IEnumerable_TSource__o **)(HeroineData + 120);
      if ( !v70 )
        goto LABEL_76;
      if ( v70[1].monitor )
      {
        v71 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo, v54);
          v71 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_0 = (System_Func_object__object__o *)v71->static_fields->__9__30_0;
        if ( !_9__30_0 )
        {
          if ( !v71->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v71, v54);
            v71 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v73 = (Il2CppObject *)v71->static_fields->__9;
          _9__30_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                        System_Func_EventEntity_ScriptData__string__TypeInfo,
                                                        v54,
                                                        v68,
                                                        v69);
          System_Func_object__object____ctor(
            _9__30_0,
            v73,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_0__,
            0LL);
          static_fields = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__30_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_0;
          sub_1BCA784(&static_fields->__9__30_0, _9__30_0);
        }
        v75 = System_Linq_Enumerable__Select_object__object_(
                v70,
                (System_Func_TSource__TResult__o *)_9__30_0,
                (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
        v79 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        v80 = (System_Collections_Generic_IEnumerable_TSource__o *)v75;
        if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo, v76);
          v79 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
        }
        _9__30_1 = (System_Func_object__bool__o *)v79->static_fields->__9__30_1;
        if ( !_9__30_1 )
        {
          if ( !v79->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v79, v76);
            v79 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          v82 = (Il2CppObject *)v79->static_fields->__9;
          _9__30_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v76, v77, v78);
          System_Func_object__bool____ctor(
            _9__30_1,
            v82,
            Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1__,
            0LL);
          v83 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
          v83->__9__30_1 = (struct System_Func_string__bool__o *)_9__30_1;
          sub_1BCA784(&v83->__9__30_1, _9__30_1);
        }
        v84 = System_Linq_Enumerable__Single_object__49579248(
                v80,
                (System_Func_TSource__bool__o *)_9__30_1,
                (const MethodInfo_2F484F0 *)Method_System_Linq_Enumerable_Single_string___);
        if ( v70[1].monitor )
        {
          v85 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo, v54);
            v85 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_2 = (System_Func_object__object__o *)v85->static_fields->__9__30_2;
          if ( !_9__30_2 )
          {
            if ( !v85->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v85, v54);
              v85 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v87 = (Il2CppObject *)v85->static_fields->__9;
            _9__30_2 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                          System_Func_EventEntity_ScriptData__string__TypeInfo,
                                                          v54,
                                                          v68,
                                                          v69);
            System_Func_object__object____ctor(
              _9__30_2,
              v87,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2__,
              0LL);
            v88 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v88->__9__30_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__30_2;
            sub_1BCA784(&v88->__9__30_2, _9__30_2);
          }
          v89 = System_Linq_Enumerable__Select_object__object_(
                  v70,
                  (System_Func_TSource__TResult__o *)_9__30_2,
                  (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
          v93 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          v94 = (System_Collections_Generic_IEnumerable_TSource__o *)v89;
          if ( !PartyOrganizationEventPointListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationEventPointListViewManager___c_TypeInfo, v90);
            v93 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
          }
          _9__30_3 = (System_Func_object__bool__o *)v93->static_fields->__9__30_3;
          if ( !_9__30_3 )
          {
            if ( !v93->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v93, v90);
              v93 = PartyOrganizationEventPointListViewManager___c_TypeInfo;
            }
            v96 = (Il2CppObject *)v93->static_fields->__9;
            _9__30_3 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v90, v91, v92);
            System_Func_object__bool____ctor(
              _9__30_3,
              v96,
              Method_PartyOrganizationEventPointListViewManager___c__TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3__,
              0LL);
            v97 = PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields;
            v97->__9__30_3 = (struct System_Func_string__bool__o *)_9__30_3;
            sub_1BCA784(&v97->__9__30_3, _9__30_3);
          }
          v98 = System_Linq_Enumerable__Single_object__49579248(
                  v94,
                  (System_Func_TSource__bool__o *)_9__30_3,
                  (const MethodInfo_2F484F0 *)Method_System_Linq_Enumerable_Single_string___);
          goto LABEL_56;
        }
      }
      else
      {
        v84 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      v98 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_56:
      v99 = sub_1BCAA2C(FunctionEntity_TypeInfo, v54, v68, v69);
      FunctionEntity___ctor((FunctionEntity_o *)v99, 0LL);
      if ( !v99 )
        goto LABEL_76;
      *(_DWORD *)(v99 + 16) = -2;
      *(_QWORD *)(v99 + 24) = 111LL;
      v102 = (FunctionGroupEntity_o *)sub_1BCAA2C(FunctionGroupEntity_TypeInfo, v54, v100, v101);
      FunctionGroupEntity___ctor(v102, 0LL);
      if ( !v102 )
        goto LABEL_76;
      v102->fields.funcId = -2;
      v102->fields.eventId = Item2;
      v102->fields.baseFuncId = 0;
      v102->fields.nameTotal = (struct System_String_o *)v84;
      sub_1BCA784(&v102->fields.nameTotal, v84);
      v102->fields.name = (struct System_String_o *)v98;
      sub_1BCA784(&v102->fields.name, v98);
      v102->fields.isDispValue = 1;
      v106 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, v103, v104, v105);
      EventDropUpValInfo___ctor(v106, 0, (FunctionEntity_o *)v99, 0LL);
      if ( Item1 == 2 )
      {
        FriendshipUpValTuple_k__BackingField = v119;
        if ( !v106 )
          goto LABEL_76;
        EventDropUpValInfo__SetRateCount(v106, Item3, 0, 0, 0LL);
      }
      else
      {
        v109 = Item1 == 1;
        FriendshipUpValTuple_k__BackingField = v119;
        if ( v109 )
        {
          if ( !v106 )
            goto LABEL_76;
          EventDropUpValInfo__SetAddCount(v106, Item3, 0, 0, 0LL);
        }
        else if ( !v106 )
        {
          goto LABEL_76;
        }
      }
      if ( v106->fields.rateCount > 0 || v106->fields.addCount >= 1 )
      {
        v110 = (EventDropItemUpValInfo_o *)sub_1BCAA2C(EventDropItemUpValInfo_TypeInfo, v54, v107, v108);
        EventDropItemUpValInfo___ctor(v110, member, v106, 0, 0LL);
        if ( !v110 )
          goto LABEL_76;
        v110->fields.baseFuncGroupEntity = v102;
        sub_1BCA784(&v110->fields.baseFuncGroupEntity, v102);
        v110->fields.funcGroupEntity = v102;
        HeroineData = sub_1BCA784(&v110->fields.funcGroupEntity, v102);
        v110->fields.targetType = *(_DWORD *)(v99 + 28);
        items = v118->fields._items;
        v112 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
        ++v118->fields._version;
        if ( !items )
          goto LABEL_76;
        size = v118->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v118,
            (Il2CppObject *)v110,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
        }
        else
        {
          v114 = &items->obj.klass + size;
          v118->fields._size = size + 1;
          v114[4] = (Il2CppClass *)v110;
          HeroineData = sub_1BCA784(v114 + 4, v110);
        }
      }
LABEL_73:
      LODWORD(v62) = FriendshipUpValTuple_k__BackingField->max_length;
      ++v63;
      ++v64;
    }
    while ( (__int64)v63 < (int)v62 );
  }
  v115 = System_Collections_Generic_List_object___ToArray(
           v118,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
  *v116 = (EventDropItemUpValInfo_array *)v115;
  HeroineData = sub_1BCA784(v116, v115);
  if ( !*v116 )
LABEL_76:
    sub_1BCAA3C(HeroineData, v54);
  return (*v116)->max_length != 0;
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

  if ( (byte_4B11F38 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11F38 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B11F3A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11F3A = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCACFC(v7);
  PartyOrganizationEventPointListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ClippingObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B11F3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11F3D = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)PartyOrganizationEventPointListViewObject__GetItem(
                                 (PartyOrganizationEventPointListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v21;
}


System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *__fastcall PartyOrganizationEventPointListViewManager__get_ObjectList(
        PartyOrganizationEventPointListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B11F3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11F3C = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationEventPointListViewObject__o *)v21;
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

  if ( (byte_4B11F39 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationEventPointListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11F39 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B11F3B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11F3B = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationEventPointListViewManager_o *)sub_1BCACFC(v7);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07438;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A073E0;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B11F48 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B11F48 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(PartyOrganizationEventPointListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall PartyOrganizationEventPointListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11F49 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationEventPointListViewManager___c_TypeInfo, v1, v2);
    byte_4B11F49 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PartyOrganizationEventPointListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationEventPointListViewManager___c_o *)v4;
  sub_1BCA784(PartyOrganizationEventPointListViewManager___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_1(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4B11F4A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, names, method);
    byte_4B11F4A = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_2(
        PartyOrganizationEventPointListViewManager___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1BCAA3C(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationEventPointListViewManager___c___TryGetCampaignFriendshipUpDropItemUpValInfo_b__30_3(
        PartyOrganizationEventPointListViewManager___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4B11F4B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, names, method);
    byte_4B11F4B = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}