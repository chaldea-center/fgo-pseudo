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
    sub_B0D97C(this);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_30464596(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_30464596(
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
  if ( (byte_4217C1E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_BattleServantData___, subMemberArray);
    sub_B0D8A4(&Method_BattleRandom_getShuffle_BattleServantData___, v5);
    this = (RestockServantLogic_o *)sub_B0D8A4(&Method_System_Linq_Enumerable_Last_BattleServantData___, v6);
    byte_4217C1E = 1;
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
               (const MethodInfo_1B4CFD4 *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)string,
                                    (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_170B3DC *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_B0D97C(this);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
  {
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
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
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_IEnumerable_T__o *v24; // x19
  RestockServantLogic___c_c *v25; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__21_1; // x20
  Il2CppObject *v28; // x21
  struct RestockServantLogic___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4217C20 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_RestockServantLogic___ctor__, isEnemy);
    sub_B0D8A4(&System_Action_RestockServantLogic__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_RestockServantLogic___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v9);
    sub_B0D8A4(&Method_System_Func_RestockServantLogic__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_RestockServantLogic__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v12);
    sub_B0D8A4(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v13);
    sub_B0D8A4(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v14);
    sub_B0D8A4(&RestockServantLogic___c_TypeInfo, v15);
    byte_4217C20 = 1;
  }
  v16 = (RestockServantLogic___c__DisplayClass21_0_o *)sub_B0D974(
                                                         RestockServantLogic___c__DisplayClass21_0_TypeInfo,
                                                         isEnemy,
                                                         battleData);
  RestockServantLogic___c__DisplayClass21_0___ctor(v16, 0LL);
  if ( !v16 || (v16->fields.fieldMemberIndex = fieldMemberIndex, v16->fields.isEnemy = isEnemy, !battleData) )
    sub_B0D97C(v17);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_RestockServantLogic__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v16,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_RestockServantLogic__bool___ctor__);
  v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
                                                         (System_Func_TSource__bool__o *)v21,
                                                         (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v25 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v25 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_RestockServantLogic__TypeInfo,
                                                                                      v22,
                                                                                      v23);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__21_1,
      v28,
      Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_RestockServantLogic___ctor__);
    v29 = RestockServantLogic___c_TypeInfo->static_fields;
    v29->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->__9__21_1,
      (System_Int32_array **)_9__21_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v24,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_RestockServantLogic___);
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
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  int32_t v21; // w22
  bool v22; // w20

  if ( (byte_4217C1F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy);
    sub_B0D8A4(&Method_System_Predicate_RestockServantLogic___ctor__, v7);
    sub_B0D8A4(&System_Predicate_RestockServantLogic__TypeInfo, v8);
    sub_B0D8A4(&RestockServantLogic_TypeInfo, v9);
    sub_B0D8A4(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v10);
    sub_B0D8A4(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v11);
    byte_4217C1F = 1;
  }
  v12 = (RestockServantLogic___c__DisplayClass20_0_o *)sub_B0D974(
                                                         RestockServantLogic___c__DisplayClass20_0_TypeInfo,
                                                         isEnemy,
                                                         battleData);
  RestockServantLogic___c__DisplayClass20_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  v12->fields.fieldMemberIndex = fieldMemberIndex;
  v12->fields.isEnemy = isEnemy;
  if ( !battleData )
    goto LABEL_10;
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_RestockServantLogic__TypeInfo,
                                                                   v15,
                                                                   v16);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_RestockServantLogic___ctor__);
  if ( !RestockServantLogicList )
    goto LABEL_10;
  v13 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)RestockServantLogicList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  v20 = (__int64)v13;
  if ( !v13 )
  {
    v21 = v12->fields.fieldMemberIndex;
    v22 = v12->fields.isEnemy;
    v20 = sub_B0D974(RestockServantLogic_TypeInfo, v18, v19);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    *(_DWORD *)(v20 + 16) = 0;
    *(_DWORD *)(v20 + 20) = v21;
    *(_BYTE *)(v20 + 24) = v22;
    *(_BYTE *)(v20 + 25) = 1;
  }
  if ( !v20 )
LABEL_10:
    sub_B0D97C(v13);
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
  __int64 v13; // x1
  __int64 v14; // x20
  _BOOL8 IsNullOrEmpty; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x8
  __int64 v23; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  System_Func_int__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Int32_array *v34; // x19
  RestockServantLogic___c_c *v35; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v38; // x22
  struct RestockServantLogic___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  __int64 v49; // x0

  if ( (byte_4217C21 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleRandom_getShuffle_int___, battleData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v10);
    sub_B0D8A4(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v11);
    sub_B0D8A4(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v12);
    sub_B0D8A4(&RestockServantLogic___c_TypeInfo, v13);
    byte_4217C21 = 1;
  }
  v14 = sub_B0D974(RestockServantLogic___c__DisplayClass22_0_TypeInfo, battleData, method);
  RestockServantLogic___c__DisplayClass22_0___ctor((RestockServantLogic___c__DisplayClass22_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_QWORD *)(v14 + 16) = baseArray;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)baseArray, v16, v17, v18, v19, v20, v21);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v14 + 16), 0LL);
  v22 = *(_QWORD *)(v14 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v14 + 16);
  if ( !v22 )
    goto LABEL_19;
  v23 = *(_QWORD *)(v22 + 24);
  if ( !(_DWORD)v23 )
  {
    v49 = sub_B0D9A8(IsNullOrEmpty);
    sub_B0D948(v49, 0LL);
  }
  if ( (*(_DWORD *)(v22 + (((v23 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v14 + 16);
  if ( !battleData )
LABEL_19:
    sub_B0D97C(IsNullOrEmpty);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(
                                                               0,
                                                               battleData->fields._EnemyFieldPosCount_k__BackingField,
                                                               0LL);
  v28 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v26, v27);
  System_Func_int__bool____ctor(
    v28,
    (Il2CppObject *)v14,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_int_(
          v25,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  v30 = System_Linq_Enumerable__ToArray_int_(
          v29,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v33 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16);
  v34 = v30;
  v35 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v35 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__22_1 = static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v31, v32);
    System_Func_int__bool____ctor(
      _9__22_1,
      v38,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v39 = RestockServantLogic___c_TypeInfo->static_fields;
    v39->__9__22_1 = _9__22_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v39->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  v46 = System_Linq_Enumerable__Where_int_(
          v33,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v34,
                                                                       (const MethodInfo_170B2E8 *)Method_BattleRandom_getShuffle_int___);
  v48 = System_Linq_Enumerable__Concat_int_(
          v46,
          Shuffle_int,
          (const MethodInfo_1B44D70 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v48,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  struct RestockServantLogic___c_StaticFields *static_fields; // x0

  if ( (byte_4212530 & 1) == 0 )
  {
    sub_B0D8A4(&RestockServantLogic___c_TypeInfo, v1);
    byte_4212530 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(RestockServantLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = RestockServantLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RestockServantLogic___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_4212531 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&i);
    byte_4212531 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}