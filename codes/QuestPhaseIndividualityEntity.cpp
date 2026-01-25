void QuestPhaseIndividualityEntity___ctor(QuestPhaseIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEED94 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEED94 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestPhaseIndividualityEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4CEED93 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEED93 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4CEED91 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Predicate_int__TypeInfo);
    sub_1C7BAE8(&Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__);
    sub_1C7BAE8(&QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
    byte_4CEED91 = 1;
  }
  addIndividuality = 0;
  v5 = sub_1C7BD34(QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  if ( QuestPhaseIndividualityEntity__GetAddDelIndividuality(
         this,
         &addIndividuality,
         (System_Int32_array **)(v5 + 16),
         v8) )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseIndividuality, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)baseIndividuality,
        (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividuality, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)addIndividuality,
        (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    {
LABEL_14:
      v11 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9,
              (const MethodInfo_3192930 *)Method_System_Linq_Enumerable_Distinct_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v11,
               (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v10 = (System_Predicate_int__o *)sub_1C7BD34(System_Predicate_int__TypeInfo);
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
        (const MethodInfo_3823400 *)Method_System_Collections_Generic_List_int__RemoveAll__);
      goto LABEL_14;
    }
LABEL_16:
    sub_1C7BD40(IsNullOrEmpty, v7);
  }
  return baseIndividuality;
}


bool QuestPhaseIndividualityEntity__GetAddDelIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array **addIndividuality,
        System_Int32_array **delIndividuality,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  System_Int32_array **v16; // x8
  System_Int32_array *v17; // x22
  System_Int32_array *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  bool IsNullOrEmpty; // w22
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x23
  QuestPhaseIndividualityEntity___c_c *v27; // x0
  System_Func_int__bool__o *_9__1_0; // x24
  Il2CppObject *v29; // x25
  struct QuestPhaseIndividualityEntity___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  QuestPhaseIndividualityEntity___c_c *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  System_Func_int__bool__o *_9__1_1; // x21
  Il2CppObject *v48; // x23
  struct QuestPhaseIndividualityEntity___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x20
  System_Func_int__int__o *v57; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Int32_array *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7

  if ( (byte_4CEED92 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&System_Func_int__int__TypeInfo);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Math_Abs__);
    sub_1C7BAE8(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__);
    sub_1C7BAE8(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__);
    sub_1C7BAE8(&QuestPhaseIndividualityEntity___c_TypeInfo);
    byte_4CEED92 = 1;
  }
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_1C51BD8(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C51B7C(inited);
  v16 = *(System_Int32_array ***)(v15 + 184);
  v17 = *v16;
  v18 = *v16;
  *delIndividuality = *v16;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)delIndividuality,
    (int32_t)v18,
    (int32_t)delIndividuality,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *addIndividuality = v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)addIndividuality, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.individuality, 0);
  if ( !IsNullOrEmpty )
  {
    individuality = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    v27 = QuestPhaseIndividualityEntity___c_TypeInfo;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v27 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_0 = v27->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__1_0 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_0,
        v29,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__,
        0);
      static_fields = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = _9__1_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0,
        (int32_t)_9__1_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = System_Linq_Enumerable__Where_int_(
            individuality,
            (System_Func_TSource__bool__o *)_9__1_0,
            (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
    v38 = System_Linq_Enumerable__ToArray_int_(
            v37,
            (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
    *addIndividuality = v38;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)addIndividuality, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = QuestPhaseIndividualityEntity___c_TypeInfo;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v45 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_1 = v45->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__1_1 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_1,
        v48,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__,
        0);
      v49 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v49->__9__1_1 = _9__1_1;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v49->__9__1_1, (int32_t)_9__1_1, v50, v51, v52, v53, v54, v55);
    }
    v56 = System_Linq_Enumerable__Where_int_(
            v46,
            (System_Func_TSource__bool__o *)_9__1_1,
            (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
    v57 = (System_Func_int__int__o *)sub_1C7BD34(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(v57, 0, Method_System_Math_Abs__, 0);
    v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v56,
                                                                 (System_Func_TSource__TResult__o *)v57,
                                                                 (const MethodInfo_31A2BBC *)Method_System_Linq_Enumerable_Select_int__int___);
    v59 = System_Linq_Enumerable__ToArray_int_(
            v58,
            (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
    *delIndividuality = v59;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)delIndividuality, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  }
  return !IsNullOrEmpty;
}


void QuestPhaseIndividualityEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEED95 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestPhaseIndividualityEntity___c_TypeInfo);
    byte_4CEED95 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(QuestPhaseIndividualityEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhaseIndividualityEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseIndividualityEntity___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)QuestPhaseIndividualityEntity___c_TypeInfo->static_fields,
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
  if ( (byte_4CEED96 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CEED96 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.delIndividuality,
           x,
           (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
}