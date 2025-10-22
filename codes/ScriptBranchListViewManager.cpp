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
  const MethodInfo_37B5190 **v9; // x24
  int32_t v10; // w23
  int v11; // w26
  __int64 v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o **v15; // x25
  System_String_o *v16; // x29
  Il2CppObject *v17; // x22
  System_String_o *Empty; // x19
  uint32_t v19; // w0
  int32_t checkType; // w26
  Il2CppObject *v21; // x0
  int32_t v22; // w0
  int v23; // w8
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w25
  __int64 routeId; // x27
  int32_t count; // w19
  int v29; // w8
  __int64 *v30; // x8
  Il2CppObject *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x8
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x0
  __int64 *v35; // x8
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  System_Collections_Generic_List_object__o *v38; // x8
  int v39; // w9
  System_Collections_Generic_List_int__o *v40; // x19
  il2cpp_array_size_t v41; // x8
  __int64 v42; // x29
  unsigned __int64 v43; // x21
  struct System_Int32_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppObject *v47; // x0
  Il2CppType *v48; // x21
  System_RuntimeTypeHandle_o v49; // x0
  System_Collections_Generic_List_object__o *v50; // x8
  System_Type_o *v51; // x25
  Il2CppObject *v52; // x21
  Il2CppObject *v53; // x0
  System_Collections_Generic_List_object__o *v54; // x8
  Il2CppObject *v55; // x0
  System_Collections_Generic_List_object__o *v56; // x8
  int v57; // w25
  Il2CppObject *v58; // x0
  Il2CppObject *v59; // x0
  Il2CppObject *v60; // x0
  Il2CppObject *v61; // x0
  System_Collections_Generic_List_object__o *v62; // x8
  Il2CppObject *v63; // x0
  int32_t v64; // w0
  Il2CppObject *v65; // x0
  System_Collections_Generic_List_object__o *v66; // x8
  Il2CppObject *v67; // x0
  int32_t v68; // w0
  Il2CppObject *v69; // x0
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  int32_t v72; // w21
  int32_t v73; // w28
  System_String_o *v74; // x24
  ScriptBranchListViewItem_o *v75; // x20
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  const MethodInfo_37B5190 **v82; // x27
  int32_t v83; // w23
  System_String_o *v84; // x19
  System_Predicate_object__o *v85; // x21
  __int64 v86; // x24
  int32_t Index; // w0
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

  if ( (byte_4C542F8 & 1) == 0 )
  {
    sub_1C3E564(&CondType_CheckType_var);
    sub_1C3E564(&CondType_CheckType_TypeInfo);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_1C3E564(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_1C3E564(&ScriptBranchListViewItem_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    sub_1C3E564(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_1C3E564(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_1C3E564(&StringLiteral_17422/*"branchQuestClear"*/);
    sub_1C3E564(&StringLiteral_16071/*"] "*/);
    sub_1C3E564(&StringLiteral_17425/*"branchRouteSelectCount"*/);
    sub_1C3E564(&StringLiteral_151/*" - 1"*/);
    sub_1C3E564(&StringLiteral_17419/*"branchNotMaterial"*/);
    sub_1C3E564(&StringLiteral_21461/*"masterBranch"*/);
    sub_1C3E564(&StringLiteral_20290/*"ifClear"*/);
    sub_1C3E564(&StringLiteral_17424/*"branchRouteSelect"*/);
    sub_1C3E564(&StringLiteral_17418/*"branchNotHaveSvtEquip"*/);
    sub_1C3E564(&StringLiteral_23118/*"revivalBranch"*/);
    sub_1C3E564(&StringLiteral_17417/*"branchMaterial"*/);
    sub_1C3E564(&StringLiteral_17420/*"branchNotRouteSelect"*/);
    sub_1C3E564(&StringLiteral_17416/*"branchHaveSvtEquip"*/);
    sub_1C3E564(&StringLiteral_16987/*"bScene"*/);
    sub_1C3E564(&StringLiteral_23988/*"tRoute"*/);
    sub_1C3E564(&StringLiteral_17423/*"branchQuestNotClear"*/);
    sub_1C3E564(&StringLiteral_17421/*"branchNotRouteSelectCount"*/);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    byte_4C542F8 = 1;
  }
  v111 = (ListViewManager_o *)this;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
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
                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
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
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v107[4] = (Il2CppClass *)v106;
          sub_1C3E508((CGThumbnailListItem_o *)(v107 + 4), v106, v101, v102);
        }
        if ( ++v99 >= v6->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1C3E7C0(Item, v8);
  }
  v9 = (const MethodInfo_37B5190 **)&Method_System_Collections_Generic_List_string__get_Item__;
  v10 = 0;
  v11 = 0;
  v112 = list;
  v114 = v6;
  while ( 1 )
  {
    v12 = sub_1C3E7B0(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v10,
                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v12 )
      goto LABEL_164;
    *(_QWORD *)(v12 + 16) = Item;
    v15 = (System_Collections_Generic_List_object__o **)(v12 + 16);
    sub_1C3E508((CGThumbnailListItem_o *)(v12 + 16), Item, v13, v14);
    Item = *(_QWORD *)(v12 + 16);
    if ( !Item )
      goto LABEL_164;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      0,
                      *v9);
    if ( !*v15 )
      goto LABEL_164;
    v16 = (System_String_o *)Item;
    v17 = System_Collections_Generic_List_object___get_Item(*v15, 1, *v9);
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
    v19 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v17, 0);
    v120 = v11;
    debugComment = Empty;
    if ( v19 <= 0x5D81BB60 )
    {
      if ( v19 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v19 == 369362287 )
        {
          routeId = 0;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17419/*"branchNotMaterial"*/, 0) )
            v29 = 1;
          else
            v29 = -1;
          goto LABEL_136;
        }
        if ( v19 != 651066131 )
        {
          if ( v19 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17416/*"branchHaveSvtEquip"*/, 0) )
            {
              Item = (__int64)*v15;
              if ( !*v15 )
                goto LABEL_164;
              v21 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      2,
                      *v9);
              v22 = System_Int32__Parse((System_String_o *)v21, 0);
              v23 = 5;
LABEL_35:
              v26 = v22;
              routeId = 0;
              count = -1;
              checkType = 1;
              branchType = v23;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_16987/*"bScene"*/, 0) )
          goto LABEL_118;
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v31 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v31, 0);
        v32 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
        *(_DWORD *)(v12 + 24) = Item;
        if ( !v32 )
          goto LABEL_164;
        v33 = System_Collections_Generic_List_object___get_Item(v32, 3, *v9);
        *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v33, 0);
        Item = sub_1C3E60C(int___TypeInfo, 1);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = Item;
        v34 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                4,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v34, 0);
        if ( !routeId )
          goto LABEL_164;
        if ( !*(_DWORD *)(routeId + 24) )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v29 = 11;
        *(_DWORD *)(routeId + 32) = Item;
        goto LABEL_136;
      }
      if ( v19 <= 0x4E750E71 )
      {
        if ( v19 != 1053116368 )
        {
          if ( v19 == 1316294257
            && System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17418/*"branchNotHaveSvtEquip"*/, 0) )
          {
            Item = (__int64)*v15;
            if ( !*v15 )
              goto LABEL_164;
            v25 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v9);
            v22 = System_Int32__Parse((System_String_o *)v25, 0);
            v23 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_23988/*"tRoute"*/, 0) )
          goto LABEL_118;
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v36 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v36, 0);
        Item = sub_1C3E60C(int___TypeInfo, 1);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = Item;
        v37 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                3,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v37, 0);
        if ( !routeId )
          goto LABEL_164;
        if ( !*(_DWORD *)(routeId + 24) )
          goto LABEL_165;
        *(_DWORD *)(routeId + 32) = Item;
        count = -1;
        checkType = 1;
        v29 = 10;
        goto LABEL_136;
      }
      if ( v19 != 1408301323 )
      {
        if ( v19 == 1568783200 )
        {
          routeId = 0;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_23118/*"revivalBranch"*/, 0) )
            v29 = 4;
          else
            v29 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v26 = -1;
        goto LABEL_138;
      }
      v35 = &StringLiteral_17420/*"branchNotRouteSelect"*/;
      goto LABEL_105;
    }
    if ( v19 > 0xA9C7DB00 )
      break;
    if ( v19 > 0x83820B5B )
    {
      if ( v19 != -1606428809 )
      {
        if ( v19 == -1446520064 )
        {
          routeId = 0;
          count = -1;
          checkType = 1;
          v29 = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17417/*"branchMaterial"*/, 0) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_20290/*"ifClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_164;
      v53 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      Item = System_Int32__Parse((System_String_o *)v53, 0);
      v54 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v54 )
        goto LABEL_164;
      v55 = System_Collections_Generic_List_object___get_Item(v54, 3, *v9);
      routeId = 0;
      *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v55, 0);
      count = -1;
      checkType = 1;
      v29 = 9;
      goto LABEL_136;
    }
    if ( v19 != -2116001178 )
    {
      if ( v19 != -2088629413
        || !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17423/*"branchQuestNotClear"*/, 0) )
      {
        goto LABEL_118;
      }
      Item = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_164;
      v24 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v24, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v61 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v61, 0);
      }
      v62 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v62 )
        goto LABEL_164;
      v63 = System_Collections_Generic_List_object___get_Item(v62, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v63, 0) )
      {
        v64 = 0;
      }
      else
      {
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v69 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v64 = System_Int32__Parse((System_String_o *)v69, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v64;
      count = -1;
      checkType = 1;
      v29 = 3;
      goto LABEL_136;
    }
    v35 = &StringLiteral_17424/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)*v35, 0) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17424/*"branchRouteSelect"*/, 0);
    v56 = *v15;
    if ( (Item & 1) != 0 )
      v57 = 7;
    else
      v57 = 8;
    if ( !v56 )
      goto LABEL_164;
    v58 = System_Collections_Generic_List_object___get_Item(v56, 2, *v9);
    *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v58, 0);
    Item = sub_1C3E60C(int___TypeInfo, 1);
    if ( !*(_QWORD *)(v12 + 16) )
      goto LABEL_164;
    routeId = Item;
    v59 = System_Collections_Generic_List_object___get_Item(
            *(System_Collections_Generic_List_object__o **)(v12 + 16),
            3,
            *v9);
    Item = System_Int32__Parse((System_String_o *)v59, 0);
    if ( !routeId )
      goto LABEL_164;
    branchType = v57;
    if ( !*(_DWORD *)(routeId + 24) )
      goto LABEL_165;
    checkType = 0;
    *(_DWORD *)(routeId + 32) = Item;
    v26 = -1;
    count = 1;
LABEL_138:
    v117 = (System_Int32_array *)routeId;
    if ( isLine )
    {
      v71 = System_String__Concat_63676720(
              (System_String_o *)StringLiteral_15814/*"["*/,
              v16,
              (System_String_o *)StringLiteral_16071/*"] "*/,
              (System_String_o *)v17,
              0);
      v72 = *(_DWORD *)(v12 + 24);
      v73 = *(_DWORD *)(v12 + 28);
      v74 = v71;
      v75 = (ScriptBranchListViewItem_o *)sub_1C3E7B0(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v75,
        v120,
        v74,
        (System_String_o *)v17,
        v16,
        v72,
        v73,
        v26,
        (System_Int32_array *)routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v110);
      v6 = v114;
      if ( !v114 )
        goto LABEL_164;
      v78 = v114->fields._items;
      list = v112;
      v79 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v114->fields._version;
      if ( !v78 )
        goto LABEL_164;
      v80 = v114->fields._size;
      v9 = (const MethodInfo_37B5190 **)&Method_System_Collections_Generic_List_string__get_Item__;
      v11 = v120 + 1;
      if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v114,
          (Il2CppObject *)v75,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &v78->obj.klass + v80;
        v114->fields._size = v80 + 1;
        v81[4] = (Il2CppClass *)v75;
        sub_1C3E508((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v75, v76, v77);
      }
    }
    else
    {
      v113 = v10;
      v82 = v9;
      v83 = count;
      v84 = (System_String_o *)v17;
      v85 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v86 = v12;
      System_Predicate_object____ctor(
        v85,
        (Il2CppObject *)v12,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0);
      v6 = v114;
      if ( !v114 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v114,
                (System_Predicate_T__o *)v85,
                (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( Index < 0 )
      {
        v88 = System_String__Concat_63636468(v84, (System_String_o *)StringLiteral_151/*" - 1"*/, 0);
        v89 = *(_DWORD *)(v12 + 24);
        v90 = *(_DWORD *)(v86 + 28);
        v91 = v88;
        v92 = (ScriptBranchListViewItem_o *)sub_1C3E7B0(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v92,
          v120,
          v91,
          v84,
          v16,
          v89,
          v90,
          v26,
          v117,
          branchType,
          v83,
          checkType,
          debugComment,
          v110);
        v95 = v114->fields._items;
        v96 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v114->fields._version;
        if ( !v95 )
          goto LABEL_164;
        v97 = v114->fields._size;
        v9 = (const MethodInfo_37B5190 **)&Method_System_Collections_Generic_List_string__get_Item__;
        v10 = v113;
        v11 = v120 + 1;
        if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v114,
            (Il2CppObject *)v92,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
        }
        else
        {
          v98 = &v95->obj.klass + v97;
          v114->fields._size = v97 + 1;
          v98[4] = (Il2CppClass *)v92;
          sub_1C3E508((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v92, v93, v94);
        }
        list = v112;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v114,
                          Index,
                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v8);
        v11 = v120;
        v10 = v113;
        v9 = v82;
      }
    }
    if ( ++v10 >= list->fields._size )
      goto LABEL_154;
  }
  if ( v19 > 0xCB78578B )
  {
    if ( v19 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17422/*"branchQuestClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_164;
      v60 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v60, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v15;
        if ( !*v15 )
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
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v70 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v68 = System_Int32__Parse((System_String_o *)v70, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v68;
      count = -1;
      checkType = 1;
      v29 = 2;
LABEL_136:
      branchType = v29;
      goto LABEL_137;
    }
    if ( v19 != -201512038 )
      goto LABEL_118;
    v30 = &StringLiteral_17421/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v19 != -1252550667 )
    {
      if ( v19 == -881305717 )
        System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_21461/*"masterBranch"*/, 0);
      goto LABEL_118;
    }
    v30 = &StringLiteral_17425/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)*v30, 0) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17425/*"branchRouteSelectCount"*/, 0);
  v38 = *v15;
  if ( (Item & 1) != 0 )
    v39 = 7;
  else
    v39 = 8;
  branchType = v39;
  if ( !v38 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(v38, 2, *v9);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v12 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0);
  v40 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v12 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v9);
  if ( !Item )
    goto LABEL_164;
  v116 = (System_Int32_array *)v16;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_164;
  v41 = *(_QWORD *)(Item + 24);
  v42 = Item;
  if ( (int)v41 >= 1 )
  {
    v43 = 0;
    while ( v43 < (unsigned int)v41 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v42 + 32 + 8 * v43), 0);
      if ( !v40 )
        goto LABEL_164;
      v44 = v40->fields._items;
      v45 = Method_System_Collections_Generic_List_int__Add__;
      ++v40->fields._version;
      if ( !v44 )
        goto LABEL_164;
      v46 = v40->fields._size;
      v8 = (const MethodInfo *)(unsigned int)Item;
      if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v40,
          Item,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v40->fields._size = v46 + 1;
        v44->m_Items[v46] = Item;
      }
      LODWORD(v41) = *(_DWORD *)(v42 + 24);
      if ( (__int64)++v43 >= (int)v41 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1C3E7C8(Item, v8);
  }
LABEL_90:
  if ( !v40 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v40,
                    (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9 = (const MethodInfo_37B5190 **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v15 )
    goto LABEL_164;
  routeId = Item;
  v47 = System_Collections_Generic_List_object___get_Item(
          *v15,
          4,
          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v47, 0);
  v48 = CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v49.fields.value = (intptr_t)v48;
  Item = (__int64)System_Type__GetTypeFromHandle(v49, 0);
  v50 = *v15;
  if ( !*v15 )
    goto LABEL_164;
  v51 = (System_Type_o *)Item;
  v52 = System_Collections_Generic_List_object___get_Item(
          v50,
          5,
          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (__int64)System_Enum__Parse(v51, (System_String_o *)v52, 0);
  if ( !Item )
    goto LABEL_164;
  v16 = (System_String_o *)v116;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1C3EA80(Item);
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

  if ( (byte_4C542F9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&ScriptBranchListViewItem_TypeInfo);
    byte_4C542F9 = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C542FC & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C542FC = 1;
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
          sub_1C3E7C0(0, v7);
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

  if ( (byte_4C542FB & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_1C3E564(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C542FB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      ScriptBranchListViewObject__Init_37475264((ScriptBranchListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
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
  if ( (byte_4C542FA & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1C3E564(&ScriptBranchListViewObject_TypeInfo);
    byte_4C542FA = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptBranchListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_37475264((ScriptBranchListViewObject_o *)obj, v7, 0, method);
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

  if ( (byte_4C542F5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C542F5 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C542F7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C542F7 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C542F6 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C542F6 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C542FD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C542FD = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1C3E7C0(0, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}