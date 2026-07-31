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
  int32_t v9; // w23
  const MethodInfo_444F85C **v10; // x24
  int v11; // w26
  __int64 v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o **v19; // x25
  System_String_o *v20; // x29
  Il2CppObject *v21; // x22
  Il2CppObject *v22; // x19
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
  int v39; // w8
  __int64 *v40; // x8
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x0
  bool v43; // w8
  int v44; // w8
  System_Collections_Generic_List_int__o *v45; // x19
  il2cpp_array_size_t v46; // x8
  __int64 v47; // x29
  unsigned __int64 v48; // x21
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  Il2CppType *v55; // x21
  System_RuntimeTypeHandle_o v56; // x0
  System_Collections_Generic_List_object__o *v57; // x8
  System_Type_o *v58; // x25
  __int64 v59; // x1
  __int64 v60; // x2
  Il2CppObject *v61; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  Il2CppObject *v64; // x0
  System_Collections_Generic_List_object__o *v65; // x8
  Il2CppObject *v66; // x0
  bool v67; // w8
  int v68; // w25
  Il2CppObject *v69; // x0
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x0
  System_String_o *v72; // x24
  int32_t v73; // w21
  int32_t v74; // w28
  ScriptBranchListViewItem_o *v75; // x20
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  const MethodInfo_444F85C **v86; // x27
  int32_t v87; // w23
  System_String_o *v88; // x19
  System_Predicate_object__o *v89; // x21
  __int64 v90; // x24
  int32_t Index; // w0
  System_String_o *v92; // x21
  int32_t v93; // w20
  int32_t v94; // w24
  ScriptBranchListViewItem_o *v95; // x28
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
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
  int32_t v116; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  struct System_Object_array *items; // x8
  _QWORD *v125; // x9
  __int64 size; // x10
  __int64 v127; // x1
  Il2CppClass **v128; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v129; // x0
  const MethodInfo *v130; // x1
  const MethodInfo *v131; // [xsp+28h] [xbp-B8h]
  ListViewManager_o *v132; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v133; // [xsp+40h] [xbp-A0h]
  int32_t v134; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v135; // [xsp+50h] [xbp-90h]
  System_Int32_array *v137; // [xsp+60h] [xbp-80h]
  System_Int32_array *v138; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v141; // [xsp+7Ch] [xbp-64h]

  if ( (byte_5935B95 & 1) == 0 )
  {
    sub_21FFC50(&CondType_CheckType_var);
    sub_21FFC50(&CondType_CheckType_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_21FFC50(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_21FFC50(&ScriptBranchListViewItem_TypeInfo);
    sub_21FFC50(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_21FFC50(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_21FFC50(&StringLiteral_18125/*"branchQuestClear"*/);
    sub_21FFC50(&StringLiteral_16662/*"] "*/);
    sub_21FFC50(&StringLiteral_18128/*"branchRouteSelectCount"*/);
    sub_21FFC50(&StringLiteral_152/*" - 1"*/);
    sub_21FFC50(&StringLiteral_18122/*"branchNotMaterial"*/);
    sub_21FFC50(&StringLiteral_22494/*"masterBranch"*/);
    sub_21FFC50(&StringLiteral_21210/*"ifClear"*/);
    sub_21FFC50(&StringLiteral_18127/*"branchRouteSelect"*/);
    sub_21FFC50(&StringLiteral_18121/*"branchNotHaveSvtEquip"*/);
    sub_21FFC50(&StringLiteral_24259/*"revivalBranch"*/);
    sub_21FFC50(&StringLiteral_18120/*"branchMaterial"*/);
    sub_21FFC50(&StringLiteral_18123/*"branchNotRouteSelect"*/);
    sub_21FFC50(&StringLiteral_18119/*"branchHaveSvtEquip"*/);
    sub_21FFC50(&StringLiteral_17651/*"bScene"*/);
    sub_21FFC50(&StringLiteral_25196/*"tRoute"*/);
    sub_21FFC50(&StringLiteral_18126/*"branchQuestNotClear"*/);
    sub_21FFC50(&StringLiteral_18124/*"branchNotRouteSelectCount"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    byte_5935B95 = 1;
  }
  v132 = (ListViewManager_o *)this;
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !list )
    goto LABEL_166;
  if ( list->fields._size < 1 )
  {
LABEL_156:
    if ( v6 )
    {
      ListViewManager__CreateList(v132, v6->fields._size, 0);
      if ( v6->fields._size < 1 )
      {
LABEL_165:
        ListViewManager__SortItem(v132, -1, 0, -1, 0);
        return;
      }
      v116 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v132->fields.itemList;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v6,
                          v116,
                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v125 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v127 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
        }
        else
        {
          v128 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v128[4] = (Il2CppClass *)v127;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v128 + 4), v127, v118, v119, v120, v121, v122, v123);
        }
        if ( ++v116 >= v6->fields._size )
          goto LABEL_165;
      }
    }
LABEL_166:
    sub_21FFECC(Item, v8);
  }
  v9 = 0;
  v10 = (const MethodInfo_444F85C **)&Method_System_Collections_Generic_List_string__get_Item__;
  v11 = 0;
  v133 = list;
  v135 = v6;
  while ( 1 )
  {
    v12 = sub_21FFEBC(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v9,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v12 )
      goto LABEL_166;
    *(_QWORD *)(v12 + 16) = Item;
    v19 = (System_Collections_Generic_List_object__o **)(v12 + 16);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 16), Item, v13, v14, v15, v16, v17, v18);
    Item = *(_QWORD *)(v12 + 16);
    if ( !Item )
      goto LABEL_166;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      0,
                      *v10);
    if ( !*v19 )
      goto LABEL_166;
    v20 = (System_String_o *)Item;
    v21 = System_Collections_Generic_List_object___get_Item(*v19, 1, *v10);
    Item = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(v12 + 24) = 0xFFFFFFFFLL;
    if ( !Item )
      goto LABEL_166;
    v22 = *(int *)(Item + 24) >= 7
        ? System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 6, *v10)
        : **(Il2CppObject ***)(qword_594C0B8 + 184);
    v23 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v21, 0);
    v141 = v11;
    debugComment = (System_String_o *)v22;
    if ( v23 > 0x5D81BB60 )
      break;
    if ( v23 <= 0x271B37FA )
    {
      checkType = 1;
      switch ( v23 )
      {
        case 0x1604056Fu:
          routeId = 0;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_18122/*"branchNotMaterial"*/, 0) )
            v39 = 1;
          else
            v39 = -1;
          break;
        case 0x26CE7B13u:
          if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17651/*"bScene"*/, 0) )
            goto LABEL_119;
          Item = (__int64)*v19;
          if ( !*v19 )
            goto LABEL_166;
          v35 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)Item,
                  2,
                  *v10);
          Item = System_Int32__Parse((System_String_o *)v35, 0);
          v36 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
          *(_DWORD *)(v12 + 24) = Item;
          if ( !v36 )
            goto LABEL_166;
          v37 = System_Collections_Generic_List_object___get_Item(v36, 3, *v10);
          *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v37, 0);
          Item = sub_21FFD10(int___TypeInfo, 1);
          if ( !*(_QWORD *)(v12 + 16) )
            goto LABEL_166;
          routeId = Item;
          v38 = System_Collections_Generic_List_object___get_Item(
                  *(System_Collections_Generic_List_object__o **)(v12 + 16),
                  4,
                  *v10);
          Item = System_Int32__Parse((System_String_o *)v38, 0);
          if ( !routeId )
            goto LABEL_166;
          if ( !*(_DWORD *)(routeId + 24) )
            goto LABEL_167;
          count = -1;
          checkType = 1;
          v39 = 11;
          *(_DWORD *)(routeId + 32) = Item;
          break;
        case 0x271B37FAu:
          if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_18119/*"branchHaveSvtEquip"*/, 0) )
          {
            Item = (__int64)*v19;
            if ( !*v19 )
              goto LABEL_166;
            v25 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v10);
            v26 = System_Int32__Parse((System_String_o *)v25, 0);
            v27 = 5;
LABEL_35:
            v30 = v26;
            routeId = 0;
            count = -1;
            checkType = 1;
            branchType = v27;
            goto LABEL_123;
          }
          goto LABEL_119;
        default:
          routeId = 0;
          goto LABEL_120;
      }
LABEL_121:
      branchType = v39;
      goto LABEL_122;
    }
    if ( v23 <= 0x4E750E71 )
    {
      if ( v23 != 1053116368 )
      {
        if ( v23 == 1316294257
          && System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_18121/*"branchNotHaveSvtEquip"*/, 0) )
        {
          Item = (__int64)*v19;
          if ( !*v19 )
            goto LABEL_166;
          v29 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)Item,
                  2,
                  *v10);
          v26 = System_Int32__Parse((System_String_o *)v29, 0);
          v27 = 6;
          goto LABEL_35;
        }
        goto LABEL_119;
      }
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_25196/*"tRoute"*/, 0) )
        goto LABEL_119;
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_166;
      v41 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v10);
      *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v41, 0);
      Item = sub_21FFD10(int___TypeInfo, 1);
      if ( !*(_QWORD *)(v12 + 16) )
        goto LABEL_166;
      routeId = Item;
      v42 = System_Collections_Generic_List_object___get_Item(
              *(System_Collections_Generic_List_object__o **)(v12 + 16),
              3,
              *v10);
      Item = System_Int32__Parse((System_String_o *)v42, 0);
      if ( !routeId )
        goto LABEL_166;
      if ( !*(_DWORD *)(routeId + 24) )
        goto LABEL_167;
      *(_DWORD *)(routeId + 32) = Item;
      count = -1;
      checkType = 1;
      v39 = 10;
      goto LABEL_121;
    }
    if ( v23 != 1408301323 )
    {
      if ( v23 == 1568783200 )
      {
        routeId = 0;
        count = -1;
        if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_24259/*"revivalBranch"*/, 0) )
          v33 = 4;
        else
          v33 = -1;
LABEL_48:
        branchType = v33;
        checkType = 1;
LABEL_122:
        v30 = -1;
        goto LABEL_123;
      }
LABEL_119:
      routeId = 0;
      checkType = 1;
LABEL_120:
      v39 = -1;
      count = -1;
      goto LABEL_121;
    }
    v40 = &StringLiteral_18123/*"branchNotRouteSelect"*/;
LABEL_106:
    if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)*v40, 0) )
      goto LABEL_119;
    v67 = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_18127/*"branchRouteSelect"*/, 0);
    Item = (__int64)*v19;
    if ( v67 )
      v68 = 7;
    else
      v68 = 8;
    if ( !Item )
      goto LABEL_166;
    v69 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v10);
    *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v69, 0);
    Item = sub_21FFD10(int___TypeInfo, 1);
    if ( !*(_QWORD *)(v12 + 16) )
      goto LABEL_166;
    routeId = Item;
    v70 = System_Collections_Generic_List_object___get_Item(
            *(System_Collections_Generic_List_object__o **)(v12 + 16),
            3,
            *v10);
    Item = System_Int32__Parse((System_String_o *)v70, 0);
    if ( !routeId )
      goto LABEL_166;
    branchType = v68;
    if ( !*(_DWORD *)(routeId + 24) )
      goto LABEL_167;
    checkType = 0;
    *(_DWORD *)(routeId + 32) = Item;
    v30 = -1;
    count = 1;
LABEL_123:
    v138 = (System_Int32_array *)routeId;
    if ( isLine )
    {
      v72 = System_String__Concat_75483552(
              (System_String_o *)StringLiteral_16395/*"["*/,
              v20,
              (System_String_o *)StringLiteral_16662/*"] "*/,
              (System_String_o *)v21,
              0);
      v73 = *(_DWORD *)(v12 + 24);
      v74 = *(_DWORD *)(v12 + 28);
      v75 = (ScriptBranchListViewItem_o *)sub_21FFEBC(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v75,
        v141,
        v72,
        (System_String_o *)v21,
        v20,
        v73,
        v74,
        v30,
        (System_Int32_array *)routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v131);
      v6 = v135;
      if ( !v135 )
        goto LABEL_166;
      v82 = v135->fields._items;
      list = v133;
      v83 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v135->fields._version;
      if ( !v82 )
        goto LABEL_166;
      v84 = v135->fields._size;
      v10 = (const MethodInfo_444F85C **)&Method_System_Collections_Generic_List_string__get_Item__;
      v11 = v141 + 1;
      if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v135,
          (Il2CppObject *)v75,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &v82->obj.klass + v84;
        v135->fields._size = v84 + 1;
        v85[4] = (Il2CppClass *)v75;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 4), (int32_t)v75, v76, v77, v78, v79, v80, v81);
      }
    }
    else
    {
      v134 = v9;
      v86 = v10;
      v87 = count;
      v88 = (System_String_o *)v21;
      v89 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v90 = v12;
      System_Predicate_object____ctor(
        v89,
        (Il2CppObject *)v12,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0);
      v6 = v135;
      if ( !v135 )
        goto LABEL_166;
      Index = System_Collections_Generic_List_object___FindIndex(
                v135,
                (System_Predicate_T__o *)v89,
                (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( Index < 0 )
      {
        v92 = System_String__Concat_75438412(v88, (System_String_o *)StringLiteral_152/*" - 1"*/, 0);
        v93 = *(_DWORD *)(v12 + 24);
        v94 = *(_DWORD *)(v90 + 28);
        v95 = (ScriptBranchListViewItem_o *)sub_21FFEBC(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v95,
          v141,
          v92,
          v88,
          v20,
          v93,
          v94,
          v30,
          v138,
          branchType,
          v87,
          checkType,
          debugComment,
          v131);
        v102 = v135->fields._items;
        v103 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v135->fields._version;
        if ( !v102 )
          goto LABEL_166;
        v104 = v135->fields._size;
        v10 = (const MethodInfo_444F85C **)&Method_System_Collections_Generic_List_string__get_Item__;
        v11 = v141 + 1;
        v9 = v134;
        if ( (unsigned int)v104 >= LODWORD(v102->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v135,
            (Il2CppObject *)v95,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
        }
        else
        {
          v105 = &v102->obj.klass + v104;
          v135->fields._size = v104 + 1;
          v105[4] = (Il2CppClass *)v95;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v105 + 4), (int32_t)v95, v96, v97, v98, v99, v100, v101);
        }
        list = v133;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v135,
                          Index,
                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_166;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v8);
        v11 = v141;
        v9 = v134;
        v10 = v86;
      }
    }
    if ( ++v9 >= list->fields._size )
      goto LABEL_156;
  }
  if ( v23 <= 0xA9C7DB00 )
  {
    if ( v23 > 0x83820B5B )
    {
      if ( v23 != -1606428809 )
      {
        if ( v23 == -1446520064 )
        {
          routeId = 0;
          count = -1;
          v33 = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_18120/*"branchMaterial"*/, 0) - 1;
          goto LABEL_48;
        }
        goto LABEL_119;
      }
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_21210/*"ifClear"*/, 0) )
        goto LABEL_119;
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_166;
      v64 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v10);
      Item = System_Int32__Parse((System_String_o *)v64, 0);
      v65 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v65 )
        goto LABEL_166;
      v66 = System_Collections_Generic_List_object___get_Item(v65, 3, *v10);
      routeId = 0;
      count = -1;
      *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v66, 0);
      checkType = 1;
      v39 = 9;
      goto LABEL_121;
    }
    if ( v23 != -2116001178 )
    {
      if ( v23 != -2088629413
        || !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_18126/*"branchQuestNotClear"*/, 0) )
      {
        goto LABEL_119;
      }
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_166;
      v28 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v10);
      if ( System_String__IsNullOrEmpty((System_String_o *)v28, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_166;
        v106 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v10);
        Item = System_Int32__Parse((System_String_o *)v106, 0);
      }
      v107 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v107 )
        goto LABEL_166;
      v108 = System_Collections_Generic_List_object___get_Item(v107, 3, *v10);
      if ( System_String__IsNullOrEmpty((System_String_o *)v108, 0) )
      {
        v109 = 0;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_166;
        v114 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v10);
        v109 = System_Int32__Parse((System_String_o *)v114, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v109;
      count = -1;
      checkType = 1;
      v39 = 3;
      goto LABEL_121;
    }
    v40 = &StringLiteral_18127/*"branchRouteSelect"*/;
    goto LABEL_106;
  }
  if ( v23 > 0xCB78578B )
  {
    if ( v23 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_18125/*"branchQuestClear"*/, 0) )
        goto LABEL_119;
      Item = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_166;
      v71 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v10);
      if ( System_String__IsNullOrEmpty((System_String_o *)v71, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_166;
        v110 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v10);
        Item = System_Int32__Parse((System_String_o *)v110, 0);
      }
      v111 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v111 )
        goto LABEL_166;
      v112 = System_Collections_Generic_List_object___get_Item(v111, 3, *v10);
      if ( System_String__IsNullOrEmpty((System_String_o *)v112, 0) )
      {
        v113 = 0;
      }
      else
      {
        Item = (__int64)*v19;
        if ( !*v19 )
          goto LABEL_166;
        v115 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v10);
        v113 = System_Int32__Parse((System_String_o *)v115, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v113;
      count = -1;
      checkType = 1;
      v39 = 2;
      goto LABEL_121;
    }
    if ( v23 != -201512038 )
      goto LABEL_119;
    v34 = &StringLiteral_18124/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v23 != -1252550667 )
    {
      if ( v23 == -881305717 )
        System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_22494/*"masterBranch"*/, 0);
      goto LABEL_119;
    }
    v34 = &StringLiteral_18128/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)*v34, 0) )
    goto LABEL_119;
  v43 = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_18128/*"branchRouteSelectCount"*/, 0);
  Item = (__int64)*v19;
  if ( v43 )
    v44 = 7;
  else
    v44 = 8;
  branchType = v44;
  if ( !Item )
    goto LABEL_166;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v10);
  if ( !Item )
    goto LABEL_166;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_166;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_167;
  *(_DWORD *)(v12 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0);
  v45 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v12 + 16);
  if ( !Item )
    goto LABEL_166;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v10);
  if ( !Item )
    goto LABEL_166;
  v137 = (System_Int32_array *)v20;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_166;
  v46 = *(_QWORD *)(Item + 24);
  v47 = Item;
  if ( (int)v46 >= 1 )
  {
    v48 = 0;
    while ( v48 < (unsigned int)v46 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v47 + 32 + 8 * v48), 0);
      if ( !v45 )
        goto LABEL_166;
      v49 = v45->fields._items;
      v50 = Method_System_Collections_Generic_List_int__Add__;
      ++v45->fields._version;
      if ( !v49 )
        goto LABEL_166;
      v51 = v45->fields._size;
      v8 = (const MethodInfo *)(unsigned int)Item;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v45,
          Item,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v45->fields._size = v51 + 1;
        v49->m_Items[v51] = Item;
      }
      LODWORD(v46) = *(_DWORD *)(v47 + 24);
      if ( (__int64)++v48 >= (int)v46 )
        goto LABEL_91;
    }
LABEL_167:
    sub_21FFED4(Item);
  }
LABEL_91:
  if ( !v45 )
    goto LABEL_166;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v45,
                    (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  v10 = (const MethodInfo_444F85C **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v19 )
    goto LABEL_166;
  routeId = Item;
  v52 = System_Collections_Generic_List_object___get_Item(
          *v19,
          4,
          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v52, 0);
  v55 = CondType_CheckType_var;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v53, v54);
  v56.fields.value = (intptr_t)v55;
  Item = (__int64)System_Type__GetTypeFromHandle(v56, 0);
  v57 = *v19;
  if ( !*v19 )
    goto LABEL_166;
  v58 = (System_Type_o *)Item;
  v61 = System_Collections_Generic_List_object___get_Item(
          v57,
          5,
          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v59, v60);
  Item = (__int64)System_Enum__Parse(v58, (System_String_o *)v61, 0);
  if ( !Item )
    goto LABEL_166;
  v20 = (System_String_o *)v137;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0(Item, CondType_CheckType_TypeInfo, v62, v63);
    goto LABEL_122;
  }
  sub_220024C(Item, CondType_CheckType_TypeInfo, v62, v63);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v129, v130);
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

  if ( (byte_5935B96 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ScriptBranchListViewItem_TypeInfo);
    byte_5935B96 = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_21FFECC(this, 0);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_5935B99 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935B99 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
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
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5935B98 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_21FFC50(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5935B98 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      ScriptBranchListViewObject__Init_44313576((ScriptBranchListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
  }
}


void ScriptBranchListViewManager__SetMode(
        ScriptBranchListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
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
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5935B97 & 1) == 0 )
  {
    sub_21FFC50(&ScriptBranchListViewObject_TypeInfo);
    byte_5935B97 = 1;
  }
  if ( obj
    && (naturalAligment = ScriptBranchListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptBranchListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 1 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  ScriptBranchListViewObject__Init_44313576((ScriptBranchListViewObject_o *)v7, v8, 0, method);
}


void ScriptBranchListViewManager__add_callbackFunc(
        ScriptBranchListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ScriptBranchListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5935B92 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5935B92 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  ScriptBranchListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *ScriptBranchListViewManager__get_ObjectList(
        ScriptBranchListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5935B94 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935B94 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptBranchListViewObject__o *)v3;
}


void ScriptBranchListViewManager__remove_callbackFunc(
        ScriptBranchListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ScriptBranchListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5935B93 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5935B93 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  ScriptBranchListViewManager__get_ObjectList(v11, v12);
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

  if ( (byte_5935B9A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_5935B9A = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_21FFECC(0, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}