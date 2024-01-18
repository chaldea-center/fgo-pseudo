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
    sub_B2C434(this, 0LL);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_31080720(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_31080720(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  RestockServantLogic_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t SubMemberIndex_k__BackingField; // w20
  System_String_o *string; // x0
  __int64 v10; // x0

  v4 = this;
  if ( (byte_418ADE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_BattleServantData___, subMemberArray);
    sub_B2C35C(&Method_BattleRandom_getShuffle_BattleServantData___, v5);
    this = (RestockServantLogic_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Last_BattleServantData___, v6);
    byte_418ADE2 = 1;
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
               (const MethodInfo_1A91D08 *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)string,
                                    (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_172A930 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_B2C434(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
  {
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
  }
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
  __int64 v14; // x1
  __int64 v15; // x1
  RestockServantLogic___c__DisplayClass21_0_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  RestockServantLogic___c_c *v22; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__21_1; // x20
  Il2CppObject *v25; // x21
  struct RestockServantLogic___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_418ADE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_RestockServantLogic___ctor__, isEnemy);
    sub_B2C35C(&System_Action_RestockServantLogic__TypeInfo, v7);
    sub_B2C35C(&Method_BasicHelper_ForEach_RestockServantLogic___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v9);
    sub_B2C35C(&Method_System_Func_RestockServantLogic__bool___ctor__, v10);
    sub_B2C35C(&System_Func_RestockServantLogic__bool__TypeInfo, v11);
    sub_B2C35C(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v12);
    sub_B2C35C(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v13);
    sub_B2C35C(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v14);
    sub_B2C35C(&RestockServantLogic___c_TypeInfo, v15);
    byte_418ADE4 = 1;
  }
  v16 = (RestockServantLogic___c__DisplayClass21_0_o *)sub_B2C42C(RestockServantLogic___c__DisplayClass21_0_TypeInfo);
  RestockServantLogic___c__DisplayClass21_0___ctor(v16, 0LL);
  if ( !v16 || (v16->fields.fieldMemberIndex = fieldMemberIndex, v16->fields.isEnemy = isEnemy, !battleData) )
    sub_B2C434(v17, v18);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestockServantLogic__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v16,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_RestockServantLogic__bool___ctor__);
  v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
                                                         (System_Func_TSource__bool__o *)v20,
                                                         (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v22 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v22 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_RestockServantLogic__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__21_1,
      v25,
      Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_RestockServantLogic___ctor__);
    v26 = RestockServantLogic___c_TypeInfo->static_fields;
    v26->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__21_1,
      (System_Int32_array **)_9__21_1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v21,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_RestockServantLogic___);
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
  __int64 v11; // x1
  RestockServantLogic___c__DisplayClass20_0_o *v12; // x20
  peRenderTexture_ChangeLayerObject_o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x22
  __int64 v17; // x21
  int32_t v18; // w22
  bool v19; // w20

  if ( (byte_418ADE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy);
    sub_B2C35C(&Method_System_Predicate_RestockServantLogic___ctor__, v7);
    sub_B2C35C(&System_Predicate_RestockServantLogic__TypeInfo, v8);
    sub_B2C35C(&RestockServantLogic_TypeInfo, v9);
    sub_B2C35C(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v10);
    sub_B2C35C(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v11);
    byte_418ADE3 = 1;
  }
  v12 = (RestockServantLogic___c__DisplayClass20_0_o *)sub_B2C42C(RestockServantLogic___c__DisplayClass20_0_TypeInfo);
  RestockServantLogic___c__DisplayClass20_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  v12->fields.fieldMemberIndex = fieldMemberIndex;
  v12->fields.isEnemy = isEnemy;
  if ( !battleData )
    goto LABEL_10;
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_RestockServantLogic__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_RestockServantLogic___ctor__);
  if ( !RestockServantLogicList )
    goto LABEL_10;
  v13 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)RestockServantLogicList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  v17 = (__int64)v13;
  if ( !v13 )
  {
    v18 = v12->fields.fieldMemberIndex;
    v19 = v12->fields.isEnemy;
    v17 = sub_B2C42C(RestockServantLogic_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    *(_DWORD *)(v17 + 16) = 0;
    *(_DWORD *)(v17 + 20) = v18;
    *(_BYTE *)(v17 + 24) = v19;
    *(_BYTE *)(v17 + 25) = 1;
  }
  if ( !v17 )
LABEL_10:
    sub_B2C434(v13, v14);
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
  __int64 v13; // x1
  __int64 v14; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_int__bool__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Int32_array *v31; // x19
  RestockServantLogic___c_c *v32; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v35; // x22
  struct RestockServantLogic___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  __int64 v46; // x0

  if ( (byte_418ADE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleRandom_getShuffle_int___, battleData);
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v8);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v9);
    sub_B2C35C(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v10);
    sub_B2C35C(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v11);
    sub_B2C35C(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v12);
    sub_B2C35C(&RestockServantLogic___c_TypeInfo, v13);
    byte_418ADE5 = 1;
  }
  v14 = sub_B2C42C(RestockServantLogic___c__DisplayClass22_0_TypeInfo);
  RestockServantLogic___c__DisplayClass22_0___ctor((RestockServantLogic___c__DisplayClass22_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_QWORD *)(v14 + 16) = baseArray;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)baseArray, v17, v18, v19, v20, v21, v22);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v14 + 16), 0LL);
  v23 = *(_QWORD *)(v14 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v14 + 16);
  if ( !v23 )
    goto LABEL_19;
  v24 = *(_QWORD *)(v23 + 24);
  if ( !(_DWORD)v24 )
  {
    v46 = sub_B2C460(IsNullOrEmpty);
    sub_B2C400(v46, 0LL);
  }
  if ( (*(_DWORD *)(v23 + (((v24 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v14 + 16);
  if ( !battleData )
LABEL_19:
    sub_B2C434(IsNullOrEmpty, v16);
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(
                                                               0,
                                                               battleData->fields._EnemyFieldPosCount_k__BackingField,
                                                               0LL);
  v27 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v27,
    (Il2CppObject *)v14,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  v28 = System_Linq_Enumerable__Where_int_(
          v26,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  v30 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16);
  v31 = v29;
  v32 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v32 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__22_1 = static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__22_1,
      v35,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v36 = RestockServantLogic___c_TypeInfo->static_fields;
    v36->__9__22_1 = _9__22_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v36->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__Where_int_(
          v30,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v31,
                                                                       (const MethodInfo_172A83C *)Method_BattleRandom_getShuffle_int___);
  v45 = System_Linq_Enumerable__Concat_int_(
          v43,
          Shuffle_int,
          (const MethodInfo_17423A4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v45,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  struct RestockServantLogic___c_StaticFields *static_fields; // x0

  if ( (byte_418565F & 1) == 0 )
  {
    sub_B2C35C(&RestockServantLogic___c_TypeInfo, v1);
    byte_418565F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(RestockServantLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = RestockServantLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RestockServantLogic___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestockServantLogic___c__DisplayClass22_0___GetRandomEntryOrderDecidedArray_b__0(
        RestockServantLogic___c__DisplayClass22_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_4185660 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&i);
    byte_4185660 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}