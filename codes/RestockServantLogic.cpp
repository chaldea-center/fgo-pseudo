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
    sub_B52A5C(this, 0LL);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_29728320(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_29728320(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  RestockServantLogic_o *v4; // x20
  int32_t SubMemberIndex_k__BackingField; // w20
  System_String_o *string; // x0
  __int64 v8; // x0

  v4 = this;
  if ( (byte_42B28A1 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_BattleServantData___);
    sub_B52984(&Method_BattleRandom_getShuffle_BattleServantData___);
    this = (RestockServantLogic_o *)sub_B52984(&Method_System_Linq_Enumerable_Last_BattleServantData___);
    byte_42B28A1 = 1;
  }
  if ( !subMemberArray )
    goto LABEL_11;
  if ( !*(_QWORD *)&subMemberArray->max_length )
    return 0LL;
  SubMemberIndex_k__BackingField = v4->fields._SubMemberIndex_k__BackingField;
  if ( (SubMemberIndex_k__BackingField & 0x80000000) == 0 )
  {
    string = System_Linq_Enumerable__Last_string_(
               (System_Collections_Generic_IEnumerable_TSource__o *)subMemberArray,
               (const MethodInfo_1B64544 *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)string,
                                    (const MethodInfo_1A43FCC *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_1A45F10 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_B52A5C(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
  {
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
  }
  return (BattleServantData_o *)this[1].klass;
}


void __fastcall RestockServantLogic__DeactiveRestockLogic(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  RestockServantLogic___c__DisplayClass21_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  RestockServantLogic___c_c *v13; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__21_1; // x20
  Il2CppObject *v16; // x21
  struct RestockServantLogic___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B28A3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_RestockServantLogic___ctor__);
    sub_B52984(&System_Action_RestockServantLogic__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_RestockServantLogic___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_RestockServantLogic___);
    sub_B52984(&Method_System_Func_RestockServantLogic__bool___ctor__);
    sub_B52984(&System_Func_RestockServantLogic__bool__TypeInfo);
    sub_B52984(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__);
    sub_B52984(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__);
    sub_B52984(&RestockServantLogic___c__DisplayClass21_0_TypeInfo);
    sub_B52984(&RestockServantLogic___c_TypeInfo);
    byte_42B28A3 = 1;
  }
  v7 = (RestockServantLogic___c__DisplayClass21_0_o *)sub_B52A54(RestockServantLogic___c__DisplayClass21_0_TypeInfo);
  RestockServantLogic___c__DisplayClass21_0___ctor(v7, 0LL);
  if ( !v7 || (v7->fields.fieldMemberIndex = fieldMemberIndex, v7->fields.isEnemy = isEnemy, !battleData) )
    sub_B52A5C(v8, v9);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestockServantLogic__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_RestockServantLogic__bool___ctor__);
  v12 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
                                                         (System_Func_TSource__bool__o *)v11,
                                                         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v13 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v13 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_RestockServantLogic__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__21_1,
      v16,
      Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__,
      (const MethodInfo_2627780 *)Method_System_Action_RestockServantLogic___ctor__);
    v17 = RestockServantLogic___c_TypeInfo->static_fields;
    v17->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v17->__9__21_1,
      (System_Int32_array **)_9__21_1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v12,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_RestockServantLogic___);
}


BattleServantData_o *__fastcall RestockServantLogic__GetImmediateRestockServant(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  RestockServantLogic___c__DisplayClass20_0_o *v7; // x20
  peRenderTexture_ChangeLayerObject_o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x22
  __int64 v12; // x21
  int32_t v13; // w22
  bool v14; // w20

  if ( (byte_42B28A2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_RestockServantLogic__Find__);
    sub_B52984(&Method_System_Predicate_RestockServantLogic___ctor__);
    sub_B52984(&System_Predicate_RestockServantLogic__TypeInfo);
    sub_B52984(&RestockServantLogic_TypeInfo);
    sub_B52984(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__);
    sub_B52984(&RestockServantLogic___c__DisplayClass20_0_TypeInfo);
    byte_42B28A2 = 1;
  }
  v7 = (RestockServantLogic___c__DisplayClass20_0_o *)sub_B52A54(RestockServantLogic___c__DisplayClass20_0_TypeInfo);
  RestockServantLogic___c__DisplayClass20_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.fieldMemberIndex = fieldMemberIndex;
  v7->fields.isEnemy = isEnemy;
  if ( !battleData )
    goto LABEL_10;
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_RestockServantLogic__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_RestockServantLogic___ctor__);
  if ( !RestockServantLogicList )
    goto LABEL_10;
  v8 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)RestockServantLogicList,
         (System_Predicate_T__o *)v11,
         (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  v12 = (__int64)v8;
  if ( !v8 )
  {
    v13 = v7->fields.fieldMemberIndex;
    v14 = v7->fields.isEnemy;
    v12 = sub_B52A54(RestockServantLogic_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    *(_DWORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 20) = v13;
    *(_BYTE *)(v12 + 24) = v14;
    *(_BYTE *)(v12 + 25) = 1;
  }
  if ( !v12 )
LABEL_10:
    sub_B52A5C(v8, v9);
  return (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v12 + 376LL))(
                                  v12,
                                  battleData,
                                  *(_QWORD *)(*(_QWORD *)v12 + 384LL));
}


System_Int32_array *__fastcall RestockServantLogic__GetRandomEntryOrderDecidedArray(
        System_Int32_array *baseArray,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x8
  __int64 v15; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_int__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Int32_array *v22; // x19
  RestockServantLogic___c_c *v23; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v26; // x22
  struct RestockServantLogic___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x0

  if ( (byte_42B28A4 & 1) == 0 )
  {
    sub_B52984(&Method_BattleRandom_getShuffle_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Concat_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__);
    sub_B52984(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__);
    sub_B52984(&RestockServantLogic___c__DisplayClass22_0_TypeInfo);
    sub_B52984(&RestockServantLogic___c_TypeInfo);
    byte_42B28A4 = 1;
  }
  v5 = sub_B52A54(RestockServantLogic___c__DisplayClass22_0_TypeInfo);
  RestockServantLogic___c__DisplayClass22_0___ctor((RestockServantLogic___c__DisplayClass22_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = baseArray;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)baseArray, v8, v9, v10, v11, v12, v13);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0LL);
  v14 = *(_QWORD *)(v5 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v5 + 16);
  if ( !v14 )
    goto LABEL_19;
  v15 = *(_QWORD *)(v14 + 24);
  if ( !(_DWORD)v15 )
  {
    v37 = sub_B52A88(IsNullOrEmpty);
    sub_B52A28(v37, 0LL);
  }
  if ( (*(_DWORD *)(v14 + (((v15 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v5 + 16);
  if ( !battleData )
LABEL_19:
    sub_B52A5C(IsNullOrEmpty, v7);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(
                                                               0,
                                                               battleData->fields._EnemyFieldPosCount_k__BackingField,
                                                               0LL);
  v18 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  v19 = System_Linq_Enumerable__Where_int_(
          v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1B72A2C *)Method_System_Linq_Enumerable_Where_int___);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  v21 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16);
  v22 = v20;
  v23 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v23 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__22_1 = static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__22_1,
      v26,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    v27 = RestockServantLogic___c_TypeInfo->static_fields;
    v27->__9__22_1 = _9__22_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v27->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = System_Linq_Enumerable__Where_int_(
          v21,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_1B72A2C *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v22,
                                                                       (const MethodInfo_1A45E1C *)Method_BattleRandom_getShuffle_int___);
  v36 = System_Linq_Enumerable__Concat_int_(
          v34,
          Shuffle_int,
          (const MethodInfo_1B5BA40 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v36,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF2B0 & 1) == 0 )
  {
    sub_B52984(&RestockServantLogic___c_TypeInfo);
    byte_42AF2B0 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(RestockServantLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestockServantLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  if ( x->fields._FieldMemberIndex_k__BackingField == this->fields.fieldMemberIndex )
    return !x->fields._IsEnemy_k__BackingField ^ this->fields.isEnemy;
  else
    return 0;
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
    sub_B52A5C(this, 0LL);
  if ( x->fields._FieldMemberIndex_k__BackingField == this->fields.fieldMemberIndex )
    return !x->fields._IsEnemy_k__BackingField ^ this->fields.isEnemy;
  else
    return 0;
}


void __fastcall RestockServantLogic___c__DisplayClass22_0___ctor(
        RestockServantLogic___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RestockServantLogic___c__DisplayClass22_0___GetRandomEntryOrderDecidedArray_b__0(
        RestockServantLogic___c__DisplayClass22_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_42AF2B1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42AF2B1 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
}