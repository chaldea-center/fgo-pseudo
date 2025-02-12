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
    sub_1C13F80(this, 0LL);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_44764564(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_44764564(
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
  if ( (byte_4BB7401 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_BattleServantData___, subMemberArray);
    sub_1C13D24(&Method_BattleRandom_getShuffle_BattleServantData___, v5);
    this = (RestockServantLogic_o *)sub_1C13D24(&Method_System_Linq_Enumerable_Last_BattleServantData___, v6);
    byte_4BB7401 = 1;
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
               (const MethodInfo_2FB3FEC *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_object_(
                                    (System_Object_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    object,
                                    (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_2F80ACC *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_1C13F80(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
    sub_1C13F88(this, subMemberArray);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BB7403 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_RestockServantLogic__TypeInfo, isEnemy);
    sub_1C13D24(&Method_BasicHelper_ForEach_RestockServantLogic___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v8);
    sub_1C13D24(&System_Func_RestockServantLogic__bool__TypeInfo, v9);
    sub_1C13D24(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v10);
    sub_1C13D24(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v11);
    sub_1C13D24(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v12);
    sub_1C13D24(&RestockServantLogic___c_TypeInfo, v13);
    byte_4BB7403 = 1;
  }
  v14 = sub_1C13F70(RestockServantLogic___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 || (*(_DWORD *)(v14 + 16) = fieldMemberIndex, *(_BYTE *)(v14 + 20) = isEnemy, !battleData) )
    sub_1C13F80(v15, v16);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v18 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RestockServantLogic__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
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
    _9__21_1 = (System_Action_object__o *)sub_1C13F70(System_Action_RestockServantLogic__TypeInfo);
    System_Action_object____ctor(_9__21_1, v23, Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, 0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
      (int64_t)_9__21_1,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_RestockServantLogic___);
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

  if ( (byte_4BB7402 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy);
    sub_1C13D24(&System_Predicate_RestockServantLogic__TypeInfo, v7);
    sub_1C13D24(&RestockServantLogic_TypeInfo, v8);
    sub_1C13D24(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v9);
    sub_1C13D24(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v10);
    byte_4BB7402 = 1;
  }
  v11 = sub_1C13F70(RestockServantLogic___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = fieldMemberIndex, *(_BYTE *)(v11 + 20) = isEnemy, !battleData)
    || (RestockServantLogicList = (System_Collections_Generic_List_object__o *)BattleData__GetRestockServantLogicList(
                                                                                 battleData,
                                                                                 0LL),
        v15 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_RestockServantLogic__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v11,
          Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
          0LL),
        !RestockServantLogicList) )
  {
    sub_1C13F80(v12, v13);
  }
  v16 = System_Collections_Generic_List_object___Find(
          RestockServantLogicList,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  if ( v16 )
  {
    v17 = (__int64)v16;
  }
  else
  {
    v18 = *(_DWORD *)(v11 + 16);
    v19 = *(_BYTE *)(v11 + 20);
    v17 = sub_1C13F70(RestockServantLogic_TypeInfo);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x8
  __int64 v23; // x9
  System_Collections_Generic_IEnumerable_int__o *v25; // x19
  System_Func_int__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int32_array *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Int32_array *v30; // x19
  RestockServantLogic___c_c *v31; // x8
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v33; // x22
  struct RestockServantLogic___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_4BB7404 & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleRandom_getShuffle_int___, battleData);
    sub_1C13D24(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v8);
    sub_1C13D24(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v9);
    sub_1C13D24(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v10);
    sub_1C13D24(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v11);
    sub_1C13D24(&RestockServantLogic___c_TypeInfo, v12);
    byte_4BB7404 = 1;
  }
  v13 = sub_1C13F70(RestockServantLogic___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = baseArray;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)baseArray, v16, v17, v18, v19, v20, v21);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 16), 0LL);
  v22 = *(_QWORD *)(v13 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v13 + 16);
  if ( !v22 )
    goto LABEL_17;
  v23 = *(_QWORD *)(v22 + 24);
  if ( !(_DWORD)v23 )
    sub_1C13F88(IsNullOrEmpty, v15);
  if ( (*(_DWORD *)(v22 + (((v23 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v13 + 16);
  if ( !battleData )
LABEL_17:
    sub_1C13F80(IsNullOrEmpty, v15);
  v25 = System_Linq_Enumerable__Range(0, battleData->fields._EnemyFieldPosCount_k__BackingField, 0LL);
  v26 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v25,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2FCE8EC *)Method_System_Linq_Enumerable_Where_int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v27,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  v29 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v13 + 16);
  v30 = v28;
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
    _9__22_1 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__22_1,
      v33,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      0LL);
    static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = _9__22_1;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_1,
      (int64_t)_9__22_1,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = System_Linq_Enumerable__Where_int_(
          v29,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_2FCE8EC *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v30,
                                                                       (const MethodInfo_2F809E4 *)Method_BattleRandom_getShuffle_int___);
  v43 = System_Linq_Enumerable__Concat_int_(
          v41,
          Shuffle_int,
          (const MethodInfo_2FA6DC0 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v43,
           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB7405 & 1) == 0 )
  {
    sub_1C13D24(&RestockServantLogic___c_TypeInfo, v1);
    byte_4BB7405 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(RestockServantLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestockServantLogic___c_TypeInfo->static_fields->__9 = (struct RestockServantLogic___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)RestockServantLogic___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
  if ( (byte_4BB7406 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&i);
    byte_4BB7406 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
}