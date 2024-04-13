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
    sub_B5D69C(this, 0LL);
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_29504016(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_29504016(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  RestockServantLogic_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t SubMemberIndex_k__BackingField; // w20
  System_String_o *string; // x0
  __int64 v15; // x0

  v5 = this;
  if ( (byte_42EAEF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_BattleServantData___, (_DWORD)subMemberArray, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleRandom_getShuffle_BattleServantData___, v6, v7, v8);
    this = (RestockServantLogic_o *)sub_B5D5C4(&Method_System_Linq_Enumerable_Last_BattleServantData___, v9, v10, v11);
    byte_42EAEF1 = 1;
  }
  if ( !subMemberArray )
    goto LABEL_11;
  if ( !*(_QWORD *)&subMemberArray->max_length )
    return 0LL;
  SubMemberIndex_k__BackingField = v5->fields._SubMemberIndex_k__BackingField;
  if ( (SubMemberIndex_k__BackingField & 0x80000000) == 0 )
  {
    string = System_Linq_Enumerable__Last_string_(
               (System_Collections_Generic_IEnumerable_TSource__o *)subMemberArray,
               (const MethodInfo_1CAD41C *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)string,
                                    (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  this = (RestockServantLogic_o *)BattleRandom__getShuffle_object_(
                                    (System_Object_array *)subMemberArray,
                                    (const MethodInfo_1ADAFD8 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !this )
LABEL_11:
    sub_B5D69C(this, subMemberArray);
  if ( !*(_DWORD *)&this->fields._IsEnemy_k__BackingField )
  {
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
  return (BattleServantData_o *)this[1].klass;
}


void __fastcall RestockServantLogic__DeactiveRestockLogic(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char v22; // w1
  int v23; // w2
  __int64 v24; // x3
  char v25; // w1
  int v26; // w2
  __int64 v27; // x3
  char v28; // w1
  int v29; // w2
  __int64 v30; // x3
  char v31; // w1
  int v32; // w2
  __int64 v33; // x3
  RestockServantLogic___c__DisplayClass21_0_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x20
  System_Collections_Generic_IEnumerable_T__o *v39; // x19
  RestockServantLogic___c_c *v40; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__21_1; // x20
  Il2CppObject *v43; // x21
  struct RestockServantLogic___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42EAEF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_RestockServantLogic___ctor__, isEnemy, (_DWORD)battleData, method);
    sub_B5D5C4(&System_Action_RestockServantLogic__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_RestockServantLogic___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_RestockServantLogic__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_RestockServantLogic__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v22, v23, v24);
    sub_B5D5C4(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v25, v26, v27);
    sub_B5D5C4(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&RestockServantLogic___c_TypeInfo, v31, v32, v33);
    byte_42EAEF3 = 1;
  }
  v34 = (RestockServantLogic___c__DisplayClass21_0_o *)sub_B5D694(RestockServantLogic___c__DisplayClass21_0_TypeInfo);
  RestockServantLogic___c__DisplayClass21_0___ctor(v34, 0LL);
  if ( !v34 || (v34->fields.fieldMemberIndex = fieldMemberIndex, v34->fields.isEnemy = isEnemy, !battleData) )
    sub_B5D69C(v35, v36);
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestockServantLogic__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v34,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_RestockServantLogic__bool___ctor__);
  v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
                                                         (System_Func_TSource__bool__o *)v38,
                                                         (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v40 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v40 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_RestockServantLogic__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__21_1,
      v43,
      Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__,
      (const MethodInfo_258B320 *)Method_System_Action_RestockServantLogic___ctor__);
    v44 = RestockServantLogic___c_TypeInfo->static_fields;
    v44->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__21_1,
      (System_Int32_array **)_9__21_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v39,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_RestockServantLogic___);
}


BattleServantData_o *__fastcall RestockServantLogic__GetImmediateRestockServant(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  RestockServantLogic___c__DisplayClass20_0_o *v22; // x20
  peRenderTexture_ChangeLayerObject_o *v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x22
  __int64 v27; // x21
  int32_t v28; // w22
  bool v29; // w20

  if ( (byte_42EAEF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy, (_DWORD)battleData, method);
    sub_B5D5C4(&Method_System_Predicate_RestockServantLogic___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Predicate_RestockServantLogic__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&RestockServantLogic_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v16, v17, v18);
    sub_B5D5C4(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v19, v20, v21);
    byte_42EAEF2 = 1;
  }
  v22 = (RestockServantLogic___c__DisplayClass20_0_o *)sub_B5D694(RestockServantLogic___c__DisplayClass20_0_TypeInfo);
  RestockServantLogic___c__DisplayClass20_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  v22->fields.fieldMemberIndex = fieldMemberIndex;
  v22->fields.isEnemy = isEnemy;
  if ( !battleData )
    goto LABEL_10;
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_RestockServantLogic__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_RestockServantLogic___ctor__);
  if ( !RestockServantLogicList )
    goto LABEL_10;
  v23 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)RestockServantLogicList,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  v27 = (__int64)v23;
  if ( !v23 )
  {
    v28 = v22->fields.fieldMemberIndex;
    v29 = v22->fields.isEnemy;
    v27 = sub_B5D694(RestockServantLogic_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    *(_DWORD *)(v27 + 16) = 0;
    *(_DWORD *)(v27 + 20) = v28;
    *(_BYTE *)(v27 + 24) = v29;
    *(_BYTE *)(v27 + 25) = 1;
  }
  if ( !v27 )
LABEL_10:
    sub_B5D69C(v23, v24);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  __int64 v43; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  System_Func_int__bool__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Int32_array *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  System_Int32_array *v50; // x19
  RestockServantLogic___c_c *v51; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v54; // x22
  struct RestockServantLogic___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  __int64 v65; // x0

  if ( (byte_42EAEF4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleRandom_getShuffle_int___, (_DWORD)battleData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Concat_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v21, v22, v23);
    sub_B5D5C4(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v24, v25, v26);
    sub_B5D5C4(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&RestockServantLogic___c_TypeInfo, v30, v31, v32);
    byte_42EAEF4 = 1;
  }
  v33 = sub_B5D694(RestockServantLogic___c__DisplayClass22_0_TypeInfo);
  RestockServantLogic___c__DisplayClass22_0___ctor((RestockServantLogic___c__DisplayClass22_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_19;
  *(_QWORD *)(v33 + 16) = baseArray;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)baseArray, v36, v37, v38, v39, v40, v41);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v33 + 16), 0LL);
  v42 = *(_QWORD *)(v33 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v33 + 16);
  if ( !v42 )
    goto LABEL_19;
  v43 = *(_QWORD *)(v42 + 24);
  if ( !(_DWORD)v43 )
  {
    v65 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v65, 0LL);
  }
  if ( (*(_DWORD *)(v42 + (((v43 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v33 + 16);
  if ( !battleData )
LABEL_19:
    sub_B5D69C(IsNullOrEmpty, v35);
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(
                                                               0,
                                                               battleData->fields._EnemyFieldPosCount_k__BackingField,
                                                               0LL);
  v46 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v46,
    (Il2CppObject *)v33,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v47 = System_Linq_Enumerable__Where_int_(
          v45,
          (System_Func_TSource__bool__o *)v46,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  v48 = System_Linq_Enumerable__ToArray_int_(
          v47,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v49 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v33 + 16);
  v50 = v48;
  v51 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v51 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v51->static_fields;
  _9__22_1 = static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__22_1,
      v54,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v55 = RestockServantLogic___c_TypeInfo->static_fields;
    v55->__9__22_1 = _9__22_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  v62 = System_Linq_Enumerable__Where_int_(
          v49,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v50,
                                                                       (const MethodInfo_1ADAEE4 *)Method_BattleRandom_getShuffle_int___);
  v64 = System_Linq_Enumerable__Concat_int_(
          v62,
          Shuffle_int,
          (const MethodInfo_1CA4918 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v64,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F54 & 1) == 0 )
  {
    sub_B5D5C4(&RestockServantLogic___c_TypeInfo, v1, v2, v3);
    byte_42E7F54 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(RestockServantLogic___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestockServantLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3

  if ( (byte_42E7F55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, i, (_DWORD)method, v3);
    byte_42E7F55 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}