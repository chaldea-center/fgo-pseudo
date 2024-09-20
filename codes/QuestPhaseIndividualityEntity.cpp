void __fastcall QuestPhaseIndividualityEntity___ctor(QuestPhaseIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B689 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B689 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestPhaseIndividualityEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4A5B688 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B688 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v5; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_int__o *v9; // x21
  System_Predicate_int__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Int32_array *addIndividuality; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B686 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    sub_1B885B0(&Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__);
    sub_1B885B0(&QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
    byte_4A5B686 = 1;
  }
  addIndividuality = 0LL;
  v5 = sub_1B887FC(QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  if ( QuestPhaseIndividualityEntity__GetAddDelIndividuality(
         this,
         &addIndividuality,
         (System_Int32_array **)(v5 + 16),
         v8) )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseIndividuality, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)baseIndividuality,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividuality, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)addIndividuality,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0LL) )
    {
LABEL_14:
      v11 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9,
              (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v11,
               (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v10 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      v10,
      (Il2CppObject *)v5,
      Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__,
      0LL);
    if ( v9 )
    {
      System_Collections_Generic_List_int___RemoveAll(
        v9,
        (System_Predicate_T__o *)v10,
        (const MethodInfo_34E1E38 *)Method_System_Collections_Generic_List_int__RemoveAll__);
      goto LABEL_14;
    }
LABEL_16:
    sub_1B8880C(IsNullOrEmpty, v7);
  }
  return baseIndividuality;
}


bool __fastcall QuestPhaseIndividualityEntity__GetAddDelIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array **addIndividuality,
        System_Int32_array **delIndividuality,
        const MethodInfo *method)
{
  _QWORD *v7; // x22
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Int32_array **v11; // x8
  System_Int32_array *v12; // x22
  System_Int32_array *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  bool IsNullOrEmpty; // w22
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x23
  QuestPhaseIndividualityEntity___c_c *v18; // x0
  System_Func_int__bool__o *_9__1_0; // x24
  Il2CppObject *v20; // x25
  struct QuestPhaseIndividualityEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  QuestPhaseIndividualityEntity___c_c *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_int__bool__o *_9__1_1; // x21
  Il2CppObject *v31; // x23
  struct QuestPhaseIndividualityEntity___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  System_Func_int__int__o *v36; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A5B687 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Math_Abs__);
    sub_1B885B0(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__);
    sub_1B885B0(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__);
    sub_1B885B0(&QuestPhaseIndividualityEntity___c_TypeInfo);
    byte_4A5B687 = 1;
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  if ( !*(_DWORD *)(v9 + 224) )
    j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  v11 = *(System_Int32_array ***)(v10 + 184);
  v12 = *v11;
  v13 = *v11;
  *delIndividuality = *v11;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)delIndividuality,
    (int32_t)v13,
    (int32_t)delIndividuality,
    (int32_t)method);
  *addIndividuality = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)addIndividuality, (int32_t)v12, v14, v15);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.individuality, 0LL);
  if ( !IsNullOrEmpty )
  {
    individuality = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    v18 = QuestPhaseIndividualityEntity___c_TypeInfo;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v18 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_0 = v18->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__1_0 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_0,
        v20,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__,
        0LL);
      static_fields = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = _9__1_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v22, v23);
    }
    v24 = System_Linq_Enumerable__Where_int_(
            individuality,
            (System_Func_TSource__bool__o *)_9__1_0,
            (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
    v25 = System_Linq_Enumerable__ToArray_int_(
            v24,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    *addIndividuality = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)addIndividuality, (int32_t)v25, v26, v27);
    v28 = QuestPhaseIndividualityEntity___c_TypeInfo;
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v28 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_1 = v28->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__1_1 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_1,
        v31,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__,
        0LL);
      v32 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v32->__9__1_1 = _9__1_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->__9__1_1, (int32_t)_9__1_1, v33, v34);
    }
    v35 = System_Linq_Enumerable__Where_int_(
            v29,
            (System_Func_TSource__bool__o *)_9__1_1,
            (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
    v36 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(v36, 0LL, Method_System_Math_Abs__, 0LL);
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v35,
                                                                 (System_Func_TSource__TResult__o *)v36,
                                                                 (const MethodInfo_2EAD6E0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v38 = System_Linq_Enumerable__ToArray_int_(
            v37,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    *delIndividuality = v38;
    sub_1B88554((ServantStatusBattleListViewItem_o *)delIndividuality, (int32_t)v38, v39, v40);
  }
  return !IsNullOrEmpty;
}


void __fastcall QuestPhaseIndividualityEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B68A & 1) == 0 )
  {
    sub_1B885B0(&QuestPhaseIndividualityEntity___c_TypeInfo);
    byte_4A5B68A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestPhaseIndividualityEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestPhaseIndividualityEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseIndividualityEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestPhaseIndividualityEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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


bool __fastcall QuestPhaseIndividualityEntity___c__DisplayClass0_0___GetAddAndDelAfterIndividuality_b__0(
        QuestPhaseIndividualityEntity___c__DisplayClass0_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_4A5B68B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5B68B = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.delIndividuality,
           x,
           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}