void __fastcall ScriptBranchListViewManager___ctor(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v50; // x1
  __int64 v51; // x2
  const MethodInfo_34AD404 **v52; // x24
  int32_t v53; // w23
  int v54; // w26
  __int64 v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  System_Collections_Generic_List_object__o **v58; // x25
  System_String_o *v59; // x29
  Il2CppObject *v60; // x22
  System_String_o *Empty; // x19
  uint32_t v62; // w0
  __int64 v63; // x1
  __int64 v64; // x2
  int32_t checkType; // w26
  Il2CppObject *v66; // x0
  int32_t v67; // w0
  int v68; // w8
  Il2CppObject *v69; // x0
  Il2CppObject *v70; // x0
  int32_t v71; // w25
  System_Int32_array *routeId; // x27
  int32_t count; // w19
  int v74; // w8
  __int64 *v75; // x8
  Il2CppObject *v76; // x0
  System_Collections_Generic_List_object__o *v77; // x8
  Il2CppObject *v78; // x0
  Il2CppObject *v79; // x0
  __int64 *v80; // x8
  Il2CppObject *v81; // x0
  Il2CppObject *v82; // x0
  System_Collections_Generic_List_object__o *v83; // x8
  int v84; // w9
  __int64 v85; // x1
  __int64 v86; // x2
  System_Collections_Generic_List_int__o *v87; // x19
  __int64 v88; // x8
  __int64 v89; // x29
  unsigned __int64 v90; // x21
  struct System_Int32_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppObject *v94; // x0
  intptr_t v95; // w21
  System_Collections_Generic_List_object__o *v96; // x8
  System_Type_o *v97; // x25
  Il2CppObject *v98; // x21
  Il2CppObject *v99; // x0
  System_Collections_Generic_List_object__o *v100; // x8
  Il2CppObject *v101; // x0
  System_Collections_Generic_List_object__o *v102; // x8
  int v103; // w25
  Il2CppObject *v104; // x0
  Il2CppObject *v105; // x0
  Il2CppObject *v106; // x0
  Il2CppObject *v107; // x0
  System_Collections_Generic_List_object__o *v108; // x8
  Il2CppObject *v109; // x0
  int32_t v110; // w0
  Il2CppObject *v111; // x0
  System_Collections_Generic_List_object__o *v112; // x8
  Il2CppObject *v113; // x0
  int32_t v114; // w0
  Il2CppObject *v115; // x0
  Il2CppObject *v116; // x0
  System_String_o *v117; // x0
  int32_t v118; // w21
  int32_t v119; // w28
  System_String_o *v120; // x24
  __int64 v121; // x1
  __int64 v122; // x2
  ScriptBranchListViewItem_o *v123; // x20
  int32_t v124; // w2
  int32_t v125; // w3
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  const MethodInfo_34AD404 **v130; // x27
  int32_t v131; // w23
  System_String_o *v132; // x19
  System_Predicate_object__o *v133; // x21
  __int64 v134; // x24
  int32_t Index; // w0
  System_String_o *v136; // x0
  int32_t v137; // w20
  int32_t v138; // w24
  System_String_o *v139; // x21
  __int64 v140; // x1
  __int64 v141; // x2
  ScriptBranchListViewItem_o *v142; // x28
  int32_t v143; // w2
  int32_t v144; // w3
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  Il2CppClass **v148; // x0
  int32_t v149; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v151; // w2
  int32_t v152; // w3
  struct System_Object_array *items; // x8
  _QWORD *v154; // x9
  __int64 size; // x10
  __int64 v156; // x1
  Il2CppClass **v157; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v158; // x0
  const MethodInfo *v159; // x1
  ListViewManager_o *v160; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v161; // [xsp+40h] [xbp-A0h]
  int32_t v162; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v163; // [xsp+50h] [xbp-90h]
  System_Int32_array *v165; // [xsp+60h] [xbp-80h]
  System_Int32_array *v166; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v169; // [xsp+7Ch] [xbp-64h]
  System_RuntimeTypeHandle_o v170; // 0:w0.4

  v4 = (System_Collections_Generic_List_object__o *)list;
  if ( (byte_49F9CEE & 1) == 0 )
  {
    sub_1B640C8(&CondType_CheckType_var, list);
    sub_1B640C8(&CondType_CheckType_TypeInfo, v6);
    sub_1B640C8(&System_Enum_TypeInfo, v7);
    sub_1B640C8(&int___TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_string___get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_string___get_Item__, v21);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo, v23);
    sub_1B640C8(&System_Predicate_ScriptBranchListViewItem__TypeInfo, v24);
    sub_1B640C8(&ScriptBranchListViewItem_TypeInfo, v25);
    sub_1B640C8(&string_TypeInfo, v26);
    sub_1B640C8(&System_Type_TypeInfo, v27);
    sub_1B640C8(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__, v28);
    sub_1B640C8(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v29);
    sub_1B640C8(&StringLiteral_17365/*"branchQuestClear"*/, v30);
    sub_1B640C8(&StringLiteral_16003/*"] "*/, v31);
    sub_1B640C8(&StringLiteral_17368/*"branchRouteSelectCount"*/, v32);
    sub_1B640C8(&StringLiteral_162/*" - 1"*/, v33);
    sub_1B640C8(&StringLiteral_17362/*"branchNotMaterial"*/, v34);
    sub_1B640C8(&StringLiteral_21211/*"masterBranch"*/, v35);
    sub_1B640C8(&StringLiteral_20139/*"ifClear"*/, v36);
    sub_1B640C8(&StringLiteral_17367/*"branchRouteSelect"*/, v37);
    sub_1B640C8(&StringLiteral_17361/*"branchNotHaveSvtEquip"*/, v38);
    sub_1B640C8(&StringLiteral_22828/*"revivalBranch"*/, v39);
    sub_1B640C8(&StringLiteral_17360/*"branchMaterial"*/, v40);
    sub_1B640C8(&StringLiteral_17363/*"branchNotRouteSelect"*/, v41);
    sub_1B640C8(&StringLiteral_17359/*"branchHaveSvtEquip"*/, v42);
    sub_1B640C8(&StringLiteral_16931/*"bScene"*/, v43);
    sub_1B640C8(&StringLiteral_23727/*"tRoute"*/, v44);
    sub_1B640C8(&StringLiteral_17366/*"branchQuestNotClear"*/, v45);
    sub_1B640C8(&StringLiteral_17364/*"branchNotRouteSelectCount"*/, v46);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v47);
    byte_49F9CEE = 1;
  }
  v160 = (ListViewManager_o *)this;
  v48 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo,
                                                       list,
                                                       isLine);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !v4 )
    goto LABEL_164;
  if ( v4->fields._size < 1 )
  {
LABEL_154:
    if ( v48 )
    {
      ListViewManager__CreateList(v160, v48->fields._size, 0LL);
      if ( v48->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v160, -1, 0, -1, 0LL);
        return;
      }
      v149 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v160->fields.itemList;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v48,
                          v149,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v154 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v156 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
        }
        else
        {
          v157 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v157[4] = (Il2CppClass *)v156;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v157 + 4), v156, v151, v152);
        }
        if ( ++v149 >= v48->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1B64324(Item);
  }
  v52 = (const MethodInfo_34AD404 **)&Method_System_Collections_Generic_List_string__get_Item__;
  v53 = 0;
  v54 = 0;
  v161 = v4;
  v163 = v48;
  while ( 1 )
  {
    v55 = sub_1B64314(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v50, v51);
    System_Object___ctor((Il2CppObject *)v55, 0LL);
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      v4,
                      v53,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v55 )
      goto LABEL_164;
    *(_QWORD *)(v55 + 16) = Item;
    v58 = (System_Collections_Generic_List_object__o **)(v55 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 16), Item, v56, v57);
    Item = *(_QWORD *)(v55 + 16);
    if ( !Item )
      goto LABEL_164;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      0,
                      *v52);
    if ( !*v58 )
      goto LABEL_164;
    v59 = (System_String_o *)Item;
    v60 = System_Collections_Generic_List_object___get_Item(*v58, 1, *v52);
    Item = *(_QWORD *)(v55 + 16);
    *(_QWORD *)(v55 + 24) = 0xFFFFFFFFLL;
    if ( !Item )
      goto LABEL_164;
    if ( *(int *)(Item + 24) >= 7 )
      Empty = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)Item,
                                   6,
                                   *v52);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    v62 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v60, 0LL);
    v169 = v54;
    debugComment = Empty;
    if ( v62 <= 0x5D81BB60 )
    {
      if ( v62 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v62 == 369362287 )
        {
          routeId = 0LL;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_17362/*"branchNotMaterial"*/, 0LL) )
            v74 = 1;
          else
            v74 = -1;
          goto LABEL_136;
        }
        if ( v62 != 651066131 )
        {
          if ( v62 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_17359/*"branchHaveSvtEquip"*/, 0LL) )
            {
              Item = (__int64)*v58;
              if ( !*v58 )
                goto LABEL_164;
              v66 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      2,
                      *v52);
              v67 = System_Int32__Parse((System_String_o *)v66, 0LL);
              v68 = 5;
LABEL_35:
              v71 = v67;
              routeId = 0LL;
              count = -1;
              checkType = 1;
              branchType = v68;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0LL;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_16931/*"bScene"*/, 0LL) )
          goto LABEL_118;
        Item = (__int64)*v58;
        if ( !*v58 )
          goto LABEL_164;
        v76 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v52);
        Item = System_Int32__Parse((System_String_o *)v76, 0LL);
        v77 = *(System_Collections_Generic_List_object__o **)(v55 + 16);
        *(_DWORD *)(v55 + 24) = Item;
        if ( !v77 )
          goto LABEL_164;
        v78 = System_Collections_Generic_List_object___get_Item(v77, 3, *v52);
        *(_DWORD *)(v55 + 28) = System_Int32__Parse((System_String_o *)v78, 0LL);
        Item = sub_1B64170(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v55 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v79 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v55 + 16),
                4,
                *v52);
        Item = System_Int32__Parse((System_String_o *)v79, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v74 = 11;
        routeId->m_Items[1] = Item;
        goto LABEL_136;
      }
      if ( v62 <= 0x4E750E71 )
      {
        if ( v62 != 1053116368 )
        {
          if ( v62 == 1316294257
            && System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_17361/*"branchNotHaveSvtEquip"*/, 0LL) )
          {
            Item = (__int64)*v58;
            if ( !*v58 )
              goto LABEL_164;
            v70 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    2,
                    *v52);
            v67 = System_Int32__Parse((System_String_o *)v70, 0LL);
            v68 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_23727/*"tRoute"*/, 0LL) )
          goto LABEL_118;
        Item = (__int64)*v58;
        if ( !*v58 )
          goto LABEL_164;
        v81 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Item,
                2,
                *v52);
        *(_DWORD *)(v55 + 24) = System_Int32__Parse((System_String_o *)v81, 0LL);
        Item = sub_1B64170(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v55 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v82 = System_Collections_Generic_List_object___get_Item(
                *(System_Collections_Generic_List_object__o **)(v55 + 16),
                3,
                *v52);
        Item = System_Int32__Parse((System_String_o *)v82, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        routeId->m_Items[1] = Item;
        count = -1;
        checkType = 1;
        v74 = 10;
        goto LABEL_136;
      }
      if ( v62 != 1408301323 )
      {
        if ( v62 == 1568783200 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_22828/*"revivalBranch"*/, 0LL) )
            v74 = 4;
          else
            v74 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0LL;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v71 = -1;
        goto LABEL_138;
      }
      v80 = &StringLiteral_17363/*"branchNotRouteSelect"*/;
      goto LABEL_105;
    }
    if ( v62 > 0xA9C7DB00 )
      break;
    if ( v62 > 0x83820B5B )
    {
      if ( v62 != -1606428809 )
      {
        if ( v62 == -1446520064 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          v74 = System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_17360/*"branchMaterial"*/, 0LL) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_20139/*"ifClear"*/, 0LL) )
        goto LABEL_118;
      Item = (__int64)*v58;
      if ( !*v58 )
        goto LABEL_164;
      v99 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v52);
      Item = System_Int32__Parse((System_String_o *)v99, 0LL);
      v100 = *(System_Collections_Generic_List_object__o **)(v55 + 16);
      *(_DWORD *)(v55 + 24) = Item;
      if ( !v100 )
        goto LABEL_164;
      v101 = System_Collections_Generic_List_object___get_Item(v100, 3, *v52);
      routeId = 0LL;
      *(_DWORD *)(v55 + 28) = System_Int32__Parse((System_String_o *)v101, 0LL);
      count = -1;
      checkType = 1;
      v74 = 9;
      goto LABEL_136;
    }
    if ( v62 != -2116001178 )
    {
      if ( v62 != -2088629413
        || !System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_17366/*"branchQuestNotClear"*/, 0LL) )
      {
        goto LABEL_118;
      }
      Item = (__int64)*v58;
      if ( !*v58 )
        goto LABEL_164;
      v69 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Item,
              2,
              *v52);
      if ( System_String__IsNullOrEmpty((System_String_o *)v69, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v58;
        if ( !*v58 )
          goto LABEL_164;
        v107 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v52);
        Item = System_Int32__Parse((System_String_o *)v107, 0LL);
      }
      v108 = *(System_Collections_Generic_List_object__o **)(v55 + 16);
      *(_DWORD *)(v55 + 24) = Item;
      if ( !v108 )
        goto LABEL_164;
      v109 = System_Collections_Generic_List_object___get_Item(v108, 3, *v52);
      if ( System_String__IsNullOrEmpty((System_String_o *)v109, 0LL) )
      {
        v110 = 0;
      }
      else
      {
        Item = (__int64)*v58;
        if ( !*v58 )
          goto LABEL_164;
        v115 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v52);
        v110 = System_Int32__Parse((System_String_o *)v115, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v55 + 28) = v110;
      count = -1;
      checkType = 1;
      v74 = 3;
      goto LABEL_136;
    }
    v80 = &StringLiteral_17367/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v60, (System_String_o *)*v80, 0LL) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_17367/*"branchRouteSelect"*/, 0LL);
    v102 = *v58;
    if ( (Item & 1) != 0 )
      v103 = 7;
    else
      v103 = 8;
    if ( !v102 )
      goto LABEL_164;
    v104 = System_Collections_Generic_List_object___get_Item(v102, 2, *v52);
    *(_DWORD *)(v55 + 24) = System_Int32__Parse((System_String_o *)v104, 0LL);
    Item = sub_1B64170(int___TypeInfo, 1LL);
    if ( !*(_QWORD *)(v55 + 16) )
      goto LABEL_164;
    routeId = (System_Int32_array *)Item;
    v105 = System_Collections_Generic_List_object___get_Item(
             *(System_Collections_Generic_List_object__o **)(v55 + 16),
             3,
             *v52);
    Item = System_Int32__Parse((System_String_o *)v105, 0LL);
    if ( !routeId )
      goto LABEL_164;
    branchType = v103;
    if ( !routeId->max_length )
      goto LABEL_165;
    checkType = 0;
    routeId->m_Items[1] = Item;
    v71 = -1;
    count = 1;
LABEL_138:
    v166 = routeId;
    if ( isLine )
    {
      v117 = System_String__Concat_61388660(
               (System_String_o *)StringLiteral_15744/*"["*/,
               v59,
               (System_String_o *)StringLiteral_16003/*"] "*/,
               (System_String_o *)v60,
               0LL);
      v118 = *(_DWORD *)(v55 + 24);
      v119 = *(_DWORD *)(v55 + 28);
      v120 = v117;
      v123 = (ScriptBranchListViewItem_o *)sub_1B64314(ScriptBranchListViewItem_TypeInfo, v121, v122);
      ScriptBranchListViewItem___ctor(
        v123,
        v169,
        v120,
        (System_String_o *)v60,
        v59,
        v118,
        v119,
        v71,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        0LL);
      v48 = v163;
      if ( !v163 )
        goto LABEL_164;
      v126 = v163->fields._items;
      v4 = v161;
      v127 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v163->fields._version;
      if ( !v126 )
        goto LABEL_164;
      v128 = v163->fields._size;
      v52 = (const MethodInfo_34AD404 **)&Method_System_Collections_Generic_List_string__get_Item__;
      v54 = v169 + 1;
      if ( (unsigned int)v128 >= v126->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v163,
          (Il2CppObject *)v123,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v129 = &v126->obj.klass + v128;
        v163->fields._size = v128 + 1;
        v129[4] = (Il2CppClass *)v123;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 4), (int32_t)v123, v124, v125);
      }
    }
    else
    {
      v162 = v53;
      v130 = v52;
      v131 = count;
      v132 = (System_String_o *)v60;
      v133 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ScriptBranchListViewItem__TypeInfo, v63, v64);
      v134 = v55;
      System_Predicate_object____ctor(
        v133,
        (Il2CppObject *)v55,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0LL);
      v48 = v163;
      if ( !v163 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v163,
                (System_Predicate_T__o *)v133,
                (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v136 = System_String__Concat_61375396(v132, (System_String_o *)StringLiteral_162/*" - 1"*/, 0LL);
        v137 = *(_DWORD *)(v55 + 24);
        v138 = *(_DWORD *)(v134 + 28);
        v139 = v136;
        v142 = (ScriptBranchListViewItem_o *)sub_1B64314(ScriptBranchListViewItem_TypeInfo, v140, v141);
        ScriptBranchListViewItem___ctor(
          v142,
          v169,
          v139,
          v132,
          v59,
          v137,
          v138,
          v71,
          v166,
          branchType,
          v131,
          checkType,
          debugComment,
          0LL);
        v145 = v163->fields._items;
        v146 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v163->fields._version;
        if ( !v145 )
          goto LABEL_164;
        v147 = v163->fields._size;
        v52 = (const MethodInfo_34AD404 **)&Method_System_Collections_Generic_List_string__get_Item__;
        v53 = v162;
        v54 = v169 + 1;
        if ( (unsigned int)v147 >= v145->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v163,
            (Il2CppObject *)v142,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
        }
        else
        {
          v148 = &v145->obj.klass + v147;
          v163->fields._size = v147 + 1;
          v148[4] = (Il2CppClass *)v142;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v148 + 4), (int32_t)v142, v143, v144);
        }
        v4 = v161;
      }
      else
      {
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v163,
                          Index,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, 0LL);
        v54 = v169;
        v53 = v162;
        v52 = v130;
      }
    }
    if ( ++v53 >= v4->fields._size )
      goto LABEL_154;
  }
  if ( v62 > 0xCB78578B )
  {
    if ( v62 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_17365/*"branchQuestClear"*/, 0LL) )
        goto LABEL_118;
      Item = (__int64)*v58;
      if ( !*v58 )
        goto LABEL_164;
      v106 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               2,
               *v52);
      if ( System_String__IsNullOrEmpty((System_String_o *)v106, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (__int64)*v58;
        if ( !*v58 )
          goto LABEL_164;
        v111 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v52);
        Item = System_Int32__Parse((System_String_o *)v111, 0LL);
      }
      v112 = *(System_Collections_Generic_List_object__o **)(v55 + 16);
      *(_DWORD *)(v55 + 24) = Item;
      if ( !v112 )
        goto LABEL_164;
      v113 = System_Collections_Generic_List_object___get_Item(v112, 3, *v52);
      if ( System_String__IsNullOrEmpty((System_String_o *)v113, 0LL) )
      {
        v114 = 0;
      }
      else
      {
        Item = (__int64)*v58;
        if ( !*v58 )
          goto LABEL_164;
        v116 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v52);
        v114 = System_Int32__Parse((System_String_o *)v116, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v55 + 28) = v114;
      count = -1;
      checkType = 1;
      v74 = 2;
LABEL_136:
      branchType = v74;
      goto LABEL_137;
    }
    if ( v62 != -201512038 )
      goto LABEL_118;
    v75 = &StringLiteral_17364/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v62 != -1252550667 )
    {
      if ( v62 == -881305717 )
        System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_21211/*"masterBranch"*/, 0LL);
      goto LABEL_118;
    }
    v75 = &StringLiteral_17368/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v60, (System_String_o *)*v75, 0LL) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v60, (System_String_o *)StringLiteral_17368/*"branchRouteSelectCount"*/, 0LL);
  v83 = *v58;
  if ( (Item & 1) != 0 )
    v84 = 7;
  else
    v84 = 8;
  branchType = v84;
  if ( !v83 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(v83, 2, *v52);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v55 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0LL);
  v87 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v85, v86);
  System_Collections_Generic_List_int____ctor(
    v87,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v55 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v52);
  if ( !Item )
    goto LABEL_164;
  v165 = (System_Int32_array *)v59;
  Item = (__int64)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  v88 = *(_QWORD *)(Item + 24);
  v89 = Item;
  if ( (int)v88 >= 1 )
  {
    v90 = 0LL;
    while ( v90 < (unsigned int)v88 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v89 + 32 + 8 * v90), 0LL);
      if ( !v87 )
        goto LABEL_164;
      v91 = v87->fields._items;
      v92 = Method_System_Collections_Generic_List_int__Add__;
      ++v87->fields._version;
      if ( !v91 )
        goto LABEL_164;
      v93 = v87->fields._size;
      v63 = (unsigned int)Item;
      if ( (unsigned int)v93 >= v91->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v87,
          Item,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
      }
      else
      {
        v87->fields._size = v93 + 1;
        v91->m_Items[v93 + 1] = Item;
      }
      LODWORD(v88) = *(_DWORD *)(v89 + 24);
      if ( (__int64)++v90 >= (int)v88 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1B6432C(Item, v63);
  }
LABEL_90:
  if ( !v87 )
    goto LABEL_164;
  Item = (__int64)System_Collections_Generic_List_int___ToArray(
                    v87,
                    (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  v52 = (const MethodInfo_34AD404 **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v58 )
    goto LABEL_164;
  routeId = (System_Int32_array *)Item;
  v94 = System_Collections_Generic_List_object___get_Item(
          *v58,
          4,
          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v94, 0LL);
  v95 = (int)CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v170.fields.value = v95;
  Item = (__int64)System_Type__GetTypeFromHandle(v170, 0LL);
  v96 = *v58;
  if ( !*v58 )
    goto LABEL_164;
  v97 = (System_Type_o *)Item;
  v98 = System_Collections_Generic_List_object___get_Item(
          v96,
          5,
          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Item = (__int64)System_Enum__Parse(v97, (System_String_o *)v98, 0LL);
  if ( !Item )
    goto LABEL_164;
  v59 = (System_String_o *)v165;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1B645E4(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v158, v159);
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

  if ( (byte_49F9CEF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&ScriptBranchListViewItem_TypeInfo, v5);
    byte_49F9CEF = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64324(this);
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
  struct UIScrollView_o *v7; // x0
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_49F9CF2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9CF2 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F9CF1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_ScriptBranchListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F9CF1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      ScriptBranchListViewObject__Init_34623672((ScriptBranchListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_1B6406C(
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
  if ( (byte_49F9CF0 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1B640C8(&ScriptBranchListViewObject_TypeInfo, obj);
    byte_49F9CF0 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptBranchListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_34623672((ScriptBranchListViewObject_o *)obj, v7, 0LL, method);
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

  if ( (byte_49F9CEB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F9CEB = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  ScriptBranchListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *__fastcall ScriptBranchListViewManager__get_ObjectList(
        ScriptBranchListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F9CED & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F9CED = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptBranchListViewObject__o *)v12;
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

  if ( (byte_49F9CEC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F9CEC = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49F9CF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, o);
    byte_49F9CF3 = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1B64324(0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           0LL);
}