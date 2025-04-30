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
  __int64 Item; // x0
  const MethodInfo *v50; // x1
  const MethodInfo_35FC688 **v51; // x24
  int32_t v52; // w23
  int v53; // w26
  __int64 v54; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_List_object__o **v57; // x25
  System_String_o *v58; // x29
  Il2CppObject *v59; // x22
  System_String_o *Empty; // x19
  uint32_t v61; // w0
  int32_t checkType; // w26
  Il2CppObject *v63; // x0
  int32_t v64; // w0
  int v65; // w8
  Il2CppObject *v66; // x0
  Il2CppObject *v67; // x0
  int32_t v68; // w25
  System_Int32_array *routeId; // x27
  int32_t count; // w19
  int v71; // w8
  __int64 *v72; // x8
  Il2CppObject *v73; // x0
  System_Collections_Generic_List_object__o *v74; // x8
  Il2CppObject *v75; // x0
  Il2CppObject *v76; // x0
  __int64 *v77; // x8
  Il2CppObject *v78; // x0
  Il2CppObject *v79; // x0
  System_Collections_Generic_List_object__o *v80; // x8
  int v81; // w9
  System_Collections_Generic_List_int__o *v82; // x19
  __int64 v83; // x8
  __int64 v84; // x29
  unsigned __int64 v85; // x21
  struct System_Int32_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppObject *v89; // x0
  intptr_t v90; // w21
  System_Collections_Generic_List_object__o *v91; // x8
  System_Type_o *v92; // x25
  Il2CppObject *v93; // x21
  Il2CppObject *v94; // x0
  System_Collections_Generic_List_object__o *v95; // x8
  Il2CppObject *v96; // x0
  System_Collections_Generic_List_object__o *v97; // x8
  int v98; // w25
  Il2CppObject *v99; // x0
  Il2CppObject *v100; // x0
  Il2CppObject *v101; // x0
  Il2CppObject *v102; // x0
  System_Collections_Generic_List_object__o *v103; // x8
  Il2CppObject *v104; // x0
  int32_t v105; // w0
  Il2CppObject *v106; // x0
  System_Collections_Generic_List_object__o *v107; // x8
  Il2CppObject *v108; // x0
  int32_t v109; // w0
  Il2CppObject *v110; // x0
  Il2CppObject *v111; // x0
  System_String_o *v112; // x0
  int32_t v113; // w21
  int32_t v114; // w28
  System_String_o *v115; // x24
  ScriptBranchListViewItem_o *v116; // x20
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  const MethodInfo_35FC688 **v123; // x27
  int32_t v124; // w23
  System_String_o *v125; // x19
  System_Predicate_object__o *v126; // x21
  __int64 v127; // x24
  int32_t Index; // w0
  System_String_o *v129; // x0
  int32_t v130; // w20
  int32_t v131; // w24
  System_String_o *v132; // x21
  ScriptBranchListViewItem_o *v133; // x28
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  int32_t v140; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  struct System_Object_array *items; // x8
  _QWORD *v145; // x9
  __int64 size; // x10
  __int64 v147; // x1
  Il2CppClass **v148; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v149; // x0
  const MethodInfo *v150; // x1
  const MethodInfo *v151; // [xsp+28h] [xbp-B8h]
  ListViewManager_o *v152; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v153; // [xsp+40h] [xbp-A0h]
  int32_t v154; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v155; // [xsp+50h] [xbp-90h]
  System_Int32_array *v157; // [xsp+60h] [xbp-80h]
  System_Int32_array *v158; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v161; // [xsp+7Ch] [xbp-64h]
  System_RuntimeTypeHandle_o v162; // 0:w0.4

  v4 = (System_Collections_Generic_List_object__o *)list;
  if ( (byte_4A4BB05 & 1) == 0 )
  {
    sub_1B863B8(&CondType_CheckType_var, list);
    sub_1B863B8(&CondType_CheckType_TypeInfo, v6);
    sub_1B863B8(&System_Enum_TypeInfo, v7);
    sub_1B863B8(&int___TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_List_string___get_Count__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_List_string___get_Item__, v21);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B863B8(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo, v23);
    sub_1B863B8(&System_Predicate_ScriptBranchListViewItem__TypeInfo, v24);
    sub_1B863B8(&ScriptBranchListViewItem_TypeInfo, v25);
    sub_1B863B8(&string_TypeInfo, v26);
    sub_1B863B8(&System_Type_TypeInfo, v27);
    sub_1B863B8(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__, v28);
    sub_1B863B8(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v29);
    sub_1B863B8(&StringLiteral_17193/*"branchQuestClear"*/, v30);
    sub_1B863B8(&StringLiteral_15839/*"] "*/, v31);
    sub_1B863B8(&StringLiteral_17196/*"branchRouteSelectCount"*/, v32);
    sub_1B863B8(&StringLiteral_153/*" - 1"*/, v33);
    sub_1B863B8(&StringLiteral_17190/*"branchNotMaterial"*/, v34);
    sub_1B863B8(&StringLiteral_21121/*"masterBranch"*/, v35);
    sub_1B863B8(&StringLiteral_20007/*"ifClear"*/, v36);
    sub_1B863B8(&StringLiteral_17195/*"branchRouteSelect"*/, v37);
    sub_1B863B8(&StringLiteral_17189/*"branchNotHaveSvtEquip"*/, v38);
    sub_1B863B8(&StringLiteral_22771/*"revivalBranch"*/, v39);
    sub_1B863B8(&StringLiteral_17188/*"branchMaterial"*/, v40);
    sub_1B863B8(&StringLiteral_17191/*"branchNotRouteSelect"*/, v41);
    sub_1B863B8(&StringLiteral_17187/*"branchHaveSvtEquip"*/, v42);
    sub_1B863B8(&StringLiteral_16756/*"bScene"*/, v43);
    sub_1B863B8(&StringLiteral_23666/*"tRoute"*/, v44);
    sub_1B863B8(&StringLiteral_17194/*"branchQuestNotClear"*/, v45);
    sub_1B863B8(&StringLiteral_17192/*"branchNotRouteSelectCount"*/, v46);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v47);
    byte_4A4BB05 = 1;
  }
  v152 = (ListViewManager_o *)this;
  v48 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !v4 )
    goto LABEL_164;
  if ( v4->fields._size < 1 )
  {
LABEL_154:
    if ( v48 )
    {
      ListViewManager__CreateList(v152, v48->fields._size, 0LL);
      if ( v48->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v152, -1, 0, -1, 0LL);
        return;
      }
      v140 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v152->fields.itemList;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v48,
                          v140,
                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v145 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v147 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
        }
        else
        {
          v148 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v148[4] = (Il2CppClass *)v147;
          sub_1B8635C((CGThumbnailListItem_o *)(v148 + 4), v147, v142, v143);
        }
        if ( ++v140 >= v48->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1B86614(Item, v50);
  }
  v51 = (const MethodInfo_35FC688 **)&Method_System_Collections_Generic_List_string__get_Item__;
  v52 = 0;
  v53 = 0;
  v153 = v4;
  v155 = v48;
  while ( 1 )
  {
    v54 = sub_1B86604(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v54, 0LL);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      v4,
                      v52,
                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v54 )
      goto LABEL_164;
    *(_QWORD *)(v54 + 16) = Item;
    v57 = (System_Collections_Generic_List_object__o **)(v54 + 16);
    sub_1B8635C((CGThumbnailListItem_o *)(v54 + 16), Item, v55, v56);
    Item = *(_QWORD *)(v54 + 16);
    if ( !Item )
      goto LABEL_164;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      0,
                      *v51);
    if ( !*v57 )
      goto LABEL_164;
    v58 = (System_String_o *)Item;
    v59 = System_Collections_Generic_List_object___get_Item(*v57, 1, *v51);
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
    v61 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v59, 0LL);
    v161 = v53;
    debugComment = Empty;
    if ( v61 <= 0x5D81BB60 )
    {
      if ( v61 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v61 == 369362287 )
        {
          routeId = 0LL;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_17190/*"branchNotMaterial"*/, 0LL) )
            v71 = 1;
          else
            v71 = -1;
          goto LABEL_136;
        }
        if ( v61 != 651066131 )
        {
          if ( v61 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_17187/*"branchHaveSvtEquip"*/, 0LL) )
            {
              Item = (__int64)*v57;
              if ( !*v57 )
                goto LABEL_164;
              v63 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      2,
                      *v51);
              v64 = System_Int32__Parse((System_String_o *)v63, 0LL);
              v65 = 5;
LABEL_35:
              v68 = v64;
              routeId = 0LL;
              count = -1;
              checkType = 1;
              branchType = v65;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0LL;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_16756/*"bScene"*/, 0LL) )
          goto LABEL_118;
        Item = (__int64)*v57;
        if ( !*v57 )
          goto LABEL_164;
        v73 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v51);
        Item = System_Int32__Parse((System_String_o *)v73, 0LL);
        v74 = *(System_Collections_Generic_List_object__o **)(v54 + 16);
        *(_DWORD *)(v54 + 24) = Item;
        if ( !v74 )
          goto LABEL_164;
        v75 = System_Collections_Generic_List_object___get_Item(v74, 3, *v51);
        *(_DWORD *)(v54 + 28) = System_Int32__Parse((System_String_o *)v75, 0LL);
        Item = sub_1B86460(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v54 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v76 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v54 + 16),
                4,
                *v51);
        Item = System_Int32__Parse((System_String_o *)v76, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v71 = 11;
        routeId->m_Items[1] = Item;
        goto LABEL_136;
      }
      if ( v61 <= 0x4E750E71 )
      {
        if ( v61 != 1053116368 )
        {
          if ( v61 == 1316294257
            && System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_17189/*"branchNotHaveSvtEquip"*/, 0LL) )
          {
            Item = (__int64)*v57;
            if ( !*v57 )
              goto LABEL_164;
            v67 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v51);
            v64 = System_Int32__Parse((System_String_o *)v67, 0LL);
            v65 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_23666/*"tRoute"*/, 0LL) )
          goto LABEL_118;
        Item = (__int64)*v57;
        if ( !*v57 )
          goto LABEL_164;
        v78 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v51);
        *(_DWORD *)(v54 + 24) = System_Int32__Parse((System_String_o *)v78, 0LL);
        Item = sub_1B86460(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v54 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v79 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v54 + 16),
                3,
                *v51);
        Item = System_Int32__Parse((System_String_o *)v79, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        routeId->m_Items[1] = Item;
        count = -1;
        checkType = 1;
        v71 = 10;
        goto LABEL_136;
      }
      if ( v61 != 1408301323 )
      {
        if ( v61 == 1568783200 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_22771/*"revivalBranch"*/, 0LL) )
            v71 = 4;
          else
            v71 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0LL;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v68 = -1;
        goto LABEL_138;
      }
      v77 = &StringLiteral_17191/*"branchNotRouteSelect"*/;
      goto LABEL_105;
    }
    if ( v61 > 0xA9C7DB00 )
      break;
    if ( v61 > 0x83820B5B )
    {
      if ( v61 != -1606428809 )
      {
        if ( v61 == -1446520064 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          v71 = System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_17188/*"branchMaterial"*/, 0LL) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_20007/*"ifClear"*/, 0LL) )
        goto LABEL_118;
      Item = (__int64)*v57;
      if ( !*v57 )
        goto LABEL_164;
      v94 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v51);
      Item = System_Int32__Parse((System_String_o *)v94, 0LL);
      v95 = *(System_Collections_Generic_List_object__o **)(v54 + 16);
      *(_DWORD *)(v54 + 24) = Item;
      if ( !v95 )
        goto LABEL_164;
      v96 = System_Collections_Generic_List_object___get_Item(v95, 3, *v51);
      routeId = 0LL;
      *(_DWORD *)(v54 + 28) = System_Int32__Parse((System_String_o *)v96, 0LL);
      count = -1;
      checkType = 1;
      v71 = 9;
      goto LABEL_136;
    }
    if ( v61 != -2116001178 )
    {
      if ( v61 != -2088629413
        || !System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_17194/*"branchQuestNotClear"*/, 0LL) )
      {
        goto LABEL_118;
      }
      Item = (__int64)*v57;
      if ( !*v57 )
        goto LABEL_164;
      v66 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v51);
      if ( System_String__IsNullOrEmpty((System_String_o *)v66, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v57;
        if ( !*v57 )
          goto LABEL_164;
        v102 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v51);
        Item = System_Int32__Parse((System_String_o *)v102, 0LL);
      }
      v103 = *(System_Collections_Generic_List_object__o **)(v54 + 16);
      *(_DWORD *)(v54 + 24) = Item;
      if ( !v103 )
        goto LABEL_164;
      v104 = System_Collections_Generic_List_object___get_Item(v103, 3, *v51);
      if ( System_String__IsNullOrEmpty((System_String_o *)v104, 0LL) )
      {
        v105 = 0;
      }
      else
      {
        Item = (__int64)*v57;
        if ( !*v57 )
          goto LABEL_164;
        v110 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v51);
        v105 = System_Int32__Parse((System_String_o *)v110, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v54 + 28) = v105;
      count = -1;
      checkType = 1;
      v71 = 3;
      goto LABEL_136;
    }
    v77 = &StringLiteral_17195/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v59, (System_String_o *)*v77, 0LL) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_17195/*"branchRouteSelect"*/, 0LL);
    v97 = *v57;
    if ( (Item & 1) != 0 )
      v98 = 7;
    else
      v98 = 8;
    if ( !v97 )
      goto LABEL_164;
    v99 = System_Collections_Generic_List_object___get_Item(v97, 2, *v51);
    *(_DWORD *)(v54 + 24) = System_Int32__Parse((System_String_o *)v99, 0LL);
    Item = sub_1B86460(int___TypeInfo, 1LL);
    if ( !*(_QWORD *)(v54 + 16) )
      goto LABEL_164;
    routeId = (System_Int32_array *)Item;
    v100 = System_Collections_Generic_List_object___get_Item(
             *(System_Collections_Generic_List_object__o **)(v54 + 16),
             3,
             *v51);
    Item = System_Int32__Parse((System_String_o *)v100, 0LL);
    if ( !routeId )
      goto LABEL_164;
    branchType = v98;
    if ( !routeId->max_length )
      goto LABEL_165;
    checkType = 0;
    routeId->m_Items[1] = Item;
    v68 = -1;
    count = 1;
LABEL_138:
    v158 = routeId;
    if ( isLine )
    {
      v112 = System_String__Concat_61685428(
               (System_String_o *)StringLiteral_15580/*"["*/,
               v58,
               (System_String_o *)StringLiteral_15839/*"] "*/,
               (System_String_o *)v59,
               0LL);
      v113 = *(_DWORD *)(v54 + 24);
      v114 = *(_DWORD *)(v54 + 28);
      v115 = v112;
      v116 = (ScriptBranchListViewItem_o *)sub_1B86604(ScriptBranchListViewItem_TypeInfo);
      ScriptBranchListViewItem___ctor(
        v116,
        v161,
        v115,
        (System_String_o *)v59,
        v58,
        v113,
        v114,
        v68,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v151);
      v48 = v155;
      if ( !v155 )
        goto LABEL_164;
      v119 = v155->fields._items;
      v4 = v153;
      v120 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v155->fields._version;
      if ( !v119 )
        goto LABEL_164;
      v121 = v155->fields._size;
      v51 = (const MethodInfo_35FC688 **)&Method_System_Collections_Generic_List_string__get_Item__;
      v53 = v161 + 1;
      if ( (unsigned int)v121 >= v119->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v155,
          (Il2CppObject *)v116,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
      }
      else
      {
        v122 = &v119->obj.klass + v121;
        v155->fields._size = v121 + 1;
        v122[4] = (Il2CppClass *)v116;
        sub_1B8635C((CGThumbnailListItem_o *)(v122 + 4), (int32_t)v116, v117, v118);
      }
    }
    else
    {
      v154 = v52;
      v123 = v51;
      v124 = count;
      v125 = (System_String_o *)v59;
      v126 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      v127 = v54;
      System_Predicate_object____ctor(
        v126,
        (Il2CppObject *)v54,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0LL);
      v48 = v155;
      if ( !v155 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v155,
                (System_Predicate_T__o *)v126,
                (const MethodInfo_35FD1B0 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v129 = System_String__Concat_61645176(v125, (System_String_o *)StringLiteral_153/*" - 1"*/, 0LL);
        v130 = *(_DWORD *)(v54 + 24);
        v131 = *(_DWORD *)(v127 + 28);
        v132 = v129;
        v133 = (ScriptBranchListViewItem_o *)sub_1B86604(ScriptBranchListViewItem_TypeInfo);
        ScriptBranchListViewItem___ctor(
          v133,
          v161,
          v132,
          v125,
          v58,
          v130,
          v131,
          v68,
          v158,
          branchType,
          v124,
          checkType,
          debugComment,
          v151);
        v136 = v155->fields._items;
        v137 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v155->fields._version;
        if ( !v136 )
          goto LABEL_164;
        v138 = v155->fields._size;
        v51 = (const MethodInfo_35FC688 **)&Method_System_Collections_Generic_List_string__get_Item__;
        v52 = v154;
        v53 = v161 + 1;
        if ( (unsigned int)v138 >= v136->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v155,
            (Il2CppObject *)v133,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
        }
        else
        {
          v139 = &v136->obj.klass + v138;
          v155->fields._size = v138 + 1;
          v139[4] = (Il2CppClass *)v133;
          sub_1B8635C((CGThumbnailListItem_o *)(v139 + 4), (int32_t)v133, v134, v135);
        }
        v4 = v153;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v155,
                          Index,
                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, v50);
        v53 = v161;
        v52 = v154;
        v51 = v123;
      }
    }
    if ( ++v52 >= v4->fields._size )
      goto LABEL_154;
  }
  if ( v61 > 0xCB78578B )
  {
    if ( v61 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_17193/*"branchQuestClear"*/, 0LL) )
        goto LABEL_118;
      Item = (__int64)*v57;
      if ( !*v57 )
        goto LABEL_164;
      v101 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               2,
               *v51);
      if ( System_String__IsNullOrEmpty((System_String_o *)v101, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v57;
        if ( !*v57 )
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
        Item = (__int64)*v57;
        if ( !*v57 )
          goto LABEL_164;
        v111 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v51);
        v109 = System_Int32__Parse((System_String_o *)v111, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v54 + 28) = v109;
      count = -1;
      checkType = 1;
      v71 = 2;
LABEL_136:
      branchType = v71;
      goto LABEL_137;
    }
    if ( v61 != -201512038 )
      goto LABEL_118;
    v72 = &StringLiteral_17192/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v61 != -1252550667 )
    {
      if ( v61 == -881305717 )
        System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_21121/*"masterBranch"*/, 0LL);
      goto LABEL_118;
    }
    v72 = &StringLiteral_17196/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v59, (System_String_o *)*v72, 0LL) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v59, (System_String_o *)StringLiteral_17196/*"branchRouteSelectCount"*/, 0LL);
  v80 = *v57;
  if ( (Item & 1) != 0 )
    v81 = 7;
  else
    v81 = 8;
  branchType = v81;
  if ( !v80 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(v80, 2, *v51);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v54 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0LL);
  v82 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v82,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v54 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v51);
  if ( !Item )
    goto LABEL_164;
  v157 = (System_Int32_array *)v58;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  v83 = *(_QWORD *)(Item + 24);
  v84 = Item;
  if ( (int)v83 >= 1 )
  {
    v85 = 0LL;
    while ( v85 < (unsigned int)v83 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v84 + 32 + 8 * v85), 0LL);
      if ( !v82 )
        goto LABEL_164;
      v86 = v82->fields._items;
      v87 = Method_System_Collections_Generic_List_int__Add__;
      ++v82->fields._version;
      if ( !v86 )
        goto LABEL_164;
      v88 = v82->fields._size;
      v50 = (const MethodInfo *)(unsigned int)Item;
      if ( (unsigned int)v88 >= v86->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v82,
          Item,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v82->fields._size = v88 + 1;
        v86->m_Items[v88 + 1] = Item;
      }
      LODWORD(v83) = *(_DWORD *)(v84 + 24);
      if ( (__int64)++v85 >= (int)v83 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1B8661C(Item, v50);
  }
LABEL_90:
  if ( !v82 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v82,
                    (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
  v51 = (const MethodInfo_35FC688 **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v57 )
    goto LABEL_164;
  routeId = (System_Int32_array *)Item;
  v89 = System_Collections_Generic_List_object___get_Item(
          *v57,
          4,
          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v89, 0LL);
  v90 = (int)CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v162.fields.value = v90;
  Item = (__int64)System_Type__GetTypeFromHandle(v162, 0LL);
  v91 = *v57;
  if ( !*v57 )
    goto LABEL_164;
  v92 = (System_Type_o *)Item;
  v93 = System_Collections_Generic_List_object___get_Item(
          v91,
          5,
          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (__int64)System_Enum__Parse(v92, (System_String_o *)v93, 0LL);
  if ( !Item )
    goto LABEL_164;
  v58 = (System_String_o *)v157;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1B868D4(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v149, v150);
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

  if ( (byte_4A4BB06 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B863B8(&ScriptBranchListViewItem_TypeInfo, v5);
    byte_4A4BB06 = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B86614(this, 0LL);
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

  if ( (byte_4A4BB09 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4BB09 = 1;
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
          sub_1B86614(0LL, v7);
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

  if ( (byte_4A4BB08 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__, v9);
    sub_1B863B8(&Method_ScriptBranchListViewManager_OnMoveEnd__, v10);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v11);
    byte_4A4BB08 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B86614(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B86614(v17, v18);
      ScriptBranchListViewObject__Init_35625288((ScriptBranchListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
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
  if ( (byte_4A4BB07 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1B863B8(&ScriptBranchListViewObject_TypeInfo, obj);
    byte_4A4BB07 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptBranchListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1B86614(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_35625288((ScriptBranchListViewObject_o *)obj, v7, 0LL, method);
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

  if ( (byte_4A4BB02 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4BB02 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A4BB04 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A4BB04 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B86614(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B86614(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B86614(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B86614(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B8635C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A4BB03 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4BB03 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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

  if ( (byte_4A4BB0A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Item__, o);
    byte_4A4BB0A = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1B86614(0LL, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           v7);
}