void WarBoardEvalValueSquare___ctor(WarBoardEvalValueSquare_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *WarBoardEvalValueSquare__Calcurate(
        WarBoardEvalValueSquare_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *dicPieceData,
        System_Collections_Generic_HashSet_int__o *evalValueTargetSquare,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        System_Collections_Generic_List_WarBoardRatingBase__o *ratingBaseList,
        int32_t forceId,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  _QWORD *monitor; // x8
  __int64 v13; // x21
  System_Collections_Generic_Dictionary_int__object__o *v14; // x28
  unsigned __int64 v15; // x25
  __int64 v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  System_Func_int__bool__o *v20; // x24
  bool v21; // w0
  __int64 v22; // x24
  bool v23; // w29
  __int64 v24; // x27
  _QWORD *v25; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x9
  __int64 v29; // x8
  unsigned __int64 v30; // x25
  __int64 v31; // x24
  _BOOL8 v32; // x0
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v36; // s8
  int32_t adjustmentValueA1; // w0
  float v38; // s9
  __int64 adjustmentValueB; // x0
  __int64 v40; // x0
  float v41; // s0
  Il2CppObject *v42; // x28
  int32_t v43; // w0
  float v44; // s8
  int32_t v45; // w0
  float v46; // s9
  __int64 v47; // x0
  __int64 v48; // x0
  float v49; // s0
  float v50; // s0
  _BOOL8 v51; // x0
  Il2CppObject *v52; // x9
  float v53; // s0
  int klass_high; // w8
  int klass; // w9
  float v56; // s8
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v58; // x29
  System_Decimal_o *v59; // x1
  System_Decimal_o *v60; // x26
  System_Decimal_o *v61; // x8
  System_Decimal_o *v62; // x23
  System_Decimal_o *v63; // x1
  System_Decimal_o *v64; // x24
  System_Decimal_o *v65; // x8
  System_Decimal_o *v66; // x28
  System_Decimal_o *v67; // x8
  System_Decimal_o *v68; // x8
  System_Decimal_o *v69; // x0
  const MethodInfo *v70; // x1
  System_Decimal_c *v71; // x0
  System_Decimal_o *v72; // x8
  System_Decimal_o *v73; // x0
  const MethodInfo *v74; // x1
  WarBoardEvalValueSquare___c_c *v75; // x0
  System_Func_T__TResult__o *_9__3_0; // x19
  Il2CppObject *v77; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  float v81; // s0
  float v82; // s8
  float v83; // s0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *result; // x0
  unsigned __int64 v86; // [xsp+28h] [xbp-138h]
  __int64 v87; // [xsp+30h] [xbp-130h]
  System_Decimal_o *v88; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v89; // [xsp+38h] [xbp-128h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v90; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v94; // [xsp+68h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+90h] [xbp-D0h] BYREF
  Il2CppObject *value; // [xsp+C0h] [xbp-A0h] BYREF
  Il2CppObject *v97; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+D0h] [xbp-90h] BYREF

  if ( (byte_4C409B4 & 1) == 0 )
  {
    sub_1C37058(&System_Decimal_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int____78145032);
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__);
    sub_1C37058(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    sub_1C37058(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__);
    sub_1C37058(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__);
    sub_1C37058(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    sub_1C37058(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_4C409B4 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  value = 0;
  v97 = 0;
  memset(&v95, 0, sizeof(v95));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_78;
  v13 = monitor[7];
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v13 )
    goto LABEL_78;
  if ( *(int *)(v13 + 24) < 1 )
    goto LABEL_69;
  v15 = 0;
  v89 = v14;
  v90 = ratingBaseList;
  do
  {
    v16 = sub_1C372A4(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0);
    if ( v15 >= *(unsigned int *)(v13 + 24) )
LABEL_79:
      sub_1C372BC(Instance);
    if ( !v16 )
      goto LABEL_78;
    v19 = *(_QWORD *)(v13 + 8 * v15 + 32);
    v86 = v15;
    *(_QWORD *)(v16 + 16) = v19;
    sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 16), v19, v17, v18);
    v20 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v20,
      (Il2CppObject *)v16,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      0);
    v21 = System_Linq_Enumerable__Any_int__51336052(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_30F5374 *)Method_System_Linq_Enumerable_Any_int____78145032);
    v87 = v16 + 16;
    v22 = *(_QWORD *)(v16 + 16);
    v23 = v21;
    v24 = sub_1C372A4(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    *(_QWORD *)(v24 + 16) = v22;
    v25 = (_QWORD *)(v24 + 16);
    sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 16), v22, v26, v27);
    v28 = v13;
    *(_QWORD *)(v24 + 24) = 0;
    *(_QWORD *)(v24 + 36) = 0;
    *(_QWORD *)(v24 + 44) = 0;
    v29 = *(_QWORD *)(v13 + 24);
    if ( (int)v29 < 1 )
      goto LABEL_38;
    v30 = 0;
    do
    {
      if ( v30 >= (unsigned int)v29 )
        goto LABEL_79;
      v31 = *(_QWORD *)(v28 + 8 * v30 + 32);
      *(_QWORD *)(v24 + 24) = 0;
      if ( !ratingBaseList )
        goto LABEL_78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v94,
        (System_Collections_Generic_List_object__o *)ratingBaseList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      *(_OWORD *)&v98.fields._list = *(_OWORD *)&v94.fields._dictionary;
      v98.fields._current = v94.fields._current.fields.key;
      while ( 1 )
      {
        v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v98,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v32 )
          break;
        current = v98.fields._current;
        if ( !v98.fields._current )
          sub_1C372B4(v32);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v98.fields._current, 0);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v36 = *(float *)(v24 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0);
            v38 = *(float *)(v24 + 48);
            *(float *)(v24 + 44) = v36 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0);
            *(float *)(v24 + 48) = v38 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_1C372B4(adjustmentValueB);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v41 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, const MethodInfo *))current->klass->vtable[4].methodPtr)(
                      current,
                      (unsigned int)forceId,
                      *v25,
                      v31,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[4].method);
              if ( v41 != 0.0 )
              {
                v42 = value;
                if ( !value )
                  sub_1C372B4(v40);
                *(float *)&value[1].monitor = v41 + *(float *)&value[1].monitor;
                v43 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
                goto LABEL_30;
              }
            }
          }
        }
        else
        {
          v44 = *(float *)(v24 + 36);
          v45 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0);
          v46 = *(float *)(v24 + 40);
          *(float *)(v24 + 36) = v44 + (float)v45;
          v47 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0);
          *(float *)(v24 + 40) = v46 + (float)(int)v47;
          if ( v23 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_1C372B4(v47);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &v97,
                   (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v49 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, const MethodInfo *))current->klass->vtable[4].methodPtr)(
                      current,
                      (unsigned int)forceId,
                      *v25,
                      v31,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[4].method);
              if ( v49 != 0.0 )
              {
                v42 = v97;
                if ( !v97 )
                  sub_1C372B4(v48);
                v50 = v49 + *(float *)&v97[1].monitor;
                ++HIDWORD(v97[1].klass);
                *(float *)&v42[1].monitor = v50;
                v43 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
LABEL_30:
                LODWORD(v42[1].klass) = v43;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v98,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      ratingBaseList = v90;
      v28 = v13;
      ++v30;
      LODWORD(v29) = *(_DWORD *)(v13 + 24);
    }
    while ( (__int64)v30 < (int)v29 );
LABEL_38:
    if ( !*(_QWORD *)v87 )
      goto LABEL_78;
    if ( !v89 )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___Add(
      v89,
      *(_DWORD *)(*(_QWORD *)v87 + 16LL),
      (Il2CppObject *)v24,
      (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v94,
      (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
      (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v95 = v94;
    while ( 1 )
    {
      v51 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v95,
              (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v51 )
        break;
      v52 = v95.fields._current.fields.value;
      if ( !v95.fields._current.fields.value )
        sub_1C372B4(v51);
      v53 = *(float *)&v95.fields._current.fields.value[1].monitor;
      klass_high = HIDWORD(v95.fields._current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v95.fields._current.fields.value[1].klass + 4) = 0;
      if ( v53 != 0.0 )
      {
        klass = (int)v52[1].klass;
        if ( klass == 1 )
        {
          if ( !v24 )
            sub_1C372B4(v51);
          *(float *)(v24 + 28) = v53 + *(float *)(v24 + 28);
        }
        else if ( !klass )
        {
          if ( !v24 )
            sub_1C372B4(v51);
          *(float *)(v24 + 24) = (float)(v53 / (float)klass_high) + *(float *)(v24 + 24);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v95,
      (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( !v24 )
      goto LABEL_78;
    v56 = *(float *)(v24 + 24);
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v58 = System_Decimal__op_Explicit(cctor_finished, v56, 0);
    v60 = v59;
    v62 = System_Decimal__op_Explicit(v61, *(float *)(v24 + 28), 0);
    v64 = v63;
    v66 = System_Decimal__op_Explicit(v65, *(float *)(v24 + 36) + *(float *)(v24 + 40), 0);
    v88 = System_Decimal__op_Explicit(v67, *(float *)(v24 + 44) + *(float *)(v24 + 48), 0);
    if ( System_Decimal__op_Inequality(v58, v60, *(const MethodInfo **)System_Decimal_TypeInfo->static_fields) )
    {
      v68 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v68 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v69 = System_Decimal__Divide(v68, v58, v60, (const MethodInfo *)v66);
      *(float *)(v24 + 24) = System_Decimal__op_Explicit_65473212(v69, v70) * 1000.0;
    }
    v71 = System_Decimal_TypeInfo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v71 = System_Decimal_TypeInfo;
    }
    v14 = v89;
    ratingBaseList = v90;
    if ( System_Decimal__op_Inequality(v62, v64, *(const MethodInfo **)v71->static_fields) )
    {
      v72 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v72 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v73 = System_Decimal__Divide(v72, v62, v64, (const MethodInfo *)v88);
      *(float *)(v24 + 28) = System_Decimal__op_Explicit_65473212(v73, v74) * 1000.0;
    }
    v15 = v86 + 1;
  }
  while ( (__int64)(v86 + 1) < *(int *)(v13 + 24) );
LABEL_69:
  v75 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v75 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T__TResult__o *)v75->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75);
      v75 = WarBoardEvalValueSquare___c_TypeInfo;
    }
    v77 = (Il2CppObject *)v75->static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__object___float____ctor(
      _9__3_0,
      v77,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      0);
    static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)_9__3_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v79, v80);
  }
  v81 = System_Linq_Enumerable__Sum_KeyValuePair_int__object___51534036(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (System_Func_TSource__float__o *)_9__3_0,
          (const MethodInfo_31258D4 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v14
    || (v82 = v81,
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                     v14,
                                     (const MethodInfo_33FA234 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !this) )
  {
LABEL_78:
    sub_1C372B4(Instance);
  }
  v83 = v82 / (float)(int)Instance;
  result = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v14;
  this->fields.averageBenefitValue = v83;
  return result;
}


void WarBoardEvalValueSquare_CalcEval___ctor(WarBoardEvalValueSquare_CalcEval_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardEvalValueSquare_EvalValueSquare___ctor(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        WarBoardSquareData_o *squareData,
        const MethodInfo *method)
{
  WarBoardEvalValueSquare_EvalValueSquare_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)v4, (int32_t)squareData, v5, v6);
  v4->monitor = 0;
  *(_QWORD *)&v4->fields._EvalValueBenefit_k__BackingField = 0;
  *(struct WarBoardSquareData_o **)((char *)&v4->fields.squareData + 4) = 0;
}


float WarBoardEvalValueSquare_EvalValueSquare__get_BenAdjustmentValueA1(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._BenAdjustmentValueA1_k__BackingField;
}


float WarBoardEvalValueSquare_EvalValueSquare__get_BenAdjustmentValueB(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._BenAdjustmentValueB_k__BackingField;
}


float WarBoardEvalValueSquare_EvalValueSquare__get_EvalValue(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._EvalValue_k__BackingField;
}


float WarBoardEvalValueSquare_EvalValueSquare__get_EvalValueBenefit(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._EvalValueBenefit_k__BackingField;
}


float WarBoardEvalValueSquare_EvalValueSquare__get_EvalValueWarsituation(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._EvalValueWarsituation_k__BackingField;
}


float WarBoardEvalValueSquare_EvalValueSquare__get_WarAdjustmentValueA1(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._WarAdjustmentValueA1_k__BackingField;
}


float WarBoardEvalValueSquare_EvalValueSquare__get_WarAdjustmentValueB(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._WarAdjustmentValueB_k__BackingField;
}


void WarBoardEvalValueSquare_EvalValueSquare__set_BenAdjustmentValueA1(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._BenAdjustmentValueA1_k__BackingField = value;
}


void WarBoardEvalValueSquare_EvalValueSquare__set_BenAdjustmentValueB(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._BenAdjustmentValueB_k__BackingField = value;
}


void WarBoardEvalValueSquare_EvalValueSquare__set_EvalValue(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EvalValue_k__BackingField = value;
}


void WarBoardEvalValueSquare_EvalValueSquare__set_EvalValueBenefit(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EvalValueBenefit_k__BackingField = value;
}


void WarBoardEvalValueSquare_EvalValueSquare__set_EvalValueWarsituation(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._EvalValueWarsituation_k__BackingField = value;
}


void WarBoardEvalValueSquare_EvalValueSquare__set_WarAdjustmentValueA1(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._WarAdjustmentValueA1_k__BackingField = value;
}


void WarBoardEvalValueSquare_EvalValueSquare__set_WarAdjustmentValueB(
        WarBoardEvalValueSquare_EvalValueSquare_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._WarAdjustmentValueB_k__BackingField = value;
}


void WarBoardEvalValueSquare___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C409B5 & 1) == 0 )
  {
    sub_1C37058(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_4C409B5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardEvalValueSquare___c_TypeInfo->static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardEvalValueSquare___c___ctor(WarBoardEvalValueSquare___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float WarBoardEvalValueSquare___c___Calcurate_b__3_0(
        WarBoardEvalValueSquare___c_o *this,
        System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__o x,
        const MethodInfo *method)
{
  struct WarBoardEvalValueSquare_EvalValueSquare_o *value; // x19

  value = x.fields.value;
  if ( (byte_4C409B6 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__);
    byte_4C409B6 = 1;
  }
  if ( !value )
    sub_1C372B4(this);
  return value->fields._EvalValueBenefit_k__BackingField;
}


void WarBoardEvalValueSquare___c__DisplayClass3_0___ctor(
        WarBoardEvalValueSquare___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardEvalValueSquare___c__DisplayClass3_0___Calcurate_b__1(
        WarBoardEvalValueSquare___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *calcSquare; // x8

  calcSquare = this->fields.calcSquare;
  if ( !calcSquare )
    sub_1C372B4(this);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}