void __fastcall ScriptBranchListViewManager___ctor(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ScriptBranchListViewManager__CreateList(
        ScriptBranchListViewManager_o *this,
        System_Collections_Generic_List_List_string___o *list,
        bool isLine,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x28
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
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  System_Collections_Generic_List_object__o *v48; // x22
  int64_t Item; // x0
  const MethodInfo *v50; // x1
  const MethodInfo_363C5C0 **v51; // x24
  int32_t v52; // w23
  int v53; // w26
  __int64 v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Collections_Generic_List_object__o **v61; // x25
  System_String_o *v62; // x29
  Il2CppObject *v63; // x22
  System_String_o *Empty; // x19
  uint32_t v65; // w0
  int32_t checkType; // w26
  Il2CppObject *v67; // x0
  int32_t v68; // w0
  int v69; // w8
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x0
  int32_t v72; // w25
  System_Int32_array *routeId; // x27
  int32_t count; // w19
  int v75; // w8
  __int64 *v76; // x8
  Il2CppObject *v77; // x0
  System_Collections_Generic_List_object__o *v78; // x8
  Il2CppObject *v79; // x0
  Il2CppObject *v80; // x0
  __int64 *v81; // x8
  Il2CppObject *v82; // x0
  Il2CppObject *v83; // x0
  System_Collections_Generic_List_object__o *v84; // x8
  int v85; // w9
  System_Collections_Generic_List_int__o *v86; // x19
  __int64 v87; // x8
  int64_t v88; // x29
  unsigned __int64 v89; // x21
  struct System_Int32_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppObject *v93; // x0
  intptr_t v94; // w21
  System_Collections_Generic_List_object__o *v95; // x8
  System_Type_o *v96; // x25
  Il2CppObject *v97; // x21
  Il2CppObject *v98; // x0
  System_Collections_Generic_List_object__o *v99; // x8
  Il2CppObject *v100; // x0
  System_Collections_Generic_List_object__o *v101; // x8
  int v102; // w25
  Il2CppObject *v103; // x0
  Il2CppObject *v104; // x0
  Il2CppObject *v105; // x0
  Il2CppObject *v106; // x0
  System_Collections_Generic_List_object__o *v107; // x8
  Il2CppObject *v108; // x0
  int32_t v109; // w0
  Il2CppObject *v110; // x0
  System_Collections_Generic_List_object__o *v111; // x8
  Il2CppObject *v112; // x0
  int32_t v113; // w0
  Il2CppObject *v114; // x0
  Il2CppObject *v115; // x0
  System_String_o *v116; // x0
  int32_t v117; // w21
  int32_t v118; // w28
  System_String_o *v119; // x24
  ScriptBranchListViewItem_o *v120; // x20
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  const MethodInfo_363C5C0 **v131; // x27
  int32_t v132; // w23
  System_String_o *v133; // x19
  System_Predicate_object__o *v134; // x21
  __int64 v135; // x24
  int32_t Index; // w0
  System_String_o *v137; // x0
  int32_t v138; // w20
  int32_t v139; // w24
  System_String_o *v140; // x21
  ScriptBranchListViewItem_o *v141; // x28
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  int32_t v152; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  struct System_Object_array *items; // x8
  _QWORD *v161; // x9
  __int64 size; // x10
  int64_t v163; // x1
  Il2CppClass **v164; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v165; // x0
  const MethodInfo *v166; // x1
  const MethodInfo *v167; // [xsp+28h] [xbp-B8h]
  ListViewManager_o *v168; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v169; // [xsp+40h] [xbp-A0h]
  int32_t v170; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v171; // [xsp+50h] [xbp-90h]
  System_Int32_array *v173; // [xsp+60h] [xbp-80h]
  System_Int32_array *v174; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v177; // [xsp+7Ch] [xbp-64h]
  System_RuntimeTypeHandle_o v178; // 0:w0.4

  v4 = (System_Collections_Generic_List_object__o *)list;
  if ( (byte_4BC51CE & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_CheckType_var, list);
    sub_1C1ABD4(&CondType_CheckType_TypeInfo, v6);
    sub_1C1ABD4(&System_Enum_TypeInfo, v7);
    sub_1C1ABD4(&int___TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_string___get_Count__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_string___get_Item__, v21);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1C1ABD4(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo, v23);
    sub_1C1ABD4(&System_Predicate_ScriptBranchListViewItem__TypeInfo, v24);
    sub_1C1ABD4(&ScriptBranchListViewItem_TypeInfo, v25);
    sub_1C1ABD4(&string_TypeInfo, v26);
    sub_1C1ABD4(&System_Type_TypeInfo, v27);
    sub_1C1ABD4(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__, v28);
    sub_1C1ABD4(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v29);
    sub_1C1ABD4(&StringLiteral_17711/*"branchQuestClear"*/, v30);
    sub_1C1ABD4(&StringLiteral_16337/*"] "*/, v31);
    sub_1C1ABD4(&StringLiteral_17714/*"branchRouteSelectCount"*/, v32);
    sub_1C1ABD4(&StringLiteral_162/*" - 1"*/, v33);
    sub_1C1ABD4(&StringLiteral_17708/*"branchNotMaterial"*/, v34);
    sub_1C1ABD4(&StringLiteral_21662/*"masterBranch"*/, v35);
    sub_1C1ABD4(&StringLiteral_20560/*"ifClear"*/, v36);
    sub_1C1ABD4(&StringLiteral_17713/*"branchRouteSelect"*/, v37);
    sub_1C1ABD4(&StringLiteral_17707/*"branchNotHaveSvtEquip"*/, v38);
    sub_1C1ABD4(&StringLiteral_23322/*"revivalBranch"*/, v39);
    sub_1C1ABD4(&StringLiteral_17706/*"branchMaterial"*/, v40);
    sub_1C1ABD4(&StringLiteral_17709/*"branchNotRouteSelect"*/, v41);
    sub_1C1ABD4(&StringLiteral_17705/*"branchHaveSvtEquip"*/, v42);
    sub_1C1ABD4(&StringLiteral_17272/*"bScene"*/, v43);
    sub_1C1ABD4(&StringLiteral_24234/*"tRoute"*/, v44);
    sub_1C1ABD4(&StringLiteral_17712/*"branchQuestNotClear"*/, v45);
    sub_1C1ABD4(&StringLiteral_17710/*"branchNotRouteSelectCount"*/, v46);
    sub_1C1ABD4(&StringLiteral_16075/*"["*/, v47);
    byte_4BC51CE = 1;
  }
  v168 = (ListViewManager_o *)this;
  v48 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !v4 )
    goto LABEL_164;
  if ( v4->fields._size < 1 )
  {
LABEL_154:
    if ( v48 )
    {
      ListViewManager__CreateList(v168, v48->fields._size, 0LL);
      if ( v48->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v168, -1, 0, -1, 0LL);
        return;
      }
      v152 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v168->fields.itemList;
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v48,
                          v152,
                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v161 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v163 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
        }
        else
        {
          v164 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v164[4] = (Il2CppClass *)v163;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v164 + 4), v163, v154, v155, v156, v157, v158, v159);
        }
        if ( ++v152 >= v48->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1C1AE30(Item, v50);
  }
  v51 = (const MethodInfo_363C5C0 **)&Method_System_Collections_Generic_List_string__get_Item__;
  v52 = 0;
  v53 = 0;
  v169 = v4;
  v171 = v48;
  while ( 1 )
  {
    v54 = sub_1C1AE20(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v54, 0LL);
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v4,
                      v52,
                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v54 )
      goto LABEL_164;
    *(_QWORD *)(v54 + 16) = Item;
    v61 = (System_Collections_Generic_List_object__o **)(v54 + 16);
    sub_1C1AB78((PartyOrganizationUtility_o *)(v54 + 16), Item, v55, v56, v57, v58, v59, v60);
    Item = *(_QWORD *)(v54 + 16);
    if ( !Item )
      goto LABEL_164;
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      0,
                      *v51);
    if ( !*v61 )
      goto LABEL_164;
    v62 = (System_String_o *)Item;
    v63 = System_Collections_Generic_List_object___get_Item(*v61, 1, *v51);
    Item = *(_QWORD *)(v54 + 16);
    *(_QWORD *)(v54 + 24) = 0xFFFFFFFFLL;
    if ( !Item )
      goto LABEL_164;
    if ( *(int *)(Item + 24) >= 7 )
      Empty = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)Item,
                                   6,
                                   *v51);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    v65 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v63, 0LL);
    v177 = v53;
    debugComment = Empty;
    if ( v65 <= 0x5D81BB60 )
    {
      if ( v65 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v65 == 369362287 )
        {
          routeId = 0LL;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17708/*"branchNotMaterial"*/, 0LL) )
            v75 = 1;
          else
            v75 = -1;
          goto LABEL_136;
        }
        if ( v65 != 651066131 )
        {
          if ( v65 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17705/*"branchHaveSvtEquip"*/, 0LL) )
            {
              Item = (int64_t)*v61;
              if ( !*v61 )
                goto LABEL_164;
              v67 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      2,
                      *v51);
              v68 = System_Int32__Parse((System_String_o *)v67, 0LL);
              v69 = 5;
LABEL_35:
              v72 = v68;
              routeId = 0LL;
              count = -1;
              checkType = 1;
              branchType = v69;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0LL;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17272/*"bScene"*/, 0LL) )
          goto LABEL_118;
        Item = (int64_t)*v61;
        if ( !*v61 )
          goto LABEL_164;
        v77 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v51);
        Item = System_Int32__Parse((System_String_o *)v77, 0LL);
        v78 = *(System_Collections_Generic_List_object__o **)(v54 + 16);
        *(_DWORD *)(v54 + 24) = Item;
        if ( !v78 )
          goto LABEL_164;
        v79 = System_Collections_Generic_List_object___get_Item(v78, 3, *v51);
        *(_DWORD *)(v54 + 28) = System_Int32__Parse((System_String_o *)v79, 0LL);
        Item = sub_1C1AC7C(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v54 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v80 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v54 + 16),
                4,
                *v51);
        Item = System_Int32__Parse((System_String_o *)v80, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v75 = 11;
        routeId->m_Items[1] = Item;
        goto LABEL_136;
      }
      if ( v65 <= 0x4E750E71 )
      {
        if ( v65 != 1053116368 )
        {
          if ( v65 == 1316294257
            && System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17707/*"branchNotHaveSvtEquip"*/, 0LL) )
          {
            Item = (int64_t)*v61;
            if ( !*v61 )
              goto LABEL_164;
            v71 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v51);
            v68 = System_Int32__Parse((System_String_o *)v71, 0LL);
            v69 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_24234/*"tRoute"*/, 0LL) )
          goto LABEL_118;
        Item = (int64_t)*v61;
        if ( !*v61 )
          goto LABEL_164;
        v82 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v51);
        *(_DWORD *)(v54 + 24) = System_Int32__Parse((System_String_o *)v82, 0LL);
        Item = sub_1C1AC7C(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v54 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v83 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v54 + 16),
                3,
                *v51);
        Item = System_Int32__Parse((System_String_o *)v83, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        routeId->m_Items[1] = Item;
        count = -1;
        checkType = 1;
        v75 = 10;
        goto LABEL_136;
      }
      if ( v65 != 1408301323 )
      {
        if ( v65 == 1568783200 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_23322/*"revivalBranch"*/, 0LL) )
            v75 = 4;
          else
            v75 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0LL;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v72 = -1;
        goto LABEL_138;
      }
      v81 = &StringLiteral_17709/*"branchNotRouteSelect"*/;
      goto LABEL_105;
    }
    if ( v65 > 0xA9C7DB00 )
      break;
    if ( v65 > 0x83820B5B )
    {
      if ( v65 != -1606428809 )
      {
        if ( v65 == -1446520064 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          v75 = System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17706/*"branchMaterial"*/, 0LL) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_20560/*"ifClear"*/, 0LL) )
        goto LABEL_118;
      Item = (int64_t)*v61;
      if ( !*v61 )
        goto LABEL_164;
      v98 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v51);
      Item = System_Int32__Parse((System_String_o *)v98, 0LL);
      v99 = *(System_Collections_Generic_List_object__o **)(v54 + 16);
      *(_DWORD *)(v54 + 24) = Item;
      if ( !v99 )
        goto LABEL_164;
      v100 = System_Collections_Generic_List_object___get_Item(v99, 3, *v51);
      routeId = 0LL;
      *(_DWORD *)(v54 + 28) = System_Int32__Parse((System_String_o *)v100, 0LL);
      count = -1;
      checkType = 1;
      v75 = 9;
      goto LABEL_136;
    }
    if ( v65 != -2116001178 )
    {
      if ( v65 != -2088629413
        || !System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17712/*"branchQuestNotClear"*/, 0LL) )
      {
        goto LABEL_118;
      }
      Item = (int64_t)*v61;
      if ( !*v61 )
        goto LABEL_164;
      v70 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v51);
      if ( System_String__IsNullOrEmpty((System_String_o *)v70, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (int64_t)*v61;
        if ( !*v61 )
          goto LABEL_164;
        v106 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v51);
        Item = System_Int32__Parse((System_String_o *)v106, 0LL);
      }
      v107 = *(System_Collections_Generic_List_object__o **)(v54 + 16);
      *(_DWORD *)(v54 + 24) = Item;
      if ( !v107 )
        goto LABEL_164;
      v108 = System_Collections_Generic_List_object___get_Item(v107, 3, *v51);
      if ( System_String__IsNullOrEmpty((System_String_o *)v108, 0LL) )
      {
        v109 = 0;
      }
      else
      {
        Item = (int64_t)*v61;
        if ( !*v61 )
          goto LABEL_164;
        v114 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v51);
        v109 = System_Int32__Parse((System_String_o *)v114, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v54 + 28) = v109;
      count = -1;
      checkType = 1;
      v75 = 3;
      goto LABEL_136;
    }
    v81 = &StringLiteral_17713/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v63, (System_String_o *)*v81, 0LL) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17713/*"branchRouteSelect"*/, 0LL);
    v101 = *v61;
    if ( (Item & 1) != 0 )
      v102 = 7;
    else
      v102 = 8;
    if ( !v101 )
      goto LABEL_164;
    v103 = System_Collections_Generic_List_object___get_Item(v101, 2, *v51);
    *(_DWORD *)(v54 + 24) = System_Int32__Parse((System_String_o *)v103, 0LL);
    Item = sub_1C1AC7C(int___TypeInfo, 1LL);
    if ( !*(_QWORD *)(v54 + 16) )
      goto LABEL_164;
    routeId = (System_Int32_array *)Item;
    v104 = System_Collections_Generic_List_object___get_Item(
             *(System_Collections_Generic_List_object__o **)(v54 + 16),
             3,
             *v51);
    Item = System_Int32__Parse((System_String_o *)v104, 0LL);
    if ( !routeId )
      goto LABEL_164;
    branchType = v102;
    if ( !routeId->max_length )
      goto LABEL_165;
    checkType = 0;
    routeId->m_Items[1] = Item;
    v72 = -1;
    count = 1;
LABEL_138:
    v174 = routeId;
    if ( isLine )
    {
      v116 = System_String__Concat_63053632(
               (System_String_o *)StringLiteral_16075/*"["*/,
               v62,
               (System_String_o *)StringLiteral_16337/*"] "*/,
               (System_String_o *)v63,
               0LL);
      v117 = *(_DWORD *)(v54 + 24);
      v118 = *(_DWORD *)(v54 + 28);
      v119 = v116;
      v120 = (ScriptBranchListViewItem_o *)sub_1C1AE20(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v120,
        v177,
        v119,
        (System_String_o *)v63,
        v62,
        v117,
        v118,
        v72,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v167);
      v48 = v171;
      if ( !v171 )
        goto LABEL_164;
      v127 = v171->fields._items;
      v4 = v169;
      v128 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v171->fields._version;
      if ( !v127 )
        goto LABEL_164;
      v129 = v171->fields._size;
      v51 = (const MethodInfo_363C5C0 **)&Method_System_Collections_Generic_List_string__get_Item__;
      v53 = v177 + 1;
      if ( (unsigned int)v129 >= v127->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v171,
          (Il2CppObject *)v120,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
      }
      else
      {
        v130 = &v127->obj.klass + v129;
        v171->fields._size = v129 + 1;
        v130[4] = (Il2CppClass *)v120;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v130 + 4), (int64_t)v120, v121, v122, v123, v124, v125, v126);
      }
    }
    else
    {
      v170 = v52;
      v131 = v51;
      v132 = count;
      v133 = (System_String_o *)v63;
      v134 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v135 = v54;
      System_Predicate_object____ctor(
        v134,
        (Il2CppObject *)v54,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0LL);
      v48 = v171;
      if ( !v171 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v171,
                (System_Predicate_T__o *)v134,
                (const MethodInfo_363D0E8 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v137 = System_String__Concat_63040368(v133, (System_String_o *)StringLiteral_162/*" - 1"*/, 0LL);
        v138 = *(_DWORD *)(v54 + 24);
        v139 = *(_DWORD *)(v135 + 28);
        v140 = v137;
        v141 = (ScriptBranchListViewItem_o *)sub_1C1AE20(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v141,
          v177,
          v140,
          v133,
          v62,
          v138,
          v139,
          v72,
          v174,
          branchType,
          v132,
          checkType,
          debugComment,
          v167);
        v148 = v171->fields._items;
        v149 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v171->fields._version;
        if ( !v148 )
          goto LABEL_164;
        v150 = v171->fields._size;
        v51 = (const MethodInfo_363C5C0 **)&Method_System_Collections_Generic_List_string__get_Item__;
        v52 = v170;
        v53 = v177 + 1;
        if ( (unsigned int)v150 >= v148->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v171,
            (Il2CppObject *)v141,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
        }
        else
        {
          v151 = &v148->obj.klass + v150;
          v171->fields._size = v150 + 1;
          v151[4] = (Il2CppClass *)v141;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v151 + 4), (int64_t)v141, v142, v143, v144, v145, v146, v147);
        }
        v4 = v169;
      }
      else
      {
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v171,
                          Index,
                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v50);
        v53 = v177;
        v52 = v170;
        v51 = v131;
      }
    }
    if ( ++v52 >= v4->fields._size )
      goto LABEL_154;
  }
  if ( v65 > 0xCB78578B )
  {
    if ( v65 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17711/*"branchQuestClear"*/, 0LL) )
        goto LABEL_118;
      Item = (int64_t)*v61;
      if ( !*v61 )
        goto LABEL_164;
      v105 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               2,
               *v51);
      if ( System_String__IsNullOrEmpty((System_String_o *)v105, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (int64_t)*v61;
        if ( !*v61 )
          goto LABEL_164;
        v110 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v51);
        Item = System_Int32__Parse((System_String_o *)v110, 0LL);
      }
      v111 = *(System_Collections_Generic_List_object__o **)(v54 + 16);
      *(_DWORD *)(v54 + 24) = Item;
      if ( !v111 )
        goto LABEL_164;
      v112 = System_Collections_Generic_List_object___get_Item(v111, 3, *v51);
      if ( System_String__IsNullOrEmpty((System_String_o *)v112, 0LL) )
      {
        v113 = 0;
      }
      else
      {
        Item = (int64_t)*v61;
        if ( !*v61 )
          goto LABEL_164;
        v115 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v51);
        v113 = System_Int32__Parse((System_String_o *)v115, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v54 + 28) = v113;
      count = -1;
      checkType = 1;
      v75 = 2;
LABEL_136:
      branchType = v75;
      goto LABEL_137;
    }
    if ( v65 != -201512038 )
      goto LABEL_118;
    v76 = &StringLiteral_17710/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v65 != -1252550667 )
    {
      if ( v65 == -881305717 )
        System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_21662/*"masterBranch"*/, 0LL);
      goto LABEL_118;
    }
    v76 = &StringLiteral_17714/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v63, (System_String_o *)*v76, 0LL) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v63, (System_String_o *)StringLiteral_17714/*"branchRouteSelectCount"*/, 0LL);
  v84 = *v61;
  if ( (Item & 1) != 0 )
    v85 = 7;
  else
    v85 = 8;
  branchType = v85;
  if ( !v84 )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_object___get_Item(v84, 2, *v51);
  if ( !Item )
    goto LABEL_164;
  Item = (int64_t)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v54 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0LL);
  v86 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v86,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v54 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v51);
  if ( !Item )
    goto LABEL_164;
  v173 = (System_Int32_array *)v62;
  Item = (int64_t)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  v87 = *(_QWORD *)(Item + 24);
  v88 = Item;
  if ( (int)v87 >= 1 )
  {
    v89 = 0LL;
    while ( v89 < (unsigned int)v87 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v88 + 32 + 8 * v89), 0LL);
      if ( !v86 )
        goto LABEL_164;
      v90 = v86->fields._items;
      v91 = Method_System_Collections_Generic_List_int__Add__;
      ++v86->fields._version;
      if ( !v90 )
        goto LABEL_164;
      v92 = v86->fields._size;
      v50 = (const MethodInfo *)(unsigned int)Item;
      if ( (unsigned int)v92 >= v90->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v86,
          Item,
          *(const MethodInfo_361F86C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v86->fields._size = v92 + 1;
        v90->m_Items[v92 + 1] = Item;
      }
      LODWORD(v87) = *(_DWORD *)(v88 + 24);
      if ( (__int64)++v89 >= (int)v87 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1C1AE38(Item, v50);
  }
LABEL_90:
  if ( !v86 )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_int___ToArray(
                    v86,
                    (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  v51 = (const MethodInfo_363C5C0 **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v61 )
    goto LABEL_164;
  routeId = (System_Int32_array *)Item;
  v93 = System_Collections_Generic_List_object___get_Item(
          *v61,
          4,
          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v93, 0LL);
  v94 = (int)CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v178.fields.value = v94;
  Item = (int64_t)System_Type__GetTypeFromHandle(v178, 0LL);
  v95 = *v61;
  if ( !*v61 )
    goto LABEL_164;
  v96 = (System_Type_o *)Item;
  v97 = System_Collections_Generic_List_object___get_Item(
          v95,
          5,
          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (int64_t)System_Enum__Parse(v96, (System_String_o *)v97, 0LL);
  if ( !Item )
    goto LABEL_164;
  v62 = (System_String_o *)v173;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1C1B0F0(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v165, v166);
}


void __fastcall ScriptBranchListViewManager__DestroyList(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall ScriptBranchListViewManager__GetClickResult(
        ScriptBranchListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.callbackIndex;
}


// local variable allocation has failed, the output may be wrong!
ScriptBranchListViewItem_o *__fastcall ScriptBranchListViewManager__GetItem(
        ScriptBranchListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ScriptBranchListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BC51CF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&ScriptBranchListViewItem_TypeInfo, v5);
    byte_4BC51CF = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ScriptBranchListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ScriptBranchListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptBranchListViewItem_TypeInfo )
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


void __fastcall ScriptBranchListViewManager__OnClickListView(
        ScriptBranchListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  struct System_Action_o *callbackFunc; // x8

  if ( !obj )
    sub_1C1AE30(this, 0LL);
  Index = ListViewObject__get_Index(obj, 0LL);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall ScriptBranchListViewManager__OnMoveEnd(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_4BC51D2 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC51D2 = 1;
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
          sub_1C1AE30(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewManager__RequestListObject(
        ScriptBranchListViewManager_o *this,
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

  if ( (byte_4BC51D1 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__, v9);
    sub_1C1ABD4(&Method_ScriptBranchListViewManager_OnMoveEnd__, v10);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v11);
    byte_4BC51D1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v17, v18);
      ScriptBranchListViewObject__Init_35985556((ScriptBranchListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
  }
}


void __fastcall ScriptBranchListViewManager__SetMode(
        ScriptBranchListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    ScriptBranchListViewManager__RequestListObject(this, 3, v10);
  }
}


void __fastcall ScriptBranchListViewManager__SetObjectItem(
        ScriptBranchListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptBranchListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4BC51D0 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1C1ABD4(&ScriptBranchListViewObject_TypeInfo, obj);
    byte_4BC51D0 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptBranchListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1C1AE30(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_35985556((ScriptBranchListViewObject_o *)obj, v7, 0LL, method);
}


void __fastcall ScriptBranchListViewManager__add_callbackFunc(
        ScriptBranchListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptBranchListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4BC51CB & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC51CB = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
  ScriptBranchListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *__fastcall ScriptBranchListViewManager__get_ObjectList(
        ScriptBranchListViewManager_o *this,
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC51CD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC51CD = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C1AE30(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptBranchListViewObject__o *)v11;
}


void __fastcall ScriptBranchListViewManager__remove_callbackFunc(
        ScriptBranchListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptBranchListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4BC51CC & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC51CC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
  ScriptBranchListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ScriptBranchListViewManager___c__DisplayClass9_0___ctor(
        ScriptBranchListViewManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ScriptBranchListViewManager___c__DisplayClass9_0___CreateList_b__0(
        ScriptBranchListViewManager___c__DisplayClass9_0_o *this,
        ScriptBranchListViewItem_o *o,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *data; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4BC51D3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, o);
    byte_4BC51D3 = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1C1AE30(0LL, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}