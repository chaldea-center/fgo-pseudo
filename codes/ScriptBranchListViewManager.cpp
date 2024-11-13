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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  System_Collections_Generic_List_object__o *v90; // x22
  int64_t Item; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  const MethodInfo_35A198C **v95; // x24
  int32_t v96; // w23
  int v97; // w26
  __int64 v98; // x20
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_Collections_Generic_List_object__o **v105; // x25
  System_String_o *v106; // x29
  Il2CppObject *v107; // x22
  System_String_o *Empty; // x19
  uint32_t v109; // w0
  __int64 v110; // x2
  __int64 v111; // x3
  int32_t checkType; // w26
  Il2CppObject *v113; // x0
  int32_t v114; // w0
  int v115; // w8
  Il2CppObject *v116; // x0
  Il2CppObject *v117; // x0
  int32_t v118; // w25
  System_Int32_array *routeId; // x27
  int32_t count; // w19
  int v121; // w8
  __int64 *v122; // x8
  Il2CppObject *v123; // x0
  System_Collections_Generic_List_object__o *v124; // x8
  Il2CppObject *v125; // x0
  Il2CppObject *v126; // x0
  __int64 *v127; // x8
  Il2CppObject *v128; // x0
  Il2CppObject *v129; // x0
  System_Collections_Generic_List_object__o *v130; // x8
  int v131; // w9
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  System_Collections_Generic_List_int__o *v135; // x19
  __int64 v136; // x8
  int64_t v137; // x29
  unsigned __int64 v138; // x21
  struct System_Int32_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppObject *v142; // x0
  __int64 v143; // x1
  intptr_t v144; // w21
  System_Collections_Generic_List_object__o *v145; // x8
  System_Type_o *v146; // x25
  __int64 v147; // x1
  Il2CppObject *v148; // x21
  Il2CppObject *v149; // x0
  System_Collections_Generic_List_object__o *v150; // x8
  Il2CppObject *v151; // x0
  System_Collections_Generic_List_object__o *v152; // x8
  int v153; // w25
  Il2CppObject *v154; // x0
  Il2CppObject *v155; // x0
  Il2CppObject *v156; // x0
  Il2CppObject *v157; // x0
  System_Collections_Generic_List_object__o *v158; // x8
  Il2CppObject *v159; // x0
  int32_t v160; // w0
  Il2CppObject *v161; // x0
  System_Collections_Generic_List_object__o *v162; // x8
  Il2CppObject *v163; // x0
  int32_t v164; // w0
  Il2CppObject *v165; // x0
  Il2CppObject *v166; // x0
  System_String_o *v167; // x0
  int32_t v168; // w21
  int32_t v169; // w28
  System_String_o *v170; // x24
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x3
  ScriptBranchListViewItem_o *v174; // x20
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  Il2CppClass **v184; // x0
  const MethodInfo_35A198C **v185; // x27
  int32_t v186; // w23
  System_String_o *v187; // x19
  System_Predicate_object__o *v188; // x21
  __int64 v189; // x24
  int32_t Index; // w0
  System_String_o *v191; // x0
  int32_t v192; // w20
  int32_t v193; // w24
  System_String_o *v194; // x21
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  ScriptBranchListViewItem_o *v198; // x28
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  Il2CppClass **v208; // x0
  int32_t v209; // w19
  System_Collections_Generic_List_object__o *itemList; // x20
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  struct System_Object_array *items; // x8
  _QWORD *v218; // x9
  __int64 size; // x10
  int64_t v220; // x1
  Il2CppClass **v221; // x0
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v222; // x0
  const MethodInfo *v223; // x1
  ListViewManager_o *v224; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v225; // [xsp+40h] [xbp-A0h]
  int32_t v226; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_object__o *v227; // [xsp+50h] [xbp-90h]
  System_Int32_array *v229; // [xsp+60h] [xbp-80h]
  System_Int32_array *v230; // [xsp+60h] [xbp-80h]
  System_String_o *debugComment; // [xsp+68h] [xbp-78h]
  int32_t branchType; // [xsp+78h] [xbp-68h]
  int32_t v233; // [xsp+7Ch] [xbp-64h]
  System_RuntimeTypeHandle_o v234; // 0:w0.4

  v4 = (System_Collections_Generic_List_object__o *)list;
  if ( (byte_4B13962 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_CheckType_var, list, isLine);
    sub_1BCA7E0(&CondType_CheckType_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Enum_TypeInfo, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___get_Count__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___get_Item__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v38, v39);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Predicate_ScriptBranchListViewItem__TypeInfo, v42, v43);
    sub_1BCA7E0(&ScriptBranchListViewItem_TypeInfo, v44, v45);
    sub_1BCA7E0(&string_TypeInfo, v46, v47);
    sub_1BCA7E0(&System_Type_TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__, v50, v51);
    sub_1BCA7E0(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v52, v53);
    sub_1BCA7E0(&StringLiteral_17608/*"branchQuestClear"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_16239/*"] "*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_17611/*"branchRouteSelectCount"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_161/*" - 1"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_17605/*"branchNotMaterial"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_21527/*"masterBranch"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_20433/*"ifClear"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_17610/*"branchRouteSelect"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_17604/*"branchNotHaveSvtEquip"*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_23170/*"revivalBranch"*/, v72, v73);
    sub_1BCA7E0(&StringLiteral_17603/*"branchMaterial"*/, v74, v75);
    sub_1BCA7E0(&StringLiteral_17606/*"branchNotRouteSelect"*/, v76, v77);
    sub_1BCA7E0(&StringLiteral_17602/*"branchHaveSvtEquip"*/, v78, v79);
    sub_1BCA7E0(&StringLiteral_17171/*"bScene"*/, v80, v81);
    sub_1BCA7E0(&StringLiteral_24072/*"tRoute"*/, v82, v83);
    sub_1BCA7E0(&StringLiteral_17609/*"branchQuestNotClear"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_17607/*"branchNotRouteSelectCount"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v88, v89);
    byte_4B13962 = 1;
  }
  v224 = (ListViewManager_o *)this;
  v90 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo,
                                                       list,
                                                       isLine,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !v4 )
    goto LABEL_164;
  if ( v4->fields._size < 1 )
  {
LABEL_154:
    if ( v90 )
    {
      ListViewManager__CreateList(v224, v90->fields._size, 0LL);
      if ( v90->fields._size < 1 )
      {
LABEL_163:
        ListViewManager__SortItem(v224, -1, 0, -1, 0LL);
        return;
      }
      v209 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v224->fields.itemList;
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v90,
                          v209,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v218 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        v220 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)Item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
        }
        else
        {
          v221 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v221[4] = (Il2CppClass *)v220;
          sub_1BCA784((PartyOrganizationUtility_o *)(v221 + 4), v220, v211, v212, v213, v214, v215, v216);
        }
        if ( ++v209 >= v90->fields._size )
          goto LABEL_163;
      }
    }
LABEL_164:
    sub_1BCAA3C(Item, v92);
  }
  v95 = (const MethodInfo_35A198C **)&Method_System_Collections_Generic_List_string__get_Item__;
  v96 = 0;
  v97 = 0;
  v225 = v4;
  v227 = v90;
  while ( 1 )
  {
    v98 = sub_1BCAA2C(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v92, v93, v94);
    System_Object___ctor((Il2CppObject *)v98, 0LL);
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v4,
                      v96,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !v98 )
      goto LABEL_164;
    *(_QWORD *)(v98 + 16) = Item;
    v105 = (System_Collections_Generic_List_object__o **)(v98 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v98 + 16), Item, v99, v100, v101, v102, v103, v104);
    Item = *(_QWORD *)(v98 + 16);
    if ( !Item )
      goto LABEL_164;
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      0,
                      *v95);
    if ( !*v105 )
      goto LABEL_164;
    v106 = (System_String_o *)Item;
    v107 = System_Collections_Generic_List_object___get_Item(*v105, 1, *v95);
    Item = *(_QWORD *)(v98 + 16);
    *(_QWORD *)(v98 + 24) = 0xFFFFFFFFLL;
    if ( !Item )
      goto LABEL_164;
    if ( *(int *)(Item + 24) >= 7 )
      Empty = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)Item,
                                   6,
                                   *v95);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    v109 = PrivateImplementationDetails___ComputeStringHash((System_String_o *)v107, 0LL);
    v233 = v97;
    debugComment = Empty;
    if ( v109 <= 0x5D81BB60 )
    {
      if ( v109 <= 0x271B37FA )
      {
        checkType = 1;
        if ( v109 == 369362287 )
        {
          routeId = 0LL;
          count = -1;
          if ( System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17605/*"branchNotMaterial"*/, 0LL) )
            v121 = 1;
          else
            v121 = -1;
          goto LABEL_136;
        }
        if ( v109 != 651066131 )
        {
          if ( v109 == 656095226 )
          {
            if ( System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17602/*"branchHaveSvtEquip"*/, 0LL) )
            {
              Item = (int64_t)*v105;
              if ( !*v105 )
                goto LABEL_164;
              v113 = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Item,
                       2,
                       *v95);
              v114 = System_Int32__Parse((System_String_o *)v113, 0LL);
              v115 = 5;
LABEL_35:
              v118 = v114;
              routeId = 0LL;
              count = -1;
              checkType = 1;
              branchType = v115;
              goto LABEL_138;
            }
            goto LABEL_118;
          }
          routeId = 0LL;
          goto LABEL_119;
        }
        if ( !System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17171/*"bScene"*/, 0LL) )
          goto LABEL_118;
        Item = (int64_t)*v105;
        if ( !*v105 )
          goto LABEL_164;
        v123 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v95);
        Item = System_Int32__Parse((System_String_o *)v123, 0LL);
        v124 = *(System_Collections_Generic_List_object__o **)(v98 + 16);
        *(_DWORD *)(v98 + 24) = Item;
        if ( !v124 )
          goto LABEL_164;
        v125 = System_Collections_Generic_List_object___get_Item(v124, 3, *v95);
        *(_DWORD *)(v98 + 28) = System_Int32__Parse((System_String_o *)v125, 0LL);
        Item = sub_1BCA888(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v98 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v126 = System_Collections_Generic_List_object___get_Item(
                 *(System_Collections_Generic_List_object__o **)(v98 + 16),
                 4,
                 *v95);
        Item = System_Int32__Parse((System_String_o *)v126, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        count = -1;
        checkType = 1;
        v121 = 11;
        routeId->m_Items[1] = Item;
        goto LABEL_136;
      }
      if ( v109 <= 0x4E750E71 )
      {
        if ( v109 != 1053116368 )
        {
          if ( v109 == 1316294257
            && System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17604/*"branchNotHaveSvtEquip"*/, 0LL) )
          {
            Item = (int64_t)*v105;
            if ( !*v105 )
              goto LABEL_164;
            v117 = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Item,
                     2,
                     *v95);
            v114 = System_Int32__Parse((System_String_o *)v117, 0LL);
            v115 = 6;
            goto LABEL_35;
          }
          goto LABEL_118;
        }
        if ( !System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_24072/*"tRoute"*/, 0LL) )
          goto LABEL_118;
        Item = (int64_t)*v105;
        if ( !*v105 )
          goto LABEL_164;
        v128 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v95);
        *(_DWORD *)(v98 + 24) = System_Int32__Parse((System_String_o *)v128, 0LL);
        Item = sub_1BCA888(int___TypeInfo, 1LL);
        if ( !*(_QWORD *)(v98 + 16) )
          goto LABEL_164;
        routeId = (System_Int32_array *)Item;
        v129 = System_Collections_Generic_List_object___get_Item(
                 *(System_Collections_Generic_List_object__o **)(v98 + 16),
                 3,
                 *v95);
        Item = System_Int32__Parse((System_String_o *)v129, 0LL);
        if ( !routeId )
          goto LABEL_164;
        if ( !routeId->max_length )
          goto LABEL_165;
        routeId->m_Items[1] = Item;
        count = -1;
        checkType = 1;
        v121 = 10;
        goto LABEL_136;
      }
      if ( v109 != 1408301323 )
      {
        if ( v109 == 1568783200 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          if ( System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_23170/*"revivalBranch"*/, 0LL) )
            v121 = 4;
          else
            v121 = -1;
          goto LABEL_136;
        }
LABEL_118:
        routeId = 0LL;
        checkType = 1;
LABEL_119:
        branchType = -1;
        count = -1;
LABEL_137:
        v118 = -1;
        goto LABEL_138;
      }
      v127 = &StringLiteral_17606/*"branchNotRouteSelect"*/;
      goto LABEL_105;
    }
    if ( v109 > 0xA9C7DB00 )
      break;
    if ( v109 > 0x83820B5B )
    {
      if ( v109 != -1606428809 )
      {
        if ( v109 == -1446520064 )
        {
          routeId = 0LL;
          count = -1;
          checkType = 1;
          v121 = System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17603/*"branchMaterial"*/, 0LL) - 1;
          goto LABEL_136;
        }
        goto LABEL_118;
      }
      if ( !System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_20433/*"ifClear"*/, 0LL) )
        goto LABEL_118;
      Item = (int64_t)*v105;
      if ( !*v105 )
        goto LABEL_164;
      v149 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               2,
               *v95);
      Item = System_Int32__Parse((System_String_o *)v149, 0LL);
      v150 = *(System_Collections_Generic_List_object__o **)(v98 + 16);
      *(_DWORD *)(v98 + 24) = Item;
      if ( !v150 )
        goto LABEL_164;
      v151 = System_Collections_Generic_List_object___get_Item(v150, 3, *v95);
      routeId = 0LL;
      *(_DWORD *)(v98 + 28) = System_Int32__Parse((System_String_o *)v151, 0LL);
      count = -1;
      checkType = 1;
      v121 = 9;
      goto LABEL_136;
    }
    if ( v109 != -2116001178 )
    {
      if ( v109 != -2088629413
        || !System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17609/*"branchQuestNotClear"*/, 0LL) )
      {
        goto LABEL_118;
      }
      Item = (int64_t)*v105;
      if ( !*v105 )
        goto LABEL_164;
      v116 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               2,
               *v95);
      if ( System_String__IsNullOrEmpty((System_String_o *)v116, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (int64_t)*v105;
        if ( !*v105 )
          goto LABEL_164;
        v157 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v95);
        Item = System_Int32__Parse((System_String_o *)v157, 0LL);
      }
      v158 = *(System_Collections_Generic_List_object__o **)(v98 + 16);
      *(_DWORD *)(v98 + 24) = Item;
      if ( !v158 )
        goto LABEL_164;
      v159 = System_Collections_Generic_List_object___get_Item(v158, 3, *v95);
      if ( System_String__IsNullOrEmpty((System_String_o *)v159, 0LL) )
      {
        v160 = 0;
      }
      else
      {
        Item = (int64_t)*v105;
        if ( !*v105 )
          goto LABEL_164;
        v165 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v95);
        v160 = System_Int32__Parse((System_String_o *)v165, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v98 + 28) = v160;
      count = -1;
      checkType = 1;
      v121 = 3;
      goto LABEL_136;
    }
    v127 = &StringLiteral_17610/*"branchRouteSelect"*/;
LABEL_105:
    if ( !System_String__op_Equality((System_String_o *)v107, (System_String_o *)*v127, 0LL) )
      goto LABEL_118;
    Item = System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17610/*"branchRouteSelect"*/, 0LL);
    v152 = *v105;
    if ( (Item & 1) != 0 )
      v153 = 7;
    else
      v153 = 8;
    if ( !v152 )
      goto LABEL_164;
    v154 = System_Collections_Generic_List_object___get_Item(v152, 2, *v95);
    *(_DWORD *)(v98 + 24) = System_Int32__Parse((System_String_o *)v154, 0LL);
    Item = sub_1BCA888(int___TypeInfo, 1LL);
    if ( !*(_QWORD *)(v98 + 16) )
      goto LABEL_164;
    routeId = (System_Int32_array *)Item;
    v155 = System_Collections_Generic_List_object___get_Item(
             *(System_Collections_Generic_List_object__o **)(v98 + 16),
             3,
             *v95);
    Item = System_Int32__Parse((System_String_o *)v155, 0LL);
    if ( !routeId )
      goto LABEL_164;
    branchType = v153;
    if ( !routeId->max_length )
      goto LABEL_165;
    checkType = 0;
    routeId->m_Items[1] = Item;
    v118 = -1;
    count = 1;
LABEL_138:
    v230 = routeId;
    if ( isLine )
    {
      v167 = System_String__Concat_62414484(
               (System_String_o *)StringLiteral_15978/*"["*/,
               v106,
               (System_String_o *)StringLiteral_16239/*"] "*/,
               (System_String_o *)v107,
               0LL);
      v168 = *(_DWORD *)(v98 + 24);
      v169 = *(_DWORD *)(v98 + 28);
      v170 = v167;
      v174 = (ScriptBranchListViewItem_o *)sub_1BCAA2C(ScriptBranchListViewItem_TypeInfo, v171, v172, v173);
      ScriptBranchListViewItem___ctor(
        v174,
        v233,
        v170,
        (System_String_o *)v107,
        v106,
        v168,
        v169,
        v118,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        0LL);
      v90 = v227;
      if ( !v227 )
        goto LABEL_164;
      v181 = v227->fields._items;
      v4 = v225;
      v182 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
      ++v227->fields._version;
      if ( !v181 )
        goto LABEL_164;
      v183 = v227->fields._size;
      v95 = (const MethodInfo_35A198C **)&Method_System_Collections_Generic_List_string__get_Item__;
      v97 = v233 + 1;
      if ( (unsigned int)v183 >= v181->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v227,
          (Il2CppObject *)v174,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
      }
      else
      {
        v184 = &v181->obj.klass + v183;
        v227->fields._size = v183 + 1;
        v184[4] = (Il2CppClass *)v174;
        sub_1BCA784((PartyOrganizationUtility_o *)(v184 + 4), (int64_t)v174, v175, v176, v177, v178, v179, v180);
      }
    }
    else
    {
      v226 = v96;
      v185 = v95;
      v186 = count;
      v187 = (System_String_o *)v107;
      v188 = (System_Predicate_object__o *)sub_1BCAA2C(
                                             System_Predicate_ScriptBranchListViewItem__TypeInfo,
                                             v92,
                                             v110,
                                             v111);
      v189 = v98;
      System_Predicate_object____ctor(
        v188,
        (Il2CppObject *)v98,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        0LL);
      v90 = v227;
      if ( !v227 )
        goto LABEL_164;
      Index = System_Collections_Generic_List_object___FindIndex(
                v227,
                (System_Predicate_T__o *)v188,
                (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v191 = System_String__Concat_62401220(v187, (System_String_o *)StringLiteral_161/*" - 1"*/, 0LL);
        v192 = *(_DWORD *)(v98 + 24);
        v193 = *(_DWORD *)(v189 + 28);
        v194 = v191;
        v198 = (ScriptBranchListViewItem_o *)sub_1BCAA2C(ScriptBranchListViewItem_TypeInfo, v195, v196, v197);
        ScriptBranchListViewItem___ctor(
          v198,
          v233,
          v194,
          v187,
          v106,
          v192,
          v193,
          v118,
          v230,
          branchType,
          v186,
          checkType,
          debugComment,
          0LL);
        v205 = v227->fields._items;
        v206 = Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__;
        ++v227->fields._version;
        if ( !v205 )
          goto LABEL_164;
        v207 = v227->fields._size;
        v95 = (const MethodInfo_35A198C **)&Method_System_Collections_Generic_List_string__get_Item__;
        v96 = v226;
        v97 = v233 + 1;
        if ( (unsigned int)v207 >= v205->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v227,
            (Il2CppObject *)v198,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
        }
        else
        {
          v208 = &v205->obj.klass + v207;
          v227->fields._size = v207 + 1;
          v208[4] = (Il2CppClass *)v198;
          sub_1BCA784((PartyOrganizationUtility_o *)(v208 + 4), (int64_t)v198, v199, v200, v201, v202, v203, v204);
        }
        v4 = v225;
      }
      else
      {
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v227,
                          Index,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_164;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)Item, 0LL);
        v97 = v233;
        v96 = v226;
        v95 = v185;
      }
    }
    if ( ++v96 >= v4->fields._size )
      goto LABEL_154;
  }
  if ( v109 > 0xCB78578B )
  {
    if ( v109 == -460759494 )
    {
      if ( !System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17608/*"branchQuestClear"*/, 0LL) )
        goto LABEL_118;
      Item = (int64_t)*v105;
      if ( !*v105 )
        goto LABEL_164;
      v156 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               2,
               *v95);
      if ( System_String__IsNullOrEmpty((System_String_o *)v156, 0LL) )
      {
        Item = 0xFFFFFFFFLL;
      }
      else
      {
        Item = (int64_t)*v105;
        if ( !*v105 )
          goto LABEL_164;
        v161 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 2,
                 *v95);
        Item = System_Int32__Parse((System_String_o *)v161, 0LL);
      }
      v162 = *(System_Collections_Generic_List_object__o **)(v98 + 16);
      *(_DWORD *)(v98 + 24) = Item;
      if ( !v162 )
        goto LABEL_164;
      v163 = System_Collections_Generic_List_object___get_Item(v162, 3, *v95);
      if ( System_String__IsNullOrEmpty((System_String_o *)v163, 0LL) )
      {
        v164 = 0;
      }
      else
      {
        Item = (int64_t)*v105;
        if ( !*v105 )
          goto LABEL_164;
        v166 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 3,
                 *v95);
        v164 = System_Int32__Parse((System_String_o *)v166, 0LL);
      }
      routeId = 0LL;
      *(_DWORD *)(v98 + 28) = v164;
      count = -1;
      checkType = 1;
      v121 = 2;
LABEL_136:
      branchType = v121;
      goto LABEL_137;
    }
    if ( v109 != -201512038 )
      goto LABEL_118;
    v122 = &StringLiteral_17607/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v109 != -1252550667 )
    {
      if ( v109 == -881305717 )
        System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_21527/*"masterBranch"*/, 0LL);
      goto LABEL_118;
    }
    v122 = &StringLiteral_17611/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality((System_String_o *)v107, (System_String_o *)*v122, 0LL) )
    goto LABEL_118;
  Item = System_String__op_Equality((System_String_o *)v107, (System_String_o *)StringLiteral_17611/*"branchRouteSelectCount"*/, 0LL);
  v130 = *v105;
  if ( (Item & 1) != 0 )
    v131 = 7;
  else
    v131 = 8;
  branchType = v131;
  if ( !v130 )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_object___get_Item(v130, 2, *v95);
  if ( !Item )
    goto LABEL_164;
  Item = (int64_t)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  if ( !*(_DWORD *)(Item + 24) )
    goto LABEL_165;
  *(_DWORD *)(v98 + 24) = System_Int32__Parse(*(System_String_o **)(Item + 32), 0LL);
  v135 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v132,
                                                     v133,
                                                     v134);
  System_Collections_Generic_List_int____ctor(
    v135,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Item = *(_QWORD *)(v98 + 16);
  if ( !Item )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    3,
                    *v95);
  if ( !Item )
    goto LABEL_164;
  v229 = (System_Int32_array *)v106;
  Item = (int64_t)System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL);
  if ( !Item )
    goto LABEL_164;
  v136 = *(_QWORD *)(Item + 24);
  v137 = Item;
  if ( (int)v136 >= 1 )
  {
    v138 = 0LL;
    while ( v138 < (unsigned int)v136 )
    {
      Item = System_Int32__Parse(*(System_String_o **)(v137 + 32 + 8 * v138), 0LL);
      if ( !v135 )
        goto LABEL_164;
      v139 = v135->fields._items;
      v140 = Method_System_Collections_Generic_List_int__Add__;
      ++v135->fields._version;
      if ( !v139 )
        goto LABEL_164;
      v141 = v135->fields._size;
      v92 = (unsigned int)Item;
      if ( (unsigned int)v141 >= v139->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v135,
          Item,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
      }
      else
      {
        v135->fields._size = v141 + 1;
        v139->m_Items[v141 + 1] = Item;
      }
      LODWORD(v136) = *(_DWORD *)(v137 + 24);
      if ( (__int64)++v138 >= (int)v136 )
        goto LABEL_90;
    }
LABEL_165:
    sub_1BCAA44(Item, v92);
  }
LABEL_90:
  if ( !v135 )
    goto LABEL_164;
  Item = (int64_t)System_Collections_Generic_List_int___ToArray(
                    v135,
                    (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  v95 = (const MethodInfo_35A198C **)&Method_System_Collections_Generic_List_string__get_Item__;
  if ( !*v105 )
    goto LABEL_164;
  routeId = (System_Int32_array *)Item;
  v142 = System_Collections_Generic_List_object___get_Item(
           *v105,
           4,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  count = System_Int32__Parse((System_String_o *)v142, 0LL);
  v144 = (int)CondType_CheckType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v143);
  v234.fields.value = v144;
  Item = (int64_t)System_Type__GetTypeFromHandle(v234, 0LL);
  v145 = *v105;
  if ( !*v105 )
    goto LABEL_164;
  v146 = (System_Type_o *)Item;
  v148 = System_Collections_Generic_List_object___get_Item(
           v145,
           5,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v147);
  Item = (int64_t)System_Enum__Parse(v146, (System_String_o *)v148, 0LL);
  if ( !Item )
    goto LABEL_164;
  v106 = (System_String_o *)v229;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    checkType = *(_DWORD *)j_il2cpp_object_unbox_0();
    goto LABEL_137;
  }
  sub_1BCACFC(Item);
  ScriptBranchListViewManager___c__DisplayClass9_0___ctor(v222, v223);
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
  __int64 v6; // x2
  ScriptBranchListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B13963 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ScriptBranchListViewItem_TypeInfo, v5, v6);
    byte_4B13963 = 1;
  }
  result = (ScriptBranchListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBranchListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_4B13966 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13966 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B13965 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_ScriptBranchListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B13965 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBranchListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      ScriptBranchListViewObject__Init_35532728((ScriptBranchListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_1BCA784(
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
  if ( (byte_4B13964 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_1BCA7E0(&ScriptBranchListViewObject_TypeInfo, obj, item);
    byte_4B13964 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptBranchListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBranchListViewObject__Init_35532728((ScriptBranchListViewObject_o *)obj, v7, 0LL, method);
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

  if ( (byte_4B1395F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1395F = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  ScriptBranchListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *__fastcall ScriptBranchListViewManager__get_ObjectList(
        ScriptBranchListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B13961 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B13961 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptBranchListViewObject__o *)v21;
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

  if ( (byte_4B13960 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B13960 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B13967 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, o, method);
    byte_4B13967 = 1;
  }
  if ( !o )
    return 0;
  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, o);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)data,
           1,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           (System_String_o *)Item,
           this->fields.questId,
           this->fields.questPhase,
           0LL);
}