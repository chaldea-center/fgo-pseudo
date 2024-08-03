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
  __int64 v37; // x2
  _QWORD *monitor; // x8
  __int64 v39; // x21
  System_Collections_Generic_Dictionary_int__object__o *v40; // x28
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x25
  __int64 v44; // x19
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x2
  System_Func_int__bool__o *v51; // x24
  bool v52; // w0
  __int64 v53; // x24
  bool v54; // w29
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x27
  _QWORD *v58; // x19
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x9
  __int64 v62; // x8
  unsigned __int64 v63; // x25
  __int64 v64; // x24
  _BOOL8 v65; // x0
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v69; // s8
  int32_t adjustmentValueA1; // w0
  float v71; // s9
  __int64 adjustmentValueB; // x0
  __int64 v73; // x0
  float v74; // s0
  Il2CppObject *v75; // x28
  int32_t v76; // w0
  float v77; // s8
  int32_t v78; // w0
  float v79; // s9
  __int64 v80; // x0
  __int64 v81; // x0
  float v82; // s0
  float v83; // s0
  _BOOL8 v84; // x0
  Il2CppObject *v85; // x9
  float v86; // s0
  int klass_high; // w8
  int klass; // w9
  float v89; // s8
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v91; // x29
  System_Decimal_o *v92; // x1
  System_Decimal_o *v93; // x26
  System_Decimal_o *v94; // x8
  System_Decimal_o *v95; // x23
  System_Decimal_o *v96; // x1
  System_Decimal_o *v97; // x24
  System_Decimal_o *v98; // x8
  System_Decimal_o *v99; // x28
  System_Decimal_o *v100; // x8
  System_Decimal_o *v101; // x8
  System_Decimal_o *v102; // x0
  const MethodInfo *v103; // x1
  System_Decimal_c *v104; // x0
  System_Decimal_o *v105; // x8
  System_Decimal_o *v106; // x0
  const MethodInfo *v107; // x1
  WarBoardEvalValueSquare___c_c *v108; // x0
  System_Func_T__TResult__o *_9__3_0; // x19
  Il2CppObject *v110; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  float v114; // s0
  float v115; // s8
  float v116; // s0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *result; // x0
  unsigned __int64 v119; // [xsp+28h] [xbp-138h]
  __int64 v120; // [xsp+30h] [xbp-130h]
  System_Decimal_o *v121; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v122; // [xsp+38h] [xbp-128h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v123; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v127; // [xsp+68h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v128; // [xsp+90h] [xbp-D0h] BYREF
  Il2CppObject *value; // [xsp+C0h] [xbp-A0h] BYREF
  Il2CppObject *v130; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+D0h] [xbp-90h] BYREF

  if ( (byte_49FA0A7 & 1) == 0 )
  {
    sub_1B640C8(&System_Decimal_TypeInfo, dicPieceData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__,
      v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__,
      v15);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo, v16);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_int____75747256, v17);
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__, v19);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__,
      v20);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__,
      v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__, v23);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__,
      v24);
    sub_1B640C8(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v25);
    sub_1B640C8(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo, v26);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v27);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__, v29);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v30);
    sub_1B640C8(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__, v31);
    sub_1B640C8(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__, v32);
    sub_1B640C8(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v33);
    sub_1B640C8(&WarBoardEvalValueSquare___c_TypeInfo, v34);
    byte_49FA0A7 = 1;
  }
  memset(&v131, 0, sizeof(v131));
  value = 0LL;
  v130 = 0LL;
  memset(&v128, 0, sizeof(v128));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_78;
  v39 = monitor[7];
  v40 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo,
                                                                  v36,
                                                                  v37);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v40,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v39 )
    goto LABEL_78;
  if ( *(int *)(v39 + 24) < 1 )
    goto LABEL_69;
  v43 = 0LL;
  v122 = v40;
  v123 = ratingBaseList;
  do
  {
    v44 = sub_1B64314(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v41, v42);
    System_Object___ctor((Il2CppObject *)v44, 0LL);
    if ( v43 >= *(unsigned int *)(v39 + 24) )
LABEL_79:
      sub_1B6432C(Instance, v45);
    if ( !v44 )
      goto LABEL_78;
    v48 = *(_QWORD *)(v39 + 8 * v43 + 32);
    v119 = v43;
    *(_QWORD *)(v44 + 16) = v48;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 16), v48, v46, v47);
    v51 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v49, v50);
    System_Func_int__bool____ctor(
      v51,
      (Il2CppObject *)v44,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      0LL);
    v52 = System_Linq_Enumerable__Any_int__48531000(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v51,
            (const MethodInfo_2E48638 *)Method_System_Linq_Enumerable_Any_int____75747256);
    v120 = v44 + 16;
    v53 = *(_QWORD *)(v44 + 16);
    v54 = v52;
    v57 = sub_1B64314(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v55, v56);
    System_Object___ctor((Il2CppObject *)v57, 0LL);
    *(_QWORD *)(v57 + 16) = v53;
    v58 = (_QWORD *)(v57 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 16), v53, v59, v60);
    v61 = v39;
    *(_QWORD *)(v57 + 24) = 0LL;
    *(_QWORD *)(v57 + 36) = 0LL;
    *(_QWORD *)(v57 + 44) = 0LL;
    v62 = *(_QWORD *)(v39 + 24);
    if ( (int)v62 < 1 )
      goto LABEL_38;
    v63 = 0LL;
    do
    {
      if ( v63 >= (unsigned int)v62 )
        goto LABEL_79;
      v64 = *(_QWORD *)(v61 + 8 * v63 + 32);
      *(_QWORD *)(v57 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v127,
        (System_Collections_Generic_List_object__o *)ratingBaseList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      *(_OWORD *)&v131.fields._list = *(_OWORD *)&v127.fields._dictionary;
      v131.fields._current = v127.fields._current.fields.key;
      while ( 1 )
      {
        v65 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v131,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v65 )
          break;
        current = v131.fields._current;
        if ( !v131.fields._current )
          sub_1B64324(v65);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v131.fields._current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v69 = *(float *)(v57 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v71 = *(float *)(v57 + 48);
            *(float *)(v57 + 44) = v69 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v57 + 48) = v71 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_1B64324(adjustmentValueB);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v74 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *v58,
                      v64,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v74 != 0.0 )
              {
                v75 = value;
                if ( !value )
                  sub_1B64324(v73);
                *(float *)&value[1].monitor = v74 + *(float *)&value[1].monitor;
                v76 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_30;
              }
            }
          }
        }
        else
        {
          v77 = *(float *)(v57 + 36);
          v78 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v79 = *(float *)(v57 + 40);
          *(float *)(v57 + 36) = v77 + (float)v78;
          v80 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v57 + 40) = v79 + (float)(int)v80;
          if ( v54 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_1B64324(v80);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &v130,
                   (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v82 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *v58,
                      v64,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v82 != 0.0 )
              {
                v75 = v130;
                if ( !v130 )
                  sub_1B64324(v81);
                v83 = v82 + *(float *)&v130[1].monitor;
                ++HIDWORD(v130[1].klass);
                *(float *)&v75[1].monitor = v83;
                v76 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_30:
                LODWORD(v75[1].klass) = v76;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v131,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      ratingBaseList = v123;
      v61 = v39;
      ++v63;
      LODWORD(v62) = *(_DWORD *)(v39 + 24);
    }
    while ( (__int64)v63 < (int)v62 );
LABEL_38:
    if ( !*(_QWORD *)v120 )
      goto LABEL_78;
    if ( !v122 )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___Add(
      v122,
      *(_DWORD *)(*(_QWORD *)v120 + 16LL),
      (Il2CppObject *)v57,
      (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v127,
      (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
      (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v128 = v127;
    while ( 1 )
    {
      v84 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v128,
              (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v84 )
        break;
      v85 = v128.fields._current.fields.value;
      if ( !v128.fields._current.fields.value )
        sub_1B64324(v84);
      v86 = *(float *)&v128.fields._current.fields.value[1].monitor;
      klass_high = HIDWORD(v128.fields._current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v128.fields._current.fields.value[1].klass + 4) = 0LL;
      if ( v86 != 0.0 )
      {
        klass = (int)v85[1].klass;
        if ( klass == 1 )
        {
          if ( !v57 )
            sub_1B64324(v84);
          *(float *)(v57 + 28) = v86 + *(float *)(v57 + 28);
        }
        else if ( !klass )
        {
          if ( !v57 )
            sub_1B64324(v84);
          *(float *)(v57 + 24) = (float)(v86 / (float)klass_high) + *(float *)(v57 + 24);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v128,
      (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( !v57 )
      goto LABEL_78;
    v89 = *(float *)(v57 + 24);
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v91 = System_Decimal__op_Explicit(cctor_finished, v89, 0LL);
    v93 = v92;
    v95 = System_Decimal__op_Explicit(v94, *(float *)(v57 + 28), 0LL);
    v97 = v96;
    v99 = System_Decimal__op_Explicit(v98, *(float *)(v57 + 36) + *(float *)(v57 + 40), 0LL);
    v121 = System_Decimal__op_Explicit(v100, *(float *)(v57 + 44) + *(float *)(v57 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v91, v93, *(const MethodInfo **)System_Decimal_TypeInfo->static_fields) )
    {
      v101 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v101 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v102 = System_Decimal__Divide(v101, v91, v93, (const MethodInfo *)v99);
      *(float *)(v57 + 24) = System_Decimal__op_Explicit_62583268(v102, v103) * 1000.0;
    }
    v104 = System_Decimal_TypeInfo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v104 = System_Decimal_TypeInfo;
    }
    v40 = v122;
    ratingBaseList = v123;
    if ( System_Decimal__op_Inequality(v95, v97, *(const MethodInfo **)v104->static_fields) )
    {
      v105 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v105 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v106 = System_Decimal__Divide(v105, v95, v97, (const MethodInfo *)v121);
      *(float *)(v57 + 28) = System_Decimal__op_Explicit_62583268(v106, v107) * 1000.0;
    }
    v43 = v119 + 1;
  }
  while ( (__int64)(v119 + 1) < *(int *)(v39 + 24) );
LABEL_69:
  v108 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v108 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T__TResult__o *)v108->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v108->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v108);
      v108 = WarBoardEvalValueSquare___c_TypeInfo;
    }
    v110 = (Il2CppObject *)v108->static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                             System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo,
                                             v41,
                                             v42);
    System_Func_KeyValuePair_int__object___float____ctor(
      _9__3_0,
      v110,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      0LL);
    static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v112, v113);
  }
  v114 = System_Linq_Enumerable__Sum_KeyValuePair_int__object___48693252(
           (System_Collections_Generic_IEnumerable_TSource__o *)v40,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_2E70004 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v40
    || (v115 = v114,
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                     v40,
                                     (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !this) )
  {
LABEL_78:
    sub_1B64324(Instance);
  }
  v116 = v115 / (float)(int)Instance;
  result = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v40;
  this->fields.averageBenefitValue = v116;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v4, (int32_t)squareData, v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA0A8 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardEvalValueSquare___c_TypeInfo, v1);
    byte_49FA0A8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardEvalValueSquare___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardEvalValueSquare___c_TypeInfo->static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_49FA0A9 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__,
                                              *(_QWORD *)&x.fields.key);
    byte_49FA0A9 = 1;
  }
  if ( !value )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}