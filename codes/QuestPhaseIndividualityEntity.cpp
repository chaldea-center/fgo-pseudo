void __fastcall QuestPhaseIndividualityEntity___ctor(QuestPhaseIndividualityEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1673A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1673A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseIndividualityEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4B16739 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase, method);
    byte_4B16739 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x3
  System_Collections_ICollection_o *v4; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Predicate_int__o *v33; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int32_array *addIndividuality; // [xsp+8h] [xbp-28h] BYREF

  v4 = (System_Collections_ICollection_o *)baseIndividuality;
  if ( (byte_4B16737 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, baseIndividuality, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAll__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v16, v17);
    sub_1BCA7E0(
      &Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__,
      v18,
      v19);
    sub_1BCA7E0(&QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo, v20, v21);
    byte_4B16737 = 1;
  }
  addIndividuality = 0LL;
  v22 = sub_1BCAA2C(QuestPhaseIndividualityEntity___c__DisplayClass0_0_TypeInfo, baseIndividuality, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_16;
  if ( QuestPhaseIndividualityEntity__GetAddDelIndividuality(
         this,
         &addIndividuality,
         (System_Int32_array **)(v22 + 16),
         v25) )
  {
    v29 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v26,
                                                      v27,
                                                      v28);
    System_Collections_Generic_List_int____ctor(
      v29,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v4, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v29 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v29,
        (System_Collections_Generic_IEnumerable_T__o *)v4,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividuality, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !v29 )
        goto LABEL_16;
      System_Collections_Generic_List_int___AddRange(
        v29,
        (System_Collections_Generic_IEnumerable_T__o *)addIndividuality,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v22 + 16), 0LL) )
    {
LABEL_14:
      v34 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v29,
              (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v34,
               (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v33 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v30, v31, v32);
    System_Predicate_int____ctor(
      v33,
      (Il2CppObject *)v22,
      Method_QuestPhaseIndividualityEntity___c__DisplayClass0_0__GetAddAndDelAfterIndividuality_b__0__,
      0LL);
    if ( v29 )
    {
      System_Collections_Generic_List_int___RemoveAll(
        v29,
        (System_Predicate_T__o *)v33,
        (const MethodInfo_3586260 *)Method_System_Collections_Generic_List_int__RemoveAll__);
      goto LABEL_14;
    }
LABEL_16:
    sub_1BCAA3C(IsNullOrEmpty, v24);
  }
  return (System_Int32_array *)v4;
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  _QWORD *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  System_Int32_array **v34; // x8
  System_Int32_array *v35; // x22
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  bool IsNullOrEmpty; // w22
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x23
  QuestPhaseIndividualityEntity___c_c *v48; // x0
  System_Func_int__bool__o *_9__1_0; // x24
  Il2CppObject *v50; // x25
  struct QuestPhaseIndividualityEntity___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Int32_array *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  QuestPhaseIndividualityEntity___c_c *v69; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x20
  System_Func_int__bool__o *_9__1_1; // x21
  Il2CppObject *v72; // x23
  struct QuestPhaseIndividualityEntity___c_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x20
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_Func_int__int__o *v84; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_Int32_array *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7

  if ( (byte_4B16738 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, addIndividuality, delIndividuality);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__int___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v16, v17);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Math_Abs__, v22, v23);
    sub_1BCA7E0(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__, v24, v25);
    sub_1BCA7E0(&Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__, v26, v27);
    sub_1BCA7E0(&QuestPhaseIndividualityEntity___c_TypeInfo, v28, v29);
    byte_4B16738 = 1;
  }
  v30 = Method_System_Array_Empty_int___;
  v31 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v31 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, addIndividuality);
    v31 = v30[7];
  }
  v32 = *(_QWORD *)(v31 + 16);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v32 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v32, addIndividuality);
  v33 = *(_QWORD *)(v30[7] + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C1C6BC(inited);
  v34 = *(System_Int32_array ***)(v33 + 184);
  v35 = *v34;
  v36 = (int64_t)*v34;
  *delIndividuality = *v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)delIndividuality,
    v36,
    (int64_t)delIndividuality,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *addIndividuality = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)addIndividuality, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.individuality, 0LL);
  if ( !IsNullOrEmpty )
  {
    individuality = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    v48 = QuestPhaseIndividualityEntity___c_TypeInfo;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo, v43);
      v48 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_0 = v48->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48, v43);
        v48 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v48->static_fields->__9;
      _9__1_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v43, v44, v45);
      System_Func_int__bool____ctor(
        _9__1_0,
        v50,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_0__,
        0LL);
      static_fields = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = _9__1_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
        (int64_t)_9__1_0,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    v58 = System_Linq_Enumerable__Where_int_(
            individuality,
            (System_Func_TSource__bool__o *)_9__1_0,
            (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
    v59 = System_Linq_Enumerable__ToArray_int_(
            v58,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    *addIndividuality = v59;
    sub_1BCA784((PartyOrganizationUtility_o *)addIndividuality, (int64_t)v59, v60, v61, v62, v63, v64, v65);
    v69 = QuestPhaseIndividualityEntity___c_TypeInfo;
    v70 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.individuality;
    if ( !QuestPhaseIndividualityEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseIndividualityEntity___c_TypeInfo, v66);
      v69 = QuestPhaseIndividualityEntity___c_TypeInfo;
    }
    _9__1_1 = v69->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69, v66);
        v69 = QuestPhaseIndividualityEntity___c_TypeInfo;
      }
      v72 = (Il2CppObject *)v69->static_fields->__9;
      _9__1_1 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v66, v67, v68);
      System_Func_int__bool____ctor(
        _9__1_1,
        v72,
        Method_QuestPhaseIndividualityEntity___c__GetAddDelIndividuality_b__1_1__,
        0LL);
      v73 = QuestPhaseIndividualityEntity___c_TypeInfo->static_fields;
      v73->__9__1_1 = _9__1_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v73->__9__1_1, (int64_t)_9__1_1, v74, v75, v76, v77, v78, v79);
    }
    v80 = System_Linq_Enumerable__Where_int_(
            v70,
            (System_Func_TSource__bool__o *)_9__1_1,
            (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
    v84 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v81, v82, v83);
    System_Func_int__int____ctor(v84, 0LL, Method_System_Math_Abs__, 0LL);
    v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v80,
                                                                 (System_Func_TSource__TResult__o *)v84,
                                                                 (const MethodInfo_2F3ECB4 *)Method_System_Linq_Enumerable_Select_int__int___);
    v86 = System_Linq_Enumerable__ToArray_int_(
            v85,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    *delIndividuality = v86;
    sub_1BCA784((PartyOrganizationUtility_o *)delIndividuality, (int64_t)v86, v87, v88, v89, v90, v91, v92);
  }
  return !IsNullOrEmpty;
}


void __fastcall QuestPhaseIndividualityEntity___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1673B & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhaseIndividualityEntity___c_TypeInfo, v1, v2);
    byte_4B1673B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestPhaseIndividualityEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestPhaseIndividualityEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseIndividualityEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestPhaseIndividualityEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B1673C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x, method);
    byte_4B1673C = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.delIndividuality,
           x,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}