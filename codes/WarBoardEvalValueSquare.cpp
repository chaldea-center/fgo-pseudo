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
  __int64 v12; // x1
  _QWORD *monitor; // x8
  __int64 v14; // x21
  System_Collections_Generic_Dictionary_int__object__o *v15; // x23
  __int64 v16; // x2
  unsigned __int64 v17; // x24
  __int64 v18; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  System_Func_int__bool__o *v26; // x24
  bool v27; // w0
  __int64 v28; // x24
  bool v29; // w29
  __int64 v30; // x27
  _QWORD *v31; // x19
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x9
  __int64 v39; // x8
  unsigned __int64 v40; // x25
  __int64 v41; // x24
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v47; // s8
  float v48; // s0
  float v49; // s8
  __int64 adjustmentValueB; // x0
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  float v54; // s0
  Il2CppObject *v55; // x28
  int32_t v56; // w0
  float v57; // s8
  float v58; // s0
  float v59; // s8
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x0
  __int64 v63; // x1
  float v64; // s0
  float v65; // s0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x9
  float v69; // s0
  int klass_high; // w8
  int klass; // w9
  __int64 v72; // x2
  float v73; // s8
  System_Decimal_o *v74; // x8
  System_Decimal_o *v75; // x29
  System_Decimal_o *v76; // x1
  System_Decimal_o *v77; // x25
  System_Decimal_o *v78; // x8
  System_Decimal_o *v79; // x23
  System_Decimal_o *v80; // x1
  System_Decimal_o *v81; // x24
  System_Decimal_o *v82; // x8
  System_Decimal_o *v83; // x28
  System_Decimal_o *v84; // x8
  __int64 v85; // x1
  __int64 v86; // x2
  System_Decimal_o *v87; // x8
  System_Decimal_o *v88; // x0
  const MethodInfo *v89; // x1
  System_Decimal_c *v90; // x0
  System_Decimal_o *v91; // x8
  System_Decimal_o *v92; // x0
  const MethodInfo *v93; // x1
  WarBoardEvalValueSquare___c_c *v94; // x0
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__3_0; // x19
  Il2CppObject *v97; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *v98; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  float v105; // s0
  float v106; // s8
  float v107; // s0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *result; // x0
  unsigned __int64 v110; // [xsp+28h] [xbp-128h]
  __int64 v111; // [xsp+30h] [xbp-120h]
  System_Decimal_o *v112; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_Dictionary_int__object__o *v113; // [xsp+38h] [xbp-118h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v114; // [xsp+40h] [xbp-110h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v118; // [xsp+68h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v119; // [xsp+90h] [xbp-C0h] BYREF
  Il2CppObject *value; // [xsp+B8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v121; // [xsp+C0h] [xbp-90h] BYREF
  Il2CppObject *v122; // [xsp+E8h] [xbp-68h] BYREF

  if ( (byte_5935FC4 & 1) == 0 )
  {
    sub_21FFC50(&System_Decimal_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_int____91523776);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__);
    sub_21FFC50(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__);
    sub_21FFC50(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__);
    sub_21FFC50(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    sub_21FFC50(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_5935FC4 = 1;
  }
  memset(&v121, 0, sizeof(v121));
  v122 = 0;
  value = 0;
  memset(&v119, 0, sizeof(v119));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_78;
  v14 = monitor[7];
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v14 )
    goto LABEL_78;
  if ( *(int *)(v14 + 24) < 1 )
    goto LABEL_69;
  v17 = 0;
  v113 = v15;
  v114 = ratingBaseList;
  do
  {
    v18 = sub_21FFEBC(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0);
    if ( v17 >= *(unsigned int *)(v14 + 24) )
LABEL_79:
      sub_21FFED4(Instance);
    if ( !v18 )
      goto LABEL_78;
    v110 = v17;
    v25 = *(_QWORD *)(v14 + 8 * v17 + 32);
    *(_QWORD *)(v18 + 16) = v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 16), v25, v19, v20, v21, v22, v23, v24);
    v26 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v26,
      (Il2CppObject *)v18,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      0);
    v27 = System_Linq_Enumerable__Any_int__58934680(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_3834598 *)Method_System_Linq_Enumerable_Any_int____91523776);
    v111 = v18 + 16;
    v28 = *(_QWORD *)(v18 + 16);
    v29 = v27;
    v30 = sub_21FFEBC(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    System_Object___ctor((Il2CppObject *)v30, 0);
    *(_QWORD *)(v30 + 16) = v28;
    v31 = (_QWORD *)(v30 + 16);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 16), v28, v32, v33, v34, v35, v36, v37);
    v38 = v14;
    *(_QWORD *)(v30 + 24) = 0;
    *(_QWORD *)(v30 + 36) = 0;
    *(_QWORD *)(v30 + 44) = 0;
    v39 = *(_QWORD *)(v14 + 24);
    if ( (int)v39 < 1 )
      goto LABEL_38;
    v40 = 0;
    do
    {
      if ( v40 >= (unsigned int)v39 )
        goto LABEL_79;
      v41 = *(_QWORD *)(v38 + 8 * v40 + 32);
      *(_QWORD *)(v30 + 24) = 0;
      if ( !ratingBaseList )
        goto LABEL_78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v118,
        (System_Collections_Generic_List_object__o *)ratingBaseList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      v121.fields._current = v118.fields._current.fields.key;
      *(_OWORD *)&v121.fields._list = *(_OWORD *)&v118.fields._dictionary;
      v118.fields._dictionary = 0;
      *(_QWORD *)&v118.fields._version = &v121;
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v121,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v42 )
          break;
        current = v121.fields._current;
        if ( !v121.fields._current )
          sub_21FFECC(v42, v43);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v121.fields._current, 0);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v47 = *(float *)(v30 + 44);
            v48 = v47 + (float)WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0);
            v49 = *(float *)(v30 + 48);
            *(float *)(v30 + 44) = v48;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0);
            *(float *)(v30 + 48) = v49 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_21FFECC(adjustmentValueB, v51);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v54 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, const MethodInfo *))current->klass->vtable[4].methodPtr)(
                      current,
                      (unsigned int)forceId,
                      *v31,
                      v41,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[4].method);
              if ( v54 != 0.0 )
              {
                v55 = value;
                if ( !value )
                  sub_21FFECC(v52, v53);
                *(float *)&value[1].monitor = v54 + *(float *)&value[1].monitor;
                v56 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
                goto LABEL_30;
              }
            }
          }
        }
        else
        {
          v57 = *(float *)(v30 + 36);
          v58 = v57 + (float)WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0);
          v59 = *(float *)(v30 + 40);
          *(float *)(v30 + 36) = v58;
          v60 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0);
          *(float *)(v30 + 40) = v59 + (float)(int)v60;
          if ( v29 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_21FFECC(v60, v61);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &v122,
                   (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v64 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, const MethodInfo *))current->klass->vtable[4].methodPtr)(
                      current,
                      (unsigned int)forceId,
                      *v31,
                      v41,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[4].method);
              if ( v64 != 0.0 )
              {
                v55 = v122;
                if ( !v122 )
                  sub_21FFECC(v62, v63);
                v65 = v64 + *(float *)&v122[1].monitor;
                ++HIDWORD(v122[1].klass);
                *(float *)&v55[1].monitor = v65;
                v56 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
LABEL_30:
                LODWORD(v55[1].klass) = v56;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v121,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      ratingBaseList = v114;
      v38 = v14;
      ++v40;
      LODWORD(v39) = *(_DWORD *)(v14 + 24);
    }
    while ( (__int64)v40 < (int)v39 );
LABEL_38:
    if ( !*(_QWORD *)v111 )
      goto LABEL_78;
    if ( !v113 )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___Add(
      v113,
      *(_DWORD *)(*(_QWORD *)v111 + 16LL),
      (Il2CppObject *)v30,
      (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v118,
      (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
      (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v119 = v118;
    v118.fields._dictionary = 0;
    *(_QWORD *)&v118.fields._version = &v119;
    while ( 1 )
    {
      v66 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v119,
              (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v66 )
        break;
      v68 = v119.fields._current.fields.value;
      if ( !v119.fields._current.fields.value )
        sub_21FFECC(v66, v67);
      v69 = *(float *)&v119.fields._current.fields.value[1].monitor;
      klass_high = HIDWORD(v119.fields._current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v119.fields._current.fields.value[1].klass + 4) = 0;
      if ( v69 != 0.0 )
      {
        klass = (int)v68[1].klass;
        if ( klass == 1 )
        {
          if ( !v30 )
            sub_21FFECC(v66, v67);
          *(float *)(v30 + 28) = v69 + *(float *)(v30 + 28);
        }
        else if ( !klass )
        {
          if ( !v30 )
            sub_21FFECC(v66, v67);
          *(float *)(v30 + 24) = (float)(v69 / (float)klass_high) + *(float *)(v30 + 24);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v119,
      (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( !v30 )
      goto LABEL_78;
    v73 = *(float *)(v30 + 24);
    v74 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
    if ( !(_DWORD)v74 )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v12, v72);
    v75 = System_Decimal__op_Explicit(v74, v73, 0);
    v77 = v76;
    v79 = System_Decimal__op_Explicit(v78, *(float *)(v30 + 28), 0);
    v81 = v80;
    v83 = System_Decimal__op_Explicit(v82, *(float *)(v30 + 36) + *(float *)(v30 + 40), 0);
    v112 = System_Decimal__op_Explicit(v84, *(float *)(v30 + 44) + *(float *)(v30 + 48), 0);
    if ( System_Decimal__op_Inequality(v75, v77, *(const MethodInfo **)System_Decimal_TypeInfo->static_fields) )
    {
      v87 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
      if ( !(_DWORD)v87 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v85, v86);
      v88 = System_Decimal__Divide(v87, v75, v77, (const MethodInfo *)v83);
      *(float *)(v30 + 24) = System_Decimal__op_Explicit_77321708(v88, v89) * 1000.0;
    }
    v90 = System_Decimal_TypeInfo;
    if ( !*(&System_Decimal_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v85, v86);
      v90 = System_Decimal_TypeInfo;
    }
    ratingBaseList = v114;
    if ( System_Decimal__op_Inequality(v79, v81, *(const MethodInfo **)v90->static_fields) )
    {
      v91 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
      if ( !(_DWORD)v91 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v12, v16);
      v92 = System_Decimal__Divide(v91, v79, v81, (const MethodInfo *)v112);
      *(float *)(v30 + 28) = System_Decimal__op_Explicit_77321708(v92, v93) * 1000.0;
    }
    v15 = v113;
    v17 = v110 + 1;
  }
  while ( (__int64)(v110 + 1) < *(int *)(v14 + 24) );
LABEL_69:
  v94 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( !*(&WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo, v12, v16);
    v94 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  static_fields = v94->static_fields;
  _9__3_0 = (System_Func_T__TResult__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v94->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v94, v12, v16);
      static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    }
    v97 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__object___float____ctor(
      _9__3_0,
      v97,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      0);
    v98 = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    v98->__9__3_0 = (struct System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v98->__9__3_0, (int32_t)_9__3_0, v99, v100, v101, v102, v103, v104);
  }
  v105 = System_Linq_Enumerable__Sum_KeyValuePair_int__object___59140544(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_38669C0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v15
    || (v106 = v105,
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                     v15,
                                     (const MethodInfo_3F689A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !this) )
  {
LABEL_78:
    sub_21FFECC(Instance, v12);
  }
  v107 = (float)(int)Instance;
  result = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v15;
  this->fields.averageBenefitValue = v106 / v107;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v4, (int32_t)squareData, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935FC5 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_5935FC5 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardEvalValueSquare___c_TypeInfo->static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_5935FC6 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__);
    byte_5935FC6 = 1;
  }
  if ( !value )
    sub_21FFECC(this, *(_QWORD *)&x.fields.key);
  return value->fields._EvalValueBenefit_k__BackingField;
}


void WarBoardEvalValueSquare___c__DisplayClass3_0___ctor(
        WarBoardEvalValueSquare___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardEvalValueSquare___c__DisplayClass3_0___Calcurate_b__1(
        WarBoardEvalValueSquare___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *calcSquare; // x8

  calcSquare = this->fields.calcSquare;
  if ( !calcSquare )
    sub_21FFECC(this, *(_QWORD *)&x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}