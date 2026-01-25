void RestockServantLogic___ctor(
        RestockServantLogic_o *this,
        int32_t fieldMemberIndex,
        bool isEnemy,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SubMemberIndex_k__BackingField = 0;
  this->fields._FieldMemberIndex_k__BackingField = fieldMemberIndex;
  this->fields._IsEnemy_k__BackingField = isEnemy;
  this->fields._IsActive_k__BackingField = 1;
}


BattleServantData_o *RestockServantLogic__ChoiceRestockServant(
        RestockServantLogic_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleServantData_array *RestockableSubServantArray; // x1
  const MethodInfo *v5; // x2

  if ( !battleData )
    sub_1C7BD40(this, 0);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0);
  return RestockServantLogic__ChoiceRestockServant_47571320(this, RestockableSubServantArray, v5);
}


BattleServantData_o *RestockServantLogic__ChoiceRestockServant_47571320(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  RestockServantLogic_o *v4; // x20
  int32_t SubMemberIndex_k__BackingField; // w20
  Il2CppObject *object; // x2

  v4 = this;
  if ( (byte_4CF18C3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_BattleServantData___);
    sub_1C7BAE8(&Method_BattleRandom_getShuffle_BattleServantData___);
    this = (RestockServantLogic_o *)sub_1C7BAE8(&Method_System_Linq_Enumerable_Last_BattleServantData___);
    byte_4CF18C3 = 1;
  }
  if ( !subMemberArray )
    goto LABEL_11;
  if ( !subMemberArray->max_length )
    return 0;
  SubMemberIndex_k__BackingField = v4->fields._SubMemberIndex_k__BackingField;
  if ( (SubMemberIndex_k__BackingField & 0x80000000) == 0 )
  {
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)subMemberArray,
               (const MethodInfo_319A1D0 *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_object_(
                                    (System_Object_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    object,
                                    (const MethodInfo_315E928 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_3161324 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_1C7BD40(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
    sub_1C7BD48(this);
  return (BattleServantData_o *)this[1].klass;
}


void RestockServantLogic__DeactiveRestockLogic(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  RestockServantLogic___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_T__o *v14; // x19
  System_Action_object__o *_9__21_1; // x20
  Il2CppObject *v16; // x21
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CF18C5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_RestockServantLogic__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_RestockServantLogic___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_RestockServantLogic___);
    sub_1C7BAE8(&System_Func_RestockServantLogic__bool__TypeInfo);
    sub_1C7BAE8(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__);
    sub_1C7BAE8(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__);
    sub_1C7BAE8(&RestockServantLogic___c__DisplayClass21_0_TypeInfo);
    sub_1C7BAE8(&RestockServantLogic___c_TypeInfo);
    byte_4CF18C5 = 1;
  }
  v7 = sub_1C7BD34(RestockServantLogic___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 || (*(_DWORD *)(v7 + 16) = fieldMemberIndex, *(_BYTE *)(v7 + 20) = isEnemy, !battleData) )
    sub_1C7BD40(v8, v9);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0);
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestockServantLogic__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v13 = RestockServantLogic___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)v12;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v13 = RestockServantLogic___c_TypeInfo;
  }
  _9__21_1 = (System_Action_object__o *)v13->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = RestockServantLogic___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__21_1 = (System_Action_object__o *)sub_1C7BD34(System_Action_RestockServantLogic__TypeInfo);
    System_Action_object____ctor(_9__21_1, v16, Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, 0);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_1,
      (int32_t)_9__21_1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_RestockServantLogic___);
}


BattleServantData_o *RestockServantLogic__GetImmediateRestockServant(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *RestockServantLogicList; // x21
  System_Predicate_object__o *v11; // x22
  Il2CppObject *v12; // x0
  __int64 v13; // x21
  int v14; // w22
  char v15; // w20

  if ( (byte_4CF18C4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestockServantLogic__Find__);
    sub_1C7BAE8(&System_Predicate_RestockServantLogic__TypeInfo);
    sub_1C7BAE8(&RestockServantLogic_TypeInfo);
    sub_1C7BAE8(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__);
    sub_1C7BAE8(&RestockServantLogic___c__DisplayClass20_0_TypeInfo);
    byte_4CF18C4 = 1;
  }
  v7 = sub_1C7BD34(RestockServantLogic___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = fieldMemberIndex, *(_BYTE *)(v7 + 20) = isEnemy, !battleData)
    || (RestockServantLogicList = (System_Collections_Generic_List_object__o *)BattleData__GetRestockServantLogicList(
                                                                                 battleData,
                                                                                 0),
        v11 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestockServantLogic__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
          0),
        !RestockServantLogicList) )
  {
    sub_1C7BD40(v8, v9);
  }
  v12 = System_Collections_Generic_List_object___Find(
          RestockServantLogicList,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  if ( v12 )
  {
    v13 = (__int64)v12;
  }
  else
  {
    v14 = *(_DWORD *)(v7 + 16);
    v15 = *(_BYTE *)(v7 + 20);
    v13 = sub_1C7BD34(RestockServantLogic_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    *(_BYTE *)(v13 + 24) = v15;
    *(_DWORD *)(v13 + 16) = 0;
    *(_DWORD *)(v13 + 20) = v14;
    *(_BYTE *)(v13 + 25) = 1;
  }
  return (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v13 + 376LL))(
                                  v13,
                                  battleData,
                                  *(_QWORD *)(*(_QWORD *)v13 + 384LL));
}


System_Int32_array *RestockServantLogic__GetRandomEntryOrderDecidedArray(
        System_Int32_array *baseArray,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x8
  __int64 v15; // x9
  System_Collections_Generic_IEnumerable_int__o *v17; // x19
  System_Func_int__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Int32_array *v22; // x19
  RestockServantLogic___c_c *v23; // x8
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v25; // x22
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4CF18C6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleRandom_getShuffle_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__);
    sub_1C7BAE8(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__);
    sub_1C7BAE8(&RestockServantLogic___c__DisplayClass22_0_TypeInfo);
    sub_1C7BAE8(&RestockServantLogic___c_TypeInfo);
    byte_4CF18C6 = 1;
  }
  v5 = sub_1C7BD34(RestockServantLogic___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = baseArray;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)baseArray, v8, v9, v10, v11, v12, v13);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0);
  v14 = *(_QWORD *)(v5 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v5 + 16);
  if ( !v14 )
    goto LABEL_17;
  v15 = *(_QWORD *)(v14 + 24);
  if ( !(_DWORD)v15 )
    sub_1C7BD48(IsNullOrEmpty);
  if ( (*(_DWORD *)(v14 + (((v15 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v5 + 16);
  if ( !battleData )
LABEL_17:
    sub_1C7BD40(IsNullOrEmpty, v7);
  v17 = System_Linq_Enumerable__Range(0, battleData->fields._EnemyFieldPosCount_k__BackingField, 0);
  v18 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    0);
  v19 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  v21 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16);
  v22 = v20;
  v23 = RestockServantLogic___c_TypeInfo;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v23 = RestockServantLogic___c_TypeInfo;
  }
  _9__22_1 = v23->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = RestockServantLogic___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__22_1,
      v25,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      0);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = _9__22_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__22_1,
      (int32_t)_9__22_1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = System_Linq_Enumerable__Where_int_(
          v21,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v22,
                                                                       (const MethodInfo_316123C *)Method_BattleRandom_getShuffle_int___);
  v35 = System_Linq_Enumerable__Concat_int_(
          v33,
          Shuffle_int,
          (const MethodInfo_318C06C *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v35,
           (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
}


void RestockServantLogic__OverwriteFieldMemberIndex(
        RestockServantLogic_o *this,
        int32_t overwriteIndex,
        const MethodInfo *method)
{
  this->fields._FieldMemberIndex_k__BackingField = overwriteIndex;
}


void RestockServantLogic__SetActive(RestockServantLogic_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsActive_k__BackingField = value;
}


int32_t RestockServantLogic__get_FieldMemberIndex(RestockServantLogic_o *this, const MethodInfo *method)
{
  return this->fields._FieldMemberIndex_k__BackingField;
}


bool RestockServantLogic__get_IsActive(RestockServantLogic_o *this, const MethodInfo *method)
{
  return this->fields._IsActive_k__BackingField;
}


bool RestockServantLogic__get_IsEnemy(RestockServantLogic_o *this, const MethodInfo *method)
{
  return this->fields._IsEnemy_k__BackingField;
}


int32_t RestockServantLogic__get_SubMemberIndex(RestockServantLogic_o *this, const MethodInfo *method)
{
  return this->fields._SubMemberIndex_k__BackingField;
}


void RestockServantLogic__set_FieldMemberIndex(RestockServantLogic_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._FieldMemberIndex_k__BackingField = value;
}


void RestockServantLogic__set_IsActive(RestockServantLogic_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsActive_k__BackingField = value;
}


void RestockServantLogic__set_IsEnemy(RestockServantLogic_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsEnemy_k__BackingField = value;
}


void RestockServantLogic__set_SubMemberIndex(RestockServantLogic_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SubMemberIndex_k__BackingField = value;
}


void RestockServantLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF18C7 & 1) == 0 )
  {
    sub_1C7BAE8(&RestockServantLogic___c_TypeInfo);
    byte_4CF18C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(RestockServantLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestockServantLogic___c_TypeInfo->static_fields->__9 = (struct RestockServantLogic___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)RestockServantLogic___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RestockServantLogic___c___ctor(RestockServantLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RestockServantLogic___c___DeactiveRestockLogic_b__21_1(
        RestockServantLogic___c_o *this,
        RestockServantLogic_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  x->fields._IsActive_k__BackingField = 0;
}


bool RestockServantLogic___c___GetRandomEntryOrderDecidedArray_b__22_1(
        RestockServantLogic___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  return i >= 0;
}


void RestockServantLogic___c__DisplayClass20_0___ctor(
        RestockServantLogic___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RestockServantLogic___c__DisplayClass20_0___GetImmediateRestockServant_b__0(
        RestockServantLogic___c__DisplayClass20_0_o *this,
        RestockServantLogic_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields._FieldMemberIndex_k__BackingField == this->fields.fieldMemberIndex
      && this->fields.isEnemy == x->fields._IsEnemy_k__BackingField;
}


void RestockServantLogic___c__DisplayClass21_0___ctor(
        RestockServantLogic___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RestockServantLogic___c__DisplayClass21_0___DeactiveRestockLogic_b__0(
        RestockServantLogic___c__DisplayClass21_0_o *this,
        RestockServantLogic_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields._FieldMemberIndex_k__BackingField == this->fields.fieldMemberIndex
      && this->fields.isEnemy == x->fields._IsEnemy_k__BackingField;
}


void RestockServantLogic___c__DisplayClass22_0___ctor(
        RestockServantLogic___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RestockServantLogic___c__DisplayClass22_0___GetRandomEntryOrderDecidedArray_b__0(
        RestockServantLogic___c__DisplayClass22_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_4CF18C8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CF18C8 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
}