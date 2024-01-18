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
  const MethodInfo *v51; // x1
  int32_t v52; // w25
  unsigned __int64 v53; // x28
  __int64 v54; // x19
  __int64 v55; // x19
  int32_t v56; // w0
  __int64 v57; // x19
  __int64 v58; // x19
  int32_t v59; // w0
  __int64 v60; // x19
  int v61; // w19
  int v62; // w27
  __int64 v63; // x19
  __int64 v64; // x24
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  __int64 *v72; // x27
  __int64 v73; // x20
  __int64 v74; // x19
  unsigned int v75; // w9
  System_String_o *v76; // x20
  System_String_o *v77; // x26
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x21
  uint32_t v80; // w0
  __int64 v81; // x19
  __int64 v82; // x19
  __int64 v83; // x19
  __int64 *v84; // x8
  __int64 v85; // x19
  __int64 v86; // x19
  __int64 v87; // x19
  System_Int32_array *v88; // x27
  __int64 *v89; // x8
  __int64 v90; // x19
  __int64 v91; // x19
  System_Int32_array *v92; // x27
  __int64 v93; // x19
  int v94; // w8
  System_String_o *v95; // x20
  System_Collections_Generic_List_int__o *v96; // x20
  __int64 v97; // x19
  unsigned __int64 v98; // x23
  System_String_o *v99; // x28
  __int64 v100; // x8
  __int64 v101; // x28
  unsigned __int64 v102; // x19
  __int64 v103; // x19
  intptr_t v104; // w19
  __int64 v105; // x19
  System_Type_o *v106; // x27
  System_String_o *v107; // x19
  __int64 v108; // x19
  __int64 v109; // x19
  __int64 v110; // x19
  __int64 v111; // x19
  __int64 v112; // x19
  System_String_o *debugComment; // x27
  unsigned __int64 v114; // x21
  System_String_o *v115; // x0
  int32_t v116; // w19
  int32_t v117; // w23
  System_String_o *v118; // x28
  int32_t v119; // w20
  System_String_o *v120; // x25
  ScriptBranchListViewItem_o *v121; // x0
  int32_t v122; // w6
  EventMissionProgressRequest_Argument_ProgressData_o *v123; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v124; // x19
  int32_t Index; // w0
  System_String_o *v126; // x0
  int32_t v127; // w23
  int32_t v128; // w24
  System_String_o *v129; // x19
  int32_t v130; // w22
  ScriptBranchListViewItem_o *v131; // x0
  int32_t v132; // w5
  int32_t v133; // w1
  EventMissionProgressRequest_Argument_ProgressData_o *v134; // x25
  signed __int64 size; // x8
  unsigned __int64 v136; // x19
  __int64 v137; // x0
  ScriptBranchListViewManager_o *v138; // x0
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v142; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v143; // [xsp+50h] [xbp-80h]
  int32_t v145; // [xsp+5Ch] [xbp-74h]
  int32_t branchType; // [xsp+5Ch] [xbp-74h]
  int32_t v147; // [xsp+60h] [xbp-70h]
  int32_t count; // [xsp+64h] [xbp-6Ch]
  System_String_o *v149; // [xsp+68h] [xbp-68h]
  int32_t checkType; // [xsp+68h] [xbp-68h]
  System_Int32_array *routeId; // [xsp+78h] [xbp-58h]
  System_RuntimeTypeHandle_o v152; // 0:w0.4

  v4 = list;
  if ( (byte_418BE45 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, list);
    sub_B2C35C(&CondType_CheckType_var, v5);
    sub_B2C35C(&CondType_CheckType_TypeInfo, v6);
    sub_B2C35C(&System_Enum_TypeInfo, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_string___get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_string___get_Item__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v21);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_B2C35C(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo, v23);
    sub_B2C35C(&Method_System_Predicate_ScriptBranchListViewItem___ctor__, v24);
    sub_B2C35C(&System_Predicate_ScriptBranchListViewItem__TypeInfo, v25);
    sub_B2C35C(&ScriptBranchListViewItem_TypeInfo, v26);
    sub_B2C35C(&string_TypeInfo, v27);
    sub_B2C35C(&System_Type_TypeInfo, v28);
    sub_B2C35C(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__, v29);
    sub_B2C35C(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo, v30);
    sub_B2C35C(&StringLiteral_16924/*"branchQuestClear"*/, v31);
    sub_B2C35C(&StringLiteral_15873/*"] "*/, v32);
    sub_B2C35C(&StringLiteral_16927/*"branchRouteSelectCount"*/, v33);
    sub_B2C35C(&StringLiteral_120/*" - 1"*/, v34);
    sub_B2C35C(&StringLiteral_16921/*"branchNotMaterial"*/, v35);
    sub_B2C35C(&StringLiteral_20388/*"masterBranch"*/, v36);
    sub_B2C35C(&StringLiteral_19398/*"ifClear"*/, v37);
    sub_B2C35C(&StringLiteral_16926/*"branchRouteSelect"*/, v38);
    sub_B2C35C(&StringLiteral_16920/*"branchNotHaveSvtEquip"*/, v39);
    sub_B2C35C(&StringLiteral_21815/*"revivalBranch"*/, v40);
    sub_B2C35C(&StringLiteral_16919/*"branchMaterial"*/, v41);
    sub_B2C35C(&StringLiteral_16922/*"branchNotRouteSelect"*/, v42);
    sub_B2C35C(&StringLiteral_16918/*"branchHaveSvtEquip"*/, v43);
    sub_B2C35C(&StringLiteral_16549/*"bScene"*/, v44);
    sub_B2C35C(&StringLiteral_22580/*"tRoute"*/, v45);
    sub_B2C35C(&StringLiteral_16925/*"branchQuestNotClear"*/, v46);
    sub_B2C35C(&StringLiteral_16923/*"branchNotRouteSelectCount"*/, v47);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v48);
    byte_418BE45 = 1;
  }
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
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
      v136 = 0LL;
      while ( 1 )
      {
        if ( v136 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !this->fields.itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList,
          v49->fields._items->m_Items[v136],
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        size = v49->fields._size;
        if ( (__int64)++v136 >= size )
          goto LABEL_209;
      }
    }
LABEL_210:
    sub_B2C434(IsNullOrEmpty, v51);
  }
  v52 = 0;
  v53 = 0LL;
  v142 = v4;
  v143 = v49;
  while ( 1 )
  {
    v64 = sub_B2C42C(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    ScriptBranchListViewManager___c__DisplayClass9_0___ctor(
      (ScriptBranchListViewManager___c__DisplayClass9_0_o *)v64,
      0LL);
    if ( v53 >= (unsigned int)v4->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !v64 )
      goto LABEL_210;
    v71 = (System_Int32_array **)v4->fields._items->m_Items[v53];
    *(_QWORD *)(v64 + 16) = v71;
    v72 = (__int64 *)(v64 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 16), v71, v65, v66, v67, v68, v69, v70);
    v73 = *(_QWORD *)(v64 + 16);
    if ( !v73 )
      goto LABEL_210;
    v74 = *v72;
    if ( !*(_DWORD *)(v73 + 24) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v75 = *(_DWORD *)(v73 + 24);
    v76 = *(System_String_o **)(*(_QWORD *)(v73 + 16) + 32LL);
    if ( v75 <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v77 = *(System_String_o **)(*(_QWORD *)(v74 + 16) + 40LL);
    *(_QWORD *)(v64 + 24) = 0xFFFFFFFFLL;
    if ( !v74 )
      goto LABEL_210;
    if ( *(int *)(v74 + 24) >= 7 )
      static_fields = (struct System_String_StaticFields *)(*(_QWORD *)(v74 + 16) + 80LL);
    else
      static_fields = string_TypeInfo->static_fields;
    Empty = static_fields->Empty;
    if ( !v77 )
      goto LABEL_187;
    v80 = PrivateImplementationDetails___ComputeStringHash_21099092(v77, 0LL);
    if ( v80 > 0x5D81BB60 )
      break;
    if ( v80 > 0x271B37FA )
    {
      if ( v80 > 0x4E750E71 )
      {
        if ( v80 != 1408301323 )
        {
          if ( v80 == 1568783200 )
          {
            routeId = 0LL;
            count = -1;
            v61 = 1;
            if ( System_String__op_Equality(v77, (System_String_o *)StringLiteral_21815/*"revivalBranch"*/, 0LL) )
              v62 = 4;
            else
              v62 = -1;
            goto LABEL_190;
          }
LABEL_187:
          routeId = 0LL;
          v61 = 1;
LABEL_188:
          v62 = -1;
LABEL_189:
          count = -1;
LABEL_190:
          v147 = -1;
          goto LABEL_191;
        }
        v89 = &StringLiteral_16922/*"branchNotRouteSelect"*/;
LABEL_168:
        if ( !System_String__op_Equality(v77, (System_String_o *)*v89, 0LL) )
          goto LABEL_187;
        IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_16926/*"branchRouteSelect"*/, 0LL);
        v110 = *v72;
        if ( (IsNullOrEmpty & 1) != 0 )
          v62 = 7;
        else
          v62 = 8;
        if ( !v110 )
          goto LABEL_210;
        if ( *(_DWORD *)(v110 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        *(_DWORD *)(v64 + 24) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v110 + 16) + 48LL), 0LL);
        IsNullOrEmpty = sub_B2C374(int___TypeInfo, 1LL);
        v111 = *(_QWORD *)(v64 + 16);
        routeId = (System_Int32_array *)IsNullOrEmpty;
        if ( !v111 )
          goto LABEL_210;
        if ( *(_DWORD *)(v111 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v111 + 16) + 56LL), 0LL);
        if ( !routeId )
          goto LABEL_210;
        if ( !routeId->max_length )
          goto LABEL_211;
        v147 = -1;
        v61 = 0;
        routeId->m_Items[1] = IsNullOrEmpty;
        count = 1;
        goto LABEL_191;
      }
      if ( v80 == 1053116368 )
      {
        IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_22580/*"tRoute"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v90 = *v72;
          if ( !*v72 )
            goto LABEL_210;
          if ( *(_DWORD *)(v90 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          *(_DWORD *)(v64 + 24) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v90 + 16) + 48LL), 0LL);
          IsNullOrEmpty = sub_B2C374(int___TypeInfo, 1LL);
          v91 = *(_QWORD *)(v64 + 16);
          if ( !v91 )
            goto LABEL_210;
          v92 = (System_Int32_array *)IsNullOrEmpty;
          if ( *(_DWORD *)(v91 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v91 + 16) + 56LL), 0LL);
          if ( !v92 )
            goto LABEL_210;
          if ( !v92->max_length )
            goto LABEL_211;
          routeId = v92;
          v92->m_Items[1] = IsNullOrEmpty;
          count = -1;
          v61 = 1;
          v62 = 10;
          goto LABEL_190;
        }
        goto LABEL_187;
      }
      if ( v80 != 1316294257 )
        goto LABEL_187;
      IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_16920/*"branchNotHaveSvtEquip"*/, 0LL);
      if ( (IsNullOrEmpty & 1) == 0 )
        goto LABEL_187;
      v83 = *v72;
      if ( !*v72 )
        goto LABEL_210;
      if ( *(_DWORD *)(v83 + 24) <= 2u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v147 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v83 + 16) + 48LL), 0LL);
      routeId = 0LL;
      count = -1;
      v61 = 1;
      v62 = 6;
    }
    else
    {
      v61 = 1;
      if ( v80 == 369362287 )
      {
        routeId = 0LL;
        count = -1;
        if ( System_String__op_Equality(v77, (System_String_o *)StringLiteral_16921/*"branchNotMaterial"*/, 0LL) )
          v62 = 1;
        else
          v62 = -1;
        goto LABEL_190;
      }
      if ( v80 == 651066131 )
      {
        IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_16549/*"bScene"*/, 0LL);
        if ( (IsNullOrEmpty & 1) == 0 )
          goto LABEL_187;
        v85 = *v72;
        if ( !*v72 )
          goto LABEL_210;
        if ( *(_DWORD *)(v85 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v85 + 16) + 48LL), 0LL);
        v86 = *(_QWORD *)(v64 + 16);
        *(_DWORD *)(v64 + 24) = IsNullOrEmpty;
        if ( !v86 )
          goto LABEL_210;
        if ( *(_DWORD *)(v86 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        *(_DWORD *)(v64 + 28) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v86 + 16) + 56LL), 0LL);
        IsNullOrEmpty = sub_B2C374(int___TypeInfo, 1LL);
        v87 = *(_QWORD *)(v64 + 16);
        if ( !v87 )
          goto LABEL_210;
        v88 = (System_Int32_array *)IsNullOrEmpty;
        if ( *(_DWORD *)(v87 + 24) <= 4u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v87 + 16) + 64LL), 0LL);
        if ( !v88 )
          goto LABEL_210;
        if ( !v88->max_length )
          goto LABEL_211;
        routeId = v88;
        v88->m_Items[1] = IsNullOrEmpty;
        v61 = 1;
        v62 = 11;
        goto LABEL_189;
      }
      if ( v80 != 656095226 )
      {
        routeId = 0LL;
        goto LABEL_188;
      }
      IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_16918/*"branchHaveSvtEquip"*/, 0LL);
      if ( (IsNullOrEmpty & 1) == 0 )
        goto LABEL_187;
      v81 = *v72;
      if ( !*v72 )
        goto LABEL_210;
      if ( *(_DWORD *)(v81 + 24) <= 2u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v147 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v81 + 16) + 48LL), 0LL);
      routeId = 0LL;
      count = -1;
      v61 = 1;
      v62 = 5;
    }
LABEL_191:
    checkType = v61;
    if ( isLine )
    {
      branchType = v62;
      debugComment = Empty;
      v114 = v53;
      v115 = System_String__Concat_44308944(
               (System_String_o *)StringLiteral_15634/*"["*/,
               v76,
               (System_String_o *)StringLiteral_15873/*"] "*/,
               v77,
               0LL);
      v116 = *(_DWORD *)(v64 + 24);
      v117 = *(_DWORD *)(v64 + 28);
      v118 = v76;
      v119 = v52;
      v120 = v115;
      v121 = (ScriptBranchListViewItem_o *)sub_B2C42C(ScriptBranchListViewItem_TypeInfo);
      v122 = v117;
      v49 = v143;
      v123 = (EventMissionProgressRequest_Argument_ProgressData_o *)v121;
      ScriptBranchListViewItem___ctor(
        v121,
        v119,
        v120,
        v77,
        v118,
        v116,
        v122,
        v147,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v140);
      if ( !v143 )
        goto LABEL_210;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v143,
        v123,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
      v52 = v119 + 1;
      v53 = v114;
    }
    else
    {
      v124 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v124,
        (Il2CppObject *)v64,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_ScriptBranchListViewItem___ctor__);
      if ( !v49 )
        goto LABEL_210;
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v49,
                (System_Predicate_T__o *)v124,
                (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v126 = System_String__Concat_44305532(v77, (System_String_o *)StringLiteral_120/*" - 1"*/, 0LL);
        v127 = *(_DWORD *)(v64 + 24);
        v128 = *(_DWORD *)(v64 + 28);
        v129 = v126;
        v130 = v52 + 1;
        v131 = (ScriptBranchListViewItem_o *)sub_B2C42C(ScriptBranchListViewItem_TypeInfo);
        v132 = v127;
        v49 = v143;
        v133 = v52;
        v134 = (EventMissionProgressRequest_Argument_ProgressData_o *)v131;
        ScriptBranchListViewItem___ctor(
          v131,
          v133,
          v129,
          v77,
          v76,
          v132,
          v128,
          v147,
          routeId,
          v62,
          count,
          checkType,
          Empty,
          v140);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v143,
          v134,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
        v52 = v130;
        v4 = v142;
      }
      else
      {
        if ( v49->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        IsNullOrEmpty = (__int64)v49->fields._items->m_Items[Index];
        if ( !IsNullOrEmpty )
          goto LABEL_210;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)IsNullOrEmpty, v51);
      }
    }
    if ( (__int64)++v53 >= v4->fields._size )
      goto LABEL_202;
  }
  if ( v80 <= 0xA9C7DB00 )
  {
    if ( v80 > 0x83820B5B )
    {
      if ( v80 == -1606428809 )
      {
        IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_19398/*"ifClear"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v108 = *v72;
          if ( !*v72 )
            goto LABEL_210;
          if ( *(_DWORD *)(v108 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v108 + 16) + 48LL), 0LL);
          v109 = *(_QWORD *)(v64 + 16);
          *(_DWORD *)(v64 + 24) = IsNullOrEmpty;
          if ( !v109 )
            goto LABEL_210;
          if ( *(_DWORD *)(v109 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          routeId = 0LL;
          *(_DWORD *)(v64 + 28) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v109 + 16) + 56LL), 0LL);
          count = -1;
          v61 = 1;
          v62 = 9;
          goto LABEL_190;
        }
        goto LABEL_187;
      }
      if ( v80 != -1446520064 )
        goto LABEL_187;
      routeId = 0LL;
      count = -1;
      v61 = 1;
      v62 = ~System_String__op_Equality(v77, (System_String_o *)StringLiteral_16919/*"branchMaterial"*/, 0LL) << 31 >> 31;
      goto LABEL_190;
    }
    if ( v80 != -2116001178 )
    {
      if ( v80 == -2088629413 )
      {
        IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_16925/*"branchQuestNotClear"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v82 = *v72;
          if ( !*v72 )
            goto LABEL_210;
          if ( *(_DWORD *)(v82 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v82 + 16) + 48LL), 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            IsNullOrEmpty = 0xFFFFFFFFLL;
          }
          else
          {
            v54 = *v72;
            if ( !*v72 )
              goto LABEL_210;
            if ( *(_DWORD *)(v54 + 24) <= 2u )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v54 + 16) + 48LL), 0LL);
          }
          v55 = *(_QWORD *)(v64 + 16);
          *(_DWORD *)(v64 + 24) = IsNullOrEmpty;
          if ( !v55 )
            goto LABEL_210;
          if ( *(_DWORD *)(v55 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v55 + 16) + 56LL), 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            v56 = 0;
          }
          else
          {
            v60 = *v72;
            if ( !*v72 )
              goto LABEL_210;
            if ( *(_DWORD *)(v60 + 24) <= 3u )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v56 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v60 + 16) + 56LL), 0LL);
          }
          routeId = 0LL;
          *(_DWORD *)(v64 + 28) = v56;
          count = -1;
          v61 = 1;
          v62 = 3;
          goto LABEL_190;
        }
      }
      goto LABEL_187;
    }
    v89 = &StringLiteral_16926/*"branchRouteSelect"*/;
    goto LABEL_168;
  }
  if ( v80 > 0xCB78578B )
  {
    if ( v80 == -460759494 )
    {
      IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_16924/*"branchQuestClear"*/, 0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v112 = *v72;
        if ( !*v72 )
          goto LABEL_210;
        if ( *(_DWORD *)(v112 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v112 + 16) + 48LL), 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          IsNullOrEmpty = 0xFFFFFFFFLL;
        }
        else
        {
          v57 = *v72;
          if ( !*v72 )
            goto LABEL_210;
          if ( *(_DWORD *)(v57 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v57 + 16) + 48LL), 0LL);
        }
        v58 = *(_QWORD *)(v64 + 16);
        *(_DWORD *)(v64 + 24) = IsNullOrEmpty;
        if ( !v58 )
          goto LABEL_210;
        if ( *(_DWORD *)(v58 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v58 + 16) + 56LL), 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v59 = 0;
        }
        else
        {
          v63 = *v72;
          if ( !*v72 )
            goto LABEL_210;
          if ( *(_DWORD *)(v63 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v59 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v63 + 16) + 56LL), 0LL);
        }
        routeId = 0LL;
        *(_DWORD *)(v64 + 28) = v59;
        count = -1;
        v61 = 1;
        v62 = 2;
        goto LABEL_190;
      }
      goto LABEL_187;
    }
    if ( v80 != -201512038 )
      goto LABEL_187;
    v84 = &StringLiteral_16923/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v80 != -1252550667 )
    {
      if ( v80 == -881305717 )
        System_String__op_Equality(v77, (System_String_o *)StringLiteral_20388/*"masterBranch"*/, 0LL);
      goto LABEL_187;
    }
    v84 = &StringLiteral_16927/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality(v77, (System_String_o *)*v84, 0LL) )
    goto LABEL_187;
  IsNullOrEmpty = System_String__op_Equality(v77, (System_String_o *)StringLiteral_16927/*"branchRouteSelectCount"*/, 0LL);
  v93 = *v72;
  if ( (IsNullOrEmpty & 1) != 0 )
    v94 = 7;
  else
    v94 = 8;
  v145 = v94;
  if ( !v93 )
    goto LABEL_210;
  v149 = v76;
  if ( *(_DWORD *)(v93 + 24) <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v95 = *(System_String_o **)(*(_QWORD *)(v93 + 16) + 48LL);
  IsNullOrEmpty = sub_B2C374(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v51 = (const MethodInfo *)IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !v95 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_String__Split(v95, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_DWORD *)(v64 + 24) = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
  v96 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v96,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v97 = *(_QWORD *)(v64 + 16);
  if ( !v97 )
    goto LABEL_210;
  v98 = v53;
  if ( *(_DWORD *)(v97 + 24) <= 3u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v99 = *(System_String_o **)(*(_QWORD *)(v97 + 16) + 56LL);
  IsNullOrEmpty = sub_B2C374(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v51 = (const MethodInfo *)IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !v99 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_String__Split(v99, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v100 = *(_QWORD *)(IsNullOrEmpty + 24);
  v101 = IsNullOrEmpty;
  if ( (int)v100 >= 1 )
  {
    v102 = 0LL;
    while ( v102 < (unsigned int)v100 )
    {
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v101 + 32 + 8 * v102), 0LL);
      if ( !v96 )
        goto LABEL_210;
      System_Collections_Generic_List_int___Add(
        v96,
        IsNullOrEmpty,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v100) = *(_DWORD *)(v101 + 24);
      if ( (__int64)++v102 >= (int)v100 )
        goto LABEL_143;
    }
LABEL_211:
    v137 = sub_B2C460(IsNullOrEmpty);
    sub_B2C400(v137, 0LL);
  }
LABEL_143:
  if ( !v96 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_Collections_Generic_List_int___ToArray(
                             v96,
                             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v103 = *v72;
  routeId = (System_Int32_array *)IsNullOrEmpty;
  if ( !*v72 )
    goto LABEL_210;
  v53 = v98;
  v49 = v143;
  v76 = v149;
  if ( *(_DWORD *)(v103 + 24) <= 4u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  count = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v103 + 16) + 64LL), 0LL);
  v104 = (int)CondType_CheckType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v152.fields.value = v104;
  IsNullOrEmpty = (__int64)System_Type__GetTypeFromHandle(v152, 0LL);
  v105 = *v72;
  if ( !*v72 )
    goto LABEL_210;
  v106 = (System_Type_o *)IsNullOrEmpty;
  if ( *(_DWORD *)(v105 + 24) <= 5u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v107 = *(System_String_o **)(*(_QWORD *)(v105 + 16) + 72LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  IsNullOrEmpty = (__int64)System_Enum__Parse(v106, v107, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v62 = v145;
  if ( *(Il2CppClass **)(*(_QWORD *)IsNullOrEmpty + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    v61 = *(_DWORD *)j_il2cpp_object_unbox_0(IsNullOrEmpty);
    goto LABEL_190;
  }
  sub_B2C728(IsNullOrEmpty);
  ScriptBranchListViewManager__DestroyList(v138, v139);
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

  if ( (byte_418BE46 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&ScriptBranchListViewItem_TypeInfo, v5);
    byte_418BE46 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, 0LL);
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
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  System_Action_o *callbackFunc; // x0

  if ( (byte_418BE49 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BE49 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418BE48 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ScriptBranchListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418BE48 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptBranchListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ScriptBranchListViewObject__Init(
        (ScriptBranchListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_B2C2F8(
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
  if ( (byte_418BE47 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_B2C35C(&ScriptBranchListViewObject_TypeInfo, obj);
    byte_418BE47 = 1;
  }
  if ( !obj
    || (v6 = *(&ScriptBranchListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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

  if ( (byte_418BE42 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418BE42 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418BE44 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418BE44 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_418BE43 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418BE43 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  if ( (byte_4185523 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager___c__DisplayClass9_0_o *)sub_B2C35C(
                                                                   &Method_System_Collections_Generic_List_string__get_Item__,
                                                                   o);
    byte_4185523 = 1;
  }
  if ( !o )
    return 0;
  data = v4->fields.data;
  if ( !data )
    sub_B2C434(this, o);
  if ( data->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           data->fields._items->m_Items[1],
           v4->fields.questId,
           v4->fields.questPhase,
           0LL);
}