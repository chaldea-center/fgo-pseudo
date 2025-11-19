void QuestPhaseIndividualityEntity___ctor(QuestPhaseIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB69DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB69DF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestPhaseIndividualityEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4CB69DE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CB69DE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_31394F0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4CB69DC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Predicate_int__TypeInfo);
    sub_1C6BA08(&Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__);
    sub_1C6BA08(&QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
    byte_4CB69DC = 1;
  }
  addIndividuality = 0;
  v5 = sub_1C6BC54(QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  if ( QuestPhaseIndividualityEntity__GetAddDelIndividuality(
         this,
         &addIndividuality,
         (System_Int32_array **)(v5 + 16),
         v8) )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseIndividuality, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)baseIndividuality,
        (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividuality, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)addIndividuality,
        (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    {
LABEL_14:
      v11 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9,
              (const MethodInfo_315E630 *)Method_System_Linq_Enumerable_Distinct_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v11,
               (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v10 = (System_Predicate_int__o *)sub_1C6BC54(System_Predicate_int__TypeInfo);
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
        (const MethodInfo_37E4F78 *)Method_System_Collections_Generic_List_int__RemoveAll__);
      goto LABEL_14;
    }
LABEL_16:
    sub_1C6BC60(IsNullOrEmpty, v7);
  }
  return baseIndividuality;
}


bool QuestPhaseIndividualityEntity__GetAddDelIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array **addIndividuality,
        System_Int32_array **delIndividuality,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  System_Int32_array **v12; // x8
  System_Int32_array *v13; // x22
  System_Int32_array *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool IsNullOrEmpty; // w22
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x23
  QuestPhaseIndividualityEntity___c_c *v19; // x0
  System_Func_int__bool__o *_9__1_0; // x24
  Il2CppObject *v21; // x25
  struct QuestPhaseIndividualityEntity___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  QuestPhaseIndividualityEntity___c_c *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_int__bool__o *_9__1_1; // x21
  Il2CppObject *v32; // x23
  struct QuestPhaseIndividualityEntity___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  System_Func_int__int__o *v37; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Int32_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_4CB69DD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C6BA08(&System_Func_int__int__TypeInfo);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Math_Abs__);
    sub_1C6BA08(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__);
    sub_1C6BA08(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__);
    sub_1C6BA08(&QuestPhaseIndividualityEntity___c_TypeInfo);
    byte_4CB69DD = 1;
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C41A9C(inited);
  v12 = *(System_Int32_array ***)(v11 + 184);
  v13 = *v12;
  v14 = *v12;
  *delIndividuality = *v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)delIndividuality, (int32_t)v14, (int32_t)delIndividuality, method);
  *addIndividuality = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)addIndividuality, (int32_t)v13, v15, v16);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.individuality, 0);
  if ( !IsNullOrEmpty )
  {
    individuality = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    v19 = QuestPhaseIndividualityEntity___c_TypeInfo;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v19 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_0 = v19->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__1_0 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_0,
        v21,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__,
        0);
      static_fields = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = _9__1_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v23, v24);
    }
    v25 = System_Linq_Enumerable__Where_int_(
            individuality,
            (System_Func_TSource__bool__o *)_9__1_0,
            (const MethodInfo_3181DBC *)Method_System_Linq_Enumerable_Where_int___);
    v26 = System_Linq_Enumerable__ToArray_int_(
            v25,
            (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    *addIndividuality = v26;
    sub_1C6B9AC((CGThumbnailListItem_o *)addIndividuality, (int32_t)v26, v27, v28);
    v29 = QuestPhaseIndividualityEntity___c_TypeInfo;
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v29 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_1 = v29->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__1_1 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_1,
        v32,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__,
        0);
      v33 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v33->__9__1_1 = _9__1_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v33->__9__1_1, (int32_t)_9__1_1, v34, v35);
    }
    v36 = System_Linq_Enumerable__Where_int_(
            v30,
            (System_Func_TSource__bool__o *)_9__1_1,
            (const MethodInfo_3181DBC *)Method_System_Linq_Enumerable_Where_int___);
    v37 = (System_Func_int__int__o *)sub_1C6BC54(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(v37, 0, Method_System_Math_Abs__, 0);
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v36,
                                                                 (System_Func_TSource__TResult__o *)v37,
                                                                 (const MethodInfo_316E7FC *)Method_System_Linq_Enumerable_Select_int__int___);
    v39 = System_Linq_Enumerable__ToArray_int_(
            v38,
            (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    *delIndividuality = v39;
    sub_1C6B9AC((CGThumbnailListItem_o *)delIndividuality, (int32_t)v39, v40, v41);
  }
  return !IsNullOrEmpty;
}


void QuestPhaseIndividualityEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB69E0 & 1) == 0 )
  {
    sub_1C6BA08(&QuestPhaseIndividualityEntity___c_TypeInfo);
    byte_4CB69E0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(QuestPhaseIndividualityEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhaseIndividualityEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseIndividualityEntity___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)QuestPhaseIndividualityEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4CB69E1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB69E1 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.delIndividuality,
           x,
           (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
}