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
    sub_1BCB254(this, 0LL);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_45890120(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_45890120(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  RestockServantLogic_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t SubMemberIndex_k__BackingField; // w20
  Il2CppObject *object; // x2
  __int64 v10; // x2

  v4 = this;
  if ( (byte_4B1F4E2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_IndexValue_BattleServantData___, subMemberArray);
    sub_1BCAFF8(&Method_BattleRandom_getShuffle_BattleServantData___, v5);
    this = (RestockServantLogic_o *)sub_1BCAFF8(&Method_System_Linq_Enumerable_Last_BattleServantData___, v6);
    byte_4B1F4E2 = 1;
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
               (const MethodInfo_30419A0 *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_object_(
                                    (System_Object_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    object,
                                    (const MethodInfo_300911C *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_300BBB4 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_1BCB254(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
    sub_1BCB25C(this, subMemberArray, v10);
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
  __int64 v14; // x22
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
  const MethodInfo *v26; // x3

  if ( (byte_4B1F4E4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_RestockServantLogic__TypeInfo, isEnemy);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_RestockServantLogic___, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v8);
    sub_1BCAFF8(&System_Func_RestockServantLogic__bool__TypeInfo, v9);
    sub_1BCAFF8(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v10);
    sub_1BCAFF8(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v11);
    sub_1BCAFF8(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v12);
    sub_1BCAFF8(&RestockServantLogic___c_TypeInfo, v13);
    byte_4B1F4E4 = 1;
  }
  v14 = sub_1BCB244(RestockServantLogic___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 || (*(_DWORD *)(v14 + 16) = fieldMemberIndex, *(_BYTE *)(v14 + 20) = isEnemy, !battleData) )
    sub_1BCB254(v15, v16);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v18 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_RestockServantLogic__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
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
    _9__21_1 = (System_Action_object__o *)sub_1BCB244(System_Action_RestockServantLogic__TypeInfo);
    System_Action_object____ctor(_9__21_1, v23, Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, 0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v25, v26);
  }
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_RestockServantLogic___);
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
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *RestockServantLogicList; // x21
  System_Predicate_object__o *v15; // x22
  Il2CppObject *v16; // x0
  __int64 v17; // x21
  int v18; // w22
  char v19; // w20

  if ( (byte_4B1F4E3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy);
    sub_1BCAFF8(&System_Predicate_RestockServantLogic__TypeInfo, v7);
    sub_1BCAFF8(&RestockServantLogic_TypeInfo, v8);
    sub_1BCAFF8(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v9);
    sub_1BCAFF8(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v10);
    byte_4B1F4E3 = 1;
  }
  v11 = sub_1BCB244(RestockServantLogic___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = fieldMemberIndex, *(_BYTE *)(v11 + 20) = isEnemy, !battleData)
    || (RestockServantLogicList = (System_Collections_Generic_List_object__o *)BattleData__GetRestockServantLogicList(
                                                                                 battleData,
                                                                                 0LL),
        v15 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_RestockServantLogic__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v11,
          Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
          0LL),
        !RestockServantLogicList) )
  {
    sub_1BCB254(v12, v13);
  }
  v16 = System_Collections_Generic_List_object___Find(
          RestockServantLogicList,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  if ( v16 )
  {
    v17 = (__int64)v16;
  }
  else
  {
    v18 = *(_DWORD *)(v11 + 16);
    v19 = *(_BYTE *)(v11 + 20);
    v17 = sub_1BCB244(RestockServantLogic_TypeInfo);
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
  const MethodInfo *v17; // x3
  __int64 v18; // x2
  __int64 v19; // x8
  __int64 v20; // x9
  System_Collections_Generic_IEnumerable_int__o *v22; // x19
  System_Func_int__bool__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Int32_array *v27; // x19
  RestockServantLogic___c_c *v28; // x8
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v30; // x22
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_4B1F4E5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleRandom_getShuffle_int___, battleData);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v8);
    sub_1BCAFF8(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v9);
    sub_1BCAFF8(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v10);
    sub_1BCAFF8(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v11);
    sub_1BCAFF8(&RestockServantLogic___c_TypeInfo, v12);
    byte_4B1F4E5 = 1;
  }
  v13 = sub_1BCB244(RestockServantLogic___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = baseArray;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)baseArray, v16, v17);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 16), 0LL);
  v19 = *(_QWORD *)(v13 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v13 + 16);
  if ( !v19 )
    goto LABEL_17;
  v20 = *(_QWORD *)(v19 + 24);
  if ( !(_DWORD)v20 )
    sub_1BCB25C(IsNullOrEmpty, v15, v18);
  if ( (*(_DWORD *)(v19 + (((v20 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v13 + 16);
  if ( !battleData )
LABEL_17:
    sub_1BCB254(IsNullOrEmpty, v15);
  v22 = System_Linq_Enumerable__Range(0, battleData->fields._EnemyFieldPosCount_k__BackingField, 0LL);
  v23 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v23,
    (Il2CppObject *)v13,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_305D9B4 *)Method_System_Linq_Enumerable_Where_int___);
  v25 = System_Linq_Enumerable__ToArray_int_(
          v24,
          (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
  v26 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v13 + 16);
  v27 = v25;
  v28 = RestockServantLogic___c_TypeInfo;
  if ( !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v28 = RestockServantLogic___c_TypeInfo;
  }
  _9__22_1 = v28->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = RestockServantLogic___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__22_1,
      v30,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = _9__22_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__22_1, (int32_t)_9__22_1, v32, v33);
  }
  v34 = System_Linq_Enumerable__Where_int_(
          v26,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_305D9B4 *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v27,
                                                                       (const MethodInfo_300BACC *)Method_BattleRandom_getShuffle_int___);
  v36 = System_Linq_Enumerable__Concat_int_(
          v34,
          Shuffle_int,
          (const MethodInfo_30333F4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v36,
           (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  const MethodInfo *v4; // x3

  if ( (byte_4B1F4E6 & 1) == 0 )
  {
    sub_1BCAFF8(&RestockServantLogic___c_TypeInfo, v1);
    byte_4B1F4E6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(RestockServantLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestockServantLogic___c_TypeInfo->static_fields->__9 = (struct RestockServantLogic___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)RestockServantLogic___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
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
  if ( (byte_4B1F4E7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&i);
    byte_4B1F4E7 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
}