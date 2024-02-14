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
  System_Collections_Generic_List_List_string___o *v4; // x22
  __int64 v5; // x1
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
  __int64 v48; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x23
  __int64 IsNullOrEmpty; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  int32_t v53; // w25
  unsigned __int64 v54; // x28
  __int64 v55; // x19
  __int64 v56; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  int32_t v59; // w0
  __int64 v60; // x19
  __int64 v61; // x19
  int32_t v62; // w0
  __int64 v63; // x19
  int v64; // w19
  int v65; // w27
  __int64 v66; // x19
  __int64 v67; // x24
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  __int64 *v75; // x27
  __int64 v76; // x20
  __int64 v77; // x19
  unsigned int v78; // w9
  System_String_o *v79; // x20
  System_String_o *v80; // x26
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x21
  uint32_t v83; // w0
  __int64 v84; // x19
  __int64 v85; // x19
  __int64 v86; // x19
  __int64 *v87; // x8
  __int64 v88; // x19
  __int64 v89; // x19
  __int64 v90; // x19
  System_Int32_array *v91; // x27
  __int64 *v92; // x8
  __int64 v93; // x19
  __int64 v94; // x19
  System_Int32_array *v95; // x27
  __int64 v96; // x19
  int v97; // w8
  System_String_o *v98; // x20
  __int64 v99; // x1
  __int64 v100; // x2
  System_Collections_Generic_List_int__o *v101; // x20
  __int64 v102; // x19
  unsigned __int64 v103; // x23
  System_String_o *v104; // x28
  __int64 v105; // x8
  __int64 v106; // x28
  unsigned __int64 v107; // x19
  __int64 v108; // x19
  intptr_t v109; // w19
  __int64 v110; // x19
  System_Type_o *v111; // x27
  System_String_o *v112; // x19
  __int64 v113; // x19
  __int64 v114; // x19
  __int64 v115; // x19
  __int64 v116; // x19
  __int64 v117; // x19
  System_String_o *debugComment; // x27
  unsigned __int64 v119; // x21
  System_String_o *v120; // x0
  int32_t v121; // w19
  int32_t v122; // w23
  System_String_o *v123; // x28
  int32_t v124; // w20
  System_String_o *v125; // x25
  __int64 v126; // x1
  __int64 v127; // x2
  ScriptBranchListViewItem_o *v128; // x0
  int32_t v129; // w6
  EventMissionProgressRequest_Argument_ProgressData_o *v130; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v131; // x19
  int32_t Index; // w0
  const MethodInfo *v133; // x1
  System_String_o *v134; // x0
  int32_t v135; // w23
  int32_t v136; // w24
  System_String_o *v137; // x19
  int32_t v138; // w22
  __int64 v139; // x1
  __int64 v140; // x2
  ScriptBranchListViewItem_o *v141; // x0
  int32_t v142; // w5
  int32_t v143; // w1
  EventMissionProgressRequest_Argument_ProgressData_o *v144; // x25
  signed __int64 size; // x8
  unsigned __int64 v146; // x19
  __int64 v147; // x0
  ScriptBranchListViewManager_o *v148; // x0
  const MethodInfo *v149; // x1
  const MethodInfo *v150; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v152; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v153; // [xsp+50h] [xbp-80h]
  int32_t v155; // [xsp+5Ch] [xbp-74h]
  int32_t branchType; // [xsp+5Ch] [xbp-74h]
  int32_t v157; // [xsp+60h] [xbp-70h]
  int32_t count; // [xsp+64h] [xbp-6Ch]
  System_String_o *v159; // [xsp+68h] [xbp-68h]
  int32_t checkType; // [xsp+68h] [xbp-68h]
  System_Int32_array *routeId; // [xsp+78h] [xbp-58h]
  System_RuntimeTypeHandle_o v162; // 0:w0.4

  v4 = list;
  if ( (byte_4218C68 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, list);
    sub_B0D8A4(&CondType_CheckType_var, v5);
    sub_B0D8A4(&CondType_CheckType_TypeInfo, v6);
    sub_B0D8A4(&System_Enum_TypeInfo, v7);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___get_Item__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_B0D8A4(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo, v23);
    sub_B0D8A4(&Method_System_Predicate_ScriptBranchListViewItem___ctor__, v24);
    sub_B0D8A4(&System_Predicate_ScriptBranchListViewItem__TypeInfo, v25);
    sub_B0D8A4(&ScriptBranchListViewItem_TypeInfo, v26);
    sub_B0D8A4(&string_TypeInfo, v27);
    sub_B0D8A4(&System_Type_TypeInfo, v28);
    sub_B0D8A4(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__, v29);
    sub_B0D8A4(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v30);
    sub_B0D8A4(&StringLiteral_16974/*"branchQuestClear"*/, v31);
    sub_B0D8A4(&StringLiteral_15920/*"] "*/, v32);
    sub_B0D8A4(&StringLiteral_16977/*"branchRouteSelectCount"*/, v33);
    sub_B0D8A4(&StringLiteral_120/*" - 1"*/, v34);
    sub_B0D8A4(&StringLiteral_16971/*"branchNotMaterial"*/, v35);
    sub_B0D8A4(&StringLiteral_20451/*"masterBranch"*/, v36);
    sub_B0D8A4(&StringLiteral_19460/*"ifClear"*/, v37);
    sub_B0D8A4(&StringLiteral_16976/*"branchRouteSelect"*/, v38);
    sub_B0D8A4(&StringLiteral_16970/*"branchNotHaveSvtEquip"*/, v39);
    sub_B0D8A4(&StringLiteral_21886/*"revivalBranch"*/, v40);
    sub_B0D8A4(&StringLiteral_16969/*"branchMaterial"*/, v41);
    sub_B0D8A4(&StringLiteral_16972/*"branchNotRouteSelect"*/, v42);
    sub_B0D8A4(&StringLiteral_16968/*"branchHaveSvtEquip"*/, v43);
    sub_B0D8A4(&StringLiteral_16598/*"bScene"*/, v44);
    sub_B0D8A4(&StringLiteral_22656/*"tRoute"*/, v45);
    sub_B0D8A4(&StringLiteral_16975/*"branchQuestNotClear"*/, v46);
    sub_B0D8A4(&StringLiteral_16973/*"branchNotRouteSelectCount"*/, v47);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v48);
    byte_4218C68 = 1;
  }
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo,
                                                                                                  list,
                                                                                                  isLine);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !v4 )
    goto LABEL_210;
  if ( v4->fields._size < 1 )
  {
LABEL_202:
    if ( v49 )
    {
      ListViewManager__CreateList((ListViewManager_o *)this, v49->fields._size, 0LL);
      LODWORD(size) = v49->fields._size;
      if ( (int)size < 1 )
      {
LABEL_209:
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        return;
      }
      v146 = 0LL;
      while ( 1 )
      {
        if ( v146 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !this->fields.itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList,
          v49->fields._items->m_Items[v146],
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        size = v49->fields._size;
        if ( (__int64)++v146 >= size )
          goto LABEL_209;
      }
    }
LABEL_210:
    sub_B0D97C(IsNullOrEmpty);
  }
  v53 = 0;
  v54 = 0LL;
  v152 = v4;
  v153 = v49;
  while ( 1 )
  {
    v67 = sub_B0D974(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v51, v52);
    ScriptBranchListViewManager___c__DisplayClass9_0___ctor(
      (ScriptBranchListViewManager___c__DisplayClass9_0_o *)v67,
      0LL);
    if ( v54 >= (unsigned int)v4->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !v67 )
      goto LABEL_210;
    v74 = (System_Int32_array **)v4->fields._items->m_Items[v54];
    *(_QWORD *)(v67 + 16) = v74;
    v75 = (__int64 *)(v67 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v67 + 16), v74, v68, v69, v70, v71, v72, v73);
    v76 = *(_QWORD *)(v67 + 16);
    if ( !v76 )
      goto LABEL_210;
    v77 = *v75;
    if ( !*(_DWORD *)(v76 + 24) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v78 = *(_DWORD *)(v76 + 24);
    v79 = *(System_String_o **)(*(_QWORD *)(v76 + 16) + 32LL);
    if ( v78 <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v80 = *(System_String_o **)(*(_QWORD *)(v77 + 16) + 40LL);
    *(_QWORD *)(v67 + 24) = 0xFFFFFFFFLL;
    if ( !v77 )
      goto LABEL_210;
    if ( *(int *)(v77 + 24) >= 7 )
      static_fields = (struct System_String_StaticFields *)(*(_QWORD *)(v77 + 16) + 80LL);
    else
      static_fields = string_TypeInfo->static_fields;
    Empty = static_fields->Empty;
    if ( !v80 )
      goto LABEL_187;
    v83 = PrivateImplementationDetails___ComputeStringHash_20827812(v80, 0LL);
    if ( v83 > 0x5D81BB60 )
      break;
    if ( v83 > 0x271B37FA )
    {
      if ( v83 > 0x4E750E71 )
      {
        if ( v83 != 1408301323 )
        {
          if ( v83 == 1568783200 )
          {
            routeId = 0LL;
            count = -1;
            v64 = 1;
            if ( System_String__op_Equality(v80, (System_String_o *)StringLiteral_21886/*"revivalBranch"*/, 0LL) )
              v65 = 4;
            else
              v65 = -1;
            goto LABEL_190;
          }
LABEL_187:
          routeId = 0LL;
          v64 = 1;
LABEL_188:
          v65 = -1;
LABEL_189:
          count = -1;
LABEL_190:
          v157 = -1;
          goto LABEL_191;
        }
        v92 = &StringLiteral_16972/*"branchNotRouteSelect"*/;
LABEL_168:
        if ( !System_String__op_Equality(v80, (System_String_o *)*v92, 0LL) )
          goto LABEL_187;
        IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_16976/*"branchRouteSelect"*/, 0LL);
        v115 = *v75;
        if ( (IsNullOrEmpty & 1) != 0 )
          v65 = 7;
        else
          v65 = 8;
        if ( !v115 )
          goto LABEL_210;
        if ( *(_DWORD *)(v115 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        *(_DWORD *)(v67 + 24) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v115 + 16) + 48LL), 0LL);
        IsNullOrEmpty = sub_B0D8BC(int___TypeInfo, 1LL);
        v116 = *(_QWORD *)(v67 + 16);
        routeId = (System_Int32_array *)IsNullOrEmpty;
        if ( !v116 )
          goto LABEL_210;
        if ( *(_DWORD *)(v116 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v116 + 16) + 56LL), 0LL);
        if ( !routeId )
          goto LABEL_210;
        if ( !routeId->max_length )
          goto LABEL_211;
        v157 = -1;
        v64 = 0;
        routeId->m_Items[1] = IsNullOrEmpty;
        count = 1;
        goto LABEL_191;
      }
      if ( v83 == 1053116368 )
      {
        IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_22656/*"tRoute"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v93 = *v75;
          if ( !*v75 )
            goto LABEL_210;
          if ( *(_DWORD *)(v93 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          *(_DWORD *)(v67 + 24) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v93 + 16) + 48LL), 0LL);
          IsNullOrEmpty = sub_B0D8BC(int___TypeInfo, 1LL);
          v94 = *(_QWORD *)(v67 + 16);
          if ( !v94 )
            goto LABEL_210;
          v95 = (System_Int32_array *)IsNullOrEmpty;
          if ( *(_DWORD *)(v94 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v94 + 16) + 56LL), 0LL);
          if ( !v95 )
            goto LABEL_210;
          if ( !v95->max_length )
            goto LABEL_211;
          routeId = v95;
          v95->m_Items[1] = IsNullOrEmpty;
          count = -1;
          v64 = 1;
          v65 = 10;
          goto LABEL_190;
        }
        goto LABEL_187;
      }
      if ( v83 != 1316294257 )
        goto LABEL_187;
      IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_16970/*"branchNotHaveSvtEquip"*/, 0LL);
      if ( (IsNullOrEmpty & 1) == 0 )
        goto LABEL_187;
      v86 = *v75;
      if ( !*v75 )
        goto LABEL_210;
      if ( *(_DWORD *)(v86 + 24) <= 2u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v157 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v86 + 16) + 48LL), 0LL);
      routeId = 0LL;
      count = -1;
      v64 = 1;
      v65 = 6;
    }
    else
    {
      v64 = 1;
      if ( v83 == 369362287 )
      {
        routeId = 0LL;
        count = -1;
        if ( System_String__op_Equality(v80, (System_String_o *)StringLiteral_16971/*"branchNotMaterial"*/, 0LL) )
          v65 = 1;
        else
          v65 = -1;
        goto LABEL_190;
      }
      if ( v83 == 651066131 )
      {
        IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_16598/*"bScene"*/, 0LL);
        if ( (IsNullOrEmpty & 1) == 0 )
          goto LABEL_187;
        v88 = *v75;
        if ( !*v75 )
          goto LABEL_210;
        if ( *(_DWORD *)(v88 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v88 + 16) + 48LL), 0LL);
        v89 = *(_QWORD *)(v67 + 16);
        *(_DWORD *)(v67 + 24) = IsNullOrEmpty;
        if ( !v89 )
          goto LABEL_210;
        if ( *(_DWORD *)(v89 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        *(_DWORD *)(v67 + 28) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v89 + 16) + 56LL), 0LL);
        IsNullOrEmpty = sub_B0D8BC(int___TypeInfo, 1LL);
        v90 = *(_QWORD *)(v67 + 16);
        if ( !v90 )
          goto LABEL_210;
        v91 = (System_Int32_array *)IsNullOrEmpty;
        if ( *(_DWORD *)(v90 + 24) <= 4u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v90 + 16) + 64LL), 0LL);
        if ( !v91 )
          goto LABEL_210;
        if ( !v91->max_length )
          goto LABEL_211;
        routeId = v91;
        v91->m_Items[1] = IsNullOrEmpty;
        v64 = 1;
        v65 = 11;
        goto LABEL_189;
      }
      if ( v83 != 656095226 )
      {
        routeId = 0LL;
        goto LABEL_188;
      }
      IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_16968/*"branchHaveSvtEquip"*/, 0LL);
      if ( (IsNullOrEmpty & 1) == 0 )
        goto LABEL_187;
      v84 = *v75;
      if ( !*v75 )
        goto LABEL_210;
      if ( *(_DWORD *)(v84 + 24) <= 2u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v157 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v84 + 16) + 48LL), 0LL);
      routeId = 0LL;
      count = -1;
      v64 = 1;
      v65 = 5;
    }
LABEL_191:
    checkType = v64;
    if ( isLine )
    {
      branchType = v65;
      debugComment = Empty;
      v119 = v54;
      v120 = System_String__Concat_43853316(
               (System_String_o *)StringLiteral_15681/*"["*/,
               v79,
               (System_String_o *)StringLiteral_15920/*"] "*/,
               v80,
               0LL);
      v121 = *(_DWORD *)(v67 + 24);
      v122 = *(_DWORD *)(v67 + 28);
      v123 = v79;
      v124 = v53;
      v125 = v120;
      v128 = (ScriptBranchListViewItem_o *)sub_B0D974(ScriptBranchListViewItem_TypeInfo, v126, v127);
      v129 = v122;
      v49 = v153;
      v130 = (EventMissionProgressRequest_Argument_ProgressData_o *)v128;
      ScriptBranchListViewItem___ctor(
        v128,
        v124,
        v125,
        v80,
        v123,
        v121,
        v129,
        v157,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v150);
      if ( !v153 )
        goto LABEL_210;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v153,
        v130,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
      v53 = v124 + 1;
      v54 = v119;
    }
    else
    {
      v131 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                        System_Predicate_ScriptBranchListViewItem__TypeInfo,
                                                                        v57,
                                                                        v58);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v131,
        (Il2CppObject *)v67,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_ScriptBranchListViewItem___ctor__);
      if ( !v49 )
        goto LABEL_210;
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v49,
                (System_Predicate_T__o *)v131,
                (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v134 = System_String__Concat_43849904(v80, (System_String_o *)StringLiteral_120/*" - 1"*/, 0LL);
        v135 = *(_DWORD *)(v67 + 24);
        v136 = *(_DWORD *)(v67 + 28);
        v137 = v134;
        v138 = v53 + 1;
        v141 = (ScriptBranchListViewItem_o *)sub_B0D974(ScriptBranchListViewItem_TypeInfo, v139, v140);
        v142 = v135;
        v49 = v153;
        v143 = v53;
        v144 = (EventMissionProgressRequest_Argument_ProgressData_o *)v141;
        ScriptBranchListViewItem___ctor(
          v141,
          v143,
          v137,
          v80,
          v79,
          v142,
          v136,
          v157,
          routeId,
          v65,
          count,
          checkType,
          Empty,
          v150);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v153,
          v144,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
        v53 = v138;
        v4 = v152;
      }
      else
      {
        if ( v49->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        IsNullOrEmpty = (__int64)v49->fields._items->m_Items[Index];
        if ( !IsNullOrEmpty )
          goto LABEL_210;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)IsNullOrEmpty, v133);
      }
    }
    if ( (__int64)++v54 >= v4->fields._size )
      goto LABEL_202;
  }
  if ( v83 <= 0xA9C7DB00 )
  {
    if ( v83 > 0x83820B5B )
    {
      if ( v83 == -1606428809 )
      {
        IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_19460/*"ifClear"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v113 = *v75;
          if ( !*v75 )
            goto LABEL_210;
          if ( *(_DWORD *)(v113 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v113 + 16) + 48LL), 0LL);
          v114 = *(_QWORD *)(v67 + 16);
          *(_DWORD *)(v67 + 24) = IsNullOrEmpty;
          if ( !v114 )
            goto LABEL_210;
          if ( *(_DWORD *)(v114 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          routeId = 0LL;
          *(_DWORD *)(v67 + 28) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v114 + 16) + 56LL), 0LL);
          count = -1;
          v64 = 1;
          v65 = 9;
          goto LABEL_190;
        }
        goto LABEL_187;
      }
      if ( v83 != -1446520064 )
        goto LABEL_187;
      routeId = 0LL;
      count = -1;
      v64 = 1;
      v65 = ~System_String__op_Equality(v80, (System_String_o *)StringLiteral_16969/*"branchMaterial"*/, 0LL) << 31 >> 31;
      goto LABEL_190;
    }
    if ( v83 != -2116001178 )
    {
      if ( v83 == -2088629413 )
      {
        IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_16975/*"branchQuestNotClear"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v85 = *v75;
          if ( !*v75 )
            goto LABEL_210;
          if ( *(_DWORD *)(v85 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v85 + 16) + 48LL), 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            IsNullOrEmpty = 0xFFFFFFFFLL;
          }
          else
          {
            v55 = *v75;
            if ( !*v75 )
              goto LABEL_210;
            if ( *(_DWORD *)(v55 + 24) <= 2u )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v55 + 16) + 48LL), 0LL);
          }
          v56 = *(_QWORD *)(v67 + 16);
          *(_DWORD *)(v67 + 24) = IsNullOrEmpty;
          if ( !v56 )
            goto LABEL_210;
          if ( *(_DWORD *)(v56 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v56 + 16) + 56LL), 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            v59 = 0;
          }
          else
          {
            v63 = *v75;
            if ( !*v75 )
              goto LABEL_210;
            if ( *(_DWORD *)(v63 + 24) <= 3u )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v59 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v63 + 16) + 56LL), 0LL);
          }
          routeId = 0LL;
          *(_DWORD *)(v67 + 28) = v59;
          count = -1;
          v64 = 1;
          v65 = 3;
          goto LABEL_190;
        }
      }
      goto LABEL_187;
    }
    v92 = &StringLiteral_16976/*"branchRouteSelect"*/;
    goto LABEL_168;
  }
  if ( v83 > 0xCB78578B )
  {
    if ( v83 == -460759494 )
    {
      IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_16974/*"branchQuestClear"*/, 0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v117 = *v75;
        if ( !*v75 )
          goto LABEL_210;
        if ( *(_DWORD *)(v117 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v117 + 16) + 48LL), 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          IsNullOrEmpty = 0xFFFFFFFFLL;
        }
        else
        {
          v60 = *v75;
          if ( !*v75 )
            goto LABEL_210;
          if ( *(_DWORD *)(v60 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v60 + 16) + 48LL), 0LL);
        }
        v61 = *(_QWORD *)(v67 + 16);
        *(_DWORD *)(v67 + 24) = IsNullOrEmpty;
        if ( !v61 )
          goto LABEL_210;
        if ( *(_DWORD *)(v61 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v61 + 16) + 56LL), 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v62 = 0;
        }
        else
        {
          v66 = *v75;
          if ( !*v75 )
            goto LABEL_210;
          if ( *(_DWORD *)(v66 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v62 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v66 + 16) + 56LL), 0LL);
        }
        routeId = 0LL;
        *(_DWORD *)(v67 + 28) = v62;
        count = -1;
        v64 = 1;
        v65 = 2;
        goto LABEL_190;
      }
      goto LABEL_187;
    }
    if ( v83 != -201512038 )
      goto LABEL_187;
    v87 = &StringLiteral_16973/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v83 != -1252550667 )
    {
      if ( v83 == -881305717 )
        System_String__op_Equality(v80, (System_String_o *)StringLiteral_20451/*"masterBranch"*/, 0LL);
      goto LABEL_187;
    }
    v87 = &StringLiteral_16977/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality(v80, (System_String_o *)*v87, 0LL) )
    goto LABEL_187;
  IsNullOrEmpty = System_String__op_Equality(v80, (System_String_o *)StringLiteral_16977/*"branchRouteSelectCount"*/, 0LL);
  v96 = *v75;
  if ( (IsNullOrEmpty & 1) != 0 )
    v97 = 7;
  else
    v97 = 8;
  v155 = v97;
  if ( !v96 )
    goto LABEL_210;
  v159 = v79;
  if ( *(_DWORD *)(v96 + 24) <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v98 = *(System_String_o **)(*(_QWORD *)(v96 + 16) + 48LL);
  IsNullOrEmpty = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !v98 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_String__Split(v98, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_DWORD *)(v67 + 24) = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
  v101 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v99, v100);
  System_Collections_Generic_List_int____ctor(
    v101,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v102 = *(_QWORD *)(v67 + 16);
  if ( !v102 )
    goto LABEL_210;
  v103 = v54;
  if ( *(_DWORD *)(v102 + 24) <= 3u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v104 = *(System_String_o **)(*(_QWORD *)(v102 + 16) + 56LL);
  IsNullOrEmpty = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !v104 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_String__Split(v104, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v105 = *(_QWORD *)(IsNullOrEmpty + 24);
  v106 = IsNullOrEmpty;
  if ( (int)v105 >= 1 )
  {
    v107 = 0LL;
    while ( v107 < (unsigned int)v105 )
    {
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v106 + 32 + 8 * v107), 0LL);
      if ( !v101 )
        goto LABEL_210;
      System_Collections_Generic_List_int___Add(
        v101,
        IsNullOrEmpty,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v105) = *(_DWORD *)(v106 + 24);
      if ( (__int64)++v107 >= (int)v105 )
        goto LABEL_143;
    }
LABEL_211:
    v147 = sub_B0D9A8(IsNullOrEmpty);
    sub_B0D948(v147, 0LL);
  }
LABEL_143:
  if ( !v101 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_Collections_Generic_List_int___ToArray(
                             v101,
                             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v108 = *v75;
  routeId = (System_Int32_array *)IsNullOrEmpty;
  if ( !*v75 )
    goto LABEL_210;
  v54 = v103;
  v49 = v153;
  v79 = v159;
  if ( *(_DWORD *)(v108 + 24) <= 4u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  count = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v108 + 16) + 64LL), 0LL);
  v109 = (int)CondType_CheckType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v162.fields.value = v109;
  IsNullOrEmpty = (__int64)System_Type__GetTypeFromHandle(v162, 0LL);
  v110 = *v75;
  if ( !*v75 )
    goto LABEL_210;
  v111 = (System_Type_o *)IsNullOrEmpty;
  if ( *(_DWORD *)(v110 + 24) <= 5u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v112 = *(System_String_o **)(*(_QWORD *)(v110 + 16) + 72LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  IsNullOrEmpty = (__int64)System_Enum__Parse(v111, v112, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v65 = v155;
  if ( *(Il2CppClass **)(*(_QWORD *)IsNullOrEmpty + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    v64 = *(_DWORD *)j_il2cpp_object_unbox_0(IsNullOrEmpty);
    goto LABEL_190;
  }
  sub_B0DC70(IsNullOrEmpty);
  ScriptBranchListViewManager__DestroyList(v148, v149);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4218C69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&ScriptBranchListViewItem_TypeInfo, v5);
    byte_4218C69 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ScriptBranchListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ScriptBranchListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ScriptBranchListViewItem_TypeInfo )
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
    sub_B0D97C(this);
  Index = ListViewObject__get_Index(obj, 0LL);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
    System_Action__Invoke(callbackFunc, 0LL);
}


void __fastcall ScriptBranchListViewManager__OnMoveEnd(ScriptBranchListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0
  System_Action_o *callbackFunc; // x0

  if ( (byte_4218C6C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218C6C = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4218C6B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_ScriptBranchListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4218C6B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptBranchListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ScriptBranchListViewObject__Init(
        (ScriptBranchListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_B0D840(
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
  if ( (byte_4218C6A & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_B0D8A4(&ScriptBranchListViewObject_TypeInfo, obj);
    byte_4218C6A = 1;
  }
  if ( !obj
    || (v6 = *(&ScriptBranchListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptBranchListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4218C65 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4218C65 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4218C67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4218C67 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4218C66 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4218C66 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  ScriptBranchListViewManager___c__DisplayClass9_0_o *v4; // x20
  struct System_Collections_Generic_List_string__o *data; // x21

  v4 = this;
  if ( (byte_421236F & 1) == 0 )
  {
    this = (ScriptBranchListViewManager___c__DisplayClass9_0_o *)sub_B0D8A4(
                                                                   &Method_System_Collections_Generic_List_string__get_Item__,
                                                                   o);
    byte_421236F = 1;
  }
  if ( !o )
    return 0;
  data = v4->fields.data;
  if ( !data )
    sub_B0D97C(this);
  if ( data->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           data->fields._items->m_Items[1],
           v4->fields.questId,
           v4->fields.questPhase,
           0LL);
}