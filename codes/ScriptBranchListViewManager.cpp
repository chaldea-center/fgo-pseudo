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
  System_Collections_Generic_List_List_string___o *v4; // x22
  int v5; // w1
  char v6; // w2
  __int64 v7; // x3
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  int v53; // w1
  char v54; // w2
  __int64 v55; // x3
  int v56; // w1
  char v57; // w2
  __int64 v58; // x3
  int v59; // w1
  char v60; // w2
  __int64 v61; // x3
  int v62; // w1
  char v63; // w2
  __int64 v64; // x3
  int v65; // w1
  char v66; // w2
  __int64 v67; // x3
  int v68; // w1
  char v69; // w2
  __int64 v70; // x3
  int v71; // w1
  char v72; // w2
  __int64 v73; // x3
  int v74; // w1
  char v75; // w2
  __int64 v76; // x3
  int v77; // w1
  char v78; // w2
  __int64 v79; // x3
  int v80; // w1
  char v81; // w2
  __int64 v82; // x3
  int v83; // w1
  char v84; // w2
  __int64 v85; // x3
  int v86; // w1
  char v87; // w2
  __int64 v88; // x3
  int v89; // w1
  char v90; // w2
  __int64 v91; // x3
  int v92; // w1
  char v93; // w2
  __int64 v94; // x3
  int v95; // w1
  char v96; // w2
  __int64 v97; // x3
  int v98; // w1
  char v99; // w2
  __int64 v100; // x3
  int v101; // w1
  char v102; // w2
  __int64 v103; // x3
  int v104; // w1
  char v105; // w2
  __int64 v106; // x3
  int v107; // w1
  char v108; // w2
  __int64 v109; // x3
  int v110; // w1
  char v111; // w2
  __int64 v112; // x3
  int v113; // w1
  char v114; // w2
  __int64 v115; // x3
  int v116; // w1
  char v117; // w2
  __int64 v118; // x3
  int v119; // w1
  char v120; // w2
  __int64 v121; // x3
  int v122; // w1
  char v123; // w2
  __int64 v124; // x3
  int v125; // w1
  char v126; // w2
  __int64 v127; // x3
  int v128; // w1
  char v129; // w2
  __int64 v130; // x3
  int v131; // w1
  char v132; // w2
  __int64 v133; // x3
  int v134; // w1
  char v135; // w2
  __int64 v136; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v137; // x23
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v139; // x1
  int32_t v140; // w25
  unsigned __int64 v141; // x28
  __int64 v142; // x19
  __int64 v143; // x19
  int32_t v144; // w0
  __int64 v145; // x19
  __int64 v146; // x19
  int32_t v147; // w0
  __int64 v148; // x19
  int v149; // w19
  int v150; // w27
  __int64 v151; // x19
  __int64 v152; // x24
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x1
  __int64 *v160; // x27
  __int64 v161; // x20
  __int64 v162; // x19
  unsigned int v163; // w9
  System_String_o *v164; // x20
  System_String_o *v165; // x26
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x21
  uint32_t v168; // w0
  __int64 v169; // x19
  __int64 v170; // x19
  __int64 v171; // x19
  __int64 *v172; // x8
  __int64 v173; // x19
  __int64 v174; // x19
  __int64 v175; // x19
  System_Int32_array *v176; // x27
  __int64 *v177; // x8
  __int64 v178; // x19
  __int64 v179; // x19
  System_Int32_array *v180; // x27
  __int64 v181; // x19
  int v182; // w8
  System_String_o *v183; // x20
  System_Collections_Generic_List_int__o *v184; // x20
  __int64 v185; // x19
  unsigned __int64 v186; // x23
  System_String_o *v187; // x28
  __int64 v188; // x8
  __int64 v189; // x28
  unsigned __int64 v190; // x19
  __int64 v191; // x19
  intptr_t v192; // w19
  __int64 v193; // x19
  System_Type_o *v194; // x27
  System_String_o *v195; // x19
  __int64 v196; // x19
  __int64 v197; // x19
  __int64 v198; // x19
  __int64 v199; // x19
  __int64 v200; // x19
  System_String_o *debugComment; // x27
  unsigned __int64 v202; // x21
  System_String_o *v203; // x0
  int32_t v204; // w19
  int32_t v205; // w23
  System_String_o *v206; // x28
  int32_t v207; // w20
  System_String_o *v208; // x25
  ScriptBranchListViewItem_o *v209; // x0
  int32_t v210; // w6
  EventMissionProgressRequest_Argument_ProgressData_o *v211; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v212; // x19
  int32_t Index; // w0
  System_String_o *v214; // x0
  int32_t v215; // w23
  int32_t v216; // w24
  System_String_o *v217; // x19
  int32_t v218; // w22
  ScriptBranchListViewItem_o *v219; // x0
  int32_t v220; // w5
  int32_t v221; // w1
  EventMissionProgressRequest_Argument_ProgressData_o *v222; // x25
  signed __int64 size; // x8
  unsigned __int64 v224; // x19
  __int64 v225; // x0
  ScriptBranchListViewManager_o *v226; // x0
  const MethodInfo *v227; // x1
  const MethodInfo *v228; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v230; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v231; // [xsp+50h] [xbp-80h]
  int32_t v233; // [xsp+5Ch] [xbp-74h]
  int32_t branchType; // [xsp+5Ch] [xbp-74h]
  int32_t v235; // [xsp+60h] [xbp-70h]
  int32_t count; // [xsp+64h] [xbp-6Ch]
  System_String_o *v237; // [xsp+68h] [xbp-68h]
  int32_t checkType; // [xsp+68h] [xbp-68h]
  System_Int32_array *routeId; // [xsp+78h] [xbp-58h]
  System_RuntimeTypeHandle_o v240; // 0:w0.4

  v4 = list;
  if ( (byte_42ED158 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)list, isLine, method);
    sub_B5D5C4(&CondType_CheckType_var, v5, v6, v7);
    sub_B5D5C4(&CondType_CheckType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Enum_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___get_Item__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_System_Predicate_ScriptBranchListViewItem___ctor__, v62, v63, v64);
    sub_B5D5C4(&System_Predicate_ScriptBranchListViewItem__TypeInfo, v65, v66, v67);
    sub_B5D5C4(&ScriptBranchListViewItem_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&string_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&System_Type_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__, v77, v78, v79);
    sub_B5D5C4(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_17131/*"branchQuestClear"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_16064/*"] "*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_17134/*"branchRouteSelectCount"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_120/*" - 1"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_17128/*"branchNotMaterial"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_20648/*"masterBranch"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_19643/*"ifClear"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_17133/*"branchRouteSelect"*/, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_17127/*"branchNotHaveSvtEquip"*/, v107, v108, v109);
    sub_B5D5C4(&StringLiteral_22111/*"revivalBranch"*/, v110, v111, v112);
    sub_B5D5C4(&StringLiteral_17126/*"branchMaterial"*/, v113, v114, v115);
    sub_B5D5C4(&StringLiteral_17129/*"branchNotRouteSelect"*/, v116, v117, v118);
    sub_B5D5C4(&StringLiteral_17125/*"branchHaveSvtEquip"*/, v119, v120, v121);
    sub_B5D5C4(&StringLiteral_16749/*"bScene"*/, v122, v123, v124);
    sub_B5D5C4(&StringLiteral_22885/*"tRoute"*/, v125, v126, v127);
    sub_B5D5C4(&StringLiteral_17132/*"branchQuestNotClear"*/, v128, v129, v130);
    sub_B5D5C4(&StringLiteral_17130/*"branchNotRouteSelectCount"*/, v131, v132, v133);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v134, v135, v136);
    byte_42ED158 = 1;
  }
  v137 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v137,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !v4 )
    goto LABEL_210;
  if ( v4->fields._size < 1 )
  {
LABEL_202:
    if ( v137 )
    {
      ListViewManager__CreateList((ListViewManager_o *)this, v137->fields._size, 0LL);
      LODWORD(size) = v137->fields._size;
      if ( (int)size < 1 )
      {
LABEL_209:
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        return;
      }
      v224 = 0LL;
      while ( 1 )
      {
        if ( v224 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !this->fields.itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList,
          v137->fields._items->m_Items[v224],
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        size = v137->fields._size;
        if ( (__int64)++v224 >= size )
          goto LABEL_209;
      }
    }
LABEL_210:
    sub_B5D69C(IsNullOrEmpty, v139);
  }
  v140 = 0;
  v141 = 0LL;
  v230 = v4;
  v231 = v137;
  while ( 1 )
  {
    v152 = sub_B5D694(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    ScriptBranchListViewManager___c__DisplayClass9_0___ctor(
      (ScriptBranchListViewManager___c__DisplayClass9_0_o *)v152,
      0LL);
    if ( v141 >= (unsigned int)v4->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !v152 )
      goto LABEL_210;
    v159 = (System_Int32_array **)v4->fields._items->m_Items[v141];
    *(_QWORD *)(v152 + 16) = v159;
    v160 = (__int64 *)(v152 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v152 + 16), v159, v153, v154, v155, v156, v157, v158);
    v161 = *(_QWORD *)(v152 + 16);
    if ( !v161 )
      goto LABEL_210;
    v162 = *v160;
    if ( !*(_DWORD *)(v161 + 24) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v163 = *(_DWORD *)(v161 + 24);
    v164 = *(System_String_o **)(*(_QWORD *)(v161 + 16) + 32LL);
    if ( v163 <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v165 = *(System_String_o **)(*(_QWORD *)(v162 + 16) + 40LL);
    *(_QWORD *)(v152 + 24) = 0xFFFFFFFFLL;
    if ( !v162 )
      goto LABEL_210;
    if ( *(int *)(v162 + 24) >= 7 )
      static_fields = (struct System_String_StaticFields *)(*(_QWORD *)(v162 + 16) + 80LL);
    else
      static_fields = string_TypeInfo->static_fields;
    Empty = static_fields->Empty;
    if ( !v165 )
      goto LABEL_187;
    v168 = PrivateImplementationDetails___ComputeStringHash_21231600(v165, 0LL);
    if ( v168 > 0x5D81BB60 )
      break;
    if ( v168 > 0x271B37FA )
    {
      if ( v168 > 0x4E750E71 )
      {
        if ( v168 != 1408301323 )
        {
          if ( v168 == 1568783200 )
          {
            routeId = 0LL;
            count = -1;
            v149 = 1;
            if ( System_String__op_Equality(v165, (System_String_o *)StringLiteral_22111/*"revivalBranch"*/, 0LL) )
              v150 = 4;
            else
              v150 = -1;
            goto LABEL_190;
          }
LABEL_187:
          routeId = 0LL;
          v149 = 1;
LABEL_188:
          v150 = -1;
LABEL_189:
          count = -1;
LABEL_190:
          v235 = -1;
          goto LABEL_191;
        }
        v177 = &StringLiteral_17129/*"branchNotRouteSelect"*/;
LABEL_168:
        if ( !System_String__op_Equality(v165, (System_String_o *)*v177, 0LL) )
          goto LABEL_187;
        IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_17133/*"branchRouteSelect"*/, 0LL);
        v198 = *v160;
        if ( (IsNullOrEmpty & 1) != 0 )
          v150 = 7;
        else
          v150 = 8;
        if ( !v198 )
          goto LABEL_210;
        if ( *(_DWORD *)(v198 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        *(_DWORD *)(v152 + 24) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v198 + 16) + 48LL), 0LL);
        IsNullOrEmpty = sub_B5D5DC(int___TypeInfo, 1LL);
        v199 = *(_QWORD *)(v152 + 16);
        routeId = (System_Int32_array *)IsNullOrEmpty;
        if ( !v199 )
          goto LABEL_210;
        if ( *(_DWORD *)(v199 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v199 + 16) + 56LL), 0LL);
        if ( !routeId )
          goto LABEL_210;
        if ( !routeId->max_length )
          goto LABEL_211;
        v235 = -1;
        v149 = 0;
        routeId->m_Items[1] = IsNullOrEmpty;
        count = 1;
        goto LABEL_191;
      }
      if ( v168 == 1053116368 )
      {
        IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_22885/*"tRoute"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v178 = *v160;
          if ( !*v160 )
            goto LABEL_210;
          if ( *(_DWORD *)(v178 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          *(_DWORD *)(v152 + 24) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v178 + 16) + 48LL), 0LL);
          IsNullOrEmpty = sub_B5D5DC(int___TypeInfo, 1LL);
          v179 = *(_QWORD *)(v152 + 16);
          if ( !v179 )
            goto LABEL_210;
          v180 = (System_Int32_array *)IsNullOrEmpty;
          if ( *(_DWORD *)(v179 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v179 + 16) + 56LL), 0LL);
          if ( !v180 )
            goto LABEL_210;
          if ( !v180->max_length )
            goto LABEL_211;
          routeId = v180;
          v180->m_Items[1] = IsNullOrEmpty;
          count = -1;
          v149 = 1;
          v150 = 10;
          goto LABEL_190;
        }
        goto LABEL_187;
      }
      if ( v168 != 1316294257 )
        goto LABEL_187;
      IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_17127/*"branchNotHaveSvtEquip"*/, 0LL);
      if ( (IsNullOrEmpty & 1) == 0 )
        goto LABEL_187;
      v171 = *v160;
      if ( !*v160 )
        goto LABEL_210;
      if ( *(_DWORD *)(v171 + 24) <= 2u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v235 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v171 + 16) + 48LL), 0LL);
      routeId = 0LL;
      count = -1;
      v149 = 1;
      v150 = 6;
    }
    else
    {
      v149 = 1;
      if ( v168 == 369362287 )
      {
        routeId = 0LL;
        count = -1;
        if ( System_String__op_Equality(v165, (System_String_o *)StringLiteral_17128/*"branchNotMaterial"*/, 0LL) )
          v150 = 1;
        else
          v150 = -1;
        goto LABEL_190;
      }
      if ( v168 == 651066131 )
      {
        IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_16749/*"bScene"*/, 0LL);
        if ( (IsNullOrEmpty & 1) == 0 )
          goto LABEL_187;
        v173 = *v160;
        if ( !*v160 )
          goto LABEL_210;
        if ( *(_DWORD *)(v173 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v173 + 16) + 48LL), 0LL);
        v174 = *(_QWORD *)(v152 + 16);
        *(_DWORD *)(v152 + 24) = IsNullOrEmpty;
        if ( !v174 )
          goto LABEL_210;
        if ( *(_DWORD *)(v174 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        *(_DWORD *)(v152 + 28) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v174 + 16) + 56LL), 0LL);
        IsNullOrEmpty = sub_B5D5DC(int___TypeInfo, 1LL);
        v175 = *(_QWORD *)(v152 + 16);
        if ( !v175 )
          goto LABEL_210;
        v176 = (System_Int32_array *)IsNullOrEmpty;
        if ( *(_DWORD *)(v175 + 24) <= 4u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v175 + 16) + 64LL), 0LL);
        if ( !v176 )
          goto LABEL_210;
        if ( !v176->max_length )
          goto LABEL_211;
        routeId = v176;
        v176->m_Items[1] = IsNullOrEmpty;
        v149 = 1;
        v150 = 11;
        goto LABEL_189;
      }
      if ( v168 != 656095226 )
      {
        routeId = 0LL;
        goto LABEL_188;
      }
      IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_17125/*"branchHaveSvtEquip"*/, 0LL);
      if ( (IsNullOrEmpty & 1) == 0 )
        goto LABEL_187;
      v169 = *v160;
      if ( !*v160 )
        goto LABEL_210;
      if ( *(_DWORD *)(v169 + 24) <= 2u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v235 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v169 + 16) + 48LL), 0LL);
      routeId = 0LL;
      count = -1;
      v149 = 1;
      v150 = 5;
    }
LABEL_191:
    checkType = v149;
    if ( isLine )
    {
      branchType = v150;
      debugComment = Empty;
      v202 = v141;
      v203 = System_String__Concat_44581200(
               (System_String_o *)StringLiteral_15824/*"["*/,
               v164,
               (System_String_o *)StringLiteral_16064/*"] "*/,
               v165,
               0LL);
      v204 = *(_DWORD *)(v152 + 24);
      v205 = *(_DWORD *)(v152 + 28);
      v206 = v164;
      v207 = v140;
      v208 = v203;
      v209 = (ScriptBranchListViewItem_o *)sub_B5D694(ScriptBranchListViewItem_TypeInfo);
      v210 = v205;
      v137 = v231;
      v211 = (EventMissionProgressRequest_Argument_ProgressData_o *)v209;
      ScriptBranchListViewItem___ctor(
        v209,
        v207,
        v208,
        v165,
        v206,
        v204,
        v210,
        v235,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v228);
      if ( !v231 )
        goto LABEL_210;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v231,
        v211,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
      v140 = v207 + 1;
      v141 = v202;
    }
    else
    {
      v212 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v212,
        (Il2CppObject *)v152,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_ScriptBranchListViewItem___ctor__);
      if ( !v137 )
        goto LABEL_210;
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v137,
                (System_Predicate_T__o *)v212,
                (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v214 = System_String__Concat_44577788(v165, (System_String_o *)StringLiteral_120/*" - 1"*/, 0LL);
        v215 = *(_DWORD *)(v152 + 24);
        v216 = *(_DWORD *)(v152 + 28);
        v217 = v214;
        v218 = v140 + 1;
        v219 = (ScriptBranchListViewItem_o *)sub_B5D694(ScriptBranchListViewItem_TypeInfo);
        v220 = v215;
        v137 = v231;
        v221 = v140;
        v222 = (EventMissionProgressRequest_Argument_ProgressData_o *)v219;
        ScriptBranchListViewItem___ctor(
          v219,
          v221,
          v217,
          v165,
          v164,
          v220,
          v216,
          v235,
          routeId,
          v150,
          count,
          checkType,
          Empty,
          v228);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v231,
          v222,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
        v140 = v218;
        v4 = v230;
      }
      else
      {
        if ( v137->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        IsNullOrEmpty = (__int64)v137->fields._items->m_Items[Index];
        if ( !IsNullOrEmpty )
          goto LABEL_210;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)IsNullOrEmpty, v139);
      }
    }
    if ( (__int64)++v141 >= v4->fields._size )
      goto LABEL_202;
  }
  if ( v168 <= 0xA9C7DB00 )
  {
    if ( v168 > 0x83820B5B )
    {
      if ( v168 == -1606428809 )
      {
        IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_19643/*"ifClear"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v196 = *v160;
          if ( !*v160 )
            goto LABEL_210;
          if ( *(_DWORD *)(v196 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v196 + 16) + 48LL), 0LL);
          v197 = *(_QWORD *)(v152 + 16);
          *(_DWORD *)(v152 + 24) = IsNullOrEmpty;
          if ( !v197 )
            goto LABEL_210;
          if ( *(_DWORD *)(v197 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          routeId = 0LL;
          *(_DWORD *)(v152 + 28) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v197 + 16) + 56LL), 0LL);
          count = -1;
          v149 = 1;
          v150 = 9;
          goto LABEL_190;
        }
        goto LABEL_187;
      }
      if ( v168 != -1446520064 )
        goto LABEL_187;
      routeId = 0LL;
      count = -1;
      v149 = 1;
      v150 = ~System_String__op_Equality(v165, (System_String_o *)StringLiteral_17126/*"branchMaterial"*/, 0LL) << 31 >> 31;
      goto LABEL_190;
    }
    if ( v168 != -2116001178 )
    {
      if ( v168 == -2088629413 )
      {
        IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_17132/*"branchQuestNotClear"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v170 = *v160;
          if ( !*v160 )
            goto LABEL_210;
          if ( *(_DWORD *)(v170 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v170 + 16) + 48LL), 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            IsNullOrEmpty = 0xFFFFFFFFLL;
          }
          else
          {
            v142 = *v160;
            if ( !*v160 )
              goto LABEL_210;
            if ( *(_DWORD *)(v142 + 24) <= 2u )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v142 + 16) + 48LL), 0LL);
          }
          v143 = *(_QWORD *)(v152 + 16);
          *(_DWORD *)(v152 + 24) = IsNullOrEmpty;
          if ( !v143 )
            goto LABEL_210;
          if ( *(_DWORD *)(v143 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v143 + 16) + 56LL), 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            v144 = 0;
          }
          else
          {
            v148 = *v160;
            if ( !*v160 )
              goto LABEL_210;
            if ( *(_DWORD *)(v148 + 24) <= 3u )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v144 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v148 + 16) + 56LL), 0LL);
          }
          routeId = 0LL;
          *(_DWORD *)(v152 + 28) = v144;
          count = -1;
          v149 = 1;
          v150 = 3;
          goto LABEL_190;
        }
      }
      goto LABEL_187;
    }
    v177 = &StringLiteral_17133/*"branchRouteSelect"*/;
    goto LABEL_168;
  }
  if ( v168 > 0xCB78578B )
  {
    if ( v168 == -460759494 )
    {
      IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_17131/*"branchQuestClear"*/, 0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v200 = *v160;
        if ( !*v160 )
          goto LABEL_210;
        if ( *(_DWORD *)(v200 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v200 + 16) + 48LL), 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          IsNullOrEmpty = 0xFFFFFFFFLL;
        }
        else
        {
          v145 = *v160;
          if ( !*v160 )
            goto LABEL_210;
          if ( *(_DWORD *)(v145 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v145 + 16) + 48LL), 0LL);
        }
        v146 = *(_QWORD *)(v152 + 16);
        *(_DWORD *)(v152 + 24) = IsNullOrEmpty;
        if ( !v146 )
          goto LABEL_210;
        if ( *(_DWORD *)(v146 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v146 + 16) + 56LL), 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v147 = 0;
        }
        else
        {
          v151 = *v160;
          if ( !*v160 )
            goto LABEL_210;
          if ( *(_DWORD *)(v151 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v147 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v151 + 16) + 56LL), 0LL);
        }
        routeId = 0LL;
        *(_DWORD *)(v152 + 28) = v147;
        count = -1;
        v149 = 1;
        v150 = 2;
        goto LABEL_190;
      }
      goto LABEL_187;
    }
    if ( v168 != -201512038 )
      goto LABEL_187;
    v172 = &StringLiteral_17130/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v168 != -1252550667 )
    {
      if ( v168 == -881305717 )
        System_String__op_Equality(v165, (System_String_o *)StringLiteral_20648/*"masterBranch"*/, 0LL);
      goto LABEL_187;
    }
    v172 = &StringLiteral_17134/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality(v165, (System_String_o *)*v172, 0LL) )
    goto LABEL_187;
  IsNullOrEmpty = System_String__op_Equality(v165, (System_String_o *)StringLiteral_17134/*"branchRouteSelectCount"*/, 0LL);
  v181 = *v160;
  if ( (IsNullOrEmpty & 1) != 0 )
    v182 = 7;
  else
    v182 = 8;
  v233 = v182;
  if ( !v181 )
    goto LABEL_210;
  v237 = v164;
  if ( *(_DWORD *)(v181 + 24) <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v183 = *(System_String_o **)(*(_QWORD *)(v181 + 16) + 48LL);
  IsNullOrEmpty = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v139 = (const MethodInfo *)IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !v183 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_String__Split(v183, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_DWORD *)(v152 + 24) = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
  v184 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v184,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v185 = *(_QWORD *)(v152 + 16);
  if ( !v185 )
    goto LABEL_210;
  v186 = v141;
  if ( *(_DWORD *)(v185 + 24) <= 3u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v187 = *(System_String_o **)(*(_QWORD *)(v185 + 16) + 56LL);
  IsNullOrEmpty = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v139 = (const MethodInfo *)IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !v187 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_String__Split(v187, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v188 = *(_QWORD *)(IsNullOrEmpty + 24);
  v189 = IsNullOrEmpty;
  if ( (int)v188 >= 1 )
  {
    v190 = 0LL;
    while ( v190 < (unsigned int)v188 )
    {
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v189 + 32 + 8 * v190), 0LL);
      if ( !v184 )
        goto LABEL_210;
      System_Collections_Generic_List_int___Add(
        v184,
        IsNullOrEmpty,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v188) = *(_DWORD *)(v189 + 24);
      if ( (__int64)++v190 >= (int)v188 )
        goto LABEL_143;
    }
LABEL_211:
    v225 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v225, 0LL);
  }
LABEL_143:
  if ( !v184 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_Collections_Generic_List_int___ToArray(
                             v184,
                             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v191 = *v160;
  routeId = (System_Int32_array *)IsNullOrEmpty;
  if ( !*v160 )
    goto LABEL_210;
  v141 = v186;
  v137 = v231;
  v164 = v237;
  if ( *(_DWORD *)(v191 + 24) <= 4u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  count = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v191 + 16) + 64LL), 0LL);
  v192 = (int)CondType_CheckType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v240.fields.value = v192;
  IsNullOrEmpty = (__int64)System_Type__GetTypeFromHandle(v240, 0LL);
  v193 = *v160;
  if ( !*v160 )
    goto LABEL_210;
  v194 = (System_Type_o *)IsNullOrEmpty;
  if ( *(_DWORD *)(v193 + 24) <= 5u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v195 = *(System_String_o **)(*(_QWORD *)(v193 + 16) + 72LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  IsNullOrEmpty = (__int64)System_Enum__Parse(v194, v195, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v150 = v233;
  if ( *(Il2CppClass **)(*(_QWORD *)IsNullOrEmpty + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    v149 = *(_DWORD *)j_il2cpp_object_unbox_0(IsNullOrEmpty);
    goto LABEL_190;
  }
  sub_B5D990(IsNullOrEmpty);
  ScriptBranchListViewManager__DestroyList(v226, v227);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42ED159 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&ScriptBranchListViewItem_TypeInfo, v6, v7, v8);
    byte_42ED159 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&ScriptBranchListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (ScriptBranchListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ScriptBranchListViewItem_TypeInfo )
    return (ScriptBranchListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall ScriptBranchListViewManager__OnClickListView(
        ScriptBranchListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  System_Action_o *callbackFunc; // x8

  if ( !obj )
    sub_B5D69C(this, 0LL);
  Index = ListViewObject__get_Index(obj, 0LL);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
    System_Action__Invoke(callbackFunc, 0LL);
}


void __fastcall ScriptBranchListViewManager__OnMoveEnd(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0
  System_Action_o *callbackFunc; // x0

  if ( (byte_42ED15C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED15C = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
          System_Action__Invoke(callbackFunc, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42ED15B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_ScriptBranchListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42ED15B = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptBranchListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ScriptBranchListViewObject__Init(
        (ScriptBranchListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
  }
}


void __fastcall ScriptBranchListViewManager__SetMode(
        ScriptBranchListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewManager__SetObjectItem(
        ScriptBranchListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptBranchListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_42ED15A & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_B5D5C4(
                                              &ScriptBranchListViewObject_TypeInfo,
                                              (_DWORD)obj,
                                              (_DWORD)item,
                                              method);
    byte_42ED15A = 1;
  }
  if ( !obj
    || (v6 = *(&ScriptBranchListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v13 = 3;
  else
    v13 = 2;
  ScriptBranchListViewObject__Init(
    (ScriptBranchListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall ScriptBranchListViewManager__add_callbackFunc(
        ScriptBranchListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptBranchListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42ED155 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED155 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ScriptBranchListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *__fastcall ScriptBranchListViewManager__get_ObjectList(
        ScriptBranchListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42ED157 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42ED157 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptBranchListViewObject__o *)v29;
}


void __fastcall ScriptBranchListViewManager__remove_callbackFunc(
        ScriptBranchListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptBranchListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42ED156 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED156 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ScriptBranchListViewManager__get_ObjectList(v11, v12);
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
  __int64 v3; // x3
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v5; // x20
  struct System_Collections_Generic_List_string__o *data; // x21

  v5 = this;
  if ( (byte_42E5CF5 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                                   &Method_System_Collections_Generic_List_string__get_Item__,
                                                                   (_DWORD)o,
                                                                   (_DWORD)method,
                                                                   v3);
    byte_42E5CF5 = 1;
  }
  if ( !o )
    return 0;
  data = v5->fields.data;
  if ( !data )
    sub_B5D69C(this, o);
  if ( data->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           data->fields._items->m_Items[1],
           v5->fields.questId,
           v5->fields.questPhase,
           0LL);
}