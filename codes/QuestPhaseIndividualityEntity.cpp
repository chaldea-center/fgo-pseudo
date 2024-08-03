void __fastcall QuestPhaseIndividualityEntity___ctor(QuestPhaseIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC929 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC929 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseIndividualityEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_49FC928 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_49FC928 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestPhaseIndividualityEntity__CreatePrimaryKey(
        QuestPhaseIndividualityEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseIndividualityEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


System_Int32_array *__fastcall QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array *baseIndividuality,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Predicate_int__o *v21; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *addIndividuality; // [xsp+8h] [xbp-28h] BYREF

  v3 = (System_Collections_ICollection_o *)baseIndividuality;
  if ( (byte_49FC926 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, baseIndividuality);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAll__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v10);
    sub_1B640C8(&Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__, v11);
    sub_1B640C8(&QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo, v12);
    byte_49FC926 = 1;
  }
  addIndividuality = 0LL;
  v13 = sub_1B64314(QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo, baseIndividuality, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  if ( QuestPhaseIndividualityEntity__GetAddDelIndividuality(
         this,
         &addIndividuality,
         (System_Int32_array **)(v13 + 16),
         v15) )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v16, v17);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v3, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v18 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)v3,
        (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividuality, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v18 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)addIndividuality,
        (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 16), 0LL) )
    {
LABEL_14:
      v22 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v18,
              (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v22,
               (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v21 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v19, v20);
    System_Predicate_int____ctor(
      v21,
      (Il2CppObject *)v13,
      Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__,
      0LL);
    if ( v18 )
    {
      System_Collections_Generic_List_int___RemoveAll(
        v18,
        (System_Predicate_T__o *)v21,
        (const MethodInfo_34915A4 *)Method_System_Collections_Generic_List_int__RemoveAll__);
      goto LABEL_14;
    }
LABEL_16:
    sub_1B64324(IsNullOrEmpty);
  }
  return (System_Int32_array *)v3;
}


bool __fastcall QuestPhaseIndividualityEntity__GetAddDelIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array **addIndividuality,
        System_Int32_array **delIndividuality,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  _QWORD *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  System_Int32_array **v20; // x8
  System_Int32_array *v21; // x22
  System_Int32_array *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  bool IsNullOrEmpty; // w22
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x23
  QuestPhaseIndividualityEntity___c_c *v29; // x0
  System_Func_int__bool__o *_9__1_0; // x24
  Il2CppObject *v31; // x25
  struct QuestPhaseIndividualityEntity___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  __int64 v40; // x2
  QuestPhaseIndividualityEntity___c_c *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  System_Func_int__bool__o *_9__1_1; // x21
  Il2CppObject *v44; // x23
  struct QuestPhaseIndividualityEntity___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  System_Func_int__int__o *v51; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Int32_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3

  if ( (byte_49FC927 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, addIndividuality);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_1B640C8(&System_Func_int__int__TypeInfo, v10);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v11);
    sub_1B640C8(&Method_System_Math_Abs__, v12);
    sub_1B640C8(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__, v13);
    sub_1B640C8(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__, v14);
    sub_1B640C8(&QuestPhaseIndividualityEntity___c_TypeInfo, v15);
    byte_49FC927 = 1;
  }
  v16 = Method_System_Array_Empty_int___;
  v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v17 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB5FA4(v18);
  if ( !*(_DWORD *)(v18 + 224) )
    j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB5FA4(v19);
  v20 = *(System_Int32_array ***)(v19 + 184);
  v21 = *v20;
  v22 = *v20;
  *delIndividuality = *v20;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)delIndividuality,
    (int32_t)v22,
    (int32_t)delIndividuality,
    (int32_t)method);
  *addIndividuality = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)addIndividuality, (int32_t)v21, v23, v24);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.individuality, 0LL);
  if ( !IsNullOrEmpty )
  {
    individuality = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    v29 = QuestPhaseIndividualityEntity___c_TypeInfo;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v29 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_0 = v29->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__1_0 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v25, v26);
      System_Func_int__bool____ctor(
        _9__1_0,
        v31,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__,
        0LL);
      static_fields = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = _9__1_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v33, v34);
    }
    v35 = System_Linq_Enumerable__Where_int_(
            individuality,
            (System_Func_TSource__bool__o *)_9__1_0,
            (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
    v36 = System_Linq_Enumerable__ToArray_int_(
            v35,
            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    *addIndividuality = v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)addIndividuality, (int32_t)v36, v37, v38);
    v41 = QuestPhaseIndividualityEntity___c_TypeInfo;
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v41 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_1 = v41->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v41->static_fields->__9;
      _9__1_1 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v39, v40);
      System_Func_int__bool____ctor(
        _9__1_1,
        v44,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__,
        0LL);
      v45 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v45->__9__1_1 = _9__1_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->__9__1_1, (int32_t)_9__1_1, v46, v47);
    }
    v48 = System_Linq_Enumerable__Where_int_(
            v42,
            (System_Func_TSource__bool__o *)_9__1_1,
            (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
    v51 = (System_Func_int__int__o *)sub_1B64314(System_Func_int__int__TypeInfo, v49, v50);
    System_Func_int__int____ctor(v51, 0LL, Method_System_Math_Abs__, 0LL);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v48,
                                                                 (System_Func_TSource__TResult__o *)v51,
                                                                 (const MethodInfo_2E66974 *)Method_System_Linq_Enumerable_Select_int__int___);
    v53 = System_Linq_Enumerable__ToArray_int_(
            v52,
            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    *delIndividuality = v53;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)delIndividuality, (int32_t)v53, v54, v55);
  }
  return !IsNullOrEmpty;
}


void __fastcall QuestPhaseIndividualityEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC92A & 1) == 0 )
  {
    sub_1B640C8(&QuestPhaseIndividualityEntity___c_TypeInfo, v1);
    byte_49FC92A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestPhaseIndividualityEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestPhaseIndividualityEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseIndividualityEntity___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestPhaseIndividualityEntity___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall QuestPhaseIndividualityEntity___c___ctor(
        QuestPhaseIndividualityEntity___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhaseIndividualityEntity___c___GetAddDelIndividuality_b__1_0(
        QuestPhaseIndividualityEntity___c_o *this,
        int32_t val,
        const MethodInfo *method)
{
  return val >= 0;
}


bool __fastcall QuestPhaseIndividualityEntity___c___GetAddDelIndividuality_b__1_1(
        QuestPhaseIndividualityEntity___c_o *this,
        int32_t val,
        const MethodInfo *method)
{
  return (unsigned int)val >> 31;
}


void __fastcall QuestPhaseIndividualityEntity___c__DisplayClass0_0___ctor(
        QuestPhaseIndividualityEntity___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseIndividualityEntity___c__DisplayClass0_0___GetAddAndDelAfterIndividuality_b__0(
        QuestPhaseIndividualityEntity___c__DisplayClass0_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_49FC92B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_49FC92B = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.delIndividuality,
           x,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}