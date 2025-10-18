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
  const MethodInfo_37A2D54 **v8; // x24
  int32_t v9; // w23
  int v10; // w26
  __int64 v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o **v14; // x25
  System_String_o *v15; // x29
  Il2CppObject *v16; // x22
  System_String_o *Empty; // x19
  uint32_t v18; // w0
  int32_t checkType; // w26
  Il2CppObject *v20; // x0
  int32_t v21; // w0
  int v22; // w8
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x0
  int32_t v25; // w25
  __int64 routeId; // x27
  int32_t count; // w19
  int v28; // w8
  __int64 *v29; // x8
  Il2CppObject *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x8
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  __int64 *v34; // x8
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x0
  System_Collections_Generic_List_object__o *v37; // x8
  int v38; // w9
  System_Collections_Generic_List_int__o *v39; // x19
  il2cpp_array_size_t v40; // x8
  __int64 v41; // x29
  unsigned __int64 v42; // x21
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppObject *v46; // x0
  Il2CppType *v47; // x21
  System_RuntimeTypeHandle_o v48; // x0
  System_Collections_Generic_List_object__o *v49; // x8
  System_Type_o *v50; // x25
  Il2CppObject *v51; // x21
  Il2CppObject *v52; // x0
  System_Collections_Generic_List_object__o *v53; // x8
  Il2CppObject *v54; // x0
  System_Collections_Generic_List_object__o *v55; // x8
  int v56; // w25
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x0
  Il2CppObject *v59; // x0
  Il2CppObject *v60; // x0
  System_Collections_Generic_List_object__o *v61; // x8
  Il2CppObject *v62; // x0
  int32_t v63; // w0
  Il2CppObject *v64; // x0
  System_Collections_Generic_List_object__o *v65; // x8
  Il2CppObject *v66; // x0
  int32_t v67; // w0
  Il2CppObject *v68; // x0
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  int32_t v71; // w21
  int32_t v72; // w28
  System_String_o *v73; // x24
  ScriptBranchListViewItem_o *v74; // x20
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  const MethodInfo_37A2D54 **v81; // x27
  int32_t v82; // w23
  System_String_o *v83; // x19
  System_Predicate_object__o *v84; // x21
  __int64 v85; // x24
  int32_t Index; // w0
  const MethodInfo *v87; // x1
  System_String_o *v88; // x0
  int32_t v89; // w20
  int32_t v90; // w24
  System_String_o *v91; // x21
  ScriptBranchListViewItem_o *v92; // x28
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  int32_t v99; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  __int64 v106; // x1
  Il2CppClass **v107; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v108; // x0
  const MethodInfo *v109; // x1
  const MethodInfo *v110; // [xsp+28h] [xbp-B8h]
  ListViewManager_o *v111; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v112; // [xsp+40h] [xbp-A0h]
  int32_t v113; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v114; // [xsp+50h] [xbp-90h]
  System_Int32_array *v116; // [xsp+60h] [xbp-80h]
  System_Int32_array *v117; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v120; // [xsp+7Ch] [xbp-64h]

  if ( (byte_4C4055B & 1) == 0 )
  {
    sub_1C37058(&CondType_CheckType_var);
    sub_1C37058(&CondType_CheckType_TypeInfo);
    sub_1C37058(&System_Enum_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_1C37058(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_1C37058(&ScriptBranchListViewItem_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    sub_1C37058(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_1C37058(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_1C37058(&StringLiteral_17406/*"branchQuestClear"*/);
    sub_1C37058(&StringLiteral_16061/*"] "*/);
    sub_1C37058(&StringLiteral_17409/*"branchRouteSelectCount"*/);
    sub_1C37058(&StringLiteral_151/*" - 1"*/);
    sub_1C37058(&StringLiteral_17403/*"branchNotMaterial"*/);
    sub_1C37058(&StringLiteral_21443/*"masterBranch"*/);
    sub_1C37058(&StringLiteral_20272/*"ifClear"*/);
    sub_1C37058(&StringLiteral_17408/*"branchRouteSelect"*/);
    sub_1C37058(&StringLiteral_17402/*"branchNotHaveSvtEquip"*/);
    sub_1C37058(&StringLiteral_23099/*"revivalBranch"*/);
    sub_1C37058(&StringLiteral_17401/*"branchMaterial"*/);
    sub_1C37058(&StringLiteral_17404/*"branchNotRouteSelect"*/);
    sub_1C37058(&StringLiteral_17400/*"branchHaveSvtEquip"*/);
    sub_1C37058(&StringLiteral_16971/*"bScene"*/);
    sub_1C37058(&StringLiteral_23968/*"tRoute"*/);
    sub_1C37058(&StringLiteral_17407/*"branchQuestNotClear"*/);
    sub_1C37058(&StringLiteral_17405/*"branchNotRouteSelectCount"*/);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    byte_4C4055B = 1;
  }
  v111 = (ListViewManager_o *)this;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !list )
    goto LABEL_164;
  if ( list->fields._size < 1 )
  {
LABEL_154:
    if ( v6 )
    {
      ListViewManager__CreateList(v111, v6->fields._size, 0);
      if ( v6->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v111, -1, 0, -1, 0);
        return;
      }
      v99 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v111->fields.itemList;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v6,
                          v99,
                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v104 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v106 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v107[4] = (Il2CppClass *)v106;
          sub_1C36FFC((CGThumbnailListItem_o *)(v107 + 4), v106, v101, v102);
        }
        if ( ++v99 >= v6->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1C372B4(Item);
  }
  v8 = (const MethodInfo_37A2D54 **)&Method_System_Collections_Generic_List_string__get_Item__;
  v9 = 0;
  v10 = 0;
  v112 = list;
  v114 = v6;
  while ( 1 )
  {
    v11 = sub_1C372A4(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v9,
                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v11 )
      goto LABEL_164;
    *(_QWORD *)(v11 + 16) = Item;
    v14 = (System_Collections_Generic_List_object__o **)(v11 + 16);
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), Item, v12, v13);
    Item = *(_QWORD *)(v11 + 16);
    if ( !Item )
      goto LABEL_164;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      0,
                      *v8);
    if ( !*v14 )
      goto LABEL_164;
    v15 = (System_String_o *)Item;
    v16 = System_Collections_Generic_List_object___get_Item(*v14, 1, *v8);
    Item = *(_QWORD *)(v11 + 16);
    *(_QWORD *)(v11 + 24) = 0xFFFFFFFFLL;
    if ( !Item )
      goto LABEL_164;
    if ( *(int *)(Item + 24) >= 7 )
      Empty = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)Item,
                                   6,
                                   *v8);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    v18 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v16, 0);
    v120 = v10;
    debugComment = Empty;
    if ( v18 <= 0x5D81BB60 )
    {
      if ( v18 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v18 == 369362287 )
        {
          routeId = 0;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_17403/*"branchNotMaterial"*/, 0) )
            v28 = 1;
          else
            v28 = -1;
          goto LABEL_136;
        }
        if ( v18 != 651066131 )
        {
          if ( v18 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_17400/*"branchHaveSvtEquip"*/, 0) )
            {
              Item = (__int64)*v14;
              if ( !*v14 )
                goto LABEL_164;
              v20 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      2,
                      *v8);
              v21 = System_Int32__Parse((System_String_o *)v20, 0);
              v22 = 5;
LABEL_35:
              v25 = v21;
              routeId = 0;
              count = -1;
              checkType = 1;
              branchType = v22;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_16971/*"bScene"*/, 0) )
          goto LABEL_118;
        Item = (__int64)*v14;
        if ( !*v14 )
          goto LABEL_164;
        v30 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v8);
        Item = System_Int32__Parse((System_String_o *)v30, 0);
        v31 = *(System_Collections_Generic_List_object__o **)(v11 + 16);
        *(_DWORD *)(v11 + 24) = Item;
        if ( !v31 )
          goto LABEL_164;
        v32 = System_Collections_Generic_List_object___get_Item(v31, 3, *v8);
        *(_DWORD *)(v11 + 28) = System_Int32__Parse((System_String_o *)v32, 0);
        Item = sub_1C37100(int___TypeInfo, 1);
        if ( !*(_QWORD *)(v11 + 16) )
          goto LABEL_164;
        routeId = Item;
        v33 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v11 + 16),
                4,
                *v8);
        Item = System_Int32__Parse((System_String_o *)v33, 0);
        if ( !routeId )
          goto LABEL_164;
        if ( !*(_DWORD *)(routeId + 24) )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v28 = 11;
        *(_DWORD *)(routeId + 32) = Item;
        goto LABEL_136;
      }
      if ( v18 <= 0x4E750E71 )
      {
        if ( v18 != 1053116368 )
        {
          if ( v18 == 1316294257
            && System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_17402/*"branchNotHaveSvtEquip"*/, 0) )
          {
            Item = (__int64)*v14;
            if ( !*v14 )
              goto LABEL_164;
            v24 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v8);
            v21 = System_Int32__Parse((System_String_o *)v24, 0);
            v22 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_23968/*"tRoute"*/, 0) )
          goto LABEL_118;
        Item = (__int64)*v14;
        if ( !*v14 )
          goto LABEL_164;
        v35 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v8);
        *(_DWORD *)(v11 + 24) = System_Int32__Parse((System_String_o *)v35, 0);
        Item = sub_1C37100(int___TypeInfo, 1);
        if ( !*(_QWORD *)(v11 + 16) )
          goto LABEL_164;
        routeId = Item;
        v36 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v11 + 16),
                3,
                *v8);
        Item = System_Int32__Parse((System_String_o *)v36, 0);
        if ( !routeId )
          goto LABEL_164;
        if ( !*(_DWORD *)(routeId + 24) )
          goto LABEL_165;
        *(_DWORD *)(routeId + 32) = Item;
        count = -1;
        checkType = 1;
        v28 = 10;
        goto LABEL_136;
      }
      if ( v18 != 1408301323 )
      {
        if ( v18 == 1568783200 )
        {
          routeId = 0;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_23099/*"revivalBranch"*/, 0) )
            v28 = 4;
          else
            v28 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v25 = -1;
        goto LABEL_138;
      }
      v34 = &StringLiteral_17404/*"branchNotRouteSelect"*/;
      goto LABEL_105;
    }
    if ( v18 > 0xA9C7DB00 )
      break;
    if ( v18 > 0x83820B5B )
    {
      if ( v18 != -1606428809 )
      {
        if ( v18 == -1446520064 )
        {
          routeId = 0;
          count = -1;
          checkType = 1;
          v28 = System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_17401/*"branchMaterial"*/, 0) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_20272/*"ifClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v14;
      if ( !*v14 )
        goto LABEL_164;
      v52 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v8);
      Item = System_Int32__Parse((System_String_o *)v52, 0);
      v53 = *(System_Collections_Generic_List_object__o **)(v11 + 16);
      *(_DWORD *)(v11 + 24) = Item;
      if ( !v53 )
        goto LABEL_164;
      v54 = System_Collections_Generic_List_object___get_Item(v53, 3, *v8);
      routeId = 0;
      *(_DWORD *)(v11 + 28) = System_Int32__Parse((System_String_o *)v54, 0);
      count = -1;
      checkType = 1;
      v28 = 9;
      goto LABEL_136;
    }
    if ( v18 != -2116001178 )
    {
      if ( v18 != -2088629413
        || !System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_17407/*"branchQuestNotClear"*/, 0) )
      {
        goto LABEL_118;
      }
      Item = (__int64)*v14;
      if ( !*v14 )
        goto LABEL_164;
      v23 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v8);
      if ( System_String__IsNullOrEmpty((System_String_o *)v23, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v14;
        if ( !*v14 )
          goto LABEL_164;
        v60 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v8);
        Item = System_Int32__Parse((System_String_o *)v60, 0);
      }
      v61 = *(System_Collections_Generic_List_object__o **)(v11 + 16);
      *(_DWORD *)(v11 + 24) = Item;
      if ( !v61 )
        goto LABEL_164;
      v62 = System_Collections_Generic_List_object___get_Item(v61, 3, *v8);
      if ( System_String__IsNullOrEmpty((System_String_o *)v62, 0) )
      {
        v63 = 0;
      }
      else
      {
        Item = (__int64)*v14;
        if ( !*v14 )
          goto LABEL_164;
        v68 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v8);
        v63 = System_Int32__Parse((System_String_o *)v68, 0);
      }
      routeId = 0;
      *(_DWORD *)(v11 + 28) = v63;
      count = -1;
      checkType = 1;
      v28 = 3;
      goto LABEL_136;
    }
    v34 = &StringLiteral_17408/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v16, (System_String_o *)*v34, 0) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_17408/*"branchRouteSelect"*/, 0);
    v55 = *v14;
    if ( (Item & 1) != 0 )
      v56 = 7;
    else
      v56 = 8;
    if ( !v55 )
      goto LABEL_164;
    v57 = System_Collections_Generic_List_object___get_Item(v55, 2, *v8);
    *(_DWORD *)(v11 + 24) = System_Int32__Parse((System_String_o *)v57, 0);
    Item = sub_1C37100(int___TypeInfo, 1);
    if ( !*(_QWORD *)(v11 + 16) )
      goto LABEL_164;
    routeId = Item;
    v58 = System_Collections_Generic_List_object___get_Item(
            *(System_Collections_Generic_List_object__o **)(v11 + 16),
            3,
            *v8);
    Item = System_Int32__Parse((System_String_o *)v58, 0);
    if ( !routeId )
      goto LABEL_164;
    branchType = v56;
    if ( !*(_DWORD *)(routeId + 24) )
      goto LABEL_165;
    checkType = 0;
    *(_DWORD *)(routeId + 32) = Item;
    v25 = -1;
    count = 1;
LABEL_138:
    v117 = (System_Int32_array *)routeId;
    if ( isLine )
    {
      v70 = System_String__Concat_63601908(
              (System_String_o *)StringLiteral_15804/*"["*/,
              v15,
              (System_String_o *)StringLiteral_16061/*"] "*/,
              (System_String_o *)v16,
              0);
      v71 = *(_DWORD *)(v11 + 24);
      v72 = *(_DWORD *)(v11 + 28);
      v73 = v70;
      v74 = (ScriptBranchListViewItem_o *)sub_1C372A4(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v74,
        v120,
        v73,
        (System_String_o *)v16,
        v15,
        v71,
        v72,
        v25,
        (System_Int32_array *)routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v110);
      v6 = v114;
      if ( !v114 )
        goto LABEL_164;
      v77 = v114->fields._items;
      list = v112;
      v78 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v114->fields._version;
      if ( !v77 )
        goto LABEL_164;
      v79 = v114->fields._size;
      v8 = (const MethodInfo_37A2D54 **)&Method_System_Collections_Generic_List_string__get_Item__;
      v10 = v120 + 1;
      if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v114,
          (Il2CppObject *)v74,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &v77->obj.klass + v79;
        v114->fields._size = v79 + 1;
        v80[4] = (Il2CppClass *)v74;
        sub_1C36FFC((CGThumbnailListItem_o *)(v80 + 4), (int32_t)v74, v75, v76);
      }
    }
    else
    {
      v113 = v9;
      v81 = v8;
      v82 = count;
      v83 = (System_String_o *)v16;
      v84 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v85 = v11;
      System_Predicate_object____ctor(
        v84,
        (Il2CppObject *)v11,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0);
      v6 = v114;
      if ( !v114 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v114,
                (System_Predicate_T__o *)v84,
                (const MethodInfo_37A387C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( Index < 0 )
      {
        v88 = System_String__Concat_63561656(v83, (System_String_o *)StringLiteral_151/*" - 1"*/, 0);
        v89 = *(_DWORD *)(v11 + 24);
        v90 = *(_DWORD *)(v85 + 28);
        v91 = v88;
        v92 = (ScriptBranchListViewItem_o *)sub_1C372A4(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v92,
          v120,
          v91,
          v83,
          v15,
          v89,
          v90,
          v25,
          v117,
          branchType,
          v82,
          checkType,
          debugComment,
          v110);
        v95 = v114->fields._items;
        v96 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v114->fields._version;
        if ( !v95 )
          goto LABEL_164;
        v97 = v114->fields._size;
        v8 = (const MethodInfo_37A2D54 **)&Method_System_Collections_Generic_List_string__get_Item__;
        v9 = v113;
        v10 = v120 + 1;
        if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v114,
            (Il2CppObject *)v92,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
        }
        else
        {
          v98 = &v95->obj.klass + v97;
          v114->fields._size = v97 + 1;
          v98[4] = (Il2CppClass *)v92;
          sub_1C36FFC((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v92, v93, v94);
        }
        list = v112;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v114,
                          Index,
                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v87);
        v10 = v120;
        v9 = v113;
        v8 = v81;
      }
    }
    if ( ++v9 >= list->fields._size )
      goto LABEL_154;
  }
  if ( v18 > 0xCB78578B )
  {
    if ( v18 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_17406/*"branchQuestClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v14;
      if ( !*v14 )
        goto LABEL_164;
      v59 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v8);
      if ( System_String__IsNullOrEmpty((System_String_o *)v59, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v14;
        if ( !*v14 )
          goto LABEL_164;
        v64 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v8);
        Item = System_Int32__Parse((System_String_o *)v64, 0);
      }
      v65 = *(System_Collections_Generic_List_object__o **)(v11 + 16);
      *(_DWORD *)(v11 + 24) = Item;
      if ( !v65 )
        goto LABEL_164;
      v66 = System_Collections_Generic_List_object___get_Item(v65, 3, *v8);
      if ( System_String__IsNullOrEmpty((System_String_o *)v66, 0) )
      {
        v67 = 0;
      }
      else
      {
        Item = (__int64)*v14;
        if ( !*v14 )
          goto LABEL_164;
        v69 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v8);
        v67 = System_Int32__Parse((System_String_o *)v69, 0);
      }
      routeId = 0;
      *(_DWORD *)(v11 + 28) = v67;
      count = -1;
      checkType = 1;
      v28 = 2;
LABEL_136:
      branchType = v28;
      goto LABEL_137;
    }
    if ( v18 != -201512038 )
      goto LABEL_118;
    v29 = &StringLiteral_17405/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v18 != -1252550667 )
    {
      if ( v18 == -881305717 )
        System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_21443/*"masterBranch"*/, 0);
      goto LABEL_118;
    }
    v29 = &StringLiteral_17409/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v16, (System_String_o *)*v29, 0) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_17409/*"branchRouteSelectCount"*/, 0);
  v37 = *v14;
  if ( (Item & 1) != 0 )
    v38 = 7;
  else
    v38 = 8;
  branchType = v38;
  if ( !v37 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(v37, 2, *v8);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v11 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0);
  v39 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v11 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v8);
  if ( !Item )
    goto LABEL_164;
  v116 = (System_Int32_array *)v15;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_164;
  v40 = *(_QWORD *)(Item + 24);
  v41 = Item;
  if ( (int)v40 >= 1 )
  {
    v42 = 0;
    while ( v42 < (unsigned int)v40 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v41 + 32 + 8 * v42), 0);
      if ( !v39 )
        goto LABEL_164;
      v43 = v39->fields._items;
      v44 = Method_System_Collections_Generic_List_int__Add__;
      ++v39->fields._version;
      if ( !v43 )
        goto LABEL_164;
      v45 = v39->fields._size;
      if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v39,
          Item,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v39->fields._size = v45 + 1;
        v43->m_Items[v45] = Item;
      }
      LODWORD(v40) = *(_DWORD *)(v41 + 24);
      if ( (__int64)++v42 >= (int)v40 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1C372BC(Item);
  }
LABEL_90:
  if ( !v39 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v39,
                    (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  v8 = (const MethodInfo_37A2D54 **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v14 )
    goto LABEL_164;
  routeId = Item;
  v46 = System_Collections_Generic_List_object___get_Item(
          *v14,
          4,
          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v46, 0);
  v47 = CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v48.fields.value = (intptr_t)v47;
  Item = (__int64)System_Type__GetTypeFromHandle(v48, 0);
  v49 = *v14;
  if ( !*v14 )
    goto LABEL_164;
  v50 = (System_Type_o *)Item;
  v51 = System_Collections_Generic_List_object___get_Item(
          v49,
          5,
          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (__int64)System_Enum__Parse(v50, (System_String_o *)v51, 0);
  if ( !Item )
    goto LABEL_164;
  v15 = (System_String_o *)v116;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1C37574(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v108, v109);
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

  if ( (byte_4C4055C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&ScriptBranchListViewItem_TypeInfo);
    byte_4C4055C = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C372B4(this);
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
  struct UIScrollView_o *v7; // x0
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_4C4055F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4055F = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v7->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v7,
          1,
          v7->klass->vtable._8_UpdateScrollbars.method);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C4055E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_1C37058(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C4055E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      ScriptBranchListViewObject__Init_37430552((ScriptBranchListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
  }
}


void ScriptBranchListViewManager__SetMode(
        ScriptBranchListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    ScriptBranchListViewManager__RequestListObject(this, 3, v6);
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
  if ( (byte_4C4055D & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1C37058(&ScriptBranchListViewObject_TypeInfo);
    byte_4C4055D = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptBranchListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_37430552((ScriptBranchListViewObject_o *)obj, v7, 0, method);
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

  if ( (byte_4C40558 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C40558 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  ScriptBranchListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *ScriptBranchListViewManager__get_ObjectList(
        ScriptBranchListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4055A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4055A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C40559 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C40559 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C40560 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C40560 = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1C372B4(0);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}