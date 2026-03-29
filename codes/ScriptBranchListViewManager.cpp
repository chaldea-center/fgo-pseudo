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
  const MethodInfo_38796CC **v9; // x24
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
  System_Collections_Generic_List_object__o *v53; // x8
  System_Type_o *v54; // x25
  Il2CppObject *v55; // x21
  Il2CppObject *v56; // x0
  System_Collections_Generic_List_object__o *v57; // x8
  Il2CppObject *v58; // x0
  System_Collections_Generic_List_object__o *v59; // x8
  int v60; // w25
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x0
  System_Collections_Generic_List_object__o *v65; // x8
  Il2CppObject *v66; // x0
  int32_t v67; // w0
  Il2CppObject *v68; // x0
  System_Collections_Generic_List_object__o *v69; // x8
  Il2CppObject *v70; // x0
  int32_t v71; // w0
  Il2CppObject *v72; // x0
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  int32_t v75; // w21
  int32_t v76; // w28
  System_String_o *v77; // x24
  ScriptBranchListViewItem_o *v78; // x20
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  const MethodInfo_38796CC **v89; // x27
  int32_t v90; // w23
  System_String_o *v91; // x19
  System_Predicate_object__o *v92; // x21
  __int64 v93; // x24
  int32_t Index; // w0
  System_String_o *v95; // x0
  int32_t v96; // w20
  int32_t v97; // w24
  System_String_o *v98; // x21
  ScriptBranchListViewItem_o *v99; // x28
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  int32_t v110; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  struct System_Object_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  __int64 v121; // x1
  Il2CppClass **v122; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v123; // x0
  const MethodInfo *v124; // x1
  const MethodInfo *v125; // [xsp+28h] [xbp-B8h]
  ListViewManager_o *v126; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v127; // [xsp+40h] [xbp-A0h]
  int32_t v128; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v129; // [xsp+50h] [xbp-90h]
  System_Int32_array *v131; // [xsp+60h] [xbp-80h]
  System_Int32_array *v132; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v135; // [xsp+7Ch] [xbp-64h]

  if ( (byte_4D2DF59 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_CheckType_var);
    sub_1C93AD4(&CondType_CheckType_TypeInfo);
    sub_1C93AD4(&System_Enum_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_1C93AD4(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_1C93AD4(&ScriptBranchListViewItem_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    sub_1C93AD4(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_1C93AD4(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_17534/*"branchQuestClear"*/);
    sub_1C93AD4(&StringLiteral_16159/*"] "*/);
    sub_1C93AD4(&StringLiteral_17537/*"branchRouteSelectCount"*/);
    sub_1C93AD4(&StringLiteral_152/*" - 1"*/);
    sub_1C93AD4(&StringLiteral_17531/*"branchNotMaterial"*/);
    sub_1C93AD4(&StringLiteral_21709/*"masterBranch"*/);
    sub_1C93AD4(&StringLiteral_20497/*"ifClear"*/);
    sub_1C93AD4(&StringLiteral_17536/*"branchRouteSelect"*/);
    sub_1C93AD4(&StringLiteral_17530/*"branchNotHaveSvtEquip"*/);
    sub_1C93AD4(&StringLiteral_23388/*"revivalBranch"*/);
    sub_1C93AD4(&StringLiteral_17529/*"branchMaterial"*/);
    sub_1C93AD4(&StringLiteral_17532/*"branchNotRouteSelect"*/);
    sub_1C93AD4(&StringLiteral_17528/*"branchHaveSvtEquip"*/);
    sub_1C93AD4(&StringLiteral_17093/*"bScene"*/);
    sub_1C93AD4(&StringLiteral_24270/*"tRoute"*/);
    sub_1C93AD4(&StringLiteral_17535/*"branchQuestNotClear"*/);
    sub_1C93AD4(&StringLiteral_17533/*"branchNotRouteSelectCount"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    byte_4D2DF59 = 1;
  }
  v126 = (ListViewManager_o *)this;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !list )
    goto LABEL_164;
  if ( list->fields._size < 1 )
  {
LABEL_154:
    if ( v6 )
    {
      ListViewManager__CreateList(v126, v6->fields._size, 0);
      if ( v6->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v126, -1, 0, -1, 0);
        return;
      }
      v110 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v126->fields.itemList;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v6,
                          v110,
                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v119 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v121 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
        }
        else
        {
          v122 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v122[4] = (Il2CppClass *)v121;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v122 + 4), v121, v112, v113, v114, v115, v116, v117);
        }
        if ( ++v110 >= v6->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1C93D2C(Item, v8);
  }
  v9 = (const MethodInfo_38796CC **)&Method_System_Collections_Generic_List_string__get_Item__;
  v10 = 0;
  v11 = 0;
  v127 = list;
  v129 = v6;
  while ( 1 )
  {
    v12 = sub_1C93D20(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v10,
                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v12 )
      goto LABEL_164;
    *(_QWORD *)(v12 + 16) = Item;
    v19 = (System_Collections_Generic_List_object__o **)(v12 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 16), Item, v13, v14, v15, v16, v17, v18);
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
    v135 = v11;
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
          if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17531/*"branchNotMaterial"*/, 0) )
            v33 = 1;
          else
            v33 = -1;
          goto LABEL_136;
        }
        if ( v23 != 651066131 )
        {
          if ( v23 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17528/*"branchHaveSvtEquip"*/, 0) )
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
        if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17093/*"bScene"*/, 0) )
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
        Item = sub_1C93B7C(int___TypeInfo, 1);
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
            && System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17530/*"branchNotHaveSvtEquip"*/, 0) )
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
        if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_24270/*"tRoute"*/, 0) )
          goto LABEL_118;
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v40 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v40, 0);
        Item = sub_1C93B7C(int___TypeInfo, 1);
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
          if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_23388/*"revivalBranch"*/, 0) )
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
      v39 = &StringLiteral_17532/*"branchNotRouteSelect"*/;
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
          v33 = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17529/*"branchMaterial"*/, 0) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_20497/*"ifClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_164;
      v56 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      Item = System_Int32__Parse((System_String_o *)v56, 0);
      v57 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v57 )
        goto LABEL_164;
      v58 = System_Collections_Generic_List_object___get_Item(v57, 3, *v9);
      routeId = 0;
      *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v58, 0);
      count = -1;
      checkType = 1;
      v33 = 9;
      goto LABEL_136;
    }
    if ( v23 != -2116001178 )
    {
      if ( v23 != -2088629413
        || !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17535/*"branchQuestNotClear"*/, 0) )
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
        v64 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v64, 0);
      }
      v65 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v65 )
        goto LABEL_164;
      v66 = System_Collections_Generic_List_object___get_Item(v65, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v66, 0) )
      {
        v67 = 0;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v72 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v67 = System_Int32__Parse((System_String_o *)v72, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v67;
      count = -1;
      checkType = 1;
      v33 = 3;
      goto LABEL_136;
    }
    v39 = &StringLiteral_17536/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)*v39, 0) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17536/*"branchRouteSelect"*/, 0);
    v59 = *v19;
    if ( (Item & 1) != 0 )
      v60 = 7;
    else
      v60 = 8;
    if ( !v59 )
      goto LABEL_164;
    v61 = System_Collections_Generic_List_object___get_Item(v59, 2, *v9);
    *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v61, 0);
    Item = sub_1C93B7C(int___TypeInfo, 1);
    if ( !*(_QWORD *)(v12 + 16) )
      goto LABEL_164;
    routeId = Item;
    v62 = System_Collections_Generic_List_object___get_Item(
            *(System_Collections_Generic_List_object__o **)(v12 + 16),
            3,
            *v9);
    Item = System_Int32__Parse((System_String_o *)v62, 0);
    if ( !routeId )
      goto LABEL_164;
    branchType = v60;
    if ( !*(_DWORD *)(routeId + 24) )
      goto LABEL_165;
    checkType = 0;
    *(_DWORD *)(routeId + 32) = Item;
    v30 = -1;
    count = 1;
LABEL_138:
    v132 = (System_Int32_array *)routeId;
    if ( isLine )
    {
      v74 = System_String__Concat_64465992(
              (System_String_o *)StringLiteral_15904/*"["*/,
              v20,
              (System_String_o *)StringLiteral_16159/*"] "*/,
              (System_String_o *)v21,
              0);
      v75 = *(_DWORD *)(v12 + 24);
      v76 = *(_DWORD *)(v12 + 28);
      v77 = v74;
      v78 = (ScriptBranchListViewItem_o *)sub_1C93D20(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v78,
        v135,
        v77,
        (System_String_o *)v21,
        v20,
        v75,
        v76,
        v30,
        (System_Int32_array *)routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v125);
      v6 = v129;
      if ( !v129 )
        goto LABEL_164;
      v85 = v129->fields._items;
      list = v127;
      v86 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v129->fields._version;
      if ( !v85 )
        goto LABEL_164;
      v87 = v129->fields._size;
      v9 = (const MethodInfo_38796CC **)&Method_System_Collections_Generic_List_string__get_Item__;
      v11 = v135 + 1;
      if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v129,
          (Il2CppObject *)v78,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &v85->obj.klass + v87;
        v129->fields._size = v87 + 1;
        v88[4] = (Il2CppClass *)v78;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v88 + 4), (int32_t)v78, v79, v80, v81, v82, v83, v84);
      }
    }
    else
    {
      v128 = v10;
      v89 = v9;
      v90 = count;
      v91 = (System_String_o *)v21;
      v92 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v93 = v12;
      System_Predicate_object____ctor(
        v92,
        (Il2CppObject *)v12,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0);
      v6 = v129;
      if ( !v129 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v129,
                (System_Predicate_T__o *)v92,
                (const MethodInfo_387A1F4 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( Index < 0 )
      {
        v95 = System_String__Concat_64425724(v91, (System_String_o *)StringLiteral_152/*" - 1"*/, 0);
        v96 = *(_DWORD *)(v12 + 24);
        v97 = *(_DWORD *)(v93 + 28);
        v98 = v95;
        v99 = (ScriptBranchListViewItem_o *)sub_1C93D20(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v99,
          v135,
          v98,
          v91,
          v20,
          v96,
          v97,
          v30,
          v132,
          branchType,
          v90,
          checkType,
          debugComment,
          v125);
        v106 = v129->fields._items;
        v107 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v129->fields._version;
        if ( !v106 )
          goto LABEL_164;
        v108 = v129->fields._size;
        v9 = (const MethodInfo_38796CC **)&Method_System_Collections_Generic_List_string__get_Item__;
        v10 = v128;
        v11 = v135 + 1;
        if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v129,
            (Il2CppObject *)v99,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v109 = &v106->obj.klass + v108;
          v129->fields._size = v108 + 1;
          v109[4] = (Il2CppClass *)v99;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v109 + 4), (int32_t)v99, v100, v101, v102, v103, v104, v105);
        }
        list = v127;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v129,
                          Index,
                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v8);
        v11 = v135;
        v10 = v128;
        v9 = v89;
      }
    }
    if ( ++v10 >= list->fields._size )
      goto LABEL_154;
  }
  if ( v23 > 0xCB78578B )
  {
    if ( v23 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17534/*"branchQuestClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_164;
      v63 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v63, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v68 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v68, 0);
      }
      v69 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v69 )
        goto LABEL_164;
      v70 = System_Collections_Generic_List_object___get_Item(v69, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v70, 0) )
      {
        v71 = 0;
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
        v71 = System_Int32__Parse((System_String_o *)v73, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v71;
      count = -1;
      checkType = 1;
      v33 = 2;
LABEL_136:
      branchType = v33;
      goto LABEL_137;
    }
    if ( v23 != -201512038 )
      goto LABEL_118;
    v34 = &StringLiteral_17533/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v23 != -1252550667 )
    {
      if ( v23 == -881305717 )
        System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_21709/*"masterBranch"*/, 0);
      goto LABEL_118;
    }
    v34 = &StringLiteral_17537/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)*v34, 0) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17537/*"branchRouteSelectCount"*/, 0);
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
  v44 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v12 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v9);
  if ( !Item )
    goto LABEL_164;
  v131 = (System_Int32_array *)v20;
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
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
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
    sub_1C93D34(Item);
  }
LABEL_90:
  if ( !v44 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v44,
                    (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9 = (const MethodInfo_38796CC **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v19 )
    goto LABEL_164;
  routeId = Item;
  v51 = System_Collections_Generic_List_object___get_Item(
          *v19,
          4,
          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v51, 0);
  v52 = CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  Item = (__int64)System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v52, 0);
  v53 = *v19;
  if ( !*v19 )
    goto LABEL_164;
  v54 = (System_Type_o *)Item;
  v55 = System_Collections_Generic_List_object___get_Item(
          v53,
          5,
          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (__int64)System_Enum__Parse(v54, (System_String_o *)v55, 0);
  if ( !Item )
    goto LABEL_164;
  v20 = (System_String_o *)v131;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1C940C8(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v123, v124);
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

  if ( (byte_4D2DF5A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&ScriptBranchListViewItem_TypeInfo);
    byte_4D2DF5A = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D2DF5D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2DF5D = 1;
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
          sub_1C93D2C(0, v7);
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

  if ( (byte_4D2DF5C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_1C93AD4(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2DF5C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      ScriptBranchListViewObject__Init_38116508((ScriptBranchListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_1C93A78(
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
  if ( (byte_4D2DF5B & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1C93AD4(&ScriptBranchListViewObject_TypeInfo);
    byte_4D2DF5B = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptBranchListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_38116508((ScriptBranchListViewObject_o *)obj, v7, 0, method);
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

  if ( (byte_4D2DF56 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2DF56 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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

  if ( (byte_4D2DF58 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2DF58 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D2DF57 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2DF57 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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

  if ( (byte_4D2DF5E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4D2DF5E = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1C93D2C(0, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}