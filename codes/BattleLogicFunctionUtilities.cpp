void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_array *targetSvtArray,
        System_Func_BattleServantData__BattleServantSnapShot__o *svtSnapShotGenerator,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438D925 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___);
    sub_B775C4(&Method_System_Func_BattleServantData__FunctionProgressCache_SvtCache___ctor__);
    sub_B775C4(&System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo);
    sub_B775C4(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__);
    byte_438D925 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SvtSnapShotGenerator_k__BackingField = svtSnapShotGenerator;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._SvtSnapShotGenerator_k__BackingField,
    (System_Int32_array **)svtSnapShotGenerator,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__,
    (const MethodInfo_29EAA10 *)Method_System_Func_BattleServantData__FunctionProgressCache_SvtCache___ctor__);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetSvtArray,
                                                               (System_Func_TSource__TResult__o *)v13,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___);
  v15 = (struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                      v14,
                                                                                      (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___);
  this->fields._SvtCacheArray_k__BackingField = v15;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SvtCacheArray_k__BackingField; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_438D928 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___);
    sub_B775C4(&Method_System_Func_FunctionProgressCache_SvtCache__bool___ctor__);
    sub_B775C4(&System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo);
    sub_B775C4(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__);
    sub_B775C4(&BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo);
    byte_438D928 = 1;
  }
  v5 = (BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_o *)sub_B77694(BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.svtUniqueId = svtUniqueId;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SvtCacheArray_k__BackingField;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_FunctionProgressCache_SvtCache__bool___ctor__);
  return (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                            SvtCacheArray_k__BackingField,
                                                                            (System_Func_TSource__bool__o *)v9,
                                                                            (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *SvtCacheArray_k__BackingField; // x19
  BattleLogicFunctionUtilities_FunctionProgressCache___c_c *v4; // x0
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__9_0; // x20
  Il2CppObject *v7; // x21
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438D927 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_FunctionProgressCache_SvtCache___ctor__);
    sub_B775C4(&System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
    sub_B775C4(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__);
    sub_B775C4(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    byte_438D927 = 1;
  }
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._SvtCacheArray_k__BackingField;
  v4 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    v4 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__9_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__9_0,
      v7,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_FunctionProgressCache_SvtCache___ctor__);
    v8 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    v8->__9__9_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__9_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__9_0,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *SvtCacheArray_k__BackingField; // x19
  BattleLogicFunctionUtilities_FunctionProgressCache___c_c *v4; // x0
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__8_0; // x20
  Il2CppObject *v7; // x21
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438D926 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_FunctionProgressCache_SvtCache___ctor__);
    sub_B775C4(&System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
    sub_B775C4(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__);
    sub_B775C4(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    byte_438D926 = 1;
  }
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._SvtCacheArray_k__BackingField;
  v4 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    v4 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__8_0,
      v7,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_FunctionProgressCache_SvtCache___ctor__);
    v8 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    v8->__9__8_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__8_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache____ctor_b__7_0(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v5; // x21

  if ( (byte_438D929 & 1) == 0 )
  {
    sub_B775C4(&BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo);
    byte_438D929 = 1;
  }
  v5 = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)sub_B77694(BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache___ctor(v5, this, x, 0LL);
  return v5;
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache__get_SvtCacheArray(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtCacheArray_k__BackingField;
}


System_Func_BattleServantData__BattleServantSnapShot__o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache__get_SvtSnapShotGenerator(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtSnapShotGenerator_k__BackingField;
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_o *root,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.root = root;
  sub_B77560(&this->fields);
  this->fields._SvtData_k__BackingField = svtData;
  sub_B77560(&this->fields._SvtData_k__BackingField);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v2; // x19
  struct BattleLogicFunctionUtilities_FunctionProgressCache_o *root; // x8

  v2 = this;
  if ( (byte_43880A6 & 1) == 0 )
  {
    this = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)sub_B775C4(&Method_System_Func_BattleServantData__BattleServantSnapShot__Invoke__);
    byte_43880A6 = 1;
  }
  root = v2->fields.root;
  if ( !root
    || (this = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)root->fields._SvtSnapShotGenerator_k__BackingField) == 0LL )
  {
    sub_B7769C(this, method);
  }
  v2->fields._After_k__BackingField = (struct BattleServantSnapShot_o *)System_Func_string__string___Invoke(
                                                                          (System_Func_string__string__o *)this,
                                                                          (System_String_o *)v2->fields._SvtData_k__BackingField,
                                                                          (const MethodInfo_29EAA24 *)Method_System_Func_BattleServantData__BattleServantSnapShot__Invoke__);
  sub_B77560(&v2->fields._After_k__BackingField);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeBeforeCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v2; // x19
  struct BattleLogicFunctionUtilities_FunctionProgressCache_o *root; // x8

  v2 = this;
  if ( (byte_43880A5 & 1) == 0 )
  {
    this = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)sub_B775C4(&Method_System_Func_BattleServantData__BattleServantSnapShot__Invoke__);
    byte_43880A5 = 1;
  }
  root = v2->fields.root;
  if ( !root
    || (this = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)root->fields._SvtSnapShotGenerator_k__BackingField) == 0LL )
  {
    sub_B7769C(this, method);
  }
  v2->fields._Before_k__BackingField = (struct BattleServantSnapShot_o *)System_Func_string__string___Invoke(
                                                                           (System_Func_string__string__o *)this,
                                                                           (System_String_o *)v2->fields._SvtData_k__BackingField,
                                                                           (const MethodInfo_29EAA24 *)Method_System_Func_BattleServantData__BattleServantSnapShot__Invoke__);
  sub_B77560(&v2->fields._Before_k__BackingField);
}


BattleServantSnapShot_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_After(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._After_k__BackingField;
}


BattleServantSnapShot_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_Before(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._Before_k__BackingField;
}


BattleServantData_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_SvtData(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtData_k__BackingField;
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__set_After(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  this->fields._After_k__BackingField = value;
  sub_B77560(&this->fields._After_k__BackingField);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__set_Before(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  this->fields._Before_k__BackingField = value;
  sub_B77560(&this->fields._Before_k__BackingField);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x0

  if ( (byte_43880A4 & 1) == 0 )
  {
    sub_B775C4(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    byte_43880A4 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicFunctionUtilities_FunctionProgressCache___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___MakeAfterSvtCache_b__9_0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(x, (const MethodInfo *)x);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___MakeBeforeSvtCache_b__8_0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeBeforeCache(x, (const MethodInfo *)x);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0___GetElemByUniqueId_b__0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *SvtData_k__BackingField; // x8

  if ( !x || (SvtData_k__BackingField = x->fields._SvtData_k__BackingField) == 0LL )
    sub_B7769C(this, x);
  return SvtData_k__BackingField->fields.uniqueId == this->fields.svtUniqueId;
}