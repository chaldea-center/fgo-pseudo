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
  System_Collections_Generic_List_object__o *v6; // x22
  __int64 Item; // x0
  const MethodInfo *v8; // x1
  const MethodInfo_34FD564 **v9; // x24
  int32_t v10; // w23
  int v11; // w26
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
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
  System_Int32_array *routeId; // x27
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
  __int64 v41; // x8
  __int64 v42; // x29
  unsigned __int64 v43; // x21
  struct System_Int32_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppObject *v47; // x0
  intptr_t v48; // w21
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
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  const MethodInfo_34FD564 **v81; // x27
  int32_t v82; // w23
  System_String_o *v83; // x19
  System_Predicate_object__o *v84; // x21
  __int64 v85; // x24
  int32_t Index; // w0
  System_String_o *v87; // x0
  int32_t v88; // w20
  int32_t v89; // w24
  System_String_o *v90; // x21
  ScriptBranchListViewItem_o *v91; // x28
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  int32_t v98; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v100; // w2
  int32_t v101; // w3
  struct System_Object_array *items; // x8
  _QWORD *v103; // x9
  __int64 size; // x10
  __int64 v105; // x1
  Il2CppClass **v106; // x0
  ScriptBranchListViewManager_o *v107; // x0
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // [xsp+28h] [xbp-B8h]
  ListViewManager_o *v110; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v111; // [xsp+40h] [xbp-A0h]
  int32_t v112; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v113; // [xsp+50h] [xbp-90h]
  System_Int32_array *v115; // [xsp+60h] [xbp-80h]
  System_Int32_array *v116; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v119; // [xsp+7Ch] [xbp-64h]
  System_RuntimeTypeHandle_o v120; // 0:w0.4

  if ( (byte_4A589F7 & 1) == 0 )
  {
    sub_1B885B0(&CondType_CheckType_var);
    sub_1B885B0(&CondType_CheckType_TypeInfo);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_1B885B0(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_1B885B0(&ScriptBranchListViewItem_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_1B885B0(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_1B885B0(&StringLiteral_17435/*"branchQuestClear"*/);
    sub_1B885B0(&StringLiteral_16072/*"] "*/);
    sub_1B885B0(&StringLiteral_17438/*"branchRouteSelectCount"*/);
    sub_1B885B0(&StringLiteral_162/*" - 1"*/);
    sub_1B885B0(&StringLiteral_17432/*"branchNotMaterial"*/);
    sub_1B885B0(&StringLiteral_21293/*"masterBranch"*/);
    sub_1B885B0(&StringLiteral_20219/*"ifClear"*/);
    sub_1B885B0(&StringLiteral_17437/*"branchRouteSelect"*/);
    sub_1B885B0(&StringLiteral_17431/*"branchNotHaveSvtEquip"*/);
    sub_1B885B0(&StringLiteral_22923/*"revivalBranch"*/);
    sub_1B885B0(&StringLiteral_17430/*"branchMaterial"*/);
    sub_1B885B0(&StringLiteral_17433/*"branchNotRouteSelect"*/);
    sub_1B885B0(&StringLiteral_17429/*"branchHaveSvtEquip"*/);
    sub_1B885B0(&StringLiteral_17000/*"bScene"*/);
    sub_1B885B0(&StringLiteral_23824/*"tRoute"*/);
    sub_1B885B0(&StringLiteral_17436/*"branchQuestNotClear"*/);
    sub_1B885B0(&StringLiteral_17434/*"branchNotRouteSelectCount"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    byte_4A589F7 = 1;
  }
  v110 = (ListViewManager_o *)this;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !list )
    goto LABEL_164;
  if ( list->fields._size < 1 )
  {
LABEL_154:
    if ( v6 )
    {
      ListViewManager__CreateList(v110, v6->fields._size, 0LL);
      if ( v6->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v110, -1, 0, -1, 0LL);
        return;
      }
      v98 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v110->fields.itemList;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v6,
                          v98,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v103 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v105 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
        }
        else
        {
          v106 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v106[4] = (Il2CppClass *)v105;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v106 + 4), v105, v100, v101);
        }
        if ( ++v98 >= v6->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1B8880C(Item, v8);
  }
  v9 = (const MethodInfo_34FD564 **)&Method_System_Collections_Generic_List_string__get_Item__;
  v10 = 0;
  v11 = 0;
  v111 = list;
  v113 = v6;
  while ( 1 )
  {
    v12 = sub_1B887FC(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    ScriptBranchListViewManager___c__DisplayClass9_0___ctor(
      (ScriptBranchListViewManager___c__DisplayClass9_0_o *)v12,
      0LL);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v10,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v12 )
      goto LABEL_164;
    *(_QWORD *)(v12 + 16) = Item;
    v15 = (System_Collections_Generic_List_object__o **)(v12 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 16), Item, v13, v14);
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
    v19 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v17, 0LL);
    v119 = v11;
    debugComment = Empty;
    if ( v19 <= 0x5D81BB60 )
    {
      if ( v19 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v19 == 369362287 )
        {
          routeId = 0LL;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17432/*"branchNotMaterial"*/, 0LL) )
            v29 = 1;
          else
            v29 = -1;
          goto LABEL_136;
        }
        if ( v19 != 651066131 )
        {
          if ( v19 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17429/*"branchHaveSvtEquip"*/, 0LL) )
            {
              Item = (__int64)*v15;
              if ( !*v15 )
                goto LABEL_164;
              v21 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      2,
                      *v9);
              v22 = System_Int32__Parse((System_String_o *)v21, 0LL);
              v23 = 5;
LABEL_35:
              v26 = v22;
              routeId = 0LL;
              count = -1;
              checkType = 1;
              branchType = v23;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0LL;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17000/*"bScene"*/, 0LL) )
          goto LABEL_118;
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v31 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v31, 0LL);
        v32 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
        *(_DWORD *)(v12 + 24) = Item;
        if ( !v32 )
          goto LABEL_164;
        v33 = System_Collections_Generic_List_object___get_Item(v32, 3, *v9);
        *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v33, 0LL);
        Item = sub_1B88658(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v34 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                4,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v34, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v29 = 11;
        routeId->m_Items[1] = Item;
        goto LABEL_136;
      }
      if ( v19 <= 0x4E750E71 )
      {
        if ( v19 != 1053116368 )
        {
          if ( v19 == 1316294257
            && System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17431/*"branchNotHaveSvtEquip"*/, 0LL) )
          {
            Item = (__int64)*v15;
            if ( !*v15 )
              goto LABEL_164;
            v25 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v9);
            v22 = System_Int32__Parse((System_String_o *)v25, 0LL);
            v23 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_23824/*"tRoute"*/, 0LL) )
          goto LABEL_118;
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v36 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v36, 0LL);
        Item = sub_1B88658(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v37 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                3,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v37, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        routeId->m_Items[1] = Item;
        count = -1;
        checkType = 1;
        v29 = 10;
        goto LABEL_136;
      }
      if ( v19 != 1408301323 )
      {
        if ( v19 == 1568783200 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_22923/*"revivalBranch"*/, 0LL) )
            v29 = 4;
          else
            v29 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0LL;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v26 = -1;
        goto LABEL_138;
      }
      v35 = &StringLiteral_17433/*"branchNotRouteSelect"*/;
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
          routeId = 0LL;
          count = -1;
          checkType = 1;
          v29 = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17430/*"branchMaterial"*/, 0LL) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_20219/*"ifClear"*/, 0LL) )
        goto LABEL_118;
      Item = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_164;
      v52 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      Item = System_Int32__Parse((System_String_o *)v52, 0LL);
      v53 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v53 )
        goto LABEL_164;
      v54 = System_Collections_Generic_List_object___get_Item(v53, 3, *v9);
      routeId = 0LL;
      *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v54, 0LL);
      count = -1;
      checkType = 1;
      v29 = 9;
      goto LABEL_136;
    }
    if ( v19 != -2116001178 )
    {
      if ( v19 != -2088629413
        || !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17436/*"branchQuestNotClear"*/, 0LL) )
      {
        goto LABEL_118;
      }
      Item = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_164;
      v24 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v24, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v60 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v60, 0LL);
      }
      v61 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v61 )
        goto LABEL_164;
      v62 = System_Collections_Generic_List_object___get_Item(v61, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v62, 0LL) )
      {
        v63 = 0;
      }
      else
      {
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v68 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v63 = System_Int32__Parse((System_String_o *)v68, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v12 + 28) = v63;
      count = -1;
      checkType = 1;
      v29 = 3;
      goto LABEL_136;
    }
    v35 = &StringLiteral_17437/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)*v35, 0LL) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17437/*"branchRouteSelect"*/, 0LL);
    v55 = *v15;
    if ( (Item & 1) != 0 )
      v56 = 7;
    else
      v56 = 8;
    if ( !v55 )
      goto LABEL_164;
    v57 = System_Collections_Generic_List_object___get_Item(v55, 2, *v9);
    *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v57, 0LL);
    Item = sub_1B88658(int___TypeInfo, 1LL);
    if ( !*(_QWORD *)(v12 + 16) )
      goto LABEL_164;
    routeId = (System_Int32_array *)Item;
    v58 = System_Collections_Generic_List_object___get_Item(
            *(System_Collections_Generic_List_object__o **)(v12 + 16),
            3,
            *v9);
    Item = System_Int32__Parse((System_String_o *)v58, 0LL);
    if ( !routeId )
      goto LABEL_164;
    branchType = v56;
    if ( !routeId->max_length )
      goto LABEL_165;
    checkType = 0;
    routeId->m_Items[1] = Item;
    v26 = -1;
    count = 1;
LABEL_138:
    v116 = routeId;
    if ( isLine )
    {
      v70 = System_String__Concat_61720296(
              (System_String_o *)StringLiteral_15812/*"["*/,
              v16,
              (System_String_o *)StringLiteral_16072/*"] "*/,
              (System_String_o *)v17,
              0LL);
      v71 = *(_DWORD *)(v12 + 24);
      v72 = *(_DWORD *)(v12 + 28);
      v73 = v70;
      v74 = (ScriptBranchListViewItem_o *)sub_1B887FC(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v74,
        v119,
        v73,
        (System_String_o *)v17,
        v16,
        v71,
        v72,
        v26,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v109);
      v6 = v113;
      if ( !v113 )
        goto LABEL_164;
      v77 = v113->fields._items;
      list = v111;
      v78 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v113->fields._version;
      if ( !v77 )
        goto LABEL_164;
      v79 = v113->fields._size;
      v9 = (const MethodInfo_34FD564 **)&Method_System_Collections_Generic_List_string__get_Item__;
      v11 = v119 + 1;
      if ( (unsigned int)v79 >= v77->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v113,
          (Il2CppObject *)v74,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &v77->obj.klass + v79;
        v113->fields._size = v79 + 1;
        v80[4] = (Il2CppClass *)v74;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v74, v75, v76);
      }
    }
    else
    {
      v112 = v10;
      v81 = v9;
      v82 = count;
      v83 = (System_String_o *)v17;
      v84 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v85 = v12;
      System_Predicate_object____ctor(
        v84,
        (Il2CppObject *)v12,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0LL);
      v6 = v113;
      if ( !v113 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v113,
                (System_Predicate_T__o *)v84,
                (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v87 = System_String__Concat_61707032(v83, (System_String_o *)StringLiteral_162/*" - 1"*/, 0LL);
        v88 = *(_DWORD *)(v12 + 24);
        v89 = *(_DWORD *)(v85 + 28);
        v90 = v87;
        v91 = (ScriptBranchListViewItem_o *)sub_1B887FC(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v91,
          v119,
          v90,
          v83,
          v16,
          v88,
          v89,
          v26,
          v116,
          branchType,
          v82,
          checkType,
          debugComment,
          v109);
        v94 = v113->fields._items;
        v95 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v113->fields._version;
        if ( !v94 )
          goto LABEL_164;
        v96 = v113->fields._size;
        v9 = (const MethodInfo_34FD564 **)&Method_System_Collections_Generic_List_string__get_Item__;
        v10 = v112;
        v11 = v119 + 1;
        if ( (unsigned int)v96 >= v94->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v113,
            (Il2CppObject *)v91,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
        }
        else
        {
          v97 = &v94->obj.klass + v96;
          v113->fields._size = v96 + 1;
          v97[4] = (Il2CppClass *)v91;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v97 + 4), (int32_t)v91, v92, v93);
        }
        list = v111;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v113,
                          Index,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v8);
        v11 = v119;
        v10 = v112;
        v9 = v81;
      }
    }
    if ( ++v10 >= list->fields._size )
      goto LABEL_154;
  }
  if ( v19 > 0xCB78578B )
  {
    if ( v19 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17435/*"branchQuestClear"*/, 0LL) )
        goto LABEL_118;
      Item = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_164;
      v59 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v59, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v15;
        if ( !*v15 )
          goto LABEL_164;
        v64 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v64, 0LL);
      }
      v65 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v65 )
        goto LABEL_164;
      v66 = System_Collections_Generic_List_object___get_Item(v65, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v66, 0LL) )
      {
        v67 = 0;
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
        v67 = System_Int32__Parse((System_String_o *)v69, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v12 + 28) = v67;
      count = -1;
      checkType = 1;
      v29 = 2;
LABEL_136:
      branchType = v29;
      goto LABEL_137;
    }
    if ( v19 != -201512038 )
      goto LABEL_118;
    v30 = &StringLiteral_17434/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v19 != -1252550667 )
    {
      if ( v19 == -881305717 )
        System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_21293/*"masterBranch"*/, 0LL);
      goto LABEL_118;
    }
    v30 = &StringLiteral_17438/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v17, (System_String_o *)*v30, 0LL) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v17, (System_String_o *)StringLiteral_17438/*"branchRouteSelectCount"*/, 0LL);
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
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v12 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0LL);
  v40 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v12 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v9);
  if ( !Item )
    goto LABEL_164;
  v115 = (System_Int32_array *)v16;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  v41 = *(_QWORD *)(Item + 24);
  v42 = Item;
  if ( (int)v41 >= 1 )
  {
    v43 = 0LL;
    while ( v43 < (unsigned int)v41 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v42 + 32 + 8 * v43), 0LL);
      if ( !v40 )
        goto LABEL_164;
      v44 = v40->fields._items;
      v45 = Method_System_Collections_Generic_List_int__Add__;
      ++v40->fields._version;
      if ( !v44 )
        goto LABEL_164;
      v46 = v40->fields._size;
      v8 = (const MethodInfo *)(unsigned int)Item;
      if ( (unsigned int)v46 >= v44->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v40,
          Item,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v40->fields._size = v46 + 1;
        v44->m_Items[v46 + 1] = Item;
      }
      LODWORD(v41) = *(_DWORD *)(v42 + 24);
      if ( (__int64)++v43 >= (int)v41 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1B88814(Item, v8);
  }
LABEL_90:
  if ( !v40 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v40,
                    (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9 = (const MethodInfo_34FD564 **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v15 )
    goto LABEL_164;
  routeId = (System_Int32_array *)Item;
  v47 = System_Collections_Generic_List_object___get_Item(
          *v15,
          4,
          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v47, 0LL);
  v48 = (int)CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v120.fields.value = v48;
  Item = (__int64)System_Type__GetTypeFromHandle(v120, 0LL);
  v49 = *v15;
  if ( !*v15 )
    goto LABEL_164;
  v50 = (System_Type_o *)Item;
  v51 = System_Collections_Generic_List_object___get_Item(
          v49,
          5,
          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (__int64)System_Enum__Parse(v50, (System_String_o *)v51, 0LL);
  if ( !Item )
    goto LABEL_164;
  v16 = (System_String_o *)v115;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1B88ACC(Item);
  ScriptBranchListViewManager__DestroyList(v107, v108);
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


ScriptBranchListViewItem_o *__fastcall ScriptBranchListViewManager__GetItem(
        ScriptBranchListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptBranchListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A589F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ScriptBranchListViewItem_TypeInfo);
    byte_4A589F8 = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A589FB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A589FB = 1;
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
          sub_1B8880C(0LL, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A589FA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_1B885B0(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A589FA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      ScriptBranchListViewObject__Init_34924776((ScriptBranchListViewObject_o *)current, mode, v9, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
  }
}


void __fastcall ScriptBranchListViewManager__SetMode(
        ScriptBranchListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    ScriptBranchListViewManager__RequestListObject(this, 3, v6);
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
  if ( (byte_4A589F9 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1B885B0(&ScriptBranchListViewObject_TypeInfo);
    byte_4A589F9 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptBranchListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_34924776((ScriptBranchListViewObject_o *)obj, v7, 0LL, 0LL);
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

  if ( (byte_4A589F4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A589F4 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  ScriptBranchListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *__fastcall ScriptBranchListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A589F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A589F6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptBranchListViewObject__o *)v3;
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

  if ( (byte_4A589F5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A589F5 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A58A0C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4A58A0C = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           0LL);
}