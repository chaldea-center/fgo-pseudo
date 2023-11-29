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
    sub_B170D4();
  RestockableSubServantArray = BattleData__GetRestockableSubServantArray(
                                 battleData,
                                 this->fields._IsEnemy_k__BackingField,
                                 this->fields._FieldMemberIndex_k__BackingField,
                                 0LL);
  return RestockServantLogic__ChoiceRestockServant_30985956(this, RestockableSubServantArray, v5);
}


BattleServantData_o *__fastcall RestockServantLogic__ChoiceRestockServant_30985956(
        RestockServantLogic_o *this,
        BattleServantData_array *subMemberArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t SubMemberIndex_k__BackingField; // w20
  System_String_o *string; // x0
  System_Object_array *Shuffle_object; // x0
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_40FD384 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleServantData___, subMemberArray);
    sub_B16FFC(&Method_BattleRandom_getShuffle_BattleServantData___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Last_BattleServantData___, v6);
    byte_40FD384 = 1;
  }
  if ( !subMemberArray )
    goto LABEL_11;
  if ( !*(_QWORD *)&subMemberArray->max_length )
    return 0LL;
  SubMemberIndex_k__BackingField = this->fields._SubMemberIndex_k__BackingField;
  if ( (SubMemberIndex_k__BackingField & 0x80000000) == 0 )
  {
    string = System_Linq_Enumerable__Last_string_(
               (System_Collections_Generic_IEnumerable_TSource__o *)subMemberArray,
               (const MethodInfo_18D901C *)Method_System_Linq_Enumerable_Last_BattleServantData___);
    return (BattleServantData_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)subMemberArray,
                                    SubMemberIndex_k__BackingField,
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)string,
                                    (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_BattleServantData___);
  }
  Shuffle_object = BattleRandom__getShuffle_object_(
                     (System_Object_array *)subMemberArray,
                     (const MethodInfo_18BA1C8 *)Method_BattleRandom_getShuffle_BattleServantData___);
  if ( !Shuffle_object )
LABEL_11:
    sub_B170D4();
  if ( !Shuffle_object->max_length )
  {
    sub_B17100(Shuffle_object, v11, v12);
    sub_B170A0();
  }
  return (BattleServantData_o *)Shuffle_object->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestockServantLogic__DeactiveRestockLogic(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  RestockServantLogic___c__DisplayClass21_0_o *v17; // x22
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_IEnumerable_T__o *v28; // x19
  RestockServantLogic___c_c *v29; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__21_1; // x20
  Il2CppObject *v32; // x21
  struct RestockServantLogic___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FD386 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_RestockServantLogic___ctor__, isEnemy);
    sub_B16FFC(&System_Action_RestockServantLogic__TypeInfo, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_RestockServantLogic___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_RestockServantLogic___, v10);
    sub_B16FFC(&Method_System_Func_RestockServantLogic__bool___ctor__, v11);
    sub_B16FFC(&System_Func_RestockServantLogic__bool__TypeInfo, v12);
    sub_B16FFC(&Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__, v13);
    sub_B16FFC(&Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__, v14);
    sub_B16FFC(&RestockServantLogic___c__DisplayClass21_0_TypeInfo, v15);
    sub_B16FFC(&RestockServantLogic___c_TypeInfo, v16);
    byte_40FD386 = 1;
  }
  v17 = (RestockServantLogic___c__DisplayClass21_0_o *)sub_B170CC(
                                                         RestockServantLogic___c__DisplayClass21_0_TypeInfo,
                                                         isEnemy,
                                                         battleData,
                                                         method,
                                                         v4);
  RestockServantLogic___c__DisplayClass21_0___ctor(v17, 0LL);
  if ( !v17 || (v17->fields.fieldMemberIndex = fieldMemberIndex, v17->fields.isEnemy = isEnemy, !battleData) )
    sub_B170D4();
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_RestockServantLogic__bool__TypeInfo,
                                                                             v19,
                                                                             v20,
                                                                             v21,
                                                                             v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v17,
    Method_RestockServantLogic___c__DisplayClass21_0__DeactiveRestockLogic_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_RestockServantLogic__bool___ctor__);
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)RestockServantLogicList,
                                                         (System_Func_TSource__bool__o *)v23,
                                                         (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_RestockServantLogic___);
  v29 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v29 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_RestockServantLogic__TypeInfo,
                                                                                      v24,
                                                                                      v25,
                                                                                      v26,
                                                                                      v27);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__21_1,
      v32,
      Method_RestockServantLogic___c__DeactiveRestockLogic_b__21_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_RestockServantLogic___ctor__);
    v33 = RestockServantLogic___c_TypeInfo->static_fields;
    v33->__9__21_1 = (struct System_Action_RestockServantLogic__o *)_9__21_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__21_1,
      (System_Int32_array **)_9__21_1,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v28,
    (System_Action_T__o *)_9__21_1,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_RestockServantLogic___);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *__fastcall RestockServantLogic__GetImmediateRestockServant(
        int32_t fieldMemberIndex,
        bool isEnemy,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  RestockServantLogic___c__DisplayClass20_0_o *v13; // x20
  System_Collections_Generic_List_RestockServantLogic__o *RestockServantLogicList; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  peRenderTexture_ChangeLayerObject_o *v24; // x21
  int32_t v25; // w22
  bool v26; // w20

  if ( (byte_40FD385 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_RestockServantLogic__Find__, isEnemy);
    sub_B16FFC(&Method_System_Predicate_RestockServantLogic___ctor__, v8);
    sub_B16FFC(&System_Predicate_RestockServantLogic__TypeInfo, v9);
    sub_B16FFC(&RestockServantLogic_TypeInfo, v10);
    sub_B16FFC(&Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__, v11);
    sub_B16FFC(&RestockServantLogic___c__DisplayClass20_0_TypeInfo, v12);
    byte_40FD385 = 1;
  }
  v13 = (RestockServantLogic___c__DisplayClass20_0_o *)sub_B170CC(
                                                         RestockServantLogic___c__DisplayClass20_0_TypeInfo,
                                                         isEnemy,
                                                         battleData,
                                                         method,
                                                         v4);
  RestockServantLogic___c__DisplayClass20_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  v13->fields.fieldMemberIndex = fieldMemberIndex;
  v13->fields.isEnemy = isEnemy;
  if ( !battleData )
    goto LABEL_10;
  RestockServantLogicList = BattleData__GetRestockServantLogicList(battleData, 0LL);
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_RestockServantLogic__TypeInfo,
                                                                   v15,
                                                                   v16,
                                                                   v17,
                                                                   v18);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_RestockServantLogic___c__DisplayClass20_0__GetImmediateRestockServant_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_RestockServantLogic___ctor__);
  if ( !RestockServantLogicList )
    goto LABEL_10;
  v24 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)RestockServantLogicList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestockServantLogic__Find__);
  if ( !v24 )
  {
    v25 = v13->fields.fieldMemberIndex;
    v26 = v13->fields.isEnemy;
    v24 = (peRenderTexture_ChangeLayerObject_o *)sub_B170CC(RestockServantLogic_TypeInfo, v20, v21, v22, v23);
    System_Object___ctor((Il2CppObject *)v24, 0LL);
    LODWORD(v24->fields.gameObject) = 0;
    HIDWORD(v24->fields.gameObject) = v25;
    LOBYTE(v24->fields.renderer) = v26;
    BYTE1(v24->fields.renderer) = 1;
  }
  if ( !v24 )
LABEL_10:
    sub_B170D4();
  return (BattleServantData_o *)((__int64 (__fastcall *)(peRenderTexture_ChangeLayerObject_o *, BattleData_o *, const char *))v24->klass[1]._1.gc_desc)(
                                  v24,
                                  battleData,
                                  v24->klass[1]._1.name);
}


System_Int32_array *__fastcall RestockServantLogic__GetRandomEntryOrderDecidedArray(
        System_Int32_array *baseArray,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x8
  __int64 v27; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Func_int__bool__o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int32_array *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  System_Int32_array *v42; // x19
  RestockServantLogic___c_c *v43; // x8
  struct RestockServantLogic___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__22_1; // x21
  Il2CppObject *v46; // x22
  struct RestockServantLogic___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Shuffle_int; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0

  if ( (byte_40FD387 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleRandom_getShuffle_int___, battleData);
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__, v12);
    sub_B16FFC(&Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__, v13);
    sub_B16FFC(&RestockServantLogic___c__DisplayClass22_0_TypeInfo, v14);
    sub_B16FFC(&RestockServantLogic___c_TypeInfo, v15);
    byte_40FD387 = 1;
  }
  v16 = sub_B170CC(RestockServantLogic___c__DisplayClass22_0_TypeInfo, battleData, method, v3, v4);
  RestockServantLogic___c__DisplayClass22_0___ctor((RestockServantLogic___c__DisplayClass22_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_19;
  *(_QWORD *)(v16 + 16) = baseArray;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)baseArray, v17, v18, v19, v20, v21, v22);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v16 + 16), 0LL);
  v26 = *(_QWORD *)(v16 + 16);
  if ( IsNullOrEmpty )
    return *(System_Int32_array **)(v16 + 16);
  if ( !v26 )
    goto LABEL_19;
  v27 = *(_QWORD *)(v26 + 24);
  if ( !(_DWORD)v27 )
  {
    sub_B17100(IsNullOrEmpty, v24, v25);
    sub_B170A0();
  }
  if ( (*(_DWORD *)(v26 + (((v27 << 32) - 0x100000000LL) >> 30) + 32) & 0x80000000) == 0 )
    return *(System_Int32_array **)(v16 + 16);
  if ( !battleData )
LABEL_19:
    sub_B170D4();
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(
                                                               0,
                                                               battleData->fields._EnemyFieldPosCount_k__BackingField,
                                                               0LL);
  v34 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v30, v31, v32, v33);
  System_Func_int__bool____ctor(
    v34,
    (Il2CppObject *)v16,
    Method_RestockServantLogic___c__DisplayClass22_0__GetRandomEntryOrderDecidedArray_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  v35 = System_Linq_Enumerable__Where_int_(
          v29,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  v36 = System_Linq_Enumerable__ToArray_int_(
          v35,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  v41 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 16);
  v42 = v36;
  v43 = RestockServantLogic___c_TypeInfo;
  if ( (BYTE3(RestockServantLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogic___c_TypeInfo);
    v43 = RestockServantLogic___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__22_1 = static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = RestockServantLogic___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__22_1 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v37, v38, v39, v40);
    System_Func_int__bool____ctor(
      _9__22_1,
      v46,
      Method_RestockServantLogic___c__GetRandomEntryOrderDecidedArray_b__22_1__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v47 = RestockServantLogic___c_TypeInfo->static_fields;
    v47->__9__22_1 = _9__22_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v47->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = System_Linq_Enumerable__Where_int_(
          v41,
          (System_Func_TSource__bool__o *)_9__22_1,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  Shuffle_int = (System_Collections_Generic_IEnumerable_TSource__o *)BattleRandom__getShuffle_int_(
                                                                       v42,
                                                                       (const MethodInfo_18BA0D4 *)Method_BattleRandom_getShuffle_int___);
  v56 = System_Linq_Enumerable__Concat_int_(
          v54,
          Shuffle_int,
          (const MethodInfo_18D16C4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v56,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F742D & 1) == 0 )
  {
    sub_B16FFC(&RestockServantLogic___c_TypeInfo, v1);
    byte_40F742D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(RestockServantLogic___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestockServantLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  if ( (byte_40F742E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&i);
    byte_40F742E = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseArray,
            i,
            (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}