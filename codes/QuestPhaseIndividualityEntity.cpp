void __fastcall QuestPhaseIndividualityEntity___ctor(QuestPhaseIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B376EC & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, method);
    byte_4B376EC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseIndividualityEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4B376EB & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4B376EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2F2F8A8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4B376E9 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Distinct_int___, baseIndividuality);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__RemoveAll__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BD3458(&System_Predicate_int__TypeInfo, v10);
    sub_1BD3458(&Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__, v11);
    sub_1BD3458(&QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo, v12);
    byte_4B376E9 = 1;
  }
  addIndividuality = 0LL;
  v13 = sub_1BD36A4(QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  if ( QuestPhaseIndividualityEntity__GetAddDelIndividuality(
         this,
         &addIndividuality,
         (System_Int32_array **)(v13 + 16),
         v16) )
  {
    v17 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v17,
      (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v3, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v17 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v17,
        (System_Collections_Generic_IEnumerable_T__o *)v3,
        (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividuality, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v17 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v17,
        (System_Collections_Generic_IEnumerable_T__o *)addIndividuality,
        (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 16), 0LL) )
    {
LABEL_14:
      v19 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v17,
              (const MethodInfo_2F4EA68 *)Method_System_Linq_Enumerable_Distinct_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v19,
               (const MethodInfo_2F6AC1C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v18 = (System_Predicate_int__o *)sub_1BD36A4(System_Predicate_int__TypeInfo);
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
        (const MethodInfo_35A5394 *)Method_System_Collections_Generic_List_int__RemoveAll__);
      goto LABEL_14;
    }
LABEL_16:
    sub_1BD36B4(IsNullOrEmpty, v15);
  }
  return (System_Int32_array *)v3;
}


bool __fastcall QuestPhaseIndividualityEntity__GetAddDelIndividuality(
        QuestPhaseIndividualityEntity_o *this,
        System_Int32_array **addIndividuality,
        System_Int32_array **delIndividuality,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  _QWORD *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  System_Int32_array **v25; // x8
  System_Int32_array *v26; // x22
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  bool IsNullOrEmpty; // w22
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x23
  QuestPhaseIndividualityEntity___c_c *v36; // x0
  System_Func_int__bool__o *_9__1_0; // x24
  Il2CppObject *v38; // x25
  struct QuestPhaseIndividualityEntity___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Int32_array *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  QuestPhaseIndividualityEntity___c_c *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x20
  System_Func_int__bool__o *_9__1_1; // x21
  Il2CppObject *v57; // x23
  struct QuestPhaseIndividualityEntity___c_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x20
  System_Func_int__int__o *v66; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Int32_array *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7

  if ( (byte_4B376EA & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_Empty_int___, addIndividuality);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_int__int___, v12);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_1BD3458(&System_Func_int__int__TypeInfo, v15);
    sub_1BD3458(&System_Func_int__bool__TypeInfo, v16);
    sub_1BD3458(&Method_System_Math_Abs__, v17);
    sub_1BD3458(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__, v18);
    sub_1BD3458(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__, v19);
    sub_1BD3458(&QuestPhaseIndividualityEntity___c_TypeInfo, v20);
    byte_4B376EA = 1;
  }
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_1C25390(Method_System_Array_Empty_int___);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C25334(inited);
  if ( !*(_DWORD *)(v23 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v23);
  v24 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C25334(inited);
  v25 = *(System_Int32_array ***)(v24 + 184);
  v26 = *v25;
  v27 = (int64_t)*v25;
  *delIndividuality = *v25;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)delIndividuality,
    v27,
    (int64_t)delIndividuality,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *addIndividuality = v26;
  sub_1BD33FC((PartyOrganizationUtility_o *)addIndividuality, (int64_t)v26, v28, v29, v30, v31, v32, v33);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.individuality, 0LL);
  if ( !IsNullOrEmpty )
  {
    individuality = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    v36 = QuestPhaseIndividualityEntity___c_TypeInfo;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v36 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_0 = v36->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v36->static_fields->__9;
      _9__1_0 = (System_Func_int__bool__o *)sub_1BD36A4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_0,
        v38,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__,
        0LL);
      static_fields = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = _9__1_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
        (int64_t)_9__1_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v46 = System_Linq_Enumerable__Where_int_(
            individuality,
            (System_Func_TSource__bool__o *)_9__1_0,
            (const MethodInfo_2F7096C *)Method_System_Linq_Enumerable_Where_int___);
    v47 = System_Linq_Enumerable__ToArray_int_(
            v46,
            (const MethodInfo_2F6AC1C *)Method_System_Linq_Enumerable_ToArray_int___);
    *addIndividuality = v47;
    sub_1BD33FC((PartyOrganizationUtility_o *)addIndividuality, (int64_t)v47, v48, v49, v50, v51, v52, v53);
    v54 = QuestPhaseIndividualityEntity___c_TypeInfo;
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo);
      v54 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_1 = v54->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v54 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v54->static_fields->__9;
      _9__1_1 = (System_Func_int__bool__o *)sub_1BD36A4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__1_1,
        v57,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__,
        0LL);
      v58 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v58->__9__1_1 = _9__1_1;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v58->__9__1_1, (int64_t)_9__1_1, v59, v60, v61, v62, v63, v64);
    }
    v65 = System_Linq_Enumerable__Where_int_(
            v55,
            (System_Func_TSource__bool__o *)_9__1_1,
            (const MethodInfo_2F7096C *)Method_System_Linq_Enumerable_Where_int___);
    v66 = (System_Func_int__int__o *)sub_1BD36A4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(v66, 0LL, Method_System_Math_Abs__, 0LL);
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v65,
                                                                 (System_Func_TSource__TResult__o *)v66,
                                                                 (const MethodInfo_2F5E060 *)Method_System_Linq_Enumerable_Select_int__int___);
    v68 = System_Linq_Enumerable__ToArray_int_(
            v67,
            (const MethodInfo_2F6AC1C *)Method_System_Linq_Enumerable_ToArray_int___);
    *delIndividuality = v68;
    sub_1BD33FC((PartyOrganizationUtility_o *)delIndividuality, (int64_t)v68, v69, v70, v71, v72, v73, v74);
  }
  return !IsNullOrEmpty;
}


void __fastcall QuestPhaseIndividualityEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B376ED & 1) == 0 )
  {
    sub_1BD3458(&QuestPhaseIndividualityEntity___c_TypeInfo, v1);
    byte_4B376ED = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(QuestPhaseIndividualityEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhaseIndividualityEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseIndividualityEntity___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)QuestPhaseIndividualityEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4B376EE & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_4B376EE = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.delIndividuality,
           x,
           (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___);
}