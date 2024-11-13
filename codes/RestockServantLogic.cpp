void __fastcall RestockServantLogic___ctor(
        RestockServantLogic_o *this,
        int32_t fieldMemberIndex,
        bool isEnemy,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SubMemberIndex_k__BackingField = 0;
  this->fields._FieldMemberIndex_k__BackingField = fieldMemberIndex;
  this->fields._IsEnemy_k__BackingField = isEnemy;
  this->fields._IsActive_k__BackingField = 1;
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant(
        RestockServantLogic_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleServantData_array *RestockableSubServantArray; // x1
  const MethodInfo *v5; // x2

  if ( !battleData )
    sub_1BCAA3C(this, 0LL);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_44303908(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_44303908(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  RestockServantLogic_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t SubMemberIndex_k__BackingField; // w20
  Il2CppObject *object; // x2

  v4 = this;
  if ( (byte_4B18E70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_BattleServantData___, subMemberArray, method);
    sub_1BCA7E0(&Method_BattleRandom_getShuffle_BattleServantData___, v5, v6);
    this = (RestockServantLogic_o *)sub_1BCA7E0(&Method_System_Linq_Enumerable_Last_BattleServantData___, v7, v8);
    byte_4B18E70 = 1;
  }
  if ( !subMemberArray )
    goto LABEL_11;
  if ( !*(_QWORD *)&subMemberArray->max_length )
    return 0LL;
  SubMemberIndex_k__BackingField = v4->fields._SubMemberIndex_k__BackingField;
  if ( (SubMemberIndex_k__BackingField & 0x80000000) == 0 )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)subMemberArray,
               (const MethodInfo_2F36F54 *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_object_(
                                    (System_Object_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    object,
                                    (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_2F042F0 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_1BCAA3C(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
    sub_1BCAA44(this, subMemberArray);
  return (BattleServantData_o *)this[1].klass;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestockServantLogic__DeactiveRestockLogic(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Func_object__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  RestockServantLogic___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_T__o *v34; // x19
  System_Action_object__o *_9__21_1; // x20
  Il2CppObject *v36; // x21
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B18E72 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_RestockServantLogic__TypeInfo, isEnemy, battleData);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_RestockServantLogic___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v9, v10);
    sub_1BCA7E0(&System_Func_RestockServantLogic__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v13, v14);
    sub_1BCA7E0(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v15, v16);
    sub_1BCA7E0(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&RestockServantLogic___c_TypeInfo, v19, v20);
    byte_4B18E72 = 1;
  }
  v21 = sub_1BCAA2C(RestockServantLogic___c__DisplayClass21_0_TypeInfo, isEnemy, battleData, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 || (*(_DWORD *)(v21 + 16) = fieldMemberIndex, *(_BYTE *)(v21 + 20) = isEnemy, !battleData) )
    sub_1BCAA3C(v22, v23);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v28 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_RestockServantLogic__bool__TypeInfo, v25, v26, v27);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v21,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v33 = RestockServantLogic___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_T__o *)v29;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo, v30);
    v33 = RestockServantLogic___c_TypeInfo;
  }
  _9__21_1 = (System_Action_object__o *)v33->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = RestockServantLogic___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__21_1 = (System_Action_object__o *)sub_1BCAA2C(System_Action_RestockServantLogic__TypeInfo, v30, v31, v32);
    System_Action_object____ctor(_9__21_1, v36, Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, 0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
      (int64_t)_9__21_1,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  BasicHelper__ForEach_object_(
    v34,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_RestockServantLogic___);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *__fastcall RestockServantLogic__GetImmediateRestockServant(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *RestockServantLogicList; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Predicate_object__o *v22; // x22
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x21
  int v28; // w22
  char v29; // w20

  if ( (byte_4B18E71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy, battleData);
    sub_1BCA7E0(&System_Predicate_RestockServantLogic__TypeInfo, v7, v8);
    sub_1BCA7E0(&RestockServantLogic_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v11, v12);
    sub_1BCA7E0(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v13, v14);
    byte_4B18E71 = 1;
  }
  v15 = sub_1BCAA2C(RestockServantLogic___c__DisplayClass20_0_TypeInfo, isEnemy, battleData, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_DWORD *)(v15 + 16) = fieldMemberIndex, *(_BYTE *)(v15 + 20) = isEnemy, !battleData)
    || (RestockServantLogicList = (System_Collections_Generic_List_object__o *)BattleData__GetRestockServantLogicList(
                                                                                 battleData,
                                                                                 0LL),
        v22 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestockServantLogic__TypeInfo, v19, v20, v21),
        System_Predicate_object____ctor(
          v22,
          (Il2CppObject *)v15,
          Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
          0LL),
        !RestockServantLogicList) )
  {
    sub_1BCAA3C(v16, v17);
  }
  v23 = System_Collections_Generic_List_object___Find(
          RestockServantLogicList,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  if ( v23 )
  {
    v27 = (__int64)v23;
  }
  else
  {
    v28 = *(_DWORD *)(v15 + 16);
    v29 = *(_BYTE *)(v15 + 20);
    v27 = sub_1BCAA2C(RestockServantLogic_TypeInfo, v24, v25, v26);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    *(_BYTE *)(v27 + 24) = v29;
    *(_DWORD *)(v27 + 16) = 0;
    *(_DWORD *)(v27 + 20) = v28;
    *(_BYTE *)(v27 + 25) = 1;
  }
  return (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v27 + 376LL))(
                                  v27,
                                  battleData,
                                  *(_QWORD *)(*(_QWORD *)v27 + 384LL));
}


System_Int32_array *__fastcall RestockServantLogic__GetRandomEntryOrderDecidedArray(
        System_Int32_array *baseArray,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x8
  __int64 v32; // x9
  System_Collections_Generic_IEnumerable_int__o *v34; // x19
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Func_int__bool__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  System_Int32_array *v45; // x19
  RestockServantLogic___c_c *v46; // x8
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v48; // x22
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0

  if ( (byte_4B18E73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleRandom_getShuffle_int___, battleData, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v10, v11);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v14, v15);
    sub_1BCA7E0(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v16, v17);
    sub_1BCA7E0(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&RestockServantLogic___c_TypeInfo, v20, v21);
    byte_4B18E73 = 1;
  }
  v22 = sub_1BCAA2C(RestockServantLogic___c__DisplayClass22_0_TypeInfo, battleData, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_17;
  *(_QWORD *)(v22 + 16) = baseArray;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)baseArray, v25, v26, v27, v28, v29, v30);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v22 + 16), 0LL);
  v31 = *(_QWORD *)(v22 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v22 + 16);
  if ( !v31 )
    goto LABEL_17;
  v32 = *(_QWORD *)(v31 + 24);
  if ( !(_DWORD)v32 )
    sub_1BCAA44(IsNullOrEmpty, v24);
  if ( (*(_DWORD *)(v31 + (((v32 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v22 + 16);
  if ( !battleData )
LABEL_17:
    sub_1BCAA3C(IsNullOrEmpty, v24);
  v34 = System_Linq_Enumerable__Range(0, battleData->fields._EnemyFieldPosCount_k__BackingField, 0LL);
  v38 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v35, v36, v37);
  System_Func_int__bool____ctor(
    v38,
    (Il2CppObject *)v22,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    0LL);
  v39 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v34,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  v40 = System_Linq_Enumerable__ToArray_int_(
          v39,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v44 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v22 + 16);
  v45 = v40;
  v46 = RestockServantLogic___c_TypeInfo;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo, v41);
    v46 = RestockServantLogic___c_TypeInfo;
  }
  _9__22_1 = v46->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46, v41);
      v46 = RestockServantLogic___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v46->static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v41, v42, v43);
    System_Func_int__bool____ctor(
      _9__22_1,
      v48,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = _9__22_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_1,
      (int64_t)_9__22_1,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = System_Linq_Enumerable__Where_int_(
          v44,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v45,
                                                                       (const MethodInfo_2F04208 *)Method_BattleRandom_getShuffle_int___);
  v58 = System_Linq_Enumerable__Concat_int_(
          v56,
          Shuffle_int,
          (const MethodInfo_2F2A9EC *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v58,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall RestockServantLogic__SetActive(RestockServantLogic_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsActive_k__BackingField = value;
}


int32_t __fastcall RestockServantLogic__get_FieldMemberIndex(RestockServantLogic_o *this, const MethodInfo *method)
{
  return this->fields._FieldMemberIndex_k__BackingField;
}


bool __fastcall RestockServantLogic__get_IsActive(RestockServantLogic_o *this, const MethodInfo *method)
{
  return this->fields._IsActive_k__BackingField;
}


bool __fastcall RestockServantLogic__get_IsEnemy(RestockServantLogic_o *this, const MethodInfo *method)
{
  return this->fields._IsEnemy_k__BackingField;
}


int32_t __fastcall RestockServantLogic__get_SubMemberIndex(RestockServantLogic_o *this, const MethodInfo *method)
{
  return this->fields._SubMemberIndex_k__BackingField;
}


void __fastcall RestockServantLogic__set_FieldMemberIndex(
        RestockServantLogic_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FieldMemberIndex_k__BackingField = value;
}


void __fastcall RestockServantLogic__set_IsActive(RestockServantLogic_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsActive_k__BackingField = value;
}


void __fastcall RestockServantLogic__set_IsEnemy(RestockServantLogic_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsEnemy_k__BackingField = value;
}


void __fastcall RestockServantLogic__set_SubMemberIndex(
        RestockServantLogic_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SubMemberIndex_k__BackingField = value;
}


void __fastcall RestockServantLogic___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B18E74 & 1) == 0 )
  {
    sub_1BCA7E0(&RestockServantLogic___c_TypeInfo, v1, v2);
    byte_4B18E74 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RestockServantLogic___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RestockServantLogic___c_TypeInfo->static_fields->__9 = (struct RestockServantLogic___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RestockServantLogic___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall RestockServantLogic___c___ctor(RestockServantLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RestockServantLogic___c___DeactiveRestockLogic_b__21_1(
        RestockServantLogic___c_o *this,
        RestockServantLogic_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  x->fields._IsActive_k__BackingField = 0;
}


bool __fastcall RestockServantLogic___c___GetRandomEntryOrderDecidedArray_b__22_1(
        RestockServantLogic___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  return i >= 0;
}


void __fastcall RestockServantLogic___c__DisplayClass20_0___ctor(
        RestockServantLogic___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RestockServantLogic___c__DisplayClass20_0___GetImmediateRestockServant_b__0(
        RestockServantLogic___c__DisplayClass20_0_o *this,
        RestockServantLogic_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._FieldMemberIndex_k__BackingField == this->fields.fieldMemberIndex
      && this->fields.isEnemy == x->fields._IsEnemy_k__BackingField;
}


void __fastcall RestockServantLogic___c__DisplayClass21_0___ctor(
        RestockServantLogic___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RestockServantLogic___c__DisplayClass21_0___DeactiveRestockLogic_b__0(
        RestockServantLogic___c__DisplayClass21_0_o *this,
        RestockServantLogic_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._FieldMemberIndex_k__BackingField == this->fields.fieldMemberIndex
      && this->fields.isEnemy == x->fields._IsEnemy_k__BackingField;
}


void __fastcall RestockServantLogic___c__DisplayClass22_0___ctor(
        RestockServantLogic___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestockServantLogic___c__DisplayClass22_0___GetRandomEntryOrderDecidedArray_b__0(
        RestockServantLogic___c__DisplayClass22_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_4B18E75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&i, method);
    byte_4B18E75 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}