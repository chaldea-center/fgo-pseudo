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
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  System_Func_int__bool__o *v45; // x24
  bool v46; // w0
  __int64 v47; // x24
  bool v48; // w29
  __int64 v49; // x27
  _QWORD *v50; // x19
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x9
  __int64 v54; // x8
  unsigned __int64 v55; // x25
  __int64 v56; // x24
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v62; // s8
  int32_t adjustmentValueA1; // w0
  float v64; // s9
  __int64 adjustmentValueB; // x0
  __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x1
  float v69; // s0
  Il2CppObject *v70; // x28
  int32_t v71; // w0
  float v72; // s8
  int32_t v73; // w0
  float v74; // s9
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x0
  __int64 v78; // x1
  float v79; // s0
  float v80; // s0
  _BOOL8 v81; // x0
  __int64 v82; // x1
  Il2CppObject *v83; // x9
  float v84; // s0
  int klass_high; // w8
  int klass; // w9
  float v87; // s8
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v89; // x29
  System_Decimal_o *v90; // x1
  System_Decimal_o *v91; // x26
  System_Decimal_o *v92; // x8
  System_Decimal_o *v93; // x23
  System_Decimal_o *v94; // x1
  System_Decimal_o *v95; // x24
  System_Decimal_o *v96; // x8
  System_Decimal_o *v97; // x28
  System_Decimal_o *v98; // x8
  System_Decimal_o *v99; // x8
  System_Decimal_o *v100; // x0
  const MethodInfo *v101; // x1
  System_Decimal_c *v102; // x0
  System_Decimal_o *v103; // x8
  System_Decimal_o *v104; // x0
  const MethodInfo *v105; // x1
  WarBoardEvalValueSquare___c_c *v106; // x0
  System_Func_T__TResult__o *_9__3_0; // x19
  Il2CppObject *v108; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  float v112; // s0
  float v113; // s8
  float v114; // s0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *result; // x0
  unsigned __int64 v117; // [xsp+28h] [xbp-138h]
  __int64 v118; // [xsp+30h] [xbp-130h]
  System_Decimal_o *v119; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v120; // [xsp+38h] [xbp-128h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v121; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v125; // [xsp+68h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v126; // [xsp+90h] [xbp-D0h] BYREF
  Il2CppObject *value; // [xsp+C0h] [xbp-A0h] BYREF
  Il2CppObject *v128; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v129; // [xsp+D0h] [xbp-90h] BYREF

  if ( (byte_49B89E3 & 1) == 0 )
  {
    sub_1B4CF90(&System_Decimal_TypeInfo, dicPieceData);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__, v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__,
      v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__, v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__,
      v14);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__,
      v15);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo, v16);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_int____75530320, v17);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__, v19);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__,
      v20);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__,
      v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__, v23);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__,
      v24);
    sub_1B4CF90(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v25);
    sub_1B4CF90(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo, v26);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__, v29);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v30);
    sub_1B4CF90(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__, v31);
    sub_1B4CF90(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__, v32);
    sub_1B4CF90(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v33);
    sub_1B4CF90(&WarBoardEvalValueSquare___c_TypeInfo, v34);
    byte_49B89E3 = 1;
  }
  memset(&v129, 0, sizeof(v129));
  value = 0LL;
  v128 = 0LL;
  memset(&v126, 0, sizeof(v126));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_78;
  v38 = monitor[7];
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v38 )
    goto LABEL_78;
  if ( *(int *)(v38 + 24) < 1 )
    goto LABEL_69;
  v40 = 0LL;
  v120 = v39;
  v121 = ratingBaseList;
  do
  {
    v41 = sub_1B4D1DC(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v41, 0LL);
    if ( v40 >= *(unsigned int *)(v38 + 24) )
LABEL_79:
      sub_1B4D1F4(Instance, v36);
    if ( !v41 )
      goto LABEL_78;
    v44 = *(_QWORD *)(v38 + 8 * v40 + 32);
    v117 = v40;
    *(_QWORD *)(v41 + 16) = v44;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 16), v44, v42, v43);
    v45 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v45,
      (Il2CppObject *)v41,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      0LL);
    v46 = System_Linq_Enumerable__Any_int__49352788(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v45,
            (const MethodInfo_2F11054 *)Method_System_Linq_Enumerable_Any_int____75530320);
    v118 = v41 + 16;
    v47 = *(_QWORD *)(v41 + 16);
    v48 = v46;
    v49 = sub_1B4D1DC(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    System_Object___ctor((Il2CppObject *)v49, 0LL);
    *(_QWORD *)(v49 + 16) = v47;
    v50 = (_QWORD *)(v49 + 16);
    sub_1B4CF34((CGThumbnailListItem_o *)(v49 + 16), v47, v51, v52);
    v53 = v38;
    *(_QWORD *)(v49 + 24) = 0LL;
    *(_QWORD *)(v49 + 36) = 0LL;
    *(_QWORD *)(v49 + 44) = 0LL;
    v54 = *(_QWORD *)(v38 + 24);
    if ( (int)v54 < 1 )
      goto LABEL_38;
    v55 = 0LL;
    do
    {
      if ( v55 >= (unsigned int)v54 )
        goto LABEL_79;
      v56 = *(_QWORD *)(v53 + 8 * v55 + 32);
      *(_QWORD *)(v49 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v125,
        (System_Collections_Generic_List_object__o *)ratingBaseList,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      *(_OWORD *)&v129.fields._list = *(_OWORD *)&v125.fields._dictionary;
      v129.fields._current = v125.fields._current.fields.key;
      while ( 1 )
      {
        v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v129,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v57 )
          break;
        current = v129.fields._current;
        if ( !v129.fields._current )
          sub_1B4D1EC(v57, v58);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v129.fields._current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v62 = *(float *)(v49 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v64 = *(float *)(v49 + 48);
            *(float *)(v49 + 44) = v62 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v49 + 48) = v64 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_1B4D1EC(adjustmentValueB, v66);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v69 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *v50,
                      v56,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v69 != 0.0 )
              {
                v70 = value;
                if ( !value )
                  sub_1B4D1EC(v67, v68);
                *(float *)&value[1].monitor = v69 + *(float *)&value[1].monitor;
                v71 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_30;
              }
            }
          }
        }
        else
        {
          v72 = *(float *)(v49 + 36);
          v73 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v74 = *(float *)(v49 + 40);
          *(float *)(v49 + 36) = v72 + (float)v73;
          v75 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v49 + 40) = v74 + (float)(int)v75;
          if ( v48 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_1B4D1EC(v75, v76);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &v128,
                   (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v79 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *v50,
                      v56,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v79 != 0.0 )
              {
                v70 = v128;
                if ( !v128 )
                  sub_1B4D1EC(v77, v78);
                v80 = v79 + *(float *)&v128[1].monitor;
                ++HIDWORD(v128[1].klass);
                *(float *)&v70[1].monitor = v80;
                v71 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_30:
                LODWORD(v70[1].klass) = v71;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v129,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      ratingBaseList = v121;
      v53 = v38;
      ++v55;
      LODWORD(v54) = *(_DWORD *)(v38 + 24);
    }
    while ( (__int64)v55 < (int)v54 );
LABEL_38:
    if ( !*(_QWORD *)v118 )
      goto LABEL_78;
    if ( !v120 )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___Add(
      v120,
      *(_DWORD *)(*(_QWORD *)v118 + 16LL),
      (Il2CppObject *)v49,
      (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v125,
      (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
      (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v126 = v125;
    while ( 1 )
    {
      v81 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v126,
              (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v81 )
        break;
      v83 = v126.fields._current.fields.value;
      if ( !v126.fields._current.fields.value )
        sub_1B4D1EC(v81, v82);
      v84 = *(float *)&v126.fields._current.fields.value[1].monitor;
      klass_high = HIDWORD(v126.fields._current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v126.fields._current.fields.value[1].klass + 4) = 0LL;
      if ( v84 != 0.0 )
      {
        klass = (int)v83[1].klass;
        if ( klass == 1 )
        {
          if ( !v49 )
            sub_1B4D1EC(v81, v82);
          *(float *)(v49 + 28) = v84 + *(float *)(v49 + 28);
        }
        else if ( !klass )
        {
          if ( !v49 )
            sub_1B4D1EC(v81, v82);
          *(float *)(v49 + 24) = (float)(v84 / (float)klass_high) + *(float *)(v49 + 24);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v126,
      (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( !v49 )
      goto LABEL_78;
    v87 = *(float *)(v49 + 24);
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v89 = System_Decimal__op_Explicit(cctor_finished, v87, 0LL);
    v91 = v90;
    v93 = System_Decimal__op_Explicit(v92, *(float *)(v49 + 28), 0LL);
    v95 = v94;
    v97 = System_Decimal__op_Explicit(v96, *(float *)(v49 + 36) + *(float *)(v49 + 40), 0LL);
    v119 = System_Decimal__op_Explicit(v98, *(float *)(v49 + 44) + *(float *)(v49 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v89, v91, *(const MethodInfo **)System_Decimal_TypeInfo->static_fields) )
    {
      v99 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v99 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v100 = System_Decimal__Divide(v99, v89, v91, (const MethodInfo *)v97);
      *(float *)(v49 + 24) = System_Decimal__op_Explicit_63010152(v100, v101) * 1000.0;
    }
    v102 = System_Decimal_TypeInfo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v102 = System_Decimal_TypeInfo;
    }
    v39 = v120;
    ratingBaseList = v121;
    if ( System_Decimal__op_Inequality(v93, v95, *(const MethodInfo **)v102->static_fields) )
    {
      v103 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v103 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      v104 = System_Decimal__Divide(v103, v93, v95, (const MethodInfo *)v119);
      *(float *)(v49 + 28) = System_Decimal__op_Explicit_63010152(v104, v105) * 1000.0;
    }
    v40 = v117 + 1;
  }
  while ( (__int64)(v117 + 1) < *(int *)(v38 + 24) );
LABEL_69:
  v106 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v106 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T__TResult__o *)v106->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v106->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v106);
      v106 = WarBoardEvalValueSquare___c_TypeInfo;
    }
    v108 = (Il2CppObject *)v106->static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__object___float____ctor(
      _9__3_0,
      v108,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      0LL);
    static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)_9__3_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v110, v111);
  }
  v112 = System_Linq_Enumerable__Sum_KeyValuePair_int__object___49524364(
           (System_Collections_Generic_IEnumerable_TSource__o *)v39,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_2F3AE8C *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v39
    || (v113 = v112,
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                     v39,
                                     (const MethodInfo_31F6B30 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !this) )
  {
LABEL_78:
    sub_1B4D1EC(Instance, v36);
  }
  v114 = v113 / (float)(int)Instance;
  result = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v39;
  this->fields.averageBenefitValue = v114;
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
  const MethodInfo *v6; // x3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)v4, (int32_t)squareData, v5, v6);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B89E4 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardEvalValueSquare___c_TypeInfo, v1);
    byte_49B89E4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardEvalValueSquare___c_TypeInfo->static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_49B89E5 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_1B4CF90(
                                              &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__,
                                              *(_QWORD *)&x.fields.key);
    byte_49B89E5 = 1;
  }
  if ( !value )
    sub_1B4D1EC(this, *(_QWORD *)&x.fields.key);
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
    sub_1B4D1EC(this, x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}