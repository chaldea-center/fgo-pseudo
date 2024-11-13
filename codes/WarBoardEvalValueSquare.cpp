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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  Il2CppObject *Instance; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  _QWORD *monitor; // x8
  __int64 v64; // x21
  System_Collections_Generic_Dictionary_int__object__o *v65; // x28
  __int64 v66; // x2
  __int64 v67; // x3
  unsigned __int64 v68; // x25
  __int64 v69; // x19
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Func_int__bool__o *v80; // x24
  bool v81; // w0
  int64_t v82; // x24
  bool v83; // w29
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x27
  _QWORD *v88; // x19
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  __int64 v95; // x9
  __int64 v96; // x8
  unsigned __int64 v97; // x25
  __int64 v98; // x24
  _BOOL8 v99; // x0
  __int64 v100; // x1
  Il2CppObject *current; // x26
  int32_t Id; // w28
  int32_t Viewpoint; // w0
  float v104; // s8
  int32_t adjustmentValueA1; // w0
  float v106; // s9
  __int64 adjustmentValueB; // x0
  __int64 v108; // x1
  __int64 v109; // x0
  __int64 v110; // x1
  float v111; // s0
  Il2CppObject *v112; // x28
  int32_t v113; // w0
  float v114; // s8
  int32_t v115; // w0
  float v116; // s9
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x0
  __int64 v120; // x1
  float v121; // s0
  float v122; // s0
  _BOOL8 v123; // x0
  __int64 v124; // x1
  Il2CppObject *v125; // x9
  float v126; // s0
  int klass_high; // w8
  int klass; // w9
  float v129; // s8
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v131; // x29
  System_Decimal_o *v132; // x1
  System_Decimal_o *v133; // x26
  System_Decimal_o *v134; // x8
  System_Decimal_o *v135; // x23
  System_Decimal_o *v136; // x1
  System_Decimal_o *v137; // x24
  System_Decimal_o *v138; // x8
  System_Decimal_o *v139; // x28
  System_Decimal_o *v140; // x8
  __int64 v141; // x1
  System_Decimal_o *v142; // x8
  System_Decimal_o *v143; // x0
  const MethodInfo *v144; // x1
  System_Decimal_c *v145; // x0
  System_Decimal_o *v146; // x8
  System_Decimal_o *v147; // x0
  const MethodInfo *v148; // x1
  WarBoardEvalValueSquare___c_c *v149; // x0
  System_Func_T__TResult__o *_9__3_0; // x19
  Il2CppObject *v151; // x20
  struct WarBoardEvalValueSquare___c_StaticFields *static_fields; // x0
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  float v159; // s0
  float v160; // s8
  float v161; // s0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *result; // x0
  unsigned __int64 v164; // [xsp+28h] [xbp-138h]
  __int64 v165; // [xsp+30h] [xbp-130h]
  System_Decimal_o *v166; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_Dictionary_int__object__o *v167; // [xsp+38h] [xbp-128h]
  System_Collections_Generic_List_WarBoardRatingBase__o *v168; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v172; // [xsp+68h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v173; // [xsp+90h] [xbp-D0h] BYREF
  Il2CppObject *value; // [xsp+C0h] [xbp-A0h] BYREF
  Il2CppObject *v175; // [xsp+C8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v176; // [xsp+D0h] [xbp-90h] BYREF

  if ( (byte_4B13DF0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Decimal_TypeInfo, dicPieceData, evalValueTargetSquare);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__,
      v17,
      v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__,
      v19,
      v20);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int____76878416, v23, v24);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____,
      v25,
      v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__, v27, v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__,
      v29,
      v30);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__,
      v31,
      v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__get_Current__, v35, v36);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__get_Current__,
      v37,
      v38);
    sub_1BCA7E0(&WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v39, v40);
    sub_1BCA7E0(&System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo, v41, v42);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v43, v44);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_CalcEval__get_Value__,
      v45,
      v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__, v47, v48);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v49, v50);
    sub_1BCA7E0(&Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__, v51, v52);
    sub_1BCA7E0(&Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__, v53, v54);
    sub_1BCA7E0(&WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v55, v56);
    sub_1BCA7E0(&WarBoardEvalValueSquare___c_TypeInfo, v57, v58);
    byte_4B13DF0 = 1;
  }
  memset(&v176, 0, sizeof(v176));
  value = 0LL;
  v175 = 0LL;
  memset(&v173, 0, sizeof(v173));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_78;
  v64 = monitor[7];
  v65 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__TypeInfo,
                                                                  v60,
                                                                  v61,
                                                                  v62);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v65,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___ctor__);
  if ( !v64 )
    goto LABEL_78;
  if ( *(int *)(v64 + 24) < 1 )
    goto LABEL_69;
  v68 = 0LL;
  v167 = v65;
  v168 = ratingBaseList;
  do
  {
    v69 = sub_1BCAA2C(WarBoardEvalValueSquare___c__DisplayClass3_0_TypeInfo, v60, v66, v67);
    System_Object___ctor((Il2CppObject *)v69, 0LL);
    if ( v68 >= *(unsigned int *)(v64 + 24) )
LABEL_79:
      sub_1BCAA44(Instance, v60);
    if ( !v69 )
      goto LABEL_78;
    v76 = *(_QWORD *)(v64 + 8 * v68 + 32);
    v164 = v68;
    *(_QWORD *)(v69 + 16) = v76;
    sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 16), v76, v70, v71, v72, v73, v74, v75);
    v80 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v77, v78, v79);
    System_Func_int__bool____ctor(
      v80,
      (Il2CppObject *)v69,
      Method_WarBoardEvalValueSquare___c__DisplayClass3_0__Calcurate_b__1__,
      0LL);
    v81 = System_Linq_Enumerable__Any_int__49415144(
            (System_Collections_Generic_IEnumerable_TSource__o *)evalValueTargetSquare,
            (System_Func_TSource__bool__o *)v80,
            (const MethodInfo_2F203E8 *)Method_System_Linq_Enumerable_Any_int____76878416);
    v165 = v69 + 16;
    v82 = *(_QWORD *)(v69 + 16);
    v83 = v81;
    v87 = sub_1BCAA2C(WarBoardEvalValueSquare_EvalValueSquare_TypeInfo, v84, v85, v86);
    System_Object___ctor((Il2CppObject *)v87, 0LL);
    *(_QWORD *)(v87 + 16) = v82;
    v88 = (_QWORD *)(v87 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 16), v82, v89, v90, v91, v92, v93, v94);
    v95 = v64;
    *(_QWORD *)(v87 + 24) = 0LL;
    *(_QWORD *)(v87 + 36) = 0LL;
    *(_QWORD *)(v87 + 44) = 0LL;
    v96 = *(_QWORD *)(v64 + 24);
    if ( (int)v96 < 1 )
      goto LABEL_38;
    v97 = 0LL;
    do
    {
      if ( v97 >= (unsigned int)v96 )
        goto LABEL_79;
      v98 = *(_QWORD *)(v95 + 8 * v97 + 32);
      *(_QWORD *)(v87 + 24) = 0LL;
      if ( !ratingBaseList )
        goto LABEL_78;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v172,
        (System_Collections_Generic_List_object__o *)ratingBaseList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardRatingBase__GetEnumerator__);
      *(_OWORD *)&v176.fields._list = *(_OWORD *)&v172.fields._dictionary;
      v176.fields._current = v172.fields._current.fields.key;
      while ( 1 )
      {
        v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v176,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__MoveNext__);
        if ( !v99 )
          break;
        current = v176.fields._current;
        if ( !v176.fields._current )
          sub_1BCAA3C(v99, v100);
        Id = WarBoardRatingBase__GetId((WarBoardRatingBase_o *)v176.fields._current, 0LL);
        Viewpoint = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
        if ( Viewpoint )
        {
          if ( Viewpoint == 1 )
          {
            v104 = *(float *)(v87 + 44);
            adjustmentValueA1 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
            v106 = *(float *)(v87 + 48);
            *(float *)(v87 + 44) = v104 + (float)adjustmentValueA1;
            adjustmentValueB = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
            *(float *)(v87 + 48) = v106 + (float)(int)adjustmentValueB;
            if ( !dicRatingbaseCalcValue )
              sub_1BCAA3C(adjustmentValueB, v108);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &value,
                   (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v111 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                       current,
                       (unsigned int)forceId,
                       *v88,
                       v98,
                       dicPieceData,
                       routeDataList,
                       current->klass->vtable[5].methodPtr);
              if ( v111 != 0.0 )
              {
                v112 = value;
                if ( !value )
                  sub_1BCAA3C(v109, v110);
                *(float *)&value[1].monitor = v111 + *(float *)&value[1].monitor;
                v113 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
                goto LABEL_30;
              }
            }
          }
        }
        else
        {
          v114 = *(float *)(v87 + 36);
          v115 = WarBoardRatingBase__get_adjustmentValueA1((WarBoardRatingBase_o *)current, 0LL);
          v116 = *(float *)(v87 + 40);
          *(float *)(v87 + 36) = v114 + (float)v115;
          v117 = WarBoardRatingBase__get_adjustmentValueB((WarBoardRatingBase_o *)current, 0LL);
          *(float *)(v87 + 40) = v116 + (float)(int)v117;
          if ( v83 )
          {
            if ( !dicRatingbaseCalcValue )
              sub_1BCAA3C(v117, v118);
            if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                   (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                   Id,
                   &v175,
                   (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TryGetValue__) )
            {
              v121 = ((float (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, __int64, System_Collections_Generic_Dictionary_int__uint__o *, System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *, Il2CppMethodPointer))current->klass->vtable[4].method)(
                       current,
                       (unsigned int)forceId,
                       *v88,
                       v98,
                       dicPieceData,
                       routeDataList,
                       current->klass->vtable[5].methodPtr);
              if ( v121 != 0.0 )
              {
                v112 = v175;
                if ( !v175 )
                  sub_1BCAA3C(v119, v120);
                v122 = v121 + *(float *)&v175[1].monitor;
                ++HIDWORD(v175[1].klass);
                *(float *)&v112[1].monitor = v122;
                v113 = WarBoardRatingBase__GetViewpoint((WarBoardRatingBase_o *)current, 0LL);
LABEL_30:
                LODWORD(v112[1].klass) = v113;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v176,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingBase__Dispose__);
      ratingBaseList = v168;
      v95 = v64;
      ++v97;
      LODWORD(v96) = *(_DWORD *)(v64 + 24);
    }
    while ( (__int64)v97 < (int)v96 );
LABEL_38:
    if ( !*(_QWORD *)v165 )
      goto LABEL_78;
    if ( !v167 )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___Add(
      v167,
      *(_DWORD *)(*(_QWORD *)v165 + 16LL),
      (Il2CppObject *)v87,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__Add__);
    if ( !dicRatingbaseCalcValue )
      goto LABEL_78;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v172,
      (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
      (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__GetEnumerator__);
    v173 = v172;
    while ( 1 )
    {
      v123 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
               &v173,
               (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__MoveNext__);
      if ( !v123 )
        break;
      v125 = v173.fields._current.fields.value;
      if ( !v173.fields._current.fields.value )
        sub_1BCAA3C(v123, v124);
      v126 = *(float *)&v173.fields._current.fields.value[1].monitor;
      klass_high = HIDWORD(v173.fields._current.fields.value[1].klass);
      *(Il2CppClass **)((char *)&v173.fields._current.fields.value[1].klass + 4) = 0LL;
      if ( v126 != 0.0 )
      {
        klass = (int)v125[1].klass;
        if ( klass == 1 )
        {
          if ( !v87 )
            sub_1BCAA3C(v123, v124);
          *(float *)(v87 + 28) = v126 + *(float *)(v87 + 28);
        }
        else if ( !klass )
        {
          if ( !v87 )
            sub_1BCAA3C(v123, v124);
          *(float *)(v87 + 24) = (float)(v126 / (float)klass_high) + *(float *)(v87 + 24);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v173,
      (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval__Dispose__);
    if ( !v87 )
      goto LABEL_78;
    v129 = *(float *)(v87 + 24);
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v60);
    v131 = System_Decimal__op_Explicit(cctor_finished, v129, 0LL);
    v133 = v132;
    v135 = System_Decimal__op_Explicit(v134, *(float *)(v87 + 28), 0LL);
    v137 = v136;
    v139 = System_Decimal__op_Explicit(v138, *(float *)(v87 + 36) + *(float *)(v87 + 40), 0LL);
    v166 = System_Decimal__op_Explicit(v140, *(float *)(v87 + 44) + *(float *)(v87 + 48), 0LL);
    if ( System_Decimal__op_Inequality(v131, v133, *(const MethodInfo **)System_Decimal_TypeInfo->static_fields) )
    {
      v142 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v142 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v141);
      v143 = System_Decimal__Divide(v142, v131, v133, (const MethodInfo *)v139);
      *(float *)(v87 + 24) = System_Decimal__op_Explicit_63609544(v143, v144) * 1000.0;
    }
    v145 = System_Decimal_TypeInfo;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v141);
      v145 = System_Decimal_TypeInfo;
    }
    v65 = v167;
    ratingBaseList = v168;
    if ( System_Decimal__op_Inequality(v135, v137, *(const MethodInfo **)v145->static_fields) )
    {
      v146 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
      if ( !(_DWORD)v146 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v60);
      v147 = System_Decimal__Divide(v146, v135, v137, (const MethodInfo *)v166);
      *(float *)(v87 + 28) = System_Decimal__op_Explicit_63609544(v147, v148) * 1000.0;
    }
    v68 = v164 + 1;
  }
  while ( (__int64)(v164 + 1) < *(int *)(v64 + 24) );
LABEL_69:
  v149 = WarBoardEvalValueSquare___c_TypeInfo;
  if ( !WarBoardEvalValueSquare___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEvalValueSquare___c_TypeInfo, v60);
    v149 = WarBoardEvalValueSquare___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T__TResult__o *)v149->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v149->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v149, v60);
      v149 = WarBoardEvalValueSquare___c_TypeInfo;
    }
    v151 = (Il2CppObject *)v149->static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                             System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__TypeInfo,
                                             v60,
                                             v66,
                                             v67);
    System_Func_KeyValuePair_int__object___float____ctor(
      _9__3_0,
      v151,
      Method_WarBoardEvalValueSquare___c__Calcurate_b__3_0__,
      0LL);
    static_fields = WarBoardEvalValueSquare___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare___float__o *)_9__3_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
      (int64_t)_9__3_0,
      v153,
      v154,
      v155,
      v156,
      v157,
      v158);
  }
  v159 = System_Linq_Enumerable__Sum_KeyValuePair_int__object___49587376(
           (System_Collections_Generic_IEnumerable_TSource__o *)v65,
           (System_Func_TSource__float__o *)_9__3_0,
           (const MethodInfo_2F4A4B0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare____);
  if ( !v65
    || (v160 = v159,
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                     v65,
                                     (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Count__),
        !this) )
  {
LABEL_78:
    sub_1BCAA3C(Instance, v60);
  }
  v161 = v160 / (float)(int)Instance;
  result = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v65;
  this->fields.averageBenefitValue = v161;
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.squareData = squareData;
  v4 = (WarBoardEvalValueSquare_EvalValueSquare_o *)((char *)v4 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)v4, (int64_t)squareData, v5, v6, v7, v8, v9, v10);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13DF1 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardEvalValueSquare___c_TypeInfo, v1, v2);
    byte_4B13DF1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardEvalValueSquare___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardEvalValueSquare___c_TypeInfo->static_fields->__9 = (struct WarBoardEvalValueSquare___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardEvalValueSquare___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B13DF2 & 1) == 0 )
  {
    this = (WarBoardEvalValueSquare___c_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_KeyValuePair_int__WarBoardEvalValueSquare_EvalValueSquare__get_Value__,
                                              *(_QWORD *)&x.fields.key,
                                              x.fields.value);
    byte_4B13DF2 = 1;
  }
  if ( !value )
    sub_1BCAA3C(this, *(_QWORD *)&x.fields.key);
  return value->fields._EvalValueBenefit_k__BackingField;
}


void __fastcall WarBoardEvalValueSquare___c__DisplayClass3_0___ctor(
        WarBoardEvalValueSquare___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardEvalValueSquare___c__DisplayClass3_0___Calcurate_b__1(
        WarBoardEvalValueSquare___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *calcSquare; // x8

  calcSquare = this->fields.calcSquare;
  if ( !calcSquare )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return calcSquare->fields._squareIndex_k__BackingField == x;
}