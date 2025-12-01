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
  System_Collections_Generic_Dictionary_int__object__o *v15; // x28
  unsigned __int64 v16; // x25
  __int64 v17; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1
  System_Func_int__bool__o *v25; // x24
  bool v26; // w0
  __int64 v27; // x24
  bool v28; // w29
  __int64 v29; // x27
  _QWORD *v30; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  __int64 v37; // x9
  __int64 v38; // x8
  unsigned __int64 v39; // x25
  __int64 v40; // x24
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v46; // s8
  int32_t adjustmentValueA1; // w0
  float v48; // s9
  __int64 adjustmentValueB; // x0
  __int64 v50; // x1
  __int64 v51; // x0
  __int64 v52; // x1
  float v53; // s0
  Il2CppObject *v54; // x28
  int32_t v55; // w0
  float v56; // s8
  int32_t v57; // w0
  float v58; // s9
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x0
  __int64 v62; // x1
  float v63; // s0
  float v64; // s0
  _BOOL8 v65; // x0
  __int64 v66; // x1
  Il2CppObject *v67; // x9
  float v68; // s0
  int klass_high; // w8
  int klass; // w9
  float v71; // s8
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v73; // x29
  System_Decimal_o *v74; // x1
  System_Decimal_o *v75; // x26
  System_Decimal_o *v76; // x8
  System_Decimal_o *v77; // x23
  System_Decimal_o *v78; // x1
  System_Decimal_o *v79; // x24
  System_Decimal_o *v80; // x8
  System_Decimal_o *v81; // x28
  System_Decimal_o *v82; // x8
  System_Decimal_o *v83; // x8
  System_Decimal_o *v84; // x0
  const MethodInfo *v85; // x1
  System_Decimal_c *v86; // x0
  System_Decimal_o *v87; // x8
  System_Decimal_o *v88; // x0
  const MethodInfo *v89; // x1
  WarBoardEvalValueSquare___c_c *v90; // x0
  System_Func_T__TResult__o *_9__3_0; // x19
  Il2CppObject *v92; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  float v100; // s0
  float v101; // s8
  float v102; // s0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *result; // x0
  unsigned __int64 v105; // [xsp+28h] [xbp-138h]
  __int64 v106; // [xsp+30h] [xbp-130h]
  System_Decimal_o *v107; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v108; // [xsp+38h] [xbp-128h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v109; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v113; // [xsp+68h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v114; // [xsp+90h] [xbp-D0h] BYREF
  Il2CppObject *value; // [xsp+C0h] [xbp-A0h] BYREF
  Il2CppObject *v116; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+D0h] [xbp-90h] BYREF

  if ( (byte_4CC4DBB & 1) == 0 )
  {
    sub_1C713B0(&System_Decimal_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_int____78677096);
    sub_1C713B0(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__);
    sub_1C713B0(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    sub_1C713B0(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__);
    sub_1C713B0(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__);
    sub_1C713B0(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    sub_1C713B0(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_4CC4DBB = 1;
  }
  memset(&v117, 0, sizeof(v117));
  value = 0;
  v116 = 0;
  memset(&v114, 0, sizeof(v114));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_78;
  v14 = monitor[7];
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v14 )
    goto LABEL_78;
  if ( *(int *)(v14 + 24) < 1 )
    goto LABEL_69;
  v16 = 0;
  v108 = v15;
  v109 = ratingBaseList;
  do
  {
    v17 = sub_1C715FC(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0);
    if ( v16 >= *(unsigned int *)(v14 + 24) )
LABEL_79:
      sub_1C71610(Instance);
    if ( !v17 )
      goto LABEL_78;
    v24 = *(_QWORD *)(v14 + 8 * v16 + 32);
    v105 = v16;
    *(_QWORD *)(v17 + 16) = v24;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 16), v24, v18, v19, v20, v21, v22, v23);
    v25 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v25,
      (Il2CppObject *)v17,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      0);
    v26 = System_Linq_Enumerable__Any_int__51742760(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v25,
            (const MethodInfo_3158828 *)Method_System_Linq_Enumerable_Any_int____78677096);
    v106 = v17 + 16;
    v27 = *(_QWORD *)(v17 + 16);
    v28 = v26;
    v29 = sub_1C715FC(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0);
    *(_QWORD *)(v29 + 16) = v27;
    v30 = (_QWORD *)(v29 + 16);
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v29 + 16), v27, v31, v32, v33, v34, v35, v36);
    v37 = v14;
    *(_QWORD *)(v29 + 24) = 0;
    *(_QWORD *)(v29 + 36) = 0;
    *(_QWORD *)(v29 + 44) = 0;
    v38 = *(_QWORD *)(v14 + 24);
    if ( (int)v38 < 1 )
      goto LABEL_38;
    v39 = 0;
    do
    {
      if ( v39 >= (unsigned int)v38 )
        goto LABEL_79;
      v40 = *(_QWORD *)(v37 + 8 * v39 + 32);
      *(_QWORD *)(v29 + 24) = 0;
      if ( !ratingBaseList )
        goto LABEL_78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v113,
        (System_Collections_Generic_List_object__o *)ratingBaseList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      *(_OWORD *)&v117.fields._list = *(_OWORD *)&v113.fields._dictionary;
      v117.fields._current = v113.fields._current.fields.key;
      while ( 1 )
      {
        v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v117,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v41 )
          break;
        current = v117.fields._current;
        if ( !v117.fields._current )
          sub_1C71608(v41, v42);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v117.fields._current, 0);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v46 = *(float *)(v29 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0);
            v48 = *(float *)(v29 + 48);
            *(float *)(v29 + 44) = v46 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0);
            *(float *)(v29 + 48) = v48 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_1C71608(adjustmentValueB, v50);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v53 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, const MethodInfo *))current->klass->vtable[4].methodPtr)(
                      current,
                      (unsigned int)forceId,
                      *v30,
                      v40,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[4].method);
              if ( v53 != 0.0 )
              {
                v54 = value;
                if ( !value )
                  sub_1C71608(v51, v52);
                *(float *)&value[1].monitor = v53 + *(float *)&value[1].monitor;
                v55 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
                goto LABEL_30;
              }
            }
          }
        }
        else
        {
          v56 = *(float *)(v29 + 36);
          v57 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0);
          v58 = *(float *)(v29 + 40);
          *(float *)(v29 + 36) = v56 + (float)v57;
          v59 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0);
          *(float *)(v29 + 40) = v58 + (float)(int)v59;
          if ( v28 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_1C71608(v59, v60);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &v116,
                   (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v63 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, const MethodInfo *))current->klass->vtable[4].methodPtr)(
                      current,
                      (unsigned int)forceId,
                      *v30,
                      v40,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[4].method);
              if ( v63 != 0.0 )
              {
                v54 = v116;
                if ( !v116 )
                  sub_1C71608(v61, v62);
                v64 = v63 + *(float *)&v116[1].monitor;
                ++HIDWORD(v116[1].klass);
                *(float *)&v54[1].monitor = v64;
                v55 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0);
LABEL_30:
                LODWORD(v54[1].klass) = v55;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v117,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      ratingBaseList = v109;
      v37 = v14;
      ++v39;
      LODWORD(v38) = *(_DWORD *)(v14 + 24);
    }
    while ( (__int64)v39 < (int)v38 );
LABEL_38:
    if ( !*(_QWORD *)v106 )
      goto LABEL_78;
    if ( !v108 )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___Add(
      v108,
      *(_DWORD *)(*(_QWORD *)v106 + 16LL),
      (Il2CppObject *)v29,
      (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v113,
      (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
      (const MethodInfo_34626CC *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v114 = v113;
    while ( 1 )
    {
      v65 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v114,
              (const MethodInfo_35BA0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v65 )
        break;
      v67 = v114.fields._current.fields.value;
      if ( !v114.fields._current.fields.value )
        sub_1C71608(v65, v66);
      v68 = *(float *)&v114.fields._current.fields.value[1].monitor;
      klass_high = HIDWORD(v114.fields._current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v114.fields._current.fields.value[1].klass + 4) = 0;
      if ( v68 != 0.0 )
      {
        klass = (int)v67[1].klass;
        if ( klass == 1 )
        {
          if ( !v29 )
            sub_1C71608(v65, v66);
          *(float *)(v29 + 28) = v68 + *(float *)(v29 + 28);
        }
        else if ( !klass )
        {
          if ( !v29 )
            sub_1C71608(v65, v66);
          *(float *)(v29 + 24) = (float)(v68 / (float)klass_high) + *(float *)(v29 + 24);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v114,
      (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( !v29 )
      goto LABEL_78;
    v71 = *(float *)(v29 + 24);
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v73 = System_Decimal__op_Explicit(cctor_finished, v71, 0);
    v75 = v74;
    v77 = System_Decimal__op_Explicit(v76, *(float *)(v29 + 28), 0);
    v79 = v78;
    v81 = System_Decimal__op_Explicit(v80, *(float *)(v29 + 36) + *(float *)(v29 + 40), 0);
    v107 = System_Decimal__op_Explicit(v82, *(float *)(v29 + 44) + *(float *)(v29 + 48), 0);
    if ( System_Decimal__op_Inequality(v73, v75, *(const MethodInfo **)System_Decimal_TypeInfo->static_fields) )
    {
      v83 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v83 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v84 = System_Decimal__Divide(v83, v73, v75, (const MethodInfo *)v81);
      *(float *)(v29 + 24) = System_Decimal__op_Explicit_65941516(v84, v85) * 1000.0;
    }
    v86 = System_Decimal_TypeInfo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v86 = System_Decimal_TypeInfo;
    }
    v15 = v108;
    ratingBaseList = v109;
    if ( System_Decimal__op_Inequality(v77, v79, *(const MethodInfo **)v86->static_fields) )
    {
      v87 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v87 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v88 = System_Decimal__Divide(v87, v77, v79, (const MethodInfo *)v107);
      *(float *)(v29 + 28) = System_Decimal__op_Explicit_65941516(v88, v89) * 1000.0;
    }
    v16 = v105 + 1;
  }
  while ( (__int64)(v105 + 1) < *(int *)(v14 + 24) );
LABEL_69:
  v90 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v90 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T__TResult__o *)v90->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90);
      v90 = WarBoardEvalValueSquare___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v90->static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__object___float____ctor(
      _9__3_0,
      v92,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      0);
    static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)_9__3_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v94, v95, v96, v97, v98, v99);
  }
  v100 = System_Linq_Enumerable__Sum_KeyValuePair_int__object___51942788(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_3189584 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v15
    || (v101 = v100,
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                     v15,
                                     (const MethodInfo_3461F44 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !this) )
  {
LABEL_78:
    sub_1C71608(Instance, v12);
  }
  v102 = v101 / (float)(int)Instance;
  result = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v15;
  this->fields.averageBenefitValue = v102;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)v4, (int32_t)squareData, v5, v6, v7, v8, v9, v10);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC4DBC & 1) == 0 )
  {
    sub_1C713B0(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_4CC4DBC = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardEvalValueSquare___c_TypeInfo->static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields,
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
  if ( (byte_4CC4DBD & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__);
    byte_4CC4DBD = 1;
  }
  if ( !value )
    sub_1C71608(this, *(_QWORD *)&x.fields.key);
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
    sub_1C71608(this, x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}