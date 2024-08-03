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
    sub_1B64324(this);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_43163112(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_43163112(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  RestockServantLogic_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t SubMemberIndex_k__BackingField; // w20
  Il2CppObject *object; // x2
  __int64 v10; // x1

  v4 = this;
  if ( (byte_49FEF9F & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_BattleServantData___, subMemberArray);
    sub_1B640C8(&Method_BattleRandom_getShuffle_BattleServantData___, v5);
    this = (RestockServantLogic_o *)sub_1B640C8(&Method_System_Linq_Enumerable_Last_BattleServantData___, v6);
    byte_49FEF9F = 1;
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
               (const MethodInfo_2E5EC80 *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_object_(
                                    (System_Object_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    object,
                                    (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_2E2ACD0 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_1B64324(this);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
    sub_1B6432C(this, v10);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  RestockServantLogic___c__DisplayClass21_0_o *v14; // x22
  __int64 v15; // x0
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_object__bool__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  RestockServantLogic___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x19
  System_Action_object__o *_9__21_1; // x20
  Il2CppObject *v26; // x21
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FEFA1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_RestockServantLogic__TypeInfo, isEnemy);
    sub_1B640C8(&Method_BasicHelper_ForEach_RestockServantLogic___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v8);
    sub_1B640C8(&System_Func_RestockServantLogic__bool__TypeInfo, v9);
    sub_1B640C8(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v10);
    sub_1B640C8(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v11);
    sub_1B640C8(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v12);
    sub_1B640C8(&RestockServantLogic___c_TypeInfo, v13);
    byte_49FEFA1 = 1;
  }
  v14 = (RestockServantLogic___c__DisplayClass21_0_o *)sub_1B64314(
                                                         RestockServantLogic___c__DisplayClass21_0_TypeInfo,
                                                         isEnemy,
                                                         battleData);
  RestockServantLogic___c__DisplayClass21_0___ctor(v14, 0LL);
  if ( !v14 || (v14->fields.fieldMemberIndex = fieldMemberIndex, v14->fields.isEnemy = isEnemy, !battleData) )
    sub_1B64324(v15);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v19 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RestockServantLogic__bool__TypeInfo, v17, v18);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v23 = RestockServantLogic___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)v20;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v23 = RestockServantLogic___c_TypeInfo;
  }
  _9__21_1 = (System_Action_object__o *)v23->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = RestockServantLogic___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__21_1 = (System_Action_object__o *)sub_1B64314(System_Action_RestockServantLogic__TypeInfo, v21, v22);
    System_Action_object____ctor(_9__21_1, v26, Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, 0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v28, v29);
  }
  BasicHelper__ForEach_object_(
    v24,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_RestockServantLogic___);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *__fastcall RestockServantLogic__GetImmediateRestockServant(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  RestockServantLogic___c__DisplayClass20_0_o *v11; // x20
  __int64 v12; // x0
  System_Collections_Generic_List_object__o *RestockServantLogicList; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Predicate_object__o *v16; // x22
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  int32_t v21; // w22
  bool v22; // w20

  if ( (byte_49FEFA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy);
    sub_1B640C8(&System_Predicate_RestockServantLogic__TypeInfo, v7);
    sub_1B640C8(&RestockServantLogic_TypeInfo, v8);
    sub_1B640C8(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v9);
    sub_1B640C8(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v10);
    byte_49FEFA0 = 1;
  }
  v11 = (RestockServantLogic___c__DisplayClass20_0_o *)sub_1B64314(
                                                         RestockServantLogic___c__DisplayClass20_0_TypeInfo,
                                                         isEnemy,
                                                         battleData);
  RestockServantLogic___c__DisplayClass20_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.fieldMemberIndex = fieldMemberIndex, v11->fields.isEnemy = isEnemy, !battleData)
    || (RestockServantLogicList = (System_Collections_Generic_List_object__o *)BattleData__GetRestockServantLogicList(
                                                                                 battleData,
                                                                                 0LL),
        v16 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_RestockServantLogic__TypeInfo, v14, v15),
        System_Predicate_object____ctor(
          v16,
          (Il2CppObject *)v11,
          Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
          0LL),
        !RestockServantLogicList) )
  {
    sub_1B64324(v12);
  }
  v17 = System_Collections_Generic_List_object___Find(
          RestockServantLogicList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  if ( v17 )
  {
    v20 = (__int64)v17;
  }
  else
  {
    v21 = v11->fields.fieldMemberIndex;
    v22 = v11->fields.isEnemy;
    v20 = sub_1B64314(RestockServantLogic_TypeInfo, v18, v19);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    *(_BYTE *)(v20 + 24) = v22;
    *(_DWORD *)(v20 + 16) = 0;
    *(_DWORD *)(v20 + 20) = v21;
    *(_BYTE *)(v20 + 25) = 1;
  }
  return (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v20 + 376LL))(
                                  v20,
                                  battleData,
                                  *(_QWORD *)(*(_QWORD *)v20 + 384LL));
}


System_Int32_array *__fastcall RestockServantLogic__GetRandomEntryOrderDecidedArray(
        System_Int32_array *baseArray,
        BattleData_o *battleData,
        const MethodInfo *method)
{
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
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x8
  __int64 v19; // x9
  System_Collections_Generic_IEnumerable_int__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_int__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Int32_array *v30; // x19
  RestockServantLogic___c_c *v31; // x8
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v33; // x22
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_49FEFA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleRandom_getShuffle_int___, battleData);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v8);
    sub_1B640C8(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v9);
    sub_1B640C8(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v10);
    sub_1B640C8(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v11);
    sub_1B640C8(&RestockServantLogic___c_TypeInfo, v12);
    byte_49FEFA2 = 1;
  }
  v13 = sub_1B64314(RestockServantLogic___c__DisplayClass22_0_TypeInfo, battleData, method);
  RestockServantLogic___c__DisplayClass22_0___ctor((RestockServantLogic___c__DisplayClass22_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = baseArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)baseArray, v15, v16);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 16), 0LL);
  v18 = *(_QWORD *)(v13 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v13 + 16);
  if ( !v18 )
    goto LABEL_17;
  v19 = *(_QWORD *)(v18 + 24);
  if ( !(_DWORD)v19 )
    sub_1B6432C(IsNullOrEmpty, v17);
  if ( (*(_DWORD *)(v18 + (((v19 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v13 + 16);
  if ( !battleData )
LABEL_17:
    sub_1B64324(IsNullOrEmpty);
  v21 = System_Linq_Enumerable__Range(0, battleData->fields._EnemyFieldPosCount_k__BackingField, 0LL);
  v24 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v22, v23);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v25,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  v29 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v13 + 16);
  v30 = v26;
  v31 = RestockServantLogic___c_TypeInfo;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v31 = RestockServantLogic___c_TypeInfo;
  }
  _9__22_1 = v31->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = RestockServantLogic___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v27, v28);
    System_Func_int__bool____ctor(
      _9__22_1,
      v33,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = _9__22_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_1, (int32_t)_9__22_1, v35, v36);
  }
  v37 = System_Linq_Enumerable__Where_int_(
          v29,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v30,
                                                                       (const MethodInfo_2E2ABE8 *)Method_BattleRandom_getShuffle_int___);
  v39 = System_Linq_Enumerable__Concat_int_(
          v37,
          Shuffle_int,
          (const MethodInfo_2E52718 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v39,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEFA3 & 1) == 0 )
  {
    sub_1B640C8(&RestockServantLogic___c_TypeInfo, v1);
    byte_49FEFA3 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RestockServantLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RestockServantLogic___c_TypeInfo->static_fields->__9 = (struct RestockServantLogic___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)RestockServantLogic___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  RestockServantLogic__SetActive(x, 0, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FEFA4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&i);
    byte_49FEFA4 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}