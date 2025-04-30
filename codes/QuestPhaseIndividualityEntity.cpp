void __fastcall QuestPhaseIndividualityEntity___ctor(QuestPhaseIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4EB39 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_string___ctor__, method);
    byte_4A4EB39 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3211E14 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseIndividualityEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4A4EB38 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4A4EB38 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2F6BE40 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_int__o *v17; // x21
  System_Predicate_int__o *v18; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array *addIndividuality; // [xsp+8h] [xbp-28h] BYREF

  v3 = (System_Collections_ICollection_o *)baseIndividuality;
  if ( (byte_4A4EB36 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Distinct_int___, baseIndividuality);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__RemoveAll__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B863B8(&System_Predicate_int__TypeInfo, v10);
    sub_1B863B8(&Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__, v11);
    sub_1B863B8(&QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo, v12);
    byte_4A4EB36 = 1;
  }
  addIndividuality = 0LL;
  v13 = sub_1B86604(QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  if ( QuestPhaseIndividualityEntity__GetAddDelIndividuality(
         this,
         &addIndividuality,
         (System_Int32_array **)(v13 + 16),
         v16) )
  {
    v17 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v17,
      (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v3, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v17 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v17,
        (System_Collections_Generic_IEnumerable_T__o *)v3,
        (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividuality, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v17 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v17,
        (System_Collections_Generic_IEnumerable_T__o *)addIndividuality,
        (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 16), 0LL) )
    {
LABEL_14:
      v19 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v17,
              (const MethodInfo_2F8E360 *)Method_System_Linq_Enumerable_Distinct_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v19,
               (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v18 = (System_Predicate_int__o *)sub_1B86604(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      v18,
      (Il2CppObject *)v13,
      Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__,
      0LL);
    if ( v17 )
    {
      System_Collections_Generic_List_int___RemoveAll(
        v17,
        (System_Predicate_T__o *)v18,
        (const MethodInfo_35E0F5C *)Method_System_Collections_Generic_List_int__RemoveAll__);
      goto LABEL_14;
    }
LABEL_16:
    sub_1B86614(IsNullOrEmpty, v15);
  }
  return (System_Int32_array *)v3;
}


bool __fastcall QuestPhaseIndividualityEntity__GetAddDelIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array **addIndividuality,
        System_Int32_array **delIndividuality,
        const MethodInfo *method)
{
  long double inited; // q0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  _QWORD *v17; // x22
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  System_Int32_array **v21; // x8
  System_Int32_array *v22; // x22
  System_Int32_array *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool IsNullOrEmpty; // w22
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x23
  QuestPhaseIndividualityEntity___c_c *v28; // x0
  System_Func_int__bool__o *_9__1_0; // x24
  Il2CppObject *v30; // x25
  struct QuestPhaseIndividualityEntity___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  QuestPhaseIndividualityEntity___c_c *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  System_Func_int__bool__o *_9__1_1; // x21
  Il2CppObject *v41; // x23
  struct QuestPhaseIndividualityEntity___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  System_Func_int__int__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Int32_array *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  if ( (byte_4A4EB37 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_int___, addIndividuality);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_int__int___, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1B863B8(&System_Func_int__int__TypeInfo, v11);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v12);
    sub_1B863B8(&Method_System_Math_Abs__, v13);
    sub_1B863B8(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__, v14);
    sub_1B863B8(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__, v15);
    sub_1B863B8(&QuestPhaseIndividualityEntity___c_TypeInfo, v16);
    byte_4A4EB37 = 1;
  }
  v17 = Method_System_Array_Empty_int___;
  v18 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v18 )
  {
    sub_1BD6AA4(Method_System_Array_Empty_int___);
    v18 = v17[7];
  }
  v19 = *(_QWORD *)(v18 + 16);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BD6A48(inited);
  if ( !*(_DWORD *)(v19 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v19);
  v20 = *(_QWORD *)(v17[7] + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BD6A48(inited);
  v21 = *(System_Int32_array ***)(v20 + 184);
  v22 = *v21;
  v23 = *v21;
  *delIndividuality = *v21;
  sub_1B8635C((CGThumbnailListItem_o *)delIndividuality, (int32_t)v23, (int32_t)delIndividuality, method);
  *addIndividuality = v22;
  sub_1B8635C((CGThumbnailListItem_o *)addIndividuality, (int32_t)v22, v24, v25);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.individuality, 0LL);
  if ( !IsNullOrEmpty )
  {
    individuality = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    v28 = QuestPhaseIndividualityEntity___c_TypeInfo;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v28 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_0 = v28->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__1_0 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_0,
        v30,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__,
        0LL);
      static_fields = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = _9__1_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v32, v33);
    }
    v34 = System_Linq_Enumerable__Where_int_(
            individuality,
            (System_Func_TSource__bool__o *)_9__1_0,
            (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
    v35 = System_Linq_Enumerable__ToArray_int_(
            v34,
            (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
    *addIndividuality = v35;
    sub_1B8635C((CGThumbnailListItem_o *)addIndividuality, (int32_t)v35, v36, v37);
    v38 = QuestPhaseIndividualityEntity___c_TypeInfo;
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v38 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_1 = v38->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__1_1 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_1,
        v41,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__,
        0LL);
      v42 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v42->__9__1_1 = _9__1_1;
      sub_1B8635C((CGThumbnailListItem_o *)&v42->__9__1_1, (int32_t)_9__1_1, v43, v44);
    }
    v45 = System_Linq_Enumerable__Where_int_(
            v39,
            (System_Func_TSource__bool__o *)_9__1_1,
            (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
    v46 = (System_Func_int__int__o *)sub_1B86604(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(v46, 0LL, Method_System_Math_Abs__, 0LL);
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v45,
                                                                 (System_Func_TSource__TResult__o *)v46,
                                                                 (const MethodInfo_2F9E548 *)Method_System_Linq_Enumerable_Select_int__int___);
    v48 = System_Linq_Enumerable__ToArray_int_(
            v47,
            (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
    *delIndividuality = v48;
    sub_1B8635C((CGThumbnailListItem_o *)delIndividuality, (int32_t)v48, v49, v50);
  }
  return !IsNullOrEmpty;
}


void __fastcall QuestPhaseIndividualityEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4EB3A & 1) == 0 )
  {
    sub_1B863B8(&QuestPhaseIndividualityEntity___c_TypeInfo, v1);
    byte_4A4EB3A = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(QuestPhaseIndividualityEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhaseIndividualityEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseIndividualityEntity___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)QuestPhaseIndividualityEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_4A4EB3B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_4A4EB3B = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.delIndividuality,
           x,
           (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
}