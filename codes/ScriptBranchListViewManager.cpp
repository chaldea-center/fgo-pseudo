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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x23
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w25
  unsigned __int64 v9; // x28
  __int64 v10; // x19
  __int64 v11; // x19
  int32_t v12; // w0
  __int64 v13; // x19
  __int64 v14; // x19
  int32_t v15; // w0
  __int64 v16; // x19
  int v17; // w19
  int v18; // w27
  __int64 v19; // x19
  __int64 v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  __int64 *v28; // x27
  __int64 v29; // x20
  __int64 v30; // x19
  unsigned int v31; // w9
  System_String_o *v32; // x20
  System_String_o *v33; // x26
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x21
  uint32_t v36; // w0
  __int64 v37; // x19
  __int64 v38; // x19
  __int64 v39; // x19
  __int64 *v40; // x8
  __int64 v41; // x19
  __int64 v42; // x19
  __int64 v43; // x19
  System_Int32_array *v44; // x27
  __int64 *v45; // x8
  __int64 v46; // x19
  __int64 v47; // x19
  System_Int32_array *v48; // x27
  __int64 v49; // x19
  int v50; // w8
  System_String_o *v51; // x20
  System_Collections_Generic_List_int__o *v52; // x20
  __int64 v53; // x19
  unsigned __int64 v54; // x23
  System_String_o *v55; // x28
  __int64 v56; // x8
  __int64 v57; // x28
  unsigned __int64 v58; // x19
  __int64 v59; // x19
  intptr_t v60; // w19
  __int64 v61; // x19
  System_Type_o *v62; // x27
  System_String_o *v63; // x19
  __int64 v64; // x19
  __int64 v65; // x19
  __int64 v66; // x19
  __int64 v67; // x19
  __int64 v68; // x19
  System_String_o *debugComment; // x27
  unsigned __int64 v70; // x21
  System_String_o *v71; // x0
  int32_t v72; // w19
  int32_t v73; // w23
  System_String_o *v74; // x28
  int32_t v75; // w20
  System_String_o *v76; // x25
  ScriptBranchListViewItem_o *v77; // x0
  int32_t v78; // w6
  EventMissionProgressRequest_Argument_ProgressData_o *v79; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v80; // x19
  int32_t Index; // w0
  System_String_o *v82; // x0
  int32_t v83; // w23
  int32_t v84; // w24
  System_String_o *v85; // x19
  int32_t v86; // w22
  ScriptBranchListViewItem_o *v87; // x0
  int32_t v88; // w5
  int32_t v89; // w1
  EventMissionProgressRequest_Argument_ProgressData_o *v90; // x25
  signed __int64 size; // x8
  unsigned __int64 v92; // x19
  __int64 v93; // x0
  ScriptBranchListViewManager_o *v94; // x0
  const MethodInfo *v95; // x1
  const MethodInfo *v96; // [xsp+28h] [xbp-A8h]
  System_Collections_Generic_List_List_string___o *v98; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // [xsp+50h] [xbp-80h]
  int32_t v101; // [xsp+5Ch] [xbp-74h]
  int32_t branchType; // [xsp+5Ch] [xbp-74h]
  int32_t v103; // [xsp+60h] [xbp-70h]
  int32_t count; // [xsp+64h] [xbp-6Ch]
  System_String_o *v105; // [xsp+68h] [xbp-68h]
  int32_t checkType; // [xsp+68h] [xbp-68h]
  System_Int32_array *routeId; // [xsp+78h] [xbp-58h]
  System_RuntimeTypeHandle_o v108; // 0:w0.4

  if ( (byte_438FB4A & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&CondType_CheckType_var);
    sub_B775C4(&CondType_CheckType_TypeInfo);
    sub_B775C4(&System_Enum_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewItem__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
    sub_B775C4(&Method_System_Predicate_ScriptBranchListViewItem___ctor__);
    sub_B775C4(&System_Predicate_ScriptBranchListViewItem__TypeInfo);
    sub_B775C4(&ScriptBranchListViewItem_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&System_Type_TypeInfo);
    sub_B775C4(&Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__);
    sub_B775C4(&ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    sub_B775C4(&StringLiteral_17260/*"branchQuestClear"*/);
    sub_B775C4(&StringLiteral_16165/*"] "*/);
    sub_B775C4(&StringLiteral_17263/*"branchRouteSelectCount"*/);
    sub_B775C4(&StringLiteral_121/*" - 1"*/);
    sub_B775C4(&StringLiteral_17257/*"branchNotMaterial"*/);
    sub_B775C4(&StringLiteral_20804/*"masterBranch"*/);
    sub_B775C4(&StringLiteral_19792/*"ifClear"*/);
    sub_B775C4(&StringLiteral_17262/*"branchRouteSelect"*/);
    sub_B775C4(&StringLiteral_17256/*"branchNotHaveSvtEquip"*/);
    sub_B775C4(&StringLiteral_22280/*"revivalBranch"*/);
    sub_B775C4(&StringLiteral_17255/*"branchMaterial"*/);
    sub_B775C4(&StringLiteral_17258/*"branchNotRouteSelect"*/);
    sub_B775C4(&StringLiteral_17254/*"branchHaveSvtEquip"*/);
    sub_B775C4(&StringLiteral_16875/*"bScene"*/);
    sub_B775C4(&StringLiteral_23057/*"tRoute"*/);
    sub_B775C4(&StringLiteral_17261/*"branchQuestNotClear"*/);
    sub_B775C4(&StringLiteral_17259/*"branchNotRouteSelectCount"*/);
    sub_B775C4(&StringLiteral_15925/*"["*/);
    byte_438FB4A = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ScriptBranchListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem___ctor__);
  if ( !list )
    goto LABEL_210;
  if ( list->fields._size < 1 )
  {
LABEL_202:
    if ( v5 )
    {
      ListViewManager__CreateList((ListViewManager_o *)this, v5->fields._size, 0LL);
      LODWORD(size) = v5->fields._size;
      if ( (int)size < 1 )
      {
LABEL_209:
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        return;
      }
      v92 = 0LL;
      while ( 1 )
      {
        if ( v92 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( !this->fields.itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList,
          v5->fields._items->m_Items[v92],
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        size = v5->fields._size;
        if ( (__int64)++v92 >= size )
          goto LABEL_209;
      }
    }
LABEL_210:
    sub_B7769C(IsNullOrEmpty, v7);
  }
  v8 = 0;
  v9 = 0LL;
  v98 = list;
  v99 = v5;
  while ( 1 )
  {
    v20 = sub_B77694(ScriptBranchListViewManager___c__DisplayClass9_0_TypeInfo);
    ScriptBranchListViewManager___c__DisplayClass9_0___ctor(
      (ScriptBranchListViewManager___c__DisplayClass9_0_o *)v20,
      0LL);
    if ( v9 >= (unsigned int)list->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( !v20 )
      goto LABEL_210;
    v27 = (System_Int32_array **)list->fields._items->m_Items[v9];
    *(_QWORD *)(v20 + 16) = v27;
    v28 = (__int64 *)(v20 + 16);
    sub_B77560((BattleServantConfConponent_o *)(v20 + 16), v27, v21, v22, v23, v24, v25, v26);
    v29 = *(_QWORD *)(v20 + 16);
    if ( !v29 )
      goto LABEL_210;
    v30 = *v28;
    if ( !*(_DWORD *)(v29 + 24) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v31 = *(_DWORD *)(v29 + 24);
    v32 = *(System_String_o **)(*(_QWORD *)(v29 + 16) + 32LL);
    if ( v31 <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v33 = *(System_String_o **)(*(_QWORD *)(v30 + 16) + 40LL);
    *(_QWORD *)(v20 + 24) = 0xFFFFFFFFLL;
    if ( !v30 )
      goto LABEL_210;
    if ( *(int *)(v30 + 24) >= 7 )
      static_fields = (struct System_String_StaticFields *)(*(_QWORD *)(v30 + 16) + 80LL);
    else
      static_fields = string_TypeInfo->static_fields;
    Empty = static_fields->Empty;
    if ( !v33 )
      goto LABEL_187;
    v36 = PrivateImplementationDetails___ComputeStringHash_28503548(v33, 0LL);
    if ( v36 > 0x5D81BB60 )
      break;
    if ( v36 > 0x271B37FA )
    {
      if ( v36 > 0x4E750E71 )
      {
        if ( v36 != 1408301323 )
        {
          if ( v36 == 1568783200 )
          {
            routeId = 0LL;
            count = -1;
            v17 = 1;
            if ( System_String__op_Equality(v33, (System_String_o *)StringLiteral_22280/*"revivalBranch"*/, 0LL) )
              v18 = 4;
            else
              v18 = -1;
            goto LABEL_190;
          }
LABEL_187:
          routeId = 0LL;
          v17 = 1;
LABEL_188:
          v18 = -1;
LABEL_189:
          count = -1;
LABEL_190:
          v103 = -1;
          goto LABEL_191;
        }
        v45 = &StringLiteral_17258/*"branchNotRouteSelect"*/;
LABEL_168:
        if ( !System_String__op_Equality(v33, (System_String_o *)*v45, 0LL) )
          goto LABEL_187;
        IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_17262/*"branchRouteSelect"*/, 0LL);
        v66 = *v28;
        if ( (IsNullOrEmpty & 1) != 0 )
          v18 = 7;
        else
          v18 = 8;
        if ( !v66 )
          goto LABEL_210;
        if ( *(_DWORD *)(v66 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        *(_DWORD *)(v20 + 24) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v66 + 16) + 48LL), 0LL);
        IsNullOrEmpty = sub_B775DC(int___TypeInfo, 1LL);
        v67 = *(_QWORD *)(v20 + 16);
        routeId = (System_Int32_array *)IsNullOrEmpty;
        if ( !v67 )
          goto LABEL_210;
        if ( *(_DWORD *)(v67 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v67 + 16) + 56LL), 0LL);
        if ( !routeId )
          goto LABEL_210;
        if ( !routeId->max_length )
          goto LABEL_211;
        v103 = -1;
        v17 = 0;
        routeId->m_Items[1] = IsNullOrEmpty;
        count = 1;
        goto LABEL_191;
      }
      if ( v36 == 1053116368 )
      {
        IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_23057/*"tRoute"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v46 = *v28;
          if ( !*v28 )
            goto LABEL_210;
          if ( *(_DWORD *)(v46 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          *(_DWORD *)(v20 + 24) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v46 + 16) + 48LL), 0LL);
          IsNullOrEmpty = sub_B775DC(int___TypeInfo, 1LL);
          v47 = *(_QWORD *)(v20 + 16);
          if ( !v47 )
            goto LABEL_210;
          v48 = (System_Int32_array *)IsNullOrEmpty;
          if ( *(_DWORD *)(v47 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v47 + 16) + 56LL), 0LL);
          if ( !v48 )
            goto LABEL_210;
          if ( !v48->max_length )
            goto LABEL_211;
          routeId = v48;
          v48->m_Items[1] = IsNullOrEmpty;
          count = -1;
          v17 = 1;
          v18 = 10;
          goto LABEL_190;
        }
        goto LABEL_187;
      }
      if ( v36 != 1316294257 )
        goto LABEL_187;
      IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_17256/*"branchNotHaveSvtEquip"*/, 0LL);
      if ( (IsNullOrEmpty & 1) == 0 )
        goto LABEL_187;
      v39 = *v28;
      if ( !*v28 )
        goto LABEL_210;
      if ( *(_DWORD *)(v39 + 24) <= 2u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v103 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v39 + 16) + 48LL), 0LL);
      routeId = 0LL;
      count = -1;
      v17 = 1;
      v18 = 6;
    }
    else
    {
      v17 = 1;
      if ( v36 == 369362287 )
      {
        routeId = 0LL;
        count = -1;
        if ( System_String__op_Equality(v33, (System_String_o *)StringLiteral_17257/*"branchNotMaterial"*/, 0LL) )
          v18 = 1;
        else
          v18 = -1;
        goto LABEL_190;
      }
      if ( v36 == 651066131 )
      {
        IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_16875/*"bScene"*/, 0LL);
        if ( (IsNullOrEmpty & 1) == 0 )
          goto LABEL_187;
        v41 = *v28;
        if ( !*v28 )
          goto LABEL_210;
        if ( *(_DWORD *)(v41 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v41 + 16) + 48LL), 0LL);
        v42 = *(_QWORD *)(v20 + 16);
        *(_DWORD *)(v20 + 24) = IsNullOrEmpty;
        if ( !v42 )
          goto LABEL_210;
        if ( *(_DWORD *)(v42 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        *(_DWORD *)(v20 + 28) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v42 + 16) + 56LL), 0LL);
        IsNullOrEmpty = sub_B775DC(int___TypeInfo, 1LL);
        v43 = *(_QWORD *)(v20 + 16);
        if ( !v43 )
          goto LABEL_210;
        v44 = (System_Int32_array *)IsNullOrEmpty;
        if ( *(_DWORD *)(v43 + 24) <= 4u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v43 + 16) + 64LL), 0LL);
        if ( !v44 )
          goto LABEL_210;
        if ( !v44->max_length )
          goto LABEL_211;
        routeId = v44;
        v44->m_Items[1] = IsNullOrEmpty;
        v17 = 1;
        v18 = 11;
        goto LABEL_189;
      }
      if ( v36 != 656095226 )
      {
        routeId = 0LL;
        goto LABEL_188;
      }
      IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_17254/*"branchHaveSvtEquip"*/, 0LL);
      if ( (IsNullOrEmpty & 1) == 0 )
        goto LABEL_187;
      v37 = *v28;
      if ( !*v28 )
        goto LABEL_210;
      if ( *(_DWORD *)(v37 + 24) <= 2u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v103 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v37 + 16) + 48LL), 0LL);
      routeId = 0LL;
      count = -1;
      v17 = 1;
      v18 = 5;
    }
LABEL_191:
    checkType = v17;
    if ( isLine )
    {
      branchType = v18;
      debugComment = Empty;
      v70 = v9;
      v71 = System_String__Concat_44905348(
              (System_String_o *)StringLiteral_15925/*"["*/,
              v32,
              (System_String_o *)StringLiteral_16165/*"] "*/,
              v33,
              0LL);
      v72 = *(_DWORD *)(v20 + 24);
      v73 = *(_DWORD *)(v20 + 28);
      v74 = v32;
      v75 = v8;
      v76 = v71;
      v77 = (ScriptBranchListViewItem_o *)sub_B77694(ScriptBranchListViewItem_TypeInfo);
      v78 = v73;
      v5 = v99;
      v79 = (EventMissionProgressRequest_Argument_ProgressData_o *)v77;
      ScriptBranchListViewItem___ctor(
        v77,
        v75,
        v76,
        v33,
        v74,
        v72,
        v78,
        v103,
        routeId,
        branchType,
        count,
        checkType,
        debugComment,
        v96);
      if ( !v99 )
        goto LABEL_210;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v99,
        v79,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
      v8 = v75 + 1;
      v9 = v70;
    }
    else
    {
      v80 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ScriptBranchListViewItem__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v80,
        (Il2CppObject *)v20,
        Method_ScriptBranchListViewManager___c__DisplayClass9_0__CreateList_b__0__,
        (const MethodInfo_2C3248C *)Method_System_Predicate_ScriptBranchListViewItem___ctor__);
      if ( !v5 )
        goto LABEL_210;
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)v5,
                (System_Predicate_T__o *)v80,
                (const MethodInfo_3053D44 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        v82 = System_String__Concat_44901936(v33, (System_String_o *)StringLiteral_121/*" - 1"*/, 0LL);
        v83 = *(_DWORD *)(v20 + 24);
        v84 = *(_DWORD *)(v20 + 28);
        v85 = v82;
        v86 = v8 + 1;
        v87 = (ScriptBranchListViewItem_o *)sub_B77694(ScriptBranchListViewItem_TypeInfo);
        v88 = v83;
        v5 = v99;
        v89 = v8;
        v90 = (EventMissionProgressRequest_Argument_ProgressData_o *)v87;
        ScriptBranchListViewItem___ctor(
          v87,
          v89,
          v85,
          v33,
          v32,
          v88,
          v84,
          v103,
          routeId,
          v18,
          count,
          checkType,
          Empty,
          v96);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v99,
          v90,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ScriptBranchListViewItem__Add__);
        v8 = v86;
        list = v98;
      }
      else
      {
        if ( v5->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        IsNullOrEmpty = (__int64)v5->fields._items->m_Items[Index];
        if ( !IsNullOrEmpty )
          goto LABEL_210;
        ScriptBranchListViewItem__AddLineStr((ScriptBranchListViewItem_o *)IsNullOrEmpty, v7);
      }
    }
    if ( (__int64)++v9 >= list->fields._size )
      goto LABEL_202;
  }
  if ( v36 <= 0xA9C7DB00 )
  {
    if ( v36 > 0x83820B5B )
    {
      if ( v36 == -1606428809 )
      {
        IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_19792/*"ifClear"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v64 = *v28;
          if ( !*v28 )
            goto LABEL_210;
          if ( *(_DWORD *)(v64 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v64 + 16) + 48LL), 0LL);
          v65 = *(_QWORD *)(v20 + 16);
          *(_DWORD *)(v20 + 24) = IsNullOrEmpty;
          if ( !v65 )
            goto LABEL_210;
          if ( *(_DWORD *)(v65 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          routeId = 0LL;
          *(_DWORD *)(v20 + 28) = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v65 + 16) + 56LL), 0LL);
          count = -1;
          v17 = 1;
          v18 = 9;
          goto LABEL_190;
        }
        goto LABEL_187;
      }
      if ( v36 != -1446520064 )
        goto LABEL_187;
      routeId = 0LL;
      count = -1;
      v17 = 1;
      v18 = ~System_String__op_Equality(v33, (System_String_o *)StringLiteral_17255/*"branchMaterial"*/, 0LL) << 31 >> 31;
      goto LABEL_190;
    }
    if ( v36 != -2116001178 )
    {
      if ( v36 == -2088629413 )
      {
        IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_17261/*"branchQuestNotClear"*/, 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v38 = *v28;
          if ( !*v28 )
            goto LABEL_210;
          if ( *(_DWORD *)(v38 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v38 + 16) + 48LL), 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            IsNullOrEmpty = 0xFFFFFFFFLL;
          }
          else
          {
            v10 = *v28;
            if ( !*v28 )
              goto LABEL_210;
            if ( *(_DWORD *)(v10 + 24) <= 2u )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v10 + 16) + 48LL), 0LL);
          }
          v11 = *(_QWORD *)(v20 + 16);
          *(_DWORD *)(v20 + 24) = IsNullOrEmpty;
          if ( !v11 )
            goto LABEL_210;
          if ( *(_DWORD *)(v11 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v11 + 16) + 56LL), 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            v12 = 0;
          }
          else
          {
            v16 = *v28;
            if ( !*v28 )
              goto LABEL_210;
            if ( *(_DWORD *)(v16 + 24) <= 3u )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v12 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v16 + 16) + 56LL), 0LL);
          }
          routeId = 0LL;
          *(_DWORD *)(v20 + 28) = v12;
          count = -1;
          v17 = 1;
          v18 = 3;
          goto LABEL_190;
        }
      }
      goto LABEL_187;
    }
    v45 = &StringLiteral_17262/*"branchRouteSelect"*/;
    goto LABEL_168;
  }
  if ( v36 > 0xCB78578B )
  {
    if ( v36 == -460759494 )
    {
      IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_17260/*"branchQuestClear"*/, 0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v68 = *v28;
        if ( !*v28 )
          goto LABEL_210;
        if ( *(_DWORD *)(v68 + 24) <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v68 + 16) + 48LL), 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          IsNullOrEmpty = 0xFFFFFFFFLL;
        }
        else
        {
          v13 = *v28;
          if ( !*v28 )
            goto LABEL_210;
          if ( *(_DWORD *)(v13 + 24) <= 2u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v13 + 16) + 48LL), 0LL);
        }
        v14 = *(_QWORD *)(v20 + 16);
        *(_DWORD *)(v20 + 24) = IsNullOrEmpty;
        if ( !v14 )
          goto LABEL_210;
        if ( *(_DWORD *)(v14 + 24) <= 3u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v14 + 16) + 56LL), 0LL);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v15 = 0;
        }
        else
        {
          v19 = *v28;
          if ( !*v28 )
            goto LABEL_210;
          if ( *(_DWORD *)(v19 + 24) <= 3u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v15 = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v19 + 16) + 56LL), 0LL);
        }
        routeId = 0LL;
        *(_DWORD *)(v20 + 28) = v15;
        count = -1;
        v17 = 1;
        v18 = 2;
        goto LABEL_190;
      }
      goto LABEL_187;
    }
    if ( v36 != -201512038 )
      goto LABEL_187;
    v40 = &StringLiteral_17259/*"branchNotRouteSelectCount"*/;
  }
  else
  {
    if ( v36 != -1252550667 )
    {
      if ( v36 == -881305717 )
        System_String__op_Equality(v33, (System_String_o *)StringLiteral_20804/*"masterBranch"*/, 0LL);
      goto LABEL_187;
    }
    v40 = &StringLiteral_17263/*"branchRouteSelectCount"*/;
  }
  if ( !System_String__op_Equality(v33, (System_String_o *)*v40, 0LL) )
    goto LABEL_187;
  IsNullOrEmpty = System_String__op_Equality(v33, (System_String_o *)StringLiteral_17263/*"branchRouteSelectCount"*/, 0LL);
  v49 = *v28;
  if ( (IsNullOrEmpty & 1) != 0 )
    v50 = 7;
  else
    v50 = 8;
  v101 = v50;
  if ( !v49 )
    goto LABEL_210;
  v105 = v32;
  if ( *(_DWORD *)(v49 + 24) <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v51 = *(System_String_o **)(*(_QWORD *)(v49 + 16) + 48LL);
  IsNullOrEmpty = sub_B775DC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v7 = (const MethodInfo *)IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !v51 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_String__Split(v51, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_DWORD *)(v20 + 24) = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
  v52 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v53 = *(_QWORD *)(v20 + 16);
  if ( !v53 )
    goto LABEL_210;
  v54 = v9;
  if ( *(_DWORD *)(v53 + 24) <= 3u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v55 = *(System_String_o **)(*(_QWORD *)(v53 + 16) + 56LL);
  IsNullOrEmpty = sub_B775DC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v7 = (const MethodInfo *)IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_211;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !v55 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_String__Split(v55, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v56 = *(_QWORD *)(IsNullOrEmpty + 24);
  v57 = IsNullOrEmpty;
  if ( (int)v56 >= 1 )
  {
    v58 = 0LL;
    while ( v58 < (unsigned int)v56 )
    {
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v57 + 32 + 8 * v58), 0LL);
      if ( !v52 )
        goto LABEL_210;
      System_Collections_Generic_List_int___Add(
        v52,
        IsNullOrEmpty,
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v56) = *(_DWORD *)(v57 + 24);
      if ( (__int64)++v58 >= (int)v56 )
        goto LABEL_143;
    }
LABEL_211:
    v93 = sub_B776C8(IsNullOrEmpty);
    sub_B77668(v93, 0LL);
  }
LABEL_143:
  if ( !v52 )
    goto LABEL_210;
  IsNullOrEmpty = (__int64)System_Collections_Generic_List_int___ToArray(
                             v52,
                             (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v59 = *v28;
  routeId = (System_Int32_array *)IsNullOrEmpty;
  if ( !*v28 )
    goto LABEL_210;
  v9 = v54;
  v5 = v99;
  v32 = v105;
  if ( *(_DWORD *)(v59 + 24) <= 4u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  count = System_Int32__Parse(*(System_String_o **)(*(_QWORD *)(v59 + 16) + 64LL), 0LL);
  v60 = (int)CondType_CheckType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v108.fields.value = v60;
  IsNullOrEmpty = (__int64)System_Type__GetTypeFromHandle(v108, 0LL);
  v61 = *v28;
  if ( !*v28 )
    goto LABEL_210;
  v62 = (System_Type_o *)IsNullOrEmpty;
  if ( *(_DWORD *)(v61 + 24) <= 5u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v63 = *(System_String_o **)(*(_QWORD *)(v61 + 16) + 72LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  IsNullOrEmpty = (__int64)System_Enum__Parse(v62, v63, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_210;
  v18 = v101;
  if ( *(Il2CppClass **)(*(_QWORD *)IsNullOrEmpty + 64LL) == CondType_CheckType_TypeInfo->_1.element_class )
  {
    v17 = *(_DWORD *)j_il2cpp_object_unbox_0(IsNullOrEmpty);
    goto LABEL_190;
  }
  sub_B77990(IsNullOrEmpty);
  ScriptBranchListViewManager__DestroyList(v94, v95);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438FB4B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&ScriptBranchListViewItem_TypeInfo);
    byte_438FB4B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&ScriptBranchListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (ScriptBranchListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ScriptBranchListViewItem_TypeInfo )
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
    sub_B7769C(this, 0LL);
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

  if ( (byte_438FB4E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438FB4E = 1;
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
          sub_B7769C(0LL, v7);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438FB4D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__get_Count__);
    sub_B775C4(&Method_ScriptBranchListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438FB4D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptBranchListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ScriptBranchListViewObject__Init(
        (ScriptBranchListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ScriptBranchListViewObject__Dispose__);
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
  sub_B77560(
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
  if ( (byte_438FB4C & 1) == 0 )
  {
    this = (ScriptBranchListViewManager_o *)sub_B775C4(&ScriptBranchListViewObject_TypeInfo);
    byte_438FB4C = 1;
  }
  if ( !obj
    || (v6 = *(&ScriptBranchListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ScriptBranchListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ScriptBranchListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
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

  if ( (byte_438FB47 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438FB47 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  ScriptBranchListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBranchListViewObject__o *__fastcall ScriptBranchListViewManager__get_ObjectList(
        ScriptBranchListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438FB49 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438FB49 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ScriptBranchListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ScriptBranchListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_438FB48 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438FB48 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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
  if ( (byte_43887B5 & 1) == 0 )
  {
    this = (ScriptBranchListViewManager___c__DisplayClass9_0_o *)sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_43887B5 = 1;
  }
  if ( !o )
    return 0;
  data = v4->fields.data;
  if ( !data )
    sub_B7769C(this, o);
  if ( data->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return ScriptBranchListViewItem__CheckFlag(
           o,
           data->fields._items->m_Items[1],
           v4->fields.questId,
           v4->fields.questPhase,
           0LL);
}