void __fastcall WarBoardEvalValueSquare___ctor(WarBoardEvalValueSquare_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *__fastcall WarBoardEvalValueSquare__Calcurate(
        WarBoardEvalValueSquare_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *dicPieceData,
        System_Collections_Generic_HashSet_int__o *evalValueTargetSquare,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        System_Collections_Generic_List_WarBoardRatingBase__o *ratingBaseList,
        int32_t forceId,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue,
        const MethodInfo *method)
{
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
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  _QWORD *monitor; // x8
  __int64 v38; // x21
  System_Collections_Generic_Dictionary_int__object__o *v39; // x28
  unsigned __int64 v40; // x25
  __int64 v41; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  System_Func_int__bool__o *v49; // x24
  bool v50; // w0
  int64_t v51; // x24
  bool v52; // w29
  __int64 v53; // x27
  _QWORD *v54; // x19
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x9
  __int64 v62; // x8
  unsigned __int64 v63; // x25
  __int64 v64; // x24
  _BOOL8 v65; // x0
  __int64 v66; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v70; // s8
  int32_t adjustmentValueA1; // w0
  float v72; // s9
  __int64 adjustmentValueB; // x0
  __int64 v74; // x1
  __int64 v75; // x0
  __int64 v76; // x1
  float v77; // s0
  Il2CppObject *v78; // x28
  int32_t v79; // w0
  float v80; // s8
  int32_t v81; // w0
  float v82; // s9
  __int64 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x0
  __int64 v86; // x1
  float v87; // s0
  float v88; // s0
  _BOOL8 v89; // x0
  __int64 v90; // x1
  Il2CppObject *v91; // x9
  float v92; // s0
  int klass_high; // w8
  int klass; // w9
  float v95; // s8
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v97; // x29
  System_Decimal_o *v98; // x1
  System_Decimal_o *v99; // x26
  System_Decimal_o *v100; // x8
  System_Decimal_o *v101; // x23
  System_Decimal_o *v102; // x1
  System_Decimal_o *v103; // x24
  System_Decimal_o *v104; // x8
  System_Decimal_o *v105; // x28
  System_Decimal_o *v106; // x8
  System_Decimal_o *v107; // x8
  System_Decimal_o *v108; // x0
  const MethodInfo *v109; // x1
  System_Decimal_c *v110; // x0
  System_Decimal_o *v111; // x8
  System_Decimal_o *v112; // x0
  const MethodInfo *v113; // x1
  WarBoardEvalValueSquare___c_c *v114; // x0
  System_Func_T__TResult__o *_9__3_0; // x19
  Il2CppObject *v116; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  float v124; // s0
  float v125; // s8
  float v126; // s0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *result; // x0
  unsigned __int64 v129; // [xsp+28h] [xbp-138h]
  __int64 v130; // [xsp+30h] [xbp-130h]
  System_Decimal_o *v131; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v132; // [xsp+38h] [xbp-128h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v133; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v137; // [xsp+68h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v138; // [xsp+90h] [xbp-D0h] BYREF
  Il2CppObject *value; // [xsp+C0h] [xbp-A0h] BYREF
  Il2CppObject *v140; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v141; // [xsp+D0h] [xbp-90h] BYREF

  if ( (byte_4BC5652 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Decimal_TypeInfo, dicPieceData);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__, v11);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__,
      v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__, v13);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__,
      v14);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__,
      v15);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo, v16);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_int____77585464, v17);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__, v19);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__,
      v20);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__,
      v21);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__, v22);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__, v23);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__,
      v24);
    sub_1C1ABD4(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v25);
    sub_1C1ABD4(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo, v26);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v27);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__, v28);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__, v29);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v30);
    sub_1C1ABD4(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__, v31);
    sub_1C1ABD4(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__, v32);
    sub_1C1ABD4(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v33);
    sub_1C1ABD4(&WarBoardEvalValueSquare___c_TypeInfo, v34);
    byte_4BC5652 = 1;
  }
  memset(&v141, 0, sizeof(v141));
  value = 0LL;
  v140 = 0LL;
  memset(&v138, 0, sizeof(v138));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_78;
  v38 = monitor[7];
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v38 )
    goto LABEL_78;
  if ( *(int *)(v38 + 24) < 1 )
    goto LABEL_69;
  v40 = 0LL;
  v132 = v39;
  v133 = ratingBaseList;
  do
  {
    v41 = sub_1C1AE20(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v41, 0LL);
    if ( v40 >= *(unsigned int *)(v38 + 24) )
LABEL_79:
      sub_1C1AE38(Instance, v36);
    if ( !v41 )
      goto LABEL_78;
    v48 = *(_QWORD *)(v38 + 8 * v40 + 32);
    v129 = v40;
    *(_QWORD *)(v41 + 16) = v48;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v41 + 16), v48, v42, v43, v44, v45, v46, v47);
    v49 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v49,
      (Il2CppObject *)v41,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      0LL);
    v50 = System_Linq_Enumerable__Any_int__49988820(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_2FAC4D4 *)Method_System_Linq_Enumerable_Any_int____77585464);
    v130 = v41 + 16;
    v51 = *(_QWORD *)(v41 + 16);
    v52 = v50;
    v53 = sub_1C1AE20(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    System_Object___ctor((Il2CppObject *)v53, 0LL);
    *(_QWORD *)(v53 + 16) = v51;
    v54 = (_QWORD *)(v53 + 16);
    sub_1C1AB78((PartyOrganizationUtility_o *)(v53 + 16), v51, v55, v56, v57, v58, v59, v60);
    v61 = v38;
    *(_QWORD *)(v53 + 24) = 0LL;
    *(_QWORD *)(v53 + 36) = 0LL;
    *(_QWORD *)(v53 + 44) = 0LL;
    v62 = *(_QWORD *)(v38 + 24);
    if ( (int)v62 < 1 )
      goto LABEL_38;
    v63 = 0LL;
    do
    {
      if ( v63 >= (unsigned int)v62 )
        goto LABEL_79;
      v64 = *(_QWORD *)(v61 + 8 * v63 + 32);
      *(_QWORD *)(v53 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v137,
        (System_Collections_Generic_List_object__o *)ratingBaseList,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      *(_OWORD *)&v141.fields._list = *(_OWORD *)&v137.fields._dictionary;
      v141.fields._current = v137.fields._current.fields.key;
      while ( 1 )
      {
        v65 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v141,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v65 )
          break;
        current = v141.fields._current;
        if ( !v141.fields._current )
          sub_1C1AE30(v65, v66);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v141.fields._current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v70 = *(float *)(v53 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v72 = *(float *)(v53 + 48);
            *(float *)(v53 + 44) = v70 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v53 + 48) = v72 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_1C1AE30(adjustmentValueB, v74);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v77 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *v54,
                      v64,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v77 != 0.0 )
              {
                v78 = value;
                if ( !value )
                  sub_1C1AE30(v75, v76);
                *(float *)&value[1].monitor = v77 + *(float *)&value[1].monitor;
                v79 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_30;
              }
            }
          }
        }
        else
        {
          v80 = *(float *)(v53 + 36);
          v81 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v82 = *(float *)(v53 + 40);
          *(float *)(v53 + 36) = v80 + (float)v81;
          v83 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v53 + 40) = v82 + (float)(int)v83;
          if ( v52 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_1C1AE30(v83, v84);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &v140,
                   (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v87 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *v54,
                      v64,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v87 != 0.0 )
              {
                v78 = v140;
                if ( !v140 )
                  sub_1C1AE30(v85, v86);
                v88 = v87 + *(float *)&v140[1].monitor;
                ++HIDWORD(v140[1].klass);
                *(float *)&v78[1].monitor = v88;
                v79 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_30:
                LODWORD(v78[1].klass) = v79;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v141,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      ratingBaseList = v133;
      v61 = v38;
      ++v63;
      LODWORD(v62) = *(_DWORD *)(v38 + 24);
    }
    while ( (__int64)v63 < (int)v62 );
LABEL_38:
    if ( !*(_QWORD *)v130 )
      goto LABEL_78;
    if ( !v132 )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___Add(
      v132,
      *(_DWORD *)(*(_QWORD *)v130 + 16LL),
      (Il2CppObject *)v53,
      (const MethodInfo_32A22FC *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v137,
      (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
      (const MethodInfo_32A2734 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v138 = v137;
    while ( 1 )
    {
      v89 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v138,
              (const MethodInfo_33F1A9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v89 )
        break;
      v91 = v138.fields._current.fields.value;
      if ( !v138.fields._current.fields.value )
        sub_1C1AE30(v89, v90);
      v92 = *(float *)&v138.fields._current.fields.value[1].monitor;
      klass_high = HIDWORD(v138.fields._current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v138.fields._current.fields.value[1].klass + 4) = 0LL;
      if ( v92 != 0.0 )
      {
        klass = (int)v91[1].klass;
        if ( klass == 1 )
        {
          if ( !v53 )
            sub_1C1AE30(v89, v90);
          *(float *)(v53 + 28) = v92 + *(float *)(v53 + 28);
        }
        else if ( !klass )
        {
          if ( !v53 )
            sub_1C1AE30(v89, v90);
          *(float *)(v53 + 24) = (float)(v92 / (float)klass_high) + *(float *)(v53 + 24);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v138,
      (const MethodInfo_33F1BC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( !v53 )
      goto LABEL_78;
    v95 = *(float *)(v53 + 24);
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v97 = System_Decimal__op_Explicit(cctor_finished, v95, 0LL);
    v99 = v98;
    v101 = System_Decimal__op_Explicit(v100, *(float *)(v53 + 28), 0LL);
    v103 = v102;
    v105 = System_Decimal__op_Explicit(v104, *(float *)(v53 + 36) + *(float *)(v53 + 40), 0LL);
    v131 = System_Decimal__op_Explicit(v106, *(float *)(v53 + 44) + *(float *)(v53 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v97, v99, *(const MethodInfo **)System_Decimal_TypeInfo->static_fields) )
    {
      v107 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v107 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v108 = System_Decimal__Divide(v107, v97, v99, (const MethodInfo *)v105);
      *(float *)(v53 + 24) = System_Decimal__op_Explicit_64248860(v108, v109) * 1000.0;
    }
    v110 = System_Decimal_TypeInfo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v110 = System_Decimal_TypeInfo;
    }
    v39 = v132;
    ratingBaseList = v133;
    if ( System_Decimal__op_Inequality(v101, v103, *(const MethodInfo **)v110->static_fields) )
    {
      v111 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v111 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v112 = System_Decimal__Divide(v111, v101, v103, (const MethodInfo *)v131);
      *(float *)(v53 + 28) = System_Decimal__op_Explicit_64248860(v112, v113) * 1000.0;
    }
    v40 = v129 + 1;
  }
  while ( (__int64)(v129 + 1) < *(int *)(v38 + 24) );
LABEL_69:
  v114 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v114 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T__TResult__o *)v114->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v114->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v114);
      v114 = WarBoardEvalValueSquare___c_TypeInfo;
    }
    v116 = (Il2CppObject *)v114->static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__object___float____ctor(
      _9__3_0,
      v116,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      0LL);
    static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)_9__3_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
      (int64_t)_9__3_0,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
  }
  v124 = System_Linq_Enumerable__Sum_KeyValuePair_int__object___50166040(
           (System_Collections_Generic_IEnumerable_TSource__o *)v39,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_2FD7918 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v39
    || (v125 = v124,
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                     v39,
                                     (const MethodInfo_32A1FAC *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !this) )
  {
LABEL_78:
    sub_1C1AE30(Instance, v36);
  }
  v126 = v125 / (float)(int)Instance;
  result = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v39;
  this->fields.averageBenefitValue = v126;
  return result;
}


void __fastcall WarBoardEvalValueSquare_CalcEval___ctor(
        WarBoardEvalValueSquare_CalcEval_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEvalValueSquare_EvalValueSquare___ctor(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        WarBoardSquareData_o *squareData,
        const MethodInfo *method)
{
  WarBoardEvalValueSquare_EvalValueSquare_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)v4, (int64_t)squareData, v5, v6, v7, v8, v9, v10);
  v4->monitor = 0LL;
  *(_QWORD *)&v4->fields._EvalValueBenefit_k__BackingField = 0LL;
  *(struct WarBoardSquareData_o **)((char *)&v4->fields.squareData + 4) = 0LL;
}


float __fastcall WarBoardEvalValueSquare_EvalValueSquare__get_BenAdjustmentValueA1(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._BenAdjustmentValueA1_k__BackingField;
}


float __fastcall WarBoardEvalValueSquare_EvalValueSquare__get_BenAdjustmentValueB(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._BenAdjustmentValueB_k__BackingField;
}


float __fastcall WarBoardEvalValueSquare_EvalValueSquare__get_EvalValue(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._EvalValue_k__BackingField;
}


float __fastcall WarBoardEvalValueSquare_EvalValueSquare__get_EvalValueBenefit(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._EvalValueBenefit_k__BackingField;
}


float __fastcall WarBoardEvalValueSquare_EvalValueSquare__get_EvalValueWarsituation(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._EvalValueWarsituation_k__BackingField;
}


float __fastcall WarBoardEvalValueSquare_EvalValueSquare__get_WarAdjustmentValueA1(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._WarAdjustmentValueA1_k__BackingField;
}


float __fastcall WarBoardEvalValueSquare_EvalValueSquare__get_WarAdjustmentValueB(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._WarAdjustmentValueB_k__BackingField;
}


void __fastcall WarBoardEvalValueSquare_EvalValueSquare__set_BenAdjustmentValueA1(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._BenAdjustmentValueA1_k__BackingField = value;
}


void __fastcall WarBoardEvalValueSquare_EvalValueSquare__set_BenAdjustmentValueB(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._BenAdjustmentValueB_k__BackingField = value;
}


void __fastcall WarBoardEvalValueSquare_EvalValueSquare__set_EvalValue(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EvalValue_k__BackingField = value;
}


void __fastcall WarBoardEvalValueSquare_EvalValueSquare__set_EvalValueBenefit(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EvalValueBenefit_k__BackingField = value;
}


void __fastcall WarBoardEvalValueSquare_EvalValueSquare__set_EvalValueWarsituation(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EvalValueWarsituation_k__BackingField = value;
}


void __fastcall WarBoardEvalValueSquare_EvalValueSquare__set_WarAdjustmentValueA1(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._WarAdjustmentValueA1_k__BackingField = value;
}


void __fastcall WarBoardEvalValueSquare_EvalValueSquare__set_WarAdjustmentValueB(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._WarAdjustmentValueB_k__BackingField = value;
}


void __fastcall WarBoardEvalValueSquare___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC5653 & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardEvalValueSquare___c_TypeInfo, v1);
    byte_4BC5653 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardEvalValueSquare___c_TypeInfo->static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WarBoardEvalValueSquare___c___ctor(WarBoardEvalValueSquare___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall WarBoardEvalValueSquare___c___Calcurate_b__3_0(
        WarBoardEvalValueSquare___c_o *this,
        System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__o x,
        const MethodInfo *method)
{
  struct WarBoardEvalValueSquare_EvalValueSquare_o *value; // x19

  value = x.fields.value;
  if ( (byte_4BC5654 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_1C1ABD4(
                                              &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__,
                                              *(_QWORD *)&x.fields.key);
    byte_4BC5654 = 1;
  }
  if ( !value )
    sub_1C1AE30(this, *(_QWORD *)&x.fields.key);
  return value->fields._EvalValueBenefit_k__BackingField;
}


void __fastcall WarBoardEvalValueSquare___c__DisplayClass3_0___ctor(
        WarBoardEvalValueSquare___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardEvalValueSquare___c__DisplayClass3_0___Calcurate_b__1(
        WarBoardEvalValueSquare___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *calcSquare; // x8

  calcSquare = this->fields.calcSquare;
  if ( !calcSquare )
    sub_1C1AE30(this, x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}