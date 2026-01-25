void ScriptBranchListViewManager___ctor(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ScriptBranchListViewManager__CreateList(
        ScriptBranchListViewManager_o *this,
        System_Collections_Generic_List_List_string___o *list,
        bool isLine,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x22
  __int64 Item; // x0
  const MethodInfo *v8; // x1
  const MethodInfo_383EB2C **v9; // x24
  int32_t v10; // w23
  int v11; // w26
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o **v19; // x25
  System_String_o *v20; // x29
  Il2CppObject *v21; // x22
  System_String_o *Empty; // x19
  uint32_t v23; // w0
  int32_t checkType; // w26
  Il2CppObject *v25; // x0
  int32_t v26; // w0
  int v27; // w8
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x0
  int32_t v30; // w25
  __int64 routeId; // x27
  int32_t count; // w19
  int v33; // w8
  __int64 *v34; // x8
  Il2CppObject *v35; // x0
  System_Collections_Generic_List_object__o *v36; // x8
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  __int64 *v39; // x8
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x0
  System_Collections_Generic_List_object__o *v42; // x8
  int v43; // w9
  System_Collections_Generic_List_int__o *v44; // x19
  il2cpp_array_size_t v45; // x8
  __int64 v46; // x29
  unsigned __int64 v47; // x21
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppObject *v51; // x0
  Il2CppType *v52; // x21
  System_RuntimeTypeHandle_o v53; // x0
  System_Collections_Generic_List_object__o *v54; // x8
  System_Type_o *v55; // x25
  Il2CppObject *v56; // x21
  Il2CppObject *v57; // x0
  System_Collections_Generic_List_object__o *v58; // x8
  Il2CppObject *v59; // x0
  System_Collections_Generic_List_object__o *v60; // x8
  int v61; // w25
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x0
  Il2CppObject *v65; // x0
  System_Collections_Generic_List_object__o *v66; // x8
  Il2CppObject *v67; // x0
  int32_t v68; // w0
  Il2CppObject *v69; // x0
  System_Collections_Generic_List_object__o *v70; // x8
  Il2CppObject *v71; // x0
  int32_t v72; // w0
  Il2CppObject *v73; // x0
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  int32_t v76; // w21
  int32_t v77; // w28
  System_String_o *v78; // x24
  ScriptBranchListViewItem_o *v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  const MethodInfo_383EB2C **v90; // x27
  int32_t v91; // w23
  System_String_o *v92; // x19
  System_Predicate_object__o *v93; // x21
  __int64 v94; // x24
  int32_t Index; // w0
  System_String_o *v96; // x0
  int32_t v97; // w20
  int32_t v98; // w24
  System_String_o *v99; // x21
  ScriptBranchListViewItem_o *v100; // x28
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  int32_t v111; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  struct System_Object_array *items; // x8
  _QWORD *v120; // x9
  __int64 size; // x10
  __int64 v122; // x1
  Il2CppClass **v123; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v124; // x0
  const MethodInfo *v125; // x1
  const MethodInfo *v126; // [xsp+28h] [xbp-B8h]
  ListViewManager_o *v127; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v128; // [xsp+40h] [xbp-A0h]
  int32_t v129; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v130; // [xsp+50h] [xbp-90h]
  System_Int32_array *v132; // [xsp+60h] [xbp-80h]
  System_Int32_array *v133; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v136; // [xsp+7Ch] [xbp-64h]

  if ( (byte_4CEBC15 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_CheckType_var);
    sub_1C7BAE8(&CondType_CheckType_TypeInfo);
    sub_1C7BAE8(&System_Enum_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_1C7BAE8(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_1C7BAE8(&ScriptBranchListViewItem_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&System_Type_TypeInfo);
    sub_1C7BAE8(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_1C7BAE8(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17491/*"branchQuestClear"*/);
    sub_1C7BAE8(&StringLiteral_16117/*"] "*/);
    sub_1C7BAE8(&StringLiteral_17494/*"branchRouteSelectCount"*/);
    sub_1C7BAE8(&StringLiteral_152/*" - 1"*/);
    sub_1C7BAE8(&StringLiteral_17488/*"branchNotMaterial"*/);
    sub_1C7BAE8(&StringLiteral_21645/*"masterBranch"*/);
    sub_1C7BAE8(&StringLiteral_20438/*"ifClear"*/);
    sub_1C7BAE8(&StringLiteral_17493/*"branchRouteSelect"*/);
    sub_1C7BAE8(&StringLiteral_17487/*"branchNotHaveSvtEquip"*/);
    sub_1C7BAE8(&StringLiteral_23323/*"revivalBranch"*/);
    sub_1C7BAE8(&StringLiteral_17486/*"branchMaterial"*/);
    sub_1C7BAE8(&StringLiteral_17489/*"branchNotRouteSelect"*/);
    sub_1C7BAE8(&StringLiteral_17485/*"branchHaveSvtEquip"*/);
    sub_1C7BAE8(&StringLiteral_17051/*"bScene"*/);
    sub_1C7BAE8(&StringLiteral_24203/*"tRoute"*/);
    sub_1C7BAE8(&StringLiteral_17492/*"branchQuestNotClear"*/);
    sub_1C7BAE8(&StringLiteral_17490/*"branchNotRouteSelectCount"*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    byte_4CEBC15 = 1;
  }
  v127 = (ListViewManager_o *)this;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !list )
    goto LABEL_164;
  if ( list->fields._size < 1 )
  {
LABEL_154:
    if ( v6 )
    {
      ListViewManager__CreateList(v127, v6->fields._size, 0);
      if ( v6->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v127, -1, 0, -1, 0);
        return;
      }
      v111 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v127->fields.itemList;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v6,
                          v111,
                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v120 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v122 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
        }
        else
        {
          v123 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v123[4] = (Il2CppClass *)v122;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v123 + 4), v122, v113, v114, v115, v116, v117, v118);
        }
        if ( ++v111 >= v6->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1C7BD40(Item, v8);
  }
  v9 = (const MethodInfo_383EB2C **)&Method_System_Collections_Generic_List_string__get_Item__;
  v10 = 0;
  v11 = 0;
  v128 = list;
  v130 = v6;
  while ( 1 )
  {
    v12 = sub_1C7BD34(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v10,
                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v12 )
      goto LABEL_164;
    *(_QWORD *)(v12 + 16) = Item;
    v19 = (System_Collections_Generic_List_object__o **)(v12 + 16);
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 16), Item, v13, v14, v15, v16, v17, v18);
    Item = *(_QWORD *)(v12 + 16);
    if ( !Item )
      goto LABEL_164;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      0,
                      *v9);
    if ( !*v19 )
      goto LABEL_164;
    v20 = (System_String_o *)Item;
    v21 = System_Collections_Generic_List_object___get_Item(*v19, 1, *v9);
    Item = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(v12 + 24) = 0xFFFFFFFFLL;
    if ( !Item )
      goto LABEL_164;
    if ( *(int *)(Item + 24) >= 7 )
      Empty = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)Item,
                                   6,
                                   *v9);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    v23 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v21, 0);
    v136 = v11;
    debugComment = Empty;
    if ( v23 <= 0x5D81BB60 )
    {
      if ( v23 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v23 == 369362287 )
        {
          routeId = 0;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17488/*"branchNotMaterial"*/, 0) )
            v33 = 1;
          else
            v33 = -1;
          goto LABEL_136;
        }
        if ( v23 != 651066131 )
        {
          if ( v23 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17485/*"branchHaveSvtEquip"*/, 0) )
            {
              Item = (__int64)*v19;
              if ( !*v19 )
                goto LABEL_164;
              v25 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      2,
                      *v9);
              v26 = System_Int32__Parse((System_String_o *)v25, 0);
              v27 = 5;
LABEL_35:
              v30 = v26;
              routeId = 0;
              count = -1;
              checkType = 1;
              branchType = v27;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17051/*"bScene"*/, 0) )
          goto LABEL_118;
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v35 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v35, 0);
        v36 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
        *(_DWORD *)(v12 + 24) = Item;
        if ( !v36 )
          goto LABEL_164;
        v37 = System_Collections_Generic_List_object___get_Item(v36, 3, *v9);
        *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v37, 0);
        Item = sub_1C7BB90(int___TypeInfo, 1);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = Item;
        v38 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                4,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v38, 0);
        if ( !routeId )
          goto LABEL_164;
        if ( !*(_DWORD *)(routeId + 24) )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v33 = 11;
        *(_DWORD *)(routeId + 32) = Item;
        goto LABEL_136;
      }
      if ( v23 <= 0x4E750E71 )
      {
        if ( v23 != 1053116368 )
        {
          if ( v23 == 1316294257
            && System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17487/*"branchNotHaveSvtEquip"*/, 0) )
          {
            Item = (__int64)*v19;
            if ( !*v19 )
              goto LABEL_164;
            v29 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v9);
            v26 = System_Int32__Parse((System_String_o *)v29, 0);
            v27 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_24203/*"tRoute"*/, 0) )
          goto LABEL_118;
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v40 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v40, 0);
        Item = sub_1C7BB90(int___TypeInfo, 1);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = Item;
        v41 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                3,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v41, 0);
        if ( !routeId )
          goto LABEL_164;
        if ( !*(_DWORD *)(routeId + 24) )
          goto LABEL_165;
        *(_DWORD *)(routeId + 32) = Item;
        count = -1;
        checkType = 1;
        v33 = 10;
        goto LABEL_136;
      }
      if ( v23 != 1408301323 )
      {
        if ( v23 == 1568783200 )
        {
          routeId = 0;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_23323/*"revivalBranch"*/, 0) )
            v33 = 4;
          else
            v33 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v30 = -1;
        goto LABEL_138;
      }
      v39 = &StringLiteral_17489/*"branchNotRouteSelect"*/;
      goto LABEL_105;
    }
    if ( v23 > 0xA9C7DB00 )
      break;
    if ( v23 > 0x83820B5B )
    {
      if ( v23 != -1606428809 )
      {
        if ( v23 == -1446520064 )
        {
          routeId = 0;
          count = -1;
          checkType = 1;
          v33 = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17486/*"branchMaterial"*/, 0) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_20438/*"ifClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_164;
      v57 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      Item = System_Int32__Parse((System_String_o *)v57, 0);
      v58 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v58 )
        goto LABEL_164;
      v59 = System_Collections_Generic_List_object___get_Item(v58, 3, *v9);
      routeId = 0;
      *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v59, 0);
      count = -1;
      checkType = 1;
      v33 = 9;
      goto LABEL_136;
    }
    if ( v23 != -2116001178 )
    {
      if ( v23 != -2088629413
        || !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17492/*"branchQuestNotClear"*/, 0) )
      {
        goto LABEL_118;
      }
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_164;
      v28 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v28, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v65 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v65, 0);
      }
      v66 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v66 )
        goto LABEL_164;
      v67 = System_Collections_Generic_List_object___get_Item(v66, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v67, 0) )
      {
        v68 = 0;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v73 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v68 = System_Int32__Parse((System_String_o *)v73, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v68;
      count = -1;
      checkType = 1;
      v33 = 3;
      goto LABEL_136;
    }
    v39 = &StringLiteral_17493/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)*v39, 0) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17493/*"branchRouteSelect"*/, 0);
    v60 = *v19;
    if ( (Item & 1) != 0 )
      v61 = 7;
    else
      v61 = 8;
    if ( !v60 )
      goto LABEL_164;
    v62 = System_Collections_Generic_List_object___get_Item(v60, 2, *v9);
    *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v62, 0);
    Item = sub_1C7BB90(int___TypeInfo, 1);
    if ( !*(_QWORD *)(v12 + 16) )
      goto LABEL_164;
    routeId = Item;
    v63 = System_Collections_Generic_List_object___get_Item(
            *(System_Collections_Generic_List_object__o **)(v12 + 16),
            3,
            *v9);
    Item = System_Int32__Parse((System_String_o *)v63, 0);
    if ( !routeId )
      goto LABEL_164;
    branchType = v61;
    if ( !*(_DWORD *)(routeId + 24) )
      goto LABEL_165;
    checkType = 0;
    *(_DWORD *)(routeId + 32) = Item;
    v30 = -1;
    count = 1;
LABEL_138:
    v133 = (System_Int32_array *)routeId;
    if ( isLine )
    {
      v75 = System_String__Concat_64217180(
              (System_String_o *)StringLiteral_15862/*"["*/,
              v20,
              (System_String_o *)StringLiteral_16117/*"] "*/,
              (System_String_o *)v21,
              0);
      v76 = *(_DWORD *)(v12 + 24);
      v77 = *(_DWORD *)(v12 + 28);
      v78 = v75;
      v79 = (ScriptBranchListViewItem_o *)sub_1C7BD34(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v79,
        v136,
        v78,
        (System_String_o *)v21,
        v20,
        v76,
        v77,
        v30,
        (System_Int32_array *)routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v126);
      v6 = v130;
      if ( !v130 )
        goto LABEL_164;
      v86 = v130->fields._items;
      list = v128;
      v87 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v130->fields._version;
      if ( !v86 )
        goto LABEL_164;
      v88 = v130->fields._size;
      v9 = (const MethodInfo_383EB2C **)&Method_System_Collections_Generic_List_string__get_Item__;
      v11 = v136 + 1;
      if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v130,
          (Il2CppObject *)v79,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = &v86->obj.klass + v88;
        v130->fields._size = v88 + 1;
        v89[4] = (Il2CppClass *)v79;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v89 + 4), (int32_t)v79, v80, v81, v82, v83, v84, v85);
      }
    }
    else
    {
      v129 = v10;
      v90 = v9;
      v91 = count;
      v92 = (System_String_o *)v21;
      v93 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v94 = v12;
      System_Predicate_object____ctor(
        v93,
        (Il2CppObject *)v12,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0);
      v6 = v130;
      if ( !v130 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v130,
                (System_Predicate_T__o *)v93,
                (const MethodInfo_383F654 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( Index < 0 )
      {
        v96 = System_String__Concat_64176912(v92, (System_String_o *)StringLiteral_152/*" - 1"*/, 0);
        v97 = *(_DWORD *)(v12 + 24);
        v98 = *(_DWORD *)(v94 + 28);
        v99 = v96;
        v100 = (ScriptBranchListViewItem_o *)sub_1C7BD34(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v100,
          v136,
          v99,
          v92,
          v20,
          v97,
          v98,
          v30,
          v133,
          branchType,
          v91,
          checkType,
          debugComment,
          v126);
        v107 = v130->fields._items;
        v108 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v130->fields._version;
        if ( !v107 )
          goto LABEL_164;
        v109 = v130->fields._size;
        v9 = (const MethodInfo_383EB2C **)&Method_System_Collections_Generic_List_string__get_Item__;
        v10 = v129;
        v11 = v136 + 1;
        if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v130,
            (Il2CppObject *)v100,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
        }
        else
        {
          v110 = &v107->obj.klass + v109;
          v130->fields._size = v109 + 1;
          v110[4] = (Il2CppClass *)v100;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v110 + 4), (int32_t)v100, v101, v102, v103, v104, v105, v106);
        }
        list = v128;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v130,
                          Index,
                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v8);
        v11 = v136;
        v10 = v129;
        v9 = v90;
      }
    }
    if ( ++v10 >= list->fields._size )
      goto LABEL_154;
  }
  if ( v23 > 0xCB78578B )
  {
    if ( v23 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17491/*"branchQuestClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_164;
      v64 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v64, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v69 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v69, 0);
      }
      v70 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v70 )
        goto LABEL_164;
      v71 = System_Collections_Generic_List_object___get_Item(v70, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v71, 0) )
      {
        v72 = 0;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v74 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v72 = System_Int32__Parse((System_String_o *)v74, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v72;
      count = -1;
      checkType = 1;
      v33 = 2;
LABEL_136:
      branchType = v33;
      goto LABEL_137;
    }
    if ( v23 != -201512038 )
      goto LABEL_118;
    v34 = &StringLiteral_17490/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v23 != -1252550667 )
    {
      if ( v23 == -881305717 )
        System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_21645/*"masterBranch"*/, 0);
      goto LABEL_118;
    }
    v34 = &StringLiteral_17494/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)*v34, 0) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17494/*"branchRouteSelectCount"*/, 0);
  v42 = *v19;
  if ( (Item & 1) != 0 )
    v43 = 7;
  else
    v43 = 8;
  branchType = v43;
  if ( !v42 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(v42, 2, *v9);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v12 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0);
  v44 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v12 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v9);
  if ( !Item )
    goto LABEL_164;
  v132 = (System_Int32_array *)v20;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_164;
  v45 = *(_QWORD *)(Item + 24);
  v46 = Item;
  if ( (int)v45 >= 1 )
  {
    v47 = 0;
    while ( v47 < (unsigned int)v45 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v46 + 32 + 8 * v47), 0);
      if ( !v44 )
        goto LABEL_164;
      v48 = v44->fields._items;
      v49 = Method_System_Collections_Generic_List_int__Add__;
      ++v44->fields._version;
      if ( !v48 )
        goto LABEL_164;
      v50 = v44->fields._size;
      v8 = (const MethodInfo *)(unsigned int)Item;
      if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v44,
          Item,
          *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v44->fields._size = v50 + 1;
        v48->m_Items[v50] = Item;
      }
      LODWORD(v45) = *(_DWORD *)(v46 + 24);
      if ( (__int64)++v47 >= (int)v45 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1C7BD48(Item);
  }
LABEL_90:
  if ( !v44 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v44,
                    (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9 = (const MethodInfo_383EB2C **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v19 )
    goto LABEL_164;
  routeId = Item;
  v51 = System_Collections_Generic_List_object___get_Item(
          *v19,
          4,
          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v51, 0);
  v52 = CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v53.fields.value = (intptr_t)v52;
  Item = (__int64)System_Type__GetTypeFromHandle(v53, 0);
  v54 = *v19;
  if ( !*v19 )
    goto LABEL_164;
  v55 = (System_Type_o *)Item;
  v56 = System_Collections_Generic_List_object___get_Item(
          v54,
          5,
          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (__int64)System_Enum__Parse(v55, (System_String_o *)v56, 0);
  if ( !Item )
    goto LABEL_164;
  v20 = (System_String_o *)v132;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1C7C0DC(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v124, v125);
}


void ScriptBranchListViewManager__DestroyList(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


int32_t ScriptBranchListViewManager__GetClickResult(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.callbackIndex;
}


ScriptBranchListViewItem_o *ScriptBranchListViewManager__GetItem(
        ScriptBranchListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptBranchListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CEBC16 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&ScriptBranchListViewItem_TypeInfo);
    byte_4CEBC16 = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ScriptBranchListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ScriptBranchListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBranchListViewItem_TypeInfo )
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


void ScriptBranchListViewManager__OnClickListView(
        ScriptBranchListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  struct System_Action_o *callbackFunc; // x8

  if ( !obj )
    sub_1C7BD40(this, 0);
  Index = ListViewObject__get_Index(obj, 0);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


void ScriptBranchListViewManager__OnMoveEnd(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_4CEBC19 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBC19 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptBranchListViewManager__RequestListObject(
        ScriptBranchListViewManager_o *this,
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

  if ( (byte_4CEBC18 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_1C7BAE8(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEBC18 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v10, v11);
      ScriptBranchListViewObject__Init_37973564((ScriptBranchListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
  }
}


void ScriptBranchListViewManager__SetMode(
        ScriptBranchListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    ScriptBranchListViewManager__RequestListObject(this, 3, v10);
  }
}


void ScriptBranchListViewManager__SetObjectItem(
        ScriptBranchListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptBranchListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CEBC17 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1C7BAE8(&ScriptBranchListViewObject_TypeInfo);
    byte_4CEBC17 = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptBranchListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_37973564((ScriptBranchListViewObject_o *)obj, v7, 0, method);
}


void ScriptBranchListViewManager__add_callbackFunc(
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

  if ( (byte_4CEBC12 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEBC12 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  ScriptBranchListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *ScriptBranchListViewManager__get_ObjectList(
        ScriptBranchListViewManager_o *this,
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEBC14 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBC14 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptBranchListViewObject__o *)v3;
}


void ScriptBranchListViewManager__remove_callbackFunc(
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

  if ( (byte_4CEBC13 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEBC13 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  ScriptBranchListViewManager__get_ObjectList(v10, v11);
}


void ScriptBranchListViewManager___c__DisplayClass9_0___ctor(
        ScriptBranchListViewManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScriptBranchListViewManager___c__DisplayClass9_0___CreateList_b__0(
        ScriptBranchListViewManager___c__DisplayClass9_0_o *this,
        ScriptBranchListViewItem_o *o,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *data; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4CEBC1A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4CEBC1A = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1C7BD40(0, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}