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
  int64_t Item; // x0
  const MethodInfo *v8; // x1
  const MethodInfo_364EDE4 **v9; // x24
  int32_t v10; // w23
  int v11; // w26
  __int64 v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
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
  System_Int32_array *routeId; // x27
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
  __int64 v45; // x8
  int64_t v46; // x29
  unsigned __int64 v47; // x21
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppObject *v51; // x0
  intptr_t v52; // w21
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
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  const MethodInfo_364EDE4 **v89; // x27
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
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  int32_t v110; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_Object_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  int64_t v121; // x1
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
  System_RuntimeTypeHandle_o v136; // 0:w0.4

  if ( (byte_4BD9C5D & 1) == 0 )
  {
    sub_1C21E38(&CondType_CheckType_var);
    sub_1C21E38(&CondType_CheckType_TypeInfo);
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_1C21E38(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_1C21E38(&ScriptBranchListViewItem_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    sub_1C21E38(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_1C21E38(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_1C21E38(&StringLiteral_17724/*"branchQuestClear"*/);
    sub_1C21E38(&StringLiteral_16348/*"] "*/);
    sub_1C21E38(&StringLiteral_17727/*"branchRouteSelectCount"*/);
    sub_1C21E38(&StringLiteral_162/*" - 1"*/);
    sub_1C21E38(&StringLiteral_17721/*"branchNotMaterial"*/);
    sub_1C21E38(&StringLiteral_21680/*"masterBranch"*/);
    sub_1C21E38(&StringLiteral_20575/*"ifClear"*/);
    sub_1C21E38(&StringLiteral_17726/*"branchRouteSelect"*/);
    sub_1C21E38(&StringLiteral_17720/*"branchNotHaveSvtEquip"*/);
    sub_1C21E38(&StringLiteral_23342/*"revivalBranch"*/);
    sub_1C21E38(&StringLiteral_17719/*"branchMaterial"*/);
    sub_1C21E38(&StringLiteral_17722/*"branchNotRouteSelect"*/);
    sub_1C21E38(&StringLiteral_17718/*"branchHaveSvtEquip"*/);
    sub_1C21E38(&StringLiteral_17285/*"bScene"*/);
    sub_1C21E38(&StringLiteral_24254/*"tRoute"*/);
    sub_1C21E38(&StringLiteral_17725/*"branchQuestNotClear"*/);
    sub_1C21E38(&StringLiteral_17723/*"branchNotRouteSelectCount"*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    byte_4BD9C5D = 1;
  }
  v126 = (ListViewManager_o *)this;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !list )
    goto LABEL_164;
  if ( list->fields._size < 1 )
  {
LABEL_154:
    if ( v6 )
    {
      ListViewManager__CreateList(v126, v6->fields._size, 0LL);
      if ( v6->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v126, -1, 0, -1, 0LL);
        return;
      }
      v110 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v126->fields.itemList;
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v6,
                          v110,
                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v119 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v121 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
        }
        else
        {
          v122 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v122[4] = (Il2CppClass *)v121;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v122 + 4), v121, v112, v113, v114, v115, v116, v117);
        }
        if ( ++v110 >= v6->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1C22094(Item, v8);
  }
  v9 = (const MethodInfo_364EDE4 **)&Method_System_Collections_Generic_List_string__get_Item__;
  v10 = 0;
  v11 = 0;
  v127 = list;
  v129 = v6;
  while ( 1 )
  {
    v12 = sub_1C22084(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v10,
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v12 )
      goto LABEL_164;
    *(_QWORD *)(v12 + 16) = Item;
    v19 = (System_Collections_Generic_List_object__o **)(v12 + 16);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 16), Item, v13, v14, v15, v16, v17, v18);
    Item = *(_QWORD *)(v12 + 16);
    if ( !Item )
      goto LABEL_164;
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
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
    v23 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v21, 0LL);
    v135 = v11;
    debugComment = Empty;
    if ( v23 <= 0x5D81BB60 )
    {
      if ( v23 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v23 == 369362287 )
        {
          routeId = 0LL;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17721/*"branchNotMaterial"*/, 0LL) )
            v33 = 1;
          else
            v33 = -1;
          goto LABEL_136;
        }
        if ( v23 != 651066131 )
        {
          if ( v23 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17718/*"branchHaveSvtEquip"*/, 0LL) )
            {
              Item = (int64_t)*v19;
              if ( !*v19 )
                goto LABEL_164;
              v25 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      2,
                      *v9);
              v26 = System_Int32__Parse((System_String_o *)v25, 0LL);
              v27 = 5;
LABEL_35:
              v30 = v26;
              routeId = 0LL;
              count = -1;
              checkType = 1;
              branchType = v27;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0LL;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17285/*"bScene"*/, 0LL) )
          goto LABEL_118;
        Item = (int64_t)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v35 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v35, 0LL);
        v36 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
        *(_DWORD *)(v12 + 24) = Item;
        if ( !v36 )
          goto LABEL_164;
        v37 = System_Collections_Generic_List_object___get_Item(v36, 3, *v9);
        *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v37, 0LL);
        Item = sub_1C21EE0(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v38 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                4,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v38, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v33 = 11;
        routeId->m_Items[1] = Item;
        goto LABEL_136;
      }
      if ( v23 <= 0x4E750E71 )
      {
        if ( v23 != 1053116368 )
        {
          if ( v23 == 1316294257
            && System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17720/*"branchNotHaveSvtEquip"*/, 0LL) )
          {
            Item = (int64_t)*v19;
            if ( !*v19 )
              goto LABEL_164;
            v29 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v9);
            v26 = System_Int32__Parse((System_String_o *)v29, 0LL);
            v27 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_24254/*"tRoute"*/, 0LL) )
          goto LABEL_118;
        Item = (int64_t)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v40 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v40, 0LL);
        Item = sub_1C21EE0(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v12 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v41 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v12 + 16),
                3,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v41, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        routeId->m_Items[1] = Item;
        count = -1;
        checkType = 1;
        v33 = 10;
        goto LABEL_136;
      }
      if ( v23 != 1408301323 )
      {
        if ( v23 == 1568783200 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_23342/*"revivalBranch"*/, 0LL) )
            v33 = 4;
          else
            v33 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0LL;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v30 = -1;
        goto LABEL_138;
      }
      v39 = &StringLiteral_17722/*"branchNotRouteSelect"*/;
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
          routeId = 0LL;
          count = -1;
          checkType = 1;
          v33 = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17719/*"branchMaterial"*/, 0LL) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_20575/*"ifClear"*/, 0LL) )
        goto LABEL_118;
      Item = (int64_t)*v19;
      if ( !*v19 )
        goto LABEL_164;
      v56 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      Item = System_Int32__Parse((System_String_o *)v56, 0LL);
      v57 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v57 )
        goto LABEL_164;
      v58 = System_Collections_Generic_List_object___get_Item(v57, 3, *v9);
      routeId = 0LL;
      *(_DWORD *)(v12 + 28) = System_Int32__Parse((System_String_o *)v58, 0LL);
      count = -1;
      checkType = 1;
      v33 = 9;
      goto LABEL_136;
    }
    if ( v23 != -2116001178 )
    {
      if ( v23 != -2088629413
        || !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17725/*"branchQuestNotClear"*/, 0LL) )
      {
        goto LABEL_118;
      }
      Item = (int64_t)*v19;
      if ( !*v19 )
        goto LABEL_164;
      v28 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v28, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (int64_t)*v19;
        if ( !*v19 )
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
        Item = (int64_t)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v72 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v67 = System_Int32__Parse((System_String_o *)v72, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v12 + 28) = v67;
      count = -1;
      checkType = 1;
      v33 = 3;
      goto LABEL_136;
    }
    v39 = &StringLiteral_17726/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)*v39, 0LL) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17726/*"branchRouteSelect"*/, 0LL);
    v59 = *v19;
    if ( (Item & 1) != 0 )
      v60 = 7;
    else
      v60 = 8;
    if ( !v59 )
      goto LABEL_164;
    v61 = System_Collections_Generic_List_object___get_Item(v59, 2, *v9);
    *(_DWORD *)(v12 + 24) = System_Int32__Parse((System_String_o *)v61, 0LL);
    Item = sub_1C21EE0(int___TypeInfo, 1LL);
    if ( !*(_QWORD *)(v12 + 16) )
      goto LABEL_164;
    routeId = (System_Int32_array *)Item;
    v62 = System_Collections_Generic_List_object___get_Item(
            *(System_Collections_Generic_List_object__o **)(v12 + 16),
            3,
            *v9);
    Item = System_Int32__Parse((System_String_o *)v62, 0LL);
    if ( !routeId )
      goto LABEL_164;
    branchType = v60;
    if ( !routeId->max_length )
      goto LABEL_165;
    checkType = 0;
    routeId->m_Items[1] = Item;
    v30 = -1;
    count = 1;
LABEL_138:
    v132 = routeId;
    if ( isLine )
    {
      v74 = System_String__Concat_63128740(
              (System_String_o *)StringLiteral_16086/*"["*/,
              v20,
              (System_String_o *)StringLiteral_16348/*"] "*/,
              (System_String_o *)v21,
              0LL);
      v75 = *(_DWORD *)(v12 + 24);
      v76 = *(_DWORD *)(v12 + 28);
      v77 = v74;
      v78 = (ScriptBranchListViewItem_o *)sub_1C22084(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v78,
        v135,
        v77,
        (System_String_o *)v21,
        v20,
        v75,
        v76,
        v30,
        routeId,
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
      v9 = (const MethodInfo_364EDE4 **)&Method_System_Collections_Generic_List_string__get_Item__;
      v11 = v135 + 1;
      if ( (unsigned int)v87 >= v85->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v129,
          (Il2CppObject *)v78,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &v85->obj.klass + v87;
        v129->fields._size = v87 + 1;
        v88[4] = (Il2CppClass *)v78;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v88 + 4), (int64_t)v78, v79, v80, v81, v82, v83, v84);
      }
    }
    else
    {
      v128 = v10;
      v89 = v9;
      v90 = count;
      v91 = (System_String_o *)v21;
      v92 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v93 = v12;
      System_Predicate_object____ctor(
        v92,
        (Il2CppObject *)v12,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0LL);
      v6 = v129;
      if ( !v129 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v129,
                (System_Predicate_T__o *)v92,
                (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v95 = System_String__Concat_63115476(v91, (System_String_o *)StringLiteral_162/*" - 1"*/, 0LL);
        v96 = *(_DWORD *)(v12 + 24);
        v97 = *(_DWORD *)(v93 + 28);
        v98 = v95;
        v99 = (ScriptBranchListViewItem_o *)sub_1C22084(ScriptBranchListViewItem_TypeInfo);
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
        v9 = (const MethodInfo_364EDE4 **)&Method_System_Collections_Generic_List_string__get_Item__;
        v10 = v128;
        v11 = v135 + 1;
        if ( (unsigned int)v108 >= v106->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v129,
            (Il2CppObject *)v99,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v109 = &v106->obj.klass + v108;
          v129->fields._size = v108 + 1;
          v109[4] = (Il2CppClass *)v99;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v109 + 4), (int64_t)v99, v100, v101, v102, v103, v104, v105);
        }
        list = v127;
      }
      else
      {
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v129,
                          Index,
                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
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
      if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17724/*"branchQuestClear"*/, 0LL) )
        goto LABEL_118;
      Item = (int64_t)*v19;
      if ( !*v19 )
        goto LABEL_164;
      v63 = System_Collections_Generic_List_object___get_Item((System_Collections_Generic_List_object__o *)Item, 2, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v63, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (int64_t)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v68 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v9);
        Item = System_Int32__Parse((System_String_o *)v68, 0LL);
      }
      v69 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
      *(_DWORD *)(v12 + 24) = Item;
      if ( !v69 )
        goto LABEL_164;
      v70 = System_Collections_Generic_List_object___get_Item(v69, 3, *v9);
      if ( System_String__IsNullOrEmpty((System_String_o *)v70, 0LL) )
      {
        v71 = 0;
      }
      else
      {
        Item = (int64_t)*v19;
        if ( !*v19 )
          goto LABEL_164;
        v73 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                3,
                *v9);
        v71 = System_Int32__Parse((System_String_o *)v73, 0LL);
      }
      routeId = 0LL;
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
    v34 = &StringLiteral_17723/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v23 != -1252550667 )
    {
      if ( v23 == -881305717 )
        System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_21680/*"masterBranch"*/, 0LL);
      goto LABEL_118;
    }
    v34 = &StringLiteral_17727/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v21, (System_String_o *)*v34, 0LL) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v21, (System_String_o *)StringLiteral_17727/*"branchRouteSelectCount"*/, 0LL);
  v42 = *v19;
  if ( (Item & 1) != 0 )
    v43 = 7;
  else
    v43 = 8;
  branchType = v43;
  if ( !v42 )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_object___get_Item(v42, 2, *v9);
  if ( !Item )
    goto LABEL_164;
  Item = (int64_t)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v12 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0LL);
  v44 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v12 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v9);
  if ( !Item )
    goto LABEL_164;
  v131 = (System_Int32_array *)v20;
  Item = (int64_t)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  v45 = *(_QWORD *)(Item + 24);
  v46 = Item;
  if ( (int)v45 >= 1 )
  {
    v47 = 0LL;
    while ( v47 < (unsigned int)v45 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v46 + 32 + 8 * v47), 0LL);
      if ( !v44 )
        goto LABEL_164;
      v48 = v44->fields._items;
      v49 = Method_System_Collections_Generic_List_int__Add__;
      ++v44->fields._version;
      if ( !v48 )
        goto LABEL_164;
      v50 = v44->fields._size;
      v8 = (const MethodInfo *)(unsigned int)Item;
      if ( (unsigned int)v50 >= v48->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v44,
          Item,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v44->fields._size = v50 + 1;
        v48->m_Items[v50 + 1] = Item;
      }
      LODWORD(v45) = *(_DWORD *)(v46 + 24);
      if ( (__int64)++v47 >= (int)v45 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1C2209C(Item, v8);
  }
LABEL_90:
  if ( !v44 )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_int___ToArray(
                    v44,
                    (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9 = (const MethodInfo_364EDE4 **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v19 )
    goto LABEL_164;
  routeId = (System_Int32_array *)Item;
  v51 = System_Collections_Generic_List_object___get_Item(
          *v19,
          4,
          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v51, 0LL);
  v52 = (int)CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v136.fields.value = v52;
  Item = (int64_t)System_Type__GetTypeFromHandle(v136, 0LL);
  v53 = *v19;
  if ( !*v19 )
    goto LABEL_164;
  v54 = (System_Type_o *)Item;
  v55 = System_Collections_Generic_List_object___get_Item(
          v53,
          5,
          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (int64_t)System_Enum__Parse(v54, (System_String_o *)v55, 0LL);
  if ( !Item )
    goto LABEL_164;
  v20 = (System_String_o *)v131;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1C22354(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v123, v124);
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

  if ( (byte_4BD9C5E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ScriptBranchListViewItem_TypeInfo);
    byte_4BD9C5E = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C22094(this, 0LL);
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

  if ( (byte_4BD9C61 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9C61 = 1;
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
          sub_1C22094(0LL, v7);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD9C60 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_1C21E38(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD9C60 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v10, v11);
      ScriptBranchListViewObject__Init_36026552((ScriptBranchListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_1C21DDC(
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
  if ( (byte_4BD9C5F & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1C21E38(&ScriptBranchListViewObject_TypeInfo);
    byte_4BD9C5F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptBranchListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_36026552((ScriptBranchListViewObject_o *)obj, v7, 0LL, method);
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

  if ( (byte_4BD9C5A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD9C5A = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD9C5C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9C5C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v16 = (int64_t)Component_object;
      if ( !v3 )
        sub_1C22094(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BD9C5B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD9C5B = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
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

  if ( (byte_4BD9C62 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4BD9C62 = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1C22094(0LL, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}