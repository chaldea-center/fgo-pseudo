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
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 v14; // x28
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v15; // x23
  unsigned __int64 v16; // x24
  WarBoardEvalValueSquare___c__DisplayClass3_0_o *v17; // x19
  System_Func_int__bool__o *v18; // x24
  bool v19; // w0
  WarBoardSquareData_o *calcSquare; // x24
  bool v21; // w19
  __int64 v22; // x27
  __int64 v23; // x8
  unsigned __int64 v24; // x23
  int v25; // w25
  __int64 v26; // x24
  float v27; // s0
  int32_t v28; // w0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v34; // s8
  int32_t adjustmentValueA1; // w0
  float v36; // s10
  __int64 adjustmentValueB; // x0
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x1
  float v41; // s0
  WarBoardEvalValueSquare_CalcEval_o *v42; // x28
  float v43; // s8
  int32_t v44; // w0
  float v45; // s10
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x0
  __int64 v49; // x1
  float v50; // s0
  int v51; // w21
  int v52; // w8
  _BOOL8 v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x9
  float v56; // s0
  int klass_high; // w8
  int klass; // w9
  int v59; // w21
  int v60; // w8
  float v61; // s8
  System_Decimal_o v62; // kr00_16
  System_Decimal_o v63; // kr10_16
  System_Decimal_o v64; // kr20_16
  System_Decimal_o v65; // kr30_16
  System_Decimal_c *v66; // x0
  unsigned __int64 v67; // x24
  WarBoardEvalValueSquare___c_c *v68; // x0
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *_9__3_0; // x19
  Il2CppObject *v71; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *v72; // x0
  float v73; // s0
  float v74; // s8
  __int64 v76; // x0
  WarBoardEvalValueSquare_o *v77; // [xsp+8h] [xbp-158h]
  WarBoardEvalValueSquare___c__DisplayClass3_0_Fields *p_fields; // [xsp+20h] [xbp-140h]
  unsigned __int64 v80; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v81; // [xsp+30h] [xbp-130h]
  int v82; // [xsp+3Ch] [xbp-124h]
  __int64 v83; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v84; // [xsp+48h] [xbp-118h]
  _WORD v88[24]; // [xsp+68h] [xbp-F8h] BYREF
  int v89; // [xsp+98h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+A0h] [xbp-C0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+D0h] [xbp-90h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *v93; // [xsp+F8h] [xbp-68h] BYREF
  System_Decimal_o v94; // 0:x0.16
  System_Decimal_o v95; // 0:x0.16

  if ( (byte_4387B73 & 1) == 0 )
  {
    sub_B775C4(&System_Decimal_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_int____69502456);
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__);
    sub_B775C4(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__);
    sub_B775C4(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__);
    sub_B775C4(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    sub_B775C4(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_4387B73 = 1;
  }
  v93 = 0LL;
  value = 0LL;
  memset(&v92, 0, sizeof(v92));
  memset(&v90, 0, sizeof(v90));
  v89 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  v13 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v13 )
    goto LABEL_93;
  v77 = this;
  v14 = *(_QWORD *)(v13 + 56);
  v15 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v15,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v14 )
    goto LABEL_93;
  if ( *(int *)(v14 + 24) < 1 )
    goto LABEL_82;
  v82 = 0;
  v16 = 0LL;
  v83 = v14;
  v84 = ratingBaseList;
  v81 = v15;
  do
  {
    v17 = (WarBoardEvalValueSquare___c__DisplayClass3_0_o *)sub_B77694(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    WarBoardEvalValueSquare___c__DisplayClass3_0___ctor(v17, 0LL);
    if ( v16 >= *(unsigned int *)(v14 + 24) )
    {
LABEL_94:
      v76 = sub_B776C8(Instance);
      sub_B77668(v76, 0LL);
    }
    if ( !v17 )
      goto LABEL_93;
    v80 = v16;
    v17->fields.calcSquare = *(struct WarBoardSquareData_o **)(v14 + 8 * v16 + 32);
    sub_B77560(&v17->fields);
    v18 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v18,
      (Il2CppObject *)v17,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
    v19 = System_Linq_Enumerable__Any_int__30536520(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v18,
            (const MethodInfo_1D1F348 *)Method_System_Linq_Enumerable_Any_int____69502456);
    p_fields = &v17->fields;
    calcSquare = v17->fields.calcSquare;
    v21 = v19;
    v22 = sub_B77694(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    WarBoardEvalValueSquare_EvalValueSquare___ctor((WarBoardEvalValueSquare_EvalValueSquare_o *)v22, calcSquare, 0LL);
    v23 = *(_QWORD *)(v14 + 24);
    if ( (int)v23 < 1 )
    {
      v51 = v82;
      goto LABEL_43;
    }
    v24 = 0LL;
    v25 = v82;
    do
    {
      if ( v24 >= (unsigned int)v23 )
        goto LABEL_94;
      if ( !v22 )
        goto LABEL_93;
      v26 = *(_QWORD *)(v14 + 8 * v24 + 32);
      *(_QWORD *)(v22 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_93;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v88,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingBaseList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      v92 = *(System_Collections_Generic_List_Enumerator_T__o *)v88;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v92,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v29 )
          break;
        current = v92.fields.current;
        if ( !v92.fields.current )
          sub_B7769C(v29, v30);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v92.fields.current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v34 = *(float *)(v22 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v36 = *(float *)(v22 + 48);
            *(float *)(v22 + 44) = v34 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v22 + 48) = v36 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_B7769C(adjustmentValueB, v38);
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v41 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *(_QWORD *)(v22 + 16),
                      v26,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v41 != 0.0 )
              {
                v42 = value;
                if ( !value )
                  sub_B7769C(v39, v40);
                value->fields.eval = v41 + value->fields.eval;
                v28 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_17;
              }
            }
          }
        }
        else
        {
          v43 = *(float *)(v22 + 36);
          v44 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v45 = *(float *)(v22 + 40);
          *(float *)(v22 + 36) = v43 + (float)v44;
          v46 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v22 + 40) = v45 + (float)(int)v46;
          if ( v21 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_B7769C(v46, v47);
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &v93,
                   (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v50 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *(_QWORD *)(v22 + 16),
                      v26,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v50 != 0.0 )
              {
                v42 = v93;
                if ( !v93 )
                  sub_B7769C(v48, v49);
                v27 = v50 + v93->fields.eval;
                ++v93->fields.addNum;
                v42->fields.eval = v27;
                v28 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_17:
                v42->fields.viewpoint = v28;
              }
            }
          }
        }
      }
      *(_DWORD *)&v88[2 * v25 + 20] = 491;
      v25 = ++v89;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v92,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      v14 = v83;
      ratingBaseList = v84;
      v51 = v25;
      if ( v25 )
      {
        v52 = v25 - 1;
        if ( *(_DWORD *)&v88[2 * v25 + 18] == 491 )
        {
          v51 = --v25;
          v89 = v52;
        }
      }
      LODWORD(v23) = *(_DWORD *)(v83 + 24);
      ++v24;
    }
    while ( (__int64)v24 < (int)v23 );
LABEL_43:
    if ( !p_fields->calcSquare )
      goto LABEL_93;
    if ( !v81 )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v81,
      p_fields->calcSquare->fields._squareIndex_k__BackingField,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v22,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v88,
      dicRatingbaseCalcValue,
      (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v90 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v88;
    while ( 1 )
    {
      v53 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v90,
              (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v53 )
        break;
      v55 = v90.fields.current.fields.value;
      if ( !v90.fields.current.fields.value )
        sub_B7769C(v53, v54);
      v56 = *(float *)&v90.fields.current.fields.value[1].monitor;
      klass_high = HIDWORD(v90.fields.current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v90.fields.current.fields.value[1].klass + 4) = 0LL;
      if ( v56 != 0.0 )
      {
        klass = (int)v55[1].klass;
        if ( klass == 1 )
        {
          if ( !v22 )
            sub_B7769C(v53, v54);
          *(float *)(v22 + 28) = v56 + *(float *)(v22 + 28);
        }
        else if ( !klass )
        {
          if ( !v22 )
            sub_B7769C(v53, v54);
          *(float *)(v22 + 24) = (float)(v56 / (float)klass_high) + *(float *)(v22 + 24);
        }
      }
    }
    *(_DWORD *)&v88[2 * v51 + 20] = 713;
    v59 = ++v89;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v90,
      (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( v59 )
    {
      v60 = v59 - 1;
      if ( *(_DWORD *)&v88[2 * v59 + 18] == 713 )
      {
        --v59;
        v89 = v60;
      }
    }
    v82 = v59;
    if ( !v22 )
      goto LABEL_93;
    v61 = *(float *)(v22 + 24);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    v62 = System_Decimal__op_Explicit(v61, 0LL);
    v63 = System_Decimal__op_Explicit(*(float *)(v22 + 28), 0LL);
    v64 = System_Decimal__op_Explicit(*(float *)(v22 + 36) + *(float *)(v22 + 40), 0LL);
    v65 = System_Decimal__op_Explicit(*(float *)(v22 + 44) + *(float *)(v22 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v62, System_Decimal_TypeInfo->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v94 = System_Decimal__Divide(v62, v64, 0LL);
      *(float *)(v22 + 24) = System_Decimal__op_Explicit_45003164(v94, 0LL) * 1000.0;
    }
    v66 = System_Decimal_TypeInfo;
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v14 = v83;
      ratingBaseList = v84;
      v67 = v80;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v66 = System_Decimal_TypeInfo;
      }
    }
    else
    {
      v14 = v83;
      ratingBaseList = v84;
      v67 = v80;
    }
    if ( System_Decimal__op_Inequality(v63, v66->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v95 = System_Decimal__Divide(v63, v65, 0LL);
      *(float *)(v22 + 28) = System_Decimal__op_Explicit_45003164(v95, 0LL) * 1000.0;
    }
    v15 = v81;
    v16 = v67 + 1;
  }
  while ( (__int64)v16 < *(int *)(v14 + 24) );
LABEL_82:
  v68 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( (BYTE3(WarBoardEvalValueSquare___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v68 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  static_fields = v68->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)sub_B77694(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float____ctor(
      _9__3_0,
      v71,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      (const MethodInfo_29D70BC *)Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__);
    v72 = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    v72->__9__3_0 = _9__3_0;
    sub_B77560(&v72->__9__3_0);
  }
  v73 = System_Linq_Enumerable__Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Func_TSource__float__o *)_9__3_0,
          (const MethodInfo_1D3C9A0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v15
    || (v74 = v73,
        Instance = (WebViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                         v15,
                                         (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !v77) )
  {
LABEL_93:
    sub_B7769C(Instance, v12);
  }
  v77->fields.averageBenefitValue = v74 / (float)(int)Instance;
  return v15;
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_B77560((BattleServantConfConponent_o *)v4, (System_Int32_array **)squareData, v5, v6, v7, v8, v9, v10);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388F56 & 1) == 0 )
  {
    sub_B775C4(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_4388F56 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  if ( (byte_4388F57 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__);
    byte_4388F57 = 1;
  }
  if ( !value )
    sub_B7769C(this, *(_QWORD *)&x.fields.key);
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
    sub_B7769C(this, x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}