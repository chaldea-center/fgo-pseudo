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
  const MethodInfo_37898B4 **v9; // x24
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
  __int64 v35; // x2
  __int64 *v36; // x8
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x8
  int v40; // w9
  System_Collections_Generic_List_int__o *v41; // x19
  il2cpp_array_size_t v42; // x8
  __int64 v43; // x29
  unsigned __int64 v44; // x21
  struct System_Int32_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppObject *v48; // x0
  Il2CppType *v49; // x21
  System_RuntimeTypeHandle_o v50; // x0
  System_Collections_Generic_List_object__o *v51; // x8
  System_Type_o *v52; // x25
  Il2CppObject *v53; // x21
  Il2CppObject *v54; // x0
  System_Collections_Generic_List_object__o *v55; // x8
  Il2CppObject *v56; // x0
  System_Collections_Generic_List_object__o *v57; // x8
  int v58; // w25
  Il2CppObject *v59; // x0
  Il2CppObject *v60; // x0
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x0
  System_Collections_Generic_List_object__o *v63; // x8
  Il2CppObject *v64; // x0
  int32_t v65; // w0
  Il2CppObject *v66; // x0
  System_Collections_Generic_List_object__o *v67; // x8
  Il2CppObject *v68; // x0
  int32_t v69; // w0
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  int32_t v73; // w21
  int32_t v74; // w28
  System_String_o *v75; // x24
  ScriptBranchListViewItem_o *v76; // x20
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  const MethodInfo_37898B4 **v83; // x27
  int32_t v84; // w23
  System_String_o *v85; // x19
  System_Predicate_object__o *v86; // x21
  __int64 v87; // x24
  int32_t Index; // w0
  System_String_o *v89; // x0
  int32_t v90; // w20
  int32_t v91; // w24
  System_String_o *v92; // x21
  ScriptBranchListViewItem_o *v93; // x28
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  int32_t v100; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct System_Object_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  __int64 v107; // x1
  Il2CppClass **v108; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v109; // x0
  const MethodInfo *v110; // x1
  const MethodInfo *v111; // [xsp+28h] [xbp-B8h]
  ListViewManager_o *v112; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v113; // [xsp+40h] [xbp-A0h]
  int32_t v114; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v115; // [xsp+50h] [xbp-90h]
  System_Int32_array *v117; // [xsp+60h] [xbp-80h]
  System_Int32_array *v118; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v121; // [xsp+7Ch] [xbp-64h]

  if ( (byte_4C2489C & 1) == 0 )
  {
    sub_1C2D490(&CondType_CheckType_var);
    sub_1C2D490(&CondType_CheckType_TypeInfo);
    sub_1C2D490(&System_Enum_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_1C2D490(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_1C2D490(&ScriptBranchListViewItem_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    sub_1C2D490(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_1C2D490(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_1C2D490(&StringLiteral_17400/*"branchQuestClear"*/);
    sub_1C2D490(&StringLiteral_16058/*"] "*/);
    sub_1C2D490(&StringLiteral_17403/*"branchRouteSelectCount"*/);
    sub_1C2D490(&StringLiteral_151/*" - 1"*/);
    sub_1C2D490(&StringLiteral_17397/*"branchNotMaterial"*/);
    sub_1C2D490(&StringLiteral_21427/*"masterBranch"*/);
    sub_1C2D490(&StringLiteral_20257/*"ifClear"*/);
    sub_1C2D490(&StringLiteral_17402/*"branchRouteSelect"*/);
    sub_1C2D490(&StringLiteral_17396/*"branchNotHaveSvtEquip"*/);
    sub_1C2D490(&StringLiteral_23077/*"revivalBranch"*/);
    sub_1C2D490(&StringLiteral_17395/*"branchMaterial"*/);
    sub_1C2D490(&StringLiteral_17398/*"branchNotRouteSelect"*/);
    sub_1C2D490(&StringLiteral_17394/*"branchHaveSvtEquip"*/);
    sub_1C2D490(&StringLiteral_16966/*"bScene"*/);
    sub_1C2D490(&StringLiteral_23946/*"tRoute"*/);
    sub_1C2D490(&StringLiteral_17401/*"branchQuestNotClear"*/);
    sub_1C2D490(&StringLiteral_17399/*"branchNotRouteSelectCount"*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    byte_4C2489C = 1;
  }
  v112 = (ListViewManager_o *)this;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !list )
    goto LABEL_164;
  if ( list->fields._size < 1 )
  {
LABEL_154:
    if ( v6 )
    {
      ListViewManager__CreateList(v112, v6->fields._size, 0);
      if ( v6->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v112, -1, 0, -1, 0);
        return;
      }
      v100 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v112->fields.itemList;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v6,
                          v100,
                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v105 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v107 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
        }
        else
        {
          v108 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v108[4] = (Il2CppClass *)v107;
          sub_1C2D434((CGThumbnailListItem_o *)(v108 + 4), v107, v102, v103);
        }
        if ( ++v100 >= v6->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1C2D6EC(Item, v8);
  }
  v9 = (const MethodInfo_37898B4 **)&Method_System_Collections_Generic_List_string__get_Item__;
  v10 = 0;
  v11 = 0;
  v113 = list;
  v115 = v6;
  while ( 1 )
  {
    v12 = sub_1C2D6DC(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v10,
                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v12 )
      goto LABEL_164;
    *(_QWORD *)(v12 + 16) = Item;
    v15 = (System_Collections_Generic_List_object__o **)(v12 + 16);
    sub_1C2D434((CGThumbnailListItem_o *)(v12 + 16), Item, v13, v14);
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
    v121 = v11;
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
          if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17397/*"branchNotMaterial"*/, 0) )
            v29 = 1;
          else
            v29 = -1;
          goto LABEL_136;
        }
        if ( v19 != 651066131 )
        {
          if ( v19 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17394/*"branchHaveSvtEquip"*/, 0) )
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
        if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_16966/*"bScene"*/, 0) )
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
        Item = sub_1C2D538(int___TypeInfo, 1);
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
            && System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17396/*"branchNotHaveSvtEquip"*/, 0) )
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
        if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_23946/*"tRoute"*/, 0) )
          goto LABEL_118;
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v37 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v37, 0);
        Item = sub_1C2D538(int___TypeInfo, 1);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = Item;
        v38 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                3,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v38, 0);
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
          if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_23077/*"revivalBranch"*/, 0) )
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
      v36 = &StringLiteral_17398/*"branchNotRouteSelect"*/;
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
          v29 = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17395/*"branchMaterial"*/, 0) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_20257/*"ifClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_164;
      v54 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      Item = System_Int32__Parse((System_String_o *)v54, 0);
      v55 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v55 )
        goto LABEL_164;
      v56 = System_Collections_Generic_List_object___get_Item(v55, 3, *v9);
      routeId = 0;
      *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v56, 0);
      count = -1;
      checkType = 1;
      v29 = 9;
      goto LABEL_136;
    }
    if ( v19 != -2116001178 )
    {
      if ( v19 != -2088629413
        || !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17401/*"branchQuestNotClear"*/, 0) )
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
        v62 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v62, 0);
      }
      v63 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v63 )
        goto LABEL_164;
      v64 = System_Collections_Generic_List_object___get_Item(v63, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v64, 0) )
      {
        v65 = 0;
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
        v65 = System_Int32__Parse((System_String_o *)v70, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v65;
      count = -1;
      checkType = 1;
      v29 = 3;
      goto LABEL_136;
    }
    v36 = &StringLiteral_17402/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)*v36, 0) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17402/*"branchRouteSelect"*/, 0);
    v57 = *v15;
    if ( (Item & 1) != 0 )
      v58 = 7;
    else
      v58 = 8;
    if ( !v57 )
      goto LABEL_164;
    v59 = System_Collections_Generic_List_object___get_Item(v57, 2, *v9);
    *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v59, 0);
    Item = sub_1C2D538(int___TypeInfo, 1);
    if ( !*(_QWORD *)(v12 + 16) )
      goto LABEL_164;
    routeId = Item;
    v60 = System_Collections_Generic_List_object___get_Item(
            *(System_Collections_Generic_List_object__o **)(v12 + 16),
            3,
            *v9);
    Item = System_Int32__Parse((System_String_o *)v60, 0);
    if ( !routeId )
      goto LABEL_164;
    branchType = v58;
    if ( !*(_DWORD *)(routeId + 24) )
      goto LABEL_165;
    checkType = 0;
    *(_DWORD *)(routeId + 32) = Item;
    v26 = -1;
    count = 1;
LABEL_138:
    v118 = (System_Int32_array *)routeId;
    if ( isLine )
    {
      v72 = System_String__Concat_63498116(
              (System_String_o *)StringLiteral_15801/*"["*/,
              v16,
              (System_String_o *)StringLiteral_16058/*"] "*/,
              (System_String_o *)v17,
              0);
      v73 = *(_DWORD *)(v12 + 24);
      v74 = *(_DWORD *)(v12 + 28);
      v75 = v72;
      v76 = (ScriptBranchListViewItem_o *)sub_1C2D6DC(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v76,
        v121,
        v75,
        (System_String_o *)v17,
        v16,
        v73,
        v74,
        v26,
        (System_Int32_array *)routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v111);
      v6 = v115;
      if ( !v115 )
        goto LABEL_164;
      v79 = v115->fields._items;
      list = v113;
      v80 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v115->fields._version;
      if ( !v79 )
        goto LABEL_164;
      v81 = v115->fields._size;
      v9 = (const MethodInfo_37898B4 **)&Method_System_Collections_Generic_List_string__get_Item__;
      v11 = v121 + 1;
      if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v115,
          (Il2CppObject *)v76,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = &v79->obj.klass + v81;
        v115->fields._size = v81 + 1;
        v82[4] = (Il2CppClass *)v76;
        sub_1C2D434((CGThumbnailListItem_o *)(v82 + 4), (int32_t)v76, v77, v78);
      }
    }
    else
    {
      v114 = v10;
      v83 = v9;
      v84 = count;
      v85 = (System_String_o *)v17;
      v86 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v87 = v12;
      System_Predicate_object____ctor(
        v86,
        (Il2CppObject *)v12,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0);
      v6 = v115;
      if ( !v115 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v115,
                (System_Predicate_T__o *)v86,
                (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( Index < 0 )
      {
        v89 = System_String__Concat_63457864(v85, (System_String_o *)StringLiteral_151/*" - 1"*/, 0);
        v90 = *(_DWORD *)(v12 + 24);
        v91 = *(_DWORD *)(v87 + 28);
        v92 = v89;
        v93 = (ScriptBranchListViewItem_o *)sub_1C2D6DC(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v93,
          v121,
          v92,
          v85,
          v16,
          v90,
          v91,
          v26,
          v118,
          branchType,
          v84,
          checkType,
          debugComment,
          v111);
        v96 = v115->fields._items;
        v97 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v115->fields._version;
        if ( !v96 )
          goto LABEL_164;
        v98 = v115->fields._size;
        v9 = (const MethodInfo_37898B4 **)&Method_System_Collections_Generic_List_string__get_Item__;
        v10 = v114;
        v11 = v121 + 1;
        if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v115,
            (Il2CppObject *)v93,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
        }
        else
        {
          v99 = &v96->obj.klass + v98;
          v115->fields._size = v98 + 1;
          v99[4] = (Il2CppClass *)v93;
          sub_1C2D434((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v93, v94, v95);
        }
        list = v113;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v115,
                          Index,
                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v8);
        v11 = v121;
        v10 = v114;
        v9 = v83;
      }
    }
    if ( ++v10 >= list->fields._size )
      goto LABEL_154;
  }
  if ( v19 > 0xCB78578B )
  {
    if ( v19 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17400/*"branchQuestClear"*/, 0) )
        goto LABEL_118;
      Item = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_164;
      v61 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v61, 0) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v66 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v66, 0);
      }
      v67 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v67 )
        goto LABEL_164;
      v68 = System_Collections_Generic_List_object___get_Item(v67, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v68, 0) )
      {
        v69 = 0;
      }
      else
      {
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v71 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v69 = System_Int32__Parse((System_String_o *)v71, 0);
      }
      routeId = 0;
      *(_DWORD *)(v12 + 28) = v69;
      count = -1;
      checkType = 1;
      v29 = 2;
LABEL_136:
      branchType = v29;
      goto LABEL_137;
    }
    if ( v19 != -201512038 )
      goto LABEL_118;
    v30 = &StringLiteral_17399/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v19 != -1252550667 )
    {
      if ( v19 == -881305717 )
        System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_21427/*"masterBranch"*/, 0);
      goto LABEL_118;
    }
    v30 = &StringLiteral_17403/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)*v30, 0) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17403/*"branchRouteSelectCount"*/, 0);
  v39 = *v15;
  if ( (Item & 1) != 0 )
    v40 = 7;
  else
    v40 = 8;
  branchType = v40;
  if ( !v39 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(v39, 2, *v9);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v12 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0);
  v41 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v12 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v9);
  if ( !Item )
    goto LABEL_164;
  v117 = (System_Int32_array *)v16;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0);
  if ( !Item )
    goto LABEL_164;
  v42 = *(_QWORD *)(Item + 24);
  v43 = Item;
  if ( (int)v42 >= 1 )
  {
    v44 = 0;
    while ( v44 < (unsigned int)v42 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v43 + 32 + 8 * v44), 0);
      if ( !v41 )
        goto LABEL_164;
      v45 = v41->fields._items;
      v46 = Method_System_Collections_Generic_List_int__Add__;
      ++v41->fields._version;
      if ( !v45 )
        goto LABEL_164;
      v47 = v41->fields._size;
      v8 = (const MethodInfo *)(unsigned int)Item;
      if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v41,
          Item,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v41->fields._size = v47 + 1;
        v45->m_Items[v47] = Item;
      }
      LODWORD(v42) = *(_DWORD *)(v43 + 24);
      if ( (__int64)++v44 >= (int)v42 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1C2D6F4(Item, v8, v35);
  }
LABEL_90:
  if ( !v41 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v41,
                    (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9 = (const MethodInfo_37898B4 **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v15 )
    goto LABEL_164;
  routeId = Item;
  v48 = System_Collections_Generic_List_object___get_Item(
          *v15,
          4,
          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v48, 0);
  v49 = CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v50.fields.value = (intptr_t)v49;
  Item = (__int64)System_Type__GetTypeFromHandle(v50, 0);
  v51 = *v15;
  if ( !*v15 )
    goto LABEL_164;
  v52 = (System_Type_o *)Item;
  v53 = System_Collections_Generic_List_object___get_Item(
          v51,
          5,
          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (__int64)System_Enum__Parse(v52, (System_String_o *)v53, 0);
  if ( !Item )
    goto LABEL_164;
  v16 = (System_String_o *)v117;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1C2D9AC(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v109, v110);
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

  if ( (byte_4C2489D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&ScriptBranchListViewItem_TypeInfo);
    byte_4C2489D = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(this, 0);
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

  if ( (byte_4C248A0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C248A0 = 1;
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
          sub_1C2D6EC(0, v7);
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

  if ( (byte_4C2489F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_1C2D490(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2489F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      ScriptBranchListViewObject__Init_37216424((ScriptBranchListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
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
  if ( (byte_4C2489E & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1C2D490(&ScriptBranchListViewObject_TypeInfo);
    byte_4C2489E = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptBranchListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_37216424((ScriptBranchListViewObject_o *)obj, v7, 0, method);
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

  if ( (byte_4C24899 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C24899 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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

  if ( (byte_4C2489B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2489B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C2489A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2489A = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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

  if ( (byte_4C248A1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C248A1 = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1C2D6EC(0, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}