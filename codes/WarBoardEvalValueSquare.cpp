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
  __int64 v40; // x3
  __int64 v41; // x4
  _QWORD *monitor; // x8
  __int64 v43; // x28
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  unsigned __int64 v49; // x24
  __int64 v50; // x19
  __int64 v51; // x0
  __int64 v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Func_int__bool__o *v64; // x24
  bool v65; // w0
  WarBoardSquareData_o *v66; // x24
  bool v67; // w19
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  __int64 v72; // x27
  __int64 v73; // x8
  unsigned __int64 v74; // x23
  int v75; // w25
  __int64 v76; // x24
  float v77; // s0
  int32_t v78; // w0
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v82; // s8
  int32_t adjustmentValueA1; // w0
  float v84; // s10
  float v85; // s0
  WarBoardEvalValueSquare_CalcEval_o *v86; // x28
  float v87; // s8
  int32_t v88; // w0
  float v89; // s10
  float v90; // s0
  int v91; // w21
  int v92; // w8
  Il2CppObject *v93; // x9
  float v94; // s0
  int klass_high; // w8
  int klass; // w9
  int v97; // w21
  int v98; // w8
  float v99; // s8
  System_Decimal_o v100; // kr00_16
  System_Decimal_o v101; // kr10_16
  System_Decimal_o v102; // kr20_16
  System_Decimal_o v103; // kr30_16
  System_Decimal_c *v104; // x0
  unsigned __int64 v105; // x24
  WarBoardEvalValueSquare___c_c *v106; // x0
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *_9__3_0; // x19
  Il2CppObject *v109; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  float v117; // s0
  float v118; // s8
  int32_t Count; // w0
  WarBoardEvalValueSquare_o *v121; // [xsp+8h] [xbp-158h]
  __int64 v123; // [xsp+20h] [xbp-140h]
  unsigned __int64 v124; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v125; // [xsp+30h] [xbp-130h]
  int v126; // [xsp+3Ch] [xbp-124h]
  __int64 v127; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v128; // [xsp+48h] [xbp-118h]
  _WORD v132[24]; // [xsp+68h] [xbp-F8h] BYREF
  int v133; // [xsp+98h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v134; // [xsp+A0h] [xbp-C0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+D0h] [xbp-90h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *v137; // [xsp+F8h] [xbp-68h] BYREF
  System_Decimal_o v138; // 0:x0.16
  System_Decimal_o v139; // 0:x0.16

  if ( (byte_40F63B1 & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, dicPieceData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__,
      v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__, v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__,
      v15);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo, v16);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int____66837904, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__, v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__,
      v20);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__,
      v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__, v23);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__,
      v24);
    sub_B16FFC(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v25);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v26);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__, v27);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v28);
    sub_B16FFC(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo, v29);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__, v31);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v32);
    sub_B16FFC(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__, v33);
    sub_B16FFC(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__, v34);
    sub_B16FFC(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v35);
    sub_B16FFC(&WarBoardEvalValueSquare___c_TypeInfo, v36);
    byte_40F63B1 = 1;
  }
  v137 = 0LL;
  value = 0LL;
  memset(&v136, 0, sizeof(v136));
  memset(&v134, 0, sizeof(v134));
  v133 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  monitor = Instance[4].monitor;
  if ( !monitor )
    goto LABEL_93;
  v121 = this;
  v43 = monitor[7];
  v44 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo,
                                                                                                   v38,
                                                                                                   v39,
                                                                                                   v40,
                                                                                                   v41);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v44,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v43 )
    goto LABEL_93;
  if ( *(int *)(v43 + 24) < 1 )
    goto LABEL_82;
  v126 = 0;
  v49 = 0LL;
  v127 = v43;
  v128 = ratingBaseList;
  v125 = v44;
  do
  {
    v50 = sub_B170CC(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v45, v46, v47, v48);
    WarBoardEvalValueSquare___c__DisplayClass3_0___ctor((WarBoardEvalValueSquare___c__DisplayClass3_0_o *)v50, 0LL);
    if ( v49 >= *(unsigned int *)(v43 + 24) )
    {
LABEL_94:
      sub_B17100(v51, v52, v53);
      sub_B170A0();
    }
    if ( !v50 )
      goto LABEL_93;
    v59 = *(System_Int32_array ***)(v43 + 8 * v49 + 32);
    v124 = v49;
    *(_QWORD *)(v50 + 16) = v59;
    sub_B16F98((BattleServantConfConponent_o *)(v50 + 16), v59, v53, v54, v55, v56, v57, v58);
    v64 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v60, v61, v62, v63);
    System_Func_int__bool____ctor(
      v64,
      (Il2CppObject *)v50,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v65 = System_Linq_Enumerable__Any_int__25991232(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v64,
            (const MethodInfo_18C9840 *)Method_System_Linq_Enumerable_Any_int____66837904);
    v123 = v50 + 16;
    v66 = *(WarBoardSquareData_o **)(v50 + 16);
    v67 = v65;
    v72 = sub_B170CC(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v68, v69, v70, v71);
    WarBoardEvalValueSquare_EvalValueSquare___ctor((WarBoardEvalValueSquare_EvalValueSquare_o *)v72, v66, 0LL);
    v73 = *(_QWORD *)(v43 + 24);
    if ( (int)v73 < 1 )
    {
      v91 = v126;
      goto LABEL_43;
    }
    v74 = 0LL;
    v75 = v126;
    do
    {
      if ( v74 >= (unsigned int)v73 )
        goto LABEL_94;
      if ( !v72 )
        goto LABEL_93;
      v76 = *(_QWORD *)(v43 + 8 * v74 + 32);
      *(_QWORD *)(v72 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_93;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v132,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingBaseList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      v136 = *(System_Collections_Generic_List_Enumerator_T__o *)v132;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v136,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__) )
      {
        current = v136.fields.current;
        if ( !v136.fields.current )
          sub_B170D4();
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v136.fields.current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v82 = *(float *)(v72 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v84 = *(float *)(v72 + 48);
            *(float *)(v72 + 44) = v82 + (float)adjustmentValueA1;
            *(float *)(v72 + 48) = v84
                                 + (float)WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            if ( !dicRatingbaseCalcValue )
              sub_B170D4();
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v85 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *(_QWORD *)(v72 + 16),
                      v76,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v85 != 0.0 )
              {
                v86 = value;
                if ( !value )
                  sub_B170D4();
                value->fields.eval = v85 + value->fields.eval;
                v78 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_17;
              }
            }
          }
        }
        else
        {
          v87 = *(float *)(v72 + 36);
          v88 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v89 = *(float *)(v72 + 40);
          *(float *)(v72 + 36) = v87 + (float)v88;
          *(float *)(v72 + 40) = v89
                               + (float)WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          if ( v67 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_B170D4();
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &v137,
                   (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v90 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                      current,
                      (unsigned int)forceId,
                      *(_QWORD *)(v72 + 16),
                      v76,
                      dicPieceData,
                      routeDataList,
                      current->klass->vtable[5].methodPtr);
              if ( v90 != 0.0 )
              {
                v86 = v137;
                if ( !v137 )
                  sub_B170D4();
                v77 = v90 + v137->fields.eval;
                ++v137->fields.addNum;
                v86->fields.eval = v77;
                v78 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_17:
                v86->fields.viewpoint = v78;
              }
            }
          }
        }
      }
      *(_DWORD *)&v132[2 * v75 + 20] = 491;
      v75 = ++v133;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v136,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      v43 = v127;
      ratingBaseList = v128;
      v91 = v75;
      if ( v75 )
      {
        v92 = v75 - 1;
        if ( *(_DWORD *)&v132[2 * v75 + 18] == 491 )
        {
          v91 = --v75;
          v133 = v92;
        }
      }
      LODWORD(v73) = *(_DWORD *)(v127 + 24);
      ++v74;
    }
    while ( (__int64)v74 < (int)v73 );
LABEL_43:
    if ( !*(_QWORD *)v123 )
      goto LABEL_93;
    if ( !v125 )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v125,
      *(_DWORD *)(*(_QWORD *)v123 + 16LL),
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v72,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v132,
      dicRatingbaseCalcValue,
      (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v134 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v132;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v134,
              (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__) )
    {
      v93 = v134.fields.current.fields.value;
      if ( !v134.fields.current.fields.value )
        sub_B170D4();
      v94 = *(float *)&v134.fields.current.fields.value[1].monitor;
      klass_high = HIDWORD(v134.fields.current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v134.fields.current.fields.value[1].klass + 4) = 0LL;
      if ( v94 != 0.0 )
      {
        klass = (int)v93[1].klass;
        if ( klass == 1 )
        {
          if ( !v72 )
            sub_B170D4();
          *(float *)(v72 + 28) = v94 + *(float *)(v72 + 28);
        }
        else if ( !klass )
        {
          if ( !v72 )
            sub_B170D4();
          *(float *)(v72 + 24) = (float)(v94 / (float)klass_high) + *(float *)(v72 + 24);
        }
      }
    }
    *(_DWORD *)&v132[2 * v91 + 20] = 713;
    v97 = ++v133;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v134,
      (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( v97 )
    {
      v98 = v97 - 1;
      if ( *(_DWORD *)&v132[2 * v97 + 18] == 713 )
      {
        --v97;
        v133 = v98;
      }
    }
    v126 = v97;
    if ( !v72 )
      goto LABEL_93;
    v99 = *(float *)(v72 + 24);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    v100 = System_Decimal__op_Explicit(v99, 0LL);
    v101 = System_Decimal__op_Explicit(*(float *)(v72 + 28), 0LL);
    v102 = System_Decimal__op_Explicit(*(float *)(v72 + 36) + *(float *)(v72 + 40), 0LL);
    v103 = System_Decimal__op_Explicit(*(float *)(v72 + 44) + *(float *)(v72 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v100, System_Decimal_TypeInfo->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v138 = System_Decimal__Divide(v100, v102, 0LL);
      *(float *)(v72 + 24) = System_Decimal__op_Explicit_43632896(v138, 0LL) * 1000.0;
    }
    v104 = System_Decimal_TypeInfo;
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v43 = v127;
      ratingBaseList = v128;
      v105 = v124;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v104 = System_Decimal_TypeInfo;
      }
    }
    else
    {
      v43 = v127;
      ratingBaseList = v128;
      v105 = v124;
    }
    if ( System_Decimal__op_Inequality(v101, v104->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v139 = System_Decimal__Divide(v101, v103, 0LL);
      *(float *)(v72 + 28) = System_Decimal__op_Explicit_43632896(v139, 0LL) * 1000.0;
    }
    v44 = v125;
    v49 = v105 + 1;
  }
  while ( (__int64)v49 < *(int *)(v43 + 24) );
LABEL_82:
  v106 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( (BYTE3(WarBoardEvalValueSquare___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v106 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  static_fields = v106->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v106->vtable._0_Equals.methodPtr) & 4) != 0 && !v106->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v106);
      static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    }
    v109 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)sub_B170CC(
                                                                                                    System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo,
                                                                                                    v45,
                                                                                                    v46,
                                                                                                    v47,
                                                                                                    v48);
    System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float____ctor(
      _9__3_0,
      v109,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      (const MethodInfo_2B5E514 *)Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__);
    v110 = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    v110->__9__3_0 = _9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v110->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  v117 = System_Linq_Enumerable__Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v44,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_19C41D4 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v44
    || (v118 = v117,
        Count = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                  v44,
                  (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !v121) )
  {
LABEL_93:
    sub_B170D4();
  }
  v121->fields.averageBenefitValue = v118 / (float)Count;
  return v44;
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
  sub_B16F98((BattleServantConfConponent_o *)v4, (System_Int32_array **)squareData, v5, v6, v7, v8, v9, v10);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AE3 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardEvalValueSquare___c_TypeInfo, v1);
    byte_40F7AE3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardEvalValueSquare___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_40F7AE4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_40F7AE4 = 1;
  }
  if ( !value )
    sub_B170D4();
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
    sub_B170D4();
  return calcSquare->fields._squareIndex_k__BackingField == x;
}