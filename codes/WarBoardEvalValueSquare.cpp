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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  WebViewManager_o *Instance; // x0
  __int64 v90; // x1
  __int64 v91; // x8
  __int64 v92; // x28
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v93; // x23
  unsigned __int64 v94; // x24
  WarBoardEvalValueSquare___c__DisplayClass3_0_o *v95; // x19
  System_Func_int__bool__o *v96; // x24
  bool v97; // w0
  WarBoardSquareData_o *calcSquare; // x24
  bool v99; // w19
  __int64 v100; // x27
  __int64 v101; // x8
  unsigned __int64 v102; // x23
  int v103; // w25
  __int64 v104; // x24
  float v105; // s0
  int32_t v106; // w0
  _BOOL8 v107; // x0
  __int64 v108; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v112; // s8
  int32_t adjustmentValueA1; // w0
  float v114; // s10
  __int64 adjustmentValueB; // x0
  __int64 v116; // x1
  __int64 v117; // x0
  __int64 v118; // x1
  float v119; // s0
  WarBoardEvalValueSquare_CalcEval_o *v120; // x28
  float v121; // s8
  int32_t v122; // w0
  float v123; // s10
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x0
  __int64 v127; // x1
  float v128; // s0
  int v129; // w21
  int v130; // w8
  _BOOL8 v131; // x0
  __int64 v132; // x1
  Il2CppObject *v133; // x9
  float v134; // s0
  int klass_high; // w8
  int klass; // w9
  int v137; // w21
  int v138; // w8
  float v139; // s8
  System_Decimal_o v140; // kr00_16
  System_Decimal_o v141; // kr10_16
  System_Decimal_o v142; // kr20_16
  System_Decimal_o v143; // kr30_16
  System_Decimal_c *v144; // x0
  unsigned __int64 v145; // x24
  WarBoardEvalValueSquare___c_c *v146; // x0
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *_9__3_0; // x19
  Il2CppObject *v149; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *v150; // x0
  float v151; // s0
  float v152; // s8
  __int64 v154; // x0
  WarBoardEvalValueSquare_o *v155; // [xsp+8h] [xbp-158h]
  WarBoardEvalValueSquare___c__DisplayClass3_0_Fields *p_fields; // [xsp+20h] [xbp-140h]
  unsigned __int64 v158; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v159; // [xsp+30h] [xbp-130h]
  int v160; // [xsp+3Ch] [xbp-124h]
  __int64 v161; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v162; // [xsp+48h] [xbp-118h]
  _WORD v166[24]; // [xsp+68h] [xbp-F8h] BYREF
  int v167; // [xsp+98h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v168; // [xsp+A0h] [xbp-C0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v170; // [xsp+D0h] [xbp-90h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *v171; // [xsp+F8h] [xbp-68h] BYREF
  System_Decimal_o v172; // 0:x0.16
  System_Decimal_o v173; // 0:x0.16

  if ( (byte_42E51E7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)dicPieceData, (_DWORD)evalValueTargetSquare, routeDataList);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int____68844208, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____,
      v32,
      v33,
      v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__, v35, v36, v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__, v47, v48, v49);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__,
      v50,
      v51,
      v52);
    sub_B5D5C4(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v56, v57, v58);
    sub_B5D5C4(
      &Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__,
      v59,
      v60,
      v61);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo, v65, v66, v67);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__,
      v68,
      v69,
      v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__, v71, v72, v73);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v74, v75, v76);
    sub_B5D5C4(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__, v77, v78, v79);
    sub_B5D5C4(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__, v80, v81, v82);
    sub_B5D5C4(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v83, v84, v85);
    sub_B5D5C4(&WarBoardEvalValueSquare___c_TypeInfo, v86, v87, v88);
    byte_42E51E7 = 1;
  }
  v171 = 0LL;
  value = 0LL;
  memset(&v170, 0, sizeof(v170));
  memset(&v168, 0, sizeof(v168));
  v167 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  v91 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v91 )
    goto LABEL_93;
  v155 = this;
  v92 = *(_QWORD *)(v91 + 56);
  v93 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v93,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v92 )
    goto LABEL_93;
  if ( *(int *)(v92 + 24) < 1 )
    goto LABEL_82;
  v160 = 0;
  v94 = 0LL;
  v161 = v92;
  v162 = ratingBaseList;
  v159 = v93;
  do
  {
    v95 = (WarBoardEvalValueSquare___c__DisplayClass3_0_o *)sub_B5D694(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo);
    WarBoardEvalValueSquare___c__DisplayClass3_0___ctor(v95, 0LL);
    if ( v94 >= *(unsigned int *)(v92 + 24) )
    {
LABEL_94:
      v154 = sub_B5D6C8(Instance);
      sub_B5D668(v154, 0LL);
    }
    if ( !v95 )
      goto LABEL_93;
    v158 = v94;
    v95->fields.calcSquare = *(struct WarBoardSquareData_o **)(v92 + 8 * v94 + 32);
    sub_B5D560(&v95->fields);
    v96 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v96,
      (Il2CppObject *)v95,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v97 = System_Linq_Enumerable__Any_int__29992412(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v96,
            (const MethodInfo_1C9A5DC *)Method_System_Linq_Enumerable_Any_int____68844208);
    p_fields = &v95->fields;
    calcSquare = v95->fields.calcSquare;
    v99 = v97;
    v100 = sub_B5D694(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo);
    WarBoardEvalValueSquare_EvalValueSquare___ctor((WarBoardEvalValueSquare_EvalValueSquare_o *)v100, calcSquare, 0LL);
    v101 = *(_QWORD *)(v92 + 24);
    if ( (int)v101 < 1 )
    {
      v129 = v160;
      goto LABEL_43;
    }
    v102 = 0LL;
    v103 = v160;
    do
    {
      if ( v102 >= (unsigned int)v101 )
        goto LABEL_94;
      if ( !v100 )
        goto LABEL_93;
      v104 = *(_QWORD *)(v92 + 8 * v102 + 32);
      *(_QWORD *)(v100 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_93;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v166,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingBaseList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      v170 = *(System_Collections_Generic_List_Enumerator_T__o *)v166;
      while ( 1 )
      {
        v107 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v170,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v107 )
          break;
        current = v170.fields.current;
        if ( !v170.fields.current )
          sub_B5D69C(v107, v108);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v170.fields.current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v112 = *(float *)(v100 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v114 = *(float *)(v100 + 48);
            *(float *)(v100 + 44) = v112 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v100 + 48) = v114 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_B5D69C(adjustmentValueB, v116);
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v119 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                       current,
                       (unsigned int)forceId,
                       *(_QWORD *)(v100 + 16),
                       v104,
                       dicPieceData,
                       routeDataList,
                       current->klass->vtable[5].methodPtr);
              if ( v119 != 0.0 )
              {
                v120 = value;
                if ( !value )
                  sub_B5D69C(v117, v118);
                value->fields.eval = v119 + value->fields.eval;
                v106 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_17;
              }
            }
          }
        }
        else
        {
          v121 = *(float *)(v100 + 36);
          v122 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v123 = *(float *)(v100 + 40);
          *(float *)(v100 + 36) = v121 + (float)v122;
          v124 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v100 + 40) = v123 + (float)(int)v124;
          if ( v99 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_B5D69C(v124, v125);
            if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                   dicRatingbaseCalcValue,
                   Id,
                   &v171,
                   (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v128 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                       current,
                       (unsigned int)forceId,
                       *(_QWORD *)(v100 + 16),
                       v104,
                       dicPieceData,
                       routeDataList,
                       current->klass->vtable[5].methodPtr);
              if ( v128 != 0.0 )
              {
                v120 = v171;
                if ( !v171 )
                  sub_B5D69C(v126, v127);
                v105 = v128 + v171->fields.eval;
                ++v171->fields.addNum;
                v120->fields.eval = v105;
                v106 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_17:
                v120->fields.viewpoint = v106;
              }
            }
          }
        }
      }
      *(_DWORD *)&v166[2 * v103 + 20] = 491;
      v103 = ++v167;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v170,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      v92 = v161;
      ratingBaseList = v162;
      v129 = v103;
      if ( v103 )
      {
        v130 = v103 - 1;
        if ( *(_DWORD *)&v166[2 * v103 + 18] == 491 )
        {
          v129 = --v103;
          v167 = v130;
        }
      }
      LODWORD(v101) = *(_DWORD *)(v161 + 24);
      ++v102;
    }
    while ( (__int64)v102 < (int)v101 );
LABEL_43:
    if ( !p_fields->calcSquare )
      goto LABEL_93;
    if ( !v159 )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v159,
      p_fields->calcSquare->fields._squareIndex_k__BackingField,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v100,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_93;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v166,
      dicRatingbaseCalcValue,
      (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v168 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v166;
    while ( 1 )
    {
      v131 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
               &v168,
               (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v131 )
        break;
      v133 = v168.fields.current.fields.value;
      if ( !v168.fields.current.fields.value )
        sub_B5D69C(v131, v132);
      v134 = *(float *)&v168.fields.current.fields.value[1].monitor;
      klass_high = HIDWORD(v168.fields.current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v168.fields.current.fields.value[1].klass + 4) = 0LL;
      if ( v134 != 0.0 )
      {
        klass = (int)v133[1].klass;
        if ( klass == 1 )
        {
          if ( !v100 )
            sub_B5D69C(v131, v132);
          *(float *)(v100 + 28) = v134 + *(float *)(v100 + 28);
        }
        else if ( !klass )
        {
          if ( !v100 )
            sub_B5D69C(v131, v132);
          *(float *)(v100 + 24) = (float)(v134 / (float)klass_high) + *(float *)(v100 + 24);
        }
      }
    }
    *(_DWORD *)&v166[2 * v129 + 20] = 713;
    v137 = ++v167;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v168,
      (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( v137 )
    {
      v138 = v137 - 1;
      if ( *(_DWORD *)&v166[2 * v137 + 18] == 713 )
      {
        --v137;
        v167 = v138;
      }
    }
    v160 = v137;
    if ( !v100 )
      goto LABEL_93;
    v139 = *(float *)(v100 + 24);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    v140 = System_Decimal__op_Explicit(v139, 0LL);
    v141 = System_Decimal__op_Explicit(*(float *)(v100 + 28), 0LL);
    v142 = System_Decimal__op_Explicit(*(float *)(v100 + 36) + *(float *)(v100 + 40), 0LL);
    v143 = System_Decimal__op_Explicit(*(float *)(v100 + 44) + *(float *)(v100 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v140, System_Decimal_TypeInfo->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v172 = System_Decimal__Divide(v140, v142, 0LL);
      *(float *)(v100 + 24) = System_Decimal__op_Explicit_44462856(v172, 0LL) * 1000.0;
    }
    v144 = System_Decimal_TypeInfo;
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v92 = v161;
      ratingBaseList = v162;
      v145 = v158;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v144 = System_Decimal_TypeInfo;
      }
    }
    else
    {
      v92 = v161;
      ratingBaseList = v162;
      v145 = v158;
    }
    if ( System_Decimal__op_Inequality(v141, v144->static_fields->Zero, 0LL) )
    {
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
      }
      v173 = System_Decimal__Divide(v141, v143, 0LL);
      *(float *)(v100 + 28) = System_Decimal__op_Explicit_44462856(v173, 0LL) * 1000.0;
    }
    v93 = v159;
    v94 = v145 + 1;
  }
  while ( (__int64)v94 < *(int *)(v92 + 24) );
LABEL_82:
  v146 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( (BYTE3(WarBoardEvalValueSquare___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo);
    v146 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  static_fields = v146->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v146->vtable._0_Equals.methodPtr) & 4) != 0 && !v146->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v146);
      static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    }
    v149 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)sub_B5D694(System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo);
    System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float____ctor(
      _9__3_0,
      v149,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      (const MethodInfo_2793A08 *)Method_System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float___ctor__);
    v150 = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    v150->__9__3_0 = _9__3_0;
    sub_B5D560(&v150->__9__3_0);
  }
  v151 = System_Linq_Enumerable__Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v93,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_1CB6CFC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v93
    || (v152 = v151,
        Instance = (WebViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                         v93,
                                         (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !v155) )
  {
LABEL_93:
    sub_B5D69C(Instance, v90);
  }
  v155->fields.averageBenefitValue = v152 / (float)(int)Instance;
  return v93;
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
  sub_B5D560((BattleServantConfConponent_o *)v4, (System_Int32_array **)squareData, v5, v6, v7, v8, v9, v10);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7666 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardEvalValueSquare___c_TypeInfo, v1, v2, v3);
    byte_42E7666 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardEvalValueSquare___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  if ( (byte_42E7667 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__,
                                              x.fields.key,
                                              x.fields.value,
                                              method);
    byte_42E7667 = 1;
  }
  if ( !value )
    sub_B5D69C(this, *(_QWORD *)&x.fields.key);
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
    sub_B5D69C(this, x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}