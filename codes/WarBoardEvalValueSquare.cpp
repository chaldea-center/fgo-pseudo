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
  __int64 v35; // x1
  __int64 v36; // x1
  WebViewManager_o *Instance; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x8
  __int64 v41; // x28
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x24
  WarBoardEvalValueSquare___c__DisplayClass3_0_o *v46; // x19
  struct WarBoardSquareData_o *v47; // x1
  __int64 v48; // x1
  __int64 v49; // x2
  System_Func_int__bool__o *v50; // x24
  bool v51; // w0
  WarBoardSquareData_o *calcSquare; // x24
  bool v53; // w19
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x27
  __int64 v57; // x8
  unsigned __int64 v58; // x23
  int v59; // w25
  __int64 v60; // x24
  float v61; // s0
  int32_t v62; // w0
  _BOOL8 v63; // x0
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v67; // s8
  int32_t adjustmentValueA1; // w0
  float v69; // s10
  __int64 adjustmentValueB; // x0
  __int64 v71; // x0
  float v72; // s0
  WarBoardEvalValueSquare_CalcEval_o *v73; // x28
  float v74; // s8
  int32_t v75; // w0
  float v76; // s10
  __int64 v77; // x0
  __int64 v78; // x0
  float v79; // s0
  int v80; // w21
  int v81; // w8
  _BOOL8 v82; // x0
  Il2CppObject *v83; // x9
  float v84; // s0
  int klass_high; // w8
  int klass; // w9
  int v87; // w21
  int v88; // w8
  float v89; // s8
  System_Decimal_o v90; // kr00_16
  System_Decimal_o v91; // kr10_16
  System_Decimal_o v92; // kr20_16
  System_Decimal_o v93; // kr30_16
  System_Decimal_c *v94; // x0
  unsigned __int64 v95; // x24
  WarBoardEvalValueSquare___c_c *v96; // x0
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *_9__3_0; // x19
  Il2CppObject *v99; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *v100; // x0
  float v101; // s0
  float v102; // s8
  __int64 v104; // x0
  WarBoardEvalValueSquare_o *v105; // [xsp+8h] [xbp-158h]
  WarBoardEvalValueSquare___c__DisplayClass3_0_Fields *p_fields; // [xsp+20h] [xbp-140h]
  unsigned __int64 v108; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v109; // [xsp+30h] [xbp-130h]
  int v110; // [xsp+3Ch] [xbp-124h]
  __int64 v111; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v112; // [xsp+48h] [xbp-118h]
  _WORD v116[24]; // [xsp+68h] [xbp-F8h] BYREF
  int v117; // [xsp+98h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v118; // [xsp+A0h] [xbp-C0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+D0h] [xbp-90h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *v121; // [xsp+F8h] [xbp-68h] BYREF
  System_Decimal_o v122; // 0:x0.16
  System_Decimal_o v123; // 0:x0.16

  if ( (byte_4210D62 & 1) == 0 )
  {
    sub_B0D8A4(&System_Decimal_TypeInfo, dicPieceData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__,
      v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__, v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__,
      v15);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int____67987528, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__, v19);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__,
      v20);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__,
      v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__, v23);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__,
      v24);
    sub_B0D8A4(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v25);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v26);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__, v27);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v28);
    sub_B0D8A4(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__, v31);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v32);
    sub_B0D8A4(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__, v33);
    sub_B0D8A4(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__, v34);
    sub_B0D8A4(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v35);
    sub_B0D8A4(&WarBoardEvalValueSquare___c_TypeInfo, v36);
    byte_4210D62 = 1;
  }
  v121 = 0LL;
  value = 0LL;
  memset(&v120, 0, sizeof(v120));
  memset(&v118, 0, sizeof(v118));
  v117 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  v40 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v40 )
    goto LABEL_93;
  v105 = this;
  v41 = *(_QWORD *)(v40 + 56);
  v42 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo,
                                                                                                   v38,
                                                                                                   v39);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v42,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v41 )
    goto LABEL_93;
  if ( *(int *)(v41 + 24) < 1 )
    goto LABEL_82;
  v110 = 0;
  v45 = 0LL;
  v111 = v41;
  v112 = ratingBaseList;
  v109 = v42;
  do
  {
    v46 = (WarBoardEvalValueSquare___c__DisplayClass3_0_o *)sub_B0D974(
                                                              WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo,
                                                              v43,
                                                              v44);
    WarBoardEvalValueSquare___c__DisplayClass3_0___ctor(v46, 0LL);
    if ( v45 >= *(unsigned int *)(v41 + 24) )
    {
LABEL_94:
      v104 = sub_B0D9A8(Instance);
      sub_B0D948(v104, 0LL);
    }
    if ( !v46 )
      goto LABEL_93;
    v47 = *(struct WarBoardSquareData_o **)(v41 + 8 * v45 + 32);
    v108 = v45;
    v46->fields.calcSquare = v47;
    sub_B0D840(&v46->fields, v47);
    v50 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v48, v49);
    System_Func_int__bool____ctor(
      v50,
      (Il2CppObject *)v46,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v51 = System_Linq_Enumerable__Any_int__24227480(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v50,
            (const MethodInfo_171AE98 *)Method_System_Linq_Enumerable_Any_int____67987528);
    p_fields = &v46->fields;
    calcSquare = v46->fields.calcSquare;
    v53 = v51;
    v56 = sub_B0D974(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v54, v55);
    WarBoardEvalValueSquare_EvalValueSquare___ctor((WarBoardEvalValueSquare_EvalValueSquare_o *)v56, calcSquare, 0LL);
    v57 = *(_QWORD *)(v41 + 24);
    if ( (int)v57 < 1 )
    {
      v80 = v110;
      goto LABEL_43;
    }
    v58 = 0LL;
    v59 = v110;
    do
    {
      if ( v58 >= (unsigned int)v57 )
        goto LABEL_94;
      if ( !v56 )
        goto LABEL_93;
      v60 = *(_QWORD *)(v41 + 8 * v58 + 32);
      *(_QWORD *)(v56 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_93;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v116,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingBaseList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      v120 = *(System_Collections_Generic_List_Enumerator_T__o *)v116;
      while ( 1 )
      {
        v63 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v120,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v63 )
          break;
        current = v120.fields.current;
        if ( !v120.fields.current )
          sub_B0D97C(v63);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v120.fields.current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v67 = *(float *)(v56 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v69 = *(float *)(v56 + 48);
            *(float *)(v56 + 44) = v67 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v56 + 48) = v69 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_B0D97C(adjustmentValueB);
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v72 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *(_QWORD *)(v56 + 16),
                      v60,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v72 != 0.0 )
              {
                v73 = value;
                if ( !value )
                  sub_B0D97C(v71);
                value->fields.eval = v72 + value->fields.eval;
                v62 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_17;
              }
            }
          }
        }
        else
        {
          v74 = *(float *)(v56 + 36);
          v75 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v76 = *(float *)(v56 + 40);
          *(float *)(v56 + 36) = v74 + (float)v75;
          v77 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v56 + 40) = v76 + (float)(int)v77;
          if ( v53 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_B0D97C(v77);
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &v121,
                   (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v79 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *(_QWORD *)(v56 + 16),
                      v60,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v79 != 0.0 )
              {
                v73 = v121;
                if ( !v121 )
                  sub_B0D97C(v78);
                v61 = v79 + v121->fields.eval;
                ++v121->fields.addNum;
                v73->fields.eval = v61;
                v62 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_17:
                v73->fields.viewpoint = v62;
              }
            }
          }
        }
      }
      *(_DWORD *)&v116[2 * v59 + 20] = 491;
      v59 = ++v117;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v120,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      v41 = v111;
      ratingBaseList = v112;
      v80 = v59;
      if ( v59 )
      {
        v81 = v59 - 1;
        if ( *(_DWORD *)&v116[2 * v59 + 18] == 491 )
        {
          v80 = --v59;
          v117 = v81;
        }
      }
      LODWORD(v57) = *(_DWORD *)(v111 + 24);
      ++v58;
    }
    while ( (__int64)v58 < (int)v57 );
LABEL_43:
    if ( !p_fields->calcSquare )
      goto LABEL_93;
    if ( !v109 )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v109,
      p_fields->calcSquare->fields._squareIndex_k__BackingField,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v56,
      (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v116,
      dicRatingbaseCalcValue,
      (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v118 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v116;
    while ( 1 )
    {
      v82 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v118,
              (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v82 )
        break;
      v83 = v118.fields.current.fields.value;
      if ( !v118.fields.current.fields.value )
        sub_B0D97C(v82);
      v84 = *(float *)&v118.fields.current.fields.value[1].monitor;
      klass_high = HIDWORD(v118.fields.current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v118.fields.current.fields.value[1].klass + 4) = 0LL;
      if ( v84 != 0.0 )
      {
        klass = (int)v83[1].klass;
        if ( klass == 1 )
        {
          if ( !v56 )
            sub_B0D97C(v82);
          *(float *)(v56 + 28) = v84 + *(float *)(v56 + 28);
        }
        else if ( !klass )
        {
          if ( !v56 )
            sub_B0D97C(v82);
          *(float *)(v56 + 24) = (float)(v84 / (float)klass_high) + *(float *)(v56 + 24);
        }
      }
    }
    *(_DWORD *)&v116[2 * v80 + 20] = 713;
    v87 = ++v117;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v118,
      (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( v87 )
    {
      v88 = v87 - 1;
      if ( *(_DWORD *)&v116[2 * v87 + 18] == 713 )
      {
        --v87;
        v117 = v88;
      }
    }
    v110 = v87;
    if ( !v56 )
      goto LABEL_93;
    v89 = *(float *)(v56 + 24);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    v90 = System_Decimal__op_Explicit(v89, 0LL);
    v91 = System_Decimal__op_Explicit(*(float *)(v56 + 28), 0LL);
    v92 = System_Decimal__op_Explicit(*(float *)(v56 + 36) + *(float *)(v56 + 40), 0LL);
    v93 = System_Decimal__op_Explicit(*(float *)(v56 + 44) + *(float *)(v56 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v90, System_Decimal_TypeInfo->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v122 = System_Decimal__Divide(v90, v92, 0LL);
      *(float *)(v56 + 24) = System_Decimal__op_Explicit_43734972(v122, 0LL) * 1000.0;
    }
    v94 = System_Decimal_TypeInfo;
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v41 = v111;
      ratingBaseList = v112;
      v95 = v108;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v94 = System_Decimal_TypeInfo;
      }
    }
    else
    {
      v41 = v111;
      ratingBaseList = v112;
      v95 = v108;
    }
    if ( System_Decimal__op_Inequality(v91, v94->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v123 = System_Decimal__Divide(v91, v93, 0LL);
      *(float *)(v56 + 28) = System_Decimal__op_Explicit_43734972(v123, 0LL) * 1000.0;
    }
    v42 = v109;
    v45 = v95 + 1;
  }
  while ( (__int64)v45 < *(int *)(v41 + 24) );
LABEL_82:
  v96 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( (BYTE3(WarBoardEvalValueSquare___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v96 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  static_fields = v96->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96);
      static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    }
    v99 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)sub_B0D974(
                                                                                                    System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo,
                                                                                                    v43,
                                                                                                    v44);
    System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float____ctor(
      _9__3_0,
      v99,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      (const MethodInfo_260B080 *)Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__);
    v100 = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    v100->__9__3_0 = _9__3_0;
    sub_B0D840(&v100->__9__3_0, _9__3_0);
  }
  v101 = System_Linq_Enumerable__Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v42,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_1B557BC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v42
    || (v102 = v101,
        Instance = (WebViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                         v42,
                                         (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !v105) )
  {
LABEL_93:
    sub_B0D97C(Instance);
  }
  v105->fields.averageBenefitValue = v102 / (float)(int)Instance;
  return v42;
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

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_B0D840(v4, squareData);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0

  if ( (byte_42126B8 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardEvalValueSquare___c_TypeInfo, v1);
    byte_42126B8 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardEvalValueSquare___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  if ( (byte_42126B9 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__,
                                              *(_QWORD *)&x.fields.key);
    byte_42126B9 = 1;
  }
  if ( !value )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}