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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  _QWORD *monitor; // x8
  __int64 v14; // x21
  System_Collections_Generic_Dictionary_int__object__o *v15; // x28
  unsigned __int64 v16; // x25
  __int64 v17; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  System_Func_int__bool__o *v21; // x24
  bool v22; // w0
  __int64 v23; // x24
  bool v24; // w29
  __int64 v25; // x27
  _QWORD *v26; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x9
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  __int64 v32; // x24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v38; // s8
  int32_t adjustmentValueA1; // w0
  float v40; // s9
  __int64 adjustmentValueB; // x0
  __int64 v42; // x1
  __int64 v43; // x0
  __int64 v44; // x1
  float v45; // s0
  Il2CppObject *v46; // x28
  int32_t v47; // w0
  float v48; // s8
  int32_t v49; // w0
  float v50; // s9
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x0
  __int64 v54; // x1
  float v55; // s0
  float v56; // s0
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *v59; // x9
  float v60; // s0
  int klass_high; // w8
  int klass; // w9
  float v63; // s8
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v65; // x29
  System_Decimal_o *v66; // x1
  System_Decimal_o *v67; // x26
  System_Decimal_o *v68; // x8
  System_Decimal_o *v69; // x23
  System_Decimal_o *v70; // x1
  System_Decimal_o *v71; // x24
  System_Decimal_o *v72; // x8
  System_Decimal_o *v73; // x28
  System_Decimal_o *v74; // x8
  System_Decimal_o *v75; // x8
  System_Decimal_o *v76; // x0
  const MethodInfo *v77; // x1
  System_Decimal_c *v78; // x0
  System_Decimal_o *v79; // x8
  System_Decimal_o *v80; // x0
  const MethodInfo *v81; // x1
  WarBoardEvalValueSquare___c_c *v82; // x0
  System_Func_T__TResult__o *_9__3_0; // x19
  Il2CppObject *v84; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  float v88; // s0
  float v89; // s8
  float v90; // s0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *result; // x0
  unsigned __int64 v93; // [xsp+28h] [xbp-138h]
  __int64 v94; // [xsp+30h] [xbp-130h]
  System_Decimal_o *v95; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v96; // [xsp+38h] [xbp-128h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v97; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v101; // [xsp+68h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v102; // [xsp+90h] [xbp-D0h] BYREF
  Il2CppObject *value; // [xsp+C0h] [xbp-A0h] BYREF
  Il2CppObject *v104; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+D0h] [xbp-90h] BYREF

  if ( (byte_4A58DBF & 1) == 0 )
  {
    sub_1B885B0(&System_Decimal_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int____76126832);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__);
    sub_1B885B0(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    sub_1B885B0(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__);
    sub_1B885B0(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__);
    sub_1B885B0(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    sub_1B885B0(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_4A58DBF = 1;
  }
  memset(&v105, 0, sizeof(v105));
  value = 0LL;
  v104 = 0LL;
  memset(&v102, 0, sizeof(v102));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_78;
  v14 = monitor[7];
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v14 )
    goto LABEL_78;
  if ( *(int *)(v14 + 24) < 1 )
    goto LABEL_69;
  v16 = 0LL;
  v96 = v15;
  v97 = ratingBaseList;
  do
  {
    v17 = sub_1B887FC(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( v16 >= *(unsigned int *)(v14 + 24) )
LABEL_79:
      sub_1B88814(Instance, v12);
    if ( !v17 )
      goto LABEL_78;
    v20 = *(_QWORD *)(v14 + 8 * v16 + 32);
    v93 = v16;
    *(_QWORD *)(v17 + 16) = v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), v20, v18, v19);
    v21 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v21,
      (Il2CppObject *)v17,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      0LL);
    v22 = System_Linq_Enumerable__Any_int__48819840(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v21,
            (const MethodInfo_2E8EE80 *)Method_System_Linq_Enumerable_Any_int____76126832);
    v94 = v17 + 16;
    v23 = *(_QWORD *)(v17 + 16);
    v24 = v22;
    v25 = sub_1B887FC(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    *(_QWORD *)(v25 + 16) = v23;
    v26 = (_QWORD *)(v25 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 16), v23, v27, v28);
    v29 = v14;
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 36) = 0LL;
    *(_QWORD *)(v25 + 44) = 0LL;
    v30 = *(_QWORD *)(v14 + 24);
    if ( (int)v30 < 1 )
      goto LABEL_38;
    v31 = 0LL;
    do
    {
      if ( v31 >= (unsigned int)v30 )
        goto LABEL_79;
      v32 = *(_QWORD *)(v29 + 8 * v31 + 32);
      *(_QWORD *)(v25 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v101,
        (System_Collections_Generic_List_object__o *)ratingBaseList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      *(_OWORD *)&v105.fields._list = *(_OWORD *)&v101.fields._dictionary;
      v105.fields._current = v101.fields._current.fields.key;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v105,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v33 )
          break;
        current = v105.fields._current;
        if ( !v105.fields._current )
          sub_1B8880C(v33, v34);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v105.fields._current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v38 = *(float *)(v25 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v40 = *(float *)(v25 + 48);
            *(float *)(v25 + 44) = v38 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v25 + 48) = v40 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_1B8880C(adjustmentValueB, v42);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v45 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *v26,
                      v32,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v45 != 0.0 )
              {
                v46 = value;
                if ( !value )
                  sub_1B8880C(v43, v44);
                *(float *)&value[1].monitor = v45 + *(float *)&value[1].monitor;
                v47 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_30;
              }
            }
          }
        }
        else
        {
          v48 = *(float *)(v25 + 36);
          v49 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v50 = *(float *)(v25 + 40);
          *(float *)(v25 + 36) = v48 + (float)v49;
          v51 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v25 + 40) = v50 + (float)(int)v51;
          if ( v24 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_1B8880C(v51, v52);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &v104,
                   (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v55 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *v26,
                      v32,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v55 != 0.0 )
              {
                v46 = v104;
                if ( !v104 )
                  sub_1B8880C(v53, v54);
                v56 = v55 + *(float *)&v104[1].monitor;
                ++HIDWORD(v104[1].klass);
                *(float *)&v46[1].monitor = v56;
                v47 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_30:
                LODWORD(v46[1].klass) = v47;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v105,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      ratingBaseList = v97;
      v29 = v14;
      ++v31;
      LODWORD(v30) = *(_DWORD *)(v14 + 24);
    }
    while ( (__int64)v31 < (int)v30 );
LABEL_38:
    if ( !*(_QWORD *)v94 )
      goto LABEL_78;
    if ( !v96 )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___Add(
      v96,
      *(_DWORD *)(*(_QWORD *)v94 + 16LL),
      (Il2CppObject *)v25,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v101,
      (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
      (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v102 = v101;
    while ( 1 )
    {
      v57 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v102,
              (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v57 )
        break;
      v59 = v102.fields._current.fields.value;
      if ( !v102.fields._current.fields.value )
        sub_1B8880C(v57, v58);
      v60 = *(float *)&v102.fields._current.fields.value[1].monitor;
      klass_high = HIDWORD(v102.fields._current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v102.fields._current.fields.value[1].klass + 4) = 0LL;
      if ( v60 != 0.0 )
      {
        klass = (int)v59[1].klass;
        if ( klass == 1 )
        {
          if ( !v25 )
            sub_1B8880C(v57, v58);
          *(float *)(v25 + 28) = v60 + *(float *)(v25 + 28);
        }
        else if ( !klass )
        {
          if ( !v25 )
            sub_1B8880C(v57, v58);
          *(float *)(v25 + 24) = (float)(v60 / (float)klass_high) + *(float *)(v25 + 24);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v102,
      (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( !v25 )
      goto LABEL_78;
    v63 = *(float *)(v25 + 24);
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v65 = System_Decimal__op_Explicit(cctor_finished, v63, 0LL);
    v67 = v66;
    v69 = System_Decimal__op_Explicit(v68, *(float *)(v25 + 28), 0LL);
    v71 = v70;
    v73 = System_Decimal__op_Explicit(v72, *(float *)(v25 + 36) + *(float *)(v25 + 40), 0LL);
    v95 = System_Decimal__op_Explicit(v74, *(float *)(v25 + 44) + *(float *)(v25 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v65, v67, *(const MethodInfo **)System_Decimal_TypeInfo->static_fields) )
    {
      v75 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v75 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v76 = System_Decimal__Divide(v75, v65, v67, (const MethodInfo *)v73);
      *(float *)(v25 + 24) = System_Decimal__op_Explicit_62914912(v76, v77) * 1000.0;
    }
    v78 = System_Decimal_TypeInfo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v78 = System_Decimal_TypeInfo;
    }
    v15 = v96;
    ratingBaseList = v97;
    if ( System_Decimal__op_Inequality(v69, v71, *(const MethodInfo **)v78->static_fields) )
    {
      v79 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v79 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v80 = System_Decimal__Divide(v79, v69, v71, (const MethodInfo *)v95);
      *(float *)(v25 + 28) = System_Decimal__op_Explicit_62914912(v80, v81) * 1000.0;
    }
    v16 = v93 + 1;
  }
  while ( (__int64)(v93 + 1) < *(int *)(v14 + 24) );
LABEL_69:
  v82 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v82 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T__TResult__o *)v82->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v82->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v82);
      v82 = WarBoardEvalValueSquare___c_TypeInfo;
    }
    v84 = (Il2CppObject *)v82->static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__object___float____ctor(
      _9__3_0,
      v84,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      0LL);
    static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v86, v87);
  }
  v88 = System_Linq_Enumerable__Sum_KeyValuePair_int__object___48984460(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Func_TSource__float__o *)_9__3_0,
          (const MethodInfo_2EB718C *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v15
    || (v89 = v88,
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                     v15,
                                     (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !this) )
  {
LABEL_78:
    sub_1B8880C(Instance, v12);
  }
  v90 = v89 / (float)(int)Instance;
  result = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v15;
  this->fields.averageBenefitValue = v90;
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
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4, (int32_t)squareData, v5, v6);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58DC0 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardEvalValueSquare___c_TypeInfo);
    byte_4A58DC0 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardEvalValueSquare___c_TypeInfo->static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  if ( (byte_4A58DC1 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__);
    byte_4A58DC1 = 1;
  }
  if ( !value )
    sub_1B8880C(this, *(_QWORD *)&x.fields.key);
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
    sub_1B8880C(this, x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}