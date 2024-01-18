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
  __int64 v39; // x8
  __int64 v40; // x28
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v41; // x23
  unsigned __int64 v42; // x24
  WarBoardEvalValueSquare___c__DisplayClass3_0_o *v43; // x19
  struct WarBoardSquareData_o *v44; // x1
  System_Func_int__bool__o *v45; // x24
  bool v46; // w0
  WarBoardSquareData_o *calcSquare; // x24
  bool v48; // w19
  __int64 v49; // x27
  __int64 v50; // x8
  unsigned __int64 v51; // x23
  int v52; // w25
  __int64 v53; // x24
  float v54; // s0
  int32_t v55; // w0
  _BOOL8 v56; // x0
  __int64 v57; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v61; // s8
  int32_t adjustmentValueA1; // w0
  float v63; // s10
  __int64 adjustmentValueB; // x0
  __int64 v65; // x1
  __int64 v66; // x0
  __int64 v67; // x1
  float v68; // s0
  WarBoardEvalValueSquare_CalcEval_o *v69; // x28
  float v70; // s8
  int32_t v71; // w0
  float v72; // s10
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x0
  __int64 v76; // x1
  float v77; // s0
  int v78; // w21
  int v79; // w8
  _BOOL8 v80; // x0
  __int64 v81; // x1
  Il2CppObject *v82; // x9
  float v83; // s0
  int klass_high; // w8
  int klass; // w9
  int v86; // w21
  int v87; // w8
  float v88; // s8
  System_Decimal_o v89; // kr00_16
  System_Decimal_o v90; // kr10_16
  System_Decimal_o v91; // kr20_16
  System_Decimal_o v92; // kr30_16
  System_Decimal_c *v93; // x0
  unsigned __int64 v94; // x24
  WarBoardEvalValueSquare___c_c *v95; // x0
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *_9__3_0; // x19
  Il2CppObject *v98; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *v99; // x0
  float v100; // s0
  float v101; // s8
  __int64 v103; // x0
  WarBoardEvalValueSquare_o *v104; // [xsp+8h] [xbp-158h]
  WarBoardEvalValueSquare___c__DisplayClass3_0_Fields *p_fields; // [xsp+20h] [xbp-140h]
  unsigned __int64 v107; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v108; // [xsp+30h] [xbp-130h]
  int v109; // [xsp+3Ch] [xbp-124h]
  __int64 v110; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v111; // [xsp+48h] [xbp-118h]
  _WORD v115[24]; // [xsp+68h] [xbp-F8h] BYREF
  int v116; // [xsp+98h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v117; // [xsp+A0h] [xbp-C0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v119; // [xsp+D0h] [xbp-90h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *v120; // [xsp+F8h] [xbp-68h] BYREF
  System_Decimal_o v121; // 0:x0.16
  System_Decimal_o v122; // 0:x0.16

  if ( (byte_4184004 & 1) == 0 )
  {
    sub_B2C35C(&System_Decimal_TypeInfo, dicPieceData);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__, v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__,
      v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__, v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__,
      v15);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo, v16);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int____67413072, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__, v19);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__,
      v20);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__,
      v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__, v23);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__,
      v24);
    sub_B2C35C(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v25);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v26);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__, v27);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v28);
    sub_B2C35C(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo, v29);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v32);
    sub_B2C35C(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__, v33);
    sub_B2C35C(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__, v34);
    sub_B2C35C(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v35);
    sub_B2C35C(&WarBoardEvalValueSquare___c_TypeInfo, v36);
    byte_4184004 = 1;
  }
  v120 = 0LL;
  value = 0LL;
  memset(&v119, 0, sizeof(v119));
  memset(&v117, 0, sizeof(v117));
  v116 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  v39 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v39 )
    goto LABEL_93;
  v104 = this;
  v40 = *(_QWORD *)(v39 + 56);
  v41 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v41,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v40 )
    goto LABEL_93;
  if ( *(int *)(v40 + 24) < 1 )
    goto LABEL_82;
  v109 = 0;
  v42 = 0LL;
  v110 = v40;
  v111 = ratingBaseList;
  v108 = v41;
  do
  {
    v43 = (WarBoardEvalValueSquare___c__DisplayClass3_0_o *)sub_B2C42C(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    WarBoardEvalValueSquare___c__DisplayClass3_0___ctor(v43, 0LL);
    if ( v42 >= *(unsigned int *)(v40 + 24) )
    {
LABEL_94:
      v103 = sub_B2C460(Instance);
      sub_B2C400(v103, 0LL);
    }
    if ( !v43 )
      goto LABEL_93;
    v44 = *(struct WarBoardSquareData_o **)(v40 + 8 * v42 + 32);
    v107 = v42;
    v43->fields.calcSquare = v44;
    sub_B2C2F8(&v43->fields, v44);
    v45 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v45,
      (Il2CppObject *)v43,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v46 = System_Linq_Enumerable__Any_int__24354728(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v45,
            (const MethodInfo_1739FA8 *)Method_System_Linq_Enumerable_Any_int____67413072);
    p_fields = &v43->fields;
    calcSquare = v43->fields.calcSquare;
    v48 = v46;
    v49 = sub_B2C42C(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    WarBoardEvalValueSquare_EvalValueSquare___ctor((WarBoardEvalValueSquare_EvalValueSquare_o *)v49, calcSquare, 0LL);
    v50 = *(_QWORD *)(v40 + 24);
    if ( (int)v50 < 1 )
    {
      v78 = v109;
      goto LABEL_43;
    }
    v51 = 0LL;
    v52 = v109;
    do
    {
      if ( v51 >= (unsigned int)v50 )
        goto LABEL_94;
      if ( !v49 )
        goto LABEL_93;
      v53 = *(_QWORD *)(v40 + 8 * v51 + 32);
      *(_QWORD *)(v49 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_93;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v115,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingBaseList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      v119 = *(System_Collections_Generic_List_Enumerator_T__o *)v115;
      while ( 1 )
      {
        v56 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v119,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v56 )
          break;
        current = v119.fields.current;
        if ( !v119.fields.current )
          sub_B2C434(v56, v57);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v119.fields.current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v61 = *(float *)(v49 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v63 = *(float *)(v49 + 48);
            *(float *)(v49 + 44) = v61 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v49 + 48) = v63 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_B2C434(adjustmentValueB, v65);
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v68 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *(_QWORD *)(v49 + 16),
                      v53,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v68 != 0.0 )
              {
                v69 = value;
                if ( !value )
                  sub_B2C434(v66, v67);
                value->fields.eval = v68 + value->fields.eval;
                v55 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_17;
              }
            }
          }
        }
        else
        {
          v70 = *(float *)(v49 + 36);
          v71 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v72 = *(float *)(v49 + 40);
          *(float *)(v49 + 36) = v70 + (float)v71;
          v73 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v49 + 40) = v72 + (float)(int)v73;
          if ( v48 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_B2C434(v73, v74);
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &v120,
                   (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v77 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *(_QWORD *)(v49 + 16),
                      v53,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v77 != 0.0 )
              {
                v69 = v120;
                if ( !v120 )
                  sub_B2C434(v75, v76);
                v54 = v77 + v120->fields.eval;
                ++v120->fields.addNum;
                v69->fields.eval = v54;
                v55 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_17:
                v69->fields.viewpoint = v55;
              }
            }
          }
        }
      }
      *(_DWORD *)&v115[2 * v52 + 20] = 491;
      v52 = ++v116;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v119,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      v40 = v110;
      ratingBaseList = v111;
      v78 = v52;
      if ( v52 )
      {
        v79 = v52 - 1;
        if ( *(_DWORD *)&v115[2 * v52 + 18] == 491 )
        {
          v78 = --v52;
          v116 = v79;
        }
      }
      LODWORD(v50) = *(_DWORD *)(v110 + 24);
      ++v51;
    }
    while ( (__int64)v51 < (int)v50 );
LABEL_43:
    if ( !p_fields->calcSquare )
      goto LABEL_93;
    if ( !v108 )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v108,
      p_fields->calcSquare->fields._squareIndex_k__BackingField,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v49,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v115,
      dicRatingbaseCalcValue,
      (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v117 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v115;
    while ( 1 )
    {
      v80 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v117,
              (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v80 )
        break;
      v82 = v117.fields.current.fields.value;
      if ( !v117.fields.current.fields.value )
        sub_B2C434(v80, v81);
      v83 = *(float *)&v117.fields.current.fields.value[1].monitor;
      klass_high = HIDWORD(v117.fields.current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v117.fields.current.fields.value[1].klass + 4) = 0LL;
      if ( v83 != 0.0 )
      {
        klass = (int)v82[1].klass;
        if ( klass == 1 )
        {
          if ( !v49 )
            sub_B2C434(v80, v81);
          *(float *)(v49 + 28) = v83 + *(float *)(v49 + 28);
        }
        else if ( !klass )
        {
          if ( !v49 )
            sub_B2C434(v80, v81);
          *(float *)(v49 + 24) = (float)(v83 / (float)klass_high) + *(float *)(v49 + 24);
        }
      }
    }
    *(_DWORD *)&v115[2 * v78 + 20] = 713;
    v86 = ++v116;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v117,
      (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( v86 )
    {
      v87 = v86 - 1;
      if ( *(_DWORD *)&v115[2 * v86 + 18] == 713 )
      {
        --v86;
        v116 = v87;
      }
    }
    v109 = v86;
    if ( !v49 )
      goto LABEL_93;
    v88 = *(float *)(v49 + 24);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    v89 = System_Decimal__op_Explicit(v88, 0LL);
    v90 = System_Decimal__op_Explicit(*(float *)(v49 + 28), 0LL);
    v91 = System_Decimal__op_Explicit(*(float *)(v49 + 36) + *(float *)(v49 + 40), 0LL);
    v92 = System_Decimal__op_Explicit(*(float *)(v49 + 44) + *(float *)(v49 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v89, System_Decimal_TypeInfo->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v121 = System_Decimal__Divide(v89, v91, 0LL);
      *(float *)(v49 + 24) = System_Decimal__op_Explicit_44194696(v121, 0LL) * 1000.0;
    }
    v93 = System_Decimal_TypeInfo;
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v40 = v110;
      ratingBaseList = v111;
      v94 = v107;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v93 = System_Decimal_TypeInfo;
      }
    }
    else
    {
      v40 = v110;
      ratingBaseList = v111;
      v94 = v107;
    }
    if ( System_Decimal__op_Inequality(v90, v93->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v122 = System_Decimal__Divide(v90, v92, 0LL);
      *(float *)(v49 + 28) = System_Decimal__op_Explicit_44194696(v122, 0LL) * 1000.0;
    }
    v41 = v108;
    v42 = v94 + 1;
  }
  while ( (__int64)v42 < *(int *)(v40 + 24) );
LABEL_82:
  v95 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( (BYTE3(WarBoardEvalValueSquare___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v95 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  static_fields = v95->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v95);
      static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    }
    v98 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)sub_B2C42C(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float____ctor(
      _9__3_0,
      v98,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      (const MethodInfo_27042CC *)Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__);
    v99 = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    v99->__9__3_0 = _9__3_0;
    sub_B2C2F8(&v99->__9__3_0, _9__3_0);
  }
  v100 = System_Linq_Enumerable__Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v41,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_1A9A4F0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v41
    || (v101 = v100,
        Instance = (WebViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                         v41,
                                         (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !v104) )
  {
LABEL_93:
    sub_B2C434(Instance, v38);
  }
  v104->fields.averageBenefitValue = v101 / (float)(int)Instance;
  return v41;
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
  sub_B2C2F8(v4, squareData);
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
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0

  if ( (byte_4185741 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardEvalValueSquare___c_TypeInfo, v1);
    byte_4185741 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  if ( (byte_4185742 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__,
                                              *(_QWORD *)&x.fields.key);
    byte_4185742 = 1;
  }
  if ( !value )
    sub_B2C434(this, *(_QWORD *)&x.fields.key);
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
    sub_B2C434(this, x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}