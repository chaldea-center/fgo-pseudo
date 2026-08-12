void QuestPhaseIndividualityEntity___ctor(QuestPhaseIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970FBF & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970FBF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestPhaseIndividualityEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_5970FBE & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970FBE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestPhaseIndividualityEntity__CreatePrimaryKey(
        QuestPhaseIndividualityEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseIndividualityEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


System_Int32_array *QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array *baseIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_int__o *v9; // x21
  System_Predicate_int__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Int32_array *addIndividuality; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970FBC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__);
    sub_2213A60(&QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
    byte_5970FBC = 1;
  }
  addIndividuality = 0;
  v5 = sub_2213CCC(QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  if ( QuestPhaseIndividualityEntity__GetAddDelIndividuality(
         this,
         &addIndividuality,
         (System_Int32_array **)(v5 + 16),
         v8) )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseIndividuality, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)baseIndividuality,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividuality, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)addIndividuality,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    {
LABEL_14:
      v11 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9,
              (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v11,
               (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v10 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      v10,
      (Il2CppObject *)v5,
      Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__,
      0);
    if ( v9 )
    {
      System_Collections_Generic_List_int___RemoveAll(
        v9,
        (System_Predicate_T__o *)v10,
        (const MethodInfo_4468864 *)Method_System_Collections_Generic_List_int__RemoveAll__);
      goto LABEL_14;
    }
LABEL_16:
    sub_2213CDC(IsNullOrEmpty, v7);
  }
  return baseIndividuality;
}


bool QuestPhaseIndividualityEntity__GetAddDelIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array **addIndividuality,
        System_Int32_array **delIndividuality,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  System_Int32_array **v16; // x8
  System_Int32_array *v17; // x22
  System_Int32_array *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  bool IsNullOrEmpty; // w22
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x23
  QuestPhaseIndividualityEntity___c_c *v28; // x0
  struct QuestPhaseIndividualityEntity___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__1_0; // x24
  Il2CppObject *v31; // x25
  struct QuestPhaseIndividualityEntity___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  QuestPhaseIndividualityEntity___c_c *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  struct QuestPhaseIndividualityEntity___c_StaticFields *v50; // x8
  System_Func_int__bool__o *_9__1_1; // x21
  Il2CppObject *v52; // x23
  struct QuestPhaseIndividualityEntity___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  System_Func_int__int__o *v61; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Int32_array *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7

  if ( (byte_5970FBD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Math_Abs__);
    sub_2213A60(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__);
    sub_2213A60(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__);
    sub_2213A60(&QuestPhaseIndividualityEntity___c_TypeInfo);
    byte_5970FBD = 1;
  }
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v8);
  if ( !*(_DWORD *)(v14 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v14, addIndividuality);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908(v8);
  v16 = *(System_Int32_array ***)(v15 + 184);
  v17 = *v16;
  v18 = *v16;
  *delIndividuality = *v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)delIndividuality,
    (int32_t)v18,
    (System_String_o *)delIndividuality,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  *addIndividuality = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)addIndividuality, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.individuality, 0);
  if ( !IsNullOrEmpty )
  {
    individuality = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    v28 = QuestPhaseIndividualityEntity___c_TypeInfo;
    if ( !*(&QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo, v25);
      v28 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__1_0 = static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !*(&v28->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v28, v25);
        static_fields = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__1_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_0,
        v31,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__,
        0);
      v32 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v32->__9__1_0 = _9__1_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__1_0, (int32_t)_9__1_0, v33, v34, v35, v36, v37, v38);
    }
    v39 = System_Linq_Enumerable__Where_int_(
            individuality,
            (System_Func_TSource__bool__o *)_9__1_0,
            (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
    v40 = System_Linq_Enumerable__ToArray_int_(
            v39,
            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    *addIndividuality = v40;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)addIndividuality, (int32_t)v40, v41, v42, v43, v44, v45, v46);
    v48 = QuestPhaseIndividualityEntity___c_TypeInfo;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    if ( !*(&QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo, v47);
      v48 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    v50 = v48->static_fields;
    _9__1_1 = v50->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !*(&v48->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v48, v47);
        v50 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      }
      v52 = (Il2CppObject *)v50->__9;
      _9__1_1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_1,
        v52,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__,
        0);
      v53 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v53->__9__1_1 = _9__1_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->__9__1_1, (int32_t)_9__1_1, v54, v55, v56, v57, v58, v59);
    }
    v60 = System_Linq_Enumerable__Where_int_(
            v49,
            (System_Func_TSource__bool__o *)_9__1_1,
            (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
    v61 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(v61, 0, Method_System_Math_Abs__, 0);
    v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v60,
                                                                 (System_Func_TSource__TResult__o *)v61,
                                                                 (const MethodInfo_388D7F0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v63 = System_Linq_Enumerable__ToArray_int_(
            v62,
            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    *delIndividuality = v63;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)delIndividuality, (int32_t)v63, v64, v65, v66, v67, v68, v69);
  }
  return !IsNullOrEmpty;
}


void QuestPhaseIndividualityEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970FC0 & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseIndividualityEntity___c_TypeInfo);
    byte_5970FC0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestPhaseIndividualityEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhaseIndividualityEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseIndividualityEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestPhaseIndividualityEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestPhaseIndividualityEntity___c___ctor(QuestPhaseIndividualityEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseIndividualityEntity___c___GetAddDelIndividuality_b__1_0(
        QuestPhaseIndividualityEntity___c_o *this,
        int32_t val,
        const MethodInfo *method)
{
  return val >= 0;
}


bool QuestPhaseIndividualityEntity___c___GetAddDelIndividuality_b__1_1(
        QuestPhaseIndividualityEntity___c_o *this,
        int32_t val,
        const MethodInfo *method)
{
  return (unsigned int)val >> 31;
}


void QuestPhaseIndividualityEntity___c__DisplayClass0_0___ctor(
        QuestPhaseIndividualityEntity___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseIndividualityEntity___c__DisplayClass0_0___GetAddAndDelAfterIndividuality_b__0(
        QuestPhaseIndividualityEntity___c__DisplayClass0_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_5970FC1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5970FC1 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.delIndividuality,
           x,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}