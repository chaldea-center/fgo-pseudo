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
    sub_1B7641C(this, 0LL);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_43331036(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_43331036(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  RestockServantLogic_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t SubMemberIndex_k__BackingField; // w20
  Il2CppObject *object; // x2

  v4 = this;
  if ( (byte_4A30B17 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_IndexValue_BattleServantData___, subMemberArray);
    sub_1B761C0(&Method_BattleRandom_getShuffle_BattleServantData___, v5);
    this = (RestockServantLogic_o *)sub_1B761C0(&Method_System_Linq_Enumerable_Last_BattleServantData___, v6);
    byte_4A30B17 = 1;
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
               (const MethodInfo_2E884EC *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_object_(
                                    (System_Object_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    object,
                                    (const MethodInfo_2E51254 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_2E53CEC *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_1B7641C(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
    sub_1B76424(this, subMemberArray);
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
  __int64 v16; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  RestockServantLogic___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  System_Action_object__o *_9__21_1; // x20
  Il2CppObject *v23; // x21
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A30B19 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_RestockServantLogic__TypeInfo, isEnemy);
    sub_1B761C0(&Method_BasicHelper_ForEach_RestockServantLogic___, v7);
    sub_1B761C0(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v8);
    sub_1B761C0(&System_Func_RestockServantLogic__bool__TypeInfo, v9);
    sub_1B761C0(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v10);
    sub_1B761C0(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v11);
    sub_1B761C0(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v12);
    sub_1B761C0(&RestockServantLogic___c_TypeInfo, v13);
    byte_4A30B19 = 1;
  }
  v14 = (RestockServantLogic___c__DisplayClass21_0_o *)sub_1B7640C(RestockServantLogic___c__DisplayClass21_0_TypeInfo);
  RestockServantLogic___c__DisplayClass21_0___ctor(v14, 0LL);
  if ( !v14 || (v14->fields.fieldMemberIndex = fieldMemberIndex, v14->fields.isEnemy = isEnemy, !battleData) )
    sub_1B7641C(v15, v16);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v18 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_RestockServantLogic__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2EA0B7C *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v20 = RestockServantLogic___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v19;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v20 = RestockServantLogic___c_TypeInfo;
  }
  _9__21_1 = (System_Action_object__o *)v20->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = RestockServantLogic___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__21_1 = (System_Action_object__o *)sub_1B7640C(System_Action_RestockServantLogic__TypeInfo);
    System_Action_object____ctor(_9__21_1, v23, Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, 0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v25, v26);
  }
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_2E4F7C0 *)Method_BasicHelper_ForEach_RestockServantLogic___);
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
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *RestockServantLogicList; // x21
  System_Predicate_object__o *v15; // x22
  Il2CppObject *v16; // x0
  __int64 v17; // x21
  int32_t v18; // w22
  bool v19; // w20

  if ( (byte_4A30B18 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy);
    sub_1B761C0(&System_Predicate_RestockServantLogic__TypeInfo, v7);
    sub_1B761C0(&RestockServantLogic_TypeInfo, v8);
    sub_1B761C0(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v9);
    sub_1B761C0(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v10);
    byte_4A30B18 = 1;
  }
  v11 = (RestockServantLogic___c__DisplayClass20_0_o *)sub_1B7640C(RestockServantLogic___c__DisplayClass20_0_TypeInfo);
  RestockServantLogic___c__DisplayClass20_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.fieldMemberIndex = fieldMemberIndex, v11->fields.isEnemy = isEnemy, !battleData)
    || (RestockServantLogicList = (System_Collections_Generic_List_object__o *)BattleData__GetRestockServantLogicList(
                                                                                 battleData,
                                                                                 0LL),
        v15 = (System_Predicate_object__o *)sub_1B7640C(System_Predicate_RestockServantLogic__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v11,
          Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
          0LL),
        !RestockServantLogicList) )
  {
    sub_1B7641C(v12, v13);
  }
  v16 = System_Collections_Generic_List_object___Find(
          RestockServantLogicList,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_34D7C3C *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  if ( v16 )
  {
    v17 = (__int64)v16;
  }
  else
  {
    v18 = v11->fields.fieldMemberIndex;
    v19 = v11->fields.isEnemy;
    v17 = sub_1B7640C(RestockServantLogic_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    *(_BYTE *)(v17 + 24) = v19;
    *(_DWORD *)(v17 + 16) = 0;
    *(_DWORD *)(v17 + 20) = v18;
    *(_BYTE *)(v17 + 25) = 1;
  }
  return (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v17 + 376LL))(
                                  v17,
                                  battleData,
                                  *(_QWORD *)(*(_QWORD *)v17 + 384LL));
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
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  __int64 v19; // x9
  System_Collections_Generic_IEnumerable_int__o *v21; // x19
  System_Func_int__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Int32_array *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Int32_array *v26; // x19
  RestockServantLogic___c_c *v27; // x8
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v29; // x22
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4A30B1A & 1) == 0 )
  {
    sub_1B761C0(&Method_BattleRandom_getShuffle_int___, battleData);
    sub_1B761C0(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B761C0(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1B761C0(&System_Func_int__bool__TypeInfo, v8);
    sub_1B761C0(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v9);
    sub_1B761C0(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v10);
    sub_1B761C0(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v11);
    sub_1B761C0(&RestockServantLogic___c_TypeInfo, v12);
    byte_4A30B1A = 1;
  }
  v13 = sub_1B7640C(RestockServantLogic___c__DisplayClass22_0_TypeInfo);
  RestockServantLogic___c__DisplayClass22_0___ctor((RestockServantLogic___c__DisplayClass22_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = baseArray;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)baseArray, v16, v17);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 16), 0LL);
  v18 = *(_QWORD *)(v13 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v13 + 16);
  if ( !v18 )
    goto LABEL_17;
  v19 = *(_QWORD *)(v18 + 24);
  if ( !(_DWORD)v19 )
    sub_1B76424(IsNullOrEmpty, v15);
  if ( (*(_DWORD *)(v18 + (((v19 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v13 + 16);
  if ( !battleData )
LABEL_17:
    sub_1B7641C(IsNullOrEmpty, v15);
  v21 = System_Linq_Enumerable__Range(0, battleData->fields._EnemyFieldPosCount_k__BackingField, 0LL);
  v22 = (System_Func_int__bool__o *)sub_1B7640C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)v13,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2EA08A8 *)Method_System_Linq_Enumerable_Where_int___);
  v24 = System_Linq_Enumerable__ToArray_int_(
          v23,
          (const MethodInfo_2E9AD0C *)Method_System_Linq_Enumerable_ToArray_int___);
  v25 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v13 + 16);
  v26 = v24;
  v27 = RestockServantLogic___c_TypeInfo;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v27 = RestockServantLogic___c_TypeInfo;
  }
  _9__22_1 = v27->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = RestockServantLogic___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_1B7640C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__22_1,
      v29,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = _9__22_1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_1, (int32_t)_9__22_1, v31, v32);
  }
  v33 = System_Linq_Enumerable__Where_int_(
          v25,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_2EA08A8 *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v26,
                                                                       (const MethodInfo_2E53C04 *)Method_BattleRandom_getShuffle_int___);
  v35 = System_Linq_Enumerable__Concat_int_(
          v33,
          Shuffle_int,
          (const MethodInfo_2E7BF84 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v35,
           (const MethodInfo_2E9AD0C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A30B1B & 1) == 0 )
  {
    sub_1B761C0(&RestockServantLogic___c_TypeInfo, v1);
    byte_4A30B1B = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(RestockServantLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestockServantLogic___c_TypeInfo->static_fields->__9 = (struct RestockServantLogic___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)RestockServantLogic___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, 0LL);
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
  if ( (byte_4A30B1C & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&i);
    byte_4A30B1C = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_2E7C514 *)Method_System_Linq_Enumerable_Contains_int___);
}