void RestockServantLogic___ctor(
        RestockServantLogic_o *this,
        int32_t fieldMemberIndex,
        bool isEnemy,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._IsEnemy_k__BackingField = isEnemy;
  this->fields._SubMemberIndex_k__BackingField = 0;
  this->fields._FieldMemberIndex_k__BackingField = fieldMemberIndex;
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
    sub_21FFECC(this, 0);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0);
  return RestockServantLogic__ChoiceRestockServant_54070368(this, RestockableSubServantArray, v5);
}


BattleServantData_o *RestockServantLogic__ChoiceRestockServant_54070368(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  RestockServantLogic_o *v4; // x20
  int32_t SubMemberIndex_k__BackingField; // w20
  Il2CppObject *object; // x2

  v4 = this;
  if ( (byte_593BA69 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_BattleServantData___);
    sub_21FFC50(&Method_BattleRandom_getShuffle_BattleServantData___);
    this = (RestockServantLogic_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Last_BattleServantData___);
    byte_593BA69 = 1;
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
               (const MethodInfo_3850810 *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_object_(
                                    (System_Object_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    object,
                                    (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_37E43C4 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_21FFECC(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
    sub_21FFED4(this);
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
  __int64 v13; // x1
  RestockServantLogic___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__21_1; // x20
  Il2CppObject *v18; // x21
  struct RestockServantLogic___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_593BA6B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_RestockServantLogic__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_RestockServantLogic___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_RestockServantLogic___);
    sub_21FFC50(&System_Func_RestockServantLogic__bool__TypeInfo);
    sub_21FFC50(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__);
    sub_21FFC50(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__);
    sub_21FFC50(&RestockServantLogic___c__DisplayClass21_0_TypeInfo);
    sub_21FFC50(&RestockServantLogic___c_TypeInfo);
    byte_593BA6B = 1;
  }
  v7 = sub_21FFEBC(RestockServantLogic___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 || (*(_DWORD *)(v7 + 16) = fieldMemberIndex, *(_BYTE *)(v7 + 20) = isEnemy, !battleData) )
    sub_21FFECC(v8, v9);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0);
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RestockServantLogic__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v14 = RestockServantLogic___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)v12;
  if ( !*(&RestockServantLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo, v13);
    v14 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__21_1 = (System_Action_object__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v13);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_RestockServantLogic__TypeInfo);
    System_Action_object____ctor(_9__21_1, v18, Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, 0);
    v19 = RestockServantLogic___c_TypeInfo->static_fields;
    v19->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->__9__21_1, (int32_t)_9__21_1, v20, v21, v22, v23, v24, v25);
  }
  BasicHelper__ForEach_object_(
    v15,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_RestockServantLogic___);
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
  Il2CppObject *v12; // x21
  int v13; // w22
  char v14; // w20

  if ( (byte_593BA6A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_RestockServantLogic__Find__);
    sub_21FFC50(&System_Predicate_RestockServantLogic__TypeInfo);
    sub_21FFC50(&RestockServantLogic_TypeInfo);
    sub_21FFC50(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__);
    sub_21FFC50(&RestockServantLogic___c__DisplayClass20_0_TypeInfo);
    byte_593BA6A = 1;
  }
  v7 = sub_21FFEBC(RestockServantLogic___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = fieldMemberIndex, *(_BYTE *)(v7 + 20) = isEnemy, !battleData)
    || (RestockServantLogicList = (System_Collections_Generic_List_object__o *)BattleData__GetRestockServantLogicList(
                                                                                 battleData,
                                                                                 0),
        v11 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_RestockServantLogic__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
          0),
        !RestockServantLogicList) )
  {
    sub_21FFECC(v8, v9);
  }
  v12 = System_Collections_Generic_List_object___Find(
          RestockServantLogicList,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  if ( !v12 )
  {
    v13 = *(_DWORD *)(v7 + 16);
    v14 = *(_BYTE *)(v7 + 20);
    v12 = (Il2CppObject *)sub_21FFEBC(RestockServantLogic_TypeInfo);
    System_Object___ctor(v12, 0);
    LOBYTE(v12[1].monitor) = v14;
    LODWORD(v12[1].klass) = 0;
    HIDWORD(v12[1].klass) = v13;
    BYTE1(v12[1].monitor) = 1;
  }
  return (BattleServantData_o *)((__int64 (__fastcall *)(Il2CppObject *, BattleData_o *, const MethodInfo *))v12->klass->vtable[4].methodPtr)(
                                  v12,
                                  battleData,
                                  v12->klass->vtable[4].method);
}


System_Int32_array *RestockServantLogic__GetRandomEntryOrderDecidedArray(
        System_Int32_array *baseArray,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Int32_array *result; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  bool IsNullOrEmpty; // w8
  System_Collections_Generic_IEnumerable_int__o *v15; // x19
  System_Func_int__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Int32_array *v19; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  RestockServantLogic___c_c *v21; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v24; // x22
  struct RestockServantLogic___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_593BA6C & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleRandom_getShuffle_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__);
    sub_21FFC50(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__);
    sub_21FFC50(&RestockServantLogic___c__DisplayClass22_0_TypeInfo);
    sub_21FFC50(&RestockServantLogic___c_TypeInfo);
    byte_593BA6C = 1;
  }
  v5 = sub_21FFEBC(RestockServantLogic___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = baseArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)baseArray, v8, v9, v10, v11, v12, v13);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0);
  result = *(System_Int32_array **)(v5 + 16);
  if ( IsNullOrEmpty )
    return result;
  if ( !result )
    goto LABEL_17;
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
  if ( *(int32_t *)((_BYTE *)result->m_Items
                  + ((__int64)(((unsigned __int64)LODWORD(result->max_length) << 32) - 0x100000000LL) >> 30)) < 0 )
  {
    if ( battleData )
    {
      v15 = System_Linq_Enumerable__Range(0, battleData->fields._EnemyFieldPosCount_k__BackingField, 0);
      v16 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v16,
        (Il2CppObject *)v5,
        Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
        0);
      v17 = System_Linq_Enumerable__Where_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v15,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
      v19 = System_Linq_Enumerable__ToArray_int_(
              v17,
              (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
      v20 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16);
      v21 = RestockServantLogic___c_TypeInfo;
      if ( !*(&RestockServantLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo, v18);
        v21 = RestockServantLogic___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__22_1 = static_fields->__9__22_1;
      if ( !_9__22_1 )
      {
        if ( !*(&v21->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v21, v18);
          static_fields = RestockServantLogic___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__22_1 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__22_1,
          v24,
          Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
          0);
        v25 = RestockServantLogic___c_TypeInfo->static_fields;
        v25->__9__22_1 = _9__22_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v25->__9__22_1,
          (int32_t)_9__22_1,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      v32 = System_Linq_Enumerable__Where_int_(
              v20,
              (System_Func_TSource__bool__o *)_9__22_1,
              (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
      Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                           v19,
                                                                           (const MethodInfo_37E42D4 *)Method_BattleRandom_getShuffle_int___);
      v34 = System_Linq_Enumerable__Concat_int_(
              v32,
              Shuffle_int,
              (const MethodInfo_3842AD4 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v34,
               (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_17:
    sub_21FFECC(result, v7);
  }
  return result;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593BA6D & 1) == 0 )
  {
    sub_21FFC50(&RestockServantLogic___c_TypeInfo);
    byte_593BA6D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RestockServantLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestockServantLogic___c_TypeInfo->static_fields->__9 = (struct RestockServantLogic___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RestockServantLogic___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
  if ( (byte_593BA6E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_593BA6E = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}